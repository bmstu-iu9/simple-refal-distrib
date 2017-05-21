// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_CMD_LINE = refalrts::ident_from_static("CMD-LINE");
const refalrts::RefalIdentifier ident_DefaultTarget = refalrts::ident_from_static("DefaultTarget");
const refalrts::RefalIdentifier ident_Error = refalrts::ident_from_static("Error");
const refalrts::RefalIdentifier ident_Fails = refalrts::ident_from_static("Fails");
const refalrts::RefalIdentifier ident_NotSet = refalrts::ident_from_static("NotSet");
const refalrts::RefalIdentifier ident_Output = refalrts::ident_from_static("Output");
const refalrts::RefalIdentifier ident_OutputWithNative = refalrts::ident_from_static("OutputWithNative");
const refalrts::RefalIdentifier ident_Runtime = refalrts::ident_from_static("Runtime");
const refalrts::RefalIdentifier ident_Search = refalrts::ident_from_static("Search");
const refalrts::RefalIdentifier ident_Source = refalrts::ident_from_static("Source");
const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
static refalrts::ExternalReference ref_ArgList("ArgList", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_WriteLine("WriteLine", 0U, 0U);
static refalrts::ExternalReference ref_StrFromInt("StrFromInt", 0U, 0U);
static refalrts::ExternalReference ref_Exit("Exit", 0U, 0U);
static refalrts::ExternalReference ref_System("System", 0U, 0U);
static refalrts::ExternalReference ref_ParseCommandLine("ParseCommandLine", 0U, 0U);
static refalrts::ExternalReference ref_CreateFileList("CreateFileList", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetFolders("Config-GetFolders", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetSourceFile("Config-GetSourceFile", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetSrefCompiler("Config-GetSrefCompiler", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetCppCompilerExe("Config-GetCppCompilerExe", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetCppCompilerLib("Config-GetCppCompilerLib", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetPrefix("Config-GetPrefix", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetReferences("Config-GetReferences", 0U, 0U);
static refalrts::ExternalReference ref_Config_GetTargetFileName("Config-GetTargetFileName", 0U, 0U);
static refalrts::ExternalReference ref_Go("Go", 0U, 0U);
static refalrts::ExternalReference ref_Main("Main", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_MakeProject_S1A3("MakeProject$1=3", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_MakeProject_S1A2("MakeProject$1=2", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_MakeProject_S1A1("MakeProject$1=1", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_MakeProject_S1A1L1("MakeProject$1=1\\1", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_MakeProject_S2L1("MakeProject$2\\1", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_MakeProject("MakeProject", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_PrintSrcPos("PrintSrcPos", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S1L1("RunSrefCompiler$1\\1", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2L1("RunSrefCompiler$2\\1", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2L2("RunSrefCompiler$2\\2", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A7("RunSrefCompiler$2=7", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A6("RunSrefCompiler$2=6", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A5("RunSrefCompiler$2=5", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A4("RunSrefCompiler$2=4", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A3("RunSrefCompiler$2=3", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A2("RunSrefCompiler$2=2", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_RunSrefCompiler_S2A1("RunSrefCompiler$2=1", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_RunSrefCompiler("RunSrefCompiler", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_MakeTargetFileFlag_L1("MakeTargetFileFlag\\1", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_MakeTargetFileFlag("MakeTargetFileFlag", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_MakeSearchFolderFlags_L1("MakeSearchFolderFlags\\1", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_MakeSearchFolderFlags("MakeSearchFolderFlags", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_gen_GetPrefix_L1("GetPrefix\\1", 2918892661U, 3066597135U);
static refalrts::ExternalReference ref_GetPrefix("GetPrefix", 2918892661U, 3066597135U);

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
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
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
    // </0 & Main/4 (/7 e.Program#1/5 )/8 >/1
    context[49] = context[2];
    context[50] = context[3];
    if( ! refalrts::empty_seq( context[49], context[50] ) )
      continue;
    // closed e.Program#1 as range 5
    //DEBUG: e.Program#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Program#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'U'/7 }"sage:"/9 >/11 </12 & WriteLine/13"  srmake flags... MainFileName[.sref]"/14 >/16 </17 & WriteLine/18 >/19 </20 & WriteLine/21"flags:"/22 >/24 </25 & WriteLine/26"   [-s path\\to\\srefc.exe]"/27 >/29 </30 & WriteLine/31"   -c c++compiler"/32 >/34 </35 & WriteLine/36"   {-d search-dir}"/37 >/39 </40 & WriteLine/41"   [-o target]"/42 >/44 </45 & WriteLine/46"   -X flags-for-sref"/47 Tile{ HalfReuse: 'c'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[9], context[10], "sage:", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "  srmake flags... MainFileName[.sref]", 37 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], "flags:", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[27], context[28], "   [-s path\\to\\srefc.exe]", 25 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[32], context[33], "   -c c++compiler", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[36], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[37], context[38], "   {-d search-dir}", 18 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[41], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[42], context[43], "   [-o target]", 14 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[44] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[45] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[46], ref_WriteLine.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[47], context[48], "   -X flags-for-sref", 20 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WriteLine.ref.function );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_char( context[8], 'c' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[45] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[48] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Main/4 (/7 e.Program#1/5 )/8 e.Arguments#1/2 >/1
  // closed e.Program#1 as range 5
  // closed e.Arguments#1 as range 2
  //DEBUG: e.Program#1: 5
  //DEBUG: e.Arguments#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.Program#1/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeProject/4 HalfReuse: </7 } Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Arguments#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_MakeProject.ref.function );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], ref_ParseCommandLine.ref.function );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Main("Main", 2918892661U, 3066597135U, func_Main);

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

static refalrts::NativeReference nat_ref_gen_MakeProject_S1A3("MakeProject$1=3", 2918892661U, 3066597135U, func_gen_MakeProject_S1A3);

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

static refalrts::NativeReference nat_ref_gen_MakeProject_S1A2("MakeProject$1=2", 2918892661U, 3066597135U, func_gen_MakeProject_S1A2);

static refalrts::FnResult func_gen_MakeProject_S1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
  //RESULT: Tile{ [[ } </7 </8 & @create_closure@/9 & MakeProject$1=2/10 t.Config#1/5/11 >/13 Tile{ AsIs: </0 Reuse: & Config-GetSourceFile/4 AsIs: t.Config#1/5 } >/14 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_gen_MakeProject_S1A2.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[11], context[12], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Config_GetSourceFile.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeProject_S1A1("MakeProject$1=1", 2918892661U, 3066597135U, func_gen_MakeProject_S1A1);

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

static refalrts::NativeReference nat_ref_gen_MakeProject_S1A1L1("MakeProject$1=1\\1", 2918892661U, 3066597135U, func_gen_MakeProject_S1A1L1);

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

static refalrts::NativeReference nat_ref_gen_MakeProject_S2L1("MakeProject$2\\1", 2918892661U, 3066597135U, func_gen_MakeProject_S2L1);

static refalrts::FnResult func_MakeProject(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
    // </0 & MakeProject/4 # Success/5 t.Config#1/6 >/1
    if( ! refalrts::ident_term(  ident_Success, context[5] ) )
      continue;
    context[19] = context[2];
    context[20] = context[3];
    context[7] = refalrts::tvar_left( context[6], context[19], context[20] );
    if( ! context[7] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    //DEBUG: t.Config#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </8 Tile{ AsIs: </0 Reuse: & @create_closure@/4 HalfReuse: & MakeProject$1=1/5 AsIs: t.Config#1/6 AsIs: >/1 } </9 & Map/10 & MakeProject$1=1\1/11 </12 & Config-GetFolders/13 t.Config#1/6/14 >/16 >/17 >/18 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], ref_Map.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_gen_MakeProject_S1A1L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ref_Config_GetFolders.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[14], context[15], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], refalrts::create_closure );
    refalrts::reinit_name( context[5], ref_gen_MakeProject_S1A1.ref.function );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[18] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Fails e.idx
  // </0 & MakeProject/4 # Fails/5 e.Errors#1/2 >/1
  if( ! refalrts::ident_term(  ident_Fails, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 2
  //DEBUG: e.Errors#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & MakeProject$2\1/5 AsIs: e.Errors#1/2 AsIs: >/1 } </6 & Exit/7 1/8 >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_Exit.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[8], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Map.ref.function );
  refalrts::reinit_name( context[5], ref_gen_MakeProject_S2L1.ref.function );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeProject("MakeProject", 2918892661U, 3066597135U, func_MakeProject);

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
    if( ! refalrts::ident_term(  ident_CMD_LINE, context[5] ) )
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

static refalrts::NativeReference nat_ref_PrintSrcPos("PrintSrcPos", 2918892661U, 3066597135U, func_PrintSrcPos);

static refalrts::FnResult func_gen_RunSrefCompiler_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
    // </0 & RunSrefCompiler$1\1/4 (/7 # Error/9 t.SrcPos#2/10 e.Message#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Error, context[9] ) )
      continue;
    context[14] = context[5];
    context[15] = context[6];
    context[11] = refalrts::tvar_left( context[10], context[14], context[15] );
    if( ! context[11] )
      continue;
    // closed e.Message#2 as range 14(5)
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Message#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: </7 HalfReuse: & PrintSrcPos/9 AsIs: t.SrcPos#2/10 } >/12 Tile{ HalfReuse: ':'/8 } ' '/13 Tile{ AsIs: e.Message#2/14(5) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], ' ' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WriteLine.ref.function );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], ref_PrintSrcPos.ref.function );
    refalrts::reinit_char( context[8], ':' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Output e.idx )
    // </0 & RunSrefCompiler$1\1/4 (/7 # Output/9 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Output, context[9] ) )
      continue;
    // closed e.Output#2 as range 5
    //DEBUG: e.Output#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RunSrefCompiler$1\1/4 (/7 # Output/9 e.Output#2/5 )/8 >/1 {REMOVED TILE}
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
    // </0 & RunSrefCompiler$1\1/4 (/7 # OutputWithNative/9 (/12 e.Output#2/10 )/13 e.Native#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_OutputWithNative, context[9] ) )
      continue;
    context[14] = context[5];
    context[15] = context[6];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[14], context[15] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Output#2 as range 10
    // closed e.Native#2 as range 14(5)
    //DEBUG: e.Output#2: 10
    //DEBUG: e.Native#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RunSrefCompiler$1\1/4 (/7 # OutputWithNative/9 (/12 e.Output#2/10 )/13 e.Native#2/14(5) )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # Source ( e.idx ) e.idx )
  // </0 & RunSrefCompiler$1\1/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_Source, context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Source#2 as range 10
  // closed e.Output#2 as range 5
  //DEBUG: e.Source#2: 10
  //DEBUG: e.Output#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RunSrefCompiler$1\1/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S1L1("RunSrefCompiler$1\\1", 2918892661U, 3066597135U, func_gen_RunSrefCompiler_S1L1);

static refalrts::FnResult func_gen_RunSrefCompiler_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & RunSrefCompiler$2\1/4 (/7 e.Reference#9/5 )/8 >/1
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
  // closed e.Reference#9 as range 5
  //DEBUG: e.Reference#9: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }" --"/9 Tile{ HalfReuse: 'r'/1 }"eferenc"/11 Tile{ HalfReuse: 'e'/0 HalfReuse: '='/4 HalfReuse: '\"'/7 AsIs: e.Reference#9/5 HalfReuse: '\"'/8 } Tile{ ]] }
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

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2L1("RunSrefCompiler$2\\1", 2918892661U, 3066597135U, func_gen_RunSrefCompiler_S2L1);

static refalrts::FnResult func_gen_RunSrefCompiler_S2L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & RunSrefCompiler$2\2/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
    // </0 & RunSrefCompiler$2\2/4 (/7 # Output/9 e.Output#9/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Output, context[9] ) )
      continue;
    // closed e.Output#9 as range 5
    //DEBUG: e.Output#9: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RunSrefCompiler$2\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Output#9/5 HalfReuse: '\"'/8 } Tile{ ]] }
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
    // </0 & RunSrefCompiler$2\2/4 (/7 # OutputWithNative/9 (/12 e.Output#9/10 )/13 e.Native#9/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_OutputWithNative, context[9] ) )
      continue;
    context[14] = context[5];
    context[15] = context[6];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[14], context[15] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Output#9 as range 10
    // closed e.Native#9 as range 14(5)
    //DEBUG: e.Output#9: 10
    //DEBUG: e.Native#9: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RunSrefCompiler$2\2/4 (/7 {REMOVED TILE} e.Native#9/14(5) )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '\"'/12 AsIs: e.Output#9/10 HalfReuse: '\"'/13 } Tile{ ]] }
    refalrts::reinit_char( context[9], ' ' );
    refalrts::reinit_char( context[12], '\"' );
    refalrts::reinit_char( context[13], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[13] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # Source ( e.idx ) e.idx )
  // </0 & RunSrefCompiler$2\2/4 (/7 # Source/9 (/12 e.Source#9/10 )/13 e.Output#9/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_Source, context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Source#9 as range 10
  // closed e.Output#9 as range 5
  //DEBUG: e.Source#9: 10
  //DEBUG: e.Output#9: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RunSrefCompiler$2\2/4 (/7 {REMOVED TILE} e.Output#9/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '\"'/12 AsIs: e.Source#9/10 HalfReuse: '\"'/13 } Tile{ ]] }
  refalrts::reinit_char( context[9], ' ' );
  refalrts::reinit_char( context[12], '\"' );
  refalrts::reinit_char( context[13], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2L2("RunSrefCompiler$2\\2", 2918892661U, 3066597135U, func_gen_RunSrefCompiler_S2L2);

static refalrts::FnResult func_gen_RunSrefCompiler_S2A7(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & RunSrefCompiler$2=7/4 (/7 e.SrefCompiler#2/5 )/8 (/11 e.CppCompilerExe#3/9 )/12 (/15 e.CppCompilerLib#4/13 )/16 (/19 e.TargetFileFlag#5/17 )/20 (/23 e.SearchFolderFlags#6/21 )/24 (/27 e.Prefix#7/25 )/28 (/31 e.Units#1/29 )/32 e.References#8/2 >/1
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
  // closed e.CppCompilerExe#3 as range 9
  // closed e.CppCompilerLib#4 as range 13
  // closed e.TargetFileFlag#5 as range 17
  // closed e.SearchFolderFlags#6 as range 21
  // closed e.Prefix#7 as range 25
  // closed e.Units#1 as range 29
  // closed e.References#8 as range 2
  //DEBUG: e.SrefCompiler#2: 5
  //DEBUG: e.CppCompilerExe#3: 9
  //DEBUG: e.CppCompilerLib#4: 13
  //DEBUG: e.TargetFileFlag#5: 17
  //DEBUG: e.SearchFolderFlags#6: 21
  //DEBUG: e.Prefix#7: 25
  //DEBUG: e.Units#1: 29
  //DEBUG: e.References#8: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & System/4 } Tile{ AsIs: e.SrefCompiler#2/5 } Tile{ HalfReuse: ' '/7 } '-'/33 Tile{ HalfReuse: '-'/16 HalfReuse: 'c'/19 } 'p'/34 Tile{ HalfReuse: 'p'/20 HalfReuse: '-'/23 }"command-exe"/35 Tile{ HalfReuse: '='/8 HalfReuse: '\"'/11 AsIs: e.CppCompilerExe#3/9 HalfReuse: '\"'/12 HalfReuse: ' '/15 }"--cpp-command-lib=\""/37 Tile{ AsIs: e.CppCompilerLib#4/13 } '\"'/39 Tile{ AsIs: e.TargetFileFlag#5/17 } Tile{ AsIs: e.SearchFolderFlags#6/21 }" --prefix"/40 Tile{ HalfReuse: '='/24 HalfReuse: '\"'/27 AsIs: e.Prefix#7/25 HalfReuse: '\"'/28 HalfReuse: </31 } & Map/42 Tile{ HalfReuse: & RunSrefCompiler$2\1/32 AsIs: e.References#8/2 AsIs: >/1 } </43 & Map/44 & RunSrefCompiler$2\2/45 Tile{ AsIs: e.Units#1/29 } >/46 >/47 Tile{ ]] }
  if( ! refalrts::alloc_char( context[33], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[35], context[36], "command-exe", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[37], context[38], "--cpp-command-lib=\"", 19 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], '\"' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[40], context[41], " --prefix", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[42], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[44], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[45], ref_gen_RunSrefCompiler_S2L2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[47] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_System.ref.function );
  refalrts::reinit_char( context[7], ' ' );
  refalrts::reinit_char( context[16], '-' );
  refalrts::reinit_char( context[19], 'c' );
  refalrts::reinit_char( context[20], 'p' );
  refalrts::reinit_char( context[23], '-' );
  refalrts::reinit_char( context[8], '=' );
  refalrts::reinit_char( context[11], '\"' );
  refalrts::reinit_char( context[12], '\"' );
  refalrts::reinit_char( context[15], ' ' );
  refalrts::reinit_char( context[24], '=' );
  refalrts::reinit_char( context[27], '\"' );
  refalrts::reinit_char( context[28], '\"' );
  refalrts::reinit_open_call( context[31] );
  refalrts::reinit_name( context[32], ref_gen_RunSrefCompiler_S2L1.ref.function );
  refalrts::push_stack( context[47] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[46] );
  refalrts::push_stack( context[43] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[31] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[46], context[47] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[43], context[45] );
  res = refalrts::splice_evar( res, context[32], context[1] );
  res = refalrts::splice_evar( res, context[42], context[42] );
  res = refalrts::splice_evar( res, context[24], context[31] );
  res = refalrts::splice_evar( res, context[40], context[41] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[39], context[39] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A7("RunSrefCompiler$2=7", 2918892661U, 3066597135U, func_gen_RunSrefCompiler_S2A7);

static refalrts::FnResult func_gen_RunSrefCompiler_S2A6(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & RunSrefCompiler$2=6/4 (/7 e.SrefCompiler#2/5 )/8 (/11 e.CppCompilerExe#3/9 )/12 (/15 e.CppCompilerLib#4/13 )/16 (/19 e.TargetFileFlag#5/17 )/20 (/23 e.SearchFolderFlags#6/21 )/24 (/27 e.Units#1/25 )/28 t.Config#1/29 e.Prefix#7/2 >/1
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
  // closed e.CppCompilerExe#3 as range 9
  // closed e.CppCompilerLib#4 as range 13
  // closed e.TargetFileFlag#5 as range 17
  // closed e.SearchFolderFlags#6 as range 21
  // closed e.Units#1 as range 25
  context[30] = refalrts::tvar_left( context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  // closed e.Prefix#7 as range 2
  //DEBUG: e.SrefCompiler#2: 5
  //DEBUG: e.CppCompilerExe#3: 9
  //DEBUG: e.CppCompilerLib#4: 13
  //DEBUG: e.TargetFileFlag#5: 17
  //DEBUG: e.SearchFolderFlags#6: 21
  //DEBUG: e.Units#1: 25
  //DEBUG: t.Config#1: 29
  //DEBUG: e.Prefix#7: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </31 </32 Tile{ HalfReuse: & @create_closure@/0 Reuse: & RunSrefCompiler$2=7/4 AsIs: (/7 AsIs: e.SrefCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.CppCompilerExe#3/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerLib#4/13 AsIs: )/16 AsIs: (/19 AsIs: e.TargetFileFlag#5/17 AsIs: )/20 AsIs: (/23 AsIs: e.SearchFolderFlags#6/21 AsIs: )/24 AsIs: (/27 } Tile{ AsIs: e.Prefix#7/2 } )/33 (/34 Tile{ AsIs: e.Units#1/25 } )/35 >/36 </37 Tile{ HalfReuse: & Config-GetReferences/28 AsIs: t.Config#1/29 } >/38 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[38] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure );
  refalrts::update_name( context[4], ref_gen_RunSrefCompiler_S2A7.ref.function );
  refalrts::reinit_name( context[28], ref_Config_GetReferences.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[38] );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[36] );
  refalrts::push_stack( context[32] );
  refalrts::link_brackets( context[34], context[35] );
  refalrts::link_brackets( context[27], context[33] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[28], context[30] );
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[27] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A6("RunSrefCompiler$2=6", 2918892661U, 3066597135U, func_gen_RunSrefCompiler_S2A6);

static refalrts::FnResult func_gen_RunSrefCompiler_S2A5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & RunSrefCompiler$2=5/4 (/7 e.SrefCompiler#2/5 )/8 (/11 e.CppCompilerExe#3/9 )/12 (/15 e.CppCompilerLib#4/13 )/16 (/19 e.TargetFileFlag#5/17 )/20 (/23 e.Units#1/21 )/24 t.Config#1/25 e.SearchFolderFlags#6/2 >/1
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
  // closed e.CppCompilerExe#3 as range 9
  // closed e.CppCompilerLib#4 as range 13
  // closed e.TargetFileFlag#5 as range 17
  // closed e.Units#1 as range 21
  context[26] = refalrts::tvar_left( context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  // closed e.SearchFolderFlags#6 as range 2
  //DEBUG: e.SrefCompiler#2: 5
  //DEBUG: e.CppCompilerExe#3: 9
  //DEBUG: e.CppCompilerLib#4: 13
  //DEBUG: e.TargetFileFlag#5: 17
  //DEBUG: e.Units#1: 21
  //DEBUG: t.Config#1: 25
  //DEBUG: e.SearchFolderFlags#6: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </27 </28 Tile{ HalfReuse: & @create_closure@/0 Reuse: & RunSrefCompiler$2=6/4 AsIs: (/7 AsIs: e.SrefCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.CppCompilerExe#3/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerLib#4/13 AsIs: )/16 AsIs: (/19 AsIs: e.TargetFileFlag#5/17 AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.SearchFolderFlags#6/2 } )/29 (/30 Tile{ AsIs: e.Units#1/21 } Tile{ AsIs: )/24 AsIs: t.Config#1/25 } >/31 </32 & GetPrefix/33 t.Config#1/25/34 >/36 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], ref_GetPrefix.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[34], context[35], context[25], context[26]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[36] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure );
  refalrts::update_name( context[4], ref_gen_RunSrefCompiler_S2A6.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[36] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[28] );
  refalrts::link_brackets( context[30], context[24] );
  refalrts::link_brackets( context[23], context[29] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[31], context[36] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[23] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A5("RunSrefCompiler$2=5", 2918892661U, 3066597135U, func_gen_RunSrefCompiler_S2A5);

static refalrts::FnResult func_gen_RunSrefCompiler_S2A4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & RunSrefCompiler$2=4/4 (/7 e.SrefCompiler#2/5 )/8 (/11 e.CppCompilerExe#3/9 )/12 (/15 e.CppCompilerLib#4/13 )/16 (/19 e.Units#1/17 )/20 t.Config#1/21 e.TargetFileFlag#5/2 >/1
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
  // closed e.TargetFileFlag#5 as range 2
  //DEBUG: e.SrefCompiler#2: 5
  //DEBUG: e.CppCompilerExe#3: 9
  //DEBUG: e.CppCompilerLib#4: 13
  //DEBUG: e.Units#1: 17
  //DEBUG: t.Config#1: 21
  //DEBUG: e.TargetFileFlag#5: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </23 </24 Tile{ HalfReuse: & @create_closure@/0 Reuse: & RunSrefCompiler$2=5/4 AsIs: (/7 AsIs: e.SrefCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.CppCompilerExe#3/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerLib#4/13 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.TargetFileFlag#5/2 } )/25 (/26 Tile{ AsIs: e.Units#1/17 } Tile{ AsIs: )/20 AsIs: t.Config#1/21 } >/27 </28 & MakeSearchFolderFlags/29 t.Config#1/21/30 >/32 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], ref_MakeSearchFolderFlags.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[30], context[31], context[21], context[22]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure );
  refalrts::update_name( context[4], ref_gen_RunSrefCompiler_S2A5.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[24] );
  refalrts::link_brackets( context[26], context[20] );
  refalrts::link_brackets( context[19], context[25] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[32] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[19] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A4("RunSrefCompiler$2=4", 2918892661U, 3066597135U, func_gen_RunSrefCompiler_S2A4);

static refalrts::FnResult func_gen_RunSrefCompiler_S2A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
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
  //RESULT: Tile{ [[ } </19 </20 Tile{ HalfReuse: & @create_closure@/0 Reuse: & RunSrefCompiler$2=4/4 AsIs: (/7 AsIs: e.SrefCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.CppCompilerExe#3/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.CppCompilerLib#4/2 } )/21 (/22 Tile{ AsIs: e.Units#1/13 } Tile{ AsIs: )/16 AsIs: t.Config#1/17 } >/23 </24 & MakeTargetFileFlag/25 t.Config#1/17/26 >/28 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], ref_MakeTargetFileFlag.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[26], context[27], context[17], context[18]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure );
  refalrts::update_name( context[4], ref_gen_RunSrefCompiler_S2A4.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[22], context[16] );
  refalrts::link_brackets( context[15], context[21] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[28] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A3("RunSrefCompiler$2=3", 2918892661U, 3066597135U, func_gen_RunSrefCompiler_S2A3);

static refalrts::FnResult func_gen_RunSrefCompiler_S2A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
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
  //RESULT: Tile{ [[ } </15 </16 Tile{ HalfReuse: & @create_closure@/0 Reuse: & RunSrefCompiler$2=3/4 AsIs: (/7 AsIs: e.SrefCompiler#2/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.CppCompilerExe#3/2 } )/17 (/18 Tile{ AsIs: e.Units#1/9 } Tile{ AsIs: )/12 AsIs: t.Config#1/13 } >/19 </20 & Config-GetCppCompilerLib/21 t.Config#1/13/22 >/24 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ref_Config_GetCppCompilerLib.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[22], context[23], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure );
  refalrts::update_name( context[4], ref_gen_RunSrefCompiler_S2A3.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[18], context[12] );
  refalrts::link_brackets( context[11], context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[24] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A2("RunSrefCompiler$2=2", 2918892661U, 3066597135U, func_gen_RunSrefCompiler_S2A2);

static refalrts::FnResult func_gen_RunSrefCompiler_S2A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
  //RESULT: Tile{ [[ AsIs: </0 } </11 & @create_closure@/12 & RunSrefCompiler$2=2/13 (/14 Tile{ AsIs: e.SrefCompiler#2/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Units#1/5 AsIs: )/8 AsIs: t.Config#1/9 } >/15 </16 & Config-GetCppCompilerExe/17 t.Config#1/9/18 >/20 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ref_gen_RunSrefCompiler_S2A2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_Config_GetCppCompilerExe.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[18], context[19], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[14], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[20] );
  res = refalrts::splice_evar( res, context[4], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunSrefCompiler_S2A1("RunSrefCompiler$2=1", 2918892661U, 3066597135U, func_gen_RunSrefCompiler_S2A1);

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
    // </0 & RunSrefCompiler/4 t.Config#1/5 e.Units-B#1/7 (/11 # Error/13 t.SrcPos#1/14 e.Message#1/9 )/12 e.Units-E#1/2 >/1
    context[21] = context[2];
    context[22] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[21];
      context[24] = context[22];
      context[9] = 0;
      context[10] = 0;
      context[11] = refalrts::brackets_left( context[9], context[10], context[23], context[24] );
      if( ! context[11] )
        continue;
      refalrts::bracket_pointers(context[11], context[12]);
      context[13] = refalrts::ident_left(  ident_Error, context[9], context[10] );
      if( ! context[13] )
        continue;
      // closed e.Units-E#1 as range 23(2)
      context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
      if( ! context[15] )
        continue;
      // closed e.Message#1 as range 9
      //DEBUG: t.Config#1: 5
      //DEBUG: e.Units-B#1: 7
      //DEBUG: e.Units-E#1: 2
      //DEBUG: t.SrcPos#1: 14
      //DEBUG: e.Message#1: 9

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} t.Config#1/5 e.Units-B#1/7 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } & RunSrefCompiler$1\1/16 Tile{ AsIs: (/11 AsIs: # Error/13 AsIs: t.SrcPos#1/14 AsIs: e.Message#1/9 AsIs: )/12 AsIs: e.Units-E#1/23(2) AsIs: >/1 } </17 & Exit/18 1/19 >/20 Tile{ ]] }
      if( ! refalrts::alloc_name( context[16], ref_gen_RunSrefCompiler_S1L1.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[18], ref_Exit.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[19], 1UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[20] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_Map.ref.function );
      refalrts::push_stack( context[20] );
      refalrts::push_stack( context[17] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[17], context[20] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[21], context[22] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & RunSrefCompiler/4 t.Config#1/5 e.Units#1/2 >/1
  // closed e.Units#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Units#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 </8 & @create_closure@/9 & RunSrefCompiler$2=1/10 (/11 Tile{ AsIs: e.Units#1/2 } )/12 t.Config#1/5/13 >/15 Tile{ AsIs: </0 Reuse: & Config-GetSrefCompiler/4 AsIs: t.Config#1/5 } >/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_gen_RunSrefCompiler_S2A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[13], context[14], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Config_GetSrefCompiler.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RunSrefCompiler("RunSrefCompiler", 2918892661U, 3066597135U, func_RunSrefCompiler);

static refalrts::FnResult func_gen_MakeTargetFileFlag_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & MakeTargetFileFlag\1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // # DefaultTarget
    // </0 & MakeTargetFileFlag\1/4 # DefaultTarget/5 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[5] = refalrts::ident_left(  ident_DefaultTarget, context[7], context[8] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & MakeTargetFileFlag\1/4 # DefaultTarget/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & MakeTargetFileFlag\1/4 e.TargetFile#2/2 >/1
  // closed e.TargetFile#2 as range 2
  //DEBUG: e.TargetFile#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }" --target-file"/5 Tile{ HalfReuse: '='/0 HalfReuse: '\"'/4 AsIs: e.TargetFile#2/2 HalfReuse: '\"'/1 ]] }
  if( ! refalrts::alloc_chars( context[5], context[6], " --target-file", 14 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], '=' );
  refalrts::reinit_char( context[4], '\"' );
  refalrts::reinit_char( context[1], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeTargetFileFlag_L1("MakeTargetFileFlag\\1", 2918892661U, 3066597135U, func_gen_MakeTargetFileFlag_L1);

static refalrts::FnResult func_MakeTargetFileFlag(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
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
  //RESULT: Tile{ [[ } </7 & Fetch/8 Tile{ AsIs: </0 Reuse: & Config-GetTargetFileName/4 AsIs: t.Config#1/5 AsIs: >/1 } & MakeTargetFileFlag\1/9 >/10 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_gen_MakeTargetFileFlag_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Config_GetTargetFileName.ref.function );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeTargetFileFlag("MakeTargetFileFlag", 2918892661U, 3066597135U, func_MakeTargetFileFlag);

static refalrts::FnResult func_gen_MakeSearchFolderFlags_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
    // </0 & MakeSearchFolderFlags\1/4 (/7 # Search/9 e.Folder#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Search, context[9] ) )
      continue;
    // closed e.Folder#2 as range 5
    //DEBUG: e.Folder#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }" --"/10 Tile{ HalfReuse: 'd'/1 }"irecto"/12 Tile{ HalfReuse: 'r'/0 HalfReuse: 'y'/4 HalfReuse: '='/7 HalfReuse: '\"'/9 AsIs: e.Folder#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[10], context[11], " --", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "irecto", 6 ) )
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
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # Runtime e.idx )
  // </0 & MakeSearchFolderFlags\1/4 (/7 # Runtime/9 e.Folder#2/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_Runtime, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folder#2 as range 5
  //DEBUG: e.Folder#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }" --"/10 Tile{ HalfReuse: 'r'/1 }"untime-directo"/12 Tile{ HalfReuse: 'r'/0 HalfReuse: 'y'/4 HalfReuse: '='/7 HalfReuse: '\"'/9 AsIs: e.Folder#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[10], context[11], " --", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "untime-directo", 14 ) )
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
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeSearchFolderFlags_L1("MakeSearchFolderFlags\\1", 2918892661U, 3066597135U, func_gen_MakeSearchFolderFlags_L1);

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
  refalrts::update_name( context[4], ref_Config_GetFolders.ref.function );
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

static refalrts::NativeReference nat_ref_MakeSearchFolderFlags("MakeSearchFolderFlags", 2918892661U, 3066597135U, func_MakeSearchFolderFlags);

static refalrts::FnResult func_gen_GetPrefix_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & GetPrefix\1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // # NotSet
    // </0 & GetPrefix\1/4 # NotSet/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[5] = refalrts::ident_left(  ident_NotSet, context[6], context[7] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & GetPrefix\1/4 # NotSet/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & GetPrefix\1/4 e.Prefix#2/2 >/1
  // closed e.Prefix#2 as range 2
  //DEBUG: e.Prefix#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & GetPrefix\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Prefix#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GetPrefix_L1("GetPrefix\\1", 2918892661U, 3066597135U, func_gen_GetPrefix_L1);

static refalrts::FnResult func_GetPrefix(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
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
  //RESULT: Tile{ [[ } </7 & Fetch/8 Tile{ AsIs: </0 Reuse: & Config-GetPrefix/4 AsIs: t.Config#1/5 AsIs: >/1 } & GetPrefix\1/9 >/10 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_gen_GetPrefix_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Config_GetPrefix.ref.function );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetPrefix("GetPrefix", 2918892661U, 3066597135U, func_GetPrefix);


//End of file
