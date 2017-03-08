// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_CmdComment = refalrts::ident_from_static("CmdComment");
const refalrts::RefalIdentifier ident_CmdFail = refalrts::ident_from_static("CmdFail");
const refalrts::RefalIdentifier ident_CmdIssueMemory = refalrts::ident_from_static("CmdIssueMemory");
const refalrts::RefalIdentifier ident_CmdOpenELoop = refalrts::ident_from_static("CmdOpenELoop");
const refalrts::RefalIdentifier ident_CmdSentence = refalrts::ident_from_static("CmdSentence");
const refalrts::RefalIdentifier ident_Function = refalrts::ident_from_static("Function");
const refalrts::RefalIdentifier ident_Junk = refalrts::ident_from_static("Junk");
const refalrts::RefalIdentifier ident_TkVariable = refalrts::ident_from_static("TkVariable");
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Seq("Seq", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_DelAccumulator("DelAccumulator", 0U, 0U);
static refalrts::ExternalReference ref_Max("Max", 0U, 0U);
static refalrts::ExternalReference ref_CreateHardPattern("CreateHardPattern", 0U, 0U);
static refalrts::ExternalReference ref_CreateGlobalGen("CreateGlobalGen", 0U, 0U);
static refalrts::ExternalReference ref_SplitGen("SplitGen", 0U, 0U);
static refalrts::ExternalReference ref_PatternComment("PatternComment", 0U, 0U);
static refalrts::ExternalReference ref_ReverseGen("ReverseGen", 0U, 0U);
static refalrts::ExternalReference ref_GenPattern("GenPattern", 0U, 0U);
static refalrts::ExternalReference ref_GenResult("GenResult", 0U, 0U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_Function_Conjoint_L1L1("HighLevelRASL-Function-Conjoint\\1\\1", 834265304U, 2877529394U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_Function_Conjoint_L1("HighLevelRASL-Function-Conjoint\\1", 834265304U, 2877529394U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_Function_Conjoint_L2("HighLevelRASL-Function-Conjoint\\2", 834265304U, 2877529394U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_Function_Conjoint_L3("HighLevelRASL-Function-Conjoint\\3", 834265304U, 2877529394U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_Function_Conjoint_L4L1("HighLevelRASL-Function-Conjoint\\4\\1", 834265304U, 2877529394U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_Function_Conjoint_L4("HighLevelRASL-Function-Conjoint\\4", 834265304U, 2877529394U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_Function_Conjoint_L5L1L1("HighLevelRASL-Function-Conjoint\\5\\1\\1", 834265304U, 2877529394U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_Function_Conjoint_L5L1("HighLevelRASL-Function-Conjoint\\5\\1", 834265304U, 2877529394U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_Function_Conjoint_L5("HighLevelRASL-Function-Conjoint\\5", 834265304U, 2877529394U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_Function_Conjoint_L6L1("HighLevelRASL-Function-Conjoint\\6\\1", 834265304U, 2877529394U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_Function_Conjoint_L6("HighLevelRASL-Function-Conjoint\\6", 834265304U, 2877529394U);
static refalrts::ExternalReference ref_HighLevelRASL_Function_Conjoint("HighLevelRASL-Function-Conjoint", 0U, 0U);
static refalrts::ExternalReference ref_ComposeVars("ComposeVars", 834265304U, 2877529394U);

static refalrts::FnResult func_gen_HighLevelRASL_Function_Conjoint_L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & HighLevelRASL-Function-Conjoint\1\1/4 (/7 e.HardGens#2/5 )/8 (/11 e.Result#2/9 )/12 e.HardGen#3/2 >/1
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
  // closed e.HardGens#2 as range 5
  // closed e.Result#2 as range 9
  // closed e.HardGen#3 as range 2
  //DEBUG: e.HardGens#2: 5
  //DEBUG: e.Result#2: 9
  //DEBUG: e.HardGen#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 Tile{ AsIs: e.HardGens#2/5 } (/14 e.HardGen#3/2/15 Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: (/7 } (/17 </18 & PatternComment/19 Tile{ AsIs: e.HardGen#3/2 } >/20 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/9 AsIs: )/12 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[15], context[16], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ref_PatternComment.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[17], context[8] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[13], context[4] );
  refalrts::link_brackets( context[14], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_Function_Conjoint_L1L1("HighLevelRASL-Function-Conjoint\\1\\1", 834265304U, 2877529394U, func_gen_HighLevelRASL_Function_Conjoint_L1L1);

static refalrts::FnResult func_gen_HighLevelRASL_Function_Conjoint_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & HighLevelRASL-Function-Conjoint\1/4 (/7 e.HardGens#2/5 )/8 (/11 (/15 e.Pattern#2/13 )/16 (/19 e.Result#2/17 )/20 )/12 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.HardGens#2 as range 5
  // closed e.Pattern#2 as range 13
  // closed e.Result#2 as range 17
  //DEBUG: e.HardGens#2: 5
  //DEBUG: e.Pattern#2: 13
  //DEBUG: e.Result#2: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & CreateHardPattern/21 Tile{ AsIs: e.Pattern#2/13 } >/22 </23 Tile{ HalfReuse: & @create_closure@/8 HalfReuse: & HighLevelRASL-Function-Conjoint\1\1/11 AsIs: (/15 } Tile{ AsIs: e.HardGens#2/5 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.Result#2/17 AsIs: )/20 HalfReuse: >/12 AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[21], ref_CreateHardPattern.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], refalrts::create_closure );
  refalrts::reinit_name( context[11], ref_gen_HighLevelRASL_Function_Conjoint_L1L1.ref.function );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_Function_Conjoint_L1("HighLevelRASL-Function-Conjoint\\1", 834265304U, 2877529394U, func_gen_HighLevelRASL_Function_Conjoint_L1);

static refalrts::FnResult func_gen_HighLevelRASL_Function_Conjoint_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & HighLevelRASL-Function-Conjoint\2/4 (/7 e.HardPatterns#2/5 )/8 e.SentenceTails#2/2 >/1
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
  // closed e.HardPatterns#2 as range 5
  // closed e.SentenceTails#2 as range 2
  //DEBUG: e.HardPatterns#2: 5
  //DEBUG: e.SentenceTails#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateGlobalGen/4 } Tile{ AsIs: e.HardPatterns#2/5 } Tile{ AsIs: >/1 } Tile{ AsIs: e.SentenceTails#2/2 } Tile{ ]] }
  refalrts::update_name( context[4], ref_CreateGlobalGen.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_Function_Conjoint_L2("HighLevelRASL-Function-Conjoint\\2", 834265304U, 2877529394U, func_gen_HighLevelRASL_Function_Conjoint_L2);

static refalrts::FnResult func_gen_HighLevelRASL_Function_Conjoint_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & HighLevelRASL-Function-Conjoint\3/4 (/7 e.FastGen#2/5 )/8 (/11 e.GlobalGen#2/9 )/12 e.SentenceTails#2/2 >/1
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
  // closed e.FastGen#2 as range 5
  // closed e.GlobalGen#2 as range 9
  // closed e.SentenceTails#2 as range 2
  //DEBUG: e.FastGen#2: 5
  //DEBUG: e.GlobalGen#2: 9
  //DEBUG: e.SentenceTails#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # CmdComment/7 }"FAST GEN:"/13 </15 & PatternComment/16 Tile{ AsIs: e.FastGen#2/5 } >/17 )/18 (/19 # CmdComment/20"GLOBAL GEN:"/21 </23 & PatternComment/24 e.GlobalGen#2/9/25 >/27 )/28 )/29 (/30 </31 Tile{ HalfReuse: & SplitGen/8 AsIs: (/11 AsIs: e.GlobalGen#2/9 AsIs: )/12 AsIs: e.SentenceTails#2/2 AsIs: >/1 } )/32 e.SentenceTails#2/2/33 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[13], context[14], "FAST GEN:", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_PatternComment.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[20], ident_CmdComment ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[21], context[22], "GLOBAL GEN:", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], ref_PatternComment.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[25], context[26], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[33], context[34], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_CmdComment );
  refalrts::reinit_name( context[8], ref_SplitGen.ref.function );
  refalrts::link_brackets( context[30], context[32] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[31] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[29] );
  refalrts::link_brackets( context[19], context[28] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[4], context[18] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[17], context[31] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_Function_Conjoint_L3("HighLevelRASL-Function-Conjoint\\3", 834265304U, 2877529394U, func_gen_HighLevelRASL_Function_Conjoint_L3);

static refalrts::FnResult func_gen_HighLevelRASL_Function_Conjoint_L4L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & HighLevelRASL-Function-Conjoint\4\1/4 (/7 (/11 e.Substitute#3/9 )/12 e.Substs#3/5 )/8 (/15 (/19 e.HardGenComment#3/17 )/20 (/23 e.Result#3/21 )/24 )/16 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
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
  context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[13], context[14] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitute#3 as range 9
  // closed e.Substs#3 as range 5
  // closed e.HardGenComment#3 as range 17
  // closed e.Result#3 as range 21
  //DEBUG: e.Substitute#3: 9
  //DEBUG: e.Substs#3: 5
  //DEBUG: e.HardGenComment#3: 17
  //DEBUG: e.Result#3: 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL-Function-Conjoint\4\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 AsIs: e.Substs#3/5 AsIs: )/8 } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Substitute#3/9 } Tile{ HalfReuse: )/15 AsIs: (/19 AsIs: e.HardGenComment#3/17 AsIs: )/20 AsIs: (/23 AsIs: e.Result#3/21 AsIs: )/24 AsIs: )/16 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[15] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[12], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_Function_Conjoint_L4L1("HighLevelRASL-Function-Conjoint\\4\\1", 834265304U, 2877529394U, func_gen_HighLevelRASL_Function_Conjoint_L4L1);

static refalrts::FnResult func_gen_HighLevelRASL_Function_Conjoint_L4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & HighLevelRASL-Function-Conjoint\4/4 s.FnGenInitSubst#1/5 s.FnGenSubst#1/6 (/9 e.Name#1/7 )/10 (/13 e.Comments#2/11 )/14 (/17 (/21 e.CommonPattern#2/19 )/22 e.SentSubsts#2/15 )/18 e.SentenceTails#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Name#1 as range 7
  // closed e.Comments#2 as range 11
  // closed e.CommonPattern#2 as range 19
  // closed e.SentSubsts#2 as range 15
  // closed e.SentenceTails#2 as range 2
  //DEBUG: s.FnGenInitSubst#1: 5
  //DEBUG: s.FnGenSubst#1: 6
  //DEBUG: e.Name#1: 7
  //DEBUG: e.Comments#2: 11
  //DEBUG: e.CommonPattern#2: 19
  //DEBUG: e.SentSubsts#2: 15
  //DEBUG: e.SentenceTails#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/21 } Tile{ AsIs: e.Comments#2/11 } Tile{ AsIs: )/14 AsIs: (/17 } Tile{ AsIs: </0 Reuse: & GenPattern/4 AsIs: s.FnGenInitSubst#1/5 AsIs: s.FnGenSubst#1/6 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 HalfReuse: </13 } & ReverseGen/23 Tile{ AsIs: e.CommonPattern#2/19 } >/24 >/25 )/26 </27 & DelAccumulator/28 </29 & MapReduce/30 & HighLevelRASL-Function-Conjoint\4\1/31 Tile{ HalfReuse: (/22 AsIs: e.SentSubsts#2/15 AsIs: )/18 AsIs: e.SentenceTails#2/2 AsIs: >/1 } >/32 Tile{ ]] }
  if( ! refalrts::alloc_name( context[23], ref_ReverseGen.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], ref_DelAccumulator.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[30], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], ref_gen_HighLevelRASL_Function_Conjoint_L4L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_GenPattern.ref.function );
  refalrts::reinit_open_call( context[13] );
  refalrts::reinit_open_bracket( context[22] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[29] );
  refalrts::link_brackets( context[22], context[18] );
  refalrts::link_brackets( context[17], context[26] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[21], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[22], context[1] );
  res = refalrts::splice_evar( res, context[24], context[31] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_Function_Conjoint_L4("HighLevelRASL-Function-Conjoint\\4", 834265304U, 2877529394U, func_gen_HighLevelRASL_Function_Conjoint_L4);

static refalrts::FnResult func_gen_HighLevelRASL_Function_Conjoint_L5L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & HighLevelRASL-Function-Conjoint\5\1\1/4 s.MaxMemory#3/5 (/8 e.HardGenComment#3/6 )/9 (/12 # CmdIssueMemory/14 s.Memory#4/15 )/13 e.Commands#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = refalrts::ident_left(  ident_CmdIssueMemory, context[10], context[11] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.HardGenComment#3 as range 6
  // closed e.Commands#4 as range 2
  if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[10], context[11] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.MaxMemory#3: 5
  //DEBUG: e.HardGenComment#3: 6
  //DEBUG: e.Commands#4: 2
  //DEBUG: s.Memory#4: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Memory#4/15 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Max/4 AsIs: s.MaxMemory#3/5 HalfReuse: s.Memory4 #15/8 } >/16 (/17 Tile{ HalfReuse: # CmdSentence/9 AsIs: (/12 Reuse: # CmdComment/14 } Tile{ AsIs: e.HardGenComment#3/6 } Tile{ AsIs: )/13 AsIs: e.Commands#4/2 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Max.ref.function );
  refalrts::reinit_svar( context[8], context[15] );
  refalrts::reinit_ident( context[9], ident_CmdSentence );
  refalrts::update_ident( context[14], ident_CmdComment );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[17], context[1] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[13];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_Function_Conjoint_L5L1L1("HighLevelRASL-Function-Conjoint\\5\\1\\1", 834265304U, 2877529394U, func_gen_HighLevelRASL_Function_Conjoint_L5L1L1);

static refalrts::FnResult func_gen_HighLevelRASL_Function_Conjoint_L5L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & HighLevelRASL-Function-Conjoint\5\1/4 s.FnGenResult#1/21 s.FnGenSubst#1/22 s.ContextSize#2/23 (/26 e.MarkedPattern#2/24 )/27 (/30 e.Vars#2/28 )/31 s.MaxMemory#3/32 (/7 (/11 e.Substitute#3/9 )/12 (/15 e.HardGenComment#3/13 )/16 (/19 e.Result#3/17 )/20 )/8 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitute#3 as range 9
  // closed e.HardGenComment#3 as range 13
  // closed e.Result#3 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  context[28] = 0;
  context[29] = 0;
  context[30] = refalrts::brackets_left( context[28], context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[30], context[31]);
  // closed e.MarkedPattern#2 as range 24
  // closed e.Vars#2 as range 28
  if( ! refalrts::svar_left( context[32], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Substitute#3: 9
  //DEBUG: e.HardGenComment#3: 13
  //DEBUG: e.Result#3: 17
  //DEBUG: s.FnGenResult#1: 21
  //DEBUG: s.FnGenSubst#1: 22
  //DEBUG: s.ContextSize#2: 23
  //DEBUG: e.MarkedPattern#2: 24
  //DEBUG: e.Vars#2: 28
  //DEBUG: s.MaxMemory#3: 32

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.FnGenResult#1/21 s.FnGenSubst#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </33 & GenResult/34 Tile{ HalfReuse: s.FnGenResult1 #21/16 AsIs: (/19 AsIs: e.Result#3/17 AsIs: )/20 HalfReuse: </8 HalfReuse: s.FnGenSubst1 #22/1 } Tile{ AsIs: s.ContextSize#2/23 HalfReuse: </26 } Tile{ HalfReuse: & ComposeVars/27 AsIs: (/30 } Tile{ AsIs: e.MarkedPattern#2/24 } Tile{ HalfReuse: )/7 AsIs: (/11 AsIs: e.Substitute#3/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Vars#2/28 } )/35 >/36 (/37 )/38 >/39 >/40 </41 & @create_closure@/42 Tile{ HalfReuse: & HighLevelRASL-Function-Conjoint\5\1\1/31 AsIs: s.MaxMemory#3/32 } (/43 Tile{ AsIs: e.HardGenComment#3/13 } )/44 >/45 >/46 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], ref_GenResult.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[42], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[44] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[46] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::reinit_svar( context[16], context[21] );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_svar( context[1], context[22] );
  refalrts::reinit_open_call( context[26] );
  refalrts::reinit_name( context[27], ref_ComposeVars.ref.function );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_name( context[31], ref_gen_HighLevelRASL_Function_Conjoint_L5L1L1.ref.function );
  refalrts::push_stack( context[46] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[45] );
  refalrts::push_stack( context[41] );
  refalrts::link_brackets( context[43], context[44] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[33] );
  refalrts::push_stack( context[39] );
  refalrts::push_stack( context[8] );
  refalrts::link_brackets( context[37], context[38] );
  refalrts::push_stack( context[36] );
  refalrts::push_stack( context[26] );
  refalrts::link_brackets( context[15], context[35] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[30], context[7] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[44], context[46] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[43], context[43] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[35], context[42] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[27], context[30] );
  res = refalrts::splice_evar( res, context[23], context[26] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_Function_Conjoint_L5L1("HighLevelRASL-Function-Conjoint\\5\\1", 834265304U, 2877529394U, func_gen_HighLevelRASL_Function_Conjoint_L5L1);

static refalrts::FnResult func_gen_HighLevelRASL_Function_Conjoint_L5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & HighLevelRASL-Function-Conjoint\5/4 s.FnGenResult#1/5 s.FnGenSubst#1/6 (/9 e.Comments#2/7 )/10 (/13 s.ContextSize#2/15 (/18 e.Vars#2/16 )/19 (/22 e.MarkedPattern#2/20 )/23 e.CommonMatchCommands#2/11 )/14 e.SentencesWithSubst#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Comments#2 as range 7
  // closed e.SentencesWithSubst#2 as range 2
  if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[11], context[12] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[11], context[12] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.Vars#2 as range 16
  // closed e.MarkedPattern#2 as range 20
  // closed e.CommonMatchCommands#2 as range 11
  //DEBUG: s.FnGenResult#1: 5
  //DEBUG: s.FnGenSubst#1: 6
  //DEBUG: e.Comments#2: 7
  //DEBUG: e.SentencesWithSubst#2: 2
  //DEBUG: s.ContextSize#2: 15
  //DEBUG: e.Vars#2: 16
  //DEBUG: e.MarkedPattern#2: 20
  //DEBUG: e.CommonMatchCommands#2: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ContextSize#2/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/9 } Tile{ AsIs: e.Comments#2/7 } Tile{ AsIs: e.CommonMatchCommands#2/11 } Tile{ AsIs: )/10 HalfReuse: </13 } & MapReduce/24 </25 Tile{ HalfReuse: & @create_closure@/0 Reuse: & HighLevelRASL-Function-Conjoint\5\1/4 AsIs: s.FnGenResult#1/5 AsIs: s.FnGenSubst#1/6 } Tile{ HalfReuse: s.ContextSize2 #15/19 AsIs: (/22 AsIs: e.MarkedPattern#2/20 AsIs: )/23 } Tile{ AsIs: (/18 } Tile{ AsIs: e.Vars#2/16 } )/26 >/27 Tile{ HalfReuse: s.ContextSize2 #15/14 AsIs: e.SentencesWithSubst#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[24], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[13] );
  refalrts::reinit_name( context[0], refalrts::create_closure );
  refalrts::update_name( context[4], ref_gen_HighLevelRASL_Function_Conjoint_L5L1.ref.function );
  refalrts::reinit_svar( context[19], context[15] );
  refalrts::reinit_svar( context[14], context[15] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[25] );
  refalrts::link_brackets( context[18], context[26] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_Function_Conjoint_L5("HighLevelRASL-Function-Conjoint\\5", 834265304U, 2877529394U, func_gen_HighLevelRASL_Function_Conjoint_L5);

static refalrts::FnResult func_gen_HighLevelRASL_Function_Conjoint_L6L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & HighLevelRASL-Function-Conjoint\6\1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx ( # CmdOpenELoop e.idx )
    // </0 & HighLevelRASL-Function-Conjoint\6\1/4 e.Commands#3/2 (/7 # CmdOpenELoop/9 e.OpenELoop#3/5 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[10], context[11] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  ident_CmdOpenELoop, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Commands#3 as range 10(2)
    // closed e.OpenELoop#3 as range 5
    //DEBUG: e.Commands#3: 2
    //DEBUG: e.OpenELoop#3: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#3/10(2) } Tile{ AsIs: (/7 AsIs: # CmdOpenELoop/9 AsIs: e.OpenELoop#3/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # CmdFail/0 HalfReuse: )/4 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[1] );
    refalrts::reinit_ident( context[0], ident_CmdFail );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::link_brackets( context[1], context[4] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & HighLevelRASL-Function-Conjoint\6\1/4 e.LastSentence#3/2 >/1
  // closed e.LastSentence#3 as range 2
  //DEBUG: e.LastSentence#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL-Function-Conjoint\6\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.LastSentence#3/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_Function_Conjoint_L6L1("HighLevelRASL-Function-Conjoint\\6\\1", 834265304U, 2877529394U, func_gen_HighLevelRASL_Function_Conjoint_L6L1);

static refalrts::FnResult func_gen_HighLevelRASL_Function_Conjoint_L6(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & HighLevelRASL-Function-Conjoint\6/4 s.ScopeClass#1/10 (/13 e.Name#1/11 )/14 (/17 e.Prefix#2/15 )/18 s.MaxMemory#2/19 e.Sentences#2/2 (/7 # CmdSentence/9 e.LastSentence#2/5 )/8 >/1
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
  context[9] = refalrts::ident_left(  ident_CmdSentence, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.LastSentence#2 as range 5
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.Name#1 as range 11
  // closed e.Prefix#2 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#2 as range 2
  //DEBUG: e.LastSentence#2: 5
  //DEBUG: s.ScopeClass#1: 10
  //DEBUG: e.Name#1: 11
  //DEBUG: e.Prefix#2: 15
  //DEBUG: s.MaxMemory#2: 19
  //DEBUG: e.Sentences#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 AsIs: (/17 } Tile{ HalfReuse: # CmdIssueMemory/18 AsIs: s.MaxMemory#2/19 } )/20 Tile{ AsIs: e.Prefix#2/15 } Tile{ AsIs: e.Sentences#2/2 } Tile{ HalfReuse: </7 HalfReuse: & Fetch/9 AsIs: e.LastSentence#2/5 HalfReuse: & HighLevelRASL-Function-Conjoint\6\1/8 AsIs: >/1 } )/21 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Function );
  refalrts::reinit_ident( context[18], ident_CmdIssueMemory );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[9], ref_Fetch.ref.function );
  refalrts::reinit_name( context[8], ref_gen_HighLevelRASL_Function_Conjoint_L6L1.ref.function );
  refalrts::link_brackets( context[0], context[21] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[17], context[20] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_Function_Conjoint_L6("HighLevelRASL-Function-Conjoint\\6", 834265304U, 2877529394U, func_gen_HighLevelRASL_Function_Conjoint_L6);

static refalrts::FnResult func_HighLevelRASL_Function_Conjoint(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & HighLevelRASL-Function-Conjoint/4 s.FnGenInitSubst#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/9 )/12 e.Sentences#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Name#1 as range 9
  // closed e.Sentences#1 as range 2
  //DEBUG: s.FnGenInitSubst#1: 5
  //DEBUG: s.FnGenSubst#1: 6
  //DEBUG: s.FnGenResult#1: 7
  //DEBUG: s.ScopeClass#1: 8
  //DEBUG: e.Name#1: 9
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & Fetch/14 Tile{ AsIs: e.Sentences#1/2 } </15 & Seq/16 (/17 & MapReduce/18 & HighLevelRASL-Function-Conjoint\1/19 (/20 )/21 )/22 & HighLevelRASL-Function-Conjoint\2/23 & HighLevelRASL-Function-Conjoint\3/24 </25 Tile{ HalfReuse: & @create_closure@/0 Reuse: & HighLevelRASL-Function-Conjoint\4/4 AsIs: s.FnGenInitSubst#1/5 AsIs: s.FnGenSubst#1/6 } (/26 e.Name#1/9/27 )/29 >/30 </31 & @create_closure@/32 & HighLevelRASL-Function-Conjoint\5/33 Tile{ AsIs: s.FnGenResult#1/7 } s.FnGenSubst#1/6/34 >/35 </36 & @create_closure@/37 & HighLevelRASL-Function-Conjoint\6/38 Tile{ AsIs: s.ScopeClass#1/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } >/39 >/40 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ref_gen_HighLevelRASL_Function_Conjoint_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], ref_gen_HighLevelRASL_Function_Conjoint_L2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], ref_gen_HighLevelRASL_Function_Conjoint_L3.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[27], context[28], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], ref_gen_HighLevelRASL_Function_Conjoint_L5.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[34], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[37], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[38], ref_gen_HighLevelRASL_Function_Conjoint_L6.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure );
  refalrts::update_name( context[4], ref_gen_HighLevelRASL_Function_Conjoint_L4.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[39] );
  refalrts::push_stack( context[36] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[25] );
  refalrts::link_brackets( context[26], context[29] );
  refalrts::link_brackets( context[17], context[22] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[39], context[40] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[34], context[38] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[26], context[33] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[15], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASL_Function_Conjoint("HighLevelRASL-Function-Conjoint", 0U, 0U, func_HighLevelRASL_Function_Conjoint);

static refalrts::FnResult func_ComposeVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 66 elems
  refalrts::Iter context[66];
  refalrts::zeros( context, 66 );
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ )
  // </0 & ComposeVars/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 >/1
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
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  do {
    // ( e.idx ) ( e.idx ) ( e.idx )
    // </0 & ComposeVars/4 (/7 e.MarkedPattern-B#1/17 (/21 # TkVariable/23 s.Mode#1/24 e.Name#1/19 s.Offset#1/25 )/22 e.MarkedPattern-E#1/5 )/8 (/11 e.Substitute-B#1/26 (/30 s.Tag#1/32 (/35 e.Name#1/38 )/36 '$'/37 e.Subst#1/28 )/31 e.Substitute-E#1/9 )/12 (/15 e.Vars-B#1/40 (/44 s.Mode#1/46 (/49 e.Name#1/51 )/50 s.Offset#1/53 )/45 e.Vars-E#1/13 )/16 >/1
    context[54] = context[5];
    context[55] = context[6];
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop();
    do {
      context[56] = context[54];
      context[57] = context[55];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[56], context[57] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      context[23] = refalrts::ident_left(  ident_TkVariable, context[19], context[20] );
      if( ! context[23] )
        continue;
      // closed e.MarkedPattern-E#1 as range 56(5)
      if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
        continue;
      if( ! refalrts::svar_right( context[25], context[19], context[20] ) )
        continue;
      // closed e.Name#1 as range 19
      context[58] = context[9];
      context[59] = context[10];
      context[26] = 0;
      context[27] = 0;
      refalrts::start_e_loop();
      do {
        context[60] = context[58];
        context[61] = context[59];
        context[28] = 0;
        context[29] = 0;
        context[30] = refalrts::brackets_left( context[28], context[29], context[60], context[61] );
        if( ! context[30] )
          continue;
        refalrts::bracket_pointers(context[30], context[31]);
        // closed e.Substitute-E#1 as range 60(9)
        if( ! refalrts::svar_left( context[32], context[28], context[29] ) )
          continue;
        context[33] = 0;
        context[34] = 0;
        context[35] = refalrts::brackets_left( context[33], context[34], context[28], context[29] );
        if( ! context[35] )
          continue;
        refalrts::bracket_pointers(context[35], context[36]);
        context[37] = refalrts::char_left( '$', context[28], context[29] );
        if( ! context[37] )
          continue;
        if( ! refalrts::repeated_evar_left( context[38], context[39], context[19], context[20], context[33], context[34] ) )
          continue;
        if( ! refalrts::empty_seq( context[33], context[34] ) )
          continue;
        // closed e.Subst#1 as range 28
        context[62] = context[13];
        context[63] = context[14];
        context[40] = 0;
        context[41] = 0;
        refalrts::start_e_loop();
        do {
          context[64] = context[62];
          context[65] = context[63];
          context[42] = 0;
          context[43] = 0;
          context[44] = refalrts::brackets_left( context[42], context[43], context[64], context[65] );
          if( ! context[44] )
            continue;
          refalrts::bracket_pointers(context[44], context[45]);
          if( ! refalrts::repeated_stvar_left( context[46], context[24], context[42], context[43] ) )
            continue;
          context[47] = 0;
          context[48] = 0;
          context[49] = refalrts::brackets_left( context[47], context[48], context[42], context[43] );
          if( ! context[49] )
            continue;
          refalrts::bracket_pointers(context[49], context[50]);
          if( ! refalrts::repeated_evar_left( context[51], context[52], context[38], context[39], context[47], context[48] ) )
            continue;
          if( ! refalrts::empty_seq( context[47], context[48] ) )
            continue;
          if( ! refalrts::repeated_stvar_left( context[53], context[25], context[42], context[43] ) )
            continue;
          if( ! refalrts::empty_seq( context[42], context[43] ) )
            continue;
          // closed e.Vars-E#1 as range 64(13)
          //DEBUG: e.MarkedPattern-B#1: 17
          //DEBUG: e.MarkedPattern-E#1: 5
          //DEBUG: s.Mode#1: 24
          //DEBUG: s.Offset#1: 25
          //DEBUG: e.Name#1: 19
          //DEBUG: e.Substitute-B#1: 26
          //DEBUG: e.Substitute-E#1: 9
          //DEBUG: s.Tag#1: 32
          //DEBUG: e.Subst#1: 28
          //DEBUG: e.Vars-B#1: 40
          //DEBUG: e.Vars-E#1: 13

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/24 e.Name#1/19 s.Offset#1/25 {REMOVED TILE} {REMOVED TILE} (/30 s.Tag#1/32 (/35 e.Name#1/38 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/46 (/49 e.Name#1/51 )/50 s.Offset#1/53 )/45 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Junk/7 AsIs: e.MarkedPattern-B#1/17 HalfReuse: )/21 HalfReuse: (/23 } Tile{ HalfReuse: s.Tag1 #32/36 HalfReuse: s.Offset1 #53/37 AsIs: e.Subst#1/28 AsIs: )/31 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ComposeVars/44 } Tile{ HalfReuse: (/22 AsIs: e.MarkedPattern-E#1/56(5) AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Substitute-B#1/26 } Tile{ AsIs: e.Substitute-E#1/60(9) } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Vars-B#1/40 } Tile{ AsIs: e.Vars-E#1/64(13) } Tile{ AsIs: )/16 AsIs: >/1 ]] }
          refalrts::reinit_open_bracket( context[4] );
          refalrts::reinit_ident( context[7], ident_Junk );
          refalrts::reinit_close_bracket( context[21] );
          refalrts::reinit_open_bracket( context[23] );
          refalrts::reinit_svar( context[36], context[32] );
          refalrts::reinit_svar( context[37], context[53] );
          refalrts::reinit_name( context[44], ref_ComposeVars.ref.function );
          refalrts::reinit_open_bracket( context[22] );
          refalrts::push_stack( context[1] );
          refalrts::push_stack( context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[22], context[8] );
          refalrts::link_brackets( context[23], context[31] );
          refalrts::link_brackets( context[4], context[21] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_evar( res, context[64], context[65] );
          res = refalrts::splice_evar( res, context[40], context[41] );
          res = refalrts::splice_evar( res, context[12], context[15] );
          res = refalrts::splice_evar( res, context[60], context[61] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[22], context[11] );
          res = refalrts::splice_evar( res, context[44], context[44] );
          res = refalrts::splice_evar( res, context[0], context[0] );
          res = refalrts::splice_evar( res, context[36], context[31] );
          res = refalrts::splice_evar( res, context[4], context[23] );
          refalrts::splice_to_freelist_open( trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[40], context[41], context[62], context[63] ) );
      } while ( refalrts::open_evar_advance( context[26], context[27], context[58], context[59] ) );
    } while ( refalrts::open_evar_advance( context[17], context[18], context[54], context[55] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( ) ( )
  // </0 & ComposeVars/4 (/7 e.MarkedPattern#1/5 )/8 (/11 )/12 (/15 )/16 >/1
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern#1 as range 5
  //DEBUG: e.MarkedPattern#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 )/12 (/15 )/16 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Junk/7 AsIs: e.MarkedPattern#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_Junk );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ComposeVars("ComposeVars", 834265304U, 2877529394U, func_ComposeVars);


//End of file
