// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_FILE = refalrts::ident_from_static("FILE");
const refalrts::RefalIdentifier ident_Long = refalrts::ident_from_static("Long");
const refalrts::RefalIdentifier ident_Long_Param = refalrts::ident_from_static("Long-Param");
const refalrts::RefalIdentifier ident_NoParam = refalrts::ident_from_static("NoParam");
const refalrts::RefalIdentifier ident_NoRequiredParam = refalrts::ident_from_static("NoRequiredParam");
const refalrts::RefalIdentifier ident_None = refalrts::ident_from_static("None");
const refalrts::RefalIdentifier ident_Optional = refalrts::ident_from_static("Optional");
const refalrts::RefalIdentifier ident_Required = refalrts::ident_from_static("Required");
const refalrts::RefalIdentifier ident_Short = refalrts::ident_from_static("Short");
const refalrts::RefalIdentifier ident_UnexpectedLongOptionParam = refalrts::ident_from_static("UnexpectedLongOptionParam");
const refalrts::RefalIdentifier ident_UnknownLongOption = refalrts::ident_from_static("UnknownLongOption");
const refalrts::RefalIdentifier ident_UnknownShortOption = refalrts::ident_from_static("UnknownShortOption");
const refalrts::RefalIdentifier ident_Word = refalrts::ident_from_static("Word");
static refalrts::ExternalReference ref_GetOpt("GetOpt", 0U, 0U);
static refalrts::ExternalReference ref_Add("Add", 0U, 0U);
static refalrts::ExternalReference ref_Inc("Inc", 1591052355U, 3146445571U);
static refalrts::ExternalReference ref_MarkupArguments("MarkupArguments", 1591052355U, 3146445571U);
static refalrts::ExternalReference ref_MarkupAllFiles("MarkupAllFiles", 1591052355U, 3146445571U);
static refalrts::ExternalReference ref_ResolveOpts("ResolveOpts", 1591052355U, 3146445571U);
static refalrts::ExternalReference ref_Error("Error", 1591052355U, 3146445571U);
static refalrts::ExternalReference ref_ResolveOpts_LongParam("ResolveOpts-LongParam", 1591052355U, 3146445571U);
static refalrts::ExternalReference ref_ResolveOpts_Long("ResolveOpts-Long", 1591052355U, 3146445571U);
static refalrts::ExternalReference ref_ResolveOpts_Short("ResolveOpts-Short", 1591052355U, 3146445571U);
static refalrts::ExternalReference ref_FoldErrors("FoldErrors", 1591052355U, 3146445571U);
static refalrts::ExternalReference ref_DoFoldErrors("DoFoldErrors", 1591052355U, 3146445571U);

static refalrts::FnResult func_GetOpt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & GetOpt/4 (/7 e.Description#1/5 )/8 e.Arguments#1/2 >/1
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
  // closed e.Description#1 as range 5
  // closed e.Arguments#1 as range 2
  //DEBUG: e.Description#1: 5
  //DEBUG: e.Arguments#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & FoldErrors/10 Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } </11 & MarkupArguments/12 1/13 Tile{ AsIs: e.Arguments#1/2 } >/14 >/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_FoldErrors.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_MarkupArguments.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[13], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
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
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetOpt("GetOpt", 0U, 0U, func_GetOpt);

static refalrts::FnResult func_Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Inc/4 s.Num#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Num#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 HalfReuse: 1/1 } >/6 Tile{ ]] }
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Add.ref.function );
  refalrts::reinit_number( context[1], 1UL );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Inc("Inc", 1591052355U, 3146445571U, func_Inc);

static refalrts::FnResult func_MarkupArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & MarkupArguments/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // s.idx ( '--' ) e.idx
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 '-'/11 )/9 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[19], context[20] );
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
    // closed e.Tail#1 as range 19(2)
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Num#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MarkupAllFiles/4 } Tile{ HalfReuse: </8 HalfReuse: & Inc/10 HalfReuse: s.Num1 #5/11 HalfReuse: >/9 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_MarkupAllFiles.ref.function );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[10], ref_Inc.ref.function );
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( '--' e.idx ) e.idx
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 '-'/11 e.Arg#1/12 '='/14 e.Param#1/6 )/9 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[19], context[20] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[11] )
      continue;
    // closed e.Tail#1 as range 19(2)
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[6];
      context[22] = context[7];
      context[14] = refalrts::char_left( '=', context[21], context[22] );
      if( ! context[14] )
        continue;
      // closed e.Param#1 as range 21(6)
      //DEBUG: s.Num#1: 5
      //DEBUG: e.Tail#1: 2
      //DEBUG: e.Arg#1: 12
      //DEBUG: e.Param#1: 6

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/15 Tile{ HalfReuse: # Long-Param/8 HalfReuse: s.Num1 #5/10 HalfReuse: (/11 AsIs: e.Arg#1/12 HalfReuse: )/14 AsIs: e.Param#1/21(6) AsIs: )/9 } </16 & MarkupArguments/17 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/18 Tile{ AsIs: e.Tail#1/19(2) } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], ref_MarkupArguments.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[18] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_ident( context[8], ident_Long_Param );
      refalrts::reinit_svar( context[10], context[5] );
      refalrts::reinit_open_bracket( context[11] );
      refalrts::reinit_close_bracket( context[14] );
      refalrts::update_name( context[4], ref_Inc.ref.function );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[16] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[9] );
      refalrts::link_brackets( context[11], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[12], context[13], context[6], context[7] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( '--' e.idx ) e.idx
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 '-'/11 e.Arg#1/6 )/9 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[19], context[20] );
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
    // closed e.Tail#1 as range 19(2)
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Arg#1: 6
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 HalfReuse: # Long/10 HalfReuse: s.Num1 #5/11 AsIs: e.Arg#1/6 AsIs: )/9 } </12 & MarkupArguments/13 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/14 Tile{ AsIs: e.Tail#1/19(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ref_MarkupArguments.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[10], ident_Long );
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::update_name( context[4], ref_Inc.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( '-' s.idx e.idx ) e.idx
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 s.Init#1/11 e.Arg#1/6 )/9 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[19], context[20] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 19(2)
    if( ! refalrts::svar_left( context[11], context[6], context[7] ) )
      continue;
    // closed e.Arg#1 as range 6
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Tail#1: 2
    //DEBUG: s.Init#1: 11
    //DEBUG: e.Arg#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 Tile{ HalfReuse: # Short/8 HalfReuse: s.Num1 #5/10 AsIs: s.Init#1/11 AsIs: e.Arg#1/6 AsIs: )/9 } </13 & MarkupArguments/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/15 Tile{ AsIs: e.Tail#1/19(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ref_MarkupArguments.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], ident_Short );
    refalrts::reinit_svar( context[10], context[5] );
    refalrts::update_name( context[4], ref_Inc.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) e.idx
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 e.Arg#1/6 )/9 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[19], context[20] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    // closed e.Arg#1 as range 6
    // closed e.Tail#1 as range 19(2)
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Arg#1: 6
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Word/4 AsIs: s.Num#1/5 } Tile{ AsIs: e.Arg#1/6 } Tile{ HalfReuse: )/8 } </10 & MarkupArguments/11 </12 & Inc/13 s.Num#1/5/14 Tile{ HalfReuse: >/9 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_MarkupArguments.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[14], context[5]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Word );
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
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx
  // </0 & MarkupArguments/4 s.Num#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Num#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & MarkupArguments/4 s.Num#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MarkupArguments("MarkupArguments", 1591052355U, 3146445571U, func_MarkupArguments);

static refalrts::FnResult func_MarkupAllFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & MarkupAllFiles/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // s.idx ( e.idx ) e.idx
    // </0 & MarkupAllFiles/4 s.Num#1/5 (/8 e.Arg#1/6 )/9 e.Tail#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[15], context[16] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    // closed e.Arg#1 as range 6
    // closed e.Tail#1 as range 15(2)
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Arg#1: 6
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Word/4 AsIs: s.Num#1/5 } Tile{ AsIs: e.Arg#1/6 } Tile{ HalfReuse: )/8 } </10 & MarkupAllFiles/11 </12 & Inc/13 s.Num#1/5/14 Tile{ HalfReuse: >/9 AsIs: e.Tail#1/15(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_MarkupAllFiles.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[14], context[5]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Word );
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
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx
  // </0 & MarkupAllFiles/4 s.Num#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Num#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & MarkupAllFiles/4 s.Num#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MarkupAllFiles("MarkupAllFiles", 1591052355U, 3146445571U, func_MarkupAllFiles);

static refalrts::FnResult func_ResolveOpts(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & ResolveOpts/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) ( # Long-Param s.idx ( e.idx ) e.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/19 (/23 s.Tag#1/25 s.HasArg#1/26 e.Opts-B#1/27 (/31 e.Long#1/33 )/32 e.Opts-E#1/21 )/24 e.Descrs-E#1/5 )/8 (/11 # Long-Param/13 s.Num#1/14 (/17 e.Long#1/15 )/18 e.Param#1/9 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_Long_Param, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.ArgsTail#1 as range 37(2)
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
    context[39] = context[5];
    context[40] = context[6];
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[41] = context[39];
      context[42] = context[40];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[41], context[42] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.Descrs-E#1 as range 41(5)
      if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      refalrts::start_e_loop();
      do {
        context[43] = context[21];
        context[44] = context[22];
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::brackets_left( context[29], context[30], context[43], context[44] );
        if( ! context[31] )
          continue;
        refalrts::bracket_pointers(context[31], context[32]);
        if( ! refalrts::repeated_evar_left( context[33], context[34], context[15], context[16], context[29], context[30] ) )
          continue;
        if( ! refalrts::empty_seq( context[29], context[30] ) )
          continue;
        // closed e.Opts-E#1 as range 43(21)
        //DEBUG: e.ArgsTail#1: 2
        //DEBUG: s.Num#1: 14
        //DEBUG: e.Long#1: 15
        //DEBUG: e.Param#1: 9
        //DEBUG: e.Descrs-B#1: 19
        //DEBUG: e.Descrs-E#1: 5
        //DEBUG: s.Tag#1: 25
        //DEBUG: s.HasArg#1: 26
        //DEBUG: e.Opts-B#1: 27
        //DEBUG: e.Opts-E#1: 21

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} s.Num#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-LongParam/4 AsIs: (/7 AsIs: e.Descrs-B#1/19 AsIs: (/23 AsIs: s.Tag#1/25 AsIs: s.HasArg#1/26 AsIs: e.Opts-B#1/27 AsIs: (/31 AsIs: e.Long#1/33 AsIs: )/32 AsIs: e.Opts-E#1/43(21) AsIs: )/24 AsIs: e.Descrs-E#1/41(5) AsIs: )/8 HalfReuse: s.Num1 #14/11 HalfReuse: s.Tag1 #25/13 } s.HasArg#1/26/35 Tile{ AsIs: (/17 } Tile{ AsIs: e.Long#1/15 } )/36 Tile{ HalfReuse: (/18 AsIs: e.Param#1/9 AsIs: )/12 AsIs: e.ArgsTail#1/37(2) AsIs: >/1 ]] }
        if (! refalrts::copy_stvar(context[35], context[26]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[36] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_ResolveOpts_LongParam.ref.function );
        refalrts::reinit_svar( context[11], context[14] );
        refalrts::reinit_svar( context[13], context[25] );
        refalrts::reinit_open_bracket( context[18] );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[18], context[12] );
        refalrts::link_brackets( context[17], context[36] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[31], context[32] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[18];
        res = refalrts::splice_evar( res, context[36], context[36] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[17], context[17] );
        res = refalrts::splice_evar( res, context[35], context[35] );
        refalrts::splice_to_freelist_open( context[13], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[27], context[28], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[19], context[20], context[39], context[40] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Long-Param s.idx ( e.idx ) e.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Long-Param/13 s.Num#1/14 (/17 e.Long#1/15 )/18 e.Param#1/9 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_Long_Param, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 37(2)
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
    //DEBUG: e.Description#1: 5
    //DEBUG: e.ArgsTail#1: 2
    //DEBUG: s.Num#1: 14
    //DEBUG: e.Long#1: 15
    //DEBUG: e.Param#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Param#1/9 )/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: & Error/13 AsIs: s.Num#1/14 HalfReuse: # UnknownLongOption/17 AsIs: e.Long#1/15 AsIs: )/18 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/37(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_name( context[13], ref_Error.ref.function );
    refalrts::reinit_ident( context[17], ident_UnknownLongOption );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[18] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Long s.idx e.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/15 (/19 s.Tag#1/21 s.HasArg#1/22 e.Opts-B#1/23 (/27 e.Long#1/29 )/28 e.Opts-E#1/17 )/20 e.Descrs-E#1/5 )/8 (/11 # Long/13 s.Num#1/14 e.Long#1/9 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_Long, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.ArgsTail#1 as range 37(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.Long#1 as range 9
    context[39] = context[5];
    context[40] = context[6];
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop();
    do {
      context[41] = context[39];
      context[42] = context[40];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[41], context[42] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Descrs-E#1 as range 41(5)
      if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      refalrts::start_e_loop();
      do {
        context[43] = context[17];
        context[44] = context[18];
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::brackets_left( context[25], context[26], context[43], context[44] );
        if( ! context[27] )
          continue;
        refalrts::bracket_pointers(context[27], context[28]);
        if( ! refalrts::repeated_evar_left( context[29], context[30], context[9], context[10], context[25], context[26] ) )
          continue;
        if( ! refalrts::empty_seq( context[25], context[26] ) )
          continue;
        // closed e.Opts-E#1 as range 43(17)
        //DEBUG: e.ArgsTail#1: 2
        //DEBUG: s.Num#1: 14
        //DEBUG: e.Long#1: 9
        //DEBUG: e.Descrs-B#1: 15
        //DEBUG: e.Descrs-E#1: 5
        //DEBUG: s.Tag#1: 21
        //DEBUG: s.HasArg#1: 22
        //DEBUG: e.Opts-B#1: 23
        //DEBUG: e.Opts-E#1: 17

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} s.Num#1/14 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-Long/4 AsIs: (/7 AsIs: e.Descrs-B#1/15 AsIs: (/19 AsIs: s.Tag#1/21 AsIs: s.HasArg#1/22 AsIs: e.Opts-B#1/23 AsIs: (/27 AsIs: e.Long#1/29 AsIs: )/28 AsIs: e.Opts-E#1/43(17) AsIs: )/20 AsIs: e.Descrs-E#1/41(5) AsIs: )/8 HalfReuse: s.Num1 #14/11 HalfReuse: s.Tag1 #21/13 } s.HasArg#1/22/31 (/32 Tile{ AsIs: e.Long#1/9 } Tile{ AsIs: )/12 AsIs: e.ArgsTail#1/37(2) AsIs: >/1 ]] }
        if (! refalrts::copy_stvar(context[31], context[22]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[32] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_ResolveOpts_Long.ref.function );
        refalrts::reinit_svar( context[11], context[14] );
        refalrts::reinit_svar( context[13], context[21] );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[32], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        refalrts::splice_to_freelist_open( context[13], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[23], context[24], context[17], context[18] ) );
    } while ( refalrts::open_evar_advance( context[15], context[16], context[39], context[40] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Long s.idx e.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Long/13 s.Num#1/14 e.Long#1/9 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_Long, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 37(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.Long#1 as range 9
    //DEBUG: e.Description#1: 5
    //DEBUG: e.ArgsTail#1: 2
    //DEBUG: s.Num#1: 14
    //DEBUG: e.Long#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: & Error/13 AsIs: s.Num#1/14 } # UnknownLongOption/15 Tile{ AsIs: e.Long#1/9 } Tile{ AsIs: )/12 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/37(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[15], ident_UnknownLongOption ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[13], ref_Error.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Short s.idx s.idx e.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/16 (/20 s.Tag#1/22 s.HasArg#1/23 e.Opts-B#1/24 s.Short#1/26 e.Opts-E#1/18 )/21 e.Descrs-E#1/5 )/8 (/11 # Short/13 s.Num#1/14 s.Short#1/15 e.OptTail#1/9 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_Short, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.ArgsTail#1 as range 37(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    // closed e.OptTail#1 as range 9
    context[39] = context[5];
    context[40] = context[6];
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[41] = context[39];
      context[42] = context[40];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[41], context[42] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.Descrs-E#1 as range 41(5)
      if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
        continue;
      if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
        continue;
      context[24] = 0;
      context[25] = 0;
      refalrts::start_e_loop();
      do {
        context[43] = context[18];
        context[44] = context[19];
        if( ! refalrts::repeated_stvar_left( context[26], context[15], context[43], context[44] ) )
          continue;
        // closed e.Opts-E#1 as range 43(18)
        //DEBUG: e.ArgsTail#1: 2
        //DEBUG: s.Num#1: 14
        //DEBUG: s.Short#1: 15
        //DEBUG: e.OptTail#1: 9
        //DEBUG: e.Descrs-B#1: 16
        //DEBUG: e.Descrs-E#1: 5
        //DEBUG: s.Tag#1: 22
        //DEBUG: s.HasArg#1: 23
        //DEBUG: e.Opts-B#1: 24
        //DEBUG: e.Opts-E#1: 18

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} s.Num#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-Short/4 AsIs: (/7 AsIs: e.Descrs-B#1/16 AsIs: (/20 AsIs: s.Tag#1/22 AsIs: s.HasArg#1/23 AsIs: e.Opts-B#1/24 AsIs: s.Short#1/26 AsIs: e.Opts-E#1/43(18) AsIs: )/21 AsIs: e.Descrs-E#1/41(5) AsIs: )/8 HalfReuse: s.Num1 #14/11 HalfReuse: s.Tag1 #22/13 } s.HasArg#1/23/27 Tile{ AsIs: s.Short#1/15 } (/28 Tile{ AsIs: e.OptTail#1/9 } Tile{ AsIs: )/12 AsIs: e.ArgsTail#1/37(2) AsIs: >/1 ]] }
        if (! refalrts::copy_stvar(context[27], context[23]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[28] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_ResolveOpts_Short.ref.function );
        refalrts::reinit_svar( context[11], context[14] );
        refalrts::reinit_svar( context[13], context[22] );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[28], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[28], context[28] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        res = refalrts::splice_evar( res, context[27], context[27] );
        refalrts::splice_to_freelist_open( context[13], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[24], context[25], context[18], context[19] ) );
    } while ( refalrts::open_evar_advance( context[16], context[17], context[39], context[40] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Short s.idx s.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Short/13 s.Num#1/14 s.Short#1/15 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_Short, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 37(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: e.Description#1: 5
    //DEBUG: e.ArgsTail#1: 2
    //DEBUG: s.Num#1: 14
    //DEBUG: s.Short#1: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: & Error/13 AsIs: s.Num#1/14 } # UnknownShortOption/16 Tile{ AsIs: s.Short#1/15 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/37(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[16], ident_UnknownShortOption ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[13], ref_Error.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[12] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Short s.idx s.idx e.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Short/13 s.Num#1/14 s.Short#1/15 e.OptTail#1/9 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_Short, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 37(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    // closed e.OptTail#1 as range 9
    //DEBUG: e.Description#1: 5
    //DEBUG: e.ArgsTail#1: 2
    //DEBUG: s.Num#1: 14
    //DEBUG: s.Short#1: 15
    //DEBUG: e.OptTail#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 & Error/17 s.Num#1/14/18 # UnknownShortOption/19 Tile{ AsIs: s.Short#1/15 } )/20 Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 AsIs: (/11 AsIs: # Short/13 AsIs: s.Num#1/14 } Tile{ AsIs: e.OptTail#1/9 } Tile{ AsIs: )/12 AsIs: e.ArgsTail#1/37(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ref_Error.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[18], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], ident_UnknownShortOption ) )
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
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Word s.idx e.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Word/13 s.Num#1/14 e.File#1/9 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_Word, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 37(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.File#1 as range 9
    //DEBUG: e.Description#1: 5
    //DEBUG: e.ArgsTail#1: 2
    //DEBUG: s.Num#1: 14
    //DEBUG: e.File#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 Reuse: # FILE/13 AsIs: s.Num#1/14 AsIs: e.File#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/37(2) } Tile{ AsIs: >/1 ]] }
    refalrts::update_ident( context[13], ident_FILE );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 5
  //DEBUG: e.Description#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveOpts("ResolveOpts", 1591052355U, 3146445571U, func_ResolveOpts);

static refalrts::FnResult func_ResolveOpts_LongParam(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  //FAST GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) ( e.$ ) e.$
  // </0 & ResolveOpts-LongParam/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 (/14 e.idxTVVVB#0/12 )/15 (/18 e.idxTVVVTB#0/16 )/19 e.idxTVVVTT#0/2 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
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
  // closed e.idxTVVVB#0 as range 12
  // closed e.idxTVVVTB#0 as range 16
  // closed e.idxTVVVTT#0 as range 2
  do {
    // ( e.idx ) s.idx s.idx # Required ( e.idx ) ( e.idx ) e.idx
    // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Required, context[11] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.Param#1 as range 16
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: e.Description#1: 5
    //DEBUG: e.Long#1: 12
    //DEBUG: e.Param#1: 16
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Required/11 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ HalfReuse: s.Tag1 #10/15 HalfReuse: s.Num1 #9/18 AsIs: e.Param#1/16 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[15], context[10] );
    refalrts::reinit_svar( context[18], context[9] );
    refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
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
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx s.idx # Optional ( e.idx ) ( e.idx ) e.idx
    // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Optional, context[11] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.Param#1 as range 16
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: e.Description#1: 5
    //DEBUG: e.Long#1: 12
    //DEBUG: e.Param#1: 16
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Optional/11 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ HalfReuse: s.Tag1 #10/15 HalfReuse: s.Num1 #9/18 AsIs: e.Param#1/16 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[15], context[10] );
    refalrts::reinit_svar( context[18], context[9] );
    refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
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
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx s.idx # None ( e.idx ) ( e.idx ) e.idx
  // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
  if( ! refalrts::ident_term(  ident_None, context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 5
  // closed e.Long#1 as range 12
  // closed e.Param#1 as range 16
  // closed e.ArgsTail#1 as range 2
  //DEBUG: s.Num#1: 9
  //DEBUG: s.Tag#1: 10
  //DEBUG: e.Description#1: 5
  //DEBUG: e.Long#1: 12
  //DEBUG: e.Param#1: 16
  //DEBUG: e.ArgsTail#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/20 & Error/21 Tile{ AsIs: s.Num#1/9 } # UnexpectedLongOptionParam/22 Tile{ AsIs: (/18 } Tile{ HalfReuse: '-'/11 HalfReuse: '-'/14 AsIs: e.Long#1/12 AsIs: )/15 } Tile{ AsIs: e.Param#1/16 } Tile{ AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ref_Error.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[22], ident_UnexpectedLongOptionParam ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[11], '-' );
  refalrts::reinit_char( context[14], '-' );
  refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[20], context[19] );
  refalrts::link_brackets( context[18], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveOpts_LongParam("ResolveOpts-LongParam", 1591052355U, 3146445571U, func_ResolveOpts_LongParam);

static refalrts::FnResult func_ResolveOpts_Long(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) e.$
  // </0 & ResolveOpts-Long/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 (/14 e.idxTVVVB#0/12 )/15 e.idxTVVVT#0/2 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.idxTVVVB#0 as range 12
  // closed e.idxTVVVT#0 as range 2
  do {
    // ( e.idx ) s.idx s.idx # Required ( e.idx ) ( # Word s.idx e.idx ) e.idx
    // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 (/18 # Word/20 s.WordNum#1/21 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Required, context[11] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[22], context[23] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left(  ident_Word, context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.ArgsTail#1 as range 22(2)
    if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
      continue;
    // closed e.Param#1 as range 16
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: e.Description#1: 5
    //DEBUG: e.Long#1: 12
    //DEBUG: e.ArgsTail#1: 2
    //DEBUG: s.WordNum#1: 21
    //DEBUG: e.Param#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} e.Long#1/12 {REMOVED TILE} (/18 # Word/20 s.WordNum#1/21 {REMOVED TILE} )/19 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: e.Param#1/16 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/22(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx s.idx # Required ( e.idx ) e.idx
    // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Required, context[11] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: e.Description#1: 5
    //DEBUG: e.Long#1: 12
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 & Error/17 Tile{ AsIs: s.Num#1/9 } # NoRequiredParam/18 Tile{ HalfReuse: '-'/11 HalfReuse: '-'/14 AsIs: e.Long#1/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ref_Error.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], ident_NoRequiredParam ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[11], '-' );
    refalrts::reinit_char( context[14], '-' );
    refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
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
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx s.idx # Optional ( e.idx ) ( # Word s.idx e.idx ) e.idx
    // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 (/18 # Word/20 s.WordNum#1/21 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Optional, context[11] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[22], context[23] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left(  ident_Word, context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.ArgsTail#1 as range 22(2)
    if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
      continue;
    // closed e.Param#1 as range 16
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: e.Description#1: 5
    //DEBUG: e.Long#1: 12
    //DEBUG: e.ArgsTail#1: 2
    //DEBUG: s.WordNum#1: 21
    //DEBUG: e.Param#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} e.Long#1/12 {REMOVED TILE} (/18 # Word/20 s.WordNum#1/21 {REMOVED TILE} )/19 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: e.Param#1/16 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/22(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx s.idx # Optional ( e.idx ) e.idx
    // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Optional, context[11] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: e.Description#1: 5
    //DEBUG: e.Long#1: 12
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 HalfReuse: # NoParam/14 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::reinit_ident( context[14], ident_NoParam );
    refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
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
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx s.idx # None ( e.idx ) e.idx
  // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
  if( ! refalrts::ident_term(  ident_None, context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 5
  // closed e.Long#1 as range 12
  // closed e.ArgsTail#1 as range 2
  //DEBUG: s.Num#1: 9
  //DEBUG: s.Tag#1: 10
  //DEBUG: e.Description#1: 5
  //DEBUG: e.Long#1: 12
  //DEBUG: e.ArgsTail#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/15 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 HalfReuse: )/14 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_open_bracket( context[15] );
  refalrts::reinit_svar( context[11], context[9] );
  refalrts::reinit_close_bracket( context[14] );
  refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
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
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveOpts_Long("ResolveOpts-Long", 1591052355U, 3146445571U, func_ResolveOpts_Long);

static refalrts::FnResult func_ResolveOpts_Short(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  //FAST GEN: ( e.$ ) s.$ s.$ s.$ s.$ ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ s.$ ( e.$ ) e.$
  // </0 & ResolveOpts-Short/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 s.idxTVVV#0/12 (/15 e.idxTVVVVB#0/13 )/16 e.idxTVVVVT#0/2 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.idxTVVVVB#0 as range 13
  // closed e.idxTVVVVT#0 as range 2
  do {
    // ( e.idx ) s.idx s.idx # Required s.idx ( ) ( # Word s.idx e.idx ) e.idx
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 )/16 (/19 # Word/21 s.WordNum#1/22 e.Param#1/17 )/20 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Required, context[11] ) )
      continue;
    context[23] = context[2];
    context[24] = context[3];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[23], context[24] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  ident_Word, context[17], context[18] );
    if( ! context[21] )
      continue;
    context[25] = context[13];
    context[26] = context[14];
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 23(2)
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    // closed e.Param#1 as range 17
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: s.Short#1: 12
    //DEBUG: e.Description#1: 5
    //DEBUG: e.ArgsTail#1: 2
    //DEBUG: s.WordNum#1: 22
    //DEBUG: e.Param#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 {REMOVED TILE} # Word/21 s.WordNum#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 HalfReuse: s.Tag1 #10/16 HalfReuse: s.Num1 #9/19 } Tile{ AsIs: e.Param#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/23(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[16], context[10] );
    refalrts::reinit_svar( context[19], context[9] );
    refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx s.idx # Required s.idx ( ) e.idx
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Required, context[11] ) )
      continue;
    context[23] = context[13];
    context[24] = context[14];
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: s.Short#1: 12
    //DEBUG: e.Description#1: 5
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/17 & Error/18 Tile{ AsIs: s.Num#1/9 } Tile{ HalfReuse: # NoRequiredParam/16 } Tile{ HalfReuse: '-'/11 AsIs: s.Short#1/12 HalfReuse: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ref_Error.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[16], ident_NoRequiredParam );
    refalrts::reinit_char( context[11], '-' );
    refalrts::reinit_close_bracket( context[15] );
    refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx s.idx # Required s.idx ( e.idx ) e.idx
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 e.Param#1/13 )/16 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Required, context[11] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Param#1 as range 13
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: s.Short#1: 12
    //DEBUG: e.Description#1: 5
    //DEBUG: e.Param#1: 13
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 } Tile{ AsIs: s.Tag#1/10 } Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.Param#1/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[11] );
    refalrts::reinit_svar( context[15], context[9] );
    refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
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
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx s.idx # Optional s.idx ( ) ( # Word s.idx e.idx ) e.idx
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 )/16 (/19 # Word/21 s.WordNum#1/22 e.Param#1/17 )/20 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Optional, context[11] ) )
      continue;
    context[23] = context[2];
    context[24] = context[3];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[23], context[24] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  ident_Word, context[17], context[18] );
    if( ! context[21] )
      continue;
    context[25] = context[13];
    context[26] = context[14];
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 23(2)
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    // closed e.Param#1 as range 17
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: s.Short#1: 12
    //DEBUG: e.Description#1: 5
    //DEBUG: e.ArgsTail#1: 2
    //DEBUG: s.WordNum#1: 22
    //DEBUG: e.Param#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 {REMOVED TILE} # Word/21 s.WordNum#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 HalfReuse: s.Tag1 #10/16 HalfReuse: s.Num1 #9/19 } Tile{ AsIs: e.Param#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/23(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[16], context[10] );
    refalrts::reinit_svar( context[19], context[9] );
    refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx s.idx # Optional s.idx ( ) e.idx
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Optional, context[11] ) )
      continue;
    context[23] = context[13];
    context[24] = context[14];
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: s.Short#1: 12
    //DEBUG: e.Description#1: 5
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/17 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ HalfReuse: # NoParam/15 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::reinit_ident( context[15], ident_NoParam );
    refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
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
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx s.idx # Optional s.idx ( e.idx ) e.idx
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 e.Param#1/13 )/16 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Optional, context[11] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Param#1 as range 13
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: s.Short#1: 12
    //DEBUG: e.Description#1: 5
    //DEBUG: e.Param#1: 13
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 } Tile{ AsIs: s.Tag#1/10 } Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.Param#1/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[11] );
    refalrts::reinit_svar( context[15], context[9] );
    refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
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
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx s.idx # None s.idx ( ) e.idx
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  ident_None, context[11] ) )
      continue;
    context[23] = context[13];
    context[24] = context[14];
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: s.Short#1: 12
    //DEBUG: e.Description#1: 5
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
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
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx s.idx # None s.idx ( e.idx ) e.idx
  // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 s.Short#1/12 (/15 e.OptTail#1/13 )/16 e.ArgsTail#1/2 >/1
  if( ! refalrts::ident_term(  ident_None, context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 5
  // closed e.OptTail#1 as range 13
  // closed e.ArgsTail#1 as range 2
  //DEBUG: s.Num#1: 9
  //DEBUG: s.Tag#1: 10
  //DEBUG: s.Short#1: 12
  //DEBUG: e.Description#1: 5
  //DEBUG: e.OptTail#1: 13
  //DEBUG: e.ArgsTail#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/17 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } )/18 Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } (/19 # Short/20 Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.OptTail#1/13 AsIs: )/16 AsIs: e.ArgsTail#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[20], ident_Short ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[11], context[9] );
  refalrts::update_name( context[4], ref_ResolveOpts.ref.function );
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
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveOpts_Short("ResolveOpts-Short", 1591052355U, 3146445571U, func_ResolveOpts_Short);

static refalrts::FnResult func_FoldErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & FoldErrors/4 e.OptionsAndErrors#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.OptionsAndErrors#1 as range 2
  //DEBUG: e.OptionsAndErrors#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoFoldErrors/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.OptionsAndErrors#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_DoFoldErrors.ref.function ) )
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
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FoldErrors("FoldErrors", 1591052355U, 3146445571U, func_FoldErrors);

static refalrts::FnResult func_DoFoldErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & DoFoldErrors/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) e.idx
    // </0 & DoFoldErrors/4 (/7 e.Errors#1/5 )/8 e.Options#1/9 (/13 & Error/15 s.Num#1/16 s.ErrorCode#1/17 e.Info#1/11 )/14 e.OptionsAndErrors#1/2 >/1
    // closed e.Errors#1 as range 5
    context[18] = context[2];
    context[19] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[18];
      context[21] = context[19];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[20], context[21] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::function_left( ref_Error.ref.function, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.OptionsAndErrors#1 as range 20(2)
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[17], context[11], context[12] ) )
        continue;
      // closed e.Info#1 as range 11
      //DEBUG: e.Errors#1: 5
      //DEBUG: e.Options#1: 9
      //DEBUG: e.OptionsAndErrors#1: 2
      //DEBUG: s.Num#1: 16
      //DEBUG: s.ErrorCode#1: 17
      //DEBUG: e.Info#1: 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & Error/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFoldErrors/4 AsIs: (/7 AsIs: e.Errors#1/5 HalfReuse: (/8 } Tile{ AsIs: s.Num#1/16 AsIs: s.ErrorCode#1/17 AsIs: e.Info#1/11 AsIs: )/14 } Tile{ HalfReuse: )/13 } Tile{ AsIs: e.Options#1/9 } Tile{ AsIs: e.OptionsAndErrors#1/20(2) } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[13] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[13] );
      refalrts::link_brackets( context[8], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[16], context[14] );
      refalrts::splice_to_freelist_open( context[8], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[18], context[19] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & DoFoldErrors/4 (/7 e.Errors#1/5 )/8 e.Options#1/2 >/1
  // closed e.Errors#1 as range 5
  // closed e.Options#1 as range 2
  //DEBUG: e.Errors#1: 5
  //DEBUG: e.Options#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoFoldErrors/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#1/5 AsIs: )/8 } Tile{ AsIs: e.Options#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoFoldErrors("DoFoldErrors", 1591052355U, 3146445571U, func_DoFoldErrors);


//End of file
