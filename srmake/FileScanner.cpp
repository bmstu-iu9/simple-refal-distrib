// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_BadEscapeCode = refalrts::ident_from_static("BadEscapeCode");
const refalrts::RefalIdentifier ident_BadEscapeSymbol = refalrts::ident_from_static("BadEscapeSymbol");
const refalrts::RefalIdentifier ident_CMDm_LINE = refalrts::ident_from_static("CMD-LINE");
const refalrts::RefalIdentifier ident_EOLAfterSlash = refalrts::ident_from_static("EOLAfterSlash");
const refalrts::RefalIdentifier ident_Error = refalrts::ident_from_static("Error");
const refalrts::RefalIdentifier ident_Fails = refalrts::ident_from_static("Fails");
const refalrts::RefalIdentifier ident_False = refalrts::ident_from_static("False");
const refalrts::RefalIdentifier ident_Include = refalrts::ident_from_static("Include");
const refalrts::RefalIdentifier ident_NotFound = refalrts::ident_from_static("NotFound");
const refalrts::RefalIdentifier ident_NotSet = refalrts::ident_from_static("NotSet");
const refalrts::RefalIdentifier ident_Output = refalrts::ident_from_static("Output");
const refalrts::RefalIdentifier ident_OutputWithNative = refalrts::ident_from_static("OutputWithNative");
const refalrts::RefalIdentifier ident_Source = refalrts::ident_from_static("Source");
const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
const refalrts::RefalIdentifier ident_True = refalrts::ident_from_static("True");
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_LoadFile("LoadFile", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_Trim("Trim", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_ExistFile("ExistFile", 0U, 0U);
static refalrts::ExternalReference ref_Configm_AddReference("Config-AddReference", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetFolders("Config-GetFolders", 0U, 0U);
static refalrts::ExternalReference ref_Configm_GetPrefix("Config-GetPrefix", 0U, 0U);
static refalrts::ExternalReference ref_Configm_SetPrefix("Config-SetPrefix", 0U, 0U);
static refalrts::ExternalReference ref_FindFiles("FindFiles", 0U, 0U);
static refalrts::ExternalReference ref_FindInclude("FindInclude", 0U, 0U);
static refalrts::ExternalReference ref_UnEscapeStringm_SR("UnEscapeString-SR", 0U, 0U);
static refalrts::ExternalReference ref_CreateFileList("CreateFileList", 0U, 0U);
static refalrts::ExternalReference ref_gen_DoCreateFileList_S3A1("DoCreateFileList$3=1", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_DoCreateFileList("DoCreateFileList", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_gen_FindImports_S3A2("FindImports$3=2", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_gen_FindImports_S3A1("FindImports$3=1", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_FindImports("FindImports", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_gen_FindImportsm_Aux_A2("FindImports-Aux=2", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_gen_FindImportsm_Aux_A2L1S2A1("FindImports-Aux=2\\1$2=1", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_gen_FindImportsm_Aux_A2L1S3A1("FindImports-Aux=2\\1$3=1", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_gen_FindImportsm_Aux_A2L1("FindImports-Aux=2\\1", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_gen_FindImportsm_Aux_A1("FindImports-Aux=1", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_gen_FindImportsm_Aux_A1L1("FindImports-Aux=1\\1", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_FindImportsm_Aux("FindImports-Aux", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_gen_FindFilesEx_L1("FindFilesEx\\1", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_FindFilesEx("FindFilesEx", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_gen_GetFolders_L1("GetFolders\\1", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_GetFolders("GetFolders", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_gen_UpdatePrefix_L1S1A1("UpdatePrefix\\1$1=1", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_gen_UpdatePrefix_L1("UpdatePrefix\\1", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_UpdatePrefix("UpdatePrefix", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_gen_FindIncludeEx_S2L1("FindIncludeEx$2\\1", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_FindIncludeEx("FindIncludeEx", 356665252U, 3898441716U);
static refalrts::ExternalReference ref_FormatEscapeError("FormatEscapeError", 356665252U, 3898441716U);

static refalrts::FnResult func_CreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & CreateFileList/4 t.Config#1/5 e.Unit#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Unit#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Unit#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCreateFileList/4 AsIs: t.Config#1/5 } (/7 )/8 </9 & FindFilesEx/10 t.Config#1/5/11 # CMD-LINE/13 Tile{ AsIs: e.Unit#1/2 } >/14 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_FindFilesEx.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[11], context[12], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[13], ident_CMDm_LINE ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoCreateFileList.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateFileList("CreateFileList", 0U, 0U, func_CreateFileList);

static refalrts::FnResult func_gen_DoCreateFileList_S3A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & DoCreateFileList$3=1/4 (/7 e.Modules#1/5 )/8 (/11 e.NextModule#1/9 )/12 (/15 e.NotScanned#1/13 )/16 t.Config#2/17 e.NewNotScanned#2/2 >/1
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
  // closed e.Modules#1 as range 5
  // closed e.NextModule#1 as range 9
  // closed e.NotScanned#1 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.NewNotScanned#2 as range 2
  //DEBUG: e.Modules#1: 5
  //DEBUG: e.NextModule#1: 9
  //DEBUG: e.NotScanned#1: 13
  //DEBUG: t.Config#2: 17
  //DEBUG: e.NewNotScanned#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCreateFileList/4 } Tile{ AsIs: t.Config#2/17 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Modules#1/5 } Tile{ AsIs: (/11 AsIs: e.NextModule#1/9 AsIs: )/12 HalfReuse: )/15 } Tile{ AsIs: e.NewNotScanned#2/2 } Tile{ AsIs: e.NotScanned#1/13 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_DoCreateFileList.ref.function );
  refalrts::reinit_close_bracket( context[15] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCreateFileList_S3A1("DoCreateFileList$3=1", 356665252U, 3898441716U, func_gen_DoCreateFileList_S3A1);

static refalrts::FnResult func_DoCreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ ( e.$ ) e.$
  // </0 & DoCreateFileList/4 t.idx#0/5 (/9 e.idxVB#0/7 )/10 e.idxVT#0/2 >/1
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
  // closed e.idxVB#0 as range 7
  // closed e.idxVT#0 as range 2
  do {
    // t.idx ( e.idx )
    // </0 & DoCreateFileList/4 t.Config#1/5 (/9 e.Modules#1/7 )/10 >/1
    context[25] = context[2];
    context[26] = context[3];
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    // closed e.Modules#1 as range 7
    //DEBUG: t.Config#1: 5
    //DEBUG: e.Modules#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoCreateFileList/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#1/5 } Tile{ AsIs: e.Modules#1/7 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx ( e.idx ) ( e.idx ) e.idx
    // </0 & DoCreateFileList/4 t.Config#1/5 (/9 e.Modules-B#1/15 (/19 e.NextModule#1/21 )/20 e.Modules-E#1/7 )/10 (/13 e.NextModule#1/11 )/14 e.NotScanned#1/2 >/1
    context[25] = context[2];
    context[26] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[25], context[26] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.NextModule#1 as range 11
    // closed e.NotScanned#1 as range 25(2)
    context[27] = context[7];
    context[28] = context[8];
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop();
    do {
      context[29] = context[27];
      context[30] = context[28];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[29], context[30] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      if( ! refalrts::repeated_evar_left( context[21], context[22], context[11], context[12], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.Modules-E#1 as range 29(7)
      //DEBUG: t.Config#1: 5
      //DEBUG: e.NextModule#1: 11
      //DEBUG: e.NotScanned#1: 2
      //DEBUG: e.Modules-B#1: 15
      //DEBUG: e.Modules-E#1: 7

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} (/13 e.NextModule#1/11 )/14 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoCreateFileList/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.Modules-B#1/15 AsIs: (/19 AsIs: e.NextModule#1/21 AsIs: )/20 AsIs: e.Modules-E#1/29(7) AsIs: )/10 } Tile{ AsIs: e.NotScanned#1/25(2) } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::splice_to_freelist_open( context[10], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[27], context[28] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx ( e.idx ) ( e.idx ) e.idx
  // </0 & DoCreateFileList/4 t.Config#1/5 (/9 e.Modules#1/7 )/10 (/13 e.NextModule#1/11 )/14 e.NotScanned#1/2 >/1
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Modules#1 as range 7
  // closed e.NextModule#1 as range 11
  // closed e.NotScanned#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Modules#1: 7
  //DEBUG: e.NextModule#1: 11
  //DEBUG: e.NotScanned#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 </16 & @create_closure@/17 & DoCreateFileList$3=1/18 Tile{ AsIs: (/9 AsIs: e.Modules#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.NextModule#1/11 AsIs: )/14 } (/19 Tile{ AsIs: e.NotScanned#1/2 } )/20 >/21 Tile{ AsIs: </0 Reuse: & FindImports/4 AsIs: t.Config#1/5 } e.NextModule#1/11/22 >/24 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ref_gen_DoCreateFileList_S3A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[22], context[23], context[11], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_FindImports.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[15], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoCreateFileList("DoCreateFileList", 356665252U, 3898441716U, func_DoCreateFileList);

static refalrts::FnResult func_gen_FindImports_S3A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & FindImports$3=2/4 (/7 e.FromsUnits#2/5 )/8 t.Config#3/9 e.NativeUnits#3/2 >/1
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
  // closed e.FromsUnits#2 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.NativeUnits#3 as range 2
  //DEBUG: e.FromsUnits#2: 5
  //DEBUG: t.Config#3: 9
  //DEBUG: e.NativeUnits#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FindImports$3=2/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#3/9 } Tile{ AsIs: e.FromsUnits#2/5 } Tile{ AsIs: e.NativeUnits#3/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImports_S3A2("FindImports$3=2", 356665252U, 3898441716U, func_gen_FindImports_S3A2);

static refalrts::FnResult func_gen_FindImports_S3A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & FindImports$3=1/4 (/7 e.Native#1/5 )/8 t.Config#2/9 e.FromsUnits#2/2 >/1
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
  // closed e.Native#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.FromsUnits#2 as range 2
  //DEBUG: e.Native#1: 5
  //DEBUG: t.Config#2: 9
  //DEBUG: e.FromsUnits#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: </4 HalfReuse: & @create_closure@/7 } & FindImports$3=2/11 (/12 Tile{ AsIs: e.FromsUnits#2/2 } )/13 >/14 </15 Tile{ HalfReuse: & FindImports-Aux/8 AsIs: t.Config#2/9 } Tile{ AsIs: e.Native#1/5 } >/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[11], ref_gen_FindImports_S3A2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], refalrts::create_closure );
  refalrts::reinit_name( context[8], ref_FindImportsm_Aux.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[4] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImports_S3A1("FindImports$3=1", 356665252U, 3898441716U, func_gen_FindImports_S3A1);

static refalrts::FnResult func_FindImports(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  //FAST GEN: t.$ s.$ e.$
  //GLOBAL GEN: t.$ s.$ e.$
  // </0 & FindImports/4 t.idx#0/5 s.idxV#0/7 e.idxVV#0/2 >/1
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
  // closed e.idxVV#0 as range 2
  do {
    // t.idx # Source ( e.idx ) e.idx
    // </0 & FindImports/4 t.Config#1/5 # Source/7 (/10 e.NextModule#1/8 )/11 e.Output#1/2 >/1
    if( ! refalrts::ident_term(  ident_Source, context[7] ) )
      continue;
    context[19] = context[2];
    context[20] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[19], context[20] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    // closed e.NextModule#1 as range 8
    // closed e.Output#1 as range 19(2)
    //DEBUG: t.Config#1: 5
    //DEBUG: e.NextModule#1: 8
    //DEBUG: e.Output#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # Source/7 (/10 {REMOVED TILE} )/11 e.Output#1/19(2) {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindImports-Aux/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.NextModule#1/8 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FindImportsm_Aux.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx # Output e.idx
    // </0 & FindImports/4 t.Config#1/5 # Output/7 e.Output#1/2 >/1
    if( ! refalrts::ident_term(  ident_Output, context[7] ) )
      continue;
    // closed e.Output#1 as range 2
    //DEBUG: t.Config#1: 5
    //DEBUG: e.Output#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindImports-Aux/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.Output#1/2 } '.'/8 Tile{ HalfReuse: 'f'/7 }"roms"/9 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[8], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "roms", 4 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_FindImportsm_Aux.ref.function );
    refalrts::reinit_char( context[7], 'f' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx # OutputWithNative ( e.idx ) e.idx
    // </0 & FindImports/4 t.Config#1/5 # OutputWithNative/7 (/10 e.Output#1/8 )/11 e.Native#1/2 >/1
    if( ! refalrts::ident_term(  ident_OutputWithNative, context[7] ) )
      continue;
    context[19] = context[2];
    context[20] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[19], context[20] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    // closed e.Output#1 as range 8
    // closed e.Native#1 as range 19(2)
    //DEBUG: t.Config#1: 5
    //DEBUG: e.Output#1: 8
    //DEBUG: e.Native#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </12 </13 & @create_closure@/14 Tile{ HalfReuse: & FindImports$3=1/7 AsIs: (/10 } Tile{ AsIs: e.Native#1/19(2) } Tile{ AsIs: )/11 } >/15 Tile{ AsIs: </0 Reuse: & FindImports-Aux/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.Output#1/8 }".froms"/16 >/18 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], refalrts::create_closure ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], ".froms", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[7], ref_gen_FindImports_S3A1.ref.function );
    refalrts::update_name( context[4], ref_FindImportsm_Aux.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx # Include e.idx
    // </0 & FindImports/4 t.Config#1/5 # Include/7 e.IncludeFile#1/2 >/1
    if( ! refalrts::ident_term(  ident_Include, context[7] ) )
      continue;
    // closed e.IncludeFile#1 as range 2
    //DEBUG: t.Config#1: 5
    //DEBUG: e.IncludeFile#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # Include/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindImports-Aux/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.IncludeFile#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_FindImportsm_Aux.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx # Error t.idx e.idx
  // </0 & FindImports/4 t.Config#1/5 # Error/7 t.SrcPos#1/8 e.Message#1/2 >/1
  if( ! refalrts::ident_term(  ident_Error, context[7] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.SrcPos#1: 8
  //DEBUG: e.Message#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FindImports/4 {REMOVED TILE} # Error/7 t.SrcPos#1/8 e.Message#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindImports("FindImports", 356665252U, 3898441716U, func_FindImports);

static refalrts::FnResult func_gen_FindImportsm_Aux_A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FindImports-Aux=2/4 (/7 t.Config#3/9 s.LineNum#3/11 )/8 e.Units#3/2 >/1
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
  // closed e.Units#3 as range 2
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Units#3: 2
  //DEBUG: t.Config#3: 9
  //DEBUG: s.LineNum#3: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FindImports-Aux=2/4 (/7 {REMOVED TILE} s.LineNum#3/11 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#3/9 } Tile{ AsIs: e.Units#3/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImportsm_Aux_A2("FindImports-Aux=2", 356665252U, 3898441716U, func_gen_FindImportsm_Aux_A2);

static refalrts::FnResult func_gen_FindImportsm_Aux_A2L1S2A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & FindImports-Aux=2\1$2=1/4 s.LineNum#3/5 t.Config#4/6 e.Error#4/2 >/1
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
  // closed e.Error#4 as range 2
  //DEBUG: s.LineNum#3: 5
  //DEBUG: t.Config#4: 6
  //DEBUG: e.Error#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/8 Tile{ AsIs: t.Config#4/6 } Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.LineNum#3/5 } Tile{ AsIs: >/1 } )/9 Tile{ AsIs: e.Error#4/2 } Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Inc.ref.function );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImportsm_Aux_A2L1S2A1("FindImports-Aux=2\\1$2=1", 356665252U, 3898441716U, func_gen_FindImportsm_Aux_A2L1S2A1);

static refalrts::FnResult func_gen_FindImportsm_Aux_A2L1S3A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & FindImports-Aux=2\1$3=1/4 s.LineNum#3/5 # Success/6 t.Config#4/7 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = refalrts::ident_left(  ident_Success, context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.LineNum#3: 5
  //DEBUG: t.Config#4: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 Tile{ AsIs: t.Config#4/7 } Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.LineNum#3/5 HalfReuse: >/6 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Inc.ref.function );
  refalrts::reinit_close_call( context[6] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImportsm_Aux_A2L1S3A1("FindImports-Aux=2\\1$3=1", 356665252U, 3898441716U, func_gen_FindImportsm_Aux_A2L1S3A1);

static refalrts::FnResult func_gen_FindImportsm_Aux_A2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  //FAST GEN: ( e.$ ) ( t.$ s.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( t.$ s.$ ) ( e.$ )
  // </0 & FindImports-Aux=2\1/4 (/7 e.idxB#0/5 )/8 (/11 t.idxTB#0/17 s.idxTBV#0/19 )/12 (/15 e.idxTTB#0/13 )/16 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTTB#0 as range 13
  context[18] = refalrts::tvar_left( context[17], context[9], context[10] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) ( t.idx s.idx ) ( '//FROM ' e.idx )
    // </0 & FindImports-Aux=2\1/4 (/7 e.FileName#1/5 )/8 (/11 t.Config#3/17 s.LineNum#3/19 )/12 (/15 '/'/20 '/'/21 'F'/22 'R'/23 'O'/24 'M'/25 ' '/26 e.Name#3/13 )/16 >/1
    context[34] = context[13];
    context[35] = context[14];
    context[20] = refalrts::char_left( '/', context[34], context[35] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( '/', context[34], context[35] );
    if( ! context[21] )
      continue;
    context[22] = refalrts::char_left( 'F', context[34], context[35] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( 'R', context[34], context[35] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( 'O', context[34], context[35] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( 'M', context[34], context[35] );
    if( ! context[25] )
      continue;
    context[26] = refalrts::char_left( ' ', context[34], context[35] );
    if( ! context[26] )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.Name#3 as range 34(13)
    //DEBUG: t.Config#3: 17
    //DEBUG: s.LineNum#3: 19
    //DEBUG: e.FileName#1: 5
    //DEBUG: e.Name#3: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} 'F'/22 'R'/23 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: t.Config#3/17 } Tile{ AsIs: </0 Reuse: & Inc/4 } Tile{ AsIs: s.LineNum#3/19 HalfReuse: >/12 HalfReuse: )/15 HalfReuse: </20 HalfReuse: & FindFilesEx/21 } t.Config#3/17/27 Tile{ AsIs: (/7 } Tile{ HalfReuse: s.LineNum3 #19/8 } Tile{ AsIs: e.FileName#1/5 } Tile{ HalfReuse: )/24 HalfReuse: </25 HalfReuse: & Trim/26 AsIs: e.Name#3/34(13) HalfReuse: >/16 AsIs: >/1 ]] }
    if (! refalrts::copy_evar(context[27], context[28], context[17], context[18]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Inc.ref.function );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_close_bracket( context[15] );
    refalrts::reinit_open_call( context[20] );
    refalrts::reinit_name( context[21], ref_FindFilesEx.ref.function );
    refalrts::reinit_svar( context[8], context[19] );
    refalrts::reinit_close_bracket( context[24] );
    refalrts::reinit_open_call( context[25] );
    refalrts::reinit_name( context[26], ref_Trim.ref.function );
    refalrts::reinit_close_call( context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[25] );
    refalrts::link_brackets( context[7], context[24] );
    refalrts::link_brackets( context[11], context[15] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[18] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( t.idx s.idx ) ( '//PREFIX ' e.idx )
    // </0 & FindImports-Aux=2\1/4 (/7 e.FileName#1/5 )/8 (/11 t.Config#3/17 s.LineNum#3/19 )/12 (/15 '/'/20 '/'/21 'P'/22 'R'/23 'E'/24 'F'/25 'I'/26 'X'/27 ' '/28 e.Name#3/13 )/16 >/1
    context[34] = context[13];
    context[35] = context[14];
    context[20] = refalrts::char_left( '/', context[34], context[35] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( '/', context[34], context[35] );
    if( ! context[21] )
      continue;
    context[22] = refalrts::char_left( 'P', context[34], context[35] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( 'R', context[34], context[35] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( 'E', context[34], context[35] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( 'F', context[34], context[35] );
    if( ! context[25] )
      continue;
    context[26] = refalrts::char_left( 'I', context[34], context[35] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( 'X', context[34], context[35] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::char_left( ' ', context[34], context[35] );
    if( ! context[28] )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.Name#3 as range 34(13)
    //DEBUG: t.Config#3: 17
    //DEBUG: s.LineNum#3: 19
    //DEBUG: e.FileName#1: 5
    //DEBUG: e.Name#3: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FindImports-Aux=2\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </12 HalfReuse: </15 HalfReuse: & @create_closure@/20 HalfReuse: & FindImports-Aux=2\1$2=1/21 HalfReuse: s.LineNum3 #19/22 HalfReuse: >/23 HalfReuse: </24 HalfReuse: & UpdatePrefix/25 } Tile{ AsIs: t.Config#3/17 } Tile{ AsIs: (/11 } Tile{ AsIs: s.LineNum#3/19 } Tile{ AsIs: e.FileName#1/5 } Tile{ HalfReuse: )/26 HalfReuse: </27 HalfReuse: & Trim/28 AsIs: e.Name#3/34(13) HalfReuse: >/16 AsIs: >/1 } Tile{ HalfReuse: >/8 } Tile{ ]] }
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_open_call( context[15] );
    refalrts::reinit_name( context[20], refalrts::create_closure );
    refalrts::reinit_name( context[21], ref_gen_FindImportsm_Aux_A2L1S2A1.ref.function );
    refalrts::reinit_svar( context[22], context[19] );
    refalrts::reinit_close_call( context[23] );
    refalrts::reinit_open_call( context[24] );
    refalrts::reinit_name( context[25], ref_UpdatePrefix.ref.function );
    refalrts::reinit_close_bracket( context[26] );
    refalrts::reinit_open_call( context[27] );
    refalrts::reinit_name( context[28], ref_Trim.ref.function );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[27] );
    refalrts::link_brackets( context[11], context[26] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[26], context[1] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[12], context[25] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( t.idx s.idx ) ( '//REFERENCE ' e.idx )
    // </0 & FindImports-Aux=2\1/4 (/7 e.FileName#1/5 )/8 (/11 t.Config#3/17 s.LineNum#3/19 )/12 (/15 '/'/20 '/'/21 'R'/22 'E'/23 'F'/24 'E'/25 'R'/26 'E'/27 'N'/28 'C'/29 'E'/30 ' '/31 e.Name#3/13 )/16 >/1
    context[34] = context[13];
    context[35] = context[14];
    context[20] = refalrts::char_left( '/', context[34], context[35] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( '/', context[34], context[35] );
    if( ! context[21] )
      continue;
    context[22] = refalrts::char_left( 'R', context[34], context[35] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( 'E', context[34], context[35] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( 'F', context[34], context[35] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( 'E', context[34], context[35] );
    if( ! context[25] )
      continue;
    context[26] = refalrts::char_left( 'R', context[34], context[35] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( 'E', context[34], context[35] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::char_left( 'N', context[34], context[35] );
    if( ! context[28] )
      continue;
    context[29] = refalrts::char_left( 'C', context[34], context[35] );
    if( ! context[29] )
      continue;
    context[30] = refalrts::char_left( 'E', context[34], context[35] );
    if( ! context[30] )
      continue;
    context[31] = refalrts::char_left( ' ', context[34], context[35] );
    if( ! context[31] )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.Name#3 as range 34(13)
    //DEBUG: t.Config#3: 17
    //DEBUG: s.LineNum#3: 19
    //DEBUG: e.FileName#1: 5
    //DEBUG: e.Name#3: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FindImports-Aux=2\1/4 (/7 e.FileName#1/5 )/8 (/11 {REMOVED TILE} s.LineNum#3/19 )/12 (/15 '/'/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </22 HalfReuse: </23 HalfReuse: & @create_closure@/24 HalfReuse: & FindImports-Aux=2\1$3=1/25 HalfReuse: s.LineNum3 #19/26 HalfReuse: >/27 HalfReuse: </28 HalfReuse: & Config-AddReference/29 } Tile{ AsIs: t.Config#3/17 } Tile{ HalfReuse: </30 HalfReuse: & Trim/31 AsIs: e.Name#3/34(13) HalfReuse: >/16 AsIs: >/1 } Tile{ HalfReuse: >/21 } Tile{ ]] }
    refalrts::reinit_open_call( context[22] );
    refalrts::reinit_open_call( context[23] );
    refalrts::reinit_name( context[24], refalrts::create_closure );
    refalrts::reinit_name( context[25], ref_gen_FindImportsm_Aux_A2L1S3A1.ref.function );
    refalrts::reinit_svar( context[26], context[19] );
    refalrts::reinit_close_call( context[27] );
    refalrts::reinit_open_call( context[28] );
    refalrts::reinit_name( context[29], ref_Configm_AddReference.ref.function );
    refalrts::reinit_open_call( context[30] );
    refalrts::reinit_name( context[31], ref_Trim.ref.function );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[30], context[1] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[22], context[29] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( t.idx s.idx ) ( '$INCLUDE \"' e.idx '\";' )
    // </0 & FindImports-Aux=2\1/4 (/7 e.FileName#1/5 )/8 (/11 t.Config#3/17 s.LineNum#3/19 )/12 (/15 '$'/20 'I'/21 'N'/22 'C'/23 'L'/24 'U'/25 'D'/26 'E'/27 ' '/28 '\"'/29 e.EscapedName#3/13 '\"'/31 ';'/30 )/16 >/1
    context[34] = context[13];
    context[35] = context[14];
    context[20] = refalrts::char_left( '$', context[34], context[35] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( 'I', context[34], context[35] );
    if( ! context[21] )
      continue;
    context[22] = refalrts::char_left( 'N', context[34], context[35] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( 'C', context[34], context[35] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( 'L', context[34], context[35] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( 'U', context[34], context[35] );
    if( ! context[25] )
      continue;
    context[26] = refalrts::char_left( 'D', context[34], context[35] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( 'E', context[34], context[35] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::char_left( ' ', context[34], context[35] );
    if( ! context[28] )
      continue;
    context[29] = refalrts::char_left( '\"', context[34], context[35] );
    if( ! context[29] )
      continue;
    context[30] = refalrts::char_right( ';', context[34], context[35] );
    if( ! context[30] )
      continue;
    context[31] = refalrts::char_right( '\"', context[34], context[35] );
    if( ! context[31] )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.EscapedName#3 as range 34(13)
    //DEBUG: t.Config#3: 17
    //DEBUG: s.LineNum#3: 19
    //DEBUG: e.FileName#1: 5
    //DEBUG: e.EscapedName#3: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LineNum#3/19 )/12 (/15 '$'/20 'I'/21 {REMOVED TILE} '\"'/29 {REMOVED TILE} '\"'/31 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: t.Config#3/17 } Tile{ HalfReuse: </22 HalfReuse: & Inc/23 HalfReuse: s.LineNum3 #19/24 HalfReuse: >/25 HalfReuse: )/26 HalfReuse: </27 HalfReuse: & FindIncludeEx/28 } t.Config#3/17/32 Tile{ HalfReuse: (/4 HalfReuse: s.LineNum3 #19/7 AsIs: e.FileName#1/5 AsIs: )/8 HalfReuse: </11 } Tile{ HalfReuse: & UnEscapeString-SR/30 } Tile{ AsIs: e.EscapedName#3/34(13) } Tile{ HalfReuse: >/16 AsIs: >/1 ]] }
    if (! refalrts::copy_evar(context[32], context[33], context[17], context[18]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[22] );
    refalrts::reinit_name( context[23], ref_Inc.ref.function );
    refalrts::reinit_svar( context[24], context[19] );
    refalrts::reinit_close_call( context[25] );
    refalrts::reinit_close_bracket( context[26] );
    refalrts::reinit_open_call( context[27] );
    refalrts::reinit_name( context[28], ref_FindIncludeEx.ref.function );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_svar( context[7], context[19] );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[30], ref_UnEscapeStringm_SR.ref.function );
    refalrts::reinit_close_call( context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::link_brackets( context[0], context[26] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[4], context[11] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[22], context[28] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( t.idx s.idx ) ( e.idx )
  // </0 & FindImports-Aux=2\1/4 (/7 e.FileName#1/5 )/8 (/11 t.Config#3/17 s.LineNum#3/19 )/12 (/15 e.OtherLine#3/13 )/16 >/1
  // closed e.FileName#1 as range 5
  // closed e.OtherLine#3 as range 13
  //DEBUG: t.Config#3: 17
  //DEBUG: s.LineNum#3: 19
  //DEBUG: e.FileName#1: 5
  //DEBUG: e.OtherLine#3: 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.FileName#1/5 )/8 {REMOVED TILE} s.LineNum#3/19 )/12 (/15 e.OtherLine#3/13 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: t.Config#3/17 } Tile{ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.LineNum3 #19/7 } Tile{ HalfReuse: >/16 HalfReuse: )/1 ]] }
  refalrts::update_name( context[4], ref_Inc.ref.function );
  refalrts::reinit_svar( context[7], context[19] );
  refalrts::reinit_close_call( context[16] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[18] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImportsm_Aux_A2L1("FindImports-Aux=2\\1", 356665252U, 3898441716U, func_gen_FindImportsm_Aux_A2L1);

static refalrts::FnResult func_gen_FindImportsm_Aux_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & FindImports-Aux=1/4 (/7 e.FileName#1/5 )/8 t.OriginConfig#1/9 e.FileContents#2/2 >/1
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
  // closed e.FileName#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.FileContents#2 as range 2
  //DEBUG: e.FileName#1: 5
  //DEBUG: t.OriginConfig#1: 9
  //DEBUG: e.FileContents#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 & FindImports-Aux=2/12 </13 & MapReduce/14 </15 Tile{ HalfReuse: & @create_closure@/0 Reuse: & FindImports-Aux=2\1/4 AsIs: (/7 AsIs: e.FileName#1/5 AsIs: )/8 } >/16 (/17 Tile{ AsIs: t.OriginConfig#1/9 } 1/18 )/19 Tile{ AsIs: e.FileContents#2/2 } >/20 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_gen_FindImportsm_Aux_A2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[18], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure );
  refalrts::update_name( context[4], ref_gen_FindImportsm_Aux_A2L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[17], context[19] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImportsm_Aux_A1("FindImports-Aux=1", 356665252U, 3898441716U, func_gen_FindImportsm_Aux_A1);

static refalrts::FnResult func_gen_FindImportsm_Aux_A1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: ( e.$ ) s.$
  //GLOBAL GEN: ( e.$ ) s.$
  // </0 & FindImports-Aux=1\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) # True
    // </0 & FindImports-Aux=1\1/4 (/7 e.FileName#1/5 )/8 # True/9 >/1
    if( ! refalrts::ident_term(  ident_True, context[9] ) )
      continue;
    // closed e.FileName#1 as range 5
    //DEBUG: e.FileName#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 # True/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & LoadFile/4 } Tile{ AsIs: e.FileName#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_LoadFile.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) # False
  // </0 & FindImports-Aux=1\1/4 (/7 e.FileName#1/5 )/8 # False/9 >/1
  if( ! refalrts::ident_term(  ident_False, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 5
  //DEBUG: e.FileName#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FindImports-Aux=1\1/4 (/7 e.FileName#1/5 )/8 # False/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImportsm_Aux_A1L1("FindImports-Aux=1\\1", 356665252U, 3898441716U, func_gen_FindImportsm_Aux_A1L1);

static refalrts::FnResult func_FindImportsm_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & FindImports-Aux/4 t.OriginConfig#1/5 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  //DEBUG: t.OriginConfig#1: 5
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: </4 } & @create_closure@/7 & FindImports-Aux=1/8 (/9 e.FileName#1/2/10 )/12 Tile{ AsIs: t.OriginConfig#1/5 } >/13 </14 & Fetch/15 </16 & ExistFile/17 Tile{ AsIs: e.FileName#1/2 } >/18 </19 & @create_closure@/20 & FindImports-Aux=1\1/21 (/22 e.FileName#1/2/23 )/25 >/26 >/27 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[7], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_gen_FindImportsm_Aux_A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[10], context[11], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_ExistFile.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ref_gen_FindImportsm_Aux_A1L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[23], context[24], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[19] );
  refalrts::link_brackets( context[22], context[25] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[4] );
  refalrts::link_brackets( context[9], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[27] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindImportsm_Aux("FindImports-Aux", 356665252U, 3898441716U, func_FindImportsm_Aux);

static refalrts::FnResult func_gen_FindFilesEx_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: t.$ t.$
  //GLOBAL GEN: t.$ t.$
  // </0 & FindFilesEx\1/4 t.idx#0/5 t.idxV#0/7 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // t.idx ( # NotFound e.idx )
    // </0 & FindFilesEx\1/4 t.SrcPos#1/5 (/7 # NotFound/11 e.Unit#2/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left(  ident_NotFound, context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.Unit#2 as range 9
    //DEBUG: t.SrcPos#1: 5
    //DEBUG: e.Unit#2: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Error/4 AsIs: t.SrcPos#1/5 HalfReuse: 'U'/7 HalfReuse: 'n'/11 }"it "/12 Tile{ AsIs: e.Unit#2/9 }" not foun"/14 Tile{ HalfReuse: 'd'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[12], context[13], "it ", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " not foun", 9 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Error );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_char( context[11], 'n' );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx t.idx
  // </0 & FindFilesEx\1/4 t.SrcPos#1/5 t.FoundUnit#2/7 >/1
  //DEBUG: t.SrcPos#1: 5
  //DEBUG: t.FoundUnit#2: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FindFilesEx\1/4 t.SrcPos#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.FoundUnit#2/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFilesEx_L1("FindFilesEx\\1", 356665252U, 3898441716U, func_gen_FindFilesEx_L1);

static refalrts::FnResult func_FindFilesEx(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & FindFilesEx/4 t.Config#1/5 t.SrcPos#1/7 e.UnitName#1/2 >/1
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
  // closed e.UnitName#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.SrcPos#1: 7
  //DEBUG: e.UnitName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </9 & FindFiles/10 (/11 </12 & GetFolders/13 Tile{ AsIs: t.Config#1/5 } >/14 )/15 (/16 Tile{ AsIs: e.UnitName#1/2 } )/17 >/18 </19 & @create_closure@/20 & FindFilesEx\1/21 Tile{ AsIs: t.SrcPos#1/7 } >/22 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_FindFiles.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ref_GetFolders.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ref_gen_FindFilesEx_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindFilesEx("FindFilesEx", 356665252U, 3898441716U, func_FindFilesEx);

static refalrts::FnResult func_gen_GetFolders_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & GetFolders\1/4 (/7 s.FolderTag#2/9 e.Folder#2/5 )/8 >/1
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
  //TRASH: {REMOVED TILE} & GetFolders\1/4 (/7 s.FolderTag#2/9 {REMOVED TILE} )/8 {REMOVED TILE}
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

static refalrts::NativeReference nat_ref_gen_GetFolders_L1("GetFolders\\1", 356665252U, 3898441716U, func_gen_GetFolders_L1);

static refalrts::FnResult func_GetFolders(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & GetFolders/4 t.Config#1/5 >/1
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
  //RESULT: Tile{ [[ } </7 & Map/8 & GetFolders\1/9 Tile{ AsIs: </0 Reuse: & Config-GetFolders/4 AsIs: t.Config#1/5 AsIs: >/1 } >/10 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_gen_GetFolders_L1.ref.function ) )
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

static refalrts::NativeReference nat_ref_GetFolders("GetFolders", 356665252U, 3898441716U, func_GetFolders);

static refalrts::FnResult func_gen_UpdatePrefix_L1S1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & UpdatePrefix\1$1=1/4 # Success/5 t.Config#3/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  ident_Success, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Config#3: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & UpdatePrefix\1$1=1/4 # Success/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#3/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdatePrefix_L1S1A1("UpdatePrefix\\1$1=1", 356665252U, 3898441716U, func_gen_UpdatePrefix_L1S1A1);

static refalrts::FnResult func_gen_UpdatePrefix_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: t.$ ( e.$ ) t.$ e.$
  //GLOBAL GEN: t.$ ( e.$ ) t.$ e.$
  // </0 & UpdatePrefix\1/4 t.idx#0/5 (/9 e.idxVB#0/7 )/10 t.idxVT#0/11 e.idxVTV#0/2 >/1
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
  // closed e.idxVB#0 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTV#0 as range 2
  do {
    // t.idx ( e.idx ) t.idx # NotSet
    // </0 & UpdatePrefix\1/4 t.Config#1/5 (/9 e.Prefix#1/7 )/10 t.SrcPos#1/11 # NotSet/13 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[13] = refalrts::ident_left(  ident_NotSet, context[16], context[17] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.Prefix#1 as range 7
    //DEBUG: t.Config#1: 5
    //DEBUG: t.SrcPos#1: 11
    //DEBUG: e.Prefix#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdatePrefix\1$1=1/4 } Tile{ HalfReuse: </9 } Tile{ HalfReuse: & Config-SetPrefix/10 } Tile{ AsIs: t.Config#1/5 } Tile{ AsIs: e.Prefix#1/7 } Tile{ HalfReuse: >/13 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_gen_UpdatePrefix_L1S1A1.ref.function );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[10], ref_Configm_SetPrefix.ref.function );
    refalrts::reinit_close_call( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx ( e.idx ) t.idx e.idx
    // </0 & UpdatePrefix\1/4 t.Config#1/5 (/9 e.Prefix#1/7 )/10 t.SrcPos#1/11 e.Prefix#1/13 >/1
    // closed e.Prefix#1 as range 7
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::repeated_evar_left( context[13], context[14], context[7], context[8], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    //DEBUG: t.Config#1: 5
    //DEBUG: t.SrcPos#1: 11
    //DEBUG: e.Prefix#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & UpdatePrefix\1/4 {REMOVED TILE} (/9 e.Prefix#1/7 )/10 t.SrcPos#1/11 e.Prefix#1/13 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx ( e.idx ) t.idx e.idx
  // </0 & UpdatePrefix\1/4 t.Config#1/5 (/9 e.Prefix#1/7 )/10 t.SrcPos#1/11 e.OtherPrefix#2/2 >/1
  // closed e.Prefix#1 as range 7
  // closed e.OtherPrefix#2 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.SrcPos#1: 11
  //DEBUG: e.Prefix#1: 7
  //DEBUG: e.OtherPrefix#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Prefix#1/7 {REMOVED TILE} e.OtherPrefix#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#1/5 AsIs: (/9 } Tile{ HalfReuse: # Error/10 AsIs: t.SrcPos#1/11 } 'p'/13 Tile{ HalfReuse: 'r'/0 HalfReuse: 'e'/4 }"fix already defined"/14 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_char( context[13], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[14], context[15], "fix already defined", 19 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_ident( context[10], ident_Error );
  refalrts::reinit_char( context[0], 'r' );
  refalrts::reinit_char( context[4], 'e' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdatePrefix_L1("UpdatePrefix\\1", 356665252U, 3898441716U, func_gen_UpdatePrefix_L1);

static refalrts::FnResult func_UpdatePrefix(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & UpdatePrefix/4 t.Config#1/5 t.SrcPos#1/7 e.Prefix#1/2 >/1
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
  // closed e.Prefix#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.SrcPos#1: 7
  //DEBUG: e.Prefix#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </9 & Config-GetPrefix/10 Tile{ AsIs: t.Config#1/5 } >/11 </12 & @create_closure@/13 & UpdatePrefix\1/14 t.Config#1/5/15 (/17 Tile{ AsIs: e.Prefix#1/2 } )/18 Tile{ AsIs: t.SrcPos#1/7 } >/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_Configm_GetPrefix.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_gen_UpdatePrefix_L1.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[12] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UpdatePrefix("UpdatePrefix", 356665252U, 3898441716U, func_UpdatePrefix);

static refalrts::FnResult func_gen_FindIncludeEx_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ ( e.$ ) s.$ e.$
  // </0 & FindIncludeEx$2\1/4 t.idx#0/5 (/9 e.idxVB#0/7 )/10 s.idxVT#0/11 e.idxVTV#0/2 >/1
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
  // closed e.idxVB#0 as range 7
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTV#0 as range 2
  do {
    // t.idx ( e.idx ) # Success e.idx
    // </0 & FindIncludeEx$2\1/4 t.SrcPos#1/5 (/9 e.FileName#1/7 )/10 # Success/11 e.FullPath#2/2 >/1
    if( ! refalrts::ident_term(  ident_Success, context[11] ) )
      continue;
    // closed e.FileName#1 as range 7
    // closed e.FullPath#2 as range 2
    //DEBUG: t.SrcPos#1: 5
    //DEBUG: e.FileName#1: 7
    //DEBUG: e.FullPath#2: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FindIncludeEx$2\1/4 t.SrcPos#1/5 (/9 e.FileName#1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/10 Reuse: # Include/11 AsIs: e.FullPath#2/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[10] );
    refalrts::update_ident( context[11], ident_Include );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx ( e.idx ) # Fails
  // </0 & FindIncludeEx$2\1/4 t.SrcPos#1/5 (/9 e.FileName#1/7 )/10 # Fails/11 >/1
  if( ! refalrts::ident_term(  ident_Fails, context[11] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 7
  //DEBUG: t.SrcPos#1: 5
  //DEBUG: e.FileName#1: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Error/4 AsIs: t.SrcPos#1/5 HalfReuse: 'I'/9 }"nclude "/12 Tile{ AsIs: e.FileName#1/7 }" not fou"/14 Tile{ HalfReuse: 'n'/10 HalfReuse: 'd'/11 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_chars( context[12], context[13], "nclude ", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[14], context[15], " not fou", 8 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Error );
  refalrts::reinit_char( context[9], 'I' );
  refalrts::reinit_char( context[10], 'n' );
  refalrts::reinit_char( context[11], 'd' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindIncludeEx_S2L1("FindIncludeEx$2\\1", 356665252U, 3898441716U, func_gen_FindIncludeEx_S2L1);

static refalrts::FnResult func_FindIncludeEx(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  //FAST GEN: t.$ t.$ s.$ e.$
  //GLOBAL GEN: t.$ t.$ s.$ e.$
  // </0 & FindIncludeEx/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 e.idxVVV#0/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVV#0 as range 2
  do {
    // t.idx t.idx # Fails e.idx
    // </0 & FindIncludeEx/4 t.Config#1/5 t.SrcPos#1/7 # Fails/9 e.ErrorMessage#1/2 >/1
    if( ! refalrts::ident_term(  ident_Fails, context[9] ) )
      continue;
    // closed e.ErrorMessage#1 as range 2
    //DEBUG: t.Config#1: 5
    //DEBUG: t.SrcPos#1: 7
    //DEBUG: e.ErrorMessage#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.Config#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Error/4 } Tile{ AsIs: t.SrcPos#1/7 } </10 Tile{ HalfReuse: & FormatEscapeError/9 AsIs: e.ErrorMessage#1/2 AsIs: >/1 } )/11 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Error );
    refalrts::reinit_name( context[9], ref_FormatEscapeError.ref.function );
    refalrts::link_brackets( context[0], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx t.idx # Success e.idx
  // </0 & FindIncludeEx/4 t.Config#1/5 t.SrcPos#1/7 # Success/9 e.FileName#1/2 >/1
  if( ! refalrts::ident_term(  ident_Success, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.SrcPos#1: 7
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </10 & FindInclude/11 (/12 </13 & GetFolders/14 Tile{ AsIs: t.Config#1/5 } >/15 )/16 e.FileName#1/2/17 >/19 </20 & @create_closure@/21 & FindIncludeEx$2\1/22 Tile{ AsIs: t.SrcPos#1/7 HalfReuse: (/9 AsIs: e.FileName#1/2 HalfReuse: )/1 } >/23 >/24 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_FindInclude.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_GetFolders.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[17], context[18], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], ref_gen_FindIncludeEx_S2L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[10] );
  refalrts::link_brackets( context[12], context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[15], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindIncludeEx("FindIncludeEx", 356665252U, 3898441716U, func_FindIncludeEx);

static refalrts::FnResult func_FormatEscapeError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & FormatEscapeError/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # BadEscapeCode e.idx
    // </0 & FormatEscapeError/4 # BadEscapeCode/5 e.Text#1/2 >/1
    if( ! refalrts::ident_term(  ident_BadEscapeCode, context[5] ) )
      continue;
    // closed e.Text#1 as range 2
    //DEBUG: e.Text#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'B'/0 HalfReuse: 'a'/4 HalfReuse: 'd'/5 }" e"/6 Tile{ HalfReuse: 's'/1 }"cape code "/8 Tile{ AsIs: e.Text#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], " e", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "cape code ", 10 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'B' );
    refalrts::reinit_char( context[4], 'a' );
    refalrts::reinit_char( context[5], 'd' );
    refalrts::reinit_char( context[1], 's' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # BadEscapeSymbol e.idx
    // </0 & FormatEscapeError/4 # BadEscapeSymbol/5 e.BadSymbol#1/2 >/1
    if( ! refalrts::ident_term(  ident_BadEscapeSymbol, context[5] ) )
      continue;
    // closed e.BadSymbol#1 as range 2
    //DEBUG: e.BadSymbol#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'B'/0 HalfReuse: 'a'/4 HalfReuse: 'd'/5 }" e"/6 Tile{ HalfReuse: 's'/1 }"caped symbol "/8 Tile{ AsIs: e.BadSymbol#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], " e", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "caped symbol ", 13 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'B' );
    refalrts::reinit_char( context[4], 'a' );
    refalrts::reinit_char( context[5], 'd' );
    refalrts::reinit_char( context[1], 's' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # EOLAfterSlash
  // </0 & FormatEscapeError/4 # EOLAfterSlash/5 >/1
  if( ! refalrts::ident_term(  ident_EOLAfterSlash, context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'n'/4 HalfReuse: 'd'/5 HalfReuse: '-'/1 }"of-line after \\"/6 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "of-line after \\", 15 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'E' );
  refalrts::reinit_char( context[4], 'n' );
  refalrts::reinit_char( context[5], 'd' );
  refalrts::reinit_char( context[1], '-' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FormatEscapeError("FormatEscapeError", 356665252U, 3898441716U, func_FormatEscapeError);


//End of file
