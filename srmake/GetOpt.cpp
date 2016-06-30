// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GetOpt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoFoldErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Error(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FoldErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MarkupAllFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MarkupArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ResolveOpts(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ResolveOpts_Long(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ResolveOpts_LongParam(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ResolveOpts_Short(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #FILE
template <typename SREFAL_PARAM_INT>
struct ident_FILE {
  static const char *name() {
    return "FILE";
  }
};

// identifier #Long
template <typename SREFAL_PARAM_INT>
struct ident_Long {
  static const char *name() {
    return "Long";
  }
};

// identifier #Long_Param
template <typename SREFAL_PARAM_INT>
struct ident_Long_Param {
  static const char *name() {
    return "Long_Param";
  }
};

// identifier #NoParam
template <typename SREFAL_PARAM_INT>
struct ident_NoParam {
  static const char *name() {
    return "NoParam";
  }
};

// identifier #NoRequiredParam
template <typename SREFAL_PARAM_INT>
struct ident_NoRequiredParam {
  static const char *name() {
    return "NoRequiredParam";
  }
};

// identifier #None
template <typename SREFAL_PARAM_INT>
struct ident_None {
  static const char *name() {
    return "None";
  }
};

// identifier #Optional
template <typename SREFAL_PARAM_INT>
struct ident_Optional {
  static const char *name() {
    return "Optional";
  }
};

// identifier #Required
template <typename SREFAL_PARAM_INT>
struct ident_Required {
  static const char *name() {
    return "Required";
  }
};

// identifier #Short
template <typename SREFAL_PARAM_INT>
struct ident_Short {
  static const char *name() {
    return "Short";
  }
};

// identifier #UnexpectedLongOptionParam
template <typename SREFAL_PARAM_INT>
struct ident_UnexpectedLongOptionParam {
  static const char *name() {
    return "UnexpectedLongOptionParam";
  }
};

// identifier #UnknownLongOption
template <typename SREFAL_PARAM_INT>
struct ident_UnknownLongOption {
  static const char *name() {
    return "UnknownLongOption";
  }
};

// identifier #UnknownShortOption
template <typename SREFAL_PARAM_INT>
struct ident_UnknownShortOption {
  static const char *name() {
    return "UnknownShortOption";
  }
};

// identifier #Word
template <typename SREFAL_PARAM_INT>
struct ident_Word {
  static const char *name() {
    return "Word";
  }
};

refalrts::FnResult GetOpt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GetOpt/4 (/7 e.Description#1/5 )/8 e.Arguments#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Description#1 as range 5
  // closed e.Arguments#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 & FoldErrors/10 Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } </11 & MarkupArguments/12 1/13 Tile{ AsIs: e.Arguments#1/2 } >/14 >/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], FoldErrors, "FoldErrors" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], MarkupArguments, "MarkupArguments" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[13], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Inc/4 s.Num#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 HalfReuse: 1/1 } >/6 Tile{ ]] }
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Add, "Add" );
  refalrts::reinit_number( context[1], 1UL );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult MarkupArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 '-'/11 )/9 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MarkupAllFiles/4 } Tile{ HalfReuse: </8 HalfReuse: & Inc/10 HalfReuse: s.Num1 #5/11 HalfReuse: >/9 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], MarkupAllFiles, "MarkupAllFiles" );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[10], Inc, "Inc" );
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 '-'/11 e.Arg#1/12 '='/14 e.Param#1/15 )/9 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[11] )
      continue;
    // closed e.Tail#1 as range 2
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[6];
      context[16] = context[7];
      context[14] = refalrts::char_left( '=', context[15], context[16] );
      if( ! context[14] )
        continue;
      // closed e.Param#1 as range 6

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } (/17 Tile{ HalfReuse: # Long_Param/8 HalfReuse: s.Num1 #5/10 HalfReuse: (/11 AsIs: e.Arg#1/12 HalfReuse: )/14 AsIs: e.Param#1/15 AsIs: )/9 } </18 & MarkupArguments/19 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/20 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], MarkupArguments, "MarkupArguments" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[20] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_ident( context[8], & ident_Long_Param<int>::name );
      refalrts::reinit_svar( context[10], context[5] );
      refalrts::reinit_open_bracket( context[11] );
      refalrts::reinit_close_bracket( context[14] );
      refalrts::update_name( context[4], Inc, "Inc" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[20] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[17], context[9] );
      refalrts::link_brackets( context[11], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[12], context[13], context[6], context[7] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 '-'/11 e.Arg#1/6 )/9 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[11] )
      continue;
    // closed e.Arg#1 as range 6
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 HalfReuse: # Long/10 HalfReuse: s.Num1 #5/11 AsIs: e.Arg#1/6 AsIs: )/9 } </12 & MarkupArguments/13 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/14 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], MarkupArguments, "MarkupArguments" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[10], & ident_Long<int>::name );
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 s.Init#1/11 e.Arg#1/6 )/9 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[11], context[6], context[7] ) )
      continue;
    // closed e.Arg#1 as range 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/12 Tile{ HalfReuse: # Short/8 HalfReuse: s.Num1 #5/10 AsIs: s.Init#1/11 AsIs: e.Arg#1/6 AsIs: )/9 } </13 & MarkupArguments/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/15 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], MarkupArguments, "MarkupArguments" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_Short<int>::name );
    refalrts::reinit_svar( context[10], context[5] );
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 e.Arg#1/6 )/9 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    // closed e.Arg#1 as range 6
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Word/4 AsIs: s.Num#1/5 } Tile{ AsIs: e.Arg#1/6 } Tile{ HalfReuse: )/8 } </10 & MarkupArguments/11 </12 & Inc/13 s.Num#1/5/14 Tile{ HalfReuse: >/9 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], MarkupArguments, "MarkupArguments" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[14], context[5]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Word<int>::name );
    refalrts::reinit_close_bracket( context[8] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & MarkupArguments/4 s.Num#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & MarkupArguments/4 s.Num#1/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult MarkupAllFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & MarkupAllFiles/4 s.Num#1/5 (/8 e.Arg#1/6 )/9 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    // closed e.Arg#1 as range 6
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Word/4 AsIs: s.Num#1/5 } Tile{ AsIs: e.Arg#1/6 } Tile{ HalfReuse: )/8 } </10 & MarkupAllFiles/11 </12 & Inc/13 s.Num#1/5/14 Tile{ HalfReuse: >/9 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], MarkupAllFiles, "MarkupAllFiles" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[14], context[5]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Word<int>::name );
    refalrts::reinit_close_bracket( context[8] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & MarkupAllFiles/4 s.Num#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & MarkupAllFiles/4 s.Num#1/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ResolveOpts(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts/4 (/7 e.Descrs_B#1/19 (/23 s.Tag#1/25 s.HasArg#1/26 e.Opts_B#1/27 (/31 e.Long#1/33 )/32 e.Opts_E#1/37 )/24 e.Descrs_E#1/35 )/8 (/11 # Long_Param/13 s.Num#1/14 (/17 e.Long#1/15 )/18 e.Param#1/9 )/12 e.ArgsTail#1/2 >/1
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
    context[13] = refalrts::ident_left(  & ident_Long_Param<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.ArgsTail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[9], context[10] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Long#1 as range 15
    // closed e.Param#1 as range 9
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[35] = context[5];
      context[36] = context[6];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[35], context[36] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.Descrs_E#1 as range 5
      if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      refalrts::start_e_loop();
      do {
        context[37] = context[21];
        context[38] = context[22];
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::brackets_left( context[29], context[30], context[37], context[38] );
        if( ! context[31] )
          continue;
        refalrts::bracket_pointers(context[31], context[32]);
        if( ! refalrts::repeated_evar_left( context[33], context[34], context[15], context[16], context[29], context[30] ) )
          continue;
        if( ! refalrts::empty_seq( context[29], context[30] ) )
          continue;
        // closed e.Opts_E#1 as range 21

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  s.Num#1/14 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts_LongParam/4 AsIs: (/7 AsIs: e.Descrs_B#1/19 AsIs: (/23 AsIs: s.Tag#1/25 AsIs: s.HasArg#1/26 AsIs: e.Opts_B#1/27 AsIs: (/31 AsIs: e.Long#1/33 AsIs: )/32 AsIs: e.Opts_E#1/37 AsIs: )/24 AsIs: e.Descrs_E#1/35 AsIs: )/8 HalfReuse: s.Num1 #14/11 HalfReuse: s.Tag1 #25/13 } s.HasArg#1/26/39 Tile{ AsIs: (/17 } Tile{ AsIs: e.Long#1/15 } )/40 Tile{ HalfReuse: (/18 AsIs: e.Param#1/9 AsIs: )/12 AsIs: e.ArgsTail#1/2 AsIs: >/1 ]] }
        if (! refalrts::copy_stvar(context[39], context[26]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[40] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ResolveOpts_LongParam, "ResolveOpts_LongParam" );
        refalrts::reinit_svar( context[11], context[14] );
        refalrts::reinit_svar( context[13], context[25] );
        refalrts::reinit_open_bracket( context[18] );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[18], context[12] );
        refalrts::link_brackets( context[17], context[40] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[31], context[32] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[18];
        res = refalrts::splice_evar( res, context[40], context[40] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[17], context[17] );
        res = refalrts::splice_evar( res, context[39], context[39] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[13], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[27], context[28], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[19], context[20], context[5], context[6] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Long_Param/13 s.Num#1/14 (/17 e.Long#1/15 )/18 e.Param#1/9 )/12 e.ArgsTail#1/2 >/1
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
    context[13] = refalrts::ident_left(  & ident_Long_Param<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[9], context[10] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Long#1 as range 15
    // closed e.Param#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Param#1/9 )/12 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: & Error/13 AsIs: s.Num#1/14 HalfReuse: # UnknownLongOption/17 AsIs: e.Long#1/15 AsIs: )/18 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_name( context[13], Error, "Error" );
    refalrts::reinit_ident( context[17], & ident_UnknownLongOption<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[18] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts/4 (/7 e.Descrs_B#1/15 (/19 s.Tag#1/21 s.HasArg#1/22 e.Opts_B#1/23 (/27 e.Long#1/29 )/28 e.Opts_E#1/33 )/20 e.Descrs_E#1/31 )/8 (/11 # Long/13 s.Num#1/14 e.Long#1/9 )/12 e.ArgsTail#1/2 >/1
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
    context[13] = refalrts::ident_left(  & ident_Long<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.ArgsTail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.Long#1 as range 9
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop();
    do {
      context[31] = context[5];
      context[32] = context[6];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[31], context[32] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Descrs_E#1 as range 5
      if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      refalrts::start_e_loop();
      do {
        context[33] = context[17];
        context[34] = context[18];
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::brackets_left( context[25], context[26], context[33], context[34] );
        if( ! context[27] )
          continue;
        refalrts::bracket_pointers(context[27], context[28]);
        if( ! refalrts::repeated_evar_left( context[29], context[30], context[9], context[10], context[25], context[26] ) )
          continue;
        if( ! refalrts::empty_seq( context[25], context[26] ) )
          continue;
        // closed e.Opts_E#1 as range 17

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  s.Num#1/14 {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts_Long/4 AsIs: (/7 AsIs: e.Descrs_B#1/15 AsIs: (/19 AsIs: s.Tag#1/21 AsIs: s.HasArg#1/22 AsIs: e.Opts_B#1/23 AsIs: (/27 AsIs: e.Long#1/29 AsIs: )/28 AsIs: e.Opts_E#1/33 AsIs: )/20 AsIs: e.Descrs_E#1/31 AsIs: )/8 HalfReuse: s.Num1 #14/11 HalfReuse: s.Tag1 #21/13 } s.HasArg#1/22/35 (/36 Tile{ AsIs: e.Long#1/9 } Tile{ AsIs: )/12 AsIs: e.ArgsTail#1/2 AsIs: >/1 ]] }
        if (! refalrts::copy_stvar(context[35], context[22]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[36] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ResolveOpts_Long, "ResolveOpts_Long" );
        refalrts::reinit_svar( context[11], context[14] );
        refalrts::reinit_svar( context[13], context[21] );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[36], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[13], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[23], context[24], context[17], context[18] ) );
    } while ( refalrts::open_evar_advance( context[15], context[16], context[5], context[6] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Long/13 s.Num#1/14 e.Long#1/9 )/12 e.ArgsTail#1/2 >/1
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
    context[13] = refalrts::ident_left(  & ident_Long<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.Long#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: & Error/13 AsIs: s.Num#1/14 } # UnknownLongOption/15 Tile{ AsIs: e.Long#1/9 } Tile{ AsIs: )/12 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[15], & ident_UnknownLongOption<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[13], Error, "Error" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts/4 (/7 e.Descrs_B#1/16 (/20 s.Tag#1/22 s.HasArg#1/23 e.Opts_B#1/24 s.Short#1/26 e.Opts_E#1/29 )/21 e.Descrs_E#1/27 )/8 (/11 # Short/13 s.Num#1/14 s.Short#1/15 e.OptTail#1/9 )/12 e.ArgsTail#1/2 >/1
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
    context[13] = refalrts::ident_left(  & ident_Short<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.ArgsTail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    // closed e.OptTail#1 as range 9
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[5];
      context[28] = context[6];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[27], context[28] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.Descrs_E#1 as range 5
      if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
        continue;
      if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
        continue;
      context[24] = 0;
      context[25] = 0;
      refalrts::start_e_loop();
      do {
        context[29] = context[18];
        context[30] = context[19];
        if( ! refalrts::repeated_stvar_left( context[26], context[15], context[29], context[30] ) )
          continue;
        // closed e.Opts_E#1 as range 18

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  s.Num#1/14 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts_Short/4 AsIs: (/7 AsIs: e.Descrs_B#1/16 AsIs: (/20 AsIs: s.Tag#1/22 AsIs: s.HasArg#1/23 AsIs: e.Opts_B#1/24 AsIs: s.Short#1/26 AsIs: e.Opts_E#1/29 AsIs: )/21 AsIs: e.Descrs_E#1/27 AsIs: )/8 HalfReuse: s.Num1 #14/11 HalfReuse: s.Tag1 #22/13 } s.HasArg#1/23/31 Tile{ AsIs: s.Short#1/15 } (/32 Tile{ AsIs: e.OptTail#1/9 } Tile{ AsIs: )/12 AsIs: e.ArgsTail#1/2 AsIs: >/1 ]] }
        if (! refalrts::copy_stvar(context[31], context[23]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[32] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ResolveOpts_Short, "ResolveOpts_Short" );
        refalrts::reinit_svar( context[11], context[14] );
        refalrts::reinit_svar( context[13], context[22] );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[32], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        res = refalrts::splice_evar( res, context[31], context[31] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[13], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[24], context[25], context[18], context[19] ) );
    } while ( refalrts::open_evar_advance( context[16], context[17], context[5], context[6] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Short/13 s.Num#1/14 s.Short#1/15 )/12 e.ArgsTail#1/2 >/1
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
    context[13] = refalrts::ident_left(  & ident_Short<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: & Error/13 AsIs: s.Num#1/14 } # UnknownShortOption/16 Tile{ AsIs: s.Short#1/15 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[16], & ident_UnknownShortOption<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[13], Error, "Error" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[12] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Short/13 s.Num#1/14 s.Short#1/15 e.OptTail#1/9 )/12 e.ArgsTail#1/2 >/1
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
    context[13] = refalrts::ident_left(  & ident_Short<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    // closed e.OptTail#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/16 & Error/17 s.Num#1/14/18 # UnknownShortOption/19 Tile{ AsIs: s.Short#1/15 } )/20 Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 AsIs: (/11 AsIs: # Short/13 AsIs: s.Num#1/14 } Tile{ AsIs: e.OptTail#1/9 } Tile{ AsIs: )/12 AsIs: e.ArgsTail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], Error, "Error" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[18], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_UnknownShortOption<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Word/13 s.Num#1/14 e.File#1/9 )/12 e.ArgsTail#1/2 >/1
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
    context[13] = refalrts::ident_left(  & ident_Word<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.File#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 Reuse: # FILE/13 AsIs: s.Num#1/14 AsIs: e.File#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_ident( context[13], & ident_FILE<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 >/1
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
  // closed e.Description#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Error(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

static refalrts::FnResult ResolveOpts_LongParam(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts_LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Description#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_Required<int>::name, context[2], context[3] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.Long#1 as range 12
    // closed e.Param#1 as range 16
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/9 s.Tag#1/10 # Required/11 {REMOVED TILE}  e.Long#1/12 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ HalfReuse: s.Tag1 #10/15 HalfReuse: s.Num1 #9/18 AsIs: e.Param#1/16 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[15], context[10] );
    refalrts::reinit_svar( context[18], context[9] );
    refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts_LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Description#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_Optional<int>::name, context[2], context[3] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.Long#1 as range 12
    // closed e.Param#1 as range 16
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/9 s.Tag#1/10 # Optional/11 {REMOVED TILE}  e.Long#1/12 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ HalfReuse: s.Tag1 #10/15 HalfReuse: s.Num1 #9/18 AsIs: e.Param#1/16 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[15], context[10] );
    refalrts::reinit_svar( context[18], context[9] );
    refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ResolveOpts_LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Description#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::ident_left(  & ident_None<int>::name, context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  // closed e.Long#1 as range 12
  // closed e.Param#1 as range 16
  // closed e.ArgsTail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Tag#1/10 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/18 } & Error/20 Tile{ AsIs: s.Num#1/9 } # UnexpectedLongOptionParam/21 (/22 Tile{ HalfReuse: '-'/11 HalfReuse: '-'/14 AsIs: e.Long#1/12 AsIs: )/15 } Tile{ AsIs: e.Param#1/16 } Tile{ AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[20], Error, "Error" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[21], & ident_UnexpectedLongOptionParam<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[11], '-' );
  refalrts::reinit_char( context[14], '-' );
  refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[22], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ResolveOpts_Long(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts_Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 (/18 # Word/20 s.WordNum#1/21 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Description#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_Required<int>::name, context[2], context[3] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left(  & ident_Word<int>::name, context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.Long#1 as range 12
    // closed e.ArgsTail#1 as range 2
    if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
      continue;
    // closed e.Param#1 as range 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/9 {REMOVED TILE}  {REMOVED TILE}  e.Long#1/12 {REMOVED TILE}  (/18 # Word/20 s.WordNum#1/21 {REMOVED TILE}  )/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: e.Param#1/16 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts_Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Description#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_Required<int>::name, context[2], context[3] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Long#1 as range 12
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Tag#1/10 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/16 & Error/17 Tile{ AsIs: s.Num#1/9 } # NoRequiredParam/18 Tile{ HalfReuse: '-'/11 HalfReuse: '-'/14 AsIs: e.Long#1/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], Error, "Error" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_NoRequiredParam<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[11], '-' );
    refalrts::reinit_char( context[14], '-' );
    refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts_Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 (/18 # Word/20 s.WordNum#1/21 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Description#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_Optional<int>::name, context[2], context[3] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left(  & ident_Word<int>::name, context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.Long#1 as range 12
    // closed e.ArgsTail#1 as range 2
    if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
      continue;
    // closed e.Param#1 as range 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/9 {REMOVED TILE}  {REMOVED TILE}  e.Long#1/12 {REMOVED TILE}  (/18 # Word/20 s.WordNum#1/21 {REMOVED TILE}  )/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: e.Param#1/16 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts_Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Description#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_Optional<int>::name, context[2], context[3] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Long#1 as range 12
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/9 {REMOVED TILE}  e.Long#1/12 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/16 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 HalfReuse: # NoParam/14 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::reinit_ident( context[14], & ident_NoParam<int>::name );
    refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ResolveOpts_Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Description#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::ident_left(  & ident_None<int>::name, context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Long#1 as range 12
  // closed e.ArgsTail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/9 {REMOVED TILE}  e.Long#1/12 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/15 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 HalfReuse: )/14 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_open_bracket( context[15] );
  refalrts::reinit_svar( context[11], context[9] );
  refalrts::reinit_close_bracket( context[14] );
  refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ResolveOpts_Short(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts_Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 )/16 (/19 # Word/21 s.WordNum#1/22 e.Param#1/17 )/20 e.ArgsTail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Description#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_Required<int>::name, context[2], context[3] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  & ident_Word<int>::name, context[17], context[18] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.ArgsTail#1 as range 2
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    // closed e.Param#1 as range 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 {REMOVED TILE}  # Word/21 s.WordNum#1/22 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 HalfReuse: s.Tag1 #10/16 HalfReuse: s.Num1 #9/19 } Tile{ AsIs: e.Param#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[16], context[10] );
    refalrts::reinit_svar( context[19], context[9] );
    refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts_Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Description#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_Required<int>::name, context[2], context[3] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Tag#1/10 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/16 } & Error/17 Tile{ AsIs: s.Num#1/9 } # NoRequiredParam/18 Tile{ HalfReuse: '-'/11 AsIs: s.Short#1/12 HalfReuse: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[17], Error, "Error" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_NoRequiredParam<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_char( context[11], '-' );
    refalrts::reinit_close_bracket( context[15] );
    refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts_Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 e.Param#1/13 )/16 e.ArgsTail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Description#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_Required<int>::name, context[2], context[3] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Param#1 as range 13
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/9 {REMOVED TILE}  {REMOVED TILE}  s.Short#1/12 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 } Tile{ AsIs: s.Tag#1/10 } Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.Param#1/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[11] );
    refalrts::reinit_svar( context[15], context[9] );
    refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts_Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 )/16 (/19 # Word/21 s.WordNum#1/22 e.Param#1/17 )/20 e.ArgsTail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Description#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_Optional<int>::name, context[2], context[3] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  & ident_Word<int>::name, context[17], context[18] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.ArgsTail#1 as range 2
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    // closed e.Param#1 as range 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 {REMOVED TILE}  # Word/21 s.WordNum#1/22 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 HalfReuse: s.Tag1 #10/16 HalfReuse: s.Num1 #9/19 } Tile{ AsIs: e.Param#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[16], context[10] );
    refalrts::reinit_svar( context[19], context[9] );
    refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts_Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Description#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_Optional<int>::name, context[2], context[3] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/9 {REMOVED TILE}  s.Short#1/12 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ HalfReuse: # NoParam/15 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::reinit_ident( context[15], & ident_NoParam<int>::name );
    refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts_Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 e.Param#1/13 )/16 e.ArgsTail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Description#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_Optional<int>::name, context[2], context[3] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Param#1 as range 13
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/9 {REMOVED TILE}  {REMOVED TILE}  s.Short#1/12 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 } Tile{ AsIs: s.Tag#1/10 } Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.Param#1/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[11] );
    refalrts::reinit_svar( context[15], context[9] );
    refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ResolveOpts_Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Description#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_None<int>::name, context[2], context[3] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/9 {REMOVED TILE}  s.Short#1/12 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ResolveOpts_Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 s.Short#1/12 (/15 e.OptTail#1/13 )/16 e.ArgsTail#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Description#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::ident_left(  & ident_None<int>::name, context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.OptTail#1 as range 13
  // closed e.ArgsTail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/9 {REMOVED TILE}  s.Short#1/12 {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/17 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } )/18 Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } (/19 # Short/20 Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.OptTail#1/13 AsIs: )/16 AsIs: e.ArgsTail#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[20], & ident_Short<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[11], context[9] );
  refalrts::update_name( context[4], ResolveOpts, "ResolveOpts" );
  refalrts::reinit_svar( context[15], context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[19], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FoldErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FoldErrors/4 e.OptionsAndErrors#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.OptionsAndErrors#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & DoFoldErrors/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.OptionsAndErrors#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], DoFoldErrors, "DoFoldErrors" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult DoFoldErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoFoldErrors/4 (/7 e.Errors#1/5 )/8 e.Options#1/9 (/13 & Error/15 s.Num#1/16 s.ErrorCode#1/17 e.Info#1/11 )/14 e.OptionsAndErrors#1/18 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Errors#1 as range 5
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[2];
      context[19] = context[3];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[18], context[19] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::function_left( Error, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.OptionsAndErrors#1 as range 2
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[17], context[11], context[12] ) )
        continue;
      // closed e.Info#1 as range 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  & Error/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFoldErrors/4 AsIs: (/7 AsIs: e.Errors#1/5 HalfReuse: (/8 } Tile{ AsIs: s.Num#1/16 AsIs: s.ErrorCode#1/17 AsIs: e.Info#1/11 AsIs: )/14 } Tile{ HalfReuse: )/13 } Tile{ AsIs: e.Options#1/9 } Tile{ AsIs: e.OptionsAndErrors#1/18 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[13] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[13] );
      refalrts::link_brackets( context[8], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[16], context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[8], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoFoldErrors/4 (/7 e.Errors#1/5 )/8 e.Options#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Errors#1 as range 5
  // closed e.Options#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & DoFoldErrors/4 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#1/5 AsIs: )/8 } Tile{ AsIs: e.Options#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
//FROM Library
