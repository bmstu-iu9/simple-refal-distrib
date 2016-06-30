// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CreateFileList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Exit(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult System(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Make(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MakeProject(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #Fails
template <typename SREFAL_PARAM_INT>
struct ident_Fails {
  static const char *name() {
    return "Fails";
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

// identifier #Runtime
template <typename SREFAL_PARAM_INT>
struct ident_Runtime {
  static const char *name() {
    return "Runtime";
  }
};

// identifier #Search
template <typename SREFAL_PARAM_INT>
struct ident_Search {
  static const char *name() {
    return "Search";
  }
};

// identifier #Source
template <typename SREFAL_PARAM_INT>
struct ident_Source {
  static const char *name() {
    return "Source";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Go/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main/4 HalfReuse: </1 } & ArgList/5 >/6 >/7 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], ArgList, "ArgList" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Main, "Main" );
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 98 elems
  refalrts::Iter context[98];
  refalrts::zeros( context, 98 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Main/4 (/7 e.Program#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Program#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Program#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'U'/7 } 's'/9 'a'/10 'g'/11 'e'/12 ':'/13 >/14 </15 & WriteLine/16 ' '/17 ' '/18 's'/19 'r'/20 'm'/21 'a'/22 'k'/23 'e'/24 ' '/25 '['/26 '-'/27 's'/28 ' '/29 'p'/30 'a'/31 't'/32 'h'/33 '\\'/34 't'/35 'o'/36 '\\'/37 's'/38 'r'/39 'e'/40 'f'/41 'c'/42 '.'/43 'e'/44 'x'/45 'e'/46 ']'/47 ' '/48 '-'/49 'c'/50 ' '/51 'c'/52 '+'/53 '+'/54 'c'/55 'o'/56 'm'/57 'p'/58 'i'/59 'l'/60 'e'/61 'r'/62 ' '/63 '{'/64 '-'/65 'd'/66 ' '/67 's'/68 'e'/69 'a'/70 'r'/71 'c'/72 'h'/73 '-'/74 'd'/75 'i'/76 'r'/77 '}'/78 ' '/79 'M'/80 'a'/81 'i'/82 'n'/83 'F'/84 'i'/85 'l'/86 'e'/87 'N'/88 'a'/89 'm'/90 'e'/91 '['/92 '.'/93 's'/94 'r'/95 'e'/96 'f'/97 Tile{ HalfReuse: ']'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[9], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], '[' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], '\\' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], '\\' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ']' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], '+' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], '+' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[73], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[74], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[75], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[76], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[77], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[78], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[79], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[80], 'M' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[81], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[82], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[83], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[84], 'F' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[85], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[86], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[87], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[88], 'N' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[89], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[90], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[91], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[92], '[' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[93], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[94], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[95], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[96], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[97], 'f' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], WriteLine, "WriteLine" );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_char( context[8], ']' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[97] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Main/4 (/7 e.Program#1/5 )/8 e.Arguments#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Program#1 as range 5
  // closed e.Arguments#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Program#1/5 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeProject/4 HalfReuse: </7 } Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Arguments#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], MakeProject, "MakeProject" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], ParseCommandLine, "ParseCommandLine" );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_MakeProject_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_MakeProject_0/4 (/7 s.FolderTag#2/9 e.Folder#2/5 )/8 >/1
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
  //TRASH: {REMOVED TILE}  & lambda_MakeProject_0/4 (/7 s.FolderTag#2/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Folder#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_MakeProject_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_MakeProject_1/4 (/7 s.Pos#2/9 e.Message#2/5 )/8 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 } Tile{ HalfReuse: 'o'/8 } 'm'/10 'm'/11 'a'/12 'n'/13 'd'/14 ' '/15 'l'/16 'i'/17 'n'/18 'e'/19 ' '/20 'a'/21 'r'/22 'g'/23 'u'/24 'm'/25 'e'/26 'n'/27 't'/28 ' '/29 </30 & StrFromInt/31 Tile{ AsIs: s.Pos#2/9 } >/32 ':'/33 ' '/34 Tile{ AsIs: e.Message#2/5 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[10], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], ' ' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], WriteLine, "WriteLine" );
  refalrts::reinit_char( context[7], 'C' );
  refalrts::reinit_char( context[8], 'o' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[30] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[32], context[34] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[10], context[31] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult MakeProject(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & MakeProject/4 # Success/5 (/8 e.CppCompiler#1/6 )/9 (/12 e.SrefCompiler#1/10 )/13 (/16 e.SourceFile#1/14 )/17 e.Folders#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Success<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.CppCompiler#1 as range 6
    // closed e.SrefCompiler#1 as range 10
    // closed e.SourceFile#1 as range 14
    // closed e.Folders#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Make/4 } (/18 Tile{ AsIs: e.SrefCompiler#1/10 } Tile{ HalfReuse: )/5 AsIs: (/8 AsIs: e.CppCompiler#1/6 AsIs: )/9 AsIs: (/12 } e.Folders#1/2/19 Tile{ AsIs: )/13 HalfReuse: </16 } & CreateFileList/21 (/22 </23 & Map/24 Tile{ HalfReuse: & lambda_MakeProject_0/17 AsIs: e.Folders#1/2 AsIs: >/1 } )/25 Tile{ AsIs: e.SourceFile#1/14 } >/26 >/27 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], CreateFileList, "CreateFileList" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Make, "Make" );
    refalrts::reinit_close_bracket( context[5] );
    refalrts::reinit_open_call( context[16] );
    refalrts::reinit_name( context[17], lambda_MakeProject_0, "lambda_MakeProject_0" );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[22], context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[18], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    res = refalrts::splice_evar( res, context[13], context[16] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[5], context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & MakeProject/4 # Fails/5 e.Errors#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_Fails<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_MakeProject_1/5 AsIs: e.Errors#1/2 AsIs: >/1 } </6 & Exit/7 1/8 >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Exit, "Exit" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[8], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Map, "Map" );
  refalrts::reinit_name( context[5], lambda_MakeProject_1, "lambda_MakeProject_1" );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Make_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Make_0/4 (/7 # NotFound/9 e.UnitName#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_NotFound<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.UnitName#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 HalfReuse: 'O'/9 } 'M'/10 'M'/11 'A'/12 'N'/13 'D'/14 ' '/15 'L'/16 'I'/17 'N'/18 'E'/19 ' '/20 'E'/21 'R'/22 'R'/23 'O'/24 'R'/25 ':'/26 ' '/27 'U'/28 'n'/29 'i'/30 't'/31 ' '/32 Tile{ AsIs: e.UnitName#2/5 } ' '/33 'n'/34 'o'/35 't'/36 ' '/37 'f'/38 'o'/39 'u'/40 'n'/41 Tile{ HalfReuse: 'd'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], 'M' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'M' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'N' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'D' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'L' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'N' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'O' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'U' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'n' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], WriteLine, "WriteLine" );
    refalrts::reinit_char( context[7], 'C' );
    refalrts::reinit_char( context[9], 'O' );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[33], context[41] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[32] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Make_0/4 (/7 # Output/9 e.Output#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Output<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Output#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_Make_0/4 (/7 # Output/9 e.Output#2/5 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Make_0/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_Source<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Source#2 as range 10
  // closed e.Output#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_Make_0/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Make_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Make_1/4 (/7 # Search/9 e.Folder#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Search<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Folder#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
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
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Make_1/4 (/7 # Runtime/9 e.Folder#2/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_Runtime<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folder#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Make_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Make_2/4 (/7 # Output/9 e.Output#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Output<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Output#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_Make_2/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Output#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '\"' );
    refalrts::reinit_char( context[8], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Make_2/4 (/7 # Source/9 (/12 e.Source#2/10 )/13 e.Output#2/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_Source<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Source#2 as range 10
  // closed e.Output#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_Make_2/4 (/7 {REMOVED TILE}  e.Output#2/5 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '\"'/12 AsIs: e.Source#2/10 HalfReuse: '\"'/13 } Tile{ ]] }
  refalrts::reinit_char( context[9], ' ' );
  refalrts::reinit_char( context[12], '\"' );
  refalrts::reinit_char( context[13], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Make(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Make/4 (/7 e.SrefC#1/5 )/8 (/11 e.CompilerCommand#1/9 )/12 (/15 e.Directories#1/13 )/16 e.Units_B#1/17 (/21 # NotFound/23 e.UnitName#1/19 )/22 e.Units_E#1/24 >/1
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
    // closed e.SrefC#1 as range 5
    // closed e.CompilerCommand#1 as range 9
    // closed e.Directories#1 as range 13
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop();
    do {
      context[24] = context[2];
      context[25] = context[3];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[24], context[25] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      context[23] = refalrts::ident_left(  & ident_NotFound<int>::name, context[19], context[20] );
      if( ! context[23] )
        continue;
      // closed e.UnitName#1 as range 19
      // closed e.Units_E#1 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  e.SrefC#1/5 {REMOVED TILE}  e.CompilerCommand#1/9 {REMOVED TILE}  e.Directories#1/13 )/16 e.Units_B#1/17 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_Make_0/7 } Tile{ AsIs: (/21 AsIs: # NotFound/23 AsIs: e.UnitName#1/19 AsIs: )/22 AsIs: e.Units_E#1/24 AsIs: >/1 } Tile{ HalfReuse: </8 HalfReuse: & Exit/11 } Tile{ HalfReuse: 1/12 HalfReuse: >/15 } Tile{ ]] }
      refalrts::update_name( context[4], Map, "Map" );
      refalrts::reinit_name( context[7], lambda_Make_0, "lambda_Make_0" );
      refalrts::reinit_open_call( context[8] );
      refalrts::reinit_name( context[11], Exit, "Exit" );
      refalrts::reinit_number( context[12], 1UL );
      refalrts::reinit_close_call( context[15] );
      refalrts::push_stack( context[15] );
      refalrts::push_stack( context[8] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[12], context[15] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[21], context[1] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[7], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[17], context[18], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Make/4 (/7 e.SrefC#1/5 )/8 (/11 e.CompilerCommand#1/9 )/12 (/15 e.Directories#1/13 )/16 e.Units#1/2 >/1
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
  // closed e.SrefC#1 as range 5
  // closed e.CompilerCommand#1 as range 9
  // closed e.Directories#1 as range 13
  // closed e.Units#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & System/4 } Tile{ AsIs: e.SrefC#1/5 } Tile{ HalfReuse: ' '/7 } '-'/17 'c'/18 Tile{ HalfReuse: ' '/8 HalfReuse: '\"'/11 AsIs: e.CompilerCommand#1/9 HalfReuse: '\"'/12 HalfReuse: </15 } & Map/19 & lambda_Make_1/20 Tile{ AsIs: e.Directories#1/13 } >/21 </22 & Map/23 Tile{ HalfReuse: & lambda_Make_2/16 AsIs: e.Units#1/2 AsIs: >/1 } >/24 Tile{ ]] }
  if( ! refalrts::alloc_char( context[17], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], lambda_Make_1, "lambda_Make_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], System, "System" );
  refalrts::reinit_char( context[7], ' ' );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_char( context[11], '\"' );
  refalrts::reinit_char( context[12], '\"' );
  refalrts::reinit_open_call( context[15] );
  refalrts::reinit_name( context[16], lambda_Make_2, "lambda_Make_2" );
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
