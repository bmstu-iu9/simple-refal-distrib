// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GetOpt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GetOpt_CheckRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #CompilerOption
template <typename SREFAL_PARAM_INT>
struct ident_CompilerOption {
  static const char *name() {
    return "CompilerOption";
  }
};

// identifier #CppCompiler
template <typename SREFAL_PARAM_INT>
struct ident_CppCompiler {
  static const char *name() {
    return "CppCompiler";
  }
};

// identifier #FILE
template <typename SREFAL_PARAM_INT>
struct ident_FILE {
  static const char *name() {
    return "FILE";
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

// identifier #NoRequiredParam
template <typename SREFAL_PARAM_INT>
struct ident_NoRequiredParam {
  static const char *name() {
    return "NoRequiredParam";
  }
};

// identifier #NoSourceFile
template <typename SREFAL_PARAM_INT>
struct ident_NoSourceFile {
  static const char *name() {
    return "NoSourceFile";
  }
};

// identifier #RepeatOption
template <typename SREFAL_PARAM_INT>
struct ident_RepeatOption {
  static const char *name() {
    return "RepeatOption";
  }
};

// identifier #Required
template <typename SREFAL_PARAM_INT>
struct ident_Required {
  static const char *name() {
    return "Required";
  }
};

// identifier #Runtime
template <typename SREFAL_PARAM_INT>
struct ident_Runtime {
  static const char *name() {
    return "Runtime";
  }
};

// identifier #RuntimeFolder
template <typename SREFAL_PARAM_INT>
struct ident_RuntimeFolder {
  static const char *name() {
    return "RuntimeFolder";
  }
};

// identifier #Search
template <typename SREFAL_PARAM_INT>
struct ident_Search {
  static const char *name() {
    return "Search";
  }
};

// identifier #SearchFolder
template <typename SREFAL_PARAM_INT>
struct ident_SearchFolder {
  static const char *name() {
    return "SearchFolder";
  }
};

// identifier #SrefCompiler
template <typename SREFAL_PARAM_INT>
struct ident_SrefCompiler {
  static const char *name() {
    return "SrefCompiler";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
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

static refalrts::FnResult lambda_ParseCommandLine_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_0/4 (/7 e.Errors#2/5 )/8 e.Options#2/2 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 & GetOpt_CheckRepeated/10 (/11 # CppCompiler/12 # SrefCompiler/13 Tile{ HalfReuse: # FILE/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: e.Options#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], GetOpt_CheckRepeated, "GetOpt_CheckRepeated" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_CppCompiler<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[13], & ident_SrefCompiler<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::reinit_ident( context[0], & ident_FILE<int>::name );
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_1/4 (/7 e.Errors#2/5 )/8 e.Options_B#2/9 (/13 # CppCompiler/15 s.Num#2/16 e.Command#2/11 )/14 e.Options_E#2/17 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Errors#2 as range 5
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[2];
      context[18] = context[3];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[17], context[18] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left(  & ident_CppCompiler<int>::name, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Options_E#2 as range 2
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.Command#2 as range 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_1/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#2/16 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 } Tile{ AsIs: (/13 HalfReuse: (/15 } Tile{ AsIs: e.Command#2/11 } Tile{ AsIs: )/14 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options_B#2/9 } Tile{ AsIs: e.Options_E#2/17 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[15] );
      refalrts::reinit_close_bracket( context[0] );
      refalrts::link_brackets( context[13], context[0] );
      refalrts::link_brackets( context[15], context[14] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[13], context[15] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_1/4 (/7 e.Errors#2/5 )/8 e.Options#2/2 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 HalfReuse: (/8 } Tile{ HalfReuse: 1/0 HalfReuse: # NoCppCompiler/4 } Tile{ HalfReuse: )/1 } )/9 (/10 (/11 )/12 )/13 Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_number( context[0], 1UL );
  refalrts::reinit_ident( context[4], & ident_NoCppCompiler<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[10], context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_2/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options_B#2/13 (/17 # SrefCompiler/19 s.Num#2/20 e.Command#2/15 )/18 e.Options_E#2/21 >/1
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
    // closed e.Errors#2 as range 5
    // closed e.Bag#2 as range 9
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
      context[19] = refalrts::ident_left(  & ident_SrefCompiler<int>::name, context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.Options_E#2 as range 2
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      // closed e.Command#2 as range 15

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_2/4 {REMOVED TILE}  {REMOVED TILE}  (/17 # SrefCompiler/19 s.Num#2/20 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } Tile{ AsIs: e.Command#2/15 } Tile{ AsIs: )/18 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options_B#2/13 } Tile{ AsIs: e.Options_E#2/21 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_close_bracket( context[0] );
      refalrts::link_brackets( context[11], context[0] );
      refalrts::link_brackets( context[12], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_2/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } Tile{ HalfReuse: 's'/0 HalfReuse: 'r'/4 } Tile{ HalfReuse: 'e'/1 } 'f'/13 'c'/14 '-'/15 'c'/16 'o'/17 'r'/18 'e'/19 )/20 )/21 Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_char( context[13], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_char( context[0], 's' );
  refalrts::reinit_char( context[4], 'r' );
  refalrts::reinit_char( context[1], 'e' );
  refalrts::link_brackets( context[11], context[21] );
  refalrts::link_brackets( context[12], context[20] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[21] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_3/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options_B#2/13 (/17 # FILE/19 s.Num#2/20 e.FileName#2/15 )/18 e.Options_E#2/21 >/1
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
    // closed e.Errors#2 as range 5
    // closed e.Bag#2 as range 9
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
      context[19] = refalrts::ident_left(  & ident_FILE<int>::name, context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.Options_E#2 as range 2
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      // closed e.FileName#2 as range 15

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_3/4 {REMOVED TILE}  {REMOVED TILE}  (/17 # FILE/19 s.Num#2/20 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } Tile{ AsIs: e.FileName#2/15 } Tile{ AsIs: )/18 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options_B#2/13 } Tile{ AsIs: e.Options_E#2/21 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_close_bracket( context[0] );
      refalrts::link_brackets( context[11], context[0] );
      refalrts::link_brackets( context[12], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_3/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: 1/4 } Tile{ HalfReuse: # NoSourceFile/1 } )/13 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } )/14 )/15 Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_number( context[4], 1UL );
  refalrts::reinit_ident( context[1], & ident_NoSourceFile<int>::name );
  refalrts::reinit_open_bracket( context[12] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::link_brackets( context[12], context[14] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_4/4 (/7 (/11 e.CppCompiler#3/9 )/12 (/15 e.SrefCompiler#3/13 )/16 e.Bag#3/5 )/8 (/19 # CompilerOption/21 s.Num#3/22 e.Flag#3/17 )/20 >/1
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
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  & ident_CompilerOption<int>::name, context[17], context[18] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.CppCompiler#3 as range 9
    // closed e.SrefCompiler#3 as range 13
    // closed e.Bag#3 as range 5
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    // closed e.Flag#3 as range 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/19 # CompilerOption/21 s.Num#3/22 {REMOVED TILE}  )/20 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.CppCompiler#3/9 AsIs: )/12 AsIs: (/15 AsIs: e.SrefCompiler#3/13 HalfReuse: ' '/16 } Tile{ HalfReuse: '\"'/0 } Tile{ AsIs: e.Flag#3/17 } Tile{ HalfReuse: '\"'/4 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Bag#3/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_char( context[16], ' ' );
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], '\"' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[15], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_4/4 (/7 e.Bag#3/5 )/8 t.OtherOption#3/9 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Bag#3 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_ParseCommandLine_4/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Bag#3/5 AsIs: )/8 AsIs: t.OtherOption#3/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_5/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } )/13 Tile{ AsIs: </0 Reuse: & MapReduce/4 } Tile{ HalfReuse: & lambda_ParseCommandLine_4/8 AsIs: (/11 AsIs: e.Bag#2/9 AsIs: )/12 AsIs: e.Options#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], MapReduce, "MapReduce" );
  refalrts::reinit_name( context[8], lambda_ParseCommandLine_4, "lambda_ParseCommandLine_4" );
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_6(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_6/4 (/7 # SearchFolder/9 s.Num#3/10 e.Folder#3/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_SearchFolder<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.Folder#3 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # SearchFolder/9 s.Num#3/10 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Search/4 } Tile{ AsIs: e.Folder#3/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Search<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_6/4 (/7 # RuntimeFolder/9 s.Num#3/10 e.Folder#3/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_RuntimeFolder<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folder#3 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 # RuntimeFolder/9 s.Num#3/10 {REMOVED TILE}  )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Runtime/4 } Tile{ AsIs: e.Folder#3/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_Runtime<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_7(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_7/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 AsIs: )/12 } Tile{ AsIs: </0 Reuse: & Map/4 } & lambda_ParseCommandLine_6/13 Tile{ AsIs: e.Options#2/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[13], lambda_ParseCommandLine_6, "lambda_ParseCommandLine_6" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Map, "Map" );
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_8(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_8/4 # CppCompiler/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_CppCompiler<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'o'/0 HalfReuse: 'p'/4 HalfReuse: 't'/5 HalfReuse: 'i'/1 } 'o'/6 'n'/7 ' '/8 '-'/9 'c'/10 ' '/11 'o'/12 'r'/13 ' '/14 '-'/15 '-'/16 'c'/17 'p'/18 'p'/19 '-'/20 'c'/21 'o'/22 'm'/23 'm'/24 'a'/25 'n'/26 'd'/27 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'd' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'o' );
    refalrts::reinit_char( context[4], 'p' );
    refalrts::reinit_char( context[5], 't' );
    refalrts::reinit_char( context[1], 'i' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_8/4 # SrefCompiler/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_SrefCompiler<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'o'/0 HalfReuse: 'p'/4 HalfReuse: 't'/5 HalfReuse: 'i'/1 } 'o'/6 'n'/7 ' '/8 '-'/9 's'/10 ' '/11 'o'/12 'r'/13 ' '/14 '-'/15 '-'/16 's'/17 'r'/18 'e'/19 'f'/20 '-'/21 'c'/22 'o'/23 'm'/24 'm'/25 'a'/26 'n'/27 'd'/28 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'd' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'o' );
    refalrts::reinit_char( context[4], 'p' );
    refalrts::reinit_char( context[5], 't' );
    refalrts::reinit_char( context[1], 'i' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[28] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_8/4 # FILE/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_FILE<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 'o'/4 HalfReuse: 'u'/5 HalfReuse: 'r'/1 } 'c'/6 'e'/7 ' '/8 'f'/9 'i'/10 'l'/11 'e'/12 'n'/13 'a'/14 'm'/15 'e'/16 Tile{ ]] }
  if( ! refalrts::alloc_char( context[6], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'e' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 's' );
  refalrts::reinit_char( context[4], 'o' );
  refalrts::reinit_char( context[5], 'u' );
  refalrts::reinit_char( context[1], 'r' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[16] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_9(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # NoRequiredParam/10 e.Param#3/5 )/8 >/1
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
    context[10] = refalrts::ident_left(  & ident_NoRequiredParam<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Param#3 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 } Tile{ HalfReuse: 'p'/0 HalfReuse: 't'/4 } 'i'/11 'o'/12 'n'/13 ' '/14 Tile{ AsIs: e.Param#3/5 } ' '/15 'e'/16 'x'/17 'p'/18 'e'/19 'c'/20 't'/21 's'/22 ' '/23 'p'/24 'a'/25 'r'/26 'a'/27 'm'/28 'e'/29 't'/30 'e'/31 Tile{ HalfReuse: 'r'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[11], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'e' ) )
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
    res = refalrts::splice_evar( res, context[15], context[31] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # UnknownShortOption/10 s.Option#3/11 )/8 >/1
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
    context[10] = refalrts::ident_left(  & ident_UnknownShortOption<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'u'/10 } Tile{ HalfReuse: 'n'/0 HalfReuse: 'k'/4 } Tile{ HalfReuse: 'n'/1 } 'o'/12 'w'/13 'n'/14 ' '/15 'o'/16 'p'/17 't'/18 'i'/19 'o'/20 'n'/21 ' '/22 '-'/23 Tile{ AsIs: s.Option#3/11 AsIs: )/8 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[12], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'w' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], '-' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'u' );
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'k' );
    refalrts::reinit_char( context[1], 'n' );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[8] );
    res = refalrts::splice_evar( res, context[12], context[23] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # UnknownLongOption/10 e.Option#3/5 )/8 >/1
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
    context[10] = refalrts::ident_left(  & ident_UnknownLongOption<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Option#3 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'u'/10 } Tile{ HalfReuse: 'n'/0 HalfReuse: 'k'/4 } Tile{ HalfReuse: 'n'/8 } 'o'/11 'w'/12 'n'/13 ' '/14 'o'/15 'p'/16 't'/17 'i'/18 'o'/19 'n'/20 ' '/21 '-'/22 '-'/23 Tile{ AsIs: e.Option#3/5 } Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[11], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'w' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], '-' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'u' );
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'k' );
    refalrts::reinit_char( context[8], 'n' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[23] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # RepeatOption/10 s.Tag#3/11 )/8 >/1
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
    context[10] = refalrts::ident_left(  & ident_RepeatOption<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Pos#3/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Pos3 #9/4 HalfReuse: </7 } Tile{ HalfReuse: & Fetch/10 AsIs: s.Tag#3/11 HalfReuse: & lambda_ParseCommandLine_8/8 AsIs: >/1 } ' '/12 'm'/13 'u'/14 's'/15 't'/16 ' '/17 'a'/18 'p'/19 'p'/20 'e'/21 'a'/22 'r'/23 ' '/24 'o'/25 'n'/26 'e'/27 ' '/28 't'/29 'i'/30 'm'/31 'e'/32 )/33 Tile{ ]] }
    if( ! refalrts::alloc_char( context[12], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[10], Fetch, "Fetch" );
    refalrts::reinit_name( context[8], lambda_ParseCommandLine_8, "lambda_ParseCommandLine_8" );
    refalrts::link_brackets( context[0], context[33] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[33] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/10 # NoCppCompiler/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_right(  & ident_NoCppCompiler<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/10 HalfReuse: 'o'/9 HalfReuse: 'p'/8 HalfReuse: 't'/1 } Tile{ HalfReuse: 'i'/0 HalfReuse: 'o'/4 } 'n'/11 ' '/12 '-'/13 'c'/14 ' '/15 'o'/16 'r'/17 ' '/18 '-'/19 '-'/20 'c'/21 'p'/22 'p'/23 '-'/24 'c'/25 'o'/26 'm'/27 'm'/28 'a'/29 'n'/30 'd'/31 ' '/32 'n'/33 'o'/34 't'/35 ' '/36 'f'/37 'o'/38 'u'/39 'n'/40 'd'/41 )/42 Tile{ ]] }
    if( ! refalrts::alloc_char( context[11], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[42] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[9], 'o' );
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_char( context[1], 't' );
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'o' );
    refalrts::link_brackets( context[7], context[42] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[42] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/10 # NoSourceFile/9 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_right(  & ident_NoSourceFile<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/10 HalfReuse: 'e'/9 HalfReuse: 'x'/8 HalfReuse: 'p'/1 } Tile{ HalfReuse: 'e'/0 HalfReuse: 'c'/4 } 't'/11 'e'/12 'd'/13 ' '/14 's'/15 'o'/16 'u'/17 'r'/18 'c'/19 'e'/20 ' '/21 'f'/22 'i'/23 'l'/24 'e'/25 'n'/26 'a'/27 'm'/28 'e'/29 ' '/30 'i'/31 'n'/32 ' '/33 'c'/34 'o'/35 'm'/36 'm'/37 'a'/38 'n'/39 'd'/40 ' '/41 'l'/42 'i'/43 'n'/44 'e'/45 )/46 Tile{ ]] }
  if( ! refalrts::alloc_char( context[11], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[46] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[9], 'e' );
  refalrts::reinit_char( context[8], 'x' );
  refalrts::reinit_char( context[1], 'p' );
  refalrts::reinit_char( context[0], 'e' );
  refalrts::reinit_char( context[4], 'c' );
  refalrts::link_brackets( context[7], context[46] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[46] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_10(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_10/4 (/7 )/8 (/11 (/15 e.CppCompiler#2/13 )/16 (/19 e.SrefCompiler#2/17 )/20 (/23 e.MainSource#2/21 )/24 )/12 e.Folders#2/2 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[9], context[10] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[9], context[10] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.CppCompiler#2 as range 13
    // closed e.SrefCompiler#2 as range 17
    // closed e.MainSource#2 as range 21
    // closed e.Folders#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_ParseCommandLine_10/4 (/7 )/8 {REMOVED TILE}  )/12 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/11 AsIs: (/15 AsIs: e.CppCompiler#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.SrefCompiler#2/17 AsIs: )/20 AsIs: (/23 AsIs: e.MainSource#2/21 AsIs: )/24 } Tile{ AsIs: e.Folders#2/2 } Tile{ ]] }
    refalrts::reinit_ident( context[11], & ident_Success<int>::name );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[11], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_10/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Folders#2/2 >/1
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
  // closed e.Folders#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Bag#2/9 )/12 e.Folders#2/2 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/11 } Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_ParseCommandLine_9/7 AsIs: e.Errors#2/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::reinit_ident( context[11], & ident_Fails<int>::name );
  refalrts::update_name( context[4], Map, "Map" );
  refalrts::reinit_name( context[7], lambda_ParseCommandLine_9, "lambda_ParseCommandLine_9" );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 135 elems
  refalrts::Iter context[135];
  refalrts::zeros( context, 135 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseCommandLine/4 e.Arguments#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arguments#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & GetOpt/6 (/7 (/8 # CppCompiler/9 # Required/10 'c'/11 (/12 'c'/13 'p'/14 'p'/15 '-'/16 'c'/17 'o'/18 'm'/19 'm'/20 'a'/21 'n'/22 'd'/23 )/24 )/25 (/26 # SrefCompiler/27 # Required/28 's'/29 (/30 's'/31 'r'/32 'e'/33 'f'/34 '-'/35 'c'/36 'o'/37 'm'/38 'm'/39 'a'/40 'n'/41 'd'/42 )/43 )/44 (/45 # SearchFolder/46 # Required/47 'd'/48 (/49 'd'/50 'i'/51 'r'/52 )/53 (/54 'd'/55 'i'/56 'r'/57 'e'/58 'c'/59 't'/60 'o'/61 'r'/62 'y'/63 )/64 )/65 (/66 # RuntimeFolder/67 # Required/68 'D'/69 (/70 'r'/71 'u'/72 'n'/73 't'/74 'i'/75 'm'/76 'e'/77 '-'/78 'd'/79 'i'/80 'r'/81 )/82 (/83 'r'/84 'u'/85 'n'/86 't'/87 'i'/88 'm'/89 'e'/90 '-'/91 'd'/92 'i'/93 'r'/94 'e'/95 'c'/96 't'/97 'o'/98 'r'/99 'y'/100 )/101 )/102 (/103 # CompilerOption/104 # Required/105 'X'/106 (/107 't'/108 'h'/109 'r'/110 'u'/111 )/112 (/113 't'/114 'h'/115 'r'/116 'o'/117 'u'/118 'g'/119 'h'/120 )/121 )/122 )/123 Tile{ AsIs: e.Arguments#1/2 } >/124 </125 & Seq/126 & lambda_ParseCommandLine_0/127 & lambda_ParseCommandLine_1/128 & lambda_ParseCommandLine_2/129 & lambda_ParseCommandLine_3/130 & lambda_ParseCommandLine_5/131 & lambda_ParseCommandLine_7/132 & lambda_ParseCommandLine_10/133 >/134 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], GetOpt, "GetOpt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_CppCompiler<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[27], & ident_SrefCompiler<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[28], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[44] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[46], & ident_SearchFolder<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[47], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[49] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[52], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[53] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[54] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[56], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[57], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[58], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[59], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[60], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[61], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[62], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[63], 'y' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[64] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[65] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[66] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[67], & ident_RuntimeFolder<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[68], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[69], 'D' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[70] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[71], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[72], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[73], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[74], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[75], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[76], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[77], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[78], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[79], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[80], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[81], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[82] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[83] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[84], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[85], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[86], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[87], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[88], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[89], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[90], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[91], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[92], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[93], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[94], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[95], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[96], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[97], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[98], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[99], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[100], 'y' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[101] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[102] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[103] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[104], & ident_CompilerOption<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[105], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[106], 'X' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[107] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[108], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[109], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[110], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[111], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[112] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[113] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[114], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[115], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[116], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[117], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[118], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[119], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[120], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[121] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[122] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[123] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[124] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[125] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[126], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[127], lambda_ParseCommandLine_0, "lambda_ParseCommandLine_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[128], lambda_ParseCommandLine_1, "lambda_ParseCommandLine_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[129], lambda_ParseCommandLine_2, "lambda_ParseCommandLine_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[130], lambda_ParseCommandLine_3, "lambda_ParseCommandLine_3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[131], lambda_ParseCommandLine_5, "lambda_ParseCommandLine_5" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[132], lambda_ParseCommandLine_7, "lambda_ParseCommandLine_7" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[133], lambda_ParseCommandLine_10, "lambda_ParseCommandLine_10" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[134] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[134] );
  refalrts::push_stack( context[125] );
  refalrts::push_stack( context[124] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[7], context[123] );
  refalrts::link_brackets( context[103], context[122] );
  refalrts::link_brackets( context[113], context[121] );
  refalrts::link_brackets( context[107], context[112] );
  refalrts::link_brackets( context[66], context[102] );
  refalrts::link_brackets( context[83], context[101] );
  refalrts::link_brackets( context[70], context[82] );
  refalrts::link_brackets( context[45], context[65] );
  refalrts::link_brackets( context[54], context[64] );
  refalrts::link_brackets( context[49], context[53] );
  refalrts::link_brackets( context[26], context[44] );
  refalrts::link_brackets( context[30], context[43] );
  refalrts::link_brackets( context[8], context[25] );
  refalrts::link_brackets( context[12], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[124], context[134] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[123] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
