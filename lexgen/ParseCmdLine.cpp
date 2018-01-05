// This file automatically generated from 'ParseCmdLine.sref'
// Don't edit! Edit 'ParseCmdLine.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1163491365_2428477382
static const refalrts::RefalIdentifier ident_BadCommandLine = refalrts::ident_from_static("BadCommandLine");
static const refalrts::RefalIdentifier ident_FILE = refalrts::ident_from_static("FILE");
static const refalrts::RefalIdentifier ident_From = refalrts::ident_from_static("From");
static const refalrts::RefalIdentifier ident_InPlace = refalrts::ident_from_static("InPlace");
static const refalrts::RefalIdentifier ident_NoRequiredParam = refalrts::ident_from_static("NoRequiredParam");
static const refalrts::RefalIdentifier ident_Required = refalrts::ident_from_static("Required");
static const refalrts::RefalIdentifier ident_To = refalrts::ident_from_static("To");
static const refalrts::RefalIdentifier ident_UnknownLongOption = refalrts::ident_from_static("UnknownLongOption");
static const refalrts::RefalIdentifier ident_UnknownShortOption = refalrts::ident_from_static("UnknownShortOption");
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_FormatError("FormatError", 1163491365U, 2428477382U);
static refalrts::ExternalReference ref_GetOpt("GetOpt", 0U, 0U);
static refalrts::ExternalReference ref_Help("Help", 1163491365U, 2428477382U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_ParseCommandLine("ParseCommandLine", 0U, 0U);
static refalrts::ExternalReference ref_gen_ParseCommandLine_L1("ParseCommandLine\\1", 1163491365U, 2428477382U);
static refalrts::ExternalReference ref_gen_ParseCommandLine_L1S2L1("ParseCommandLine\\1$2\\1", 1163491365U, 2428477382U);
static refalrts::ExternalReference ref_gen_ParseCommandLine_L1S5L1("ParseCommandLine\\1$5\\1", 1163491365U, 2428477382U);
static refalrts::ExternalReference ref_StrFromInt("StrFromInt", 0U, 0U);
static refalrts::ExternalReference ref_WriteLine("WriteLine", 0U, 0U);

static refalrts::FnResult func_gen_ParseCommandLine_L1S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: ( e.$ ) s.$ e.$
  //GLOBAL GEN: ( e.$ ) s.$ e.$
  // </0 & ParseCommandLine\1$2\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
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
    // ( e.idx ) s.idx ( # To s.idx e.idx )
    // </0 & ParseCommandLine\1$2\1/4 (/7 e.From#2/10 )/8 s.PosFrom#2/9 (/16 # To/18 s.PosTo#3/19 e.To#3/14 )/17 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_To, context[14], context[15] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    // closed e.From#2 as range 10
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    // closed e.To#3 as range 14
    //DEBUG: s.PosFrom#2: 9
    //DEBUG: e.From#2: 10
    //DEBUG: s.PosTo#3: 19
    //DEBUG: e.To#3: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.PosFrom#2/9 {REMOVED TILE} {REMOVED TILE} s.PosTo#3/19 {REMOVED TILE} )/17 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # From/4 AsIs: (/7 AsIs: e.From#2/10 AsIs: )/8 } Tile{ AsIs: # To/18 } Tile{ AsIs: (/16 } Tile{ AsIs: e.To#3/14 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_ident( context[4], ident_From );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx e.idx
  // </0 & ParseCommandLine\1$2\1/4 (/7 e.From#2/10 )/8 s.PosFrom#2/9 e.Other#3/12 >/1
  context[10] = context[5];
  context[11] = context[6];
  context[12] = context[2];
  context[13] = context[3];
  // closed e.From#2 as range 10
  // closed e.Other#3 as range 12
  //DEBUG: s.PosFrom#2: 9
  //DEBUG: e.From#2: 10
  //DEBUG: e.Other#3: 12

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.From#2/10 {REMOVED TILE} s.PosFrom#2/9 e.Other#3/12 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.PosFrom2 #9/7 } Tile{ HalfReuse: 'e'/8 }"xpected argument --to"/14 >/16 </17 & Help/18 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[14], context[15], "xpected argument --to", 21 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ref_Help.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_FormatError.ref.function );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_char( context[8], 'e' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L1S2L1("ParseCommandLine\\1$2\\1", 1163491365U, 2428477382U, func_gen_ParseCommandLine_L1S2L1);


static refalrts::FnResult func_gen_ParseCommandLine_L1S5L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: ( s.$ s.$ e.$ )
  //GLOBAL GEN: ( s.$ s.$ e.$ )
  // </0 & ParseCommandLine\1$5\1/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBVV#0 as range 5
  do {
    // ( s.idx # NoRequiredParam e.idx )
    // </0 & ParseCommandLine\1$5\1/4 (/7 s.Pos#3/9 # NoRequiredParam/10 e.Opt#3/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term(  ident_NoRequiredParam, context[10] ) )
      continue;
    // closed e.Opt#3 as range 11
    //DEBUG: s.Pos#3: 9
    //DEBUG: e.Opt#3: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Pos#3/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos3 #9/7 } 'o'/13 Tile{ HalfReuse: 'p'/10 }"tion "/14 Tile{ AsIs: e.Opt#3/11 }" expects paramete"/16 Tile{ HalfReuse: 'r'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[13], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "tion ", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], " expects paramete", 17 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_FormatError.ref.function );
    refalrts::reinit_svar( context[7], context[9] );
    refalrts::reinit_char( context[10], 'p' );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx # UnknownShortOption s.idx )
    // </0 & ParseCommandLine\1$5\1/4 (/7 s.Pos#3/9 # UnknownShortOption/10 s.Option#3/13 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term(  ident_UnknownShortOption, context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: s.Pos#3: 9
    //DEBUG: s.Option#3: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Pos#3/9 {REMOVED TILE} s.Option#3/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos3 #9/7 } Tile{ HalfReuse: 'u'/10 }"nknown option -"/14 Tile{ HalfReuse: s.Option3 #13/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[14], context[15], "nknown option -", 15 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_FormatError.ref.function );
    refalrts::reinit_svar( context[7], context[9] );
    refalrts::reinit_char( context[10], 'u' );
    refalrts::reinit_svar( context[8], context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx # UnknownLongOption e.idx )
  // </0 & ParseCommandLine\1$5\1/4 (/7 s.Pos#3/9 # UnknownLongOption/10 e.Option#3/11 )/8 >/1
  context[11] = context[5];
  context[12] = context[6];
  if( ! refalrts::ident_term(  ident_UnknownLongOption, context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Option#3 as range 11
  //DEBUG: s.Pos#3: 9
  //DEBUG: e.Option#3: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Pos#3/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos3 #9/7 } Tile{ HalfReuse: 'u'/10 } 'n'/13 Tile{ HalfReuse: 'k'/8 }"nown option --"/14 Tile{ AsIs: e.Option#3/11 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[13], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[14], context[15], "nown option --", 14 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_FormatError.ref.function );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_char( context[10], 'u' );
  refalrts::reinit_char( context[8], 'k' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L1S5L1("ParseCommandLine\\1$5\\1", 1163491365U, 2428477382U, func_gen_ParseCommandLine_L1S5L1);


static refalrts::FnResult func_gen_ParseCommandLine_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & ParseCommandLine\1/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( ) ( # FILE s.idx e.idx )
    // </0 & ParseCommandLine\1/4 (/7 )/8 (/15 # FILE/17 s.Pos#2/18 e.FileName#2/13 )/16 >/1
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
    context[17] = refalrts::ident_left(  ident_FILE, context[13], context[14] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
      continue;
    // closed e.FileName#2 as range 13
    //DEBUG: s.Pos#2: 18
    //DEBUG: e.FileName#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & ParseCommandLine\1/4 (/7 )/8 (/15 # FILE/17 s.Pos#2/18 {REMOVED TILE} )/16 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # InPlace/0 } Tile{ AsIs: e.FileName#2/13 } Tile{ ]] }
    refalrts::reinit_ident( context[0], ident_InPlace );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ) e.idx
    // </0 & ParseCommandLine\1/4 (/7 )/8 e.Begin#2/13 (/19 # From/21 s.PosFrom#2/22 e.From#2/17 )/20 e.End#2/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::ident_left(  ident_From, context[17], context[18] );
      if( ! context[21] )
        continue;
      // closed e.End#2 as range 15
      if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
        continue;
      // closed e.From#2 as range 17
      //DEBUG: e.Begin#2: 13
      //DEBUG: e.End#2: 15
      //DEBUG: s.PosFrom#2: 22
      //DEBUG: e.From#2: 17

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Begin#2/13 } Tile{ AsIs: e.End#2/15 } Tile{ HalfReuse: [*]/7 HalfReuse: & ParseCommandLine\1$2\1/8 } Tile{ AsIs: (/19 } Tile{ AsIs: e.From#2/17 } Tile{ HalfReuse: )/21 AsIs: s.PosFrom#2/22 } Tile{ HalfReuse: {*}/20 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_Fetch.ref.function );
      refalrts::reinit_closure_head( context[7] );
      refalrts::reinit_name( context[8], ref_gen_ParseCommandLine_L1S2L1.ref.function );
      refalrts::reinit_close_bracket( context[21] );
      refalrts::reinit_unwrapped_closure( context[20], context[7] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[19], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::use( res );
      refalrts::wrap_closure( context[20] );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ) e.idx
    // </0 & ParseCommandLine\1/4 (/7 )/8 e.Begin#2/13 (/19 # To/21 s.Pos#2/22 e.To#2/17 )/20 e.End#2/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::ident_left(  ident_To, context[17], context[18] );
      if( ! context[21] )
        continue;
      // closed e.End#2 as range 15
      if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
        continue;
      // closed e.To#2 as range 17
      //DEBUG: e.Begin#2: 13
      //DEBUG: e.End#2: 15
      //DEBUG: s.Pos#2: 22
      //DEBUG: e.To#2: 17

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} e.Begin#2/13 {REMOVED TILE} s.Pos#2/22 e.To#2/17 {REMOVED TILE} e.End#2/15 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos2 #22/7 HalfReuse: 'e'/8 } 'x'/23 Tile{ HalfReuse: 'p'/19 HalfReuse: 't'/21 } Tile{ HalfReuse: 'e'/20 }"cted argument --from"/24 >/26 </27 & Help/28 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( context[23], 'x' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[24], context[25], "cted argument --from", 20 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[28], ref_Help.ref.function ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_FormatError.ref.function );
      refalrts::reinit_svar( context[7], context[22] );
      refalrts::reinit_char( context[8], 'e' );
      refalrts::reinit_char( context[19], 'p' );
      refalrts::reinit_char( context[21], 't' );
      refalrts::reinit_char( context[20], 'e' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[26] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[24], context[28] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[19], context[21] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      refalrts::splice_to_freelist_open( context[8], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ) e.idx
    // </0 & ParseCommandLine\1/4 (/7 )/8 e.AnyOther#2/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.AnyOther#2 as range 11
    //DEBUG: e.AnyOther#2: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.AnyOther#2/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 HalfReuse: 'o'/8 }"mmand line error: unrecognized command line"/13 >/15 </16 & Help/17 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[13], context[14], "mmand line error: unrecognized command line", 43 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ref_Help.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WriteLine.ref.function );
    refalrts::reinit_char( context[7], 'C' );
    refalrts::reinit_char( context[8], 'o' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[17] );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & ParseCommandLine\1/4 (/7 e.Errors#2/9 )/8 e.AnyOther#2/11 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  // closed e.Errors#2 as range 9
  // closed e.AnyOther#2 as range 11
  //DEBUG: e.Errors#2: 9
  //DEBUG: e.AnyOther#2: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.AnyOther#2/11 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & ParseCommandLine\1$5\1/7 AsIs: e.Errors#2/9 HalfReuse: >/8 } </13 & Help/14 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_Help.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Map.ref.function );
  refalrts::reinit_name( context[7], ref_gen_ParseCommandLine_L1S5L1.ref.function );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L1("ParseCommandLine\\1", 1163491365U, 2428477382U, func_gen_ParseCommandLine_L1);


static refalrts::FnResult func_ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & ParseCommandLine/4 e.Options#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Options#1 as range 2
  //DEBUG: e.Options#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & GetOpt/6 (/7 (/8 # From/9 # Required/10 'f'/11 (/12"from"/13 )/15 )/16 (/17 # To/18 # Required/19 'o'/20 (/21"to"/22 )/24 )/25 )/26 Tile{ AsIs: e.Options#1/2 } >/27 & ParseCommandLine\1/28 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_GetOpt.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], ident_From ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], "from", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[18], ident_To ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[19], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[22], context[23], "to", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], ref_gen_ParseCommandLine_L1.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[7], context[26] );
  refalrts::link_brackets( context[17], context[25] );
  refalrts::link_brackets( context[21], context[24] );
  refalrts::link_brackets( context[8], context[16] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseCommandLine("ParseCommandLine", 0U, 0U, func_ParseCommandLine);


static refalrts::FnResult func_FormatError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & FormatError/4 s.Pos#1/5 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2
  //DEBUG: s.Pos#1: 5
  //DEBUG: e.Message#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 }"Command line argument "/6 </8 & StrFromInt/9 Tile{ AsIs: s.Pos#1/5 } >/10": "/11 Tile{ AsIs: e.Message#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "Command line argument ", 22 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_StrFromInt.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], ": ", 2 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_WriteLine.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FormatError("FormatError", 1163491365U, 2428477382U, func_FormatError);


static refalrts::FnResult func_Help(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Help/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } # BadCommandLine/5 </6 & WriteLine/7"Use:"/8 >/10 </11 & WriteLine/12"    lexgen filename.sref - for rewritting file\n"/13 >/15 </16 & WriteLine/17"    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n"/18 >/20 </21 & WriteLine/22"    --from, -f - source file"/23 >/25 </26 & WriteLine/27"    --to, -o - target fi"/28 Tile{ HalfReuse: 'l'/0 HalfReuse: 'e'/4 AsIs: >/1 ]] }
  if( ! refalrts::alloc_ident( context[5], ident_BadCommandLine ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_WriteLine.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "Use:", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_WriteLine.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], "    lexgen filename.sref - for rewritting file\n", 47 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_WriteLine.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], "    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n", 76 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], ref_WriteLine.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[23], context[24], "    --from, -f - source file", 28 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], ref_WriteLine.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[28], context[29], "    --to, -o - target fi", 24 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'l' );
  refalrts::reinit_char( context[4], 'e' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[29] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Help("Help", 1163491365U, 2428477382U, func_Help);


//End of file
