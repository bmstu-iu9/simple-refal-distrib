// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_DefaultTarget = refalrts::ident_from_static("DefaultTarget");
const refalrts::RefalIdentifier ident_Fails = refalrts::ident_from_static("Fails");
const refalrts::RefalIdentifier ident_NotFound = refalrts::ident_from_static("NotFound");
const refalrts::RefalIdentifier ident_Output = refalrts::ident_from_static("Output");
const refalrts::RefalIdentifier ident_OutputWithNative = refalrts::ident_from_static("OutputWithNative");
const refalrts::RefalIdentifier ident_Runtime = refalrts::ident_from_static("Runtime");
const refalrts::RefalIdentifier ident_Search = refalrts::ident_from_static("Search");
const refalrts::RefalIdentifier ident_Source = refalrts::ident_from_static("Source");
const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
static refalrts::ExternalReference ref_WriteLine("WriteLine", 0U, 0U);
static refalrts::ExternalReference ref_System("System", 0U, 0U);
static refalrts::ExternalReference ref_StrFromInt("StrFromInt", 0U, 0U);
static refalrts::ExternalReference ref_Exit("Exit", 0U, 0U);
static refalrts::ExternalReference ref_ArgList("ArgList", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_CreateFileList("CreateFileList", 0U, 0U);
static refalrts::ExternalReference ref_ParseCommandLine("ParseCommandLine", 0U, 0U);
static refalrts::ExternalReference ref_Go("Go", 0U, 0U);
static refalrts::ExternalReference ref_Main("Main", 1215858014U, 1016964663U);
static refalrts::ExternalReference ref_gen_MakeProject_S1L1("MakeProject$1\\1", 1215858014U, 1016964663U);
static refalrts::ExternalReference ref_gen_MakeProject_S2L1("MakeProject$2\\1", 1215858014U, 1016964663U);
static refalrts::ExternalReference ref_MakeProject("MakeProject", 1215858014U, 1016964663U);
static refalrts::ExternalReference ref_gen_Make_S1L1("Make$1\\1", 1215858014U, 1016964663U);
static refalrts::ExternalReference ref_gen_Make_S2L1("Make$2\\1", 1215858014U, 1016964663U);
static refalrts::ExternalReference ref_gen_Make_S2L2("Make$2\\2", 1215858014U, 1016964663U);
static refalrts::ExternalReference ref_gen_Make_S2L3("Make$2\\3", 1215858014U, 1016964663U);
static refalrts::ExternalReference ref_Make("Make", 1215858014U, 1016964663U);

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

static refalrts::NativeReference nat_ref_Main("Main", 1215858014U, 1016964663U, func_Main);

static refalrts::FnResult func_gen_MakeProject_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MakeProject$1\1/4 (/7 s.FolderTag#2/9 e.Folder#2/5 )/8 >/1
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & MakeProject$1\1/4 (/7 s.FolderTag#2/9 {REMOVED TILE} )/8 {REMOVED TILE}
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

static refalrts::NativeReference nat_ref_gen_MakeProject_S1L1("MakeProject$1\\1", 1215858014U, 1016964663U, func_gen_MakeProject_S1L1);

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

static refalrts::NativeReference nat_ref_gen_MakeProject_S2L1("MakeProject$2\\1", 1215858014U, 1016964663U, func_gen_MakeProject_S2L1);

static refalrts::FnResult func_MakeProject(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
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
    // # Success ( e.idx ) ( e.idx ) t.idx ( e.idx ) e.idx
    // </0 & MakeProject/4 # Success/5 (/8 e.CppCompiler#1/6 )/9 (/12 e.SrefCompiler#1/10 )/13 t.Target#1/14 (/18 e.SourceFile#1/16 )/19 e.Folders#1/2 >/1
    if( ! refalrts::ident_term(  ident_Success, context[5] ) )
      continue;
    context[30] = context[2];
    context[31] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[30], context[31] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[30], context[31] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.CppCompiler#1 as range 6
    // closed e.SrefCompiler#1 as range 10
    context[15] = refalrts::tvar_left( context[14], context[30], context[31] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[30], context[31] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.SourceFile#1 as range 16
    // closed e.Folders#1 as range 30(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </20 Tile{ HalfReuse: & Make/9 AsIs: (/12 AsIs: e.SrefCompiler#1/10 AsIs: )/13 } (/21 Tile{ AsIs: e.CppCompiler#1/6 } )/22 Tile{ AsIs: t.Target#1/14 AsIs: (/18 } e.Folders#1/30(2)/23 )/25 Tile{ AsIs: </0 Reuse: & CreateFileList/4 HalfReuse: (/5 HalfReuse: </8 } & Map/26 Tile{ HalfReuse: & MakeProject$1\1/19 AsIs: e.Folders#1/30(2) AsIs: >/1 } )/27 Tile{ AsIs: e.SourceFile#1/16 } >/28 >/29 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[30], context[31]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], ref_Map.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[9], ref_Make.ref.function );
    refalrts::update_name( context[4], ref_CreateFileList.ref.function );
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[19], ref_gen_MakeProject_S1L1.ref.function );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[5], context[27] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[18], context[25] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[19], context[1] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[14], context[18] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Fails e.idx
  // </0 & MakeProject/4 # Fails/5 e.Errors#1/2 >/1
  if( ! refalrts::ident_term(  ident_Fails, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 2

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

static refalrts::NativeReference nat_ref_MakeProject("MakeProject", 1215858014U, 1016964663U, func_MakeProject);

static refalrts::FnResult func_gen_Make_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & Make$1\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
    // ( # NotFound e.idx )
    // </0 & Make$1\1/4 (/7 # NotFound/9 e.UnitName#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_NotFound, context[9] ) )
      continue;
    // closed e.UnitName#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 HalfReuse: 'O'/9 }"MMAND LINE ERROR: Unit "/10 Tile{ AsIs: e.UnitName#2/5 }" not foun"/12 Tile{ HalfReuse: 'd'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[10], context[11], "MMAND LINE ERROR: Unit ", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], " not foun", 9 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WriteLine.ref.function );
    refalrts::reinit_char( context[7], 'C' );
    refalrts::reinit_char( context[9], 'O' );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Output e.idx )
    // </0 & Make$1\1/4 (/7 # Output/9 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Output, context[9] ) )
      continue;
    // closed e.Output#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Make$1\1/4 (/7 # Output/9 e.Output#2/5 )/8 >/1 {REMOVED TILE}
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
    // </0 & Make$1\1/4 (/7 # OutputWithNative/9 (/12 e.Output#2/10 )/13 e.Native#2/5 )/8 >/1
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Make$1\1/4 (/7 # OutputWithNative/9 (/12 e.Output#2/10 )/13 e.Native#2/14(5) )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # Source ( e.idx ) e.idx )
  // </0 & Make$1\1/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Make$1\1/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Make_S1L1("Make$1\\1", 1215858014U, 1016964663U, func_gen_Make_S1L1);

static refalrts::FnResult func_gen_Make_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & Make$2\1/4 t.idx#0/5 >/1
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
    // # DefaultTarget
    // </0 & Make$2\1/4 # DefaultTarget/5 >/1
    if( ! refalrts::ident_term(  ident_DefaultTarget, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Make$2\1/4 # DefaultTarget/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & Make$2\1/4 (/5 e.TargetFile#2/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.TargetFile#2 as range 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 } '-'/9 Tile{ HalfReuse: 'o'/0 HalfReuse: ' '/4 HalfReuse: '\"'/5 AsIs: e.TargetFile#2/7 HalfReuse: '\"'/6 } Tile{ ]] }
  if( ! refalrts::alloc_char( context[9], '-' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[1], ' ' );
  refalrts::reinit_char( context[0], 'o' );
  refalrts::reinit_char( context[4], ' ' );
  refalrts::reinit_char( context[5], '\"' );
  refalrts::reinit_char( context[6], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Make_S2L1("Make$2\\1", 1215858014U, 1016964663U, func_gen_Make_S2L1);

static refalrts::FnResult func_gen_Make_S2L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & Make$2\2/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
    // </0 & Make$2\2/4 (/7 # Search/9 e.Folder#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Search, context[9] ) )
      continue;
    // closed e.Folder#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 } Tile{ HalfReuse: '-'/0 HalfReuse: 'd'/4 HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Folder#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
    refalrts::reinit_char( context[1], ' ' );
    refalrts::reinit_char( context[0], '-' );
    refalrts::reinit_char( context[4], 'd' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '\"' );
    refalrts::reinit_char( context[8], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # Runtime e.idx )
  // </0 & Make$2\2/4 (/7 # Runtime/9 e.Folder#2/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_Runtime, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folder#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 } Tile{ HalfReuse: '-'/0 HalfReuse: 'D'/4 HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Folder#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
  refalrts::reinit_char( context[1], ' ' );
  refalrts::reinit_char( context[0], '-' );
  refalrts::reinit_char( context[4], 'D' );
  refalrts::reinit_char( context[7], ' ' );
  refalrts::reinit_char( context[9], '\"' );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Make_S2L2("Make$2\\2", 1215858014U, 1016964663U, func_gen_Make_S2L2);

static refalrts::FnResult func_gen_Make_S2L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & Make$2\3/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
    // </0 & Make$2\3/4 (/7 # Output/9 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Output, context[9] ) )
      continue;
    // closed e.Output#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Make$2\3/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Output#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
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

  // ( # Source ( e.idx ) e.idx )
  // </0 & Make$2\3/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Make$2\3/4 (/7 {REMOVED TILE} e.Output#2/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '\"'/12 AsIs: e.Source#2/10 HalfReuse: '\"'/13 } Tile{ ]] }
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

static refalrts::NativeReference nat_ref_gen_Make_S2L3("Make$2\\3", 1215858014U, 1016964663U, func_gen_Make_S2L3);

static refalrts::FnResult func_Make(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  //FAST GEN: ( e.$ ) ( e.$ ) t.$ ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ ( e.$ ) e.$
  // </0 & Make/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 (/17 e.idxTTVB#0/15 )/18 e.idxTTVT#0/2 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.idxTTVB#0 as range 15
  // closed e.idxTTVT#0 as range 2
  do {
    // ( e.idx ) ( e.idx ) t.idx ( e.idx ) e.idx
    // </0 & Make/4 (/7 e.SrefC#1/5 )/8 (/11 e.CompilerCommand#1/9 )/12 t.Target#1/13 (/17 e.Directories#1/15 )/18 e.Units-B#1/19 (/23 # NotFound/25 e.UnitName#1/21 )/24 e.Units-E#1/2 >/1
    // closed e.SrefC#1 as range 5
    // closed e.CompilerCommand#1 as range 9
    // closed e.Directories#1 as range 15
    context[30] = context[2];
    context[31] = context[3];
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[30];
      context[33] = context[31];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[32], context[33] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_NotFound, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.UnitName#1 as range 21
      // closed e.Units-E#1 as range 32(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} e.SrefC#1/5 {REMOVED TILE} e.CompilerCommand#1/9 )/12 t.Target#1/13 {REMOVED TILE} e.Directories#1/15 {REMOVED TILE} e.Units-B#1/19 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & Make$1\1/7 } Tile{ AsIs: (/23 AsIs: # NotFound/25 AsIs: e.UnitName#1/21 AsIs: )/24 AsIs: e.Units-E#1/32(2) AsIs: >/1 } Tile{ HalfReuse: </8 HalfReuse: & Exit/11 } Tile{ HalfReuse: 1/18 } Tile{ HalfReuse: >/17 } Tile{ ]] }
      refalrts::update_name( context[4], ref_Map.ref.function );
      refalrts::reinit_name( context[7], ref_gen_Make_S1L1.ref.function );
      refalrts::reinit_open_call( context[8] );
      refalrts::reinit_name( context[11], ref_Exit.ref.function );
      refalrts::reinit_number( context[18], 1UL );
      refalrts::reinit_close_call( context[17] );
      refalrts::push_stack( context[17] );
      refalrts::push_stack( context[8] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[23], context[1] );
      refalrts::splice_to_freelist_open( context[7], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[19], context[20], context[30], context[31] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) t.idx ( e.idx ) e.idx
  // </0 & Make/4 (/7 e.SrefC#1/5 )/8 (/11 e.CompilerCommand#1/9 )/12 t.Target#1/13 (/17 e.Directories#1/15 )/18 e.Units#1/2 >/1
  // closed e.SrefC#1 as range 5
  // closed e.CompilerCommand#1 as range 9
  // closed e.Directories#1 as range 15
  // closed e.Units#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & System/4 } Tile{ AsIs: e.SrefC#1/5 }" -c"/19 Tile{ HalfReuse: ' '/8 HalfReuse: '\"'/11 AsIs: e.CompilerCommand#1/9 HalfReuse: '\"'/12 } Tile{ HalfReuse: </7 } & Fetch/21 Tile{ AsIs: t.Target#1/13 HalfReuse: & Make$2\1/17 } >/22 </23 & Map/24 & Make$2\2/25 Tile{ AsIs: e.Directories#1/15 } >/26 </27 & Map/28 Tile{ HalfReuse: & Make$2\3/18 AsIs: e.Units#1/2 AsIs: >/1 } >/29 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[19], context[20], " -c", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], ref_gen_Make_S2L2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_System.ref.function );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_char( context[11], '\"' );
  refalrts::reinit_char( context[12], '\"' );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[17], ref_gen_Make_S2L1.ref.function );
  refalrts::reinit_name( context[18], ref_gen_Make_S2L3.ref.function );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[18], context[1] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Make("Make", 1215858014U, 1016964663U, func_Make);


//End of file
