// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_CmdFail = refalrts::ident_from_static("CmdFail");
const refalrts::RefalIdentifier ident_CmdIssueMem = refalrts::ident_from_static("CmdIssueMem");
const refalrts::RefalIdentifier ident_CmdOpenELoop = refalrts::ident_from_static("CmdOpenELoop");
const refalrts::RefalIdentifier ident_CmdSentence = refalrts::ident_from_static("CmdSentence");
const refalrts::RefalIdentifier ident_Function = refalrts::ident_from_static("Function");
extern refalrts::RefalFunction& Map_0_0;
#define Map_alias Map_0_0
#define Map_str "Map#0:0"

extern refalrts::RefalFunction& Fetch_0_0;
#define Fetch_alias Fetch_0_0
#define Fetch_str "Fetch#0:0"

extern refalrts::RefalFunction& Seq_0_0;
#define Seq_alias Seq_0_0
#define Seq_str "Seq#0:0"

extern refalrts::RefalFunction& MapReduce_0_0;
#define MapReduce_alias MapReduce_0_0
#define MapReduce_str "MapReduce#0:0"

extern refalrts::RefalFunction& Max_0_0;
#define Max_alias Max_0_0
#define Max_str "Max#0:0"

extern refalrts::RefalFunction& GenPattern_0_0;
#define GenPattern_alias GenPattern_0_0
#define GenPattern_str "GenPattern#0:0"

extern refalrts::RefalFunction& GenResult_0_0;
#define GenResult_alias GenResult_0_0
#define GenResult_str "GenResult#0:0"

extern refalrts::RefalFunction& gen_HighLevelRASL_Function_Disjoint_L1_2690989127_1541861332;
#define gen_HighLevelRASL_Function_Disjoint_L1_alias gen_HighLevelRASL_Function_Disjoint_L1_2690989127_1541861332

extern refalrts::RefalFunction& gen_HighLevelRASL_Function_Disjoint_L2_2690989127_1541861332;
#define gen_HighLevelRASL_Function_Disjoint_L2_alias gen_HighLevelRASL_Function_Disjoint_L2_2690989127_1541861332

extern refalrts::RefalFunction& gen_HighLevelRASL_Function_Disjoint_L3L1_2690989127_1541861332;
#define gen_HighLevelRASL_Function_Disjoint_L3L1_alias gen_HighLevelRASL_Function_Disjoint_L3L1_2690989127_1541861332

extern refalrts::RefalFunction& gen_HighLevelRASL_Function_Disjoint_L3_2690989127_1541861332;
#define gen_HighLevelRASL_Function_Disjoint_L3_alias gen_HighLevelRASL_Function_Disjoint_L3_2690989127_1541861332

extern refalrts::RefalFunction& HighLevelRASL_Function_Disjoint_0_0;
#define HighLevelRASL_Function_Disjoint_alias HighLevelRASL_Function_Disjoint_0_0


static refalrts::FnResult func_gen_HighLevelRASL_Function_Disjoint_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & HighLevelRASL-Function-Disjoint\1/4 s.FnGenResult#1/21 s.FnGenInitSubst#1/22 s.FnGenSubst#1/23 (/19 e.Name#1/17 )/20 (/7 (/11 e.Pattern#2/9 )/12 (/15 e.Result#2/13 )/16 )/8 >/1
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
  context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 17
  // closed e.Pattern#2 as range 9
  // closed e.Result#2 as range 13
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.FnGenResult#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 } & GenResult/24 Tile{ HalfReuse: s.FnGenResult1 #21/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 HalfReuse: </8 HalfReuse: & GenPattern/1 } Tile{ AsIs: s.FnGenInitSubst#1/22 AsIs: s.FnGenSubst#1/23 AsIs: (/19 AsIs: e.Name#1/17 AsIs: )/20 } Tile{ AsIs: e.Pattern#2/9 } Tile{ HalfReuse: >/7 HalfReuse: >/11 } )/25 Tile{ ]] }
  if( ! refalrts::alloc_name( context[24], & GenResult_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_svar( context[12], context[21] );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[1], & GenPattern_alias );
  refalrts::reinit_close_call( context[7] );
  refalrts::reinit_close_call( context[11] );
  refalrts::link_brackets( context[0], context[25] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[8] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[22], context[20] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_HighLevelRASL_Function_Disjoint_L1(func_gen_HighLevelRASL_Function_Disjoint_L1, "HighLevelRASL-Function-Disjoint\\1#2690989127:1541861332");
refalrts::RefalFunction& gen_HighLevelRASL_Function_Disjoint_L1_2690989127_1541861332 = descr_gen_HighLevelRASL_Function_Disjoint_L1;

static refalrts::FnResult func_gen_HighLevelRASL_Function_Disjoint_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & HighLevelRASL-Function-Disjoint\2/4 s.MaxMemory#2/14 (/7 (/11 # CmdIssueMem/13 s.Memory#2/15 )/12 e.Sentence#2/5 )/8 >/1
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
  context[13] = refalrts::ident_left(  ident_CmdIssueMem, context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentence#2 as range 5
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Memory#2/15 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Max/4 AsIs: s.MaxMemory#2/14 HalfReuse: s.Memory2 #15/7 HalfReuse: >/11 HalfReuse: (/13 } Tile{ HalfReuse: # CmdSentence/12 AsIs: e.Sentence#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::update_name( context[4], & Max_alias );
  refalrts::reinit_svar( context[7], context[15] );
  refalrts::reinit_close_call( context[11] );
  refalrts::reinit_open_bracket( context[13] );
  refalrts::reinit_ident( context[12], ident_CmdSentence );
  refalrts::link_brackets( context[13], context[8] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[8] );
  refalrts::splice_to_freelist_open( context[13], res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_HighLevelRASL_Function_Disjoint_L2(func_gen_HighLevelRASL_Function_Disjoint_L2, "HighLevelRASL-Function-Disjoint\\2#2690989127:1541861332");
refalrts::RefalFunction& gen_HighLevelRASL_Function_Disjoint_L2_2690989127_1541861332 = descr_gen_HighLevelRASL_Function_Disjoint_L2;

static refalrts::FnResult func_gen_HighLevelRASL_Function_Disjoint_L3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & HighLevelRASL-Function-Disjoint\3\1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx ( # CmdOpenELoop e.idx )
    // </0 & HighLevelRASL-Function-Disjoint\3\1/4 e.Commands#3/2 (/7 # CmdOpenELoop/9 e.OpenELoop#3/5 )/8 >/1
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
  // </0 & HighLevelRASL-Function-Disjoint\3\1/4 e.LastSentence#3/2 >/1
  // closed e.LastSentence#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL-Function-Disjoint\3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.LastSentence#3/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_HighLevelRASL_Function_Disjoint_L3L1(func_gen_HighLevelRASL_Function_Disjoint_L3L1, "HighLevelRASL-Function-Disjoint\\3\\1#2690989127:1541861332");
refalrts::RefalFunction& gen_HighLevelRASL_Function_Disjoint_L3L1_2690989127_1541861332 = descr_gen_HighLevelRASL_Function_Disjoint_L3L1;

static refalrts::FnResult func_gen_HighLevelRASL_Function_Disjoint_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & HighLevelRASL-Function-Disjoint\3/4 s.ScopeClass#1/10 (/13 e.Name#1/11 )/14 s.MaxMemory#2/15 e.Sentences#2/2 (/7 # CmdSentence/9 e.LastSentence#2/5 )/8 >/1
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
  // closed e.Name#1 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } (/16 # CmdIssueMem/17 Tile{ AsIs: s.MaxMemory#2/15 } )/18 Tile{ AsIs: e.Sentences#2/2 } Tile{ HalfReuse: </7 HalfReuse: & Fetch/9 AsIs: e.LastSentence#2/5 HalfReuse: & HighLevelRASL-Function-Disjoint\3\1/8 AsIs: >/1 } )/19 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[17], ident_CmdIssueMem ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Function );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[9], & Fetch_alias );
  refalrts::reinit_name( context[8], & gen_HighLevelRASL_Function_Disjoint_L3L1_alias );
  refalrts::link_brackets( context[0], context[19] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[16], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_HighLevelRASL_Function_Disjoint_L3(func_gen_HighLevelRASL_Function_Disjoint_L3, "HighLevelRASL-Function-Disjoint\\3#2690989127:1541861332");
refalrts::RefalFunction& gen_HighLevelRASL_Function_Disjoint_L3_2690989127_1541861332 = descr_gen_HighLevelRASL_Function_Disjoint_L3;

static refalrts::FnResult func_HighLevelRASL_Function_Disjoint(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & HighLevelRASL-Function-Disjoint/4 s.FnGenInitSubst#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/9 )/12 e.Sentences#1/2 >/1
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Sentences#1/2 } </13 & Seq/14 (/15 & Map/16 </17 & @create_closure@/18 & HighLevelRASL-Function-Disjoint\1/19 Tile{ AsIs: s.FnGenResult#1/7 } Tile{ AsIs: s.FnGenInitSubst#1/5 AsIs: s.FnGenSubst#1/6 } (/20 e.Name#1/9/21 )/23 >/24 )/25 (/26 & MapReduce/27 & HighLevelRASL-Function-Disjoint\2/28 0/29 )/30 </31 & @create_closure@/32 & HighLevelRASL-Function-Disjoint\3/33 Tile{ AsIs: s.ScopeClass#1/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } >/34 >/35 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], & Seq_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], & Map_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], & gen_HighLevelRASL_Function_Disjoint_L1_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[21], context[22], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], & MapReduce_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], & gen_HighLevelRASL_Function_Disjoint_L2_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[29], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], & gen_HighLevelRASL_Function_Disjoint_L3_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch_alias );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[31] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[26], context[30] );
  refalrts::link_brackets( context[15], context[25] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[20], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[20], context[33] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_HighLevelRASL_Function_Disjoint(func_HighLevelRASL_Function_Disjoint, "HighLevelRASL-Function-Disjoint#0:0");
refalrts::RefalFunction& HighLevelRASL_Function_Disjoint_0_0 = descr_HighLevelRASL_Function_Disjoint;


//End of file
