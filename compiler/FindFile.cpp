// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult ExistFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AnalyzeBoth_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AnalyzeFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AnalyzeFile_ByFolders(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AnalyzeFile_CheckNotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AnalyzeInFolder(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AnalyzeOutput_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AnalyzeSource_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ExistFile_T(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #Current
template <typename SREFAL_PARAM_INT>
struct ident_Current {
  static const char *name() {
    return "Current";
  }
};

// identifier #False
template <typename SREFAL_PARAM_INT>
struct ident_False {
  static const char *name() {
    return "False";
  }
};

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

// identifier #True
template <typename SREFAL_PARAM_INT>
struct ident_True {
  static const char *name() {
    return "True";
  }
};

refalrts::FnResult FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FindFiles/4 (/7 e.Folders#1/5 )/8 e.Files#1/2 >/1
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 & Map/10 Tile{ HalfReuse: (/0 Reuse: & AnalyzeFile_ByFolders/4 HalfReuse: # Current/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: e.Files#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Map, "Map" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::update_name( context[4], AnalyzeFile_ByFolders, "AnalyzeFile_ByFolders" );
  refalrts::reinit_ident( context[7], & ident_Current<int>::name );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult AnalyzeFile_ByFolders(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AnalyzeFile_ByFolders/4 e.Folders#1/2 (/7 e.FileName#1/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Folders#1 as range 2
  // closed e.FileName#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile_CheckNotFound/4 } Tile{ AsIs: (/7 AsIs: e.FileName#1/5 AsIs: )/8 HalfReuse: </1 } & Map/9 (/10 & AnalyzeInFolder/11 e.FileName#1/5/12 )/14 Tile{ AsIs: e.Folders#1/2 } >/15 >/16 Tile{ ]] }
  if( ! refalrts::alloc_name( context[9], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], AnalyzeInFolder, "AnalyzeInFolder" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[12], context[13], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], AnalyzeFile_CheckNotFound, "AnalyzeFile_CheckNotFound" );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[10], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult AnalyzeInFolder(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AnalyzeInFolder/4 e.FileName#1/2 # Current/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_right(  & ident_Current<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.FileName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile/4 AsIs: e.FileName#1/2 HalfReuse: >/5 } Tile{ ]] }
    refalrts::update_name( context[4], AnalyzeFile, "AnalyzeFile" );
    refalrts::reinit_close_call( context[5] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AnalyzeInFolder/4 e.FileName#1/2 (/7 e.Folder#1/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.FileName#1 as range 2
  // closed e.Folder#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile/4 } Tile{ AsIs: e.Folder#1/5 } Tile{ HalfReuse: '/'/7 } Tile{ AsIs: e.FileName#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], AnalyzeFile, "AnalyzeFile" );
  refalrts::reinit_char( context[7], '/' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult AnalyzeFile_CheckNotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AnalyzeFile_CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # Source/13 (/16 e.Source#1/14 )/17 e.Output#1/9 )/12 e.Variants#1/2 >/1
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
    context[13] = refalrts::ident_left(  & ident_Source<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.FileName#1 as range 5
    // closed e.Source#1 as range 14
    // closed e.Output#1 as range 9
    // closed e.Variants#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & AnalyzeFile_CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE}  e.Variants#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Source/13 AsIs: (/16 AsIs: e.Source#1/14 AsIs: )/17 AsIs: e.Output#1/9 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AnalyzeFile_CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # Output/13 e.Output#1/9 )/12 e.Variants#1/2 >/1
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
    context[13] = refalrts::ident_left(  & ident_Output<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.Output#1 as range 9
    // closed e.Variants#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & AnalyzeFile_CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE}  e.Variants#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Output/13 AsIs: e.Output#1/9 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AnalyzeFile_CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # NotFound/13 e.NotFoundPath#1/9 )/12 e.Variants#1/2 >/1
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
    context[13] = refalrts::ident_left(  & ident_NotFound<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.NotFoundPath#1 as range 9
    // closed e.Variants#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/11 # NotFound/13 e.NotFoundPath#1/9 )/12 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AnalyzeFile_CheckNotFound/4 AsIs: (/7 AsIs: e.FileName#1/5 AsIs: )/8 } Tile{ AsIs: e.Variants#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AnalyzeFile_CheckNotFound/4 (/7 e.FileName#1/5 )/8 >/1
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
  // closed e.FileName#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # NotFound/7 AsIs: e.FileName#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_NotFound<int>::name );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ExistFile_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ExistFile_T/4 e.FileName#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName#1/2 AsIs: >/1 } e.FileName#1/2/5 Tile{ ]] }
  if (! refalrts::copy_evar(context[5], context[6], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ExistFile, "ExistFile" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult AnalyzeFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AnalyzeFile/4 e.FileName#1/2 '.'/9 's'/8 'r'/7 'e'/6 'f'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( 'f', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( 'e', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'r', context[2], context[3] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 's', context[2], context[3] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( '.', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.FileName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </10 & AnalyzeSource_CheckExist/11 Tile{ AsIs: </0 Reuse: & ExistFile_T/4 AsIs: e.FileName#1/2 AsIs: '.'/9 AsIs: 's'/8 AsIs: 'r'/7 AsIs: 'e'/6 AsIs: 'f'/5 AsIs: >/1 } >/12 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], AnalyzeSource_CheckExist, "AnalyzeSource_CheckExist" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExistFile_T, "ExistFile_T" );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AnalyzeFile/4 e.FileName#1/2 '.'/8 'c'/7 'p'/6 'p'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( 'p', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( 'p', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'c', context[2], context[3] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( '.', context[2], context[3] );
    if( ! context[8] )
      continue;
    // closed e.FileName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & AnalyzeOutput_CheckExist/10 Tile{ AsIs: </0 Reuse: & ExistFile_T/4 AsIs: e.FileName#1/2 AsIs: '.'/8 AsIs: 'c'/7 AsIs: 'p'/6 AsIs: 'p'/5 AsIs: >/1 } >/11 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], AnalyzeOutput_CheckExist, "AnalyzeOutput_CheckExist" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExistFile_T, "ExistFile_T" );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AnalyzeFile/4 e.FileName#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & AnalyzeBoth_CheckExist/6 (/7 Tile{ AsIs: </0 Reuse: & ExistFile_T/4 AsIs: e.FileName#1/2 HalfReuse: '.'/1 } 's'/8 'r'/9 'e'/10 'f'/11 >/12 )/13 </14 & ExistFile_T/15 e.FileName#1/2/16 '.'/18 'c'/19 'p'/20 'p'/21 >/22 >/23 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], AnalyzeBoth_CheckExist, "AnalyzeBoth_CheckExist" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ExistFile_T, "ExistFile_T" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[16], context[17], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ExistFile_T, "ExistFile_T" );
  refalrts::reinit_char( context[1], '.' );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[14] );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[23] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult AnalyzeSource_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AnalyzeSource_CheckExist/4 # True/5 e.UnitName#1/2 '.'/10 's'/9 'r'/8 'e'/7 'f'/6 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_True<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( 'f', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'e', context[2], context[3] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 'r', context[2], context[3] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 's', context[2], context[3] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( '.', context[2], context[3] );
    if( ! context[10] )
      continue;
    // closed e.UnitName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Source/4 HalfReuse: (/5 AsIs: e.UnitName#1/2 AsIs: '.'/10 AsIs: 's'/9 AsIs: 'r'/8 AsIs: 'e'/7 AsIs: 'f'/6 HalfReuse: )/1 } e.UnitName#1/2/11 '.'/13 'c'/14 'p'/15 'p'/16 )/17 Tile{ ]] }
    if (! refalrts::copy_evar(context[11], context[12], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Source<int>::name );
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[17] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[17] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AnalyzeSource_CheckExist/4 # False/5 e.SourceName#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_False<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  // closed e.SourceName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # NotFound/5 AsIs: e.SourceName#1/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::update_ident( context[5], & ident_NotFound<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult AnalyzeOutput_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AnalyzeOutput_CheckExist/4 # True/5 e.OutName#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_True<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.OutName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # Output/5 AsIs: e.OutName#1/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::update_ident( context[5], & ident_Output<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AnalyzeOutput_CheckExist/4 # False/5 e.OutName#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_False<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  // closed e.OutName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # NotFound/5 AsIs: e.OutName#1/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::update_ident( context[5], & ident_NotFound<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult AnalyzeBoth_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AnalyzeBoth_CheckExist/4 (/7 # True/9 e.SourceName#1/5 )/8 s.Res#1/10 e.OutName#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_True<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.SourceName#1 as range 5
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    // closed e.OutName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  s.Res#1/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Source/7 HalfReuse: (/9 AsIs: e.SourceName#1/5 AsIs: )/8 } Tile{ AsIs: e.OutName#1/2 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_Source<int>::name );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::link_brackets( context[9], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AnalyzeBoth_CheckExist/4 (/7 # False/9 e.SourceName#1/5 )/8 # True/10 e.OutName#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_False<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_True<int>::name, context[2], context[3] );
    if( ! context[10] )
      continue;
    // closed e.SourceName#1 as range 5
    // closed e.OutName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & AnalyzeBoth_CheckExist/4 (/7 # False/9 e.SourceName#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 Reuse: # Output/10 AsIs: e.OutName#1/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[8] );
    refalrts::update_ident( context[10], & ident_Output<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[8], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AnalyzeBoth_CheckExist/4 (/11 # False/13 e.UnitName#1/9 '.'/19 's'/18 'r'/17 'e'/16 'f'/15 )/12 # False/14 e.UnitName#1/20 '.'/8 'c'/7 'p'/6 'p'/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::char_right( 'p', context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[6] = refalrts::char_right( 'p', context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::char_right( 'c', context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::char_right( '.', context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = refalrts::ident_left(  & ident_False<int>::name, context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::ident_left(  & ident_False<int>::name, context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::char_right( 'f', context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::char_right( 'e', context[9], context[10] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::char_right( 'r', context[9], context[10] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::char_right( 's', context[9], context[10] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::char_right( '.', context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  // closed e.UnitName#1 as range 9
  if( ! refalrts::repeated_evar_left( context[20], context[21], context[9], context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & AnalyzeBoth_CheckExist/4 {REMOVED TILE}  's'/18 'r'/17 'e'/16 'f'/15 )/12 # False/14 e.UnitName#1/20 '.'/8 'c'/7 'p'/6 'p'/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 Reuse: # NotFound/13 AsIs: e.UnitName#1/9 HalfReuse: )/19 } Tile{ ]] }
  refalrts::update_ident( context[13], & ident_NotFound<int>::name );
  refalrts::reinit_close_bracket( context[19] );
  refalrts::link_brackets( context[11], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[19] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
