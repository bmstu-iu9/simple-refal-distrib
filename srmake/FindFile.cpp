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
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # Source/13 (/16 s.Dialect#1/18 e.Source#1/14 )/17 e.Output#1/9 )/12 e.Variants#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[19], context[20] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_Source, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.FileName#1 as range 5
    // closed e.Output#1 as range 9
    // closed e.Variants#1 as range 19(2)
    if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
      continue;
    // closed e.Source#1 as range 14
    //DEBUG: e.FileName#1: 5
    //DEBUG: e.Output#1: 9
    //DEBUG: e.Variants#1: 2
    //DEBUG: s.Dialect#1: 18
    //DEBUG: e.Source#1: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE} e.Variants#1/19(2) >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Source/13 AsIs: (/16 AsIs: s.Dialect#1/18 AsIs: e.Source#1/14 AsIs: )/17 AsIs: e.Output#1/9 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Output e.idx ) e.idx
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # Output/13 e.Output#1/9 )/12 e.Variants#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[19], context[20] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_Output, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.Output#1 as range 9
    // closed e.Variants#1 as range 19(2)
    //DEBUG: e.FileName#1: 5
    //DEBUG: e.Output#1: 9
    //DEBUG: e.Variants#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE} e.Variants#1/19(2) >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Output/13 AsIs: e.Output#1/9 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # OutputWithNative ( e.idx ) e.idx ) e.idx
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # OutputWithNative/13 (/16 e.Output#1/14 )/17 e.Native#1/9 )/12 e.Variants#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[19], context[20] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_OutputWithNative, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.FileName#1 as range 5
    // closed e.Output#1 as range 14
    // closed e.Native#1 as range 9
    // closed e.Variants#1 as range 19(2)
    //DEBUG: e.FileName#1: 5
    //DEBUG: e.Output#1: 14
    //DEBUG: e.Native#1: 9
    //DEBUG: e.Variants#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE} e.Variants#1/19(2) >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # OutputWithNative/13 AsIs: (/16 AsIs: e.Output#1/14 AsIs: )/17 AsIs: e.Native#1/9 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # NotFound e.idx ) e.idx
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # NotFound/13 e.NotFoundPath#1/9 )/12 e.Variants#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[19], context[20] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_NotFound, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.NotFoundPath#1 as range 9
    // closed e.Variants#1 as range 19(2)
    //DEBUG: e.FileName#1: 5
    //DEBUG: e.NotFoundPath#1: 9
    //DEBUG: e.Variants#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/11 # NotFound/13 e.NotFoundPath#1/9 )/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AnalyzeFile-CheckNotFound/4 AsIs: (/7 AsIs: e.FileName#1/5 AsIs: )/8 } Tile{ AsIs: e.Variants#1/19(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 5
  //DEBUG: e.FileName#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # NotFound/7 AsIs: e.FileName#1/5 AsIs: )/8 } Tile{ ]] }
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
    // </0 & AnalyzeFile$1\1/4 # True/5 e.UnitName#2/2 '.'/9 'r'/8 'e'/7 'f'/6 >/1
    if( ! refalrts::ident_term(  ident_True, context[5] ) )
      continue;
    context[16] = context[2];
    context[17] = context[3];
    context[6] = refalrts::char_right( 'f', context[16], context[17] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'e', context[16], context[17] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 'r', context[16], context[17] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( '.', context[16], context[17] );
    if( ! context[9] )
      continue;
    // closed e.UnitName#2 as range 16(2)
    //DEBUG: e.UnitName#2: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # Source/0 HalfReuse: (/4 Reuse: # R5/5 AsIs: e.UnitName#2/16(2) AsIs: '.'/9 AsIs: 'r'/8 AsIs: 'e'/7 AsIs: 'f'/6 HalfReuse: )/1 } e.UnitName#2/16(2)/11".rasl"/13 )/15 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[11], context[12], context[16], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], ".rasl", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], ident_Source );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::update_ident( context[5], ident_R5 );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[15] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[15] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # False e.idx
  // </0 & AnalyzeFile$1\1/4 # False/5 e.SourceName#2/2 >/1
  if( ! refalrts::ident_term(  ident_False, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SourceName#2 as range 2
  //DEBUG: e.SourceName#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # NotFound/5 AsIs: e.SourceName#2/2 HalfReuse: )/1 ]] }
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
    // </0 & AnalyzeFile$2\1/4 # True/5 e.UnitName#2/2 '.'/10 's'/9 'r'/8 'e'/7 'f'/6 >/1
    if( ! refalrts::ident_term(  ident_True, context[5] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    context[6] = refalrts::char_right( 'f', context[17], context[18] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'e', context[17], context[18] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 'r', context[17], context[18] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 's', context[17], context[18] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( '.', context[17], context[18] );
    if( ! context[10] )
      continue;
    // closed e.UnitName#2 as range 17(2)
    //DEBUG: e.UnitName#2: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/11 Tile{ HalfReuse: # Source/0 HalfReuse: (/4 Reuse: # SR/5 AsIs: e.UnitName#2/17(2) AsIs: '.'/10 AsIs: 's'/9 AsIs: 'r'/8 AsIs: 'e'/7 AsIs: 'f'/6 HalfReuse: )/1 } e.UnitName#2/17(2)/12".rasl"/14 )/16 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[12], context[13], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ".rasl", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], ident_Source );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::update_ident( context[5], ident_SR );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[16] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # False e.idx
  // </0 & AnalyzeFile$2\1/4 # False/5 e.SourceName#2/2 >/1
  if( ! refalrts::ident_term(  ident_False, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SourceName#2 as range 2
  //DEBUG: e.SourceName#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # NotFound/5 AsIs: e.SourceName#2/2 HalfReuse: )/1 ]] }
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
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
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
    // </0 & AnalyzeFile$3\1$1\1/4 (/7 e.OutName#2/5 )/8 # True/9 e.NativeName#3/2 >/1
    if( ! refalrts::ident_term(  ident_True, context[9] ) )
      continue;
    // closed e.OutName#2 as range 5
    // closed e.NativeName#3 as range 2
    //DEBUG: e.OutName#2: 5
    //DEBUG: e.NativeName#3: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # True/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # OutputWithNative/4 AsIs: (/7 AsIs: e.OutName#2/5 AsIs: )/8 } Tile{ AsIs: e.NativeName#3/2 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_OutputWithNative );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) # False e.idx
  // </0 & AnalyzeFile$3\1$1\1/4 (/7 e.OutName#2/5 )/8 # False/9 e.NativeName#3/2 >/1
  if( ! refalrts::ident_term(  ident_False, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OutName#2 as range 5
  // closed e.NativeName#3 as range 2
  //DEBUG: e.OutName#2: 5
  //DEBUG: e.NativeName#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} # False/9 e.NativeName#3/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Output/7 AsIs: e.OutName#2/5 AsIs: )/8 } Tile{ ]] }
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
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    // </0 & AnalyzeFile$3\1/4 (/7 e.FileName#1/5 )/8 # True/9 e.OutName#2/2 >/1
    if( ! refalrts::ident_term(  ident_True, context[9] ) )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.OutName#2 as range 2
    //DEBUG: e.FileName#1: 5
    //DEBUG: e.OutName#2: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & ExistFile-T/10 Tile{ AsIs: e.FileName#1/5 }".cpp"/11 >/13 </14 & @create_closure@/15 Tile{ HalfReuse: & AnalyzeFile$3\1$1\1/8 HalfReuse: (/9 AsIs: e.OutName#2/2 HalfReuse: )/1 } >/16 >/17 Tile{ ]] }
    if( ! refalrts::alloc_name( context[10], ref_ExistFilem_T.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], ".cpp", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], refalrts::create_closure ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Fetch.ref.function );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], ref_gen_AnalyzeFile_S3L1S1L1.ref.function );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) # False e.idx
  // </0 & AnalyzeFile$3\1/4 (/7 e.FileName#1/5 )/8 # False/9 e.OutName#2/2 >/1
  if( ! refalrts::ident_term(  ident_False, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 5
  // closed e.OutName#2 as range 2
  //DEBUG: e.FileName#1: 5
  //DEBUG: e.OutName#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & AnalyzeFile$3\1/4 (/7 e.FileName#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 Reuse: # NotFound/9 AsIs: e.OutName#2/2 HalfReuse: )/1 ]] }
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
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
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
    // </0 & AnalyzeFile$4\1/4 (/7 # True/21 e.R5-SourceName#2/5 )/8 (/11 s.ResSR#2/22 e.SR-SourceName#2/9 )/12 (/15 s.ResOut#2/23 e.OutName#2/13 )/16 (/19 s.ResNat#2/24 e.Native#2/17 )/20 >/1
    if( ! refalrts::ident_term(  ident_True, context[21] ) )
      continue;
    // closed e.R5-SourceName#2 as range 5
    // closed e.SR-SourceName#2 as range 9
    // closed e.OutName#2 as range 13
    // closed e.Native#2 as range 17
    //DEBUG: s.ResSR#2: 22
    //DEBUG: s.ResOut#2: 23
    //DEBUG: s.ResNat#2: 24
    //DEBUG: e.R5-SourceName#2: 5
    //DEBUG: e.SR-SourceName#2: 9
    //DEBUG: e.OutName#2: 13
    //DEBUG: e.Native#2: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/11 s.ResSR#2/22 e.SR-SourceName#2/9 )/12 (/15 s.ResOut#2/23 {REMOVED TILE} )/16 (/19 s.ResNat#2/24 e.Native#2/17 )/20 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Source/4 AsIs: (/7 Reuse: # R5/21 AsIs: e.R5-SourceName#2/5 AsIs: )/8 } Tile{ AsIs: e.OutName#2/13 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Source );
    refalrts::update_ident( context[21], ident_R5 );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # False e.idx ) ( # True e.idx ) ( s.idx e.idx ) ( s.idx e.idx )
    // </0 & AnalyzeFile$4\1/4 (/7 # False/21 e.R5-SourceName#2/5 )/8 (/11 # True/22 e.SR-SourceName#2/9 )/12 (/15 s.ResOut#2/23 e.OutName#2/13 )/16 (/19 s.ResNat#2/24 e.Native#2/17 )/20 >/1
    if( ! refalrts::ident_term(  ident_False, context[21] ) )
      continue;
    if( ! refalrts::ident_term(  ident_True, context[22] ) )
      continue;
    // closed e.R5-SourceName#2 as range 5
    // closed e.SR-SourceName#2 as range 9
    // closed e.OutName#2 as range 13
    // closed e.Native#2 as range 17
    //DEBUG: s.ResOut#2: 23
    //DEBUG: s.ResNat#2: 24
    //DEBUG: e.R5-SourceName#2: 5
    //DEBUG: e.SR-SourceName#2: 9
    //DEBUG: e.OutName#2: 13
    //DEBUG: e.Native#2: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & AnalyzeFile$4\1/4 (/7 # False/21 e.R5-SourceName#2/5 {REMOVED TILE} (/15 s.ResOut#2/23 {REMOVED TILE} )/16 (/19 s.ResNat#2/24 e.Native#2/17 )/20 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # Source/8 AsIs: (/11 Reuse: # SR/22 AsIs: e.SR-SourceName#2/9 AsIs: )/12 } Tile{ AsIs: e.OutName#2/13 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[8], ident_Source );
    refalrts::update_ident( context[22], ident_SR );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # False e.idx ) ( # False e.idx ) ( # True e.idx ) ( # True e.idx )
    // </0 & AnalyzeFile$4\1/4 (/7 # False/21 e.R5-SourceName#2/5 )/8 (/11 # False/22 e.SR-SourceName#2/9 )/12 (/15 # True/23 e.OutName#2/13 )/16 (/19 # True/24 e.Native#2/17 )/20 >/1
    if( ! refalrts::ident_term(  ident_False, context[21] ) )
      continue;
    if( ! refalrts::ident_term(  ident_False, context[22] ) )
      continue;
    if( ! refalrts::ident_term(  ident_True, context[23] ) )
      continue;
    if( ! refalrts::ident_term(  ident_True, context[24] ) )
      continue;
    // closed e.R5-SourceName#2 as range 5
    // closed e.SR-SourceName#2 as range 9
    // closed e.OutName#2 as range 13
    // closed e.Native#2 as range 17
    //DEBUG: e.R5-SourceName#2: 5
    //DEBUG: e.SR-SourceName#2: 9
    //DEBUG: e.OutName#2: 13
    //DEBUG: e.Native#2: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile$4\1/4 (/7 # False/21 e.R5-SourceName#2/5 )/8 (/11 # False/22 e.SR-SourceName#2/9 {REMOVED TILE} (/19 # True/24 {REMOVED TILE} )/20 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # OutputWithNative/15 HalfReuse: (/23 AsIs: e.OutName#2/13 AsIs: )/16 } Tile{ AsIs: e.Native#2/17 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], ident_OutputWithNative );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[23], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # False e.idx ) ( # False e.idx ) ( # True e.idx ) ( # False e.idx )
    // </0 & AnalyzeFile$4\1/4 (/7 # False/21 e.R5-SourceName#2/5 )/8 (/11 # False/22 e.SR-SourceName#2/9 )/12 (/15 # True/23 e.OutName#2/13 )/16 (/19 # False/24 e.Native#2/17 )/20 >/1
    if( ! refalrts::ident_term(  ident_False, context[21] ) )
      continue;
    if( ! refalrts::ident_term(  ident_False, context[22] ) )
      continue;
    if( ! refalrts::ident_term(  ident_True, context[23] ) )
      continue;
    if( ! refalrts::ident_term(  ident_False, context[24] ) )
      continue;
    // closed e.R5-SourceName#2 as range 5
    // closed e.SR-SourceName#2 as range 9
    // closed e.OutName#2 as range 13
    // closed e.Native#2 as range 17
    //DEBUG: e.R5-SourceName#2: 5
    //DEBUG: e.SR-SourceName#2: 9
    //DEBUG: e.OutName#2: 13
    //DEBUG: e.Native#2: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile$4\1/4 (/7 # False/21 e.R5-SourceName#2/5 )/8 (/11 # False/22 e.SR-SourceName#2/9 )/12 {REMOVED TILE} (/19 # False/24 e.Native#2/17 )/20 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 Reuse: # Output/23 AsIs: e.OutName#2/13 AsIs: )/16 } Tile{ ]] }
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
  // </0 & AnalyzeFile$4\1/4 (/7 # False/21 e.UnitName#2/5 '.'/28 'r'/27 'e'/26 'f'/25 )/8 (/11 # False/22 e.UnitName#2/43 '.'/33 's'/32 'r'/31 'e'/30 'f'/29 )/12 (/15 # False/23 e.UnitName#2/45 '.'/38 'r'/37 'a'/36 's'/35 'l'/34 )/16 (/19 # False/24 e.UnitName#2/47 '.'/42 'c'/41 'p'/40 'p'/39 )/20 >/1
  if( ! refalrts::ident_term(  ident_False, context[21] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term(  ident_False, context[22] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term(  ident_False, context[23] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term(  ident_False, context[24] ) )
    return refalrts::cRecognitionImpossible;
  context[25] = refalrts::char_right( 'f', context[5], context[6] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  context[26] = refalrts::char_right( 'e', context[5], context[6] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  context[27] = refalrts::char_right( 'r', context[5], context[6] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  context[28] = refalrts::char_right( '.', context[5], context[6] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  context[29] = refalrts::char_right( 'f', context[9], context[10] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  context[30] = refalrts::char_right( 'e', context[9], context[10] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  context[31] = refalrts::char_right( 'r', context[9], context[10] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  context[32] = refalrts::char_right( 's', context[9], context[10] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  context[33] = refalrts::char_right( '.', context[9], context[10] );
  if( ! context[33] )
    return refalrts::cRecognitionImpossible;
  context[34] = refalrts::char_right( 'l', context[13], context[14] );
  if( ! context[34] )
    return refalrts::cRecognitionImpossible;
  context[35] = refalrts::char_right( 's', context[13], context[14] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  context[36] = refalrts::char_right( 'a', context[13], context[14] );
  if( ! context[36] )
    return refalrts::cRecognitionImpossible;
  context[37] = refalrts::char_right( 'r', context[13], context[14] );
  if( ! context[37] )
    return refalrts::cRecognitionImpossible;
  context[38] = refalrts::char_right( '.', context[13], context[14] );
  if( ! context[38] )
    return refalrts::cRecognitionImpossible;
  context[39] = refalrts::char_right( 'p', context[17], context[18] );
  if( ! context[39] )
    return refalrts::cRecognitionImpossible;
  context[40] = refalrts::char_right( 'p', context[17], context[18] );
  if( ! context[40] )
    return refalrts::cRecognitionImpossible;
  context[41] = refalrts::char_right( 'c', context[17], context[18] );
  if( ! context[41] )
    return refalrts::cRecognitionImpossible;
  context[42] = refalrts::char_right( '.', context[17], context[18] );
  if( ! context[42] )
    return refalrts::cRecognitionImpossible;
  // closed e.UnitName#2 as range 5
  if( ! refalrts::repeated_evar_left( context[43], context[44], context[5], context[6], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::repeated_evar_left( context[45], context[46], context[43], context[44], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::repeated_evar_left( context[47], context[48], context[45], context[46], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.UnitName#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & AnalyzeFile$4\1/4 (/7 # False/21 e.UnitName#2/5 '.'/28 'r'/27 'e'/26 'f'/25 )/8 (/11 # False/22 e.UnitName#2/43 '.'/33 's'/32 'r'/31 'e'/30 'f'/29 )/12 (/15 # False/23 e.UnitName#2/45 '.'/38 'r'/37 'a'/36 's'/35 'l'/34 )/16 {REMOVED TILE} 'c'/41 'p'/40 'p'/39 )/20 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/19 Reuse: # NotFound/24 AsIs: e.UnitName#2/47 HalfReuse: )/42 } Tile{ ]] }
  refalrts::update_ident( context[24], ident_NotFound );
  refalrts::reinit_close_bracket( context[42] );
  refalrts::link_brackets( context[19], context[42] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[42] );
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
    // </0 & AnalyzeFile/4 e.FileName#1/2 '.'/8 'r'/7 'e'/6 'f'/5 >/1
    context[41] = context[2];
    context[42] = context[3];
    context[5] = refalrts::char_right( 'f', context[41], context[42] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( 'e', context[41], context[42] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'r', context[41], context[42] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( '.', context[41], context[42] );
    if( ! context[8] )
      continue;
    // closed e.FileName#1 as range 41(2)
    //DEBUG: e.FileName#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/41(2) AsIs: '.'/8 AsIs: 'r'/7 AsIs: 'e'/6 AsIs: 'f'/5 AsIs: >/1 } & AnalyzeFile$1\1/11 >/12 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_gen_AnalyzeFile_S1L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExistFilem_T.ref.function );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx '.sref'
    // </0 & AnalyzeFile/4 e.FileName#1/2 '.'/9 's'/8 'r'/7 'e'/6 'f'/5 >/1
    context[41] = context[2];
    context[42] = context[3];
    context[5] = refalrts::char_right( 'f', context[41], context[42] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( 'e', context[41], context[42] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'r', context[41], context[42] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 's', context[41], context[42] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( '.', context[41], context[42] );
    if( ! context[9] )
      continue;
    // closed e.FileName#1 as range 41(2)
    //DEBUG: e.FileName#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </10 & Fetch/11 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/41(2) AsIs: '.'/9 AsIs: 's'/8 AsIs: 'r'/7 AsIs: 'e'/6 AsIs: 'f'/5 AsIs: >/1 } & AnalyzeFile$2\1/12 >/13 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ref_gen_AnalyzeFile_S2L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExistFilem_T.ref.function );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx '.rasl'
    // </0 & AnalyzeFile/4 e.FileName#1/2 '.'/9 'r'/8 'a'/7 's'/6 'l'/5 >/1
    context[41] = context[2];
    context[42] = context[3];
    context[5] = refalrts::char_right( 'l', context[41], context[42] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( 's', context[41], context[42] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'a', context[41], context[42] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 'r', context[41], context[42] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( '.', context[41], context[42] );
    if( ! context[9] )
      continue;
    // closed e.FileName#1 as range 41(2)
    //DEBUG: e.FileName#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </10 & Fetch/11 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/41(2) AsIs: '.'/9 AsIs: 'r'/8 AsIs: 'a'/7 AsIs: 's'/6 AsIs: 'l'/5 AsIs: >/1 } </12 & @create_closure@/13 & AnalyzeFile$3\1/14 (/15 e.FileName#1/41(2)/16 )/18 >/19 >/20 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], refalrts::create_closure ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ref_gen_AnalyzeFile_S3L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[16], context[17], context[41], context[42]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExistFilem_T.ref.function );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[15], context[18] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[20] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & AnalyzeFile/4 e.FileName#1/2 >/1
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Fetch/6 (/7 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/2 HalfReuse: '.'/1 }"ref"/8 >/10 )/11 (/12 </13 & ExistFile-T/14 e.FileName#1/2/15".sref"/17 >/19 )/20 (/21 </22 & ExistFile-T/23 e.FileName#1/2/24".rasl"/26 >/28 )/29 (/30 </31 & ExistFile-T/32 e.FileName#1/2/33".cpp"/35 >/37 )/38 & AnalyzeFile$4\1/39 >/40 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "ref", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_ExistFilem_T.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[15], context[16], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[17], context[18], ".sref", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], ref_ExistFilem_T.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[24], context[25], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[26], context[27], ".rasl", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], ref_ExistFilem_T.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[33], context[34], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[35], context[36], ".cpp", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[39], ref_gen_AnalyzeFile_S4L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ExistFilem_T.ref.function );
  refalrts::reinit_char( context[1], '.' );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[30], context[38] );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[31] );
  refalrts::link_brackets( context[21], context[29] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[22] );
  refalrts::link_brackets( context[12], context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[40] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
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
    // </0 & FindInclude\2/4 e.Variants-B#2/5 (/9 # Success/11 s.Dialect#2/12 e.FullPath#2/7 )/10 e.Variants-E#2/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[13];
      context[16] = context[14];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[15], context[16] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = refalrts::ident_left(  ident_Success, context[7], context[8] );
      if( ! context[11] )
        continue;
      // closed e.Variants-E#2 as range 15(2)
      if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
        continue;
      // closed e.FullPath#2 as range 7
      //DEBUG: e.Variants-B#2: 5
      //DEBUG: e.Variants-E#2: 2
      //DEBUG: s.Dialect#2: 12
      //DEBUG: e.FullPath#2: 7

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & FindInclude\2/4 e.Variants-B#2/5 (/9 {REMOVED TILE} {REMOVED TILE} )/10 e.Variants-E#2/15(2) >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: # Success/11 AsIs: s.Dialect#2/12 } Tile{ AsIs: e.FullPath#2/7 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[5], context[6], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & FindInclude\2/4 e.Variants#2/2 >/1
  // closed e.Variants#2 as range 2
  //DEBUG: e.Variants#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FindInclude\2/4 e.Variants#2/2 {REMOVED TILE}
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
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
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
    // </0 & AnalyzeInclude$1\1/4 # True/5 e.FullPath#2/2 >/1
    if( ! refalrts::ident_term(  ident_True, context[5] ) )
      continue;
    // closed e.FullPath#2 as range 2
    //DEBUG: e.FullPath#2: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Success/4 Reuse: # R5/5 AsIs: e.FullPath#2/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::update_ident( context[5], ident_R5 );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # False e.idx
  // </0 & AnalyzeInclude$1\1/4 # False/5 e.FullPath#2/2 >/1
  if( ! refalrts::ident_term(  ident_False, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FullPath#2 as range 2
  //DEBUG: e.FullPath#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.FullPath#2/2 >/1 {REMOVED TILE}
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
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
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
    // </0 & AnalyzeInclude$2\1/4 # True/5 e.FullPath#2/2 >/1
    if( ! refalrts::ident_term(  ident_True, context[5] ) )
      continue;
    // closed e.FullPath#2 as range 2
    //DEBUG: e.FullPath#2: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Success/4 Reuse: # SR/5 AsIs: e.FullPath#2/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Success );
    refalrts::update_ident( context[5], ident_SR );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # False e.idx
  // </0 & AnalyzeInclude$2\1/4 # False/5 e.FullPath#2/2 >/1
  if( ! refalrts::ident_term(  ident_False, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FullPath#2 as range 2
  //DEBUG: e.FullPath#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.FullPath#2/2 >/1 {REMOVED TILE}
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
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
    // </0 & AnalyzeInclude$3\1/4 (/7 # True/13 e.R5-FullPath#2/5 )/8 (/11 s.ResSR#2/14 e.SR-FullPath#2/9 )/12 >/1
    if( ! refalrts::ident_term(  ident_True, context[13] ) )
      continue;
    // closed e.R5-FullPath#2 as range 5
    // closed e.SR-FullPath#2 as range 9
    //DEBUG: s.ResSR#2: 14
    //DEBUG: e.R5-FullPath#2: 5
    //DEBUG: e.SR-FullPath#2: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 s.ResSR#2/14 e.SR-FullPath#2/9 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Success/7 Reuse: # R5/13 AsIs: e.R5-FullPath#2/5 AsIs: )/8 } Tile{ ]] }
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
    // </0 & AnalyzeInclude$3\1/4 (/7 # False/13 e.R5-FullPath#2/5 )/8 (/11 # True/14 e.SR-FullPath#2/9 )/12 >/1
    if( ! refalrts::ident_term(  ident_False, context[13] ) )
      continue;
    if( ! refalrts::ident_term(  ident_True, context[14] ) )
      continue;
    // closed e.R5-FullPath#2 as range 5
    // closed e.SR-FullPath#2 as range 9
    //DEBUG: e.R5-FullPath#2: 5
    //DEBUG: e.SR-FullPath#2: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeInclude$3\1/4 (/7 # False/13 e.R5-FullPath#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 HalfReuse: # Success/11 Reuse: # SR/14 AsIs: e.SR-FullPath#2/9 AsIs: )/12 } Tile{ ]] }
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
  // </0 & AnalyzeInclude$3\1/4 (/7 # False/13 e.R5-FullPath#2/5 )/8 (/11 # False/14 e.SR-FullPath#2/9 )/12 >/1
  if( ! refalrts::ident_term(  ident_False, context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term(  ident_False, context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.R5-FullPath#2 as range 5
  // closed e.SR-FullPath#2 as range 9
  //DEBUG: e.R5-FullPath#2: 5
  //DEBUG: e.SR-FullPath#2: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} # False/13 e.R5-FullPath#2/5 )/8 (/11 # False/14 e.SR-FullPath#2/9 )/12 >/1 {REMOVED TILE}
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
    // </0 & AnalyzeInclude/4 e.FileName#1/2 '.'/9 'r'/8 'e'/7 'f'/6 'i'/5 >/1
    context[23] = context[2];
    context[24] = context[3];
    context[5] = refalrts::char_right( 'i', context[23], context[24] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( 'f', context[23], context[24] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'e', context[23], context[24] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 'r', context[23], context[24] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( '.', context[23], context[24] );
    if( ! context[9] )
      continue;
    // closed e.FileName#1 as range 23(2)
    //DEBUG: e.FileName#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </10 & Fetch/11 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/23(2) AsIs: '.'/9 AsIs: 'r'/8 AsIs: 'e'/7 AsIs: 'f'/6 AsIs: 'i'/5 AsIs: >/1 } & AnalyzeInclude$1\1/12 >/13 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ref_gen_AnalyzeInclude_S1L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExistFilem_T.ref.function );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx '.srefi'
    // </0 & AnalyzeInclude/4 e.FileName#1/2 '.'/10 's'/9 'r'/8 'e'/7 'f'/6 'i'/5 >/1
    context[23] = context[2];
    context[24] = context[3];
    context[5] = refalrts::char_right( 'i', context[23], context[24] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( 'f', context[23], context[24] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'e', context[23], context[24] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 'r', context[23], context[24] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 's', context[23], context[24] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( '.', context[23], context[24] );
    if( ! context[10] )
      continue;
    // closed e.FileName#1 as range 23(2)
    //DEBUG: e.FileName#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </11 & Fetch/12 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/23(2) AsIs: '.'/10 AsIs: 's'/9 AsIs: 'r'/8 AsIs: 'e'/7 AsIs: 'f'/6 AsIs: 'i'/5 AsIs: >/1 } & AnalyzeInclude$2\1/13 >/14 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ref_gen_AnalyzeInclude_S2L1.ref.function ) )
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

  // e.idx
  // </0 & AnalyzeInclude/4 e.FileName#1/2 >/1
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Fetch/6 (/7 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/2 HalfReuse: '.'/1 }"refi"/8 >/10 )/11 (/12 </13 & ExistFile-T/14 e.FileName#1/2/15".srefi"/17 >/19 )/20 & AnalyzeInclude$3\1/21 >/22 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "refi", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_ExistFilem_T.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[15], context[16], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[17], context[18], ".srefi", 6 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ref_gen_AnalyzeInclude_S3L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ExistFilem_T.ref.function );
  refalrts::reinit_char( context[1], '.' );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[12], context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[22] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AnalyzeInclude("AnalyzeInclude", 3005203035U, 2944325060U, func_AnalyzeInclude);


//End of file
