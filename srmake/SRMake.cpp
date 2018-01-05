// This file automatically generated from 'SRMake.sref'
// Don't edit! Edit 'SRMake.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3791914142_895848320
static const refalrts::RefalIdentifier ident_CMDm_LINE = refalrts::ident_from_static("CMD-LINE");
static const refalrts::RefalIdentifier ident_CompileOnly = refalrts::ident_from_static("CompileOnly");
static const refalrts::RefalIdentifier ident_DefaultEXE = refalrts::ident_from_static("DefaultEXE");
static const refalrts::RefalIdentifier ident_DefaultTarget = refalrts::ident_from_static("DefaultTarget");
static const refalrts::RefalIdentifier ident_EXE = refalrts::ident_from_static("EXE");
static const refalrts::RefalIdentifier ident_Error = refalrts::ident_from_static("Error");
static const refalrts::RefalIdentifier ident_Fails = refalrts::ident_from_static("Fails");
static const refalrts::RefalIdentifier ident_Include = refalrts::ident_from_static("Include");
static const refalrts::RefalIdentifier ident_LIB = refalrts::ident_from_static("LIB");
static const refalrts::RefalIdentifier ident_NotSet = refalrts::ident_from_static("NotSet");
static const refalrts::RefalIdentifier ident_Output = refalrts::ident_from_static("Output");
static const refalrts::RefalIdentifier ident_OutputWithNative = refalrts::ident_from_static("OutputWithNative");
static const refalrts::RefalIdentifier ident_R = refalrts::ident_from_static("R");
static const refalrts::RefalIdentifier ident_Runtime = refalrts::ident_from_static("Runtime");
static const refalrts::RefalIdentifier ident_Search = refalrts::ident_from_static("Search");
static const refalrts::RefalIdentifier ident_Source = refalrts::ident_from_static("Source");
static const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
static refalrts::ExternalReference ref_ArgList("ArgList", 0U, 0U);
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
static refalrts::ExternalReference ref_CreateFileList("CreateFileList", 0U, 0U);
static refalrts::ExternalReference ref_Exit("Exit", 0U, 0U);
static refalrts::ExternalReference ref_GetPrefix("GetPrefix", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_GetPrefix_B1("GetPrefix:1", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_Go("Go", 0U, 0U);
static refalrts::ExternalReference ref_Main("Main", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_MakeOptionalFlag("MakeOptionalFlag", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_MakeOptionalFlag_B1("MakeOptionalFlag:1", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_MakeProject("MakeProject", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_MakeProject_S1A1("MakeProject$1=1", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_MakeProject_S1A1L1("MakeProject$1=1\\1", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_MakeProject_S1A2("MakeProject$1=2", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_MakeProject_S1A3("MakeProject$1=3", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_MakeProject_S2L1("MakeProject$2\\1", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_MakeSearchFolderFlags("MakeSearchFolderFlags", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_MakeSearchFolderFlags_L1("MakeSearchFolderFlags\\1", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_MakeTargetFileFlag("MakeTargetFileFlag", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_MakeTargetFileFlag_B1("MakeTargetFileFlag:1", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_MakeTargetModeFlag("MakeTargetModeFlag", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_MakeTargetModeFlag_B1("MakeTargetModeFlag:1", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_ParseCommandLine("ParseCommandLine", 0U, 0U);
static refalrts::ExternalReference ref_PrintSrcPos("PrintSrcPos", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_RunSrefCompiler("RunSrefCompiler", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S1L1("RunSrefCompiler$1\\1", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A1("RunSrefCompiler$2=1", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A2("RunSrefCompiler$2=2", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A3("RunSrefCompiler$2=3", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A4("RunSrefCompiler$2=4", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A5("RunSrefCompiler$2=5", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A6("RunSrefCompiler$2=6", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A7("RunSrefCompiler$2=7", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A8("RunSrefCompiler$2=8", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A9("RunSrefCompiler$2=9", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A10("RunSrefCompiler$2=10", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A10L1("RunSrefCompiler$2=10\\1", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A10L2("RunSrefCompiler$2=10\\2", 3791914142U, 895848320U);
static refalrts::ExternalReference ref_StrFromInt("StrFromInt", 0U, 0U);
static refalrts::ExternalReference ref_System("System", 0U, 0U);
static refalrts::ExternalReference ref_WriteLine("WriteLine", 0U, 0U);

static refalrts::FnResult func_Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main/4 HalfReuse: </1 } & ArgList/5 >/6 >/7 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], ref_ArgList.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Main.ref.function );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Go("Go", 0U, 0U, func_Go);


static refalrts::FnResult func_Main(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Main/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    // ( e.idx )
    // </0 & Main/4 (/7 e.Program#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.Program#1 as range 9
    //DEBUG: e.Program#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Program#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'U'/7 }"sage:"/13 >/15 </16 & WriteLine/17"  srmake flags... MainFileName[.sref]"/18 >/20 </21 & WriteLine/22 >/23 </24 & WriteLine/25"flags:"/26 >/28 </29 & WriteLine/30"   [-s path\\to\\srefc.exe]"/31 >/33 </34 & WriteLine/35"   -c c++compiler"/36 >/38 </39 & WriteLine/40"   {-d search-dir}"/41 >/43 </44 & WriteLine/45"   [-o target]"/46 >/48 </49 & WriteLine/50"   -X flags-for-sref"/51 Tile{ HalfReuse: 'c'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[13], context[14], "sage:", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[18], context[19], "  srmake flags... MainFileName[.sref]", 37 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[26], context[27], "flags:", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[31], context[32], "   [-s path\\to\\srefc.exe]", 25 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[36], context[37], "   -c c++compiler", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[40], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[41], context[42], "   {-d search-dir}", 18 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[43] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[44] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[45], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[46], context[47], "   [-o target]", 14 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[48] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[49] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[50], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[51], context[52], "   -X flags-for-sref", 20 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WriteLine.ref.function );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_char( context[8], 'c' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[49] );
    refalrts::push_stack( context[48] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[43] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[38] );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[52] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Main/4 (/7 e.Program#1/9 )/8 e.Arguments#1/11 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  // closed e.Program#1 as range 9
  // closed e.Arguments#1 as range 11
  //DEBUG: e.Program#1: 9
  //DEBUG: e.Arguments#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.Program#1/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeProject/4 HalfReuse: </7 } Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Arguments#1/11 AsIs: >/1 } >/13 Tile{ ]] }
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_MakeProject.ref.function );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], ref_ParseCommandLine.ref.function );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Main("Main", 3791914142U, 895848320U, func_Main);


static refalrts::FnResult func_gen_MakeProject_S1A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunSrefCompiler/4 AsIs: t.Config#4/5 AsIs: e.Units#4/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_RunSrefCompiler.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeProject_S1A3("MakeProject$1=3", 3791914142U, 895848320U, func_gen_MakeProject_S1A3);


static refalrts::FnResult func_gen_MakeProject_S1A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MakeProject$1=2/4 t.Config#1/5 e.SourceFile#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.SourceFile#3 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.SourceFile#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & MakeProject$1=3/8 Tile{ AsIs: </0 Reuse: & CreateFileList/4 AsIs: t.Config#1/5 AsIs: e.SourceFile#3/2 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_gen_MakeProject_S1A3.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_CreateFileList.ref.function );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeProject_S1A2("MakeProject$1=2", 3791914142U, 895848320U, func_gen_MakeProject_S1A2);


static refalrts::FnResult func_gen_MakeProject_S1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & MakeProject$1=1/4 t.Config#1/5 e.Folders#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Folders#2 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Folders#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Folders#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 [*]/8 & MakeProject$1=2/9 t.Config#1/5/10 {*}/12 Tile{ AsIs: </0 Reuse: & Config-GetSourceFile/4 AsIs: t.Config#1/5 } >/13 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_gen_MakeProject_S1A2.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[10], context[11], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[12], context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Configm_GetSourceFile.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeProject_S1A1("MakeProject$1=1", 3791914142U, 895848320U, func_gen_MakeProject_S1A1);


static refalrts::FnResult func_gen_MakeProject_S1A1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MakeProject$1=1\1/4 (/7 s.FolderTag#2/9 e.Folder#2/5 )/8 >/1
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
  // closed e.Folder#2 as range 5
  //DEBUG: s.FolderTag#2: 9
  //DEBUG: e.Folder#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & MakeProject$1=1\1/4 (/7 s.FolderTag#2/9 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Folder#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeProject_S1A1L1("MakeProject$1=1\\1", 3791914142U, 895848320U, func_gen_MakeProject_S1A1L1);


static refalrts::FnResult func_gen_MakeProject_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 }"omm"/10 Tile{ HalfReuse: 'a'/8 }"nd line argument "/12 </14 & StrFromInt/15 Tile{ AsIs: s.Pos#2/9 } >/16": "/17 Tile{ AsIs: e.Message#2/5 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[10], context[11], "omm", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "nd line argument ", 17 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_StrFromInt.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[17], context[18], ": ", 2 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_WriteLine.ref.function );
  refalrts::reinit_char( context[7], 'C' );
  refalrts::reinit_char( context[8], 'a' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
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

static refalrts::NativeReference nat_ref_gen_MakeProject_S2L1("MakeProject$2\\1", 3791914142U, 895848320U, func_gen_MakeProject_S2L1);


static refalrts::FnResult func_MakeProject(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & MakeProject/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # Success t.idx
    // </0 & MakeProject/4 # Success/5 t.Config#1/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Success, context[5] ) )
      continue;
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //DEBUG: t.Config#1: 8

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & MakeProject$1=1/5 AsIs: t.Config#1/8 HalfReuse: {*}/1 } </10 & Map/11 & MakeProject$1=1\1/12 </13 & Config-GetFolders/14 t.Config#1/8/15 >/17 >/18 >/19 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_Map.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ref_gen_MakeProject_S1A1L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ref_Configm_GetFolders.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[8], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[4] );
    refalrts::reinit_name( context[5], ref_gen_MakeProject_S1A1.ref.function );
    refalrts::reinit_unwrapped_closure( context[1], context[4] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[19] );
    refalrts::use( res );
    refalrts::wrap_closure( context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Fails e.idx
  // </0 & MakeProject/4 # Fails/5 e.Errors#1/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_Fails, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 6
  //DEBUG: e.Errors#1: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & MakeProject$2\1/5 AsIs: e.Errors#1/6 AsIs: >/1 } </8 & Exit/9 1/10 >/11 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_Exit.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[10], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Map.ref.function );
  refalrts::reinit_name( context[5], ref_gen_MakeProject_S2L1.ref.function );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeProject("MakeProject", 3791914142U, 895848320U, func_MakeProject);


static refalrts::FnResult func_PrintSrcPos(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & PrintSrcPos/4 t.idx#0/5 >/1
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
  do {
    // # CMD-LINE
    // </0 & PrintSrcPos/4 # CMD-LINE/5 >/1
    if( ! refalrts::ident_term(  ident_CMDm_LINE, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'o'/4 HalfReuse: 'm'/5 HalfReuse: 'm'/1 }"and line"/7 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[7], context[8], "and line", 8 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'c' );
    refalrts::reinit_char( context[4], 'o' );
    refalrts::reinit_char( context[5], 'm' );
    refalrts::reinit_char( context[1], 'm' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx e.idx )
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LineNum#1/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.FileName#1/7 } Tile{ HalfReuse: ':'/5 } Tile{ AsIs: </0 Reuse: & StrFromInt/4 } Tile{ HalfReuse: s.LineNum1 #9/6 AsIs: >/1 ]] }
  refalrts::reinit_char( context[5], ':' );
  refalrts::update_name( context[4], ref_StrFromInt.ref.function );
  refalrts::reinit_svar( context[6], context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintSrcPos("PrintSrcPos", 3791914142U, 895848320U, func_PrintSrcPos);


static refalrts::FnResult func_gen_RunSrefCompiler_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & RunSrefCompiler$1\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    // ( # Error t.idx e.idx )
    // </0 & RunSrefCompiler$1\1/4 (/7 # Error/9 t.SrcPos#2/12 e.Message#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_Error, context[9] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
    if( ! context[13] )
      continue;
    // closed e.Message#2 as range 10
    //DEBUG: t.SrcPos#2: 12
    //DEBUG: e.Message#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: </7 HalfReuse: & PrintSrcPos/9 AsIs: t.SrcPos#2/12 } >/14 Tile{ HalfReuse: ':'/8 } ' '/15 Tile{ AsIs: e.Message#2/10 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], ' ' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WriteLine.ref.function );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], ref_PrintSrcPos.ref.function );
    refalrts::reinit_char( context[8], ':' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[7] );
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
  refalrts::stop_sentence();

  do {
    // ( # Output e.idx )
    // </0 & RunSrefCompiler$1\1/4 (/7 # Output/9 e.Output#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_Output, context[9] ) )
      continue;
    // closed e.Output#2 as range 10
    //DEBUG: e.Output#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RunSrefCompiler$1\1/4 (/7 # Output/9 e.Output#2/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # OutputWithNative ( e.idx ) e.idx )
    // </0 & RunSrefCompiler$1\1/4 (/7 # OutputWithNative/9 (/14 e.Output#2/12 )/15 e.Native#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_OutputWithNative, context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Output#2 as range 12
    // closed e.Native#2 as range 10
    //DEBUG: e.Output#2: 12
    //DEBUG: e.Native#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RunSrefCompiler$1\1/4 (/7 # OutputWithNative/9 (/14 e.Output#2/12 )/15 e.Native#2/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Source ( s.idx e.idx ) e.idx )
    // </0 & RunSrefCompiler$1\1/4 (/7 # Source/9 (/14 s.Dialect#2/16 e.Source#2/12 )/15 e.Output#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_Source, context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Output#2 as range 10
    if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
      continue;
    // closed e.Source#2 as range 12
    //DEBUG: e.Output#2: 10
    //DEBUG: s.Dialect#2: 16
    //DEBUG: e.Source#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RunSrefCompiler$1\1/4 (/7 # Source/9 (/14 s.Dialect#2/16 e.Source#2/12 )/15 e.Output#2/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # Include e.idx )
  // </0 & RunSrefCompiler$1\1/4 (/7 # Include/9 e.Include#2/10 )/8 >/1
  context[10] = context[5];
  context[11] = context[6];
  if( ! refalrts::ident_term(  ident_Include, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Include#2 as range 10
  //DEBUG: e.Include#2: 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RunSrefCompiler$1\1/4 (/7 # Include/9 e.Include#2/10 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S1L1("RunSrefCompiler$1\\1", 3791914142U, 895848320U, func_gen_RunSrefCompiler_S1L1);


static refalrts::FnResult func_gen_RunSrefCompiler_S2A10(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & RunSrefCompiler$2=10/4 e.RetCode#11/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.RetCode#11 as range 2
  //DEBUG: e.RetCode#11: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RunSrefCompiler$2=10/4 e.RetCode#11/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A10("RunSrefCompiler$2=10", 3791914142U, 895848320U, func_gen_RunSrefCompiler_S2A10);


static refalrts::FnResult func_gen_RunSrefCompiler_S2A10L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & RunSrefCompiler$2=10\1/4 (/7 e.Reference#11/5 )/8 >/1
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
  // closed e.Reference#11 as range 5
  //DEBUG: e.Reference#11: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }" --"/9 Tile{ HalfReuse: 'r'/1 }"eferenc"/11 Tile{ HalfReuse: 'e'/0 HalfReuse: '='/4 HalfReuse: '\"'/7 AsIs: e.Reference#11/5 HalfReuse: '\"'/8 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[9], context[10], " --", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "eferenc", 7 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[1], 'r' );
  refalrts::reinit_char( context[0], 'e' );
  refalrts::reinit_char( context[4], '=' );
  refalrts::reinit_char( context[7], '\"' );
  refalrts::reinit_char( context[8], '\"' );
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

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A10L1("RunSrefCompiler$2=10\\1", 3791914142U, 895848320U, func_gen_RunSrefCompiler_S2A10L1);


static refalrts::FnResult func_gen_RunSrefCompiler_S2A10L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & RunSrefCompiler$2=10\2/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    // ( # Output e.idx )
    // </0 & RunSrefCompiler$2=10\2/4 (/7 # Output/9 e.Output#11/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_Output, context[9] ) )
      continue;
    // closed e.Output#11 as range 10
    //DEBUG: e.Output#11: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RunSrefCompiler$2=10\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Output#11/10 HalfReuse: '\"'/8 } Tile{ ]] }
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '\"' );
    refalrts::reinit_char( context[8], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # OutputWithNative ( e.idx ) e.idx )
    // </0 & RunSrefCompiler$2=10\2/4 (/7 # OutputWithNative/9 (/14 e.Output#11/12 )/15 e.Native#11/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_OutputWithNative, context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Output#11 as range 12
    // closed e.Native#11 as range 10
    //DEBUG: e.Output#11: 12
    //DEBUG: e.Native#11: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RunSrefCompiler$2=10\2/4 (/7 {REMOVED TILE} e.Native#11/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '\"'/14 AsIs: e.Output#11/12 HalfReuse: '\"'/15 } Tile{ ]] }
    refalrts::reinit_char( context[9], ' ' );
    refalrts::reinit_char( context[14], '\"' );
    refalrts::reinit_char( context[15], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[15] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Source ( s.idx e.idx ) e.idx )
    // </0 & RunSrefCompiler$2=10\2/4 (/7 # Source/9 (/14 s.Dialect#11/16 e.Source#11/12 )/15 e.Output#11/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_Source, context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Output#11 as range 10
    if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
      continue;
    // closed e.Source#11 as range 12
    //DEBUG: e.Output#11: 10
    //DEBUG: s.Dialect#11: 16
    //DEBUG: e.Source#11: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 # Source/9 (/14 s.Dialect#11/16 {REMOVED TILE} )/15 e.Output#11/10 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\"'/4 } Tile{ AsIs: e.Source#11/12 } Tile{ HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '\"' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # Include e.idx )
  // </0 & RunSrefCompiler$2=10\2/4 (/7 # Include/9 e.Include#11/10 )/8 >/1
  context[10] = context[5];
  context[11] = context[6];
  if( ! refalrts::ident_term(  ident_Include, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Include#11 as range 10
  //DEBUG: e.Include#11: 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RunSrefCompiler$2=10\2/4 (/7 # Include/9 e.Include#11/10 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A10L2("RunSrefCompiler$2=10\\2", 3791914142U, 895848320U, func_gen_RunSrefCompiler_S2A10L2);


static refalrts::FnResult func_gen_RunSrefCompiler_S2A9(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & RunSrefCompiler$2=9/4 (/7 e.SrefCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.TargetFileFlag#6/21 )/24 (/27 e.SearchFolderFlags#7/25 )/28 (/31 e.Prefix#8/29 )/32 (/35 e.References#9/33 )/36 (/39 e.Units#1/37 )/40 e.Prelude#10/2 >/1
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
  // closed e.SrefCompiler#2 as range 5
  // closed e.TargetModeFlag#5 as range 9
  // closed e.CppCompilerExe#3 as range 13
  // closed e.CppCompilerLib#4 as range 17
  // closed e.TargetFileFlag#6 as range 21
  // closed e.SearchFolderFlags#7 as range 25
  // closed e.Prefix#8 as range 29
  // closed e.References#9 as range 33
  // closed e.Units#1 as range 37
  // closed e.Prelude#10 as range 2
  //DEBUG: e.SrefCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.TargetFileFlag#6: 21
  //DEBUG: e.SearchFolderFlags#7: 25
  //DEBUG: e.Prefix#8: 29
  //DEBUG: e.References#9: 33
  //DEBUG: e.Units#1: 37
  //DEBUG: e.Prelude#10: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunSrefCompiler$2=10/4 HalfReuse: </7 } & System/41 Tile{ AsIs: e.SrefCompiler#2/5 } Tile{ AsIs: e.TargetModeFlag#5/9 } Tile{ AsIs: e.CppCompilerExe#3/13 } Tile{ AsIs: e.CppCompilerLib#4/17 } Tile{ AsIs: e.TargetFileFlag#6/21 } Tile{ AsIs: e.SearchFolderFlags#7/25 } Tile{ HalfReuse: ' '/16 HalfReuse: '-'/19 } Tile{ HalfReuse: '-'/20 HalfReuse: 'p'/23 } 'r'/42 Tile{ HalfReuse: 'e'/24 HalfReuse: 'f'/27 } Tile{ HalfReuse: 'i'/12 HalfReuse: 'x'/15 } Tile{ HalfReuse: '='/28 HalfReuse: '\"'/31 AsIs: e.Prefix#8/29 HalfReuse: '\"'/32 HalfReuse: ' '/35 } Tile{ HalfReuse: '-'/8 HalfReuse: '-'/11 }"prelude=\""/43 Tile{ AsIs: e.Prelude#10/2 } '\"'/45 </46 & Map/47 & RunSrefCompiler$2=10\1/48 Tile{ AsIs: e.References#9/33 } >/49 </50 Tile{ HalfReuse: & Map/36 HalfReuse: & RunSrefCompiler$2=10\2/39 AsIs: e.Units#1/37 HalfReuse: >/40 } >/51 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[41], ref_System.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[43], context[44], "prelude=\"", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], '\"' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[47], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[48], ref_gen_RunSrefCompiler_S2A10L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[49] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[50] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[51] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_RunSrefCompiler_S2A10.ref.function );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_char( context[16], ' ' );
  refalrts::reinit_char( context[19], '-' );
  refalrts::reinit_char( context[20], '-' );
  refalrts::reinit_char( context[23], 'p' );
  refalrts::reinit_char( context[24], 'e' );
  refalrts::reinit_char( context[27], 'f' );
  refalrts::reinit_char( context[12], 'i' );
  refalrts::reinit_char( context[15], 'x' );
  refalrts::reinit_char( context[28], '=' );
  refalrts::reinit_char( context[31], '\"' );
  refalrts::reinit_char( context[32], '\"' );
  refalrts::reinit_char( context[35], ' ' );
  refalrts::reinit_char( context[8], '-' );
  refalrts::reinit_char( context[11], '-' );
  refalrts::reinit_name( context[36], ref_Map.ref.function );
  refalrts::reinit_name( context[39], ref_gen_RunSrefCompiler_S2A10L2.ref.function );
  refalrts::reinit_close_call( context[40] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[51] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[50] );
  refalrts::push_stack( context[49] );
  refalrts::push_stack( context[46] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[51], context[51] );
  res = refalrts::splice_evar( res, context[36], context[40] );
  res = refalrts::splice_evar( res, context[49], context[50] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[45], context[48] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[43], context[44] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[28], context[35] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[42], context[42] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[41], context[41] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A9("RunSrefCompiler$2=9", 3791914142U, 895848320U, func_gen_RunSrefCompiler_S2A9);


static refalrts::FnResult func_gen_RunSrefCompiler_S2A8(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & RunSrefCompiler$2=8/4 (/7 e.SrefCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.TargetFileFlag#6/21 )/24 (/27 e.SearchFolderFlags#7/25 )/28 (/31 e.Prefix#8/29 )/32 (/35 e.Units#1/33 )/36 t.Config#1/37 e.References#9/2 >/1
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
  // closed e.SrefCompiler#2 as range 5
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
  //DEBUG: e.SrefCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.TargetFileFlag#6: 21
  //DEBUG: e.SearchFolderFlags#7: 25
  //DEBUG: e.Prefix#8: 29
  //DEBUG: e.Units#1: 33
  //DEBUG: t.Config#1: 37
  //DEBUG: e.References#9: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </39 Tile{ HalfReuse: [*]/0 Reuse: & RunSrefCompiler$2=9/4 AsIs: (/7 AsIs: e.SrefCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetModeFlag#5/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerExe#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.CppCompilerLib#4/17 AsIs: )/20 AsIs: (/23 AsIs: e.TargetFileFlag#6/21 AsIs: )/24 AsIs: (/27 AsIs: e.SearchFolderFlags#7/25 AsIs: )/28 AsIs: (/31 AsIs: e.Prefix#8/29 AsIs: )/32 AsIs: (/35 } Tile{ AsIs: e.References#9/2 } )/40 (/41 Tile{ AsIs: e.Units#1/33 } )/42 {*}/43 </44 Tile{ HalfReuse: & Config-GetPrelude/36 AsIs: t.Config#1/37 } >/45 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[43], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[44] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[45] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_RunSrefCompiler_S2A9.ref.function );
  refalrts::reinit_name( context[36], ref_Configm_GetPrelude.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[39] );
  refalrts::push_stack( context[45] );
  refalrts::push_stack( context[44] );
  refalrts::link_brackets( context[41], context[42] );
  refalrts::link_brackets( context[35], context[40] );
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
  res = refalrts::splice_evar( res, context[45], context[45] );
  res = refalrts::splice_evar( res, context[36], context[38] );
  res = refalrts::splice_evar( res, context[42], context[44] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[40], context[41] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[35] );
  res = refalrts::splice_evar( res, context[39], context[39] );
  refalrts::use( res );
  refalrts::wrap_closure( context[43] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A8("RunSrefCompiler$2=8", 3791914142U, 895848320U, func_gen_RunSrefCompiler_S2A8);


static refalrts::FnResult func_gen_RunSrefCompiler_S2A7(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & RunSrefCompiler$2=7/4 (/7 e.SrefCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.TargetFileFlag#6/21 )/24 (/27 e.SearchFolderFlags#7/25 )/28 (/31 e.Units#1/29 )/32 t.Config#1/33 e.Prefix#8/2 >/1
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
  // closed e.SrefCompiler#2 as range 5
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
  //DEBUG: e.SrefCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.TargetFileFlag#6: 21
  //DEBUG: e.SearchFolderFlags#7: 25
  //DEBUG: e.Units#1: 29
  //DEBUG: t.Config#1: 33
  //DEBUG: e.Prefix#8: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </35 Tile{ HalfReuse: [*]/0 Reuse: & RunSrefCompiler$2=8/4 AsIs: (/7 AsIs: e.SrefCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetModeFlag#5/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerExe#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.CppCompilerLib#4/17 AsIs: )/20 AsIs: (/23 AsIs: e.TargetFileFlag#6/21 AsIs: )/24 AsIs: (/27 AsIs: e.SearchFolderFlags#7/25 AsIs: )/28 AsIs: (/31 } Tile{ AsIs: e.Prefix#8/2 } )/36 (/37 Tile{ AsIs: e.Units#1/29 } Tile{ AsIs: )/32 AsIs: t.Config#1/33 } {*}/38 </39 & Config-GetReferences/40 t.Config#1/33/41 >/43 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[38], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[40], ref_Configm_GetReferences.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[41], context[42], context[33], context[34]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[43] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_RunSrefCompiler_S2A8.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[43] );
  refalrts::push_stack( context[39] );
  refalrts::link_brackets( context[37], context[32] );
  refalrts::link_brackets( context[31], context[36] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[43] );
  res = refalrts::splice_evar( res, context[32], context[34] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[31] );
  res = refalrts::splice_evar( res, context[35], context[35] );
  refalrts::use( res );
  refalrts::wrap_closure( context[38] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A7("RunSrefCompiler$2=7", 3791914142U, 895848320U, func_gen_RunSrefCompiler_S2A7);


static refalrts::FnResult func_gen_RunSrefCompiler_S2A6(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & RunSrefCompiler$2=6/4 (/7 e.SrefCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.TargetFileFlag#6/21 )/24 (/27 e.Units#1/25 )/28 t.Config#1/29 e.SearchFolderFlags#7/2 >/1
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
  // closed e.SrefCompiler#2 as range 5
  // closed e.TargetModeFlag#5 as range 9
  // closed e.CppCompilerExe#3 as range 13
  // closed e.CppCompilerLib#4 as range 17
  // closed e.TargetFileFlag#6 as range 21
  // closed e.Units#1 as range 25
  context[30] = refalrts::tvar_left( context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  // closed e.SearchFolderFlags#7 as range 2
  //DEBUG: e.SrefCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.TargetFileFlag#6: 21
  //DEBUG: e.Units#1: 25
  //DEBUG: t.Config#1: 29
  //DEBUG: e.SearchFolderFlags#7: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: [*]/0 Reuse: & RunSrefCompiler$2=7/4 AsIs: (/7 AsIs: e.SrefCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetModeFlag#5/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerExe#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.CppCompilerLib#4/17 AsIs: )/20 AsIs: (/23 AsIs: e.TargetFileFlag#6/21 AsIs: )/24 AsIs: (/27 } Tile{ AsIs: e.SearchFolderFlags#7/2 } )/32 (/33 Tile{ AsIs: e.Units#1/25 } Tile{ AsIs: )/28 AsIs: t.Config#1/29 } {*}/34 </35 & GetPrefix/36 t.Config#1/29/37 >/39 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[34], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[36], ref_GetPrefix.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[37], context[38], context[29], context[30]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[39] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_RunSrefCompiler_S2A7.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[39] );
  refalrts::push_stack( context[35] );
  refalrts::link_brackets( context[33], context[28] );
  refalrts::link_brackets( context[27], context[32] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[34], context[39] );
  res = refalrts::splice_evar( res, context[28], context[30] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[27] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  refalrts::use( res );
  refalrts::wrap_closure( context[34] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A6("RunSrefCompiler$2=6", 3791914142U, 895848320U, func_gen_RunSrefCompiler_S2A6);


static refalrts::FnResult func_gen_RunSrefCompiler_S2A5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & RunSrefCompiler$2=5/4 (/7 e.SrefCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.Units#1/21 )/24 t.Config#1/25 e.TargetFileFlag#6/2 >/1
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
  // closed e.SrefCompiler#2 as range 5
  // closed e.TargetModeFlag#5 as range 9
  // closed e.CppCompilerExe#3 as range 13
  // closed e.CppCompilerLib#4 as range 17
  // closed e.Units#1 as range 21
  context[26] = refalrts::tvar_left( context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  // closed e.TargetFileFlag#6 as range 2
  //DEBUG: e.SrefCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.Units#1: 21
  //DEBUG: t.Config#1: 25
  //DEBUG: e.TargetFileFlag#6: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </27 Tile{ HalfReuse: [*]/0 Reuse: & RunSrefCompiler$2=6/4 AsIs: (/7 AsIs: e.SrefCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetModeFlag#5/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerExe#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.CppCompilerLib#4/17 AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.TargetFileFlag#6/2 } )/28 (/29 Tile{ AsIs: e.Units#1/21 } Tile{ AsIs: )/24 AsIs: t.Config#1/25 } {*}/30 </31 & MakeSearchFolderFlags/32 t.Config#1/25/33 >/35 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[30], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], ref_MakeSearchFolderFlags.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[33], context[34], context[25], context[26]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_RunSrefCompiler_S2A6.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[31] );
  refalrts::link_brackets( context[29], context[24] );
  refalrts::link_brackets( context[23], context[28] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[30], context[35] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[23] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  refalrts::use( res );
  refalrts::wrap_closure( context[30] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A5("RunSrefCompiler$2=5", 3791914142U, 895848320U, func_gen_RunSrefCompiler_S2A5);


static refalrts::FnResult func_gen_RunSrefCompiler_S2A4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & RunSrefCompiler$2=4/4 (/7 e.SrefCompiler#2/5 )/8 (/11 e.CppCompilerExe#3/9 )/12 (/15 e.CppCompilerLib#4/13 )/16 (/19 e.Units#1/17 )/20 t.Config#1/21 e.TargetModeFlag#5/2 >/1
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
  // closed e.SrefCompiler#2 as range 5
  // closed e.CppCompilerExe#3 as range 9
  // closed e.CppCompilerLib#4 as range 13
  // closed e.Units#1 as range 17
  context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  // closed e.TargetModeFlag#5 as range 2
  //DEBUG: e.SrefCompiler#2: 5
  //DEBUG: e.CppCompilerExe#3: 9
  //DEBUG: e.CppCompilerLib#4: 13
  //DEBUG: e.Units#1: 17
  //DEBUG: t.Config#1: 21
  //DEBUG: e.TargetModeFlag#5: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & RunSrefCompiler$2=5/7 } (/23 Tile{ AsIs: e.SrefCompiler#2/5 } )/24 (/25 Tile{ AsIs: e.TargetModeFlag#5/2 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.CppCompilerExe#3/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerLib#4/13 AsIs: )/16 AsIs: (/19 AsIs: e.Units#1/17 AsIs: )/20 AsIs: t.Config#1/21 } {*}/26 </27 & MakeTargetFileFlag/28 t.Config#1/21/29 >/31 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[26], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], ref_MakeTargetFileFlag.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[29], context[30], context[21], context[22]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_RunSrefCompiler_S2A5.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[27] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[25], context[8] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[31] );
  res = refalrts::splice_evar( res, context[8], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::use( res );
  refalrts::wrap_closure( context[26] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A4("RunSrefCompiler$2=4", 3791914142U, 895848320U, func_gen_RunSrefCompiler_S2A4);


static refalrts::FnResult func_gen_RunSrefCompiler_S2A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & RunSrefCompiler$2=3/4 (/7 e.SrefCompiler#2/5 )/8 (/11 e.CppCompilerExe#3/9 )/12 (/15 e.Units#1/13 )/16 t.Config#1/17 e.CppCompilerLib#4/2 >/1
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
  // closed e.SrefCompiler#2 as range 5
  // closed e.CppCompilerExe#3 as range 9
  // closed e.Units#1 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.CppCompilerLib#4 as range 2
  //DEBUG: e.SrefCompiler#2: 5
  //DEBUG: e.CppCompilerExe#3: 9
  //DEBUG: e.Units#1: 13
  //DEBUG: t.Config#1: 17
  //DEBUG: e.CppCompilerLib#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </19 Tile{ HalfReuse: [*]/0 Reuse: & RunSrefCompiler$2=4/4 AsIs: (/7 AsIs: e.SrefCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.CppCompilerExe#3/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.CppCompilerLib#4/2 } )/20 (/21 Tile{ AsIs: e.Units#1/13 } Tile{ AsIs: )/16 AsIs: t.Config#1/17 } {*}/22 </23 & MakeTargetModeFlag/24 t.Config#1/17/25 >/27 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[22], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], ref_MakeTargetModeFlag.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[25], context[26], context[17], context[18]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_RunSrefCompiler_S2A4.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[21], context[16] );
  refalrts::link_brackets( context[15], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[27] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::use( res );
  refalrts::wrap_closure( context[22] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A3("RunSrefCompiler$2=3", 3791914142U, 895848320U, func_gen_RunSrefCompiler_S2A3);


static refalrts::FnResult func_gen_RunSrefCompiler_S2A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & RunSrefCompiler$2=2/4 (/7 e.SrefCompiler#2/5 )/8 (/11 e.Units#1/9 )/12 t.Config#1/13 e.CppCompilerExe#3/2 >/1
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
  // closed e.SrefCompiler#2 as range 5
  // closed e.Units#1 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.CppCompilerExe#3 as range 2
  //DEBUG: e.SrefCompiler#2: 5
  //DEBUG: e.Units#1: 9
  //DEBUG: t.Config#1: 13
  //DEBUG: e.CppCompilerExe#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: [*]/0 Reuse: & RunSrefCompiler$2=3/4 AsIs: (/7 AsIs: e.SrefCompiler#2/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.CppCompilerExe#3/2 } )/16 (/17 Tile{ AsIs: e.Units#1/9 } Tile{ AsIs: )/12 AsIs: t.Config#1/13 } {*}/18 </19 & MakeOptionalFlag/20 & Config-GetCppCompilerLib/21 t.Config#1/13/22"cpp-command-lib"/24 >/26 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[18], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], ref_MakeOptionalFlag.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ref_Configm_GetCppCompilerLib.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[22], context[23], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[24], context[25], "cpp-command-lib", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_RunSrefCompiler_S2A3.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[19] );
  refalrts::link_brackets( context[17], context[12] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[26] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A2("RunSrefCompiler$2=2", 3791914142U, 895848320U, func_gen_RunSrefCompiler_S2A2);


static refalrts::FnResult func_gen_RunSrefCompiler_S2A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & RunSrefCompiler$2=1/4 (/7 e.Units#1/5 )/8 t.Config#1/9 e.SrefCompiler#2/2 >/1
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
  // closed e.SrefCompiler#2 as range 2
  //DEBUG: e.Units#1: 5
  //DEBUG: t.Config#1: 9
  //DEBUG: e.SrefCompiler#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } [*]/11 & RunSrefCompiler$2=2/12 (/13 Tile{ AsIs: e.SrefCompiler#2/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Units#1/5 AsIs: )/8 AsIs: t.Config#1/9 } {*}/14 </15 & MakeOptionalFlag/16 & Config-GetCppCompilerExe/17 t.Config#1/9/18"cpp-command-exe"/20 >/22 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_closure_head( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_gen_RunSrefCompiler_S2A2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[14], context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_MakeOptionalFlag.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_Configm_GetCppCompilerExe.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[18], context[19], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[20], context[21], "cpp-command-exe", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[22] );
  res = refalrts::splice_evar( res, context[4], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A1("RunSrefCompiler$2=1", 3791914142U, 895848320U, func_gen_RunSrefCompiler_S2A1);


static refalrts::FnResult func_RunSrefCompiler(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & RunSrefCompiler/4 t.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // t.idx e.idx
    // </0 & RunSrefCompiler/4 t.Config#1/5 e.Units-B#1/9 (/15 # Error/17 t.SrcPos#1/18 e.Message#1/13 )/16 e.Units-E#1/11 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = refalrts::ident_left(  ident_Error, context[13], context[14] );
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

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} t.Config#1/5 e.Units-B#1/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } & RunSrefCompiler$1\1/20 Tile{ AsIs: (/15 AsIs: # Error/17 AsIs: t.SrcPos#1/18 AsIs: e.Message#1/13 AsIs: )/16 AsIs: e.Units-E#1/11 AsIs: >/1 } </21 & Exit/22 1/23 >/24 Tile{ ]] }
      if( ! refalrts::alloc_name( context[20], ref_gen_RunSrefCompiler_S1L1.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[22], ref_Exit.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[23], 1UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_Map.ref.function );
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[21] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[24] );
      res = refalrts::splice_evar( res, context[15], context[1] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & RunSrefCompiler/4 t.Config#1/5 e.Units#1/7 >/1
  context[7] = context[2];
  context[8] = context[3];
  // closed e.Units#1 as range 7
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Units#1: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 [*]/10 & RunSrefCompiler$2=1/11 (/12 Tile{ AsIs: e.Units#1/7 } )/13 t.Config#1/5/14 {*}/16 Tile{ AsIs: </0 Reuse: & Config-GetSrefCompiler/4 AsIs: t.Config#1/5 } >/17 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_gen_RunSrefCompiler_S2A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[16], context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Configm_GetSrefCompiler.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RunSrefCompiler("RunSrefCompiler", 3791914142U, 895848320U, func_RunSrefCompiler);


static refalrts::FnResult func_gen_MakeOptionalFlag_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & MakeOptionalFlag:1/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    // ( e.idx )
    // </0 & MakeOptionalFlag:1/4 (/7 e.LongOptionName#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.LongOptionName#1 as range 9
    //DEBUG: e.LongOptionName#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & MakeOptionalFlag:1/4 (/7 e.LongOptionName#1/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & MakeOptionalFlag:1/4 (/7 e.LongOptionName#1/9 )/8 e.Value#2/11 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  // closed e.LongOptionName#1 as range 9
  // closed e.Value#2 as range 11
  //DEBUG: e.LongOptionName#1: 9
  //DEBUG: e.Value#2: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '-'/4 HalfReuse: '-'/7 AsIs: e.LongOptionName#1/9 HalfReuse: '='/8 } '\"'/13 Tile{ AsIs: e.Value#2/11 } Tile{ HalfReuse: '\"'/1 ]] }
  if( ! refalrts::alloc_char( context[13], '\"' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], ' ' );
  refalrts::reinit_char( context[4], '-' );
  refalrts::reinit_char( context[7], '-' );
  refalrts::reinit_char( context[8], '=' );
  refalrts::reinit_char( context[1], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeOptionalFlag_B1("MakeOptionalFlag:1", 3791914142U, 895848320U, func_gen_MakeOptionalFlag_B1);


static refalrts::FnResult func_MakeOptionalFlag(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 [*]/9 & MakeOptionalFlag:1/10 (/11 Tile{ AsIs: e.LongOptionName#1/2 } )/12 Tile{ HalfReuse: {*}/0 HalfReuse: </4 AsIs: s.Getter#1/5 AsIs: t.Config#1/6 } >/13 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_gen_MakeOptionalFlag_B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_unwrapped_closure( context[0], context[9] );
  refalrts::reinit_open_call( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[4] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeOptionalFlag("MakeOptionalFlag", 3791914142U, 895848320U, func_MakeOptionalFlag);


static refalrts::FnResult func_gen_MakeTargetModeFlag_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & MakeTargetModeFlag:1/4 s.idx#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // # DefaultEXE
    // </0 & MakeTargetModeFlag:1/4 # DefaultEXE/5 >/1
    if( ! refalrts::ident_term(  ident_DefaultEXE, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & MakeTargetModeFlag:1/4 # DefaultEXE/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # EXE
    // </0 & MakeTargetModeFlag:1/4 # EXE/5 >/1
    if( ! refalrts::ident_term(  ident_EXE, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '-'/4 HalfReuse: '-'/5 HalfReuse: 'm'/1 }"akeexe"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "akeexe", 6 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '-' );
    refalrts::reinit_char( context[5], '-' );
    refalrts::reinit_char( context[1], 'm' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # LIB
    // </0 & MakeTargetModeFlag:1/4 # LIB/5 >/1
    if( ! refalrts::ident_term(  ident_LIB, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '-'/4 HalfReuse: '-'/5 HalfReuse: 'm'/1 }"akelib"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "akelib", 6 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '-' );
    refalrts::reinit_char( context[5], '-' );
    refalrts::reinit_char( context[1], 'm' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # R
    // </0 & MakeTargetModeFlag:1/4 # R/5 >/1
    if( ! refalrts::ident_term(  ident_R, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: '-'/5 HalfReuse: 'R'/1 ]] }
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[5], '-' );
    refalrts::reinit_char( context[1], 'R' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # CompileOnly
  // </0 & MakeTargetModeFlag:1/4 # CompileOnly/5 >/1
  if( ! refalrts::ident_term(  ident_CompileOnly, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '-'/4 HalfReuse: '-'/5 HalfReuse: 'c'/1 }"ompile-only"/6 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "ompile-only", 11 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], ' ' );
  refalrts::reinit_char( context[4], '-' );
  refalrts::reinit_char( context[5], '-' );
  refalrts::reinit_char( context[1], 'c' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeTargetModeFlag_B1("MakeTargetModeFlag:1", 3791914142U, 895848320U, func_gen_MakeTargetModeFlag_B1);


static refalrts::FnResult func_MakeTargetModeFlag(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & MakeTargetModeFlag:1/8 Tile{ AsIs: </0 Reuse: & Config-GetTargetMode/4 AsIs: t.Config#1/5 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_gen_MakeTargetModeFlag_B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Configm_GetTargetMode.ref.function );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeTargetModeFlag("MakeTargetModeFlag", 3791914142U, 895848320U, func_MakeTargetModeFlag);


static refalrts::FnResult func_gen_MakeTargetFileFlag_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & MakeTargetFileFlag:1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // # DefaultTarget
    // </0 & MakeTargetFileFlag:1/4 # DefaultTarget/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::ident_left(  ident_DefaultTarget, context[5], context[6] );
    if( ! context[7] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & MakeTargetFileFlag:1/4 # DefaultTarget/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & MakeTargetFileFlag:1/4 e.TargetFile#2/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.TargetFile#2 as range 5
  //DEBUG: e.TargetFile#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }" --target-file"/7 Tile{ HalfReuse: '='/0 HalfReuse: '\"'/4 AsIs: e.TargetFile#2/5 HalfReuse: '\"'/1 ]] }
  if( ! refalrts::alloc_chars( context[7], context[8], " --target-file", 14 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], '=' );
  refalrts::reinit_char( context[4], '\"' );
  refalrts::reinit_char( context[1], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeTargetFileFlag_B1("MakeTargetFileFlag:1", 3791914142U, 895848320U, func_gen_MakeTargetFileFlag_B1);


static refalrts::FnResult func_MakeTargetFileFlag(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & MakeTargetFileFlag:1/8 Tile{ AsIs: </0 Reuse: & Config-GetTargetFileName/4 AsIs: t.Config#1/5 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_gen_MakeTargetFileFlag_B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Configm_GetTargetFileName.ref.function );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeTargetFileFlag("MakeTargetFileFlag", 3791914142U, 895848320U, func_MakeTargetFileFlag);


static refalrts::FnResult func_gen_MakeSearchFolderFlags_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & MakeSearchFolderFlags\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    // ( # Search e.idx )
    // </0 & MakeSearchFolderFlags\1/4 (/7 # Search/9 e.Folder#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term(  ident_Search, context[9] ) )
      continue;
    // closed e.Folder#2 as range 10
    //DEBUG: e.Folder#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }" --"/12 Tile{ HalfReuse: 'd'/1 }"irecto"/14 Tile{ HalfReuse: 'r'/0 HalfReuse: 'y'/4 HalfReuse: '='/7 HalfReuse: '\"'/9 AsIs: e.Folder#2/10 HalfReuse: '\"'/8 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[12], context[13], " --", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "irecto", 6 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[1], 'd' );
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'y' );
    refalrts::reinit_char( context[7], '=' );
    refalrts::reinit_char( context[9], '\"' );
    refalrts::reinit_char( context[8], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # Runtime e.idx )
  // </0 & MakeSearchFolderFlags\1/4 (/7 # Runtime/9 e.Folder#2/10 )/8 >/1
  context[10] = context[5];
  context[11] = context[6];
  if( ! refalrts::ident_term(  ident_Runtime, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folder#2 as range 10
  //DEBUG: e.Folder#2: 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }" --"/12 Tile{ HalfReuse: 'r'/1 }"untime-directo"/14 Tile{ HalfReuse: 'r'/0 HalfReuse: 'y'/4 HalfReuse: '='/7 HalfReuse: '\"'/9 AsIs: e.Folder#2/10 HalfReuse: '\"'/8 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[12], context[13], " --", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[14], context[15], "untime-directo", 14 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[1], 'r' );
  refalrts::reinit_char( context[0], 'r' );
  refalrts::reinit_char( context[4], 'y' );
  refalrts::reinit_char( context[7], '=' );
  refalrts::reinit_char( context[9], '\"' );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeSearchFolderFlags_L1("MakeSearchFolderFlags\\1", 3791914142U, 895848320U, func_gen_MakeSearchFolderFlags_L1);


static refalrts::FnResult func_MakeSearchFolderFlags(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map/8 & MakeSearchFolderFlags\1/9 Tile{ AsIs: </0 Reuse: & Config-GetFolders/4 AsIs: t.Config#1/5 AsIs: >/1 } >/10 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_gen_MakeSearchFolderFlags_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Configm_GetFolders.ref.function );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeSearchFolderFlags("MakeSearchFolderFlags", 3791914142U, 895848320U, func_MakeSearchFolderFlags);


static refalrts::FnResult func_gen_GetPrefix_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & GetPrefix:1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // # NotSet
    // </0 & GetPrefix:1/4 # NotSet/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::ident_left(  ident_NotSet, context[5], context[6] );
    if( ! context[7] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & GetPrefix:1/4 # NotSet/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & GetPrefix:1/4 e.Prefix#2/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Prefix#2 as range 5
  //DEBUG: e.Prefix#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & GetPrefix:1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Prefix#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GetPrefix_B1("GetPrefix:1", 3791914142U, 895848320U, func_gen_GetPrefix_B1);


static refalrts::FnResult func_GetPrefix(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & GetPrefix:1/8 Tile{ AsIs: </0 Reuse: & Config-GetPrefix/4 AsIs: t.Config#1/5 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_gen_GetPrefix_B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Configm_GetPrefix.ref.function );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetPrefix("GetPrefix", 3791914142U, 895848320U, func_GetPrefix);


//End of file
