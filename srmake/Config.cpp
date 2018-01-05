// This file automatically generated from 'Config.sref'
// Don't edit! Edit 'Config.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2591998108_1462205015
static const refalrts::RefalIdentifier ident_CppCompilerExe = refalrts::ident_from_static("CppCompilerExe");
static const refalrts::RefalIdentifier ident_CppCompilerLib = refalrts::ident_from_static("CppCompilerLib");
static const refalrts::RefalIdentifier ident_DefaultEXE = refalrts::ident_from_static("DefaultEXE");
static const refalrts::RefalIdentifier ident_DefaultTarget = refalrts::ident_from_static("DefaultTarget");
static const refalrts::RefalIdentifier ident_Fails = refalrts::ident_from_static("Fails");
static const refalrts::RefalIdentifier ident_Folders = refalrts::ident_from_static("Folders");
static const refalrts::RefalIdentifier ident_ManySourceFiles = refalrts::ident_from_static("ManySourceFiles");
static const refalrts::RefalIdentifier ident_NotSet = refalrts::ident_from_static("NotSet");
static const refalrts::RefalIdentifier ident_Prefix = refalrts::ident_from_static("Prefix");
static const refalrts::RefalIdentifier ident_Prelude = refalrts::ident_from_static("Prelude");
static const refalrts::RefalIdentifier ident_References = refalrts::ident_from_static("References");
static const refalrts::RefalIdentifier ident_Runtime = refalrts::ident_from_static("Runtime");
static const refalrts::RefalIdentifier ident_Search = refalrts::ident_from_static("Search");
static const refalrts::RefalIdentifier ident_SourceFile = refalrts::ident_from_static("SourceFile");
static const refalrts::RefalIdentifier ident_SrefCompiler = refalrts::ident_from_static("SrefCompiler");
static const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
static const refalrts::RefalIdentifier ident_TargetFileName = refalrts::ident_from_static("TargetFileName");
static const refalrts::RefalIdentifier ident_TargetMode = refalrts::ident_from_static("TargetMode");
static const refalrts::RefalIdentifier ident_TargetModeAlreadySet = refalrts::ident_from_static("TargetModeAlreadySet");
static refalrts::ExternalReference ref_Config("Config", 2591998108U, 1462205015U);
static refalrts::ExternalReference ref_Configm_AddFolder("Config-AddFolder", 0U, 0U);
static refalrts::ExternalReference ref_Configm_AddReference("Config-AddReference", 0U, 0U);
static refalrts::ExternalReference ref_Configm_AddSrefCompilerFlag("Config-AddSrefCompilerFlag", 0U, 0U);
static refalrts::ExternalReference ref_Configm_Create("Config-Create", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetCppCompilerExe("Config-GetCppCompilerExe", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetCppCompilerLib("Config-GetCppCompilerLib", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetFolders("Config-GetFolders", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetPrefix("Config-GetPrefix", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetPrelude("Config-GetPrelude", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetReferences("Config-GetReferences", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetSourceFile("Config-GetSourceFile", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetSrefCompiler("Config-GetSrefCompiler", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetTargetFileName("Config-GetTargetFileName", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetTargetMode("Config-GetTargetMode", 0U, 0U);
static refalrts::ExternalReference ref_Configm_SetCppCompilerExe("Config-SetCppCompilerExe", 0U, 0U);
static refalrts::ExternalReference ref_Configm_SetCppCompilerLib("Config-SetCppCompilerLib", 0U, 0U);
static refalrts::ExternalReference ref_Configm_SetPrefix("Config-SetPrefix", 0U, 0U);
static refalrts::ExternalReference ref_Configm_SetPrelude("Config-SetPrelude", 0U, 0U);
static refalrts::ExternalReference ref_Configm_SetSourceFile("Config-SetSourceFile", 0U, 0U);
static refalrts::ExternalReference ref_Configm_SetSrefCompiler("Config-SetSrefCompiler", 0U, 0U);
static refalrts::ExternalReference ref_Configm_SetTargetFileName("Config-SetTargetFileName", 0U, 0U);
static refalrts::ExternalReference ref_Configm_SetTargetMode("Config-SetTargetMode", 0U, 0U);

static refalrts::FnResult func_Configm_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & Config-Create/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & Config/4 HalfReuse: (/1 } # CppCompilerExe/5 )/6 (/7 # CppCompilerLib/8 )/9 (/10 # Folders/11 )/12 (/13 # SrefCompiler/14 (/15"srefc-core"/16 )/18 )/19 (/20 # TargetFileName/21 # DefaultTarget/22 )/23 (/24 # SourceFile/25 # NotSet/26 )/27 (/28 # Prefix/29 # NotSet/30 )/31 (/32 # References/33 )/34 (/35 # TargetMode/36 # DefaultEXE/37 )/38 (/39 # Prelude/40 )/41 ]/42 Tile{ ]] }
  if( ! refalrts::alloc_ident( context[5], ident_CppCompilerExe ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[8], ident_CppCompilerLib ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[11], ident_Folders ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], ident_SrefCompiler ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[16], context[17], "srefc-core", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[21], ident_TargetFileName ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[22], ident_DefaultTarget ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[25], ident_SourceFile ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[26], ident_NotSet ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[29], ident_Prefix ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[30], ident_NotSet ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[33], ident_References ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[36], ident_TargetMode ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[37], ident_DefaultEXE ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[40], ident_Prelude ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[42] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_adt( context[0] );
  refalrts::update_name( context[4], ref_Config.ref.function );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::link_brackets( context[0], context[42] );
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
  res = refalrts::splice_evar( res, context[5], context[42] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_Create("Config-Create", 0U, 0U, func_Configm_Create);


static refalrts::FnResult func_Configm_GetCppCompilerExe(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_CppCompilerExe, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.CppCompilerExe#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.CppCompilerExe#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetCppCompilerExe/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompilerExe/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.CppCompilerExe#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetCppCompilerExe("Config-GetCppCompilerExe", 0U, 0U, func_Configm_GetCppCompilerExe);


static refalrts::FnResult func_Configm_SetCppCompilerExe(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.CppCompilerExe#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_CppCompilerExe, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldCppCompilerExe#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.CppCompilerExe#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldCppCompilerExe#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldCppCompilerExe#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # CppCompilerExe/18 } Tile{ AsIs: e.CppCompilerExe#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetCppCompilerExe("Config-SetCppCompilerExe", 0U, 0U, func_Configm_SetCppCompilerExe);


static refalrts::FnResult func_Configm_GetCppCompilerLib(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_CppCompilerLib, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.CppCompilerLib#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.CppCompilerLib#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetCppCompilerLib/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompilerLib/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.CppCompilerLib#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetCppCompilerLib("Config-GetCppCompilerLib", 0U, 0U, func_Configm_GetCppCompilerLib);


static refalrts::FnResult func_Configm_SetCppCompilerLib(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.CppCompilerLib#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_CppCompilerLib, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldCppCompilerLib#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.CppCompilerLib#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldCppCompilerLib#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldCppCompilerLib#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # CppCompilerLib/18 } Tile{ AsIs: e.CppCompilerLib#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetCppCompilerLib("Config-SetCppCompilerLib", 0U, 0U, func_Configm_SetCppCompilerLib);


static refalrts::FnResult func_Configm_GetFolders(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_Folders, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Folders#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Folders#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetFolders/4 [/7Config/8 e.Params-B#1/10 (/16 # Folders/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Folders#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetFolders("Config-GetFolders", 0U, 0U, func_Configm_GetFolders);


static refalrts::FnResult func_Configm_AddFolder(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: [Config e.$ ] s.$ e.$
  //GLOBAL GEN: [Config e.$ ] s.$ e.$
  // </0 & Config-AddFolder/4 [/7Config/8 e.idxD#0/5 ]/9 s.idxt#0/10 e.idxtV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.idxD#0 as range 5
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxtV#0 as range 2
  do {
    // [Config e.idx ] # Search e.idx
    // </0 & Config-AddFolder/4 [/7Config/8 e.Params-B#1/15 (/21 # Folders/23 e.Folders#1/19 )/22 e.Params-E#1/17 ]/9 # Search/10 e.Path#1/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term(  ident_Search, context[10] ) )
      continue;
    // closed e.Path#1 as range 13
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      context[23] = refalrts::ident_left(  ident_Folders, context[19], context[20] );
      if( ! context[23] )
        continue;
      // closed e.Folders#1 as range 19
      // closed e.Params-E#1 as range 17
      //DEBUG: e.Path#1: 13
      //DEBUG: e.Params-B#1: 15
      //DEBUG: e.Folders#1: 19
      //DEBUG: e.Params-E#1: 17

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/15 AsIs: (/21 AsIs: # Folders/23 AsIs: e.Folders#1/19 HalfReuse: (/22 } Tile{ AsIs: # Search/10 AsIs: e.Path#1/13 HalfReuse: )/1 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/17 } Tile{ AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident( context[4], ident_Success );
      refalrts::reinit_open_bracket( context[22] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::reinit_close_bracket( context[0] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[21], context[0] );
      refalrts::link_brackets( context[22], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[10], context[1] );
      res = refalrts::splice_evar( res, context[4], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // [Config e.idx ] # Runtime e.idx
  // </0 & Config-AddFolder/4 [/7Config/8 e.Params-B#1/15 (/21 # Folders/23 e.Folders#1/19 )/22 e.Params-E#1/17 ]/9 # Runtime/10 e.Path#1/13 >/1
  context[11] = context[5];
  context[12] = context[6];
  context[13] = context[2];
  context[14] = context[3];
  if( ! refalrts::ident_term(  ident_Runtime, context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Path#1 as range 13
  context[15] = 0;
  context[16] = 0;
  refalrts::start_e_loop();
  do {
    context[17] = context[11];
    context[18] = context[12];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  ident_Folders, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.Folders#1 as range 19
    // closed e.Params-E#1 as range 17
    //DEBUG: e.Path#1: 13
    //DEBUG: e.Params-B#1: 15
    //DEBUG: e.Folders#1: 19
    //DEBUG: e.Params-E#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/15 AsIs: (/21 AsIs: # Folders/23 AsIs: e.Folders#1/19 HalfReuse: (/22 } Tile{ AsIs: # Runtime/10 AsIs: e.Path#1/13 HalfReuse: )/1 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/17 } Tile{ AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[21], context[0] );
    refalrts::link_brackets( context[22], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[4], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[15], context[16], context[11], context[12] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_AddFolder("Config-AddFolder", 0U, 0U, func_Configm_AddFolder);


static refalrts::FnResult func_Configm_GetSrefCompiler(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Config-GetSrefCompiler/4 [/7Config/8 e.Params-B#1/10 (/16 # SrefCompiler/18 (/21 e.Compiler#1/19 )/22 e.Flags#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_SrefCompiler, context[14], context[15] );
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetSrefCompiler/4 [/7Config/8 e.Params-B#1/10 (/16 # SrefCompiler/18 (/21 {REMOVED TILE} )/22 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Compiler#1/19 } Tile{ AsIs: e.Flags#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetSrefCompiler("Config-GetSrefCompiler", 0U, 0U, func_Configm_GetSrefCompiler);


static refalrts::FnResult func_Configm_SetSrefCompiler(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Config-SetSrefCompiler/4 [/7Config/8 e.Params-B#1/10 (/16 # SrefCompiler/18 (/21 e.OldCompiler#1/19 )/22 e.Flags#1/14 )/17 e.Params-E#1/12 ]/9 e.SrefCompiler#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.SrefCompiler#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_SrefCompiler, context[14], context[15] );
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
    //DEBUG: e.SrefCompiler#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldCompiler#1: 19
    //DEBUG: e.Flags#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldCompiler#1/19 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # SrefCompiler/18 AsIs: (/21 } Tile{ AsIs: e.SrefCompiler#1/2 } Tile{ AsIs: )/22 AsIs: e.Flags#1/14 AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[21] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetSrefCompiler("Config-SetSrefCompiler", 0U, 0U, func_Configm_SetSrefCompiler);


static refalrts::FnResult func_Configm_AddSrefCompilerFlag(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Config-AddSrefCompilerFlag/4 [/7Config/8 e.Params-B#1/10 (/16 # SrefCompiler/18 t.SrefCompiler#1/19 e.Flags#1/14 )/17 e.Params-E#1/12 ]/9 e.NewFlags#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.NewFlags#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_SrefCompiler, context[14], context[15] );
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
    //DEBUG: t.SrefCompiler#1: 19
    //DEBUG: e.Flags#1: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # SrefCompiler/18 AsIs: t.SrefCompiler#1/19 AsIs: e.Flags#1/14 HalfReuse: ' '/17 } Tile{ HalfReuse: '\"'/9 AsIs: e.NewFlags#1/2 HalfReuse: '\"'/1 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/12 } ]/21 Tile{ ]] }
    if( ! refalrts::alloc_close_adt( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::reinit_char( context[17], ' ' );
    refalrts::reinit_char( context[9], '\"' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::link_brackets( context[7], context[21] );
    refalrts::link_brackets( context[16], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[4], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_AddSrefCompilerFlag("Config-AddSrefCompilerFlag", 0U, 0U, func_Configm_AddSrefCompilerFlag);


static refalrts::FnResult func_Configm_GetTargetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_TargetFileName, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.TargetFileName#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.TargetFileName#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetTargetFileName/4 [/7Config/8 e.Params-B#1/10 (/16 # TargetFileName/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.TargetFileName#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetTargetFileName("Config-GetTargetFileName", 0U, 0U, func_Configm_GetTargetFileName);


static refalrts::FnResult func_Configm_SetTargetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.NewTargetFileName#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_TargetFileName, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldTargetFileName#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewTargetFileName#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldTargetFileName#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldTargetFileName#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # TargetFileName/18 } Tile{ AsIs: e.NewTargetFileName#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetTargetFileName("Config-SetTargetFileName", 0U, 0U, func_Configm_SetTargetFileName);


static refalrts::FnResult func_Configm_GetSourceFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_SourceFile, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.FileName#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.FileName#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetSourceFile/4 [/7Config/8 e.Params-B#1/10 (/16 # SourceFile/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.FileName#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetSourceFile("Config-GetSourceFile", 0U, 0U, func_Configm_GetSourceFile);


static refalrts::FnResult func_Configm_SetSourceFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: [Config e.$ ] e.$
  //GLOBAL GEN: [Config e.$ ] e.$
  // </0 & Config-SetSourceFile/4 [/7Config/8 e.idxD#0/5 ]/9 e.idxt#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.idxD#0 as range 5
  // closed e.idxt#0 as range 2
  do {
    // [Config e.idx ] e.idx
    // </0 & Config-SetSourceFile/4 [/7Config/8 e.Params-B#1/14 (/20 # SourceFile/22 # NotSet/23 )/21 e.Params-E#1/16 ]/9 e.SourceFile#1/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.SourceFile#1 as range 12
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[10];
      context[17] = context[11];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = refalrts::ident_left(  ident_SourceFile, context[18], context[19] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::ident_left(  ident_NotSet, context[18], context[19] );
      if( ! context[23] )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      // closed e.Params-E#1 as range 16
      //DEBUG: e.SourceFile#1: 12
      //DEBUG: e.Params-B#1: 14
      //DEBUG: e.Params-E#1: 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} # NotSet/23 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/14 AsIs: (/20 AsIs: # SourceFile/22 } Tile{ AsIs: e.SourceFile#1/12 } Tile{ AsIs: )/21 AsIs: e.Params-E#1/16 AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident( context[4], ident_Success );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[9] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[4], context[22] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // [Config e.idx ] e.idx
  // </0 & Config-SetSourceFile/4 [/7Config/8 e.Params-B#1/14 (/20 # SourceFile/22 e.OldSourceFile#1/18 )/21 e.Params-E#1/16 ]/9 e.SourceFile#1/12 >/1
  context[10] = context[5];
  context[11] = context[6];
  context[12] = context[2];
  context[13] = context[3];
  // closed e.SourceFile#1 as range 12
  context[14] = 0;
  context[15] = 0;
  refalrts::start_e_loop();
  do {
    context[16] = context[10];
    context[17] = context[11];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  ident_SourceFile, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.OldSourceFile#1 as range 18
    // closed e.Params-E#1 as range 16
    //DEBUG: e.SourceFile#1: 12
    //DEBUG: e.Params-B#1: 14
    //DEBUG: e.OldSourceFile#1: 18
    //DEBUG: e.Params-E#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} [/7Config/8 e.Params-B#1/14 (/20 # SourceFile/22 e.OldSourceFile#1/18 )/21 e.Params-E#1/16 ]/9 e.SourceFile#1/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: # ManySourceFiles/4 } Tile{ ]] }
    refalrts::reinit_ident( context[0], ident_Fails );
    refalrts::reinit_ident( context[4], ident_ManySourceFiles );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[14], context[15], context[10], context[11] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetSourceFile("Config-SetSourceFile", 0U, 0U, func_Configm_SetSourceFile);


static refalrts::FnResult func_Configm_GetPrefix(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_Prefix, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Prefix#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Prefix#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetPrefix/4 [/7Config/8 e.Params-B#1/10 (/16 # Prefix/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Prefix#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetPrefix("Config-GetPrefix", 0U, 0U, func_Configm_GetPrefix);


static refalrts::FnResult func_Configm_SetPrefix(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.NewPrefix#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_Prefix, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldPrefix#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewPrefix#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldPrefix#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldPrefix#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # Prefix/18 } Tile{ AsIs: e.NewPrefix#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetPrefix("Config-SetPrefix", 0U, 0U, func_Configm_SetPrefix);


static refalrts::FnResult func_Configm_GetReferences(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_References, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.References#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.References#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetReferences/4 [/7Config/8 e.Params-B#1/10 (/16 # References/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.References#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetReferences("Config-GetReferences", 0U, 0U, func_Configm_GetReferences);


static refalrts::FnResult func_Configm_AddReference(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.NewReference#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_References, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.References#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewReference#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.References#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # References/18 AsIs: e.References#1/14 HalfReuse: (/17 } Tile{ AsIs: e.NewReference#1/2 } Tile{ HalfReuse: )/9 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/12 } Tile{ HalfReuse: ]/1 ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::reinit_open_bracket( context[17] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_close_adt( context[1] );
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


static refalrts::FnResult func_Configm_GetTargetMode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_TargetMode, context[14], context[15] );
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetTargetMode/4 [/7Config/8 e.Params-B#1/10 (/16 # TargetMode/18 s.TargetMode#1/19 )/17 e.Params-E#1/12 ]/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.TargetMode1 #19/1 ]] }
    refalrts::reinit_svar( context[1], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetTargetMode("Config-GetTargetMode", 0U, 0U, func_Configm_GetTargetMode);


static refalrts::FnResult func_Configm_SetTargetMode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  //FAST GEN: [Config e.$ ] e.$
  //GLOBAL GEN: [Config e.$ ] e.$
  // </0 & Config-SetTargetMode/4 [/7Config/8 e.idxD#0/5 ]/9 e.idxt#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.idxD#0 as range 5
  // closed e.idxt#0 as range 2
  do {
    // [Config e.idx ] s.idx
    // </0 & Config-SetTargetMode/4 [/7Config/8 e.Params-B#1/15 (/21 # TargetMode/23 # DefaultEXE/24 )/22 e.Params-E#1/17 ]/9 s.NewTargetMode#1/14 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[10];
      context[18] = context[11];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      context[23] = refalrts::ident_left(  ident_TargetMode, context[19], context[20] );
      if( ! context[23] )
        continue;
      context[24] = refalrts::ident_left(  ident_DefaultEXE, context[19], context[20] );
      if( ! context[24] )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.Params-E#1 as range 17
      //DEBUG: s.NewTargetMode#1: 14
      //DEBUG: e.Params-B#1: 15
      //DEBUG: e.Params-E#1: 17

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.NewTargetMode#1/14 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/15 AsIs: (/21 AsIs: # TargetMode/23 HalfReuse: s.NewTargetMode1 #14/24 AsIs: )/22 AsIs: e.Params-E#1/17 AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident( context[4], ident_Success );
      refalrts::reinit_svar( context[24], context[14] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[9] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // [Config e.idx ] s.idx
    // </0 & Config-SetTargetMode/4 [/7Config/8 e.Params-B#1/15 (/21 # TargetMode/23 s.TargetMode#1/24 )/22 e.Params-E#1/17 ]/9 s.TargetMode#1/14 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[10];
      context[18] = context[11];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      context[23] = refalrts::ident_left(  ident_TargetMode, context[19], context[20] );
      if( ! context[23] )
        continue;
      if( ! refalrts::repeated_stvar_left( context[24], context[14], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.Params-E#1 as range 17
      //DEBUG: s.TargetMode#1: 14
      //DEBUG: e.Params-B#1: 15
      //DEBUG: e.Params-E#1: 17

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.TargetMode#1/14 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/15 AsIs: (/21 AsIs: # TargetMode/23 AsIs: s.TargetMode#1/24 AsIs: )/22 AsIs: e.Params-E#1/17 AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident( context[4], ident_Success );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[9] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // [Config e.idx ] e.idx
  // </0 & Config-SetTargetMode/4 [/7Config/8 e.Params-B#1/14 (/20 # TargetMode/22 s.OldTargetMode#1/23 )/21 e.Params-E#1/16 ]/9 e.NewTargetMode#1/12 >/1
  context[10] = context[5];
  context[11] = context[6];
  context[12] = context[2];
  context[13] = context[3];
  // closed e.NewTargetMode#1 as range 12
  context[14] = 0;
  context[15] = 0;
  refalrts::start_e_loop();
  do {
    context[16] = context[10];
    context[17] = context[11];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  ident_TargetMode, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Params-E#1 as range 16
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: e.NewTargetMode#1: 12
    //DEBUG: e.Params-B#1: 14
    //DEBUG: e.Params-E#1: 16
    //DEBUG: s.OldTargetMode#1: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} [/7Config/8 e.Params-B#1/14 (/20 # TargetMode/22 s.OldTargetMode#1/23 )/21 e.Params-E#1/16 ]/9 e.NewTargetMode#1/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: # TargetModeAlreadySet/4 } Tile{ ]] }
    refalrts::reinit_ident( context[0], ident_Fails );
    refalrts::reinit_ident( context[4], ident_TargetModeAlreadySet );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[14], context[15], context[10], context[11] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetTargetMode("Config-SetTargetMode", 0U, 0U, func_Configm_SetTargetMode);


static refalrts::FnResult func_Configm_GetPrelude(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_Prelude, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Prelude#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Prelude#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetPrelude/4 [/7Config/8 e.Params-B#1/10 (/16 # Prelude/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Prelude#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetPrelude("Config-GetPrelude", 0U, 0U, func_Configm_GetPrelude);


static refalrts::FnResult func_Configm_SetPrelude(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.NewPrelude#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_Prelude, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldPrelude#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewPrelude#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldPrelude#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldPrelude#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # Prelude/18 } Tile{ AsIs: e.NewPrelude#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetPrelude("Config-SetPrelude", 0U, 0U, func_Configm_SetPrelude);


//End of file
