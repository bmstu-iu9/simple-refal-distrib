// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_CppCompilerExe = refalrts::ident_from_static("CppCompilerExe");
const refalrts::RefalIdentifier ident_CppCompilerLib = refalrts::ident_from_static("CppCompilerLib");
const refalrts::RefalIdentifier ident_EXE = refalrts::ident_from_static("EXE");
const refalrts::RefalIdentifier ident_FILE = refalrts::ident_from_static("FILE");
const refalrts::RefalIdentifier ident_Fails = refalrts::ident_from_static("Fails");
const refalrts::RefalIdentifier ident_LIB = refalrts::ident_from_static("LIB");
const refalrts::RefalIdentifier ident_ManySourceFiles = refalrts::ident_from_static("ManySourceFiles");
const refalrts::RefalIdentifier ident_No = refalrts::ident_from_static("No");
const refalrts::RefalIdentifier ident_NoRequiredParam = refalrts::ident_from_static("NoRequiredParam");
const refalrts::RefalIdentifier ident_None = refalrts::ident_from_static("None");
const refalrts::RefalIdentifier ident_Prefix = refalrts::ident_from_static("Prefix");
const refalrts::RefalIdentifier ident_R = refalrts::ident_from_static("R");
const refalrts::RefalIdentifier ident_Reference = refalrts::ident_from_static("Reference");
const refalrts::RefalIdentifier ident_Required = refalrts::ident_from_static("Required");
const refalrts::RefalIdentifier ident_Runtime = refalrts::ident_from_static("Runtime");
const refalrts::RefalIdentifier ident_RuntimeFolder = refalrts::ident_from_static("RuntimeFolder");
const refalrts::RefalIdentifier ident_Search = refalrts::ident_from_static("Search");
const refalrts::RefalIdentifier ident_SearchFolder = refalrts::ident_from_static("SearchFolder");
const refalrts::RefalIdentifier ident_SrefCompiler = refalrts::ident_from_static("SrefCompiler");
const refalrts::RefalIdentifier ident_SrefCompilerOption = refalrts::ident_from_static("SrefCompilerOption");
const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
const refalrts::RefalIdentifier ident_TargetFileName = refalrts::ident_from_static("TargetFileName");
const refalrts::RefalIdentifier ident_TargetMode_Exe = refalrts::ident_from_static("TargetMode-Exe");
const refalrts::RefalIdentifier ident_TargetMode_Lib = refalrts::ident_from_static("TargetMode-Lib");
const refalrts::RefalIdentifier ident_TargetMode_R = refalrts::ident_from_static("TargetMode-R");
const refalrts::RefalIdentifier ident_TargetModeAlreadySet = refalrts::ident_from_static("TargetModeAlreadySet");
const refalrts::RefalIdentifier ident_UnknownLongOption = refalrts::ident_from_static("UnknownLongOption");
const refalrts::RefalIdentifier ident_UnknownShortOption = refalrts::ident_from_static("UnknownShortOption");
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Seq("Seq", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_GetOpt("GetOpt", 0U, 0U);
static refalrts::ExternalReference ref_Config_Create("Config-Create", 0U, 0U);
static refalrts::ExternalReference ref_Config_SetCppCompilerExe("Config-SetCppCompilerExe", 0U, 0U);
static refalrts::ExternalReference ref_Config_SetCppCompilerLib("Config-SetCppCompilerLib", 0U, 0U);
static refalrts::ExternalReference ref_Config_SetPrefix("Config-SetPrefix", 0U, 0U);
static refalrts::ExternalReference ref_Config_AddReference("Config-AddReference", 0U, 0U);
static refalrts::ExternalReference ref_Config_AddFolder("Config-AddFolder", 0U, 0U);
static refalrts::ExternalReference ref_Config_SetSrefCompiler("Config-SetSrefCompiler", 0U, 0U);
static refalrts::ExternalReference ref_Config_AddSrefCompilerFlag("Config-AddSrefCompilerFlag", 0U, 0U);
static refalrts::ExternalReference ref_Config_SetTargetFileName("Config-SetTargetFileName", 0U, 0U);
static refalrts::ExternalReference ref_Config_SetTargetMode("Config-SetTargetMode", 0U, 0U);
static refalrts::ExternalReference ref_Config_SetSourceFile("Config-SetSourceFile", 0U, 0U);
static refalrts::ExternalReference ref_gen_ParseCommandLine_L1("ParseCommandLine\\1", 1041172014U, 1740639674U);
static refalrts::ExternalReference ref_gen_ParseCommandLine_L2("ParseCommandLine\\2", 1041172014U, 1740639674U);
static refalrts::ExternalReference ref_gen_ParseCommandLine_L3S2L1("ParseCommandLine\\3$2\\1", 1041172014U, 1740639674U);
static refalrts::ExternalReference ref_gen_ParseCommandLine_L3("ParseCommandLine\\3", 1041172014U, 1740639674U);
static refalrts::ExternalReference ref_ParseCommandLine("ParseCommandLine", 0U, 0U);
static refalrts::ExternalReference ref_CheckRequiredOptions("CheckRequiredOptions", 1041172014U, 1740639674U);
static refalrts::ExternalReference ref_gen_Update_L1("Update\\1", 1041172014U, 1740639674U);
static refalrts::ExternalReference ref_Update("Update", 1041172014U, 1740639674U);

static refalrts::FnResult func_gen_ParseCommandLine_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & Config-Create/4 HalfReuse: >/7 AsIs: e.Errors#2/5 AsIs: )/8 } Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[1] );
  refalrts::update_name( context[4], ref_Config_Create.ref.function );
  refalrts::reinit_close_call( context[7] );
  refalrts::link_brackets( context[1], context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L1("ParseCommandLine\\1", 1041172014U, 1740639674U, func_gen_ParseCommandLine_L1);

static refalrts::FnResult func_gen_ParseCommandLine_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: ( t.$ e.$ ) t.$
  //GLOBAL GEN: ( t.$ e.$ ) t.$
  // </0 & ParseCommandLine\2/4 (/7 t.idxB#0/9 e.idxBV#0/5 )/8 t.idxT#0/11 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBV#0 as range 5
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( t.idx e.idx ) ( # CppCompilerExe s.idx e.idx )
    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # CppCompilerExe/15 s.Num#2/16 e.CppCompilerExe#2/13 )/12 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_CppCompilerExe, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Errors#2 as range 5
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.CppCompilerExe#2 as range 13
    //DEBUG: t.Config#2: 9
    //DEBUG: e.Errors#2: 5
    //DEBUG: s.Num#2: 16
    //DEBUG: e.CppCompilerExe#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetCppCompilerExe/15 AsIs: s.Num#2/16 AsIs: e.CppCompilerExe#2/13 HalfReuse: >/12 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Update.ref.function );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_name( context[15], ref_Config_SetCppCompilerExe.ref.function );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( t.idx e.idx ) ( # CppCompilerLib s.idx e.idx )
    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # CppCompilerLib/15 s.Num#2/16 e.CppCompilerLib#2/13 )/12 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_CppCompilerLib, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Errors#2 as range 5
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.CppCompilerLib#2 as range 13
    //DEBUG: t.Config#2: 9
    //DEBUG: e.Errors#2: 5
    //DEBUG: s.Num#2: 16
    //DEBUG: e.CppCompilerLib#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetCppCompilerLib/15 AsIs: s.Num#2/16 AsIs: e.CppCompilerLib#2/13 HalfReuse: >/12 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Update.ref.function );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_name( context[15], ref_Config_SetCppCompilerLib.ref.function );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( t.idx e.idx ) ( # Prefix s.idx e.idx )
    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # Prefix/15 s.Num#2/16 e.Prefix#2/13 )/12 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_Prefix, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Errors#2 as range 5
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.Prefix#2 as range 13
    //DEBUG: t.Config#2: 9
    //DEBUG: e.Errors#2: 5
    //DEBUG: s.Num#2: 16
    //DEBUG: e.Prefix#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetPrefix/15 AsIs: s.Num#2/16 AsIs: e.Prefix#2/13 HalfReuse: >/12 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Update.ref.function );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_name( context[15], ref_Config_SetPrefix.ref.function );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( t.idx e.idx ) ( # Reference s.idx e.idx )
    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # Reference/15 s.Num#2/16 e.Reference#2/13 )/12 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_Reference, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Errors#2 as range 5
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.Reference#2 as range 13
    //DEBUG: t.Config#2: 9
    //DEBUG: e.Errors#2: 5
    //DEBUG: s.Num#2: 16
    //DEBUG: e.Reference#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddReference/15 AsIs: s.Num#2/16 AsIs: e.Reference#2/13 HalfReuse: >/12 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Update.ref.function );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_name( context[15], ref_Config_AddReference.ref.function );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( t.idx e.idx ) ( # RuntimeFolder s.idx e.idx )
    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # RuntimeFolder/15 s.Num#2/16 e.Folder#2/13 )/12 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_RuntimeFolder, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Errors#2 as range 5
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.Folder#2 as range 13
    //DEBUG: t.Config#2: 9
    //DEBUG: e.Errors#2: 5
    //DEBUG: s.Num#2: 16
    //DEBUG: e.Folder#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddFolder/15 AsIs: s.Num#2/16 } Tile{ HalfReuse: # Runtime/12 } Tile{ AsIs: e.Folder#2/13 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Update.ref.function );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_name( context[15], ref_Config_AddFolder.ref.function );
    refalrts::reinit_ident( context[12], ident_Runtime );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[11], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( t.idx e.idx ) ( # SearchFolder s.idx e.idx )
    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # SearchFolder/15 s.Num#2/16 e.Folder#2/13 )/12 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_SearchFolder, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Errors#2 as range 5
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.Folder#2 as range 13
    //DEBUG: t.Config#2: 9
    //DEBUG: e.Errors#2: 5
    //DEBUG: s.Num#2: 16
    //DEBUG: e.Folder#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddFolder/15 AsIs: s.Num#2/16 } Tile{ HalfReuse: # Search/12 } Tile{ AsIs: e.Folder#2/13 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Update.ref.function );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_name( context[15], ref_Config_AddFolder.ref.function );
    refalrts::reinit_ident( context[12], ident_Search );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[11], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( t.idx e.idx ) ( # SrefCompiler s.idx e.idx )
    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # SrefCompiler/15 s.Num#2/16 e.SrefCompiler#2/13 )/12 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_SrefCompiler, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Errors#2 as range 5
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.SrefCompiler#2 as range 13
    //DEBUG: t.Config#2: 9
    //DEBUG: e.Errors#2: 5
    //DEBUG: s.Num#2: 16
    //DEBUG: e.SrefCompiler#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetSrefCompiler/15 AsIs: s.Num#2/16 AsIs: e.SrefCompiler#2/13 HalfReuse: >/12 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Update.ref.function );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_name( context[15], ref_Config_SetSrefCompiler.ref.function );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( t.idx e.idx ) ( # SrefCompilerOption s.idx e.idx )
    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # SrefCompilerOption/15 s.Num#2/16 e.Flag#2/13 )/12 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_SrefCompilerOption, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Errors#2 as range 5
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.Flag#2 as range 13
    //DEBUG: t.Config#2: 9
    //DEBUG: e.Errors#2: 5
    //DEBUG: s.Num#2: 16
    //DEBUG: e.Flag#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddSrefCompilerFlag/15 AsIs: s.Num#2/16 AsIs: e.Flag#2/13 HalfReuse: >/12 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Update.ref.function );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_name( context[15], ref_Config_AddSrefCompilerFlag.ref.function );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( t.idx e.idx ) ( # TargetFileName s.idx e.idx )
    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # TargetFileName/15 s.Num#2/16 e.TargetFile#2/13 )/12 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_TargetFileName, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Errors#2 as range 5
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.TargetFile#2 as range 13
    //DEBUG: t.Config#2: 9
    //DEBUG: e.Errors#2: 5
    //DEBUG: s.Num#2: 16
    //DEBUG: e.TargetFile#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetFileName/15 AsIs: s.Num#2/16 AsIs: e.TargetFile#2/13 HalfReuse: >/12 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Update.ref.function );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_name( context[15], ref_Config_SetTargetFileName.ref.function );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( t.idx e.idx ) ( # TargetMode-Exe s.idx )
    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # TargetMode-Exe/15 s.Num#2/16 )/12 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_TargetMode_Exe, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Errors#2 as range 5
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: t.Config#2: 9
    //DEBUG: e.Errors#2: 5
    //DEBUG: s.Num#2: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TargetMode-Exe/15 s.Num#2/16 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: )/8 HalfReuse: & Config-SetTargetMode/11 } Tile{ HalfReuse: # EXE/12 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Update.ref.function );
    refalrts::reinit_name( context[11], ref_Config_SetTargetMode.ref.function );
    refalrts::reinit_ident( context[12], ident_EXE );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( t.idx e.idx ) ( # TargetMode-Lib s.idx )
    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # TargetMode-Lib/15 s.Num#2/16 )/12 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_TargetMode_Lib, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Errors#2 as range 5
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: t.Config#2: 9
    //DEBUG: e.Errors#2: 5
    //DEBUG: s.Num#2: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TargetMode-Lib/15 s.Num#2/16 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: )/8 HalfReuse: & Config-SetTargetMode/11 } Tile{ HalfReuse: # LIB/12 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Update.ref.function );
    refalrts::reinit_name( context[11], ref_Config_SetTargetMode.ref.function );
    refalrts::reinit_ident( context[12], ident_LIB );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( t.idx e.idx ) ( # TargetMode-R s.idx )
    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # TargetMode-R/15 s.Num#2/16 )/12 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_TargetMode_R, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Errors#2 as range 5
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: t.Config#2: 9
    //DEBUG: e.Errors#2: 5
    //DEBUG: s.Num#2: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TargetMode-R/15 s.Num#2/16 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: )/8 HalfReuse: & Config-SetTargetMode/11 } Tile{ HalfReuse: # R/12 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Update.ref.function );
    refalrts::reinit_name( context[11], ref_Config_SetTargetMode.ref.function );
    refalrts::reinit_ident( context[12], ident_R );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( t.idx e.idx ) ( # FILE s.idx e.idx )
    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # FILE/15 s.Num#2/16 e.SourceFile#2/13 )/12 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_FILE, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Errors#2 as range 5
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.SourceFile#2 as range 13
    //DEBUG: t.Config#2: 9
    //DEBUG: e.Errors#2: 5
    //DEBUG: s.Num#2: 16
    //DEBUG: e.SourceFile#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetSourceFile/15 AsIs: s.Num#2/16 AsIs: e.SourceFile#2/13 HalfReuse: >/12 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Update.ref.function );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_name( context[15], ref_Config_SetSourceFile.ref.function );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( t.idx e.idx ) t.idx
  // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 t.Option#2/11 >/1
  // closed e.Errors#2 as range 5
  //DEBUG: t.Config#2: 9
  //DEBUG: t.Option#2: 11
  //DEBUG: e.Errors#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ParseCommandLine\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Config#2/9 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: t.Option#2/11 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L2("ParseCommandLine\\2", 1041172014U, 1740639674U, func_gen_ParseCommandLine_L2);

static refalrts::FnResult func_gen_ParseCommandLine_L3S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: ( e.$ )
  //GLOBAL GEN: ( s.$ s.$ e.$ )
  // </0 & ParseCommandLine\3$2\1/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBVV#0 as range 5
  do {
    // ( s.idx # NoRequiredParam e.idx )
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos#3/9 # NoRequiredParam/10 e.Param#3/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_NoRequiredParam, context[10] ) )
      continue;
    // closed e.Param#3 as range 5
    //DEBUG: s.Pos#3: 9
    //DEBUG: e.Param#3: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 } Tile{ HalfReuse: 'p'/0 HalfReuse: 't'/4 }"ion "/11 Tile{ AsIs: e.Param#3/5 }" expects paramete"/13 Tile{ HalfReuse: 'r'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[11], context[12], "ion ", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], " expects paramete", 17 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'o' );
    refalrts::reinit_char( context[0], 'p' );
    refalrts::reinit_char( context[4], 't' );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx # UnknownShortOption s.idx )
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos#3/9 # UnknownShortOption/10 s.Option#3/11 )/8 >/1
    if( ! refalrts::ident_term(  ident_UnknownShortOption, context[10] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::svar_left( context[11], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    //DEBUG: s.Pos#3: 9
    //DEBUG: s.Option#3: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'u'/10 } 'n'/12 Tile{ HalfReuse: 'k'/1 } Tile{ HalfReuse: 'n'/0 HalfReuse: 'o'/4 }"wn option -"/13 Tile{ AsIs: s.Option#3/11 AsIs: )/8 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[12], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], "wn option -", 11 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'u' );
    refalrts::reinit_char( context[1], 'k' );
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'o' );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx # UnknownLongOption e.idx )
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos#3/9 # UnknownLongOption/10 e.Option#3/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_UnknownLongOption, context[10] ) )
      continue;
    // closed e.Option#3 as range 5
    //DEBUG: s.Pos#3: 9
    //DEBUG: e.Option#3: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'u'/10 }"nk"/11 Tile{ HalfReuse: 'n'/0 HalfReuse: 'o'/4 } Tile{ HalfReuse: 'w'/8 }"n option --"/13 Tile{ AsIs: e.Option#3/5 } Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[11], context[12], "nk", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], "n option --", 11 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'u' );
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'o' );
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx # ManySourceFiles )
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos#3/9 # ManySourceFiles/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_ManySourceFiles, context[10] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    //DEBUG: s.Pos#3: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'm'/10 HalfReuse: 'a'/8 HalfReuse: 'n'/1 } 'y'/11 Tile{ HalfReuse: ' '/0 HalfReuse: 's'/4 }"ource files in command line"/12 )/14 Tile{ ]] }
    if( ! refalrts::alloc_char( context[11], 'y' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "ource files in command line", 27 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'm' );
    refalrts::reinit_char( context[8], 'a' );
    refalrts::reinit_char( context[1], 'n' );
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], 's' );
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
  refalrts::stop_sentence();

  do {
    // ( s.idx # No # CppCompilerExe )
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos#3/9 # No/10 # CppCompilerExe/11 )/8 >/1
    if( ! refalrts::ident_term(  ident_No, context[10] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[11] = refalrts::ident_left(  ident_CppCompilerExe, context[16], context[17] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    //DEBUG: s.Pos#3: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 HalfReuse: 'p'/11 HalfReuse: 't'/8 HalfReuse: 'i'/1 } 'o'/12 Tile{ HalfReuse: 'n'/0 HalfReuse: ' '/4 }"-c or --cpp-command not found"/13 )/15 Tile{ ]] }
    if( ! refalrts::alloc_char( context[12], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], "-c or --cpp-command not found", 29 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'o' );
    refalrts::reinit_char( context[11], 'p' );
    refalrts::reinit_char( context[8], 't' );
    refalrts::reinit_char( context[1], 'i' );
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::link_brackets( context[7], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[15] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx # No # FILE )
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos#3/9 # No/10 # FILE/11 )/8 >/1
    if( ! refalrts::ident_term(  ident_No, context[10] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    context[11] = refalrts::ident_left(  ident_FILE, context[16], context[17] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    //DEBUG: s.Pos#3: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'e'/10 HalfReuse: 'x'/11 HalfReuse: 'p'/8 HalfReuse: 'e'/1 } 'c'/12 Tile{ HalfReuse: 't'/0 HalfReuse: 'e'/4 }"d source filename in command line"/13 )/15 Tile{ ]] }
    if( ! refalrts::alloc_char( context[12], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], "d source filename in command line", 33 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'e' );
    refalrts::reinit_char( context[11], 'x' );
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_char( context[1], 'e' );
    refalrts::reinit_char( context[0], 't' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::link_brackets( context[7], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[15] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx # TargetModeAlreadySet )
  // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos#3/9 # TargetModeAlreadySet/10 )/8 >/1
  if( ! refalrts::ident_term(  ident_TargetModeAlreadySet, context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Pos#3: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 HalfReuse: 'p'/8 HalfReuse: 't'/1 } 'i'/11 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 }"s --makeexe (-x), --makelib (-l) and -R must appear one time"/12 )/14 Tile{ ]] }
  if( ! refalrts::alloc_char( context[11], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "s --makeexe (-x), --makelib (-l) and -R must appear one time", 60 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[10], 'o' );
  refalrts::reinit_char( context[8], 'p' );
  refalrts::reinit_char( context[1], 't' );
  refalrts::reinit_char( context[0], 'o' );
  refalrts::reinit_char( context[4], 'n' );
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
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L3S2L1("ParseCommandLine\\3$2\\1", 1041172014U, 1740639674U, func_gen_ParseCommandLine_L3S2L1);

static refalrts::FnResult func_gen_ParseCommandLine_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: ( e.$ )
  //GLOBAL GEN: ( t.$ e.$ )
  // </0 & ParseCommandLine\3/4 (/7 t.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBV#0 as range 5
  do {
    // ( t.idx )
    // </0 & ParseCommandLine\3/4 (/7 t.Config#2/9 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: t.Config#2: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ParseCommandLine\3/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/7 AsIs: t.Config#2/9 } Tile{ ]] }
    refalrts::reinit_ident( context[7], ident_Success );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( t.idx e.idx )
  // </0 & ParseCommandLine\3/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 >/1
  // closed e.Errors#2 as range 5
  //DEBUG: t.Config#2: 9
  //DEBUG: e.Errors#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} t.Config#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: </4 HalfReuse: & Map/7 } Tile{ HalfReuse: & ParseCommandLine\3$2\1/8 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_ident( context[0], ident_Fails );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], ref_Map.ref.function );
  refalrts::reinit_name( context[8], ref_gen_ParseCommandLine_L3S2L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L3("ParseCommandLine\\3", 1041172014U, 1740639674U, func_gen_ParseCommandLine_L3);

static refalrts::FnResult func_ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 145 elems
  refalrts::Iter context[145];
  refalrts::zeros( context, 145 );
  // </0 & ParseCommandLine/4 e.Arguments#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arguments#1 as range 2
  //DEBUG: e.Arguments#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & GetOpt/6 (/7 (/8 # CppCompilerExe/9 # Required/10 'c'/11 (/12"cpp-command"/13 )/15 (/16"cpp-command-exe"/17 )/19 )/20 (/21 # CppCompilerLib/22 # Required/23 (/24"cpp-command-lib"/25 )/27 )/28 (/29 # Prefix/30 # Required/31 'p'/32 (/33"prefix"/34 )/36 )/37 (/38 # Reference/39 # Required/40 'r'/41 (/42"reference"/43 )/45 )/46 (/47 # RuntimeFolder/48 # Required/49 'D'/50 (/51"runtime-dir"/52 )/54 (/55"runtime-directory"/56 )/58 )/59 (/60 # SearchFolder/61 # Required/62 'd'/63 (/64"dir"/65 )/67 (/68"directory"/69 )/71 )/72 (/73 # SrefCompiler/74 # Required/75 's'/76 (/77"sref-command"/78 )/80 )/81 (/82 # SrefCompilerOption/83 # Required/84 'X'/85 (/86"thru"/87 )/89 (/90"through"/91 )/93 )/94 (/95 # TargetFileName/96 # Required/97 'o'/98 (/99"target-file"/100 )/102 )/103 (/104 # TargetMode-Exe/105 # None/106 'x'/107 (/108"makeexe"/109 )/111 )/112 (/113 # TargetMode-Lib/114 # None/115 'l'/116 (/117"makelib"/118 )/120 )/121 (/122 # TargetMode-R/123 # None/124 'R'/125 )/126 )/127 Tile{ AsIs: e.Arguments#1/2 } >/128 </129 & Seq/130 (/131 & CheckRequiredOptions/132 (/133 # CppCompilerExe/134 # FILE/135 )/136 )/137 & ParseCommandLine\1/138 (/139 & MapReduce/140 & ParseCommandLine\2/141 )/142 & ParseCommandLine\3/143 >/144 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_GetOpt.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], ident_CppCompilerExe ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], "cpp-command", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[17], context[18], "cpp-command-exe", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[22], ident_CppCompilerLib ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[23], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[25], context[26], "cpp-command-lib", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[30], ident_Prefix ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[31], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[34], context[35], "prefix", 6 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[39], ident_Reference ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[40], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[43], context[44], "reference", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[48], ident_RuntimeFolder ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[49], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], 'D' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[51] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[52], context[53], "runtime-dir", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[54] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[55] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[56], context[57], "runtime-directory", 17 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[58] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[59] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[60] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[61], ident_SearchFolder ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[62], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[63], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[64] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[65], context[66], "dir", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[67] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[68] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[69], context[70], "directory", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[71] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[72] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[73] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[74], ident_SrefCompiler ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[75], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[76], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[77] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[78], context[79], "sref-command", 12 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[80] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[81] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[82] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[83], ident_SrefCompilerOption ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[84], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[85], 'X' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[86] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[87], context[88], "thru", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[89] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[90] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[91], context[92], "through", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[93] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[94] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[95] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[96], ident_TargetFileName ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[97], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[98], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[99] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[100], context[101], "target-file", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[102] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[103] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[104] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[105], ident_TargetMode_Exe ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[106], ident_None ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[107], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[108] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[109], context[110], "makeexe", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[111] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[112] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[113] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[114], ident_TargetMode_Lib ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[115], ident_None ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[116], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[117] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[118], context[119], "makelib", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[120] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[121] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[122] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[123], ident_TargetMode_R ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[124], ident_None ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[125], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[126] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[127] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[128] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[129] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[130], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[131] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[132], ref_CheckRequiredOptions.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[133] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[134], ident_CppCompilerExe ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[135], ident_FILE ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[136] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[137] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[138], ref_gen_ParseCommandLine_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[139] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[140], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[141], ref_gen_ParseCommandLine_L2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[142] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[143], ref_gen_ParseCommandLine_L3.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[144] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[144] );
  refalrts::push_stack( context[129] );
  refalrts::link_brackets( context[139], context[142] );
  refalrts::link_brackets( context[131], context[137] );
  refalrts::link_brackets( context[133], context[136] );
  refalrts::push_stack( context[128] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[7], context[127] );
  refalrts::link_brackets( context[122], context[126] );
  refalrts::link_brackets( context[113], context[121] );
  refalrts::link_brackets( context[117], context[120] );
  refalrts::link_brackets( context[104], context[112] );
  refalrts::link_brackets( context[108], context[111] );
  refalrts::link_brackets( context[95], context[103] );
  refalrts::link_brackets( context[99], context[102] );
  refalrts::link_brackets( context[82], context[94] );
  refalrts::link_brackets( context[90], context[93] );
  refalrts::link_brackets( context[86], context[89] );
  refalrts::link_brackets( context[73], context[81] );
  refalrts::link_brackets( context[77], context[80] );
  refalrts::link_brackets( context[60], context[72] );
  refalrts::link_brackets( context[68], context[71] );
  refalrts::link_brackets( context[64], context[67] );
  refalrts::link_brackets( context[47], context[59] );
  refalrts::link_brackets( context[55], context[58] );
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
  res = refalrts::splice_evar( res, context[128], context[144] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[127] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseCommandLine("ParseCommandLine", 0U, 0U, func_ParseCommandLine);

static refalrts::FnResult func_CheckRequiredOptions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  //FAST GEN: ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) e.$
  // </0 & CheckRequiredOptions/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTT#0 as range 2
  do {
    // ( s.idx e.idx ) ( e.idx ) e.idx
    // </0 & CheckRequiredOptions/4 (/7 s.Flag#1/13 e.Required#1/5 )/8 (/11 e.Errors#1/9 )/12 e.Options-B#1/14 (/18 s.Flag#1/20 s.Num#1/21 e.Value#1/16 )/19 e.Options-E#1/2 >/1
    // closed e.Errors#1 as range 9
    context[22] = context[5];
    context[23] = context[6];
    if( ! refalrts::svar_left( context[13], context[22], context[23] ) )
      continue;
    // closed e.Required#1 as range 22(5)
    context[24] = context[2];
    context[25] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[26] = context[24];
      context[27] = context[25];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[26], context[27] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      if( ! refalrts::repeated_stvar_left( context[20], context[13], context[16], context[17] ) )
        continue;
      // closed e.Options-E#1 as range 26(2)
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      // closed e.Value#1 as range 16
      //DEBUG: e.Errors#1: 9
      //DEBUG: s.Flag#1: 13
      //DEBUG: e.Required#1: 5
      //DEBUG: e.Options-B#1: 14
      //DEBUG: e.Options-E#1: 2
      //DEBUG: s.Num#1: 21
      //DEBUG: e.Value#1: 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} s.Flag#1/13 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckRequiredOptions/4 AsIs: (/7 } Tile{ AsIs: e.Required#1/22(5) } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Errors#1/9 AsIs: )/12 AsIs: e.Options-B#1/14 AsIs: (/18 AsIs: s.Flag#1/20 AsIs: s.Num#1/21 AsIs: e.Value#1/16 AsIs: )/19 AsIs: e.Options-E#1/26(2) AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::splice_to_freelist_open( context[7], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[24], context[25] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx e.idx ) ( e.idx ) e.idx
    // </0 & CheckRequiredOptions/4 (/7 s.Flag#1/13 e.Required#1/5 )/8 (/11 e.Errors#1/9 )/12 e.Options#1/2 >/1
    // closed e.Errors#1 as range 9
    // closed e.Options#1 as range 2
    context[22] = context[5];
    context[23] = context[6];
    if( ! refalrts::svar_left( context[13], context[22], context[23] ) )
      continue;
    // closed e.Required#1 as range 22(5)
    //DEBUG: e.Errors#1: 9
    //DEBUG: e.Options#1: 2
    //DEBUG: s.Flag#1: 13
    //DEBUG: e.Required#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckRequiredOptions/4 AsIs: (/7 } Tile{ AsIs: e.Required#1/22(5) } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Errors#1/9 } (/14 1/15 # No/16 Tile{ AsIs: s.Flag#1/13 } )/17 Tile{ AsIs: )/12 AsIs: e.Options#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[15], 1UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], ident_No ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[14], context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[14], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( ) ( e.idx ) e.idx
  // </0 & CheckRequiredOptions/4 (/7 )/8 (/11 e.Errors#1/9 )/12 e.Options#1/2 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 9
  // closed e.Options#1 as range 2
  //DEBUG: e.Errors#1: 9
  //DEBUG: e.Options#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CheckRequiredOptions/4 (/7 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.Errors#1/9 AsIs: )/12 } Tile{ AsIs: e.Options#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckRequiredOptions("CheckRequiredOptions", 1041172014U, 1740639674U, func_CheckRequiredOptions);

static refalrts::FnResult func_gen_Update_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: ( e.$ ) t.$ s.$ s.$ e.$
  //GLOBAL GEN: ( e.$ ) t.$ s.$ s.$ e.$
  // </0 & Update\1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 s.idxTV#0/11 s.idxTVV#0/12 e.idxTVVV#0/2 >/1
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
  // closed e.idxB#0 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVVV#0 as range 2
  do {
    // ( e.idx ) t.idx s.idx # Success t.idx
    // </0 & Update\1/4 (/7 e.Errors#1/5 )/8 t.Config#1/9 s.LineNum#1/11 # Success/12 t.Config#2/13 >/1
    if( ! refalrts::ident_term(  ident_Success, context[12] ) )
      continue;
    // closed e.Errors#1 as range 5
    context[15] = context[2];
    context[16] = context[3];
    context[14] = refalrts::tvar_left( context[13], context[15], context[16] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: t.Config#1: 9
    //DEBUG: s.LineNum#1: 11
    //DEBUG: e.Errors#1: 5
    //DEBUG: t.Config#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Update\1/4 (/7 {REMOVED TILE} )/8 t.Config#1/9 s.LineNum#1/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 AsIs: t.Config#2/13 } Tile{ AsIs: e.Errors#1/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx s.idx # Fails e.idx
  // </0 & Update\1/4 (/7 e.Errors#1/5 )/8 t.Config#1/9 s.LineNum#1/11 # Fails/12 e.ErrorMessage#2/2 >/1
  if( ! refalrts::ident_term(  ident_Fails, context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 5
  // closed e.ErrorMessage#2 as range 2
  //DEBUG: t.Config#1: 9
  //DEBUG: s.LineNum#1: 11
  //DEBUG: e.Errors#1: 5
  //DEBUG: e.ErrorMessage#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LineNum#1/11 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 AsIs: t.Config#1/9 } Tile{ AsIs: e.Errors#1/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.LineNum1 #11/12 AsIs: e.ErrorMessage#2/2 HalfReuse: )/1 } Tile{ HalfReuse: )/4 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_svar( context[12], context[11] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::reinit_close_bracket( context[4] );
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
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Update_L1("Update\\1", 1041172014U, 1740639674U, func_gen_Update_L1);

static refalrts::FnResult func_Update(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </13 Tile{ AsIs: s.Updater#1/11 } Tile{ AsIs: t.Config#1/5 } Tile{ AsIs: e.Option#1/2 } >/14 </15 & @create_closure@/16 & Update\1/17 Tile{ AsIs: (/9 AsIs: e.Errors#1/7 AsIs: )/10 } t.Config#1/5/18 Tile{ AsIs: s.LineNum#1/12 } >/20 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_gen_Update_L1.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Update("Update", 1041172014U, 1740639674U, func_Update);


//End of file
