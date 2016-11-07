// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_Fails = refalrts::ident_from_static("Fails");
const refalrts::RefalIdentifier ident_NotFound = refalrts::ident_from_static("NotFound");
const refalrts::RefalIdentifier ident_Output = refalrts::ident_from_static("Output");
const refalrts::RefalIdentifier ident_OutputWithNative = refalrts::ident_from_static("OutputWithNative");
const refalrts::RefalIdentifier ident_Runtime = refalrts::ident_from_static("Runtime");
const refalrts::RefalIdentifier ident_Search = refalrts::ident_from_static("Search");
const refalrts::RefalIdentifier ident_Source = refalrts::ident_from_static("Source");
const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
extern refalrts::RefalFunction& WriteLine_0_0;
#define WriteLine_alias WriteLine_0_0
#define WriteLine_str "WriteLine#0:0"

extern refalrts::RefalFunction& System_0_0;
#define System_alias System_0_0
#define System_str "System#0:0"

extern refalrts::RefalFunction& StrFromInt_0_0;
#define StrFromInt_alias StrFromInt_0_0
#define StrFromInt_str "StrFromInt#0:0"

extern refalrts::RefalFunction& Exit_0_0;
#define Exit_alias Exit_0_0
#define Exit_str "Exit#0:0"

extern refalrts::RefalFunction& ArgList_0_0;
#define ArgList_alias ArgList_0_0
#define ArgList_str "ArgList#0:0"

extern refalrts::RefalFunction& Map_0_0;
#define Map_alias Map_0_0
#define Map_str "Map#0:0"

extern refalrts::RefalFunction& CreateFileList_0_0;
#define CreateFileList_alias CreateFileList_0_0
#define CreateFileList_str "CreateFileList#0:0"

extern refalrts::RefalFunction& ParseCommandLine_0_0;
#define ParseCommandLine_alias ParseCommandLine_0_0
#define ParseCommandLine_str "ParseCommandLine#0:0"

extern refalrts::RefalFunction& Go_0_0;
#define Go_alias Go_0_0

extern refalrts::RefalFunction& Main_1598433284_870988702;
#define Main_alias Main_1598433284_870988702

extern refalrts::RefalFunction& gen_MakeProject_S1L1_1598433284_870988702;
#define gen_MakeProject_S1L1_alias gen_MakeProject_S1L1_1598433284_870988702

extern refalrts::RefalFunction& gen_MakeProject_S2L1_1598433284_870988702;
#define gen_MakeProject_S2L1_alias gen_MakeProject_S2L1_1598433284_870988702

extern refalrts::RefalFunction& MakeProject_1598433284_870988702;
#define MakeProject_alias MakeProject_1598433284_870988702

extern refalrts::RefalFunction& gen_Make_S1L1_1598433284_870988702;
#define gen_Make_S1L1_alias gen_Make_S1L1_1598433284_870988702

extern refalrts::RefalFunction& gen_Make_S2L1_1598433284_870988702;
#define gen_Make_S2L1_alias gen_Make_S2L1_1598433284_870988702

extern refalrts::RefalFunction& gen_Make_S2L2_1598433284_870988702;
#define gen_Make_S2L2_alias gen_Make_S2L2_1598433284_870988702

extern refalrts::RefalFunction& Make_1598433284_870988702;
#define Make_alias Make_1598433284_870988702


static refalrts::FnResult func_Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Go/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main/4 HalfReuse: </1 } & ArgList/5 >/6 >/7 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], & ArgList_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Main_alias );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_Go(func_Go, "Go#0:0");
refalrts::RefalFunction& Go_0_0 = descr_Go;

static refalrts::FnResult func_Main(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Main/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx )
    // </0 & Main/4 (/7 e.Program#1/5 )/8 >/1
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.Program#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.Program#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'U'/7 }"sage:"/9 >/11 </12 & WriteLine/13"  srmake [-s path\\to\\srefc.exe] -c c++compiler {-d search-dir} MainFileName[.sref"/14 Tile{ HalfReuse: ']'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[9], context[10], "sage:", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], & WriteLine_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "  srmake [-s path\\to\\srefc.exe] -c c++compiler {-d search-dir} MainFileName[.sref", 81 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & WriteLine_alias );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_char( context[8], ']' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[15] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Main/4 (/7 e.Program#1/5 )/8 e.Arguments#1/2 >/1
  // closed e.Program#1 as range 5
  // closed e.Arguments#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.Program#1/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeProject/4 HalfReuse: </7 } Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Arguments#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & MakeProject_alias );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], & ParseCommandLine_alias );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_Main(func_Main, "Main#1598433284:870988702");
refalrts::RefalFunction& Main_1598433284_870988702 = descr_Main;

static refalrts::FnResult func_gen_MakeProject_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MakeProject$1\1/4 (/7 s.FolderTag#2/9 e.Folder#2/5 )/8 >/1
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
  // closed e.Folder#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & MakeProject$1\1/4 (/7 s.FolderTag#2/9 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Folder#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_MakeProject_S1L1(func_gen_MakeProject_S1L1, "MakeProject$1\\1#1598433284:870988702");
refalrts::RefalFunction& gen_MakeProject_S1L1_1598433284_870988702 = descr_gen_MakeProject_S1L1;

static refalrts::FnResult func_gen_MakeProject_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & MakeProject$2\1/4 (/7 s.Pos#2/9 e.Message#2/5 )/8 >/1
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
  // closed e.Message#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 }"omm"/10 Tile{ HalfReuse: 'a'/8 }"nd line argument "/12 </14 & StrFromInt/15 Tile{ AsIs: s.Pos#2/9 } >/16": "/17 Tile{ AsIs: e.Message#2/5 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[10], context[11], "omm", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "nd line argument ", 17 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], & StrFromInt_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[17], context[18], ": ", 2 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & WriteLine_alias );
  refalrts::reinit_char( context[7], 'C' );
  refalrts::reinit_char( context[8], 'a' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_MakeProject_S2L1(func_gen_MakeProject_S2L1, "MakeProject$2\\1#1598433284:870988702");
refalrts::RefalFunction& gen_MakeProject_S2L1_1598433284_870988702 = descr_gen_MakeProject_S2L1;

static refalrts::FnResult func_MakeProject(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & MakeProject/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # Success ( e.idx ) ( e.idx ) ( e.idx ) e.idx
    // </0 & MakeProject/4 # Success/5 (/8 e.CppCompiler#1/6 )/9 (/12 e.SrefCompiler#1/10 )/13 (/16 e.SourceFile#1/14 )/17 e.Folders#1/2 >/1
    if( ! refalrts::ident_term(  ident_Success, context[5] ) )
      continue;
    context[28] = context[2];
    context[29] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[28], context[29] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[28], context[29] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[28], context[29] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.CppCompiler#1 as range 6
    // closed e.SrefCompiler#1 as range 10
    // closed e.SourceFile#1 as range 14
    // closed e.Folders#1 as range 28(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </18 Tile{ HalfReuse: & Make/9 AsIs: (/12 AsIs: e.SrefCompiler#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.CppCompiler#1/6 } )/19 (/20 e.Folders#1/28(2)/21 )/23 Tile{ AsIs: </0 Reuse: & CreateFileList/4 HalfReuse: (/5 HalfReuse: </8 } & Map/24 Tile{ HalfReuse: & MakeProject$1\1/17 AsIs: e.Folders#1/28(2) AsIs: >/1 } )/25 Tile{ AsIs: e.SourceFile#1/14 } >/26 >/27 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[28], context[29]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], & Map_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[9], & Make_alias );
    refalrts::update_name( context[4], & CreateFileList_alias );
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[17], & gen_MakeProject_S1L1_alias );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[5], context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[20], context[23] );
    refalrts::link_brackets( context[16], context[19] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[9], context[16] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Fails e.idx
  // </0 & MakeProject/4 # Fails/5 e.Errors#1/2 >/1
  if( ! refalrts::ident_term(  ident_Fails, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & MakeProject$2\1/5 AsIs: e.Errors#1/2 AsIs: >/1 } </6 & Exit/7 1/8 >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & Exit_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[8], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Map_alias );
  refalrts::reinit_name( context[5], & gen_MakeProject_S2L1_alias );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_MakeProject(func_MakeProject, "MakeProject#1598433284:870988702");
refalrts::RefalFunction& MakeProject_1598433284_870988702 = descr_MakeProject;

static refalrts::FnResult func_gen_Make_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & Make$1\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    // ( # NotFound e.idx )
    // </0 & Make$1\1/4 (/7 # NotFound/9 e.UnitName#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_NotFound, context[9] ) )
      continue;
    // closed e.UnitName#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 HalfReuse: 'O'/9 }"MMAND LINE ERROR: Unit "/10 Tile{ AsIs: e.UnitName#2/5 }" not foun"/12 Tile{ HalfReuse: 'd'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[10], context[11], "MMAND LINE ERROR: Unit ", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], " not foun", 9 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & WriteLine_alias );
    refalrts::reinit_char( context[7], 'C' );
    refalrts::reinit_char( context[9], 'O' );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Output e.idx )
    // </0 & Make$1\1/4 (/7 # Output/9 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Output, context[9] ) )
      continue;
    // closed e.Output#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Make$1\1/4 (/7 # Output/9 e.Output#2/5 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # OutputWithNative ( e.idx ) e.idx )
    // </0 & Make$1\1/4 (/7 # OutputWithNative/9 (/12 e.Output#2/10 )/13 e.Native#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_OutputWithNative, context[9] ) )
      continue;
    context[14] = context[5];
    context[15] = context[6];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[14], context[15] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Output#2 as range 10
    // closed e.Native#2 as range 14(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Make$1\1/4 (/7 # OutputWithNative/9 (/12 e.Output#2/10 )/13 e.Native#2/14(5) )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # Source ( e.idx ) e.idx )
  // </0 & Make$1\1/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_Source, context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Source#2 as range 10
  // closed e.Output#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Make$1\1/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_Make_S1L1(func_gen_Make_S1L1, "Make$1\\1#1598433284:870988702");
refalrts::RefalFunction& gen_Make_S1L1_1598433284_870988702 = descr_gen_Make_S1L1;

static refalrts::FnResult func_gen_Make_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & Make$2\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    // ( # Search e.idx )
    // </0 & Make$2\1/4 (/7 # Search/9 e.Folder#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Search, context[9] ) )
      continue;
    // closed e.Folder#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 } Tile{ HalfReuse: '-'/0 HalfReuse: 'd'/4 HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Folder#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
    refalrts::reinit_char( context[1], ' ' );
    refalrts::reinit_char( context[0], '-' );
    refalrts::reinit_char( context[4], 'd' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '\"' );
    refalrts::reinit_char( context[8], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # Runtime e.idx )
  // </0 & Make$2\1/4 (/7 # Runtime/9 e.Folder#2/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_Runtime, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folder#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 } Tile{ HalfReuse: '-'/0 HalfReuse: 'D'/4 HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Folder#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
  refalrts::reinit_char( context[1], ' ' );
  refalrts::reinit_char( context[0], '-' );
  refalrts::reinit_char( context[4], 'D' );
  refalrts::reinit_char( context[7], ' ' );
  refalrts::reinit_char( context[9], '\"' );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_Make_S2L1(func_gen_Make_S2L1, "Make$2\\1#1598433284:870988702");
refalrts::RefalFunction& gen_Make_S2L1_1598433284_870988702 = descr_gen_Make_S2L1;

static refalrts::FnResult func_gen_Make_S2L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & Make$2\2/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    // ( # Output e.idx )
    // </0 & Make$2\2/4 (/7 # Output/9 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Output, context[9] ) )
      continue;
    // closed e.Output#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Make$2\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Output#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '\"' );
    refalrts::reinit_char( context[8], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # Source ( e.idx ) e.idx )
  // </0 & Make$2\2/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_Source, context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Source#2 as range 10
  // closed e.Output#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Make$2\2/4 (/7 {REMOVED TILE} e.Output#2/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '\"'/12 AsIs: e.Source#2/10 HalfReuse: '\"'/13 } Tile{ ]] }
  refalrts::reinit_char( context[9], ' ' );
  refalrts::reinit_char( context[12], '\"' );
  refalrts::reinit_char( context[13], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_Make_S2L2(func_gen_Make_S2L2, "Make$2\\2#1598433284:870988702");
refalrts::RefalFunction& gen_Make_S2L2_1598433284_870988702 = descr_gen_Make_S2L2;

static refalrts::FnResult func_Make(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) e.$
  // </0 & Make/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 e.idxTTT#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTT#0 as range 2
  do {
    // ( e.idx ) ( e.idx ) ( e.idx ) e.idx
    // </0 & Make/4 (/7 e.SrefC#1/5 )/8 (/11 e.CompilerCommand#1/9 )/12 (/15 e.Directories#1/13 )/16 e.Units-B#1/17 (/21 # NotFound/23 e.UnitName#1/19 )/22 e.Units-E#1/2 >/1
    // closed e.SrefC#1 as range 5
    // closed e.CompilerCommand#1 as range 9
    // closed e.Directories#1 as range 13
    context[25] = context[2];
    context[26] = context[3];
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[25];
      context[28] = context[26];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[27], context[28] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      context[23] = refalrts::ident_left(  ident_NotFound, context[19], context[20] );
      if( ! context[23] )
        continue;
      // closed e.UnitName#1 as range 19
      // closed e.Units-E#1 as range 27(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} e.SrefC#1/5 {REMOVED TILE} e.CompilerCommand#1/9 {REMOVED TILE} e.Directories#1/13 )/16 e.Units-B#1/17 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & Make$1\1/7 } Tile{ AsIs: (/21 AsIs: # NotFound/23 AsIs: e.UnitName#1/19 AsIs: )/22 AsIs: e.Units-E#1/27(2) AsIs: >/1 } Tile{ HalfReuse: </12 HalfReuse: & Exit/15 } Tile{ HalfReuse: 1/8 HalfReuse: >/11 } Tile{ ]] }
      refalrts::update_name( context[4], & Map_alias );
      refalrts::reinit_name( context[7], & gen_Make_S1L1_alias );
      refalrts::reinit_open_call( context[12] );
      refalrts::reinit_name( context[15], & Exit_alias );
      refalrts::reinit_number( context[8], 1UL );
      refalrts::reinit_close_call( context[11] );
      refalrts::push_stack( context[11] );
      refalrts::push_stack( context[12] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[12], context[15] );
      res = refalrts::splice_evar( res, context[21], context[1] );
      refalrts::splice_to_freelist_open( context[7], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[17], context[18], context[25], context[26] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) ( e.idx ) e.idx
  // </0 & Make/4 (/7 e.SrefC#1/5 )/8 (/11 e.CompilerCommand#1/9 )/12 (/15 e.Directories#1/13 )/16 e.Units#1/2 >/1
  // closed e.SrefC#1 as range 5
  // closed e.CompilerCommand#1 as range 9
  // closed e.Directories#1 as range 13
  // closed e.Units#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & System/4 } Tile{ AsIs: e.SrefC#1/5 } Tile{ HalfReuse: ' '/7 }"-c"/17 Tile{ HalfReuse: ' '/8 HalfReuse: '\"'/11 AsIs: e.CompilerCommand#1/9 HalfReuse: '\"'/12 HalfReuse: </15 } & Map/19 & Make$2\1/20 Tile{ AsIs: e.Directories#1/13 } >/21 </22 & Map/23 Tile{ HalfReuse: & Make$2\2/16 AsIs: e.Units#1/2 AsIs: >/1 } >/24 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[17], context[18], "-c", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], & Map_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & gen_Make_S2L1_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], & Map_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & System_alias );
  refalrts::reinit_char( context[7], ' ' );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_char( context[11], '\"' );
  refalrts::reinit_char( context[12], '\"' );
  refalrts::reinit_open_call( context[15] );
  refalrts::reinit_name( context[16], & gen_Make_S2L2_alias );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[21], context[23] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_Make(func_Make, "Make#1598433284:870988702");
refalrts::RefalFunction& Make_1598433284_870988702 = descr_Make;


//End of file
