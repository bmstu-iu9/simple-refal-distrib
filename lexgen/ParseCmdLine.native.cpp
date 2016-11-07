// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_BadCommandLine = refalrts::ident_from_static("BadCommandLine");
const refalrts::RefalIdentifier ident_FILE = refalrts::ident_from_static("FILE");
const refalrts::RefalIdentifier ident_From = refalrts::ident_from_static("From");
const refalrts::RefalIdentifier ident_InPlace = refalrts::ident_from_static("InPlace");
const refalrts::RefalIdentifier ident_NoRequiredParam = refalrts::ident_from_static("NoRequiredParam");
const refalrts::RefalIdentifier ident_Required = refalrts::ident_from_static("Required");
const refalrts::RefalIdentifier ident_To = refalrts::ident_from_static("To");
const refalrts::RefalIdentifier ident_UnknownLongOption = refalrts::ident_from_static("UnknownLongOption");
const refalrts::RefalIdentifier ident_UnknownShortOption = refalrts::ident_from_static("UnknownShortOption");
extern refalrts::RefalFunction& Fetch_0_0;
#define Fetch_alias Fetch_0_0
#define Fetch_str "Fetch#0:0"

extern refalrts::RefalFunction& Map_0_0;
#define Map_alias Map_0_0
#define Map_str "Map#0:0"

extern refalrts::RefalFunction& GetOpt_0_0;
#define GetOpt_alias GetOpt_0_0
#define GetOpt_str "GetOpt#0:0"

extern refalrts::RefalFunction& WriteLine_0_0;
#define WriteLine_alias WriteLine_0_0
#define WriteLine_str "WriteLine#0:0"

extern refalrts::RefalFunction& StrFromInt_0_0;
#define StrFromInt_alias StrFromInt_0_0
#define StrFromInt_str "StrFromInt#0:0"

extern refalrts::RefalFunction& gen_ParseCommandLine_L1S2L1_1416714831_2058974398;
#define gen_ParseCommandLine_L1S2L1_alias gen_ParseCommandLine_L1S2L1_1416714831_2058974398

extern refalrts::RefalFunction& gen_ParseCommandLine_L1S5L1_1416714831_2058974398;
#define gen_ParseCommandLine_L1S5L1_alias gen_ParseCommandLine_L1S5L1_1416714831_2058974398

extern refalrts::RefalFunction& gen_ParseCommandLine_L1_1416714831_2058974398;
#define gen_ParseCommandLine_L1_alias gen_ParseCommandLine_L1_1416714831_2058974398

extern refalrts::RefalFunction& ParseCommandLine_0_0;
#define ParseCommandLine_alias ParseCommandLine_0_0

extern refalrts::RefalFunction& FormatError_1416714831_2058974398;
#define FormatError_alias FormatError_1416714831_2058974398

extern refalrts::RefalFunction& Help_1416714831_2058974398;
#define Help_alias Help_1416714831_2058974398


static refalrts::FnResult func_gen_ParseCommandLine_L1S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    // </0 & ParseCommandLine\1$2\1/4 (/7 e.From#2/5 )/8 s.PosFrom#2/9 (/12 # To/14 s.PosTo#3/15 e.To#3/10 )/13 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[16], context[17] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  ident_To, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.From#2 as range 5
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    // closed e.To#3 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.PosFrom#2/9 {REMOVED TILE} {REMOVED TILE} s.PosTo#3/15 {REMOVED TILE} )/13 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # From/4 AsIs: (/7 AsIs: e.From#2/5 AsIs: )/8 } Tile{ AsIs: # To/14 } Tile{ AsIs: (/12 } Tile{ AsIs: e.To#3/10 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_ident( context[4], ident_From );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx e.idx
  // </0 & ParseCommandLine\1$2\1/4 (/7 e.From#2/5 )/8 s.PosFrom#2/9 e.Other#3/2 >/1
  // closed e.From#2 as range 5
  // closed e.Other#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.From#2/5 {REMOVED TILE} s.PosFrom#2/9 e.Other#3/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.PosFrom2 #9/7 } Tile{ HalfReuse: 'e'/8 }"xpected argument --to"/10 >/12 </13 & Help/14 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[10], context[11], "xpected argument --to", 21 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], & Help_alias ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & FormatError_alias );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_char( context[8], 'e' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_ParseCommandLine_L1S2L1(func_gen_ParseCommandLine_L1S2L1, "ParseCommandLine\\1$2\\1#1416714831:2058974398");
refalrts::RefalFunction& gen_ParseCommandLine_L1S2L1_1416714831_2058974398 = descr_gen_ParseCommandLine_L1S2L1;

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
    // </0 & ParseCommandLine\1$5\1/4 (/7 s.Pos#3/9 # NoRequiredParam/10 e.Opt#3/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_NoRequiredParam, context[10] ) )
      continue;
    // closed e.Opt#3 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Pos#3/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos3 #9/7 } 'o'/11 Tile{ HalfReuse: 'p'/10 }"tion "/12 Tile{ AsIs: e.Opt#3/5 }" expects paramete"/14 Tile{ HalfReuse: 'r'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[11], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "tion ", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " expects paramete", 17 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & FormatError_alias );
    refalrts::reinit_svar( context[7], context[9] );
    refalrts::reinit_char( context[10], 'p' );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx # UnknownShortOption s.idx )
    // </0 & ParseCommandLine\1$5\1/4 (/7 s.Pos#3/9 # UnknownShortOption/10 s.Option#3/11 )/8 >/1
    if( ! refalrts::ident_term(  ident_UnknownShortOption, context[10] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::svar_left( context[11], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Pos#3/9 {REMOVED TILE} s.Option#3/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos3 #9/7 } Tile{ HalfReuse: 'u'/10 }"nknown option -"/12 Tile{ HalfReuse: s.Option3 #11/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[12], context[13], "nknown option -", 15 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & FormatError_alias );
    refalrts::reinit_svar( context[7], context[9] );
    refalrts::reinit_char( context[10], 'u' );
    refalrts::reinit_svar( context[8], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx # UnknownLongOption e.idx )
  // </0 & ParseCommandLine\1$5\1/4 (/7 s.Pos#3/9 # UnknownLongOption/10 e.Option#3/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_UnknownLongOption, context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Option#3 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Pos#3/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos3 #9/7 } Tile{ HalfReuse: 'u'/10 } 'n'/11 Tile{ HalfReuse: 'k'/8 }"nown option --"/12 Tile{ AsIs: e.Option#3/5 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[11], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "nown option --", 14 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & FormatError_alias );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_char( context[10], 'u' );
  refalrts::reinit_char( context[8], 'k' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_ParseCommandLine_L1S5L1(func_gen_ParseCommandLine_L1S5L1, "ParseCommandLine\\1$5\\1#1416714831:2058974398");
refalrts::RefalFunction& gen_ParseCommandLine_L1S5L1_1416714831_2058974398 = descr_gen_ParseCommandLine_L1S5L1;

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
    // </0 & ParseCommandLine\1/4 (/7 )/8 (/11 # FILE/13 s.Pos#2/14 e.FileName#2/9 )/12 >/1
    context[23] = context[2];
    context[24] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[23], context[24] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_FILE, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[25] = context[5];
    context[26] = context[6];
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.FileName#2 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & ParseCommandLine\1/4 (/7 )/8 (/11 # FILE/13 s.Pos#2/14 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # InPlace/0 } Tile{ AsIs: e.FileName#2/9 } Tile{ ]] }
    refalrts::reinit_ident( context[0], ident_InPlace );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ) e.idx
    // </0 & ParseCommandLine\1/4 (/7 )/8 e.Begin#2/9 (/13 # From/15 s.PosFrom#2/16 e.From#2/11 )/14 e.End#2/2 >/1
    context[23] = context[5];
    context[24] = context[6];
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    context[25] = context[2];
    context[26] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[25];
      context[28] = context[26];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[27], context[28] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left(  ident_From, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.End#2 as range 27(2)
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.From#2 as range 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Begin#2/9 } Tile{ AsIs: e.End#2/27(2) } Tile{ HalfReuse: </14 } Tile{ HalfReuse: & @create_closure@/7 HalfReuse: & ParseCommandLine\1$2\1/8 } Tile{ AsIs: (/13 } Tile{ AsIs: e.From#2/11 } Tile{ HalfReuse: )/15 AsIs: s.PosFrom#2/16 } >/17 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_call( context[17] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], & Fetch_alias );
      refalrts::reinit_open_call( context[14] );
      refalrts::reinit_name( context[7], & refalrts::create_closure );
      refalrts::reinit_name( context[8], & gen_ParseCommandLine_L1S2L1_alias );
      refalrts::reinit_close_bracket( context[15] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[17] );
      refalrts::push_stack( context[14] );
      refalrts::link_brackets( context[13], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[25], context[26] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ) e.idx
    // </0 & ParseCommandLine\1/4 (/7 )/8 e.Begin#2/9 (/13 # To/15 s.Pos#2/16 e.To#2/11 )/14 e.End#2/2 >/1
    context[23] = context[5];
    context[24] = context[6];
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    context[25] = context[2];
    context[26] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[25];
      context[28] = context[26];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[27], context[28] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left(  ident_To, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.End#2 as range 27(2)
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.To#2 as range 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} e.Begin#2/9 {REMOVED TILE} s.Pos#2/16 e.To#2/11 {REMOVED TILE} e.End#2/27(2) {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatError/4 HalfReuse: s.Pos2 #16/7 HalfReuse: 'e'/8 } 'x'/17 Tile{ HalfReuse: 'p'/13 HalfReuse: 't'/15 } Tile{ HalfReuse: 'e'/14 }"cted argument --from"/18 >/20 </21 & Help/22 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( context[17], 'x' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[18], context[19], "cted argument --from", 20 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[22], & Help_alias ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], & FormatError_alias );
      refalrts::reinit_svar( context[7], context[16] );
      refalrts::reinit_char( context[8], 'e' );
      refalrts::reinit_char( context[13], 'p' );
      refalrts::reinit_char( context[15], 't' );
      refalrts::reinit_char( context[14], 'e' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[21] );
      refalrts::push_stack( context[20] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[18], context[22] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[13], context[15] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      refalrts::splice_to_freelist_open( context[8], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[25], context[26] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ) e.idx
    // </0 & ParseCommandLine\1/4 (/7 )/8 e.AnyOther#2/2 >/1
    context[23] = context[5];
    context[24] = context[6];
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.AnyOther#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.AnyOther#2/2 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 HalfReuse: 'o'/8 }"mmand line error: unrecognized command line"/9 >/11 </12 & Help/13 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[9], context[10], "mmand line error: unrecognized command line", 43 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], & Help_alias ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & WriteLine_alias );
    refalrts::reinit_char( context[7], 'C' );
    refalrts::reinit_char( context[8], 'o' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[13] );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & ParseCommandLine\1/4 (/7 e.Errors#2/5 )/8 e.AnyOther#2/2 >/1
  // closed e.Errors#2 as range 5
  // closed e.AnyOther#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.AnyOther#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & ParseCommandLine\1$5\1/7 AsIs: e.Errors#2/5 HalfReuse: >/8 } </9 & Help/10 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & Help_alias ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Map_alias );
  refalrts::reinit_name( context[7], & gen_ParseCommandLine_L1S5L1_alias );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_ParseCommandLine_L1(func_gen_ParseCommandLine_L1, "ParseCommandLine\\1#1416714831:2058974398");
refalrts::RefalFunction& gen_ParseCommandLine_L1_1416714831_2058974398 = descr_gen_ParseCommandLine_L1;

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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & GetOpt/6 (/7 (/8 # From/9 # Required/10 'f'/11 (/12"from"/13 )/15 )/16 (/17 # To/18 # Required/19 'o'/20 (/21"to"/22 )/24 )/25 )/26 Tile{ AsIs: e.Options#1/2 } >/27 & ParseCommandLine\1/28 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & GetOpt_alias ) )
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
  if( ! refalrts::alloc_name( context[28], & gen_ParseCommandLine_L1_alias ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch_alias );
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

static refalrts::RefalNativeFunction descr_ParseCommandLine(func_ParseCommandLine, "ParseCommandLine#0:0");
refalrts::RefalFunction& ParseCommandLine_0_0 = descr_ParseCommandLine;

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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 }"Command line argument "/6 </8 & StrFromInt/9 Tile{ AsIs: s.Pos#1/5 } >/10": "/11 Tile{ AsIs: e.Message#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "Command line argument ", 22 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], & StrFromInt_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], ": ", 2 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & WriteLine_alias );
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

static refalrts::RefalNativeFunction descr_FormatError(func_FormatError, "FormatError#1416714831:2058974398");
refalrts::RefalFunction& FormatError_1416714831_2058974398 = descr_FormatError;

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
  if( ! refalrts::alloc_name( context[7], & WriteLine_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "Use:", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], & WriteLine_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], "    lexgen filename.sref - for rewritting file\n", 47 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], & WriteLine_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], "    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n", 76 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], & WriteLine_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[23], context[24], "    --from, -f - source file", 28 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], & WriteLine_alias ) )
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

static refalrts::RefalNativeFunction descr_Help(func_Help, "Help#1416714831:2058974398");
refalrts::RefalFunction& Help_1416714831_2058974398 = descr_Help;


//End of file
