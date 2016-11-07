// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_CompilerOption = refalrts::ident_from_static("CompilerOption");
const refalrts::RefalIdentifier ident_CppCompiler = refalrts::ident_from_static("CppCompiler");
const refalrts::RefalIdentifier ident_FILE = refalrts::ident_from_static("FILE");
const refalrts::RefalIdentifier ident_Fails = refalrts::ident_from_static("Fails");
const refalrts::RefalIdentifier ident_NoCppCompiler = refalrts::ident_from_static("NoCppCompiler");
const refalrts::RefalIdentifier ident_NoRequiredParam = refalrts::ident_from_static("NoRequiredParam");
const refalrts::RefalIdentifier ident_NoSourceFile = refalrts::ident_from_static("NoSourceFile");
const refalrts::RefalIdentifier ident_RepeatOption = refalrts::ident_from_static("RepeatOption");
const refalrts::RefalIdentifier ident_Required = refalrts::ident_from_static("Required");
const refalrts::RefalIdentifier ident_Runtime = refalrts::ident_from_static("Runtime");
const refalrts::RefalIdentifier ident_RuntimeFolder = refalrts::ident_from_static("RuntimeFolder");
const refalrts::RefalIdentifier ident_Search = refalrts::ident_from_static("Search");
const refalrts::RefalIdentifier ident_SearchFolder = refalrts::ident_from_static("SearchFolder");
const refalrts::RefalIdentifier ident_SrefCompiler = refalrts::ident_from_static("SrefCompiler");
const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
const refalrts::RefalIdentifier ident_UnknownLongOption = refalrts::ident_from_static("UnknownLongOption");
const refalrts::RefalIdentifier ident_UnknownShortOption = refalrts::ident_from_static("UnknownShortOption");
extern refalrts::RefalFunction& GetOpt_0_0;
#define GetOpt_alias GetOpt_0_0
#define GetOpt_str "GetOpt#0:0"

extern refalrts::RefalFunction& GetOpt_CheckRepeated_0_0;
#define GetOpt_CheckRepeated_alias GetOpt_CheckRepeated_0_0
#define GetOpt_CheckRepeated_str "GetOpt-CheckRepeated#0:0"

extern refalrts::RefalFunction& Fetch_0_0;
#define Fetch_alias Fetch_0_0
#define Fetch_str "Fetch#0:0"

extern refalrts::RefalFunction& Seq_0_0;
#define Seq_alias Seq_0_0
#define Seq_str "Seq#0:0"

extern refalrts::RefalFunction& MapReduce_0_0;
#define MapReduce_alias MapReduce_0_0
#define MapReduce_str "MapReduce#0:0"

extern refalrts::RefalFunction& Map_0_0;
#define Map_alias Map_0_0
#define Map_str "Map#0:0"

extern refalrts::RefalFunction& gen_ParseCommandLine_L1_2866188145_291805591;
#define gen_ParseCommandLine_L1_alias gen_ParseCommandLine_L1_2866188145_291805591

extern refalrts::RefalFunction& gen_ParseCommandLine_L2_2866188145_291805591;
#define gen_ParseCommandLine_L2_alias gen_ParseCommandLine_L2_2866188145_291805591

extern refalrts::RefalFunction& gen_ParseCommandLine_L3_2866188145_291805591;
#define gen_ParseCommandLine_L3_alias gen_ParseCommandLine_L3_2866188145_291805591

extern refalrts::RefalFunction& gen_ParseCommandLine_L4_2866188145_291805591;
#define gen_ParseCommandLine_L4_alias gen_ParseCommandLine_L4_2866188145_291805591

extern refalrts::RefalFunction& gen_ParseCommandLine_L5L1_2866188145_291805591;
#define gen_ParseCommandLine_L5L1_alias gen_ParseCommandLine_L5L1_2866188145_291805591

extern refalrts::RefalFunction& gen_ParseCommandLine_L5_2866188145_291805591;
#define gen_ParseCommandLine_L5_alias gen_ParseCommandLine_L5_2866188145_291805591

extern refalrts::RefalFunction& gen_ParseCommandLine_L6L1_2866188145_291805591;
#define gen_ParseCommandLine_L6L1_alias gen_ParseCommandLine_L6L1_2866188145_291805591

extern refalrts::RefalFunction& gen_ParseCommandLine_L6_2866188145_291805591;
#define gen_ParseCommandLine_L6_alias gen_ParseCommandLine_L6_2866188145_291805591

extern refalrts::RefalFunction& gen_ParseCommandLine_L7S2L1S4L1_2866188145_291805591;
#define gen_ParseCommandLine_L7S2L1S4L1_alias gen_ParseCommandLine_L7S2L1S4L1_2866188145_291805591

extern refalrts::RefalFunction& gen_ParseCommandLine_L7S2L1_2866188145_291805591;
#define gen_ParseCommandLine_L7S2L1_alias gen_ParseCommandLine_L7S2L1_2866188145_291805591

extern refalrts::RefalFunction& gen_ParseCommandLine_L7_2866188145_291805591;
#define gen_ParseCommandLine_L7_alias gen_ParseCommandLine_L7_2866188145_291805591

extern refalrts::RefalFunction& ParseCommandLine_0_0;
#define ParseCommandLine_alias ParseCommandLine_0_0


static refalrts::FnResult func_gen_ParseCommandLine_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ParseCommandLine\1/4 (/7 e.Errors#2/5 )/8 e.Options#2/2 >/1
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
  // closed e.Errors#2 as range 5
  // closed e.Options#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & GetOpt-CheckRepeated/10 (/11 # CppCompiler/12 # SrefCompiler/13 Tile{ HalfReuse: # FILE/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: e.Options#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & GetOpt_CheckRepeated_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], ident_CppCompiler ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[13], ident_SrefCompiler ) )
    return refalrts::cNoMemory;
  refalrts::reinit_ident( context[0], ident_FILE );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_ParseCommandLine_L1(func_gen_ParseCommandLine_L1, "ParseCommandLine\\1#2866188145:291805591");
refalrts::RefalFunction& gen_ParseCommandLine_L1_2866188145_291805591 = descr_gen_ParseCommandLine_L1;

static refalrts::FnResult func_gen_ParseCommandLine_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & ParseCommandLine\2/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // </0 & ParseCommandLine\2/4 (/7 e.Errors#2/5 )/8 e.Options-B#2/9 (/13 # CppCompiler/15 s.Num#2/16 e.Command#2/11 )/14 e.Options-E#2/2 >/1
    // closed e.Errors#2 as range 5
    context[17] = context[2];
    context[18] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[19] = context[17];
      context[20] = context[18];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[19], context[20] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left(  ident_CppCompiler, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Options-E#2 as range 19(2)
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.Command#2 as range 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & ParseCommandLine\2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num#2/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 } Tile{ AsIs: (/13 HalfReuse: (/15 } Tile{ AsIs: e.Command#2/11 } Tile{ AsIs: )/14 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Options-B#2/9 } Tile{ AsIs: e.Options-E#2/19(2) } Tile{ ]] }
      refalrts::reinit_open_bracket( context[15] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[13], context[1] );
      refalrts::link_brackets( context[15], context[14] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[13], context[15] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[17], context[18] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & ParseCommandLine\2/4 (/7 e.Errors#2/5 )/8 e.Options#2/2 >/1
  // closed e.Errors#2 as range 5
  // closed e.Options#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 HalfReuse: (/8 } 1/9 # NoCppCompiler/10 Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ HalfReuse: (/1 } (/11 )/12 )/13 Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_number( context[9], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], ident_NoCppCompiler ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::link_brackets( context[1], context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[4] );
  refalrts::link_brackets( context[8], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_ParseCommandLine_L2(func_gen_ParseCommandLine_L2, "ParseCommandLine\\2#2866188145:291805591");
refalrts::RefalFunction& gen_ParseCommandLine_L2_2866188145_291805591 = descr_gen_ParseCommandLine_L2;

static refalrts::FnResult func_gen_ParseCommandLine_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  //FAST GEN: ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) e.$
  // </0 & ParseCommandLine\3/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
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
    // ( e.idx ) ( e.idx ) e.idx
    // </0 & ParseCommandLine\3/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options-B#2/13 (/17 # SrefCompiler/19 s.Num#2/20 e.Command#2/15 )/18 e.Options-E#2/2 >/1
    // closed e.Errors#2 as range 5
    // closed e.Bag#2 as range 9
    context[21] = context[2];
    context[22] = context[3];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[21];
      context[24] = context[22];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[23], context[24] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::ident_left(  ident_SrefCompiler, context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.Options-E#2 as range 23(2)
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      // closed e.Command#2 as range 15

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & ParseCommandLine\3/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # SrefCompiler/19 s.Num#2/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } Tile{ AsIs: e.Command#2/15 } Tile{ AsIs: )/18 } Tile{ HalfReuse: )/17 } Tile{ AsIs: e.Options-B#2/13 } Tile{ AsIs: e.Options-E#2/23(2) } Tile{ ]] }
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_close_bracket( context[17] );
      refalrts::link_brackets( context[11], context[17] );
      refalrts::link_brackets( context[12], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[21], context[22] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) e.idx
  // </0 & ParseCommandLine\3/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
  // closed e.Errors#2 as range 5
  // closed e.Bag#2 as range 9
  // closed e.Options#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 }"sr"/13 Tile{ HalfReuse: 'e'/0 HalfReuse: 'f'/4 } Tile{ HalfReuse: 'c'/1 }"-core"/15 )/17 )/18 Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[13], context[14], "sr", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "-core", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_char( context[0], 'e' );
  refalrts::reinit_char( context[4], 'f' );
  refalrts::reinit_char( context[1], 'c' );
  refalrts::link_brackets( context[11], context[18] );
  refalrts::link_brackets( context[12], context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[18] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_ParseCommandLine_L3(func_gen_ParseCommandLine_L3, "ParseCommandLine\\3#2866188145:291805591");
refalrts::RefalFunction& gen_ParseCommandLine_L3_2866188145_291805591 = descr_gen_ParseCommandLine_L3;

static refalrts::FnResult func_gen_ParseCommandLine_L4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  //FAST GEN: ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) e.$
  // </0 & ParseCommandLine\4/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
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
    // ( e.idx ) ( e.idx ) e.idx
    // </0 & ParseCommandLine\4/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options-B#2/13 (/17 # FILE/19 s.Num#2/20 e.FileName#2/15 )/18 e.Options-E#2/2 >/1
    // closed e.Errors#2 as range 5
    // closed e.Bag#2 as range 9
    context[21] = context[2];
    context[22] = context[3];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[21];
      context[24] = context[22];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[23], context[24] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::ident_left(  ident_FILE, context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.Options-E#2 as range 23(2)
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      // closed e.FileName#2 as range 15

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & ParseCommandLine\4/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # FILE/19 s.Num#2/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } Tile{ AsIs: e.FileName#2/15 } Tile{ AsIs: )/18 } Tile{ HalfReuse: )/17 } Tile{ AsIs: e.Options-B#2/13 } Tile{ AsIs: e.Options-E#2/23(2) } Tile{ ]] }
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_close_bracket( context[17] );
      refalrts::link_brackets( context[11], context[17] );
      refalrts::link_brackets( context[12], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[21], context[22] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) e.idx
  // </0 & ParseCommandLine\4/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
  // closed e.Errors#2 as range 5
  // closed e.Bag#2 as range 9
  // closed e.Options#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: 1/4 } # NoSourceFile/13 )/14 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } Tile{ HalfReuse: )/1 } )/15 Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_ident( context[13], ident_NoSourceFile ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_number( context[4], 1UL );
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[7], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_ParseCommandLine_L4(func_gen_ParseCommandLine_L4, "ParseCommandLine\\4#2866188145:291805591");
refalrts::RefalFunction& gen_ParseCommandLine_L4_2866188145_291805591 = descr_gen_ParseCommandLine_L4;

static refalrts::FnResult func_gen_ParseCommandLine_L5L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  //FAST GEN: ( e.$ ) t.$
  //GLOBAL GEN: ( e.$ ) t.$
  // </0 & ParseCommandLine\5\1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( ( e.idx ) ( e.idx ) e.idx ) ( # CompilerOption s.idx e.idx )
    // </0 & ParseCommandLine\5\1/4 (/7 (/16 e.CppCompiler#3/14 )/17 (/20 e.SrefCompiler#3/18 )/21 e.Bag#3/5 )/8 (/9 # CompilerOption/13 s.Num#3/22 e.Flag#3/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  ident_CompilerOption, context[11], context[12] );
    if( ! context[13] )
      continue;
    context[23] = context[5];
    context[24] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[23], context[24] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[23], context[24] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.CppCompiler#3 as range 14
    // closed e.SrefCompiler#3 as range 18
    // closed e.Bag#3 as range 23(5)
    if( ! refalrts::svar_left( context[22], context[11], context[12] ) )
      continue;
    // closed e.Flag#3 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ParseCommandLine\5\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/9 {REMOVED TILE} s.Num#3/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/16 AsIs: e.CppCompiler#3/14 AsIs: )/17 AsIs: (/20 AsIs: e.SrefCompiler#3/18 HalfReuse: ' '/21 } Tile{ HalfReuse: '\"'/8 } Tile{ AsIs: e.Flag#3/11 } Tile{ HalfReuse: '\"'/13 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Bag#3/23(5) } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_char( context[21], ' ' );
    refalrts::reinit_char( context[8], '\"' );
    refalrts::reinit_char( context[13], '\"' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[20], context[10] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[7], context[21] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx
  // </0 & ParseCommandLine\5\1/4 (/7 e.Bag#3/5 )/8 t.OtherOption#3/9 >/1
  // closed e.Bag#3 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ParseCommandLine\5\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Bag#3/5 AsIs: )/8 AsIs: t.OtherOption#3/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_ParseCommandLine_L5L1(func_gen_ParseCommandLine_L5L1, "ParseCommandLine\\5\\1#2866188145:291805591");
refalrts::RefalFunction& gen_ParseCommandLine_L5L1_2866188145_291805591 = descr_gen_ParseCommandLine_L5L1;

static refalrts::FnResult func_gen_ParseCommandLine_L5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ParseCommandLine\5/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
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
  // closed e.Errors#2 as range 5
  // closed e.Bag#2 as range 9
  // closed e.Options#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } )/13 Tile{ AsIs: </0 Reuse: & MapReduce/4 } Tile{ HalfReuse: & ParseCommandLine\5\1/8 AsIs: (/11 AsIs: e.Bag#2/9 AsIs: )/12 AsIs: e.Options#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & MapReduce_alias );
  refalrts::reinit_name( context[8], & gen_ParseCommandLine_L5L1_alias );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_ParseCommandLine_L5(func_gen_ParseCommandLine_L5, "ParseCommandLine\\5#2866188145:291805591");
refalrts::RefalFunction& gen_ParseCommandLine_L5_2866188145_291805591 = descr_gen_ParseCommandLine_L5;

static refalrts::FnResult func_gen_ParseCommandLine_L6L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  //FAST GEN: ( s.$ s.$ e.$ )
  //GLOBAL GEN: ( s.$ s.$ e.$ )
  // </0 & ParseCommandLine\6\1/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
    // ( # SearchFolder s.idx e.idx )
    // </0 & ParseCommandLine\6\1/4 (/7 # SearchFolder/9 s.Num#3/10 e.Folder#3/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_SearchFolder, context[9] ) )
      continue;
    // closed e.Folder#3 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ParseCommandLine\6\1/4 {REMOVED TILE} s.Num#3/10 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Search/9 } Tile{ AsIs: e.Folder#3/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], ident_Search );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # RuntimeFolder s.idx e.idx )
  // </0 & ParseCommandLine\6\1/4 (/7 # RuntimeFolder/9 s.Num#3/10 e.Folder#3/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_RuntimeFolder, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folder#3 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ParseCommandLine\6\1/4 {REMOVED TILE} s.Num#3/10 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Runtime/9 } Tile{ AsIs: e.Folder#3/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::update_ident( context[9], ident_Runtime );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_ParseCommandLine_L6L1(func_gen_ParseCommandLine_L6L1, "ParseCommandLine\\6\\1#2866188145:291805591");
refalrts::RefalFunction& gen_ParseCommandLine_L6L1_2866188145_291805591 = descr_gen_ParseCommandLine_L6L1;

static refalrts::FnResult func_gen_ParseCommandLine_L6(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ParseCommandLine\6/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
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
  // closed e.Errors#2 as range 5
  // closed e.Bag#2 as range 9
  // closed e.Options#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 AsIs: )/12 } Tile{ AsIs: </0 Reuse: & Map/4 } & ParseCommandLine\6\1/13 Tile{ AsIs: e.Options#2/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[13], & gen_ParseCommandLine_L6L1_alias ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Map_alias );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_ParseCommandLine_L6(func_gen_ParseCommandLine_L6, "ParseCommandLine\\6#2866188145:291805591");
refalrts::RefalFunction& gen_ParseCommandLine_L6_2866188145_291805591 = descr_gen_ParseCommandLine_L6;

static refalrts::FnResult func_gen_ParseCommandLine_L7S2L1S4L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & ParseCommandLine\7$2\1$4\1/4 s.idx#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // # CppCompiler
    // </0 & ParseCommandLine\7$2\1$4\1/4 # CppCompiler/5 >/1
    if( ! refalrts::ident_term(  ident_CppCompiler, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'o'/0 HalfReuse: 'p'/4 HalfReuse: 't'/5 HalfReuse: 'i'/1 }"on -c or --cpp-command"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "on -c or --cpp-command", 22 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'o' );
    refalrts::reinit_char( context[4], 'p' );
    refalrts::reinit_char( context[5], 't' );
    refalrts::reinit_char( context[1], 'i' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # SrefCompiler
    // </0 & ParseCommandLine\7$2\1$4\1/4 # SrefCompiler/5 >/1
    if( ! refalrts::ident_term(  ident_SrefCompiler, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'o'/0 HalfReuse: 'p'/4 HalfReuse: 't'/5 HalfReuse: 'i'/1 }"on -s or --sref-command"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "on -s or --sref-command", 23 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'o' );
    refalrts::reinit_char( context[4], 'p' );
    refalrts::reinit_char( context[5], 't' );
    refalrts::reinit_char( context[1], 'i' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # FILE
  // </0 & ParseCommandLine\7$2\1$4\1/4 # FILE/5 >/1
  if( ! refalrts::ident_term(  ident_FILE, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 'o'/4 HalfReuse: 'u'/5 HalfReuse: 'r'/1 }"ce filename"/6 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "ce filename", 11 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 's' );
  refalrts::reinit_char( context[4], 'o' );
  refalrts::reinit_char( context[5], 'u' );
  refalrts::reinit_char( context[1], 'r' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_ParseCommandLine_L7S2L1S4L1(func_gen_ParseCommandLine_L7S2L1S4L1, "ParseCommandLine\\7$2\\1$4\\1#2866188145:291805591");
refalrts::RefalFunction& gen_ParseCommandLine_L7S2L1S4L1_2866188145_291805591 = descr_gen_ParseCommandLine_L7S2L1S4L1;

static refalrts::FnResult func_gen_ParseCommandLine_L7S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: ( e.$ )
  //GLOBAL GEN: ( s.$ s.$ e.$ )
  // </0 & ParseCommandLine\7$2\1/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
    // </0 & ParseCommandLine\7$2\1/4 (/7 s.Pos#3/9 # NoRequiredParam/10 e.Param#3/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_NoRequiredParam, context[10] ) )
      continue;
    // closed e.Param#3 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 } Tile{ HalfReuse: 'p'/0 HalfReuse: 't'/4 }"ion "/11 Tile{ AsIs: e.Param#3/5 }" expects paramete"/13 Tile{ HalfReuse: 'r'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[11], context[12], "ion ", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], " expects paramete", 17 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'o' );
    refalrts::reinit_char( context[0], 'p' );
    refalrts::reinit_char( context[4], 't' );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx # UnknownShortOption s.idx )
    // </0 & ParseCommandLine\7$2\1/4 (/7 s.Pos#3/9 # UnknownShortOption/10 s.Option#3/11 )/8 >/1
    if( ! refalrts::ident_term(  ident_UnknownShortOption, context[10] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::svar_left( context[11], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'u'/10 } 'n'/12 Tile{ HalfReuse: 'k'/1 } Tile{ HalfReuse: 'n'/0 HalfReuse: 'o'/4 }"wn option -"/13 Tile{ AsIs: s.Option#3/11 AsIs: )/8 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[12], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], "wn option -", 11 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'u' );
    refalrts::reinit_char( context[1], 'k' );
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'o' );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx # UnknownLongOption e.idx )
    // </0 & ParseCommandLine\7$2\1/4 (/7 s.Pos#3/9 # UnknownLongOption/10 e.Option#3/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_UnknownLongOption, context[10] ) )
      continue;
    // closed e.Option#3 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'u'/10 }"nk"/11 Tile{ HalfReuse: 'n'/0 HalfReuse: 'o'/4 } Tile{ HalfReuse: 'w'/8 }"n option --"/13 Tile{ AsIs: e.Option#3/5 } Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[11], context[12], "nk", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], "n option --", 11 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'u' );
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'o' );
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx # RepeatOption s.idx )
    // </0 & ParseCommandLine\7$2\1/4 (/7 s.Pos#3/9 # RepeatOption/10 s.Tag#3/11 )/8 >/1
    if( ! refalrts::ident_term(  ident_RepeatOption, context[10] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::svar_left( context[11], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Fetch/10 AsIs: s.Tag#3/11 HalfReuse: & ParseCommandLine\7$2\1$4\1/8 AsIs: >/1 } ' '/12 Tile{ HalfReuse: 'm'/4 }"ust appear one time"/13 )/15 Tile{ ]] }
    if( ! refalrts::alloc_char( context[12], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], "ust appear one time", 19 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[10], & Fetch_alias );
    refalrts::reinit_name( context[8], & gen_ParseCommandLine_L7S2L1S4L1_alias );
    refalrts::reinit_char( context[4], 'm' );
    refalrts::link_brackets( context[7], context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[15] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx # NoCppCompiler )
    // </0 & ParseCommandLine\7$2\1/4 (/7 s.Pos#3/9 # NoCppCompiler/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_NoCppCompiler, context[10] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 HalfReuse: 'p'/8 HalfReuse: 't'/1 } 'i'/11 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 }" -c or --cpp-command not found"/12 )/14 Tile{ ]] }
    if( ! refalrts::alloc_char( context[11], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], " -c or --cpp-command not found", 30 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'o' );
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_char( context[1], 't' );
    refalrts::reinit_char( context[0], 'o' );
    refalrts::reinit_char( context[4], 'n' );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx # NoSourceFile )
  // </0 & ParseCommandLine\7$2\1/4 (/7 s.Pos#3/9 # NoSourceFile/10 )/8 >/1
  if( ! refalrts::ident_term(  ident_NoSourceFile, context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'e'/10 HalfReuse: 'x'/8 HalfReuse: 'p'/1 } 'e'/11 Tile{ HalfReuse: 'c'/0 HalfReuse: 't'/4 }"ed source filename in command line"/12 )/14 Tile{ ]] }
  if( ! refalrts::alloc_char( context[11], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "ed source filename in command line", 34 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[10], 'e' );
  refalrts::reinit_char( context[8], 'x' );
  refalrts::reinit_char( context[1], 'p' );
  refalrts::reinit_char( context[0], 'c' );
  refalrts::reinit_char( context[4], 't' );
  refalrts::link_brackets( context[7], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_ParseCommandLine_L7S2L1(func_gen_ParseCommandLine_L7S2L1, "ParseCommandLine\\7$2\\1#2866188145:291805591");
refalrts::RefalFunction& gen_ParseCommandLine_L7S2L1_2866188145_291805591 = descr_gen_ParseCommandLine_L7S2L1;

static refalrts::FnResult func_gen_ParseCommandLine_L7(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) e.$
  // </0 & ParseCommandLine\7/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
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
    // ( ) ( ( e.idx ) ( e.idx ) ( e.idx ) ) e.idx
    // </0 & ParseCommandLine\7/4 (/7 )/8 (/11 (/15 e.CppCompiler#2/13 )/16 (/19 e.SrefCompiler#2/17 )/20 (/23 e.MainSource#2/21 )/24 )/12 e.Folders#2/2 >/1
    context[25] = context[9];
    context[26] = context[10];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[25], context[26] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[25], context[26] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[25], context[26] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[27] = context[5];
    context[28] = context[6];
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    // closed e.CppCompiler#2 as range 13
    // closed e.SrefCompiler#2 as range 17
    // closed e.MainSource#2 as range 21
    // closed e.Folders#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ParseCommandLine\7/4 (/7 )/8 {REMOVED TILE} )/12 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/11 AsIs: (/15 AsIs: e.CppCompiler#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.SrefCompiler#2/17 AsIs: )/20 AsIs: (/23 AsIs: e.MainSource#2/21 AsIs: )/24 } Tile{ AsIs: e.Folders#2/2 } Tile{ ]] }
    refalrts::reinit_ident( context[11], ident_Success );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[11], context[24] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) e.idx
  // </0 & ParseCommandLine\7/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Folders#2/2 >/1
  // closed e.Errors#2 as range 5
  // closed e.Bag#2 as range 9
  // closed e.Folders#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 e.Bag#2/9 )/12 e.Folders#2/2 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 } Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & ParseCommandLine\7$2\1/7 AsIs: e.Errors#2/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::reinit_ident( context[1], ident_Fails );
  refalrts::update_name( context[4], & Map_alias );
  refalrts::reinit_name( context[7], & gen_ParseCommandLine_L7S2L1_alias );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_ParseCommandLine_L7(func_gen_ParseCommandLine_L7, "ParseCommandLine\\7#2866188145:291805591");
refalrts::RefalFunction& gen_ParseCommandLine_L7_2866188145_291805591 = descr_gen_ParseCommandLine_L7;

static refalrts::FnResult func_ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 77 elems
  refalrts::Iter context[77];
  refalrts::zeros( context, 77 );
  // </0 & ParseCommandLine/4 e.Arguments#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arguments#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & GetOpt/6 (/7 (/8 # CppCompiler/9 # Required/10 'c'/11 (/12"cpp-command"/13 )/15 )/16 (/17 # SrefCompiler/18 # Required/19 's'/20 (/21"sref-command"/22 )/24 )/25 (/26 # SearchFolder/27 # Required/28 'd'/29 (/30"dir"/31 )/33 (/34"directory"/35 )/37 )/38 (/39 # RuntimeFolder/40 # Required/41 'D'/42 (/43"runtime-dir"/44 )/46 (/47"runtime-directory"/48 )/50 )/51 (/52 # CompilerOption/53 # Required/54 'X'/55 (/56"thru"/57 )/59 (/60"through"/61 )/63 )/64 )/65 Tile{ AsIs: e.Arguments#1/2 } >/66 </67 & Seq/68 & ParseCommandLine\1/69 & ParseCommandLine\2/70 & ParseCommandLine\3/71 & ParseCommandLine\4/72 & ParseCommandLine\5/73 & ParseCommandLine\6/74 & ParseCommandLine\7/75 >/76 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & GetOpt_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], ident_CppCompiler ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], "cpp-command", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[18], ident_SrefCompiler ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[19], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[22], context[23], "sref-command", 12 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[27], ident_SearchFolder ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[28], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[31], context[32], "dir", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[35], context[36], "directory", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[40], ident_RuntimeFolder ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[41], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'D' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[44], context[45], "runtime-dir", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[48], context[49], "runtime-directory", 17 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[50] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[51] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[52] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[53], ident_CompilerOption ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[54], ident_Required ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], 'X' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[56] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[57], context[58], "thru", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[59] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[60] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[61], context[62], "through", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[63] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[64] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[65] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[66] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[67] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[68], & Seq_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[69], & gen_ParseCommandLine_L1_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[70], & gen_ParseCommandLine_L2_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[71], & gen_ParseCommandLine_L3_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[72], & gen_ParseCommandLine_L4_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[73], & gen_ParseCommandLine_L5_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[74], & gen_ParseCommandLine_L6_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[75], & gen_ParseCommandLine_L7_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[76] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch_alias );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[76] );
  refalrts::push_stack( context[67] );
  refalrts::push_stack( context[66] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[7], context[65] );
  refalrts::link_brackets( context[52], context[64] );
  refalrts::link_brackets( context[60], context[63] );
  refalrts::link_brackets( context[56], context[59] );
  refalrts::link_brackets( context[39], context[51] );
  refalrts::link_brackets( context[47], context[50] );
  refalrts::link_brackets( context[43], context[46] );
  refalrts::link_brackets( context[26], context[38] );
  refalrts::link_brackets( context[34], context[37] );
  refalrts::link_brackets( context[30], context[33] );
  refalrts::link_brackets( context[17], context[25] );
  refalrts::link_brackets( context[21], context[24] );
  refalrts::link_brackets( context[8], context[16] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[66], context[76] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[65] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_ParseCommandLine(func_ParseCommandLine, "ParseCommandLine#0:0");
refalrts::RefalFunction& ParseCommandLine_0_0 = descr_ParseCommandLine;


//End of file
