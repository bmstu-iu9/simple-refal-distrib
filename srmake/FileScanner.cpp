// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult CreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Trim(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoCreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FindImports(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult LoadList(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #NotFound
template <typename SREFAL_PARAM_INT>
struct ident_NotFound {
  static const char *name() {
    return "NotFound";
  }
};

// identifier #Output
template <typename SREFAL_PARAM_INT>
struct ident_Output {
  static const char *name() {
    return "Output";
  }
};

// identifier #Source
template <typename SREFAL_PARAM_INT>
struct ident_Source {
  static const char *name() {
    return "Source";
  }
};

refalrts::FnResult CreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CreateFileList/4 (/7 e.Folders#1/5 )/8 e.Unit#1/2 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCreateFileList/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 } (/9 )/10 </11 & FindFiles/12 (/13 e.Folders#1/5/14 )/16 (/17 Tile{ AsIs: e.Unit#1/2 } )/18 >/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], FindFiles, "FindFiles" ) )
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
  refalrts::update_name( context[4], DoCreateFileList, "DoCreateFileList" );
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult DoCreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 e.Modules#1/9 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Folders#1 as range 5
    // closed e.Modules#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 {REMOVED TILE}  )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Modules#1/9 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 e.Modules_B#1/17 (/21 e.NextModule#1/23 )/22 e.Modules_E#1/25 )/12 (/15 e.NextModule#1/13 )/16 e.NotScanned#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Folders#1 as range 5
    // closed e.NextModule#1 as range 13
    // closed e.NotScanned#1 as range 2
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop();
    do {
      context[25] = context[9];
      context[26] = context[10];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[25], context[26] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      if( ! refalrts::repeated_evar_left( context[23], context[24], context[13], context[14], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.Modules_E#1 as range 9

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  (/15 e.NextModule#1/13 )/16 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoCreateFileList/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Modules_B#1/17 AsIs: (/21 AsIs: e.NextModule#1/23 AsIs: )/22 AsIs: e.Modules_E#1/25 AsIs: )/12 } Tile{ AsIs: e.NotScanned#1/2 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[2], context[3] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[12], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[17], context[18], context[9], context[10] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoCreateFileList/4 (/7 e.Folders#1/5 )/8 (/11 e.Modules#1/9 )/12 (/15 e.NextModule#1/13 )/16 e.NotScanned#1/2 >/1
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
  // closed e.Folders#1 as range 5
  // closed e.Modules#1 as range 9
  // closed e.NextModule#1 as range 13
  // closed e.NotScanned#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoCreateFileList/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Modules#1/9 HalfReuse: (/12 } e.NextModule#1/13/17 )/19 )/20 </21 & LoadList/22 (/23 e.Folders#1/5/24 Tile{ HalfReuse: )/15 AsIs: e.NextModule#1/13 HalfReuse: >/16 AsIs: e.NotScanned#1/2 AsIs: >/1 ]] }
  if (! refalrts::copy_evar(context[17], context[18], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], LoadList, "LoadList" ) )
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FindImports(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FindImports/4 e.Folders#1/2 (/7 '/'/9 '/'/10 'F'/11 'R'/12 'O'/13 'M'/14 ' '/15 e.Name#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '/', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( '/', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_left( 'F', context[5], context[6] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_left( 'R', context[5], context[6] );
    if( ! context[12] )
      continue;
    context[13] = refalrts::char_left( 'O', context[5], context[6] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'M', context[5], context[6] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_left( ' ', context[5], context[6] );
    if( ! context[15] )
      continue;
    // closed e.Folders#1 as range 2
    // closed e.Name#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  'M'/14 ' '/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </12 } Tile{ HalfReuse: & FindFiles/0 HalfReuse: (/4 AsIs: e.Folders#1/2 HalfReuse: )/7 HalfReuse: (/9 HalfReuse: </10 HalfReuse: & Trim/11 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: >/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[0], FindFiles, "FindFiles" );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[11], Trim, "Trim" );
    refalrts::reinit_close_call( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[9], context[8] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    refalrts::link_brackets( context[4], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FindImports/4 e.OtherLine#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.OtherLine#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & FindImports/4 e.OtherLine#1/2 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult LoadList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # Source/9 (/12 e.NextModule#1/10 )/13 e.Output#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Source<int>::name, context[2], context[3] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Folders#1 as range 5
    // closed e.NextModule#1 as range 10
    // closed e.Output#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Output#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Map/0 HalfReuse: (/4 HalfReuse: & FindImports/7 AsIs: e.Folders#1/5 AsIs: )/8 HalfReuse: </9 HalfReuse: & LoadFile/12 AsIs: e.NextModule#1/10 HalfReuse: >/13 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], Map, "Map" );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_name( context[7], FindImports, "FindImports" );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[12], LoadFile, "LoadFile" );
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
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # Output/9 e.Output#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Output<int>::name, context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Folders#1 as range 5
    // closed e.Output#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 AsIs: (/7 } & FindImports/10 Tile{ AsIs: e.Folders#1/5 } )/11 Tile{ HalfReuse: </8 HalfReuse: & LoadFile/9 AsIs: e.Output#1/2 AsIs: >/1 } >/12 Tile{ ]] }
    if( ! refalrts::alloc_name( context[10], FindImports, "FindImports" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Map, "Map" );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[9], LoadFile, "LoadFile" );
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
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # NotFound/9 e.Unit#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_NotFound<int>::name, context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.Folders#1 as range 5
  // closed e.Unit#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & LoadList/4 (/7 e.Folders#1/5 )/8 # NotFound/9 e.Unit#1/2 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
