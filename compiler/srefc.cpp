// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Exit(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult System(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CompileFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CreateErrorFileMark(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoGetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetBaseNameLowerCase(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Link(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult LookupSourceFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Lower(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main_SwCompiledFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main_SwFoundFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main_SwRenamedTargets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main_SwValidCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RenameLocations(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RenameLocations_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RenameTargets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ReportErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ScanCollisions(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #Collision
template <typename SREFAL_PARAM_INT>
struct ident_Collision {
  static const char *name() {
    return "Collision";
  }
};

// identifier #CommandLine
template <typename SREFAL_PARAM_INT>
struct ident_CommandLine {
  static const char *name() {
    return "CommandLine";
  }
};

// identifier #ErrorFile
template <typename SREFAL_PARAM_INT>
struct ident_ErrorFile {
  static const char *name() {
    return "ErrorFile";
  }
};

// identifier #Fails
template <typename SREFAL_PARAM_INT>
struct ident_Fails {
  static const char *name() {
    return "Fails";
  }
};

// identifier #NoCppCompiler
template <typename SREFAL_PARAM_INT>
struct ident_NoCppCompiler {
  static const char *name() {
    return "NoCppCompiler";
  }
};

// identifier #NoErrorFile
template <typename SREFAL_PARAM_INT>
struct ident_NoErrorFile {
  static const char *name() {
    return "NoErrorFile";
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
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Main/4 (/7 e.ProgName#1/5 )/8 (/11 '@'/13 e.Config#1/9 )/12 >/1
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
    context[13] = refalrts::char_left( '@', context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.ProgName#1 as range 5
    // closed e.Config#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.ProgName#1/5 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwValidCommandLine/4 AsIs: (/7 } e.Config#1/9/14 )/16 </17 Tile{ HalfReuse: & ParseCommandLine/8 HalfReuse: </11 HalfReuse: & LoadFile/13 AsIs: e.Config#1/9 HalfReuse: >/12 AsIs: >/1 } >/18 Tile{ ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[9], context[10]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Main_SwValidCommandLine, "Main_SwValidCommandLine" );
    refalrts::reinit_name( context[8], ParseCommandLine, "ParseCommandLine" );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], LoadFile, "LoadFile" );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Main/4 (/7 e.ProgName#1/5 )/8 e.Arguments#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.ProgName#1 as range 5
  // closed e.Arguments#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.ProgName#1/5 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwValidCommandLine/4 HalfReuse: # CommandLine/7 } </9 Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Arguments#1/2 AsIs: >/1 } >/10 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Main_SwValidCommandLine, "Main_SwValidCommandLine" );
  refalrts::reinit_ident( context[7], & ident_CommandLine<int>::name );
  refalrts::reinit_name( context[8], ParseCommandLine, "ParseCommandLine" );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Main_SwValidCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Main_SwValidCommandLine/4 t.CommandLineSource#1/5 # Success/7 t.CppCompiler#1/8 s.GenMode#1/10 s.Opt#1/11 t.ErrorFile#1/12 (/16 e.Folders#1/14 )/17 e.Files#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::ident_left(  & ident_Success<int>::name, context[2], context[3] );
    if( ! context[7] )
      continue;
    context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Folders#1 as range 14
    // closed e.Files#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwFoundFiles/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.CppCompiler#1/8 AsIs: s.GenMode#1/10 AsIs: s.Opt#1/11 AsIs: t.ErrorFile#1/12 } Tile{ HalfReuse: </7 } & LookupSourceFiles/18 Tile{ AsIs: (/16 AsIs: e.Folders#1/14 AsIs: )/17 AsIs: e.Files#1/2 AsIs: >/1 } >/19 Tile{ ]] }
    if( ! refalrts::alloc_name( context[18], LookupSourceFiles, "LookupSourceFiles" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Main_SwFoundFiles, "Main_SwFoundFiles" );
    refalrts::reinit_open_call( context[7] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Main_SwValidCommandLine/4 t.CommandLineSource#1/5 # Fails/7 e.Errors#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::ident_left(  & ident_Fails<int>::name, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 Reuse: # NoErrorFile/7 AsIs: e.Errors#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ReportErrors, "ReportErrors" );
  refalrts::update_ident( context[7], & ident_NoErrorFile<int>::name );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ReportErrors_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ReportErrors_0/4 (/7 s.Pos#2/9 e.Message#2/5 )/8 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 } Tile{ HalfReuse: 'o'/8 } 'm'/10 'm'/11 'a'/12 'n'/13 'd'/14 ' '/15 'l'/16 'i'/17 'n'/18 'e'/19 ' '/20 'a'/21 'r'/22 'g'/23 'u'/24 'm'/25 'e'/26 'n'/27 't'/28 ' '/29 </30 & StrFromInt/31 Tile{ AsIs: s.Pos#2/9 } >/32 ':'/33 ' '/34 'E'/35 'r'/36 'r'/37 'o'/38 'r'/39 ':'/40 ' '/41 Tile{ AsIs: e.Message#2/5 } Tile{ AsIs: >/1 ]] }
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
  if( ! refalrts::alloc_char( context[35], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], ' ' ) )
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
  res = refalrts::splice_evar( res, context[32], context[41] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[10], context[31] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ReportErrors_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ReportErrors_1/4 (/7 e.ConfigFile#1/5 )/8 (/11 s.Pos#2/13 e.Message#2/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ConfigFile#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ AsIs: e.ConfigFile#1/5 } Tile{ HalfReuse: ':'/7 } Tile{ HalfReuse: </8 HalfReuse: & StrFromInt/11 AsIs: s.Pos#2/13 } Tile{ HalfReuse: >/12 } ':'/14 ' '/15 'E'/16 'r'/17 'r'/18 'o'/19 'r'/20 ':'/21 ' '/22 Tile{ AsIs: e.Message#2/9 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[14], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], ' ' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], WriteLine, "WriteLine" );
  refalrts::reinit_char( context[7], ':' );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[11], StrFromInt, "StrFromInt" );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[22] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[13] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ReportErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReportErrors/4 # CommandLine/5 t.ErrorFile#1/6 e.Errors#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_CommandLine<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    // closed e.Errors#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_ReportErrors_0/5 } Tile{ AsIs: e.Errors#1/2 } >/8 </9 & CreateErrorFileMark/10 Tile{ AsIs: t.ErrorFile#1/6 } >/11 </12 & Exit/13 1/14 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], CreateErrorFileMark, "CreateErrorFileMark" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], Exit, "Exit" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[14], 1UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Map, "Map" );
    refalrts::reinit_name( context[5], lambda_ReportErrors_0, "lambda_ReportErrors_0" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ReportErrors/4 (/7 e.ConfigFile#1/5 )/8 t.ErrorFile#1/9 e.Errors#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.ConfigFile#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </11 & Map/12 </13 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_ReportErrors_1/4 AsIs: (/7 AsIs: e.ConfigFile#1/5 AsIs: )/8 } >/14 Tile{ AsIs: e.Errors#1/2 } >/15 </16 & CreateErrorFileMark/17 Tile{ AsIs: t.ErrorFile#1/9 } >/18 </19 & Exit/20 1/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], CreateErrorFileMark, "CreateErrorFileMark" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], Exit, "Exit" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[21], 1UL ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_ReportErrors_1, "lambda_ReportErrors_1" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CreateErrorFileMark(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateErrorFileMark/4 # NoErrorFile/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_NoErrorFile<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & CreateErrorFileMark/4 # NoErrorFile/5 >/1 {REMOVED TILE} 
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
  // </0 & CreateErrorFileMark/4 (/7 # ErrorFile/9 e.FileName#1/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_ErrorFile<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & SaveFile/7 HalfReuse: (/9 AsIs: e.FileName#1/5 AsIs: )/8 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], SaveFile, "SaveFile" );
  refalrts::reinit_open_bracket( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::link_brackets( context[9], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Main_SwFoundFiles_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # NotFound/10 e.FileName#2/5 )/8 >/1
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
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  & ident_NotFound<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.FileName#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 HalfReuse: 'f'/10 } Tile{ HalfReuse: 'i'/0 HalfReuse: 'l'/4 } 'e'/11 ' '/12 Tile{ AsIs: e.FileName#2/5 } ' '/13 'i'/14 's'/15 ' '/16 'n'/17 'o'/18 't'/19 ' '/20 'f'/21 'o'/22 'u'/23 'n'/24 Tile{ HalfReuse: 'd'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[11], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'n' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'f' );
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'l' );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[24] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/5 )/8 >/1
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
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  & ident_Source<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Source#2 as range 11
    // closed e.Output#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/5 )/8 >/1 {REMOVED TILE} 
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
  // </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1
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
  context[10] = refalrts::ident_left(  & ident_Output<int>::name, context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_Main_SwFoundFiles_0/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Main_SwFoundFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Main_SwFoundFiles/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 e.Files_B#1/13 (/17 s.Pos#1/19 # NotFound/20 e.FileName#1/15 )/18 e.Files_E#1/21 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[2];
      context[22] = context[3];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[21], context[22] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Files_E#1 as range 2
      if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
        continue;
      context[20] = refalrts::ident_left(  & ident_NotFound<int>::name, context[15], context[16] );
      if( ! context[20] )
        continue;
      // closed e.FileName#1 as range 15

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 {REMOVED TILE}  e.Files_B#1/13 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.ErrorFile#1/11 } </23 & Map/24 & lambda_Main_SwFoundFiles_0/25 Tile{ AsIs: (/17 AsIs: s.Pos#1/19 AsIs: # NotFound/20 AsIs: e.FileName#1/15 AsIs: )/18 AsIs: e.Files_E#1/21 AsIs: >/1 } >/26 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[24], Map, "Map" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[25], lambda_Main_SwFoundFiles_0, "lambda_Main_SwFoundFiles_0" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[26] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ReportErrors, "ReportErrors" );
      refalrts::push_stack( context[26] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[23] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[17], context[1] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[6], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Main_SwFoundFiles/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 e.Files#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwRenamedTargets/4 AsIs: t.CommandLineSource#1/5 AsIs: t.CppCompiler#1/7 AsIs: s.GenMode#1/9 AsIs: s.Opt#1/10 AsIs: t.ErrorFile#1/11 } </13 & RenameTargets/14 t.CppCompiler#1/7/15 Tile{ AsIs: e.Files#1/2 } >/17 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], RenameTargets, "RenameTargets" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[15], context[16], context[7], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Main_SwRenamedTargets, "Main_SwRenamedTargets" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Main_SwRenamedTargets_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Collision/10 (/13 e.FirstTarget#2/11 )/14 e.SecondTarget#2/5 )/8 >/1
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
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  & ident_Collision<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.FirstTarget#2 as range 11
    // closed e.SecondTarget#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 HalfReuse: 'f'/10 HalfReuse: 'i'/13 } Tile{ HalfReuse: 'l'/0 HalfReuse: 'e'/4 } 's'/15 ' '/16 Tile{ AsIs: e.FirstTarget#2/11 } ' '/17 'a'/18 'n'/19 'd'/20 Tile{ HalfReuse: ' '/14 AsIs: e.SecondTarget#2/5 HalfReuse: ' '/8 HalfReuse: 'h'/1 } 'a'/21 'v'/22 'e'/23 ' '/24 's'/25 'a'/26 'm'/27 'e'/28 ' '/29 'n'/30 'a'/31 'm'/32 'e'/33 )/34 Tile{ ]] }
    if( ! refalrts::alloc_char( context[15], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'f' );
    refalrts::reinit_char( context[13], 'i' );
    refalrts::reinit_char( context[0], 'l' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[14], ' ' );
    refalrts::reinit_char( context[8], ' ' );
    refalrts::reinit_char( context[1], 'h' );
    refalrts::link_brackets( context[7], context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[34] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/5 )/8 >/1
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
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  & ident_Source<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Source#2 as range 11
    // closed e.Output#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/5 )/8 >/1 {REMOVED TILE} 
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
  // </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1
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
  context[10] = refalrts::ident_left(  & ident_Output<int>::name, context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_Main_SwRenamedTargets_0/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Main_SwRenamedTargets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Main_SwRenamedTargets/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 e.Files_B#1/13 (/17 s.Pos#1/19 # Collision/20 e.Collision#1/15 )/18 e.Files_E#1/21 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[2];
      context[22] = context[3];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[21], context[22] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Files_E#1 as range 2
      if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
        continue;
      context[20] = refalrts::ident_left(  & ident_Collision<int>::name, context[15], context[16] );
      if( ! context[20] )
        continue;
      // closed e.Collision#1 as range 15

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 {REMOVED TILE}  e.Files_B#1/13 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.ErrorFile#1/11 } </23 & Map/24 & lambda_Main_SwRenamedTargets_0/25 Tile{ AsIs: (/17 AsIs: s.Pos#1/19 AsIs: # Collision/20 AsIs: e.Collision#1/15 AsIs: )/18 AsIs: e.Files_E#1/21 AsIs: >/1 } >/26 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[24], Map, "Map" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[25], lambda_Main_SwRenamedTargets_0, "lambda_Main_SwRenamedTargets_0" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[26] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ReportErrors, "ReportErrors" );
      refalrts::push_stack( context[26] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[23] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[17], context[1] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[6], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Main_SwRenamedTargets/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 e.Files#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  t.CommandLineSource#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main_SwCompiledFiles/4 } Tile{ AsIs: t.CppCompiler#1/7 } Tile{ AsIs: t.ErrorFile#1/11 } </13 & CompileFiles/14 Tile{ AsIs: s.GenMode#1/9 AsIs: s.Opt#1/10 } Tile{ AsIs: e.Files#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], CompileFiles, "CompileFiles" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Main_SwCompiledFiles, "Main_SwCompiledFiles" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Main_SwCompiledFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Main_SwCompiledFiles/4 t.CppCompiler#1/5 t.ErrorFile#1/7 e.Outputs_B#1/9 # Fails/11 e.OutputsErrors_E#1/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[11] = refalrts::ident_left(  & ident_Fails<int>::name, context[12], context[13] );
      if( ! context[11] )
        continue;
      // closed e.OutputsErrors_E#1 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  t.CppCompiler#1/5 {REMOVED TILE}  e.Outputs_B#1/9 {REMOVED TILE}  e.OutputsErrors_E#1/12 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateErrorFileMark/4 } Tile{ AsIs: t.ErrorFile#1/7 } Tile{ HalfReuse: >/11 } </14 & Exit/15 1/16 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], Exit, "Exit" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[16], 1UL ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], CreateErrorFileMark, "CreateErrorFileMark" );
      refalrts::reinit_close_call( context[11] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[14] );
      refalrts::push_stack( context[11] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[14], context[16] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Main_SwCompiledFiles/4 t.CppCompiler#1/5 t.ErrorFile#1/7 e.Targets#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.Targets#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  t.ErrorFile#1/7 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link/4 AsIs: t.CppCompiler#1/5 } Tile{ AsIs: e.Targets#1/2 } >/9 </10 & WriteLine/11 '*'/12 '*'/13 ' '/14 'C'/15 'o'/16 'm'/17 'p'/18 'i'/19 'l'/20 'a'/21 't'/22 'i'/23 'o'/24 'n'/25 ' '/26 's'/27 'u'/28 'c'/29 'c'/30 'e'/31 's'/32 's'/33 'e'/34 'd'/35 ' '/36 '*'/37 '*'/38 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], '*' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], '*' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'C' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], '*' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], '*' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Link, "Link" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[38] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_LookupSourceFiles_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_LookupSourceFiles_0/4 s.Pos#2/9 (/7 s.ResultTag#3/10 e.Info#3/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#3 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_LookupSourceFiles_0/4 s.Pos#2/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Pos2 #9/7 AsIs: s.ResultTag#3/10 AsIs: e.Info#3/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_LookupSourceFiles_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_LookupSourceFiles_1/4 (/7 e.Folders#1/5 )/8 (/11 s.Pos#2/13 e.FileName#2/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folders#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </14 & Fetch/15 Tile{ AsIs: </0 Reuse: & FindFiles/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.FileName#2/9 } )/16 >/17 </18 & CreateClosure /19 & lambda_LookupSourceFiles_0/20 Tile{ AsIs: s.Pos#2/13 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], lambda_LookupSourceFiles_0, "lambda_LookupSourceFiles_0" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], FindFiles, "FindFiles" );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult LookupSourceFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & LookupSourceFiles/4 (/7 e.Folders#1/5 )/8 e.Files#1/2 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 & Map/10 </11 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_LookupSourceFiles_1/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 } >/12 Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_LookupSourceFiles_1, "lambda_LookupSourceFiles_1" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult RenameTargets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & RenameTargets/4 # NoCppCompiler/5 e.Files#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_NoCppCompiler<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Files#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & RenameTargets/4 # NoCppCompiler/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Files#1/2 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & RenameTargets/4 (/7 e.CppCompiler#1/5 )/8 e.Files#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.CppCompiler#1 as range 5
  // closed e.Files#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.CppCompiler#1/5 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ScanCollisions/4 HalfReuse: </7 } & Map/9 Tile{ HalfReuse: & GetFileName/8 AsIs: e.Files#1/2 AsIs: >/1 } >/10 Tile{ ]] }
  if( ! refalrts::alloc_name( context[9], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ScanCollisions, "ScanCollisions" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], GetFileName, "GetFileName" );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetFileName/4 (/7 s.Pos#1/9 # Output/10 e.FileName#1/5 )/8 >/1
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
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  & ident_Output<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.FileName#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/11 (/12 </13 & GetBaseNameLowerCase/14 e.FileName#1/5/15 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: s.Pos#1/9 AsIs: # Output/10 AsIs: e.FileName#1/5 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], GetBaseNameLowerCase, "GetBaseNameLowerCase" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[12], context[4] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GetFileName/4 (/7 s.Pos#1/9 # Source/10 (/13 e.Source#1/11 )/14 e.Output#1/5 )/8 >/1
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
  context[10] = refalrts::ident_left(  & ident_Source<int>::name, context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Source#1 as range 11
  // closed e.Output#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/15 (/16 </17 & GetBaseNameLowerCase/18 e.Output#1/5/19 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: s.Pos#1/9 AsIs: # Source/10 AsIs: (/13 AsIs: e.Source#1/11 AsIs: )/14 AsIs: e.Output#1/5 AsIs: )/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], GetBaseNameLowerCase, "GetBaseNameLowerCase" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
    return refalrts::cNoMemory;
  refalrts::reinit_close_call( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[16], context[4] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[15], context[18] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ScanCollisions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 e.Locations1#1/5 )/8 e.Files_B#1/13 (/17 (/21 e.BaseName#1/23 )/22 e.Locations2#1/15 )/18 e.Files_E#1/25 >/1
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
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.BaseName#1 as range 9
    // closed e.Locations1#1 as range 5
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[25] = context[2];
      context[26] = context[3];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[25], context[26] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      if( ! refalrts::repeated_evar_left( context[23], context[24], context[9], context[10], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.Locations2#1 as range 15
      // closed e.Files_E#1 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ScanCollisions/8 AsIs: e.Files_B#1/13 AsIs: (/17 AsIs: (/21 AsIs: e.BaseName#1/23 AsIs: )/22 } Tile{ AsIs: e.Locations1#1/5 } Tile{ AsIs: e.Locations2#1/15 } Tile{ AsIs: )/18 AsIs: e.Files_E#1/25 AsIs: >/1 ]] }
      refalrts::reinit_name( context[8], ScanCollisions, "ScanCollisions" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[8], context[22] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[0], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 e.Locations#1/5 )/8 e.Files#1/2 >/1
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
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.BaseName#1 as range 9
    // closed e.Locations#1 as range 5
    // closed e.Files#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.BaseName#1/9 )/12 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameLocations/4 } Tile{ AsIs: e.Locations#1/5 } Tile{ HalfReuse: >/7 HalfReuse: </11 } Tile{ HalfReuse: & ScanCollisions/8 AsIs: e.Files#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], RenameLocations, "RenameLocations" );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[8], ScanCollisions, "ScanCollisions" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[7], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ScanCollisions/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ScanCollisions/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult RenameLocations(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & RenameLocations/4 e.Locations_B#1/5 (/9 s.Pos1#1/11 # Output/12 e.FirstTarget#1/7 )/10 e.Locations_M#1/13 (/17 s.Pos2#1/19 # Output/20 e.SecondTarget#1/15 )/18 e.Locations_E#1/23 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[2];
      context[22] = context[3];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[21], context[22] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
        continue;
      context[12] = refalrts::ident_left(  & ident_Output<int>::name, context[7], context[8] );
      if( ! context[12] )
        continue;
      // closed e.FirstTarget#1 as range 7
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
        // closed e.Locations_E#1 as range 2
        if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
          continue;
        context[20] = refalrts::ident_left(  & ident_Output<int>::name, context[15], context[16] );
        if( ! context[20] )
          continue;
        // closed e.SecondTarget#1 as range 15

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  </0 & RenameLocations/4 e.Locations_B#1/5 (/9 s.Pos1#1/11 {REMOVED TILE}  e.Locations_M#1/13 {REMOVED TILE}  {REMOVED TILE}  )/18 e.Locations_E#1/23 {REMOVED TILE} 
        //RESULT: Tile{ [[ } Tile{ AsIs: (/17 AsIs: s.Pos2#1/19 Reuse: # Collision/20 } Tile{ HalfReuse: (/12 AsIs: e.FirstTarget#1/7 AsIs: )/10 } Tile{ AsIs: e.SecondTarget#1/15 } Tile{ HalfReuse: )/1 ]] }
        refalrts::update_ident( context[20], & ident_Collision<int>::name );
        refalrts::reinit_open_bracket( context[12] );
        refalrts::reinit_close_bracket( context[1] );
        refalrts::link_brackets( context[17], context[1] );
        refalrts::link_brackets( context[12], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[12], context[10] );
        res = refalrts::splice_evar( res, context[17], context[20] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[13], context[14], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & RenameLocations/4 e.Locations_B#1/5 (/9 s.Pos#1/11 # Output/12 e.Target#1/7 )/10 e.Locations_E#1/13 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[13] = context[2];
      context[14] = context[3];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[13], context[14] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      // closed e.Locations_E#1 as range 2
      if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
        continue;
      context[12] = refalrts::ident_left(  & ident_Output<int>::name, context[7], context[8] );
      if( ! context[12] )
        continue;
      // closed e.Target#1 as range 7

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: & RenameLocations_Aux/0 HalfReuse: 1/4 AsIs: e.Locations_B#1/5 AsIs: (/9 AsIs: s.Pos#1/11 AsIs: # Output/12 AsIs: e.Target#1/7 AsIs: )/10 AsIs: e.Locations_E#1/13 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[15] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_name( context[0], RenameLocations_Aux, "RenameLocations_Aux" );
      refalrts::reinit_number( context[4], 1UL );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[15] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[15], context[15] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & RenameLocations/4 e.Locations#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Locations#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & RenameLocations_Aux/0 HalfReuse: 0/4 AsIs: e.Locations#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], RenameLocations_Aux, "RenameLocations_Aux" );
  refalrts::reinit_number( context[4], 0UL );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_RenameLocations_Aux_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_RenameLocations_Aux_0/4 0/5 (/8 s.Pos#2/10 # Source/11 (/14 e.Source#2/12 )/15 e.Output#2/6 )/9 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::number_left( 0UL, context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[6], context[7] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_Source<int>::name, context[6], context[7] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[6], context[7] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Source#2 as range 12
    // closed e.Output#2 as range 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_RenameLocations_Aux_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ Reuse: 1/5 AsIs: (/8 AsIs: s.Pos#2/10 AsIs: # Source/11 AsIs: (/14 AsIs: e.Source#2/12 AsIs: )/15 AsIs: e.Output#2/6 AsIs: )/9 } Tile{ ]] }
    refalrts::update_number( context[5], 1UL );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_RenameLocations_Aux_0/4 s.Num#2/13 (/7 s.Pos#2/14 # Source/15 (/18 e.Source#2/16 )/19 e.Output#2/5 '.'/12 'c'/11 'p'/10 'p'/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_right( 'p', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( 'p', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_right( 'c', context[5], context[6] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_right( '.', context[5], context[6] );
    if( ! context[12] )
      continue;
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    context[15] = refalrts::ident_left(  & ident_Source<int>::name, context[5], context[6] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.Source#2 as range 16
    // closed e.Output#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#2/13 } >/20 Tile{ AsIs: (/7 AsIs: s.Pos#2/14 AsIs: # Source/15 AsIs: (/18 AsIs: e.Source#2/16 AsIs: )/19 AsIs: e.Output#2/5 Reuse: '@'/12 HalfReuse: </11 HalfReuse: & StrFromInt/10 HalfReuse: s.Num2 #13/9 HalfReuse: >/8 HalfReuse: '.'/1 } 'c'/21 'p'/22 'p'/23 )/24 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::update_char( context[12], '@' );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[10], StrFromInt, "StrFromInt" );
    refalrts::reinit_svar( context[9], context[13] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_char( context[1], '.' );
    refalrts::link_brackets( context[7], context[24] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[24] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_RenameLocations_Aux_0/4 s.Num#2/9 (/7 s.Pos#2/10 # Output/11 e.Output#2/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::ident_left(  & ident_Output<int>::name, context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_RenameLocations_Aux_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Num#2/9 AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Output/11 AsIs: e.Output#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult RenameLocations_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & RenameLocations_Aux/4 s.InitNumber#1/5 e.Locations#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Locations#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </6 & DelAccumulator/7 </8 Tile{ HalfReuse: & MapReduce/0 Reuse: & lambda_RenameLocations_Aux_0/4 AsIs: s.InitNumber#1/5 AsIs: e.Locations#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], DelAccumulator, "DelAccumulator" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], MapReduce, "MapReduce" );
  refalrts::update_name( context[4], lambda_RenameLocations_Aux_0, "lambda_RenameLocations_Aux_0" );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_CompileFiles_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_CompileFiles_0/4 # Success/5 e.OutputName#3/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Success<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.OutputName#3 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_CompileFiles_0/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/5 AsIs: e.OutputName#3/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_CompileFiles_0/4 # Fails/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_Fails<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_CompileFiles_0/4 # Fails/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 } Tile{ ]] }
  refalrts::reinit_ident( context[0], & ident_Fails<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_CompileFiles_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_CompileFiles_1/4 s.GenMode#1/9 s.Opt#1/10 (/7 s.Pos#2/11 # Output/12 e.OutputName#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    context[12] = refalrts::ident_left(  & ident_Output<int>::name, context[5], context[6] );
    if( ! context[12] )
      continue;
    // closed e.OutputName#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.GenMode#1/9 s.Opt#1/10 {REMOVED TILE}  s.Pos#2/11 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ HalfReuse: '+'/7 } 'L'/13 'i'/14 'n'/15 'k'/16 'i'/17 'n'/18 'g'/19 ' '/20 e.OutputName#2/5/21 Tile{ AsIs: >/1 } Tile{ HalfReuse: (/12 AsIs: e.OutputName#2/5 AsIs: )/8 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[13], 'L' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ' ' ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], WriteLine, "WriteLine" );
    refalrts::reinit_char( context[7], '+' );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[13], context[20] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_CompileFiles_1/4 s.GenMode#1/9 s.Opt#1/10 (/7 s.Pos#2/11 # Source/12 (/15 e.Source#2/13 )/16 e.OutputName#2/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::ident_left(  & ident_Source<int>::name, context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Source#2 as range 13
  // closed e.OutputName#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Opt#1/10 {REMOVED TILE}  s.Pos#2/11 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ HalfReuse: '*'/7 } 'C'/17 'o'/18 'm'/19 'p'/20 'i'/21 'l'/22 'i'/23 'n'/24 'g'/25 ' '/26 e.Source#2/13/27 ':'/29 >/30 </31 & Fetch/32 </33 & CompileFile/34 Tile{ AsIs: s.GenMode#1/9 } Tile{ HalfReuse: s.Opt1 #10/12 AsIs: (/15 AsIs: e.Source#2/13 AsIs: )/16 AsIs: e.OutputName#2/5 HalfReuse: >/8 HalfReuse: & lambda_CompileFiles_0/1 } >/35 Tile{ ]] }
  if( ! refalrts::alloc_char( context[17], 'C' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], ' ' ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[27], context[28], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], CompileFile, "CompileFile" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], WriteLine, "WriteLine" );
  refalrts::reinit_char( context[7], '*' );
  refalrts::reinit_svar( context[12], context[10] );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_name( context[1], lambda_CompileFiles_0, "lambda_CompileFiles_0" );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[33] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[17], context[34] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CompileFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CompileFiles/4 s.GenMode#1/5 s.Opt#1/6 e.Files#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </7 & Map/8 </9 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_CompileFiles_1/4 AsIs: s.GenMode#1/5 AsIs: s.Opt#1/6 } >/10 Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_CompileFiles_1, "lambda_CompileFiles_1" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Link_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Link_0/4 (/7 e.FileName#2/5 )/8 >/1
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
  // closed e.FileName#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: '\"'/7 AsIs: e.FileName#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
  refalrts::reinit_char( context[4], ' ' );
  refalrts::reinit_char( context[7], '\"' );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Link(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Link/4 # NoCppCompiler/5 e.Files#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_NoCppCompiler<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Files#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & Link/4 # NoCppCompiler/5 e.Files#1/2 >/1 {REMOVED TILE} 
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
  // </0 & Link/4 (/7 e.CommandLine#1/5 )/8 e.Files#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.CommandLine#1 as range 5
  // closed e.Files#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & System/4 } Tile{ AsIs: e.CommandLine#1/5 } Tile{ HalfReuse: </7 } & Map/9 Tile{ HalfReuse: & lambda_Link_0/8 AsIs: e.Files#1/2 AsIs: >/1 } >/10 Tile{ ]] }
  if( ! refalrts::alloc_name( context[9], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], System, "System" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], lambda_Link_0, "lambda_Link_0" );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GetBaseNameLowerCase(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GetBaseNameLowerCase/4 e.FileName#1/2 '.'/8 'c'/7 'p'/6 'p'/5 >/1
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
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  'c'/7 'p'/6 'p'/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGetFileName/4 AsIs: e.FileName#1/2 HalfReuse: >/8 } Tile{ ]] }
  refalrts::update_name( context[4], DoGetFileName, "DoGetFileName" );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult DoGetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGetFileName/4 e.FileName#1/2 '/'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '/', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.FileName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & DoGetFileName/4 e.FileName#1/2 '/'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGetFileName/4 e.FileName#1/2 '\\'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '\\', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.FileName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & DoGetFileName/4 e.FileName#1/2 '\\'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGetFileName/4 e.FileName#1/2 s.Last#1/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
      continue;
    // closed e.FileName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGetFileName/4 } Tile{ AsIs: e.FileName#1/2 } >/6 </7 & Lower/8 Tile{ AsIs: s.Last#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], Lower, "Lower" ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    res = refalrts::splice_evar( res, context[6], context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoGetFileName/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & DoGetFileName/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Lower_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Lower_0/4 s.Char#1/5 e.UpLo_B#3/6 s.Char#1/8 s.Lower#3/9 e.UpLo_E#3/10 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  refalrts::start_e_loop();
  do {
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::repeated_stvar_left( context[8], context[5], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[10], context[11] ) )
      continue;
    // closed e.UpLo_E#3 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_Lower_0/4 s.Char#1/5 e.UpLo_B#3/6 s.Char#1/8 s.Lower#3/9 e.UpLo_E#3/10 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.Lower3 #9/0 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Lower_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 67 elems
  refalrts::Iter context[67];
  refalrts::zeros( context, 67 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Lower_1/4 s.Char#1/5 e.Uppers_B#2/6 s.Char#1/8 e.Uppers_E#2/9 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[2];
      context[10] = context[3];
      if( ! refalrts::repeated_stvar_left( context[8], context[5], context[9], context[10] ) )
        continue;
      // closed e.Uppers_E#2 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Uppers_B#2/6 s.Char#1/8 e.Uppers_E#2/9 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } 'A'/11 'a'/12 'B'/13 'b'/14 'C'/15 'c'/16 'D'/17 'd'/18 'E'/19 'e'/20 'F'/21 'f'/22 'G'/23 'g'/24 'H'/25 'h'/26 'I'/27 'i'/28 'J'/29 'j'/30 'K'/31 'k'/32 'L'/33 'l'/34 'M'/35 'm'/36 'N'/37 'n'/38 'O'/39 'o'/40 'P'/41 'p'/42 'Q'/43 'q'/44 'R'/45 'r'/46 'S'/47 's'/48 'T'/49 't'/50 'U'/51 'u'/52 'V'/53 'v'/54 'W'/55 'w'/56 'X'/57 'x'/58 'Y'/59 'y'/60 'Z'/61 'z'/62 </63 & CreateClosure /64 & lambda_Lower_0/65 Tile{ AsIs: s.Char#1/5 } >/66 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( context[11], 'A' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[12], 'a' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[13], 'B' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[14], 'b' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[15], 'C' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[16], 'c' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[17], 'D' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[18], 'd' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[19], 'E' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[20], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[21], 'F' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[22], 'f' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[23], 'G' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[24], 'g' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[25], 'H' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[26], 'h' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[27], 'I' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[28], 'i' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[29], 'J' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[30], 'j' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[31], 'K' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[32], 'k' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[33], 'L' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[34], 'l' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[35], 'M' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[36], 'm' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[37], 'N' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[38], 'n' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[39], 'O' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[40], 'o' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[41], 'P' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[42], 'p' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[43], 'Q' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[44], 'q' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[45], 'R' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[46], 'r' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[47], 'S' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[48], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[49], 'T' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[50], 't' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[51], 'U' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[52], 'u' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[53], 'V' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[54], 'v' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[55], 'W' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[56], 'w' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[57], 'X' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[58], 'x' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[59], 'Y' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[60], 'y' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[61], 'Z' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[62], 'z' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[63] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[64], refalrts::create_closure, "refalrts::create_closure" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[65], lambda_Lower_0, "lambda_Lower_0" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[66] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], Fetch, "Fetch" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[66] );
      refalrts::push_stack( context[63] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[66], context[66] );
      res = refalrts::splice_evar( res, context[5], context[5] );
      res = refalrts::splice_evar( res, context[11], context[65] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Lower_1/4 s.Char#1/5 e.Uppers#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Uppers#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_Lower_1/4 s.Char#1/5 e.Uppers#2/2 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Char1 #5/0 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Lower(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Lower/4 s.Char#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </6 & Fetch/7 'A'/8 'B'/9 'C'/10 'D'/11 'E'/12 'F'/13 'G'/14 'H'/15 'I'/16 'J'/17 'K'/18 'L'/19 'M'/20 'N'/21 'O'/22 'P'/23 'Q'/24 'R'/25 'S'/26 'T'/27 'U'/28 'V'/29 'W'/30 'X'/31 'Y'/32 'Z'/33 </34 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_Lower_1/4 AsIs: s.Char#1/5 AsIs: >/1 } >/35 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'B' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'C' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'D' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'G' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'H' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'J' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'K' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'L' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'M' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'N' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'O' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'P' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'Q' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'S' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'T' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'U' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'V' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'W' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'X' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'Y' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'Z' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_Lower_1, "lambda_Lower_1" );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[34] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[34] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
