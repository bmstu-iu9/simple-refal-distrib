// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_NotFound = refalrts::ident_from_static("NotFound");
const refalrts::RefalIdentifier ident_Output = refalrts::ident_from_static("Output");
const refalrts::RefalIdentifier ident_OutputWithNative = refalrts::ident_from_static("OutputWithNative");
const refalrts::RefalIdentifier ident_Source = refalrts::ident_from_static("Source");
extern refalrts::RefalFunction& LoadFile_0_0;
#define LoadFile_alias LoadFile_0_0
#define LoadFile_str "LoadFile#0:0"

extern refalrts::RefalFunction& Map_0_0;
#define Map_alias Map_0_0
#define Map_str "Map#0:0"

extern refalrts::RefalFunction& Trim_0_0;
#define Trim_alias Trim_0_0
#define Trim_str "Trim#0:0"

extern refalrts::RefalFunction& FindFiles_0_0;
#define FindFiles_alias FindFiles_0_0
#define FindFiles_str "FindFiles#0:0"

extern refalrts::RefalFunction& CreateFileList_0_0;
#define CreateFileList_alias CreateFileList_0_0

extern refalrts::RefalFunction& DoCreateFileList_45697312_547554160;
#define DoCreateFileList_alias DoCreateFileList_45697312_547554160

extern refalrts::RefalFunction& FindImports_45697312_547554160;
#define FindImports_alias FindImports_45697312_547554160

extern refalrts::RefalFunction& LoadList_45697312_547554160;
#define LoadList_alias LoadList_45697312_547554160


static refalrts::FnResult func_CreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & CreateFileList/4 (/7 e.Folders#1/5 )/8 e.Unit#1/2 >/1
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
  // closed e.Unit#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCreateFileList/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 } (/9 )/10 </11 & FindFiles/12 (/13 e.Folders#1/5/14 )/16 (/17 Tile{ AsIs: e.Unit#1/2 } )/18 >/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], & FindFiles_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & DoCreateFileList_alias );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_CreateFileList(func_CreateFileList, "CreateFileList#0:0");
refalrts::RefalFunction& CreateFileList_0_0 = descr_CreateFileList;

static refalrts::FnResult func_DoCreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) e.$
  // </0 & DoCreateFileList/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
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
    // ( e.idx ) ( e.idx )
    // </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 e.Modules#1/9 )/12 >/1
    context[26] = context[2];
    context[27] = context[3];
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    // closed e.Folders#1 as range 5
    // closed e.Modules#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Modules#1/9 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( e.idx ) e.idx
    // </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 e.Modules-B#1/17 (/21 e.NextModule#1/23 )/22 e.Modules-E#1/9 )/12 (/15 e.NextModule#1/13 )/16 e.NotScanned#1/2 >/1
    context[26] = context[2];
    context[27] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[26], context[27] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Folders#1 as range 5
    // closed e.NextModule#1 as range 13
    // closed e.NotScanned#1 as range 26(2)
    context[28] = context[9];
    context[29] = context[10];
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop();
    do {
      context[30] = context[28];
      context[31] = context[29];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[30], context[31] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      if( ! refalrts::repeated_evar_left( context[23], context[24], context[13], context[14], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.Modules-E#1 as range 30(9)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} (/15 e.NextModule#1/13 )/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoCreateFileList/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Modules-B#1/17 AsIs: (/21 AsIs: e.NextModule#1/23 AsIs: )/22 AsIs: e.Modules-E#1/30(9) AsIs: )/12 } Tile{ AsIs: e.NotScanned#1/26(2) } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[26], context[27] );
      refalrts::splice_to_freelist_open( context[12], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[17], context[18], context[28], context[29] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) ( e.idx ) e.idx
  // </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 e.Modules#1/9 )/12 (/15 e.NextModule#1/13 )/16 e.NotScanned#1/2 >/1
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Folders#1 as range 5
  // closed e.Modules#1 as range 9
  // closed e.NextModule#1 as range 13
  // closed e.NotScanned#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoCreateFileList/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Modules#1/9 HalfReuse: (/12 } e.NextModule#1/13/17 )/19 )/20 </21 & LoadList/22 (/23 e.Folders#1/5/24 Tile{ HalfReuse: )/15 AsIs: e.NextModule#1/13 HalfReuse: >/16 AsIs: e.NotScanned#1/2 AsIs: >/1 ]] }
  if (! refalrts::copy_evar(context[17], context[18], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], & LoadList_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[24], context[25], context[5], context[6]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[15] );
  refalrts::reinit_close_call( context[16] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[21] );
  refalrts::link_brackets( context[23], context[15] );
  refalrts::link_brackets( context[11], context[20] );
  refalrts::link_brackets( context[12], context[19] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_DoCreateFileList(func_DoCreateFileList, "DoCreateFileList#45697312:547554160");
refalrts::RefalFunction& DoCreateFileList_45697312_547554160 = descr_DoCreateFileList;

static refalrts::FnResult func_FindImports(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: e.$ ( e.$ )
  //GLOBAL GEN: e.$ ( e.$ )
  // </0 & FindImports/4 e.idx#0/2 (/7 e.idxVB#0/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.idx#0 as range 2
  // closed e.idxVB#0 as range 5
  do {
    // e.idx ( '//FROM ' e.idx )
    // </0 & FindImports/4 e.Folders#1/2 (/7 '/'/9 '/'/10 'F'/11 'R'/12 'O'/13 'M'/14 ' '/15 e.Name#1/5 )/8 >/1
    context[16] = context[5];
    context[17] = context[6];
    context[9] = refalrts::char_left( '/', context[16], context[17] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( '/', context[16], context[17] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_left( 'F', context[16], context[17] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_left( 'R', context[16], context[17] );
    if( ! context[12] )
      continue;
    context[13] = refalrts::char_left( 'O', context[16], context[17] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'M', context[16], context[17] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_left( ' ', context[16], context[17] );
    if( ! context[15] )
      continue;
    // closed e.Folders#1 as range 2
    // closed e.Name#1 as range 16(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} '/'/9 '/'/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindFiles/4 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Folders#1/2 } Tile{ HalfReuse: )/12 HalfReuse: (/13 HalfReuse: </14 HalfReuse: & Trim/15 AsIs: e.Name#1/16(5) HalfReuse: >/8 HalfReuse: )/1 } Tile{ HalfReuse: >/11 } Tile{ ]] }
    refalrts::update_name( context[4], & FindFiles_alias );
    refalrts::reinit_close_bracket( context[12] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_open_call( context[14] );
    refalrts::reinit_name( context[15], & Trim_alias );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_call( context[11] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx ( e.idx )
  // </0 & FindImports/4 e.Folders#1/2 (/7 e.OtherLine#1/5 )/8 >/1
  // closed e.Folders#1 as range 2
  // closed e.OtherLine#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FindImports/4 e.Folders#1/2 (/7 e.OtherLine#1/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_FindImports(func_FindImports, "FindImports#45697312:547554160");
refalrts::RefalFunction& FindImports_45697312_547554160 = descr_FindImports;

static refalrts::FnResult func_LoadList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: ( e.$ ) s.$ e.$
  //GLOBAL GEN: ( e.$ ) s.$ e.$
  // </0 & LoadList/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
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
    // ( e.idx ) # Source ( e.idx ) e.idx
    // </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # Source/9 (/12 e.NextModule#1/10 )/13 e.Output#1/2 >/1
    if( ! refalrts::ident_term(  ident_Source, context[9] ) )
      continue;
    context[18] = context[2];
    context[19] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[18], context[19] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Folders#1 as range 5
    // closed e.NextModule#1 as range 10
    // closed e.Output#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.Output#1/18(2) {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Map/0 HalfReuse: (/4 HalfReuse: & FindImports/7 AsIs: e.Folders#1/5 AsIs: )/8 HalfReuse: </9 HalfReuse: & LoadFile/12 AsIs: e.NextModule#1/10 HalfReuse: >/13 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], & Map_alias );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_name( context[7], & FindImports_alias );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[12], & LoadFile_alias );
    refalrts::reinit_close_call( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[9] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) # Output e.idx
    // </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # Output/9 e.Output#1/2 >/1
    if( ! refalrts::ident_term(  ident_Output, context[9] ) )
      continue;
    // closed e.Folders#1 as range 5
    // closed e.Output#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 AsIs: (/7 } & FindImports/10 Tile{ AsIs: e.Folders#1/5 } )/11 Tile{ HalfReuse: </8 HalfReuse: & LoadFile/9 AsIs: e.Output#1/2 AsIs: >/1 } >/12 Tile{ ]] }
    if( ! refalrts::alloc_name( context[10], & FindImports_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Map_alias );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[9], & LoadFile_alias );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) # OutputWithNative ( e.idx ) e.idx
    // </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # OutputWithNative/9 (/12 e.Output#1/10 )/13 e.Native#1/2 >/1
    if( ! refalrts::ident_term(  ident_OutputWithNative, context[9] ) )
      continue;
    context[18] = context[2];
    context[19] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[18], context[19] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Folders#1 as range 5
    // closed e.Output#1 as range 10
    // closed e.Native#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Map/0 HalfReuse: (/4 HalfReuse: & FindImports/7 AsIs: e.Folders#1/5 AsIs: )/8 HalfReuse: </9 HalfReuse: & LoadFile/12 AsIs: e.Output#1/10 HalfReuse: >/13 } </15 & LoadFile/16 Tile{ AsIs: e.Native#1/18(2) } >/17 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], & LoadFile_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], & Map_alias );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_name( context[7], & FindImports_alias );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[12], & LoadFile_alias );
    refalrts::reinit_close_call( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[9] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) # NotFound e.idx
  // </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # NotFound/9 e.Unit#1/2 >/1
  if( ! refalrts::ident_term(  ident_NotFound, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folders#1 as range 5
  // closed e.Unit#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # NotFound/9 e.Unit#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_LoadList(func_LoadList, "LoadList#45697312:547554160");
refalrts::RefalFunction& LoadList_45697312_547554160 = descr_LoadList;


//End of file
