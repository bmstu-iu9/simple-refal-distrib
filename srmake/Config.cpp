// This file automatically generated from 'Config.sref'
// Don't edit! Edit 'Config.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_115034689_1940385689
static const refalrts::IdentReference ident_CppCompilerExe("CppCompilerExe");
static const refalrts::IdentReference ident_CppCompilerLib("CppCompilerLib");
static const refalrts::IdentReference ident_DefaultEXE("DefaultEXE");
static const refalrts::IdentReference ident_DefaultTarget("DefaultTarget");
static const refalrts::IdentReference ident_Fails("Fails");
static const refalrts::IdentReference ident_Folders("Folders");
static const refalrts::IdentReference ident_Incorporateds("Incorporateds");
static const refalrts::IdentReference ident_ManySourceFiles("ManySourceFiles");
static const refalrts::IdentReference ident_NotSet("NotSet");
static const refalrts::IdentReference ident_Prefix("Prefix");
static const refalrts::IdentReference ident_Prelude("Prelude");
static const refalrts::IdentReference ident_References("References");
static const refalrts::IdentReference ident_Runtime("Runtime");
static const refalrts::IdentReference ident_Search("Search");
static const refalrts::IdentReference ident_SourceFile("SourceFile");
static const refalrts::IdentReference ident_SrefCompiler("SrefCompiler");
static const refalrts::IdentReference ident_Success("Success");
static const refalrts::IdentReference ident_TargetFileName("TargetFileName");
static const refalrts::IdentReference ident_TargetMode("TargetMode");
static const refalrts::IdentReference ident_TargetModeAlreadySet("TargetModeAlreadySet");
static refalrts::ExternalReference ref_Config("Config", 115034689U, 1940385689U);
static refalrts::ExternalReference ref_Configm_AddFolder("Config-AddFolder", 0U, 0U);
static refalrts::ExternalReference ref_Configm_AddIncorporated("Config-AddIncorporated", 0U, 0U);
static refalrts::ExternalReference ref_Configm_AddReference("Config-AddReference", 0U, 0U);
static refalrts::ExternalReference ref_Configm_AddRuntimeFile("Config-AddRuntimeFile", 0U, 0U);
static refalrts::ExternalReference ref_Configm_AddSrefCompilerFlag("Config-AddSrefCompilerFlag", 0U, 0U);
static refalrts::ExternalReference ref_Configm_Create("Config-Create", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetCppCompilerExe("Config-GetCppCompilerExe", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetCppCompilerLib("Config-GetCppCompilerLib", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetFolders("Config-GetFolders", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetIncorporateds("Config-GetIncorporateds", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetPrefix("Config-GetPrefix", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetPrelude("Config-GetPrelude", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetReferences("Config-GetReferences", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetRuntimeFiles("Config-GetRuntimeFiles", 0U, 0U);
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

static refalrts::FnResult func_Configm_Create(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
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
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & Config/4 HalfReuse: (/1 } # CppCompilerExe/5 )/6 (/7 # CppCompilerLib/8 )/9 (/10 # Folders/11 )/12 (/13 # SrefCompiler/14 (/15"srefc-core"/16 )/18 )/19 (/20 # TargetFileName/21 # DefaultTarget/22 )/23 (/24 # SourceFile/25 # NotSet/26 )/27 (/28 # Prefix/29 # NotSet/30 )/31 (/32 # References/33 )/34 (/35 # TargetMode/36 # DefaultEXE/37 )/38 (/39 # Prelude/40 )/41 (/42 # Runtime/43 )/44 (/45 # Incorporateds/46 )/47 ]/48 Tile{ ]] }
  if( ! refalrts::alloc_ident( vm, context[5], ident_CppCompilerExe.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[8], ident_CppCompilerLib.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[11], ident_Folders.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[14], ident_SrefCompiler.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[16], context[17], "srefc-core", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[21], ident_TargetFileName.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[22], ident_DefaultTarget.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[25], ident_SourceFile.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[26], ident_NotSet.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[29], ident_Prefix.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[30], ident_NotSet.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[33], ident_References.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[36], ident_TargetMode.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[37], ident_DefaultEXE.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[40], ident_Prelude.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[43], ident_Runtime.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[44] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[46], ident_Incorporateds.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( vm, context[48] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_adt( context[0] );
  refalrts::update_name( context[4], ref_Config.ref(vm) );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::link_brackets( context[0], context[48] );
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
  res = refalrts::splice_evar( res, context[5], context[48] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_Create("Config-Create", 0U, 0U, func_Configm_Create);


static refalrts::FnResult func_Configm_GetCppCompilerExe(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_CppCompilerExe.ref(vm), context[14], context[15] );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_CppCompilerExe.ref(vm), context[14], context[15] );
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
    refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_CppCompilerLib.ref(vm), context[14], context[15] );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_CppCompilerLib.ref(vm), context[14], context[15] );
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
    refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_Folders.ref(vm), context[14], context[15] );
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
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Config-AddFolder/4 [/7Config/8 e.Params-B#1/13 (/19 # Folders/21 e.Folders#1/17 )/20 e.Params-E#1/15 ]/9 # Search/10 e.Path#1/2 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term(  ident_Search.ref(vm), context[10] ) )
      continue;
    // closed e.Path#1 as range 2
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
      context[21] = refalrts::ident_left(  ident_Folders.ref(vm), context[17], context[18] );
      if( ! context[21] )
        continue;
      // closed e.Folders#1 as range 17
      // closed e.Params-E#1 as range 15
      //DEBUG: e.Path#1: 2
      //DEBUG: e.Params-B#1: 13
      //DEBUG: e.Folders#1: 17
      //DEBUG: e.Params-E#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/13 AsIs: (/19 AsIs: # Folders/21 AsIs: e.Folders#1/17 HalfReuse: (/20 } Tile{ AsIs: # Search/10 AsIs: e.Path#1/2 HalfReuse: )/1 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/15 } Tile{ AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
      refalrts::reinit_open_bracket( context[20] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::reinit_close_bracket( context[0] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[19], context[0] );
      refalrts::link_brackets( context[20], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[10], context[1] );
      res = refalrts::splice_evar( res, context[4], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-AddFolder/4 [/7Config/8 e.Params-B#1/11 (/17 # Folders/19 e.Folders#1/15 )/18 e.Params-E#1/13 ]/9 # Runtime/10 e.Path#1/2 >/1
  if( ! refalrts::ident_term(  ident_Runtime.ref(vm), context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Path#1 as range 2
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
    context[19] = refalrts::ident_left(  ident_Folders.ref(vm), context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Folders#1 as range 15
    // closed e.Params-E#1 as range 13
    //DEBUG: e.Path#1: 2
    //DEBUG: e.Params-B#1: 11
    //DEBUG: e.Folders#1: 15
    //DEBUG: e.Params-E#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/11 AsIs: (/17 AsIs: # Folders/19 AsIs: e.Folders#1/15 HalfReuse: (/18 } Tile{ AsIs: # Runtime/10 AsIs: e.Path#1/2 HalfReuse: )/1 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/13 } Tile{ AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[17], context[0] );
    refalrts::link_brackets( context[18], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_AddFolder("Config-AddFolder", 0U, 0U, func_Configm_AddFolder);


static refalrts::FnResult func_Configm_GetSrefCompiler(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_SrefCompiler.ref(vm), context[14], context[15] );
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
    //TRASH: {REMOVED TILE} </0 & Config-GetSrefCompiler/4 [/7Config/8 e.Params-B#1/10 (/16 # SrefCompiler/18 (/21 {REMOVED TILE} )/22 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
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

static refalrts::NativeReference nat_ref_Configm_GetSrefCompiler("Config-GetSrefCompiler", 0U, 0U, func_Configm_GetSrefCompiler);


static refalrts::FnResult func_Configm_SetSrefCompiler(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.SrefCompiler#1 as range 2
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
    context[18] = refalrts::ident_left(  ident_SrefCompiler.ref(vm), context[14], context[15] );
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

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldCompiler#1/19 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # SrefCompiler/18 AsIs: (/21 } Tile{ AsIs: e.SrefCompiler#1/2 } Tile{ AsIs: )/22 AsIs: e.Flags#1/14 AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
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

static refalrts::NativeReference nat_ref_Configm_SetSrefCompiler("Config-SetSrefCompiler", 0U, 0U, func_Configm_SetSrefCompiler);


static refalrts::FnResult func_Configm_AddSrefCompilerFlag(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_SrefCompiler.ref(vm), context[14], context[15] );
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

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # SrefCompiler/18 AsIs: t.SrefCompiler#1/19 AsIs: e.Flags#1/14 HalfReuse: ' '/17 } Tile{ HalfReuse: '\"'/9 AsIs: e.NewFlags#1/2 HalfReuse: '\"'/1 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/12 } ]/21 Tile{ ]] }
    if( ! refalrts::alloc_close_adt( vm, context[21] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
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


static refalrts::FnResult func_Configm_GetTargetFileName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_TargetFileName.ref(vm), context[14], context[15] );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_TargetFileName.ref(vm), context[14], context[15] );
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
    refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_SourceFile.ref(vm), context[14], context[15] );
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
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Config-SetSourceFile/4 [/7Config/8 e.Params-B#1/12 (/18 # SourceFile/20 # NotSet/21 )/19 e.Params-E#1/14 ]/9 e.SourceFile#1/2 >/1
    context[10] = context[5];
    context[11] = context[6];
    // closed e.SourceFile#1 as range 2
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
      context[20] = refalrts::ident_left(  ident_SourceFile.ref(vm), context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = refalrts::ident_left(  ident_NotSet.ref(vm), context[16], context[17] );
      if( ! context[21] )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.Params-E#1 as range 14
      //DEBUG: e.SourceFile#1: 2
      //DEBUG: e.Params-B#1: 12
      //DEBUG: e.Params-E#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} # NotSet/21 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/12 AsIs: (/18 AsIs: # SourceFile/20 } Tile{ AsIs: e.SourceFile#1/2 } Tile{ AsIs: )/19 AsIs: e.Params-E#1/14 AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[9] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[4], context[20] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
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
    context[18] = refalrts::ident_left(  ident_SourceFile.ref(vm), context[14], context[15] );
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
    refalrts::reinit_ident( context[0], ident_Fails.ref(vm) );
    refalrts::reinit_ident( context[4], ident_ManySourceFiles.ref(vm) );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_Prefix.ref(vm), context[14], context[15] );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_Prefix.ref(vm), context[14], context[15] );
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
    refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_References.ref(vm), context[14], context[15] );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_References.ref(vm), context[14], context[15] );
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
    refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
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


static refalrts::FnResult func_Configm_GetTargetMode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_TargetMode.ref(vm), context[14], context[15] );
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
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Config-SetTargetMode/4 [/7Config/8 e.new#3/5 ]/9 s.new#4/12 >/1
    context[10] = context[2];
    context[11] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    do {
      // </0 & Config-SetTargetMode/4 [/7Config/8 e.Params-B#1/15 (/21 # TargetMode/23 # DefaultEXE/24 )/22 e.Params-E#1/17 ]/9 s.NewTargetMode#1/12 >/1
      context[13] = context[5];
      context[14] = context[6];
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
        context[23] = refalrts::ident_left(  ident_TargetMode.ref(vm), context[19], context[20] );
        if( ! context[23] )
          continue;
        context[24] = refalrts::ident_left(  ident_DefaultEXE.ref(vm), context[19], context[20] );
        if( ! context[24] )
          continue;
        if( ! refalrts::empty_seq( context[19], context[20] ) )
          continue;
        // closed e.Params-E#1 as range 17
        //DEBUG: s.NewTargetMode#1: 12
        //DEBUG: e.Params-B#1: 15
        //DEBUG: e.Params-E#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.NewTargetMode#1/12 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/15 AsIs: (/21 AsIs: # TargetMode/23 HalfReuse: s.NewTargetMode1 #12/24 AsIs: )/22 AsIs: e.Params-E#1/17 AsIs: ]/9 } Tile{ ]] }
        refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
        refalrts::reinit_svar( context[24], context[12] );
        refalrts::link_brackets( context[7], context[9] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[4], context[9] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[15], context[16], context[13], context[14] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Config-SetTargetMode/4 [/7Config/8 e.Params-B#1/15 (/21 # TargetMode/23 s.TargetMode#1/24 )/22 e.Params-E#1/17 ]/9 s.TargetMode#1/12 >/1
    context[13] = context[5];
    context[14] = context[6];
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
      context[23] = refalrts::ident_left(  ident_TargetMode.ref(vm), context[19], context[20] );
      if( ! context[23] )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[24], context[12], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.Params-E#1 as range 17
      //DEBUG: s.TargetMode#1: 12
      //DEBUG: e.Params-B#1: 15
      //DEBUG: e.Params-E#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.TargetMode#1/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/15 AsIs: (/21 AsIs: # TargetMode/23 AsIs: s.TargetMode#1/24 AsIs: )/22 AsIs: e.Params-E#1/17 AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[13], context[14] ) );
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
    context[18] = refalrts::ident_left(  ident_TargetMode.ref(vm), context[14], context[15] );
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
    refalrts::reinit_ident( context[0], ident_Fails.ref(vm) );
    refalrts::reinit_ident( context[4], ident_TargetModeAlreadySet.ref(vm) );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_Prelude.ref(vm), context[14], context[15] );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_Prelude.ref(vm), context[14], context[15] );
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
    refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_Runtime.ref(vm), context[14], context[15] );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_Runtime.ref(vm), context[14], context[15] );
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
    refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
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

static refalrts::NativeReference nat_ref_Configm_AddRuntimeFile("Config-AddRuntimeFile", 0U, 0U, func_Configm_AddRuntimeFile);


static refalrts::FnResult func_Configm_GetIncorporateds(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_Incorporateds.ref(vm), context[14], context[15] );
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_Config.ref(vm), context[2], context[3] );
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
    context[18] = refalrts::ident_left(  ident_Incorporateds.ref(vm), context[14], context[15] );
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
    refalrts::reinit_ident( context[4], ident_Success.ref(vm) );
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

static refalrts::NativeReference nat_ref_Configm_AddIncorporated("Config-AddIncorporated", 0U, 0U, func_Configm_AddIncorporated);


//End of file
