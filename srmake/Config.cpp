// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_CppCompilerExe = refalrts::ident_from_static("CppCompilerExe");
const refalrts::RefalIdentifier ident_CppCompilerLib = refalrts::ident_from_static("CppCompilerLib");
const refalrts::RefalIdentifier ident_DefaultEXE = refalrts::ident_from_static("DefaultEXE");
const refalrts::RefalIdentifier ident_DefaultTarget = refalrts::ident_from_static("DefaultTarget");
const refalrts::RefalIdentifier ident_Fails = refalrts::ident_from_static("Fails");
const refalrts::RefalIdentifier ident_Falis = refalrts::ident_from_static("Falis");
const refalrts::RefalIdentifier ident_Folders = refalrts::ident_from_static("Folders");
const refalrts::RefalIdentifier ident_ManySourceFiles = refalrts::ident_from_static("ManySourceFiles");
const refalrts::RefalIdentifier ident_NotSet = refalrts::ident_from_static("NotSet");
const refalrts::RefalIdentifier ident_Prefix = refalrts::ident_from_static("Prefix");
const refalrts::RefalIdentifier ident_References = refalrts::ident_from_static("References");
const refalrts::RefalIdentifier ident_Runtime = refalrts::ident_from_static("Runtime");
const refalrts::RefalIdentifier ident_Search = refalrts::ident_from_static("Search");
const refalrts::RefalIdentifier ident_SourceFile = refalrts::ident_from_static("SourceFile");
const refalrts::RefalIdentifier ident_SrefCompiler = refalrts::ident_from_static("SrefCompiler");
const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
const refalrts::RefalIdentifier ident_TargetFileName = refalrts::ident_from_static("TargetFileName");
const refalrts::RefalIdentifier ident_TargetMode = refalrts::ident_from_static("TargetMode");
const refalrts::RefalIdentifier ident_TargetModeAlreadySet = refalrts::ident_from_static("TargetModeAlreadySet");
static refalrts::ExternalReference ref_Config("Config", 1716599720U, 323627134U);
static refalrts::ExternalReference ref_Config_Create("Config-Create", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetCppCompilerExe("Config-GetCppCompilerExe", 0U, 0U);
static refalrts::ExternalReference ref_Config_SetCppCompilerExe("Config-SetCppCompilerExe", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetCppCompilerLib("Config-GetCppCompilerLib", 0U, 0U);
static refalrts::ExternalReference ref_Config_SetCppCompilerLib("Config-SetCppCompilerLib", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetFolders("Config-GetFolders", 0U, 0U);
static refalrts::ExternalReference ref_Config_AddFolder("Config-AddFolder", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetSrefCompiler("Config-GetSrefCompiler", 0U, 0U);
static refalrts::ExternalReference ref_Config_SetSrefCompiler("Config-SetSrefCompiler", 0U, 0U);
static refalrts::ExternalReference ref_Config_AddSrefCompilerFlag("Config-AddSrefCompilerFlag", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetTargetFileName("Config-GetTargetFileName", 0U, 0U);
static refalrts::ExternalReference ref_Config_SetTargetFileName("Config-SetTargetFileName", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetSourceFile("Config-GetSourceFile", 0U, 0U);
static refalrts::ExternalReference ref_Config_SetSourceFile("Config-SetSourceFile", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetPrefix("Config-GetPrefix", 0U, 0U);
static refalrts::ExternalReference ref_Config_SetPrefix("Config-SetPrefix", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetReferences("Config-GetReferences", 0U, 0U);
static refalrts::ExternalReference ref_Config_AddReference("Config-AddReference", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetTargetMode("Config-GetTargetMode", 0U, 0U);
static refalrts::ExternalReference ref_Config_SetTargetMode("Config-SetTargetMode", 0U, 0U);

static refalrts::FnResult func_Config_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
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
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & Config/4 HalfReuse: (/1 } # CppCompilerExe/5 )/6 (/7 # CppCompilerLib/8 )/9 (/10 # Folders/11 )/12 (/13 # SrefCompiler/14 (/15"srefc-core"/16 )/18 )/19 (/20 # TargetFileName/21 # DefaultTarget/22 )/23 (/24 # SourceFile/25 # NotSet/26 )/27 (/28 # Prefix/29 # NotSet/30 )/31 (/32 # References/33 )/34 (/35 # TargetMode/36 # DefaultEXE/37 )/38 ]/39 Tile{ ]] }
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
  if( ! refalrts::alloc_close_adt( context[39] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_adt( context[0] );
  refalrts::update_name( context[4], ref_Config.ref.function );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::link_brackets( context[0], context[39] );
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
  res = refalrts::splice_evar( res, context[5], context[39] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Config_Create("Config-Create", 0U, 0U, func_Config_Create);

static refalrts::FnResult func_Config_GetCppCompilerExe(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetCppCompilerExe/4 [/7Config/8 e.Params-B#1/10 (/14 # CppCompilerExe/16 e.CppCompilerExe#1/12 )/15 e.Params-E#1/5 ]/9 >/1
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
    context[17] = context[5];
    context[18] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[17], context[18] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_CppCompilerExe, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.CppCompilerExe#1 as range 12
    // closed e.Params-E#1 as range 17(5)
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.CppCompilerExe#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetCppCompilerExe/4 [/7Config/8 e.Params-B#1/10 (/14 # CppCompilerExe/16 {REMOVED TILE} )/15 e.Params-E#1/17(5) ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.CppCompilerExe#1/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_GetCppCompilerExe("Config-GetCppCompilerExe", 0U, 0U, func_Config_GetCppCompilerExe);

static refalrts::FnResult func_Config_SetCppCompilerExe(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetCppCompilerExe/4 [/7Config/8 e.Params-B#1/10 (/14 # CppCompilerExe/16 e.OldCppCompilerExe#1/12 )/15 e.Params-E#1/5 ]/9 e.CppCompilerExe#1/2 >/1
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
    context[17] = context[5];
    context[18] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[17], context[18] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_CppCompilerExe, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.OldCppCompilerExe#1 as range 12
    // closed e.Params-E#1 as range 17(5)
    //DEBUG: e.CppCompilerExe#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldCppCompilerExe#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldCppCompilerExe#1/12 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/14 AsIs: # CppCompilerExe/16 } Tile{ AsIs: e.CppCompilerExe#1/2 } Tile{ AsIs: )/15 AsIs: e.Params-E#1/17(5) AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[16] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_SetCppCompilerExe("Config-SetCppCompilerExe", 0U, 0U, func_Config_SetCppCompilerExe);

static refalrts::FnResult func_Config_GetCppCompilerLib(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetCppCompilerLib/4 [/7Config/8 e.Params-B#1/10 (/14 # CppCompilerLib/16 e.CppCompilerLib#1/12 )/15 e.Params-E#1/5 ]/9 >/1
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
    context[17] = context[5];
    context[18] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[17], context[18] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_CppCompilerLib, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.CppCompilerLib#1 as range 12
    // closed e.Params-E#1 as range 17(5)
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.CppCompilerLib#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetCppCompilerLib/4 [/7Config/8 e.Params-B#1/10 (/14 # CppCompilerLib/16 {REMOVED TILE} )/15 e.Params-E#1/17(5) ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.CppCompilerLib#1/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_GetCppCompilerLib("Config-GetCppCompilerLib", 0U, 0U, func_Config_GetCppCompilerLib);

static refalrts::FnResult func_Config_SetCppCompilerLib(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetCppCompilerLib/4 [/7Config/8 e.Params-B#1/10 (/14 # CppCompilerLib/16 e.OldCppCompilerLib#1/12 )/15 e.Params-E#1/5 ]/9 e.CppCompilerLib#1/2 >/1
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
    context[17] = context[5];
    context[18] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[17], context[18] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_CppCompilerLib, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.OldCppCompilerLib#1 as range 12
    // closed e.Params-E#1 as range 17(5)
    //DEBUG: e.CppCompilerLib#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldCppCompilerLib#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldCppCompilerLib#1/12 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/14 AsIs: # CppCompilerLib/16 } Tile{ AsIs: e.CppCompilerLib#1/2 } Tile{ AsIs: )/15 AsIs: e.Params-E#1/17(5) AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[16] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_SetCppCompilerLib("Config-SetCppCompilerLib", 0U, 0U, func_Config_SetCppCompilerLib);

static refalrts::FnResult func_Config_GetFolders(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetFolders/4 [/7Config/8 e.Params-B#1/10 (/14 # Folders/16 e.Folders#1/12 )/15 e.Params-E#1/5 ]/9 >/1
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
    context[17] = context[5];
    context[18] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[17], context[18] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_Folders, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.Folders#1 as range 12
    // closed e.Params-E#1 as range 17(5)
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Folders#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetFolders/4 [/7Config/8 e.Params-B#1/10 (/14 # Folders/16 {REMOVED TILE} )/15 e.Params-E#1/17(5) ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Folders#1/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_GetFolders("Config-GetFolders", 0U, 0U, func_Config_GetFolders);

static refalrts::FnResult func_Config_AddFolder(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
    // </0 & Config-AddFolder/4 [/7Config/8 e.Params-B#1/11 (/15 # Folders/17 e.Folders#1/13 )/16 e.Params-E#1/5 ]/9 # Search/10 e.Path#1/2 >/1
    if( ! refalrts::ident_term(  ident_Search, context[10] ) )
      continue;
    // closed e.Path#1 as range 2
    context[18] = context[5];
    context[19] = context[6];
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[18];
      context[21] = context[19];
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[20], context[21] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = refalrts::ident_left(  ident_Folders, context[13], context[14] );
      if( ! context[17] )
        continue;
      // closed e.Folders#1 as range 13
      // closed e.Params-E#1 as range 20(5)
      //DEBUG: e.Path#1: 2
      //DEBUG: e.Params-B#1: 11
      //DEBUG: e.Folders#1: 13
      //DEBUG: e.Params-E#1: 5

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/11 AsIs: (/15 AsIs: # Folders/17 AsIs: e.Folders#1/13 HalfReuse: (/16 } Tile{ AsIs: # Search/10 AsIs: e.Path#1/2 HalfReuse: )/1 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/20(5) } Tile{ AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident( context[4], ident_Success );
      refalrts::reinit_open_bracket( context[16] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::reinit_close_bracket( context[0] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[15], context[0] );
      refalrts::link_brackets( context[16], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[10], context[1] );
      res = refalrts::splice_evar( res, context[4], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[11], context[12], context[18], context[19] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // [Config e.idx ] # Runtime e.idx
  // </0 & Config-AddFolder/4 [/7Config/8 e.Params-B#1/11 (/15 # Folders/17 e.Folders#1/13 )/16 e.Params-E#1/5 ]/9 # Runtime/10 e.Path#1/2 >/1
  if( ! refalrts::ident_term(  ident_Runtime, context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Path#1 as range 2
  context[11] = 0;
  context[12] = 0;
  refalrts::start_e_loop();
  do {
    context[18] = context[5];
    context[19] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[18], context[19] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  ident_Folders, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Folders#1 as range 13
    // closed e.Params-E#1 as range 18(5)
    //DEBUG: e.Path#1: 2
    //DEBUG: e.Params-B#1: 11
    //DEBUG: e.Folders#1: 13
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/11 AsIs: (/15 AsIs: # Folders/17 AsIs: e.Folders#1/13 HalfReuse: (/16 } Tile{ AsIs: # Runtime/10 AsIs: e.Path#1/2 HalfReuse: )/1 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/18(5) } Tile{ AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[15], context[0] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[4], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_AddFolder("Config-AddFolder", 0U, 0U, func_Config_AddFolder);

static refalrts::FnResult func_Config_GetSrefCompiler(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Config-GetSrefCompiler/4 [/7Config/8 e.Params-B#1/10 (/14 # SrefCompiler/16 (/19 e.Compiler#1/17 )/20 e.Flags#1/12 )/15 e.Params-E#1/5 ]/9 >/1
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
    context[21] = context[5];
    context[22] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[21], context[22] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_SrefCompiler, context[12], context[13] );
    if( ! context[16] )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[12], context[13] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.Compiler#1 as range 17
    // closed e.Flags#1 as range 12
    // closed e.Params-E#1 as range 21(5)
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Compiler#1: 17
    //DEBUG: e.Flags#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetSrefCompiler/4 [/7Config/8 e.Params-B#1/10 (/14 # SrefCompiler/16 (/19 {REMOVED TILE} )/20 {REMOVED TILE} )/15 e.Params-E#1/21(5) ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Compiler#1/17 } Tile{ AsIs: e.Flags#1/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_GetSrefCompiler("Config-GetSrefCompiler", 0U, 0U, func_Config_GetSrefCompiler);

static refalrts::FnResult func_Config_SetSrefCompiler(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Config-SetSrefCompiler/4 [/7Config/8 e.Params-B#1/10 (/14 # SrefCompiler/16 (/19 e.OldCompiler#1/17 )/20 e.Flags#1/12 )/15 e.Params-E#1/5 ]/9 e.SrefCompiler#1/2 >/1
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
    context[21] = context[5];
    context[22] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[21], context[22] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_SrefCompiler, context[12], context[13] );
    if( ! context[16] )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[12], context[13] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.OldCompiler#1 as range 17
    // closed e.Flags#1 as range 12
    // closed e.Params-E#1 as range 21(5)
    //DEBUG: e.SrefCompiler#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldCompiler#1: 17
    //DEBUG: e.Flags#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldCompiler#1/17 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/14 AsIs: # SrefCompiler/16 AsIs: (/19 } Tile{ AsIs: e.SrefCompiler#1/2 } Tile{ AsIs: )/20 AsIs: e.Flags#1/12 AsIs: )/15 AsIs: e.Params-E#1/21(5) AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[19] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_SetSrefCompiler("Config-SetSrefCompiler", 0U, 0U, func_Config_SetSrefCompiler);

static refalrts::FnResult func_Config_AddSrefCompilerFlag(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Config-AddSrefCompilerFlag/4 [/7Config/8 e.Params-B#1/10 (/14 # SrefCompiler/16 t.SrefCompiler#1/17 e.Flags#1/12 )/15 e.Params-E#1/5 ]/9 e.NewFlags#1/2 >/1
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
    context[20] = context[5];
    context[21] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[20], context[21] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_SrefCompiler, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.Params-E#1 as range 20(5)
    context[18] = refalrts::tvar_left( context[17], context[12], context[13] );
    if( ! context[18] )
      continue;
    // closed e.Flags#1 as range 12
    //DEBUG: e.NewFlags#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 5
    //DEBUG: t.SrefCompiler#1: 17
    //DEBUG: e.Flags#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/14 AsIs: # SrefCompiler/16 AsIs: t.SrefCompiler#1/17 AsIs: e.Flags#1/12 HalfReuse: ' '/15 } Tile{ HalfReuse: '\"'/9 AsIs: e.NewFlags#1/2 HalfReuse: '\"'/1 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/20(5) } ]/19 Tile{ ]] }
    if( ! refalrts::alloc_close_adt( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::reinit_char( context[15], ' ' );
    refalrts::reinit_char( context[9], '\"' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::link_brackets( context[7], context[19] );
    refalrts::link_brackets( context[14], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[4], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_AddSrefCompilerFlag("Config-AddSrefCompilerFlag", 0U, 0U, func_Config_AddSrefCompilerFlag);

static refalrts::FnResult func_Config_GetTargetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetTargetFileName/4 [/7Config/8 e.Params-B#1/10 (/14 # TargetFileName/16 e.TargetFileName#1/12 )/15 e.Params-E#1/5 ]/9 >/1
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
    context[17] = context[5];
    context[18] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[17], context[18] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_TargetFileName, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.TargetFileName#1 as range 12
    // closed e.Params-E#1 as range 17(5)
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.TargetFileName#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetTargetFileName/4 [/7Config/8 e.Params-B#1/10 (/14 # TargetFileName/16 {REMOVED TILE} )/15 e.Params-E#1/17(5) ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.TargetFileName#1/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_GetTargetFileName("Config-GetTargetFileName", 0U, 0U, func_Config_GetTargetFileName);

static refalrts::FnResult func_Config_SetTargetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetTargetFileName/4 [/7Config/8 e.Params-B#1/10 (/14 # TargetFileName/16 e.OldTargetFileName#1/12 )/15 e.Params-E#1/5 ]/9 e.NewTargetFileName#1/2 >/1
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
    context[17] = context[5];
    context[18] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[17], context[18] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_TargetFileName, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.OldTargetFileName#1 as range 12
    // closed e.Params-E#1 as range 17(5)
    //DEBUG: e.NewTargetFileName#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldTargetFileName#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldTargetFileName#1/12 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/14 AsIs: # TargetFileName/16 } Tile{ AsIs: e.NewTargetFileName#1/2 } Tile{ AsIs: )/15 AsIs: e.Params-E#1/17(5) AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[16] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_SetTargetFileName("Config-SetTargetFileName", 0U, 0U, func_Config_SetTargetFileName);

static refalrts::FnResult func_Config_GetSourceFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetSourceFile/4 [/7Config/8 e.Params-B#1/10 (/14 # SourceFile/16 e.FileName#1/12 )/15 e.Params-E#1/5 ]/9 >/1
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
    context[17] = context[5];
    context[18] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[17], context[18] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_SourceFile, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.FileName#1 as range 12
    // closed e.Params-E#1 as range 17(5)
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.FileName#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetSourceFile/4 [/7Config/8 e.Params-B#1/10 (/14 # SourceFile/16 {REMOVED TILE} )/15 e.Params-E#1/17(5) ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.FileName#1/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_GetSourceFile("Config-GetSourceFile", 0U, 0U, func_Config_GetSourceFile);

static refalrts::FnResult func_Config_SetSourceFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
    // </0 & Config-SetSourceFile/4 [/7Config/8 e.Params-B#1/10 (/14 # SourceFile/16 # NotSet/17 )/15 e.Params-E#1/5 ]/9 e.SourceFile#1/2 >/1
    // closed e.SourceFile#1 as range 2
    context[18] = context[5];
    context[19] = context[6];
    context[10] = 0;
    context[11] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[18];
      context[21] = context[19];
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[20], context[21] );
      if( ! context[14] )
        continue;
      refalrts::bracket_pointers(context[14], context[15]);
      context[16] = refalrts::ident_left(  ident_SourceFile, context[12], context[13] );
      if( ! context[16] )
        continue;
      context[17] = refalrts::ident_left(  ident_NotSet, context[12], context[13] );
      if( ! context[17] )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;
      // closed e.Params-E#1 as range 20(5)
      //DEBUG: e.SourceFile#1: 2
      //DEBUG: e.Params-B#1: 10
      //DEBUG: e.Params-E#1: 5

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} # NotSet/17 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/14 AsIs: # SourceFile/16 } Tile{ AsIs: e.SourceFile#1/2 } Tile{ AsIs: )/15 AsIs: e.Params-E#1/20(5) AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident( context[4], ident_Success );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[9] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[4], context[16] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[10], context[11], context[18], context[19] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // [Config e.idx ] e.idx
  // </0 & Config-SetSourceFile/4 [/7Config/8 e.Params-B#1/10 (/14 # SourceFile/16 e.OldSourceFile#1/12 )/15 e.Params-E#1/5 ]/9 e.SourceFile#1/2 >/1
  // closed e.SourceFile#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[18] = context[5];
    context[19] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[18], context[19] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_SourceFile, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.OldSourceFile#1 as range 12
    // closed e.Params-E#1 as range 18(5)
    //DEBUG: e.SourceFile#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldSourceFile#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} [/7Config/8 e.Params-B#1/10 (/14 # SourceFile/16 e.OldSourceFile#1/12 )/15 e.Params-E#1/18(5) ]/9 e.SourceFile#1/2 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: # ManySourceFiles/4 } Tile{ ]] }
    refalrts::reinit_ident( context[0], ident_Fails );
    refalrts::reinit_ident( context[4], ident_ManySourceFiles );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_SetSourceFile("Config-SetSourceFile", 0U, 0U, func_Config_SetSourceFile);

static refalrts::FnResult func_Config_GetPrefix(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetPrefix/4 [/7Config/8 e.Params-B#1/10 (/14 # Prefix/16 e.Prefix#1/12 )/15 e.Params-E#1/5 ]/9 >/1
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
    context[17] = context[5];
    context[18] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[17], context[18] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_Prefix, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.Prefix#1 as range 12
    // closed e.Params-E#1 as range 17(5)
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Prefix#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetPrefix/4 [/7Config/8 e.Params-B#1/10 (/14 # Prefix/16 {REMOVED TILE} )/15 e.Params-E#1/17(5) ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Prefix#1/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_GetPrefix("Config-GetPrefix", 0U, 0U, func_Config_GetPrefix);

static refalrts::FnResult func_Config_SetPrefix(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetPrefix/4 [/7Config/8 e.Params-B#1/10 (/14 # Prefix/16 e.OldPrefix#1/12 )/15 e.Params-E#1/5 ]/9 e.NewPrefix#1/2 >/1
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
    context[17] = context[5];
    context[18] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[17], context[18] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_Prefix, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.OldPrefix#1 as range 12
    // closed e.Params-E#1 as range 17(5)
    //DEBUG: e.NewPrefix#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldPrefix#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldPrefix#1/12 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/14 AsIs: # Prefix/16 } Tile{ AsIs: e.NewPrefix#1/2 } Tile{ AsIs: )/15 AsIs: e.Params-E#1/17(5) AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[16] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_SetPrefix("Config-SetPrefix", 0U, 0U, func_Config_SetPrefix);

static refalrts::FnResult func_Config_GetReferences(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetReferences/4 [/7Config/8 e.Params-B#1/10 (/14 # References/16 e.References#1/12 )/15 e.Params-E#1/5 ]/9 >/1
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
    context[17] = context[5];
    context[18] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[17], context[18] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_References, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.References#1 as range 12
    // closed e.Params-E#1 as range 17(5)
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.References#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetReferences/4 [/7Config/8 e.Params-B#1/10 (/14 # References/16 {REMOVED TILE} )/15 e.Params-E#1/17(5) ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.References#1/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_GetReferences("Config-GetReferences", 0U, 0U, func_Config_GetReferences);

static refalrts::FnResult func_Config_AddReference(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-AddReference/4 [/7Config/8 e.Params-B#1/10 (/14 # References/16 e.References#1/12 )/15 e.Params-E#1/5 ]/9 e.NewReference#1/2 >/1
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
    context[17] = context[5];
    context[18] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[17], context[18] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_References, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.References#1 as range 12
    // closed e.Params-E#1 as range 17(5)
    //DEBUG: e.NewReference#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.References#1: 12
    //DEBUG: e.Params-E#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/14 AsIs: # References/16 AsIs: e.References#1/12 HalfReuse: (/15 } Tile{ AsIs: e.NewReference#1/2 } Tile{ HalfReuse: )/9 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/17(5) } Tile{ HalfReuse: ]/1 ]] }
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::reinit_open_bracket( context[15] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_close_adt( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[14], context[0] );
    refalrts::link_brackets( context[15], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_AddReference("Config-AddReference", 0U, 0U, func_Config_AddReference);

static refalrts::FnResult func_Config_GetTargetMode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Config-GetTargetMode/4 [/7Config/8 e.Params-B#1/10 (/14 # TargetMode/16 s.TargetMode#1/17 )/15 e.Params-E#1/5 ]/9 >/1
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
    context[18] = context[5];
    context[19] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[18], context[19] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_TargetMode, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.Params-E#1 as range 18(5)
    if( ! refalrts::svar_left( context[17], context[12], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 5
    //DEBUG: s.TargetMode#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Config-GetTargetMode/4 [/7Config/8 e.Params-B#1/10 (/14 # TargetMode/16 s.TargetMode#1/17 )/15 e.Params-E#1/18(5) ]/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.TargetMode1 #17/1 ]] }
    refalrts::reinit_svar( context[1], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_GetTargetMode("Config-GetTargetMode", 0U, 0U, func_Config_GetTargetMode);

static refalrts::FnResult func_Config_SetTargetMode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // </0 & Config-SetTargetMode/4 [/7Config/8 e.Params-B#1/11 (/15 # TargetMode/17 # DefaultEXE/18 )/16 e.Params-E#1/5 ]/9 s.NewTargetMode#1/10 >/1
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::svar_left( context[10], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    context[21] = context[5];
    context[22] = context[6];
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[21];
      context[24] = context[22];
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[23], context[24] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = refalrts::ident_left(  ident_TargetMode, context[13], context[14] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::ident_left(  ident_DefaultEXE, context[13], context[14] );
      if( ! context[18] )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.Params-E#1 as range 23(5)
      //DEBUG: s.NewTargetMode#1: 10
      //DEBUG: e.Params-B#1: 11
      //DEBUG: e.Params-E#1: 5

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.NewTargetMode#1/10 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/11 AsIs: (/15 AsIs: # TargetMode/17 HalfReuse: s.NewTargetMode1 #10/18 AsIs: )/16 AsIs: e.Params-E#1/23(5) AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident( context[4], ident_Success );
      refalrts::reinit_svar( context[18], context[10] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[9] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[11], context[12], context[21], context[22] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // [Config e.idx ] s.idx
    // </0 & Config-SetTargetMode/4 [/7Config/8 e.Params-B#1/11 (/15 # TargetMode/17 s.TargetMode#1/18 )/16 e.Params-E#1/5 ]/9 s.TargetMode#1/10 >/1
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::svar_left( context[10], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    context[21] = context[5];
    context[22] = context[6];
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[21];
      context[24] = context[22];
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[23], context[24] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = refalrts::ident_left(  ident_TargetMode, context[13], context[14] );
      if( ! context[17] )
        continue;
      if( ! refalrts::repeated_stvar_left( context[18], context[10], context[13], context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.Params-E#1 as range 23(5)
      //DEBUG: s.TargetMode#1: 10
      //DEBUG: e.Params-B#1: 11
      //DEBUG: e.Params-E#1: 5

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.TargetMode#1/10 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/11 AsIs: (/15 AsIs: # TargetMode/17 AsIs: s.TargetMode#1/18 AsIs: )/16 AsIs: e.Params-E#1/23(5) AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident( context[4], ident_Success );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[9] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[11], context[12], context[21], context[22] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // [Config e.idx ] e.idx
  // </0 & Config-SetTargetMode/4 [/7Config/8 e.Params-B#1/10 (/14 # TargetMode/16 s.OldTargetMode#1/17 )/15 e.Params-E#1/5 ]/9 e.NewTargetMode#1/2 >/1
  // closed e.NewTargetMode#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[19] = context[5];
    context[20] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[19], context[20] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_TargetMode, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.Params-E#1 as range 19(5)
    if( ! refalrts::svar_left( context[17], context[12], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    //DEBUG: e.NewTargetMode#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 5
    //DEBUG: s.OldTargetMode#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} [/7Config/8 e.Params-B#1/10 (/14 # TargetMode/16 s.OldTargetMode#1/17 )/15 e.Params-E#1/19(5) ]/9 e.NewTargetMode#1/2 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Falis/0 HalfReuse: # TargetModeAlreadySet/4 } Tile{ ]] }
    refalrts::reinit_ident( context[0], ident_Falis );
    refalrts::reinit_ident( context[4], ident_TargetModeAlreadySet );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Config_SetTargetMode("Config-SetTargetMode", 0U, 0U, func_Config_SetTargetMode);


//End of file