// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_Fails = refalrts::ident_from_static("Fails");
const refalrts::RefalIdentifier ident_False = refalrts::ident_from_static("False");
const refalrts::RefalIdentifier ident_NotFound = refalrts::ident_from_static("NotFound");
const refalrts::RefalIdentifier ident_Output = refalrts::ident_from_static("Output");
const refalrts::RefalIdentifier ident_OutputWithNative = refalrts::ident_from_static("OutputWithNative");
const refalrts::RefalIdentifier ident_R5 = refalrts::ident_from_static("R5");
const refalrts::RefalIdentifier ident_SR = refalrts::ident_from_static("SR");
const refalrts::RefalIdentifier ident_Source = refalrts::ident_from_static("Source");
const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
const refalrts::RefalIdentifier ident_True = refalrts::ident_from_static("True");
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_ExistFile("ExistFile", 0U, 0U);
static refalrts::ExternalReference ref_gen_FindFiles_L1L1("FindFiles\\1\\1", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_gen_FindFiles_L1("FindFiles\\1", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_FindFiles("FindFiles", 0U, 0U);
static refalrts::ExternalReference ref_AnalyzeFilem_CheckNotFound("AnalyzeFile-CheckNotFound", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_ExistFilem_T("ExistFile-T", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_gen_AnalyzeFile_S1L1("AnalyzeFile$1\\1", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_gen_AnalyzeFile_S2L1("AnalyzeFile$2\\1", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_gen_AnalyzeFile_S3L1S1L1("AnalyzeFile$3\\1$1\\1", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_gen_AnalyzeFile_S3L1("AnalyzeFile$3\\1", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_gen_AnalyzeFile_S4L1("AnalyzeFile$4\\1", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_AnalyzeFile("AnalyzeFile", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_gen_FindInclude_L1("FindInclude\\1", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_gen_FindInclude_L2("FindInclude\\2", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_FindInclude("FindInclude", 0U, 0U);
static refalrts::ExternalReference ref_gen_AnalyzeInclude_S1L1("AnalyzeInclude$1\\1", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_gen_AnalyzeInclude_S2L1("AnalyzeInclude$2\\1", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_gen_AnalyzeInclude_S3L1("AnalyzeInclude$3\\1", 3005203035U, 2944325060U);
static refalrts::ExternalReference ref_AnalyzeInclude("AnalyzeInclude", 3005203035U, 2944325060U);

static refalrts::FnResult func_gen_FindFiles_L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & FindFiles\1\1/4 (/7 e.FileName#2/5 )/8 (/11 e.Folder#3/9 )/12 >/1
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
  // closed e.FileName#2 as range 5
  // closed e.Folder#3 as range 9
  //DEBUG: e.FileName#2: 5
  //DEBUG: e.Folder#3: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile/4 } Tile{ AsIs: e.Folder#3/9 } Tile{ HalfReuse: '/'/11 } Tile{ AsIs: e.FileName#2/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_AnalyzeFile.ref.function );
  refalrts::reinit_char( context[11], '/' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFiles_L1L1("FindFiles\\1\\1", 3005203035U, 2944325060U, func_gen_FindFiles_L1L1);

static refalrts::FnResult func_gen_FindFiles_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & FindFiles\1/4 (/7 e.Folders#1/5 )/8 (/11 e.FileName#2/9 )/12 >/1
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
  // closed e.Folders#1 as range 5
  // closed e.FileName#2 as range 9
  //DEBUG: e.Folders#1: 5
  //DEBUG: e.FileName#2: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile-CheckNotFound/4 AsIs: (/7 } e.FileName#2/9/13 )/15 </16 & AnalyzeFile/17 e.FileName#2/9/18 >/20 </21 & Map/22 </23 & @create_closure@/24 Tile{ HalfReuse: & FindFiles\1\1/8 AsIs: (/11 AsIs: e.FileName#2/9 AsIs: )/12 AsIs: >/1 } Tile{ AsIs: e.Folders#1/5 } >/25 >/26 Tile{ ]] }
  if (! refalrts::copy_evar(context[13], context[14], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_AnalyzeFile.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[18], context[19], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_AnalyzeFilem_CheckNotFound.ref.function );
  refalrts::reinit_name( context[8], ref_gen_FindFiles_L1L1.ref.function );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[7], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[15], context[24] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFiles_L1("FindFiles\\1", 3005203035U, 2944325060U, func_gen_FindFiles_L1);

static refalrts::FnResult func_FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & FindFiles/4 (/7 e.Folders#1/5 )/8 e.Files#1/2 >/1
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
  // closed e.Folders#1 as range 5
  // closed e.Files#1 as range 2
  //DEBUG: e.Folders#1: 5
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map/10 </11 Tile{ HalfReuse: & @create_closure@/0 Reuse: & FindFiles\1/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 } >/12 Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure );
  refalrts::update_name( context[4], ref_gen_FindFiles_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindFiles("FindFiles", 0U, 0U, func_FindFiles);

static refalrts::FnResult func_AnalyzeFilem_CheckNotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) ( # Source ( s.idx e.idx ) e.idx ) e.idx
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/9 )/8 (/15 # Source/17 (/20 s.Dialect#1/22 e.Source#1/18 )/21 e.Output#1/13 )/16 e.Variants#1/11 >/1
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
    context[17] = refalrts::ident_left(  ident_Source, context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[13], context[14] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.FileName#1 as range 9
    // closed e.Output#1 as range 13
    // closed e.Variants#1 as range 11
    if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
      continue;
    // closed e.Source#1 as range 18
    //DEBUG: e.FileName#1: 9
    //DEBUG: e.Output#1: 13
    //DEBUG: e.Variants#1: 11
    //DEBUG: s.Dialect#1: 22
    //DEBUG: e.Source#1: 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/9 )/8 {REMOVED TILE} e.Variants#1/11 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: # Source/17 AsIs: (/20 AsIs: s.Dialect#1/22 AsIs: e.Source#1/18 AsIs: )/21 AsIs: e.Output#1/13 AsIs: )/16 } Tile{ ]] }
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Output e.idx ) e.idx
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/9 )/8 (/15 # Output/17 e.Output#1/13 )/16 e.Variants#1/11 >/1
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
    context[17] = refalrts::ident_left(  ident_Output, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.FileName#1 as range 9
    // closed e.Output#1 as range 13
    // closed e.Variants#1 as range 11
    //DEBUG: e.FileName#1: 9
    //DEBUG: e.Output#1: 13
    //DEBUG: e.Variants#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/9 )/8 {REMOVED TILE} e.Variants#1/11 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: # Output/17 AsIs: e.Output#1/13 AsIs: )/16 } Tile{ ]] }
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # OutputWithNative ( e.idx ) e.idx ) e.idx
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/9 )/8 (/15 # OutputWithNative/17 (/20 e.Output#1/18 )/21 e.Native#1/13 )/16 e.Variants#1/11 >/1
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
    context[17] = refalrts::ident_left(  ident_OutputWithNative, context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[13], context[14] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.FileName#1 as range 9
    // closed e.Output#1 as range 18
    // closed e.Native#1 as range 13
    // closed e.Variants#1 as range 11
    //DEBUG: e.FileName#1: 9
    //DEBUG: e.Output#1: 18
    //DEBUG: e.Native#1: 13
    //DEBUG: e.Variants#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/9 )/8 {REMOVED TILE} e.Variants#1/11 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: # OutputWithNative/17 AsIs: (/20 AsIs: e.Output#1/18 AsIs: )/21 AsIs: e.Native#1/13 AsIs: )/16 } Tile{ ]] }
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # NotFound e.idx ) e.idx
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/9 )/8 (/15 # NotFound/17 e.NotFoundPath#1/13 )/16 e.Variants#1/11 >/1
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
    context[17] = refalrts::ident_left(  ident_NotFound, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.FileName#1 as range 9
    // closed e.NotFoundPath#1 as range 13
    // closed e.Variants#1 as range 11
    //DEBUG: e.FileName#1: 9
    //DEBUG: e.NotFoundPath#1: 13
    //DEBUG: e.Variants#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/15 # NotFound/17 e.NotFoundPath#1/13 )/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AnalyzeFile-CheckNotFound/4 AsIs: (/7 AsIs: e.FileName#1/9 AsIs: )/8 } Tile{ AsIs: e.Variants#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/9 )/8 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  if( ! refalrts::empty_seq( context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 9
  //DEBUG: e.FileName#1: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # NotFound/7 AsIs: e.FileName#1/9 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_NotFound );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AnalyzeFilem_CheckNotFound("AnalyzeFile-CheckNotFound", 3005203035U, 2944325060U, func_AnalyzeFilem_CheckNotFound);

static refalrts::FnResult func_ExistFilem_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & ExistFile-T/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName#1/2 AsIs: >/1 } e.FileName#1/2/5 Tile{ ]] }
  if (! refalrts::copy_evar(context[5], context[6], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ExistFile.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExistFilem_T("ExistFile-T", 3005203035U, 2944325060U, func_ExistFilem_T);

static refalrts::FnResult func_gen_AnalyzeFile_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & AnalyzeFile$1\1/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # True e.idx '.ref'
    // </0 & AnalyzeFile$1\1/4 # True/5 e.UnitName#2/6 '.'/11 'r'/10 'e'/9 'f'/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_True, context[5] ) )
      continue;
    context[8] = refalrts::char_right( 'f', context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 'e', context[6], context[7] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( 'r', context[6], context[7] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_right( '.', context[6], context[7] );
    if( ! context[11] )
      continue;
    // closed e.UnitName#2 as range 6
    //DEBUG: e.UnitName#2: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 Tile{ HalfReuse: # Source/0 HalfReuse: (/4 Reuse: # R5/5 AsIs: e.UnitName#2/6 AsIs: '.'/11 AsIs: 'r'/10 AsIs: 'e'/9 AsIs: 'f'/8 HalfReuse: )/1 } e.UnitName#2/6/13".rasl"/15 )/17 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[13], context[14], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], ".rasl", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], ident_Source );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::update_ident( context[5], ident_R5 );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[17] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # False e.idx
  // </0 & AnalyzeFile$1\1/4 # False/5 e.SourceName#2/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_False, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SourceName#2 as range 6
  //DEBUG: e.SourceName#2: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # NotFound/5 AsIs: e.SourceName#2/6 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::update_ident( context[5], ident_NotFound );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeFile_S1L1("AnalyzeFile$1\\1", 3005203035U, 2944325060U, func_gen_AnalyzeFile_S1L1);

static refalrts::FnResult func_gen_AnalyzeFile_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & AnalyzeFile$2\1/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # True e.idx '.sref'
    // </0 & AnalyzeFile$2\1/4 # True/5 e.UnitName#2/6 '.'/12 's'/11 'r'/10 'e'/9 'f'/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_True, context[5] ) )
      continue;
    context[8] = refalrts::char_right( 'f', context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 'e', context[6], context[7] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( 'r', context[6], context[7] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_right( 's', context[6], context[7] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_right( '.', context[6], context[7] );
    if( ! context[12] )
      continue;
    // closed e.UnitName#2 as range 6
    //DEBUG: e.UnitName#2: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/13 Tile{ HalfReuse: # Source/0 HalfReuse: (/4 Reuse: # SR/5 AsIs: e.UnitName#2/6 AsIs: '.'/12 AsIs: 's'/11 AsIs: 'r'/10 AsIs: 'e'/9 AsIs: 'f'/8 HalfReuse: )/1 } e.UnitName#2/6/14".rasl"/16 )/18 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[14], context[15], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], ".rasl", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], ident_Source );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::update_ident( context[5], ident_SR );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[13], context[18] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # False e.idx
  // </0 & AnalyzeFile$2\1/4 # False/5 e.SourceName#2/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_False, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SourceName#2 as range 6
  //DEBUG: e.SourceName#2: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # NotFound/5 AsIs: e.SourceName#2/6 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::update_ident( context[5], ident_NotFound );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeFile_S2L1("AnalyzeFile$2\\1", 3005203035U, 2944325060U, func_gen_AnalyzeFile_S2L1);

static refalrts::FnResult func_gen_AnalyzeFile_S3L1S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: ( e.$ ) s.$ e.$
  //GLOBAL GEN: ( e.$ ) s.$ e.$
  // </0 & AnalyzeFile$3\1$1\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTV#0 as range 2
  do {
    // ( e.idx ) # True e.idx
    // </0 & AnalyzeFile$3\1$1\1/4 (/7 e.OutName#2/10 )/8 # True/9 e.NativeName#3/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term(  ident_True, context[9] ) )
      continue;
    // closed e.OutName#2 as range 10
    // closed e.NativeName#3 as range 12
    //DEBUG: e.OutName#2: 10
    //DEBUG: e.NativeName#3: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # True/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # OutputWithNative/4 AsIs: (/7 AsIs: e.OutName#2/10 AsIs: )/8 } Tile{ AsIs: e.NativeName#3/12 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_OutputWithNative );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) # False e.idx
  // </0 & AnalyzeFile$3\1$1\1/4 (/7 e.OutName#2/10 )/8 # False/9 e.NativeName#3/12 >/1
  context[10] = context[5];
  context[11] = context[6];
  context[12] = context[2];
  context[13] = context[3];
  if( ! refalrts::ident_term(  ident_False, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OutName#2 as range 10
  // closed e.NativeName#3 as range 12
  //DEBUG: e.OutName#2: 10
  //DEBUG: e.NativeName#3: 12

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} # False/9 e.NativeName#3/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Output/7 AsIs: e.OutName#2/10 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_Output );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeFile_S3L1S1L1("AnalyzeFile$3\\1$1\\1", 3005203035U, 2944325060U, func_gen_AnalyzeFile_S3L1S1L1);

static refalrts::FnResult func_gen_AnalyzeFile_S3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: ( e.$ ) s.$ e.$
  //GLOBAL GEN: ( e.$ ) s.$ e.$
  // </0 & AnalyzeFile$3\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTV#0 as range 2
  do {
    // ( e.idx ) # True e.idx
    // </0 & AnalyzeFile$3\1/4 (/7 e.FileName#1/10 )/8 # True/9 e.OutName#2/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term(  ident_True, context[9] ) )
      continue;
    // closed e.FileName#1 as range 10
    // closed e.OutName#2 as range 12
    //DEBUG: e.FileName#1: 10
    //DEBUG: e.OutName#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & ExistFile-T/14 Tile{ AsIs: e.FileName#1/10 }".cpp"/15 >/17 </18 & @create_closure@/19 Tile{ HalfReuse: & AnalyzeFile$3\1$1\1/8 HalfReuse: (/9 AsIs: e.OutName#2/12 HalfReuse: )/1 } >/20 >/21 Tile{ ]] }
    if( ! refalrts::alloc_name( context[14], ref_ExistFilem_T.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], ".cpp", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], refalrts::create_closure ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Fetch.ref.function );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], ref_gen_AnalyzeFile_S3L1S1L1.ref.function );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) # False e.idx
  // </0 & AnalyzeFile$3\1/4 (/7 e.FileName#1/10 )/8 # False/9 e.OutName#2/12 >/1
  context[10] = context[5];
  context[11] = context[6];
  context[12] = context[2];
  context[13] = context[3];
  if( ! refalrts::ident_term(  ident_False, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 10
  // closed e.OutName#2 as range 12
  //DEBUG: e.FileName#1: 10
  //DEBUG: e.OutName#2: 12

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & AnalyzeFile$3\1/4 (/7 e.FileName#1/10 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 Reuse: # NotFound/9 AsIs: e.OutName#2/12 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[8] );
  refalrts::update_ident( context[9], ident_NotFound );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeFile_S3L1("AnalyzeFile$3\\1", 3005203035U, 2944325060U, func_gen_AnalyzeFile_S3L1);

static refalrts::FnResult func_gen_AnalyzeFile_S4L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 57 elems
  refalrts::Iter context[57];
  refalrts::zeros( context, 57 );
  //FAST GEN: ( s.$ e.$ ) ( s.$ e.$ ) ( s.$ e.$ ) ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ ) ( s.$ e.$ ) ( s.$ e.$ ) ( s.$ e.$ )
  // </0 & AnalyzeFile$4\1/4 (/7 s.idxB#0/21 e.idxBV#0/5 )/8 (/11 s.idxTB#0/22 e.idxTBV#0/9 )/12 (/15 s.idxTTB#0/23 e.idxTTBV#0/13 )/16 (/19 s.idxTTTB#0/24 e.idxTTTBV#0/17 )/20 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[21], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBV#0 as range 5
  if( ! refalrts::svar_left( context[22], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBV#0 as range 9
  if( ! refalrts::svar_left( context[23], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTBV#0 as range 13
  if( ! refalrts::svar_left( context[24], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTTBV#0 as range 17
  do {
    // ( # True e.idx ) ( s.idx e.idx ) ( s.idx e.idx ) ( s.idx e.idx )
    // </0 & AnalyzeFile$4\1/4 (/7 # True/21 e.R5-SourceName#2/25 )/8 (/11 s.ResSR#2/22 e.SR-SourceName#2/27 )/12 (/15 s.ResOut#2/23 e.OutName#2/29 )/16 (/19 s.ResNat#2/24 e.Native#2/31 )/20 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[13];
    context[30] = context[14];
    context[31] = context[17];
    context[32] = context[18];
    if( ! refalrts::ident_term(  ident_True, context[21] ) )
      continue;
    // closed e.R5-SourceName#2 as range 25
    // closed e.SR-SourceName#2 as range 27
    // closed e.OutName#2 as range 29
    // closed e.Native#2 as range 31
    //DEBUG: s.ResSR#2: 22
    //DEBUG: s.ResOut#2: 23
    //DEBUG: s.ResNat#2: 24
    //DEBUG: e.R5-SourceName#2: 25
    //DEBUG: e.SR-SourceName#2: 27
    //DEBUG: e.OutName#2: 29
    //DEBUG: e.Native#2: 31

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/11 s.ResSR#2/22 e.SR-SourceName#2/27 )/12 (/15 s.ResOut#2/23 {REMOVED TILE} )/16 (/19 s.ResNat#2/24 e.Native#2/31 )/20 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Source/4 AsIs: (/7 Reuse: # R5/21 AsIs: e.R5-SourceName#2/25 AsIs: )/8 } Tile{ AsIs: e.OutName#2/29 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Source );
    refalrts::update_ident( context[21], ident_R5 );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # False e.idx ) ( # True e.idx ) ( s.idx e.idx ) ( s.idx e.idx )
    // </0 & AnalyzeFile$4\1/4 (/7 # False/21 e.R5-SourceName#2/25 )/8 (/11 # True/22 e.SR-SourceName#2/27 )/12 (/15 s.ResOut#2/23 e.OutName#2/29 )/16 (/19 s.ResNat#2/24 e.Native#2/31 )/20 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[13];
    context[30] = context[14];
    context[31] = context[17];
    context[32] = context[18];
    if( ! refalrts::ident_term(  ident_False, context[21] ) )
      continue;
    if( ! refalrts::ident_term(  ident_True, context[22] ) )
      continue;
    // closed e.R5-SourceName#2 as range 25
    // closed e.SR-SourceName#2 as range 27
    // closed e.OutName#2 as range 29
    // closed e.Native#2 as range 31
    //DEBUG: s.ResOut#2: 23
    //DEBUG: s.ResNat#2: 24
    //DEBUG: e.R5-SourceName#2: 25
    //DEBUG: e.SR-SourceName#2: 27
    //DEBUG: e.OutName#2: 29
    //DEBUG: e.Native#2: 31

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & AnalyzeFile$4\1/4 (/7 # False/21 e.R5-SourceName#2/25 {REMOVED TILE} (/15 s.ResOut#2/23 {REMOVED TILE} )/16 (/19 s.ResNat#2/24 e.Native#2/31 )/20 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # Source/8 AsIs: (/11 Reuse: # SR/22 AsIs: e.SR-SourceName#2/27 AsIs: )/12 } Tile{ AsIs: e.OutName#2/29 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[8], ident_Source );
    refalrts::update_ident( context[22], ident_SR );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # False e.idx ) ( # False e.idx ) ( # True e.idx ) ( # True e.idx )
    // </0 & AnalyzeFile$4\1/4 (/7 # False/21 e.R5-SourceName#2/25 )/8 (/11 # False/22 e.SR-SourceName#2/27 )/12 (/15 # True/23 e.OutName#2/29 )/16 (/19 # True/24 e.Native#2/31 )/20 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[13];
    context[30] = context[14];
    context[31] = context[17];
    context[32] = context[18];
    if( ! refalrts::ident_term(  ident_False, context[21] ) )
      continue;
    if( ! refalrts::ident_term(  ident_False, context[22] ) )
      continue;
    if( ! refalrts::ident_term(  ident_True, context[23] ) )
      continue;
    if( ! refalrts::ident_term(  ident_True, context[24] ) )
      continue;
    // closed e.R5-SourceName#2 as range 25
    // closed e.SR-SourceName#2 as range 27
    // closed e.OutName#2 as range 29
    // closed e.Native#2 as range 31
    //DEBUG: e.R5-SourceName#2: 25
    //DEBUG: e.SR-SourceName#2: 27
    //DEBUG: e.OutName#2: 29
    //DEBUG: e.Native#2: 31

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile$4\1/4 (/7 # False/21 e.R5-SourceName#2/25 )/8 (/11 # False/22 e.SR-SourceName#2/27 {REMOVED TILE} (/19 # True/24 {REMOVED TILE} )/20 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # OutputWithNative/15 HalfReuse: (/23 AsIs: e.OutName#2/29 AsIs: )/16 } Tile{ AsIs: e.Native#2/31 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], ident_OutputWithNative );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[23], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # False e.idx ) ( # False e.idx ) ( # True e.idx ) ( # False e.idx )
    // </0 & AnalyzeFile$4\1/4 (/7 # False/21 e.R5-SourceName#2/25 )/8 (/11 # False/22 e.SR-SourceName#2/27 )/12 (/15 # True/23 e.OutName#2/29 )/16 (/19 # False/24 e.Native#2/31 )/20 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[13];
    context[30] = context[14];
    context[31] = context[17];
    context[32] = context[18];
    if( ! refalrts::ident_term(  ident_False, context[21] ) )
      continue;
    if( ! refalrts::ident_term(  ident_False, context[22] ) )
      continue;
    if( ! refalrts::ident_term(  ident_True, context[23] ) )
      continue;
    if( ! refalrts::ident_term(  ident_False, context[24] ) )
      continue;
    // closed e.R5-SourceName#2 as range 25
    // closed e.SR-SourceName#2 as range 27
    // closed e.OutName#2 as range 29
    // closed e.Native#2 as range 31
    //DEBUG: e.R5-SourceName#2: 25
    //DEBUG: e.SR-SourceName#2: 27
    //DEBUG: e.OutName#2: 29
    //DEBUG: e.Native#2: 31

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile$4\1/4 (/7 # False/21 e.R5-SourceName#2/25 )/8 (/11 # False/22 e.SR-SourceName#2/27 )/12 {REMOVED TILE} (/19 # False/24 e.Native#2/31 )/20 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 Reuse: # Output/23 AsIs: e.OutName#2/29 AsIs: )/16 } Tile{ ]] }
    refalrts::update_ident( context[23], ident_Output );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # False e.idx '.ref' ) ( # False e.idx '.sref' ) ( # False e.idx '.rasl' ) ( # False e.idx '.cpp' )
  // </0 & AnalyzeFile$4\1/4 (/7 # False/21 e.UnitName#2/25 '.'/36 'r'/35 'e'/34 'f'/33 )/8 (/11 # False/22 e.UnitName#2/51 '.'/41 's'/40 'r'/39 'e'/38 'f'/37 )/12 (/15 # False/23 e.UnitName#2/53 '.'/46 'r'/45 'a'/44 's'/43 'l'/42 )/16 (/19 # False/24 e.UnitName#2/55 '.'/50 'c'/49 'p'/48 'p'/47 )/20 >/1
  context[25] = context[5];
  context[26] = context[6];
  context[27] = context[9];
  context[28] = context[10];
  context[29] = context[13];
  context[30] = context[14];
  context[31] = context[17];
  context[32] = context[18];
  if( ! refalrts::ident_term(  ident_False, context[21] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term(  ident_False, context[22] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term(  ident_False, context[23] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term(  ident_False, context[24] ) )
    return refalrts::cRecognitionImpossible;
  context[33] = refalrts::char_right( 'f', context[25], context[26] );
  if( ! context[33] )
    return refalrts::cRecognitionImpossible;
  context[34] = refalrts::char_right( 'e', context[25], context[26] );
  if( ! context[34] )
    return refalrts::cRecognitionImpossible;
  context[35] = refalrts::char_right( 'r', context[25], context[26] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  context[36] = refalrts::char_right( '.', context[25], context[26] );
  if( ! context[36] )
    return refalrts::cRecognitionImpossible;
  context[37] = refalrts::char_right( 'f', context[27], context[28] );
  if( ! context[37] )
    return refalrts::cRecognitionImpossible;
  context[38] = refalrts::char_right( 'e', context[27], context[28] );
  if( ! context[38] )
    return refalrts::cRecognitionImpossible;
  context[39] = refalrts::char_right( 'r', context[27], context[28] );
  if( ! context[39] )
    return refalrts::cRecognitionImpossible;
  context[40] = refalrts::char_right( 's', context[27], context[28] );
  if( ! context[40] )
    return refalrts::cRecognitionImpossible;
  context[41] = refalrts::char_right( '.', context[27], context[28] );
  if( ! context[41] )
    return refalrts::cRecognitionImpossible;
  context[42] = refalrts::char_right( 'l', context[29], context[30] );
  if( ! context[42] )
    return refalrts::cRecognitionImpossible;
  context[43] = refalrts::char_right( 's', context[29], context[30] );
  if( ! context[43] )
    return refalrts::cRecognitionImpossible;
  context[44] = refalrts::char_right( 'a', context[29], context[30] );
  if( ! context[44] )
    return refalrts::cRecognitionImpossible;
  context[45] = refalrts::char_right( 'r', context[29], context[30] );
  if( ! context[45] )
    return refalrts::cRecognitionImpossible;
  context[46] = refalrts::char_right( '.', context[29], context[30] );
  if( ! context[46] )
    return refalrts::cRecognitionImpossible;
  context[47] = refalrts::char_right( 'p', context[31], context[32] );
  if( ! context[47] )
    return refalrts::cRecognitionImpossible;
  context[48] = refalrts::char_right( 'p', context[31], context[32] );
  if( ! context[48] )
    return refalrts::cRecognitionImpossible;
  context[49] = refalrts::char_right( 'c', context[31], context[32] );
  if( ! context[49] )
    return refalrts::cRecognitionImpossible;
  context[50] = refalrts::char_right( '.', context[31], context[32] );
  if( ! context[50] )
    return refalrts::cRecognitionImpossible;
  // closed e.UnitName#2 as range 25
  if( ! refalrts::repeated_evar_left( context[51], context[52], context[25], context[26], context[27], context[28] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[27], context[28] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::repeated_evar_left( context[53], context[54], context[51], context[52], context[29], context[30] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[29], context[30] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::repeated_evar_left( context[55], context[56], context[53], context[54], context[31], context[32] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[31], context[32] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.UnitName#2: 25

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & AnalyzeFile$4\1/4 (/7 # False/21 e.UnitName#2/25 '.'/36 'r'/35 'e'/34 'f'/33 )/8 (/11 # False/22 e.UnitName#2/51 '.'/41 's'/40 'r'/39 'e'/38 'f'/37 )/12 (/15 # False/23 e.UnitName#2/53 '.'/46 'r'/45 'a'/44 's'/43 'l'/42 )/16 {REMOVED TILE} 'c'/49 'p'/48 'p'/47 )/20 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/19 Reuse: # NotFound/24 AsIs: e.UnitName#2/55 HalfReuse: )/50 } Tile{ ]] }
  refalrts::update_ident( context[24], ident_NotFound );
  refalrts::reinit_close_bracket( context[50] );
  refalrts::link_brackets( context[19], context[50] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[50] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeFile_S4L1("AnalyzeFile$4\\1", 3005203035U, 2944325060U, func_gen_AnalyzeFile_S4L1);

static refalrts::FnResult func_AnalyzeFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & AnalyzeFile/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx '.ref'
    // </0 & AnalyzeFile/4 e.FileName#1/5 '.'/10 'r'/9 'e'/8 'f'/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_right( 'f', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 'e', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 'r', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( '.', context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.FileName#1 as range 5
    //DEBUG: e.FileName#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </11 & Fetch/12 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/5 AsIs: '.'/10 AsIs: 'r'/9 AsIs: 'e'/8 AsIs: 'f'/7 AsIs: >/1 } & AnalyzeFile$1\1/13 >/14 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ref_gen_AnalyzeFile_S1L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExistFilem_T.ref.function );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx '.sref'
    // </0 & AnalyzeFile/4 e.FileName#1/5 '.'/11 's'/10 'r'/9 'e'/8 'f'/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_right( 'f', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 'e', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 'r', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( 's', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_right( '.', context[5], context[6] );
    if( ! context[11] )
      continue;
    // closed e.FileName#1 as range 5
    //DEBUG: e.FileName#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </12 & Fetch/13 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/5 AsIs: '.'/11 AsIs: 's'/10 AsIs: 'r'/9 AsIs: 'e'/8 AsIs: 'f'/7 AsIs: >/1 } & AnalyzeFile$2\1/14 >/15 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ref_gen_AnalyzeFile_S2L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExistFilem_T.ref.function );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx '.rasl'
    // </0 & AnalyzeFile/4 e.FileName#1/5 '.'/11 'r'/10 'a'/9 's'/8 'l'/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_right( 'l', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 's', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 'a', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( 'r', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_right( '.', context[5], context[6] );
    if( ! context[11] )
      continue;
    // closed e.FileName#1 as range 5
    //DEBUG: e.FileName#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </12 & Fetch/13 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/5 AsIs: '.'/11 AsIs: 'r'/10 AsIs: 'a'/9 AsIs: 's'/8 AsIs: 'l'/7 AsIs: >/1 } </14 & @create_closure@/15 & AnalyzeFile$3\1/16 (/17 e.FileName#1/5/18 )/20 >/21 >/22 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], refalrts::create_closure ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ref_gen_AnalyzeFile_S3L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExistFilem_T.ref.function );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[22] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & AnalyzeFile/4 e.FileName#1/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.FileName#1 as range 5
  //DEBUG: e.FileName#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Fetch/8 (/9 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/5 HalfReuse: '.'/1 }"ref"/10 >/12 )/13 (/14 </15 & ExistFile-T/16 e.FileName#1/5/17".sref"/19 >/21 )/22 (/23 </24 & ExistFile-T/25 e.FileName#1/5/26".rasl"/28 >/30 )/31 (/32 </33 & ExistFile-T/34 e.FileName#1/5/35".cpp"/37 >/39 )/40 & AnalyzeFile$4\1/41 >/42 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], "ref", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_ExistFilem_T.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[19], context[20], ".sref", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], ref_ExistFilem_T.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[26], context[27], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[28], context[29], ".rasl", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], ref_ExistFilem_T.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[35], context[36], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[37], context[38], ".cpp", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[41], ref_gen_AnalyzeFile_S4L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[42] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ExistFilem_T.ref.function );
  refalrts::reinit_char( context[1], '.' );
  refalrts::push_stack( context[42] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[32], context[40] );
  refalrts::push_stack( context[39] );
  refalrts::push_stack( context[33] );
  refalrts::link_brackets( context[23], context[31] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[24] );
  refalrts::link_brackets( context[14], context[22] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[42] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AnalyzeFile("AnalyzeFile", 3005203035U, 2944325060U, func_AnalyzeFile);

static refalrts::FnResult func_gen_FindInclude_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & FindInclude\1/4 (/7 e.FileName#1/5 )/8 (/11 e.Folder#2/9 )/12 >/1
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
  // closed e.FileName#1 as range 5
  // closed e.Folder#2 as range 9
  //DEBUG: e.FileName#1: 5
  //DEBUG: e.Folder#2: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeInclude/4 } Tile{ AsIs: e.Folder#2/9 } Tile{ HalfReuse: '/'/11 } Tile{ AsIs: e.FileName#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_AnalyzeInclude.ref.function );
  refalrts::reinit_char( context[11], '/' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInclude_L1("FindInclude\\1", 3005203035U, 2944325060U, func_gen_FindInclude_L1);

static refalrts::FnResult func_gen_FindInclude_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & FindInclude\2/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx
    // </0 & FindInclude\2/4 e.Variants-B#2/7 (/13 # Success/15 s.Dialect#2/16 e.FullPath#2/11 )/14 e.Variants-E#2/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left(  ident_Success, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Variants-E#2 as range 9
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.FullPath#2 as range 11
      //DEBUG: e.Variants-B#2: 7
      //DEBUG: e.Variants-E#2: 9
      //DEBUG: s.Dialect#2: 16
      //DEBUG: e.FullPath#2: 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & FindInclude\2/4 e.Variants-B#2/7 (/13 {REMOVED TILE} {REMOVED TILE} )/14 e.Variants-E#2/9 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: # Success/15 AsIs: s.Dialect#2/16 } Tile{ AsIs: e.FullPath#2/11 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & FindInclude\2/4 e.Variants#2/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Variants#2 as range 5
  //DEBUG: e.Variants#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FindInclude\2/4 e.Variants#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident( context[1], ident_Fails );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInclude_L2("FindInclude\\2", 3005203035U, 2944325060U, func_gen_FindInclude_L2);

static refalrts::FnResult func_FindInclude(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & FindInclude/4 (/7 e.Folders#1/5 )/8 e.FileName#1/2 >/1
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
  // closed e.Folders#1 as range 5
  // closed e.FileName#1 as range 2
  //DEBUG: e.Folders#1: 5
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } Tile{ HalfReuse: & AnalyzeInclude/8 AsIs: e.FileName#1/2 AsIs: >/1 } </9 & Map/10 </11 & @create_closure@/12 & FindInclude\1/13 (/14 e.FileName#1/2/15 )/17 >/18 Tile{ AsIs: e.Folders#1/5 } >/19 & FindInclude\2/20 >/21 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ref_gen_FindInclude_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[15], context[16], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], ref_gen_FindInclude_L2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], ref_AnalyzeInclude.ref.function );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[18] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindInclude("FindInclude", 0U, 0U, func_FindInclude);

static refalrts::FnResult func_gen_AnalyzeInclude_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & AnalyzeInclude$1\1/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # True e.idx
    // </0 & AnalyzeInclude$1\1/4 # True/5 e.FullPath#2/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_True, context[5] ) )
      continue;
    // closed e.FullPath#2 as range 6
    //DEBUG: e.FullPath#2: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Success/4 Reuse: # R5/5 AsIs: e.FullPath#2/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::update_ident( context[5], ident_R5 );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # False e.idx
  // </0 & AnalyzeInclude$1\1/4 # False/5 e.FullPath#2/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_False, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FullPath#2 as range 6
  //DEBUG: e.FullPath#2: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.FullPath#2/6 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Fails/4 HalfReuse: )/5 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Fails );
  refalrts::reinit_close_bracket( context[5] );
  refalrts::link_brackets( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeInclude_S1L1("AnalyzeInclude$1\\1", 3005203035U, 2944325060U, func_gen_AnalyzeInclude_S1L1);

static refalrts::FnResult func_gen_AnalyzeInclude_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & AnalyzeInclude$2\1/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # True e.idx
    // </0 & AnalyzeInclude$2\1/4 # True/5 e.FullPath#2/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_True, context[5] ) )
      continue;
    // closed e.FullPath#2 as range 6
    //DEBUG: e.FullPath#2: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Success/4 Reuse: # SR/5 AsIs: e.FullPath#2/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::update_ident( context[5], ident_SR );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # False e.idx
  // </0 & AnalyzeInclude$2\1/4 # False/5 e.FullPath#2/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_False, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FullPath#2 as range 6
  //DEBUG: e.FullPath#2: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.FullPath#2/6 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Fails/4 HalfReuse: )/5 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Fails );
  refalrts::reinit_close_bracket( context[5] );
  refalrts::link_brackets( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeInclude_S2L1("AnalyzeInclude$2\\1", 3005203035U, 2944325060U, func_gen_AnalyzeInclude_S2L1);

static refalrts::FnResult func_gen_AnalyzeInclude_S3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: ( s.$ e.$ ) ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ ) ( s.$ e.$ )
  // </0 & AnalyzeInclude$3\1/4 (/7 s.idxB#0/13 e.idxBV#0/5 )/8 (/11 s.idxTB#0/14 e.idxTBV#0/9 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBV#0 as range 5
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBV#0 as range 9
  do {
    // ( # True e.idx ) ( s.idx e.idx )
    // </0 & AnalyzeInclude$3\1/4 (/7 # True/13 e.R5-FullPath#2/15 )/8 (/11 s.ResSR#2/14 e.SR-FullPath#2/17 )/12 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::ident_term(  ident_True, context[13] ) )
      continue;
    // closed e.R5-FullPath#2 as range 15
    // closed e.SR-FullPath#2 as range 17
    //DEBUG: s.ResSR#2: 14
    //DEBUG: e.R5-FullPath#2: 15
    //DEBUG: e.SR-FullPath#2: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 s.ResSR#2/14 e.SR-FullPath#2/17 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Success/7 Reuse: # R5/13 AsIs: e.R5-FullPath#2/15 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], ident_Success );
    refalrts::update_ident( context[13], ident_R5 );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # False e.idx ) ( # True e.idx )
    // </0 & AnalyzeInclude$3\1/4 (/7 # False/13 e.R5-FullPath#2/15 )/8 (/11 # True/14 e.SR-FullPath#2/17 )/12 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::ident_term(  ident_False, context[13] ) )
      continue;
    if( ! refalrts::ident_term(  ident_True, context[14] ) )
      continue;
    // closed e.R5-FullPath#2 as range 15
    // closed e.SR-FullPath#2 as range 17
    //DEBUG: e.R5-FullPath#2: 15
    //DEBUG: e.SR-FullPath#2: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeInclude$3\1/4 (/7 # False/13 e.R5-FullPath#2/15 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 HalfReuse: # Success/11 Reuse: # SR/14 AsIs: e.SR-FullPath#2/17 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[11], ident_Success );
    refalrts::update_ident( context[14], ident_SR );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # False e.idx ) ( # False e.idx )
  // </0 & AnalyzeInclude$3\1/4 (/7 # False/13 e.R5-FullPath#2/15 )/8 (/11 # False/14 e.SR-FullPath#2/17 )/12 >/1
  context[15] = context[5];
  context[16] = context[6];
  context[17] = context[9];
  context[18] = context[10];
  if( ! refalrts::ident_term(  ident_False, context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term(  ident_False, context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.R5-FullPath#2 as range 15
  // closed e.SR-FullPath#2 as range 17
  //DEBUG: e.R5-FullPath#2: 15
  //DEBUG: e.SR-FullPath#2: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} # False/13 e.R5-FullPath#2/15 )/8 (/11 # False/14 e.SR-FullPath#2/17 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Fails/4 HalfReuse: )/7 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Fails );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeInclude_S3L1("AnalyzeInclude$3\\1", 3005203035U, 2944325060U, func_gen_AnalyzeInclude_S3L1);

static refalrts::FnResult func_AnalyzeInclude(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & AnalyzeInclude/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx '.refi'
    // </0 & AnalyzeInclude/4 e.FileName#1/5 '.'/11 'r'/10 'e'/9 'f'/8 'i'/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_right( 'i', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 'f', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 'e', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( 'r', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_right( '.', context[5], context[6] );
    if( ! context[11] )
      continue;
    // closed e.FileName#1 as range 5
    //DEBUG: e.FileName#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </12 & Fetch/13 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/5 AsIs: '.'/11 AsIs: 'r'/10 AsIs: 'e'/9 AsIs: 'f'/8 AsIs: 'i'/7 AsIs: >/1 } & AnalyzeInclude$1\1/14 >/15 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ref_gen_AnalyzeInclude_S1L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExistFilem_T.ref.function );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx '.srefi'
    // </0 & AnalyzeInclude/4 e.FileName#1/5 '.'/12 's'/11 'r'/10 'e'/9 'f'/8 'i'/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_right( 'i', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 'f', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 'e', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( 'r', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_right( 's', context[5], context[6] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_right( '.', context[5], context[6] );
    if( ! context[12] )
      continue;
    // closed e.FileName#1 as range 5
    //DEBUG: e.FileName#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Fetch/14 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/5 AsIs: '.'/12 AsIs: 's'/11 AsIs: 'r'/10 AsIs: 'e'/9 AsIs: 'f'/8 AsIs: 'i'/7 AsIs: >/1 } & AnalyzeInclude$2\1/15 >/16 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ref_gen_AnalyzeInclude_S2L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExistFilem_T.ref.function );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & AnalyzeInclude/4 e.FileName#1/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.FileName#1 as range 5
  //DEBUG: e.FileName#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Fetch/8 (/9 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/5 HalfReuse: '.'/1 }"refi"/10 >/12 )/13 (/14 </15 & ExistFile-T/16 e.FileName#1/5/17".srefi"/19 >/21 )/22 & AnalyzeInclude$3\1/23 >/24 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], "refi", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_ExistFilem_T.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[19], context[20], ".srefi", 6 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], ref_gen_AnalyzeInclude_S3L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ExistFilem_T.ref.function );
  refalrts::reinit_char( context[1], '.' );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[14], context[22] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[24] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AnalyzeInclude("AnalyzeInclude", 3005203035U, 2944325060U, func_AnalyzeInclude);


//End of file
