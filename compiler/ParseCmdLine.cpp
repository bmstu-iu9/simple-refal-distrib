// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GetOpt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GetOpt_CheckRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #BadValue_GenMode
template <typename SREFAL_PARAM_INT>
struct ident_BadValue_GenMode {
  static const char *name() {
    return "BadValue_GenMode";
  }
};

// identifier #BadValue_Opt
template <typename SREFAL_PARAM_INT>
struct ident_BadValue_Opt {
  static const char *name() {
    return "BadValue_Opt";
  }
};

// identifier #Both
template <typename SREFAL_PARAM_INT>
struct ident_Both {
  static const char *name() {
    return "Both";
  }
};

// identifier #CppCompiler
template <typename SREFAL_PARAM_INT>
struct ident_CppCompiler {
  static const char *name() {
    return "CppCompiler";
  }
};

// identifier #CppFlag
template <typename SREFAL_PARAM_INT>
struct ident_CppFlag {
  static const char *name() {
    return "CppFlag";
  }
};

// identifier #CppFlags
template <typename SREFAL_PARAM_INT>
struct ident_CppFlags {
  static const char *name() {
    return "CppFlags";
  }
};

// identifier #ErrorFile
template <typename SREFAL_PARAM_INT>
struct ident_ErrorFile {
  static const char *name() {
    return "ErrorFile";
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

// identifier #FlagsForNoCompiler
template <typename SREFAL_PARAM_INT>
struct ident_FlagsForNoCompiler {
  static const char *name() {
    return "FlagsForNoCompiler";
  }
};

// identifier #GenMode
template <typename SREFAL_PARAM_INT>
struct ident_GenMode {
  static const char *name() {
    return "GenMode";
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

// identifier #NoRequiredParam
template <typename SREFAL_PARAM_INT>
struct ident_NoRequiredParam {
  static const char *name() {
    return "NoRequiredParam";
  }
};

// identifier #OnlyDirect
template <typename SREFAL_PARAM_INT>
struct ident_OnlyDirect {
  static const char *name() {
    return "OnlyDirect";
  }
};

// identifier #OnlyInterpret
template <typename SREFAL_PARAM_INT>
struct ident_OnlyInterpret {
  static const char *name() {
    return "OnlyInterpret";
  }
};

// identifier #Opt
template <typename SREFAL_PARAM_INT>
struct ident_Opt {
  static const char *name() {
    return "Opt";
  }
};

// identifier #OptNone
template <typename SREFAL_PARAM_INT>
struct ident_OptNone {
  static const char *name() {
    return "OptNone";
  }
};

// identifier #OptPattern
template <typename SREFAL_PARAM_INT>
struct ident_OptPattern {
  static const char *name() {
    return "OptPattern";
  }
};

// identifier #OptResult
template <typename SREFAL_PARAM_INT>
struct ident_OptResult {
  static const char *name() {
    return "OptResult";
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

// identifier #RuntimeFolder
template <typename SREFAL_PARAM_INT>
struct ident_RuntimeFolder {
  static const char *name() {
    return "RuntimeFolder";
  }
};

// identifier #SearchFolder
template <typename SREFAL_PARAM_INT>
struct ident_SearchFolder {
  static const char *name() {
    return "SearchFolder";
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
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
  //RESULT: Tile{ [[ } </9 & GetOpt_CheckRepeated/10 (/11 # CppCompiler/12 # GenMode/13 # Opt/14 Tile{ HalfReuse: # ErrorFile/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: e.Options#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], GetOpt_CheckRepeated, "GetOpt_CheckRepeated" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_CppCompiler<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[13], & ident_GenMode<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], & ident_Opt<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::reinit_ident( context[0], & ident_ErrorFile<int>::name );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[14] );
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
    // </0 & lambda_ParseCommandLine_1/4 (/7 e.Errors#2/5 )/8 e.Options_B#2/9 (/13 # CppCompiler/15 s.Num#2/16 e.CppCompiler#2/11 )/14 e.Options_E#2/17 >/1
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
      // closed e.CppCompiler#2 as range 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_1/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#2/16 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 } Tile{ AsIs: (/13 HalfReuse: (/15 } Tile{ AsIs: e.CppCompiler#2/11 } Tile{ AsIs: )/14 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options_B#2/9 } Tile{ AsIs: e.Options_E#2/17 } Tile{ ]] }
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
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # NoCppCompiler/4 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_NoCppCompiler<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_2/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options_B#2/13 (/17 # GenMode/19 s.Num#2/24 'b'/23 'o'/22 't'/21 'h'/20 )/18 e.Options_E#2/25 >/1
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
      context[25] = context[2];
      context[26] = context[3];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[25], context[26] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::ident_left(  & ident_GenMode<int>::name, context[15], context[16] );
      if( ! context[19] )
        continue;
      context[20] = refalrts::char_right( 'h', context[15], context[16] );
      if( ! context[20] )
        continue;
      context[21] = refalrts::char_right( 't', context[15], context[16] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::char_right( 'o', context[15], context[16] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_right( 'b', context[15], context[16] );
      if( ! context[23] )
        continue;
      // closed e.Options_E#2 as range 2
      if( ! refalrts::svar_left( context[24], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & lambda_ParseCommandLine_2/4 {REMOVED TILE}  {REMOVED TILE}  (/17 # GenMode/19 s.Num#2/24 'b'/23 'o'/22 't'/21 'h'/20 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: # Both/12 } Tile{ AsIs: )/18 } Tile{ AsIs: e.Options_B#2/13 } Tile{ AsIs: e.Options_E#2/25 } Tile{ ]] }
      refalrts::reinit_ident( context[12], & ident_Both<int>::name );
      refalrts::link_brackets( context[11], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_2/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options_B#2/13 (/17 # GenMode/19 s.Num#2/26 'd'/25 'i'/24 'r'/23 'e'/22 'c'/21 't'/20 )/18 e.Options_E#2/27 >/1
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
      context[27] = context[2];
      context[28] = context[3];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[27], context[28] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::ident_left(  & ident_GenMode<int>::name, context[15], context[16] );
      if( ! context[19] )
        continue;
      context[20] = refalrts::char_right( 't', context[15], context[16] );
      if( ! context[20] )
        continue;
      context[21] = refalrts::char_right( 'c', context[15], context[16] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::char_right( 'e', context[15], context[16] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_right( 'r', context[15], context[16] );
      if( ! context[23] )
        continue;
      context[24] = refalrts::char_right( 'i', context[15], context[16] );
      if( ! context[24] )
        continue;
      context[25] = refalrts::char_right( 'd', context[15], context[16] );
      if( ! context[25] )
        continue;
      // closed e.Options_E#2 as range 2
      if( ! refalrts::svar_left( context[26], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & lambda_ParseCommandLine_2/4 {REMOVED TILE}  {REMOVED TILE}  (/17 # GenMode/19 s.Num#2/26 'd'/25 'i'/24 'r'/23 'e'/22 'c'/21 't'/20 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: # OnlyDirect/12 } Tile{ AsIs: )/18 } Tile{ AsIs: e.Options_B#2/13 } Tile{ AsIs: e.Options_E#2/27 } Tile{ ]] }
      refalrts::reinit_ident( context[12], & ident_OnlyDirect<int>::name );
      refalrts::link_brackets( context[11], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_2/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options_B#2/13 (/17 # GenMode/19 s.Num#2/26 'i'/25 'n'/24 't'/23 'e'/22 'r'/21 'p'/20 )/18 e.Options_E#2/27 >/1
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
      context[27] = context[2];
      context[28] = context[3];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[27], context[28] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::ident_left(  & ident_GenMode<int>::name, context[15], context[16] );
      if( ! context[19] )
        continue;
      context[20] = refalrts::char_right( 'p', context[15], context[16] );
      if( ! context[20] )
        continue;
      context[21] = refalrts::char_right( 'r', context[15], context[16] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::char_right( 'e', context[15], context[16] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_right( 't', context[15], context[16] );
      if( ! context[23] )
        continue;
      context[24] = refalrts::char_right( 'n', context[15], context[16] );
      if( ! context[24] )
        continue;
      context[25] = refalrts::char_right( 'i', context[15], context[16] );
      if( ! context[25] )
        continue;
      // closed e.Options_E#2 as range 2
      if( ! refalrts::svar_left( context[26], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & lambda_ParseCommandLine_2/4 {REMOVED TILE}  {REMOVED TILE}  (/17 # GenMode/19 s.Num#2/26 'i'/25 'n'/24 't'/23 'e'/22 'r'/21 'p'/20 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: # OnlyInterpret/12 } Tile{ AsIs: )/18 } Tile{ AsIs: e.Options_B#2/13 } Tile{ AsIs: e.Options_E#2/27 } Tile{ ]] }
      refalrts::reinit_ident( context[12], & ident_OnlyInterpret<int>::name );
      refalrts::link_brackets( context[11], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_2/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options_B#2/13 (/17 # GenMode/19 s.Num#2/20 e.BadVal#2/15 )/18 e.Options_E#2/21 >/1
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
      context[19] = refalrts::ident_left(  & ident_GenMode<int>::name, context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.Options_E#2 as range 2
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      // closed e.BadVal#2 as range 15

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#2/20 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: (/17 HalfReuse: s.Num2 #20/19 } Tile{ HalfReuse: # BadValue_GenMode/4 } Tile{ AsIs: e.BadVal#2/15 } Tile{ AsIs: )/18 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: # Both/12 } Tile{ HalfReuse: )/7 } Tile{ AsIs: e.Options_B#2/13 } Tile{ AsIs: e.Options_E#2/21 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_svar( context[19], context[20] );
      refalrts::reinit_ident( context[4], & ident_BadValue_GenMode<int>::name );
      refalrts::reinit_ident( context[12], & ident_Both<int>::name );
      refalrts::reinit_close_bracket( context[7] );
      refalrts::link_brackets( context[11], context[7] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[17], context[19] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[0], res );
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_2/4 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: # Both/12 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  refalrts::reinit_ident( context[12], & ident_Both<int>::name );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::link_brackets( context[11], context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_3/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options_B#2/13 (/17 # Opt/19 s.Num#2/21 'P'/20 )/18 e.Options_E#2/22 >/1
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
      context[22] = context[2];
      context[23] = context[3];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[22], context[23] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::ident_left(  & ident_Opt<int>::name, context[15], context[16] );
      if( ! context[19] )
        continue;
      context[20] = refalrts::char_right( 'P', context[15], context[16] );
      if( ! context[20] )
        continue;
      // closed e.Options_E#2 as range 2
      if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & lambda_ParseCommandLine_3/4 {REMOVED TILE}  {REMOVED TILE}  (/17 # Opt/19 s.Num#2/21 'P'/20 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: # OptPattern/12 } Tile{ AsIs: )/18 } Tile{ AsIs: e.Options_B#2/13 } Tile{ AsIs: e.Options_E#2/22 } Tile{ ]] }
      refalrts::reinit_ident( context[12], & ident_OptPattern<int>::name );
      refalrts::link_brackets( context[11], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_3/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options_B#2/13 (/17 # Opt/19 s.Num#2/21 'R'/20 )/18 e.Options_E#2/22 >/1
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
      context[22] = context[2];
      context[23] = context[3];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[22], context[23] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::ident_left(  & ident_Opt<int>::name, context[15], context[16] );
      if( ! context[19] )
        continue;
      context[20] = refalrts::char_right( 'R', context[15], context[16] );
      if( ! context[20] )
        continue;
      // closed e.Options_E#2 as range 2
      if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & lambda_ParseCommandLine_3/4 {REMOVED TILE}  {REMOVED TILE}  (/17 # Opt/19 s.Num#2/21 'R'/20 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: # OptResult/12 } Tile{ AsIs: )/18 } Tile{ AsIs: e.Options_B#2/13 } Tile{ AsIs: e.Options_E#2/22 } Tile{ ]] }
      refalrts::reinit_ident( context[12], & ident_OptResult<int>::name );
      refalrts::link_brackets( context[11], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_3/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options_B#2/13 (/17 # Opt/19 s.Num#2/20 e.BadOpt#2/15 )/18 e.Options_E#2/21 >/1
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
      context[19] = refalrts::ident_left(  & ident_Opt<int>::name, context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.Options_E#2 as range 2
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      // closed e.BadOpt#2 as range 15

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#2/20 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: (/17 HalfReuse: s.Num2 #20/19 } Tile{ HalfReuse: # BadValue_Opt/4 } Tile{ AsIs: e.BadOpt#2/15 } Tile{ AsIs: )/18 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: # OptNone/12 } Tile{ HalfReuse: )/7 } Tile{ AsIs: e.Options_B#2/13 } Tile{ AsIs: e.Options_E#2/21 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_svar( context[19], context[20] );
      refalrts::reinit_ident( context[4], & ident_BadValue_Opt<int>::name );
      refalrts::reinit_ident( context[12], & ident_OptNone<int>::name );
      refalrts::reinit_close_bracket( context[7] );
      refalrts::link_brackets( context[11], context[7] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[17], context[19] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[0], res );
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_3/4 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: # OptNone/12 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  refalrts::reinit_ident( context[12], & ident_OptNone<int>::name );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::link_brackets( context[11], context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
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
    // </0 & lambda_ParseCommandLine_4/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options_B#2/13 (/17 # ErrorFile/19 s.Num#2/20 e.ErrorFile#2/15 )/18 e.Options_E#2/21 >/1
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
      context[19] = refalrts::ident_left(  & ident_ErrorFile<int>::name, context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.Options_E#2 as range 2
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      // closed e.ErrorFile#2 as range 15

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_4/4 {REMOVED TILE}  {REMOVED TILE}  (/17 {REMOVED TILE}  s.Num#2/20 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } Tile{ AsIs: # ErrorFile/19 } Tile{ AsIs: e.ErrorFile#2/15 } Tile{ AsIs: )/18 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options_B#2/13 } Tile{ AsIs: e.Options_E#2/21 } Tile{ ]] }
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
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_4/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_4/4 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: # NoErrorFile/12 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  refalrts::reinit_ident( context[12], & ident_NoErrorFile<int>::name );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::link_brackets( context[11], context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 AsIs: )/12 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::link_brackets( context[4], context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_6(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_6/4 (/8 e.Folder#2/6 )/9 # NoCppCompiler/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_right(  & ident_NoCppCompiler<int>::name, context[2], context[3] );
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
    // closed e.Folder#2 as range 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_ParseCommandLine_6/4 (/8 e.Folder#2/6 )/9 # NoCppCompiler/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NoCppCompiler/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_NoCppCompiler<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_6/4 (/7 e.Folder#2/5 )/8 (/11 e.CppCompiler#3/9 )/12 >/1
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
  // closed e.Folder#2 as range 5
  // closed e.CppCompiler#3 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 } Tile{ AsIs: e.CppCompiler#3/9 } Tile{ HalfReuse: ' '/1 } Tile{ HalfReuse: '-'/0 HalfReuse: 'I'/4 HalfReuse: '\"'/7 AsIs: e.Folder#2/5 HalfReuse: '\"'/8 HalfReuse: )/11 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_char( context[1], ' ' );
  refalrts::reinit_char( context[0], '-' );
  refalrts::reinit_char( context[4], 'I' );
  refalrts::reinit_char( context[7], '\"' );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::reinit_close_bracket( context[11] );
  refalrts::link_brackets( context[12], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_7(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_7/4 (/7 (/11 e.Errors#2/9 )/12 (/15 # NoCppCompiler/17 e.Bag#2/13 )/16 )/8 (/20 # CppFlags/22 s.Num#2/23 e.Flags#2/18 )/21 >/1
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
    context[17] = refalrts::ident_left(  & ident_NoCppCompiler<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_CppFlags<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Errors#2 as range 9
    // closed e.Bag#2 as range 13
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    // closed e.Flags#2 as range 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_7/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#2/23 e.Flags#2/18 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Errors#2/9 } Tile{ AsIs: (/20 HalfReuse: s.Num2 #23/22 } Tile{ HalfReuse: # FlagsForNoCompiler/0 } Tile{ AsIs: )/21 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: # NoCppCompiler/17 AsIs: e.Bag#2/13 AsIs: )/16 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_svar( context[22], context[23] );
    refalrts::reinit_ident( context[0], & ident_FlagsForNoCompiler<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_7/4 (/7 (/11 e.Errors#2/9 )/12 (/15 # NoCppCompiler/17 e.Bag#2/13 )/16 )/8 (/20 # CppFlag/22 s.Num#2/23 e.Flag#2/18 )/21 >/1
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
    context[17] = refalrts::ident_left(  & ident_NoCppCompiler<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_CppFlag<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Errors#2 as range 9
    // closed e.Bag#2 as range 13
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    // closed e.Flag#2 as range 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_7/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#2/23 e.Flag#2/18 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Errors#2/9 } Tile{ AsIs: (/20 HalfReuse: s.Num2 #23/22 } Tile{ HalfReuse: # FlagsForNoCompiler/0 } Tile{ AsIs: )/21 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: # NoCppCompiler/17 AsIs: e.Bag#2/13 AsIs: )/16 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_svar( context[22], context[23] );
    refalrts::reinit_ident( context[0], & ident_FlagsForNoCompiler<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_7/4 (/7 (/11 e.Errors#2/9 )/12 (/15 (/19 e.CppCompiler#2/17 )/20 e.Bag#2/13 )/16 )/8 (/23 # CppFlags/25 s.Num#2/26 e.Flags#2/21 )/24 >/1
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
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CppFlags<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Errors#2 as range 9
    // closed e.CppCompiler#2 as range 17
    // closed e.Bag#2 as range 13
    if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
      continue;
    // closed e.Flags#2 as range 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_ParseCommandLine_7/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/8 (/23 # CppFlags/25 s.Num#2/26 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Errors#2/9 AsIs: )/12 AsIs: (/15 AsIs: (/19 AsIs: e.CppCompiler#2/17 HalfReuse: ' '/20 } Tile{ AsIs: e.Flags#2/21 } Tile{ AsIs: )/16 } Tile{ AsIs: e.Bag#2/13 } Tile{ AsIs: )/24 HalfReuse: )/1 ]] }
    refalrts::reinit_char( context[20], ' ' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[15], context[24] );
    refalrts::link_brackets( context[19], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[7], context[20] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_7/4 (/7 (/11 e.Errors#2/9 )/12 (/15 (/19 e.CppCompiler#2/17 )/20 e.Bag#2/13 )/16 )/8 (/23 # CppFlag/25 s.Num#2/26 e.Flag#2/21 )/24 >/1
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
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CppFlag<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Errors#2 as range 9
    // closed e.CppCompiler#2 as range 17
    // closed e.Bag#2 as range 13
    if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
      continue;
    // closed e.Flag#2 as range 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_7/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/23 # CppFlag/25 s.Num#2/26 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Errors#2/9 AsIs: )/12 AsIs: (/15 AsIs: (/19 AsIs: e.CppCompiler#2/17 HalfReuse: ' '/20 } Tile{ HalfReuse: '\"'/0 } Tile{ AsIs: e.Flag#2/21 } Tile{ HalfReuse: '\"'/16 AsIs: )/8 } Tile{ AsIs: e.Bag#2/13 } Tile{ AsIs: )/24 HalfReuse: )/1 ]] }
    refalrts::reinit_char( context[20], ' ' );
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[16], '\"' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[15], context[24] );
    refalrts::link_brackets( context[19], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[16], context[8] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[7], context[20] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_7/4 (/7 (/11 e.Errors#2/9 )/12 (/15 t.CppCompiler#2/23 e.Bag#2/13 )/16 )/8 (/19 # RuntimeFolder/21 s.Num#2/22 e.Folder#2/17 )/20 >/1
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
    context[21] = refalrts::ident_left(  & ident_RuntimeFolder<int>::name, context[17], context[18] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Errors#2 as range 9
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    // closed e.Folder#2 as range 17
    context[24] = refalrts::tvar_left( context[23], context[13], context[14] );
    if( ! context[24] )
      continue;
    // closed e.Bag#2 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Errors#2/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: t.CppCompiler#2/23 } </25 & CreateClosure /26 & lambda_ParseCommandLine_6/27 (/28 e.Folder#2/17/29 )/31 Tile{ AsIs: >/1 } >/32 Tile{ AsIs: e.Bag#2/13 } Tile{ AsIs: )/16 AsIs: )/8 AsIs: (/19 Reuse: # SearchFolder/21 AsIs: s.Num#2/22 AsIs: e.Folder#2/17 AsIs: )/20 } Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], lambda_ParseCommandLine_6, "lambda_ParseCommandLine_6" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[29], context[30], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::update_ident( context[21], & ident_SearchFolder<int>::name );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[25] );
    refalrts::link_brackets( context[28], context[31] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[25], context[31] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_7/4 (/7 (/11 e.Errors#2/9 )/12 (/15 e.Bag#2/13 )/16 )/8 t.OtherOption#2/17 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#2 as range 9
  // closed e.Bag#2 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_ParseCommandLine_7/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Errors#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.Bag#2/13 AsIs: )/16 AsIs: )/8 AsIs: t.OtherOption#2/17 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_8(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_8/4 (/7 (/11 e.Errors#2/9 )/12 (/15 e.Bag#2/13 )/16 )/8 e.Options#2/2 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#2 as range 9
  // closed e.Bag#2 as range 13
  // closed e.Options#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_ParseCommandLine_8/4 (/7 {REMOVED TILE}  )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.Errors#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.Bag#2/13 AsIs: )/16 } Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_9(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_9/4 (/7 e.Bag#3/5 (/16 e.Folders#3/14 )/17 )/8 (/11 # SearchFolder/13 s.Num#3/18 e.Folder#3/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_SearchFolder<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[5], context[6] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Bag#3 as range 5
    // closed e.Folders#3 as range 14
    if( ! refalrts::svar_left( context[18], context[9], context[10] ) )
      continue;
    // closed e.Folder#3 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_ParseCommandLine_9/4 {REMOVED TILE}  {REMOVED TILE}  (/11 # SearchFolder/13 s.Num#3/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Bag#3/5 AsIs: (/16 AsIs: e.Folders#3/14 HalfReuse: (/17 } Tile{ AsIs: e.Folder#3/9 } Tile{ AsIs: )/8 } Tile{ AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[17] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[16], context[12] );
    refalrts::link_brackets( context[17], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_9/4 (/7 e.Bag#3/5 )/8 (/11 # FILE/13 s.Num#3/14 e.FileName#3/9 )/12 >/1
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
  context[13] = refalrts::ident_left(  & ident_FILE<int>::name, context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Bag#3 as range 5
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#3 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_ParseCommandLine_9/4 {REMOVED TILE}  s.Num#3/14 {REMOVED TILE}  )/12 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Bag#3/5 AsIs: )/8 AsIs: (/11 HalfReuse: s.Num3 #14/13 } Tile{ AsIs: e.FileName#3/9 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[13], context[14] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_10(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_10/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
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
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 HalfReuse: </11 } Tile{ HalfReuse: & MapReduce/0 Reuse: & lambda_ParseCommandLine_9/4 } (/13 Tile{ AsIs: e.Bag#2/9 } (/14 )/15 Tile{ AsIs: )/12 AsIs: e.Options#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[11] );
  refalrts::reinit_name( context[0], MapReduce, "MapReduce" );
  refalrts::update_name( context[4], lambda_ParseCommandLine_9, "lambda_ParseCommandLine_9" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[13], context[12] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_11(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_11/4 # CppCompiler/5 >/1
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
    //RESULT: Tile{ [[ HalfReuse: '-'/0 HalfReuse: 'c'/4 HalfReuse: ' '/5 HalfReuse: 'o'/1 } 'r'/6 ' '/7 '-'/8 '-'/9 'c'/10 'p'/11 'p'/12 '-'/13 'c'/14 'o'/15 'm'/16 'm'/17 'a'/18 'n'/19 'd'/20 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'd' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '-' );
    refalrts::reinit_char( context[4], 'c' );
    refalrts::reinit_char( context[5], ' ' );
    refalrts::reinit_char( context[1], 'o' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_11/4 # GenMode/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_GenMode<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '-'/0 HalfReuse: '-'/4 HalfReuse: 'g'/5 HalfReuse: 'e'/1 } 'n'/6 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'n' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '-' );
    refalrts::reinit_char( context[4], '-' );
    refalrts::reinit_char( context[5], 'g' );
    refalrts::reinit_char( context[1], 'e' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_11/4 # Opt/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Opt<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # Opt/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '-'/0 HalfReuse: 'O'/4 } Tile{ ]] }
    refalrts::reinit_char( context[0], '-' );
    refalrts::reinit_char( context[4], 'O' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_11/4 # ErrorFile/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_ErrorFile<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: '-'/0 HalfReuse: 'e'/4 HalfReuse: ' '/5 HalfReuse: 'o'/1 } 'r'/6 ' '/7 '-'/8 '-'/9 'e'/10 'r'/11 'r'/12 'o'/13 'r'/14 '-'/15 'f'/16 'i'/17 'l'/18 'e'/19 Tile{ ]] }
  if( ! refalrts::alloc_char( context[6], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'e' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], '-' );
  refalrts::reinit_char( context[4], 'e' );
  refalrts::reinit_char( context[5], ' ' );
  refalrts::reinit_char( context[1], 'o' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[19] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_12(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 69 elems
  refalrts::Iter context[69];
  refalrts::zeros( context, 69 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_12/4 (/7 s.Pos#3/9 # NoRequiredParam/10 e.Param#3/5 )/8 >/1
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
    // </0 & lambda_ParseCommandLine_12/4 (/7 s.Pos#3/9 # UnknownShortOption/10 s.Option#3/11 )/8 >/1
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
    // </0 & lambda_ParseCommandLine_12/4 (/7 s.Pos#3/9 # UnknownLongOption/10 e.Option#3/5 )/8 >/1
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
    // </0 & lambda_ParseCommandLine_12/4 (/7 s.Pos#3/9 # RepeatOption/10 s.Tag#3/11 )/8 >/1
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
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Pos3 #9/4 HalfReuse: 'o'/7 } 'p'/12 't'/13 'i'/14 'o'/15 'n'/16 ' '/17 </18 Tile{ HalfReuse: & Fetch/10 AsIs: s.Tag#3/11 HalfReuse: & lambda_ParseCommandLine_11/8 AsIs: >/1 } ' '/19 'm'/20 'u'/21 's'/22 't'/23 ' '/24 'a'/25 'p'/26 'p'/27 'e'/28 'a'/29 'r'/30 ' '/31 'o'/32 'n'/33 'e'/34 ' '/35 't'/36 'i'/37 'm'/38 'e'/39 )/40 Tile{ ]] }
    if( ! refalrts::alloc_char( context[12], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::reinit_char( context[7], 'o' );
    refalrts::reinit_name( context[10], Fetch, "Fetch" );
    refalrts::reinit_name( context[8], lambda_ParseCommandLine_11, "lambda_ParseCommandLine_11" );
    refalrts::link_brackets( context[0], context[40] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[40] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[12], context[18] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_12/4 (/7 s.Pos#3/9 # BadValue_GenMode/10 e.BadValue#3/5 )/8 >/1
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
    context[10] = refalrts::ident_left(  & ident_BadValue_GenMode<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.BadValue#3 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Pos#3/9 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Pos3 #9/4 HalfReuse: 'o'/7 } 'p'/11 't'/12 'i'/13 'o'/14 'n'/15 ' '/16 '-'/17 '-'/18 'g'/19 'e'/20 'n'/21 ' '/22 'e'/23 'x'/24 'p'/25 'e'/26 'c'/27 't'/28 's'/29 ' '/30 '\''/31 'b'/32 'o'/33 't'/34 'h'/35 '\''/36 ','/37 ' '/38 '\''/39 'd'/40 'i'/41 'r'/42 'e'/43 'c'/44 't'/45 '\''/46 ' '/47 'o'/48 'r'/49 ' '/50 '\''/51 'i'/52 'n'/53 't'/54 'e'/55 'r'/56 'p'/57 '\''/58 ','/59 ' '/60 'b'/61 'u'/62 't'/63 ' '/64 'g'/65 'o'/66 't'/67 ' '/68 Tile{ HalfReuse: '\''/10 AsIs: e.BadValue#3/5 HalfReuse: '\''/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[11], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], ' ' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::reinit_char( context[7], 'o' );
    refalrts::reinit_char( context[10], '\'' );
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[11], context[68] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_12/4 (/7 s.Pos#3/9 # BadValue_Opt/10 e.BadValue#3/5 )/8 >/1
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
  context[10] = refalrts::ident_left(  & ident_BadValue_Opt<int>::name, context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.BadValue#3 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.Pos#3/9 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Pos3 #9/4 HalfReuse: 'o'/7 } 'p'/11 't'/12 'i'/13 'o'/14 'n'/15 ' '/16 '-'/17 'O'/18 ' '/19 'e'/20 'x'/21 'p'/22 'e'/23 'c'/24 't'/25 's'/26 ' '/27 '\''/28 'P'/29 '\''/30 ' '/31 'o'/32 'r'/33 ' '/34 '\''/35 'R'/36 '\''/37 ','/38 ' '/39 'b'/40 'u'/41 't'/42 ' '/43 'g'/44 'o'/45 't'/46 ' '/47 Tile{ HalfReuse: '\''/10 AsIs: e.BadValue#3/5 HalfReuse: '\''/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_char( context[11], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'O' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'P' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], ' ' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_svar( context[4], context[9] );
  refalrts::reinit_char( context[7], 'o' );
  refalrts::reinit_char( context[10], '\'' );
  refalrts::reinit_char( context[8], '\'' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[11], context[47] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ParseCommandLine_13(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ParseCommandLine_13/4 (/7 )/8 (/11 e.Bag#2/9 )/12 e.FileNames#2/2 >/1
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
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Bag#2 as range 9
    // closed e.FileNames#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_ParseCommandLine_13/4 (/7 )/8 (/11 {REMOVED TILE}  )/12 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Success/0 } Tile{ AsIs: e.Bag#2/9 } Tile{ AsIs: e.FileNames#2/2 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_Success<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ParseCommandLine_13/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.FileNames#2/2 >/1
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
  // closed e.FileNames#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Bag#2/9 )/12 e.FileNames#2/2 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/11 } Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_ParseCommandLine_12/7 AsIs: e.Errors#2/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::reinit_ident( context[11], & ident_Fails<int>::name );
  refalrts::update_name( context[4], Map, "Map" );
  refalrts::reinit_name( context[7], lambda_ParseCommandLine_12, "lambda_ParseCommandLine_12" );
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
  // issue here memory for vars with 163 elems
  refalrts::Iter context[163];
  refalrts::zeros( context, 163 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseCommandLine/4 e.Arguments#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arguments#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & GetOpt/6 (/7 (/8 # CppCompiler/9 # Required/10 'c'/11 (/12 'c'/13 'p'/14 'p'/15 '-'/16 'c'/17 'o'/18 'm'/19 'm'/20 'a'/21 'n'/22 'd'/23 )/24 )/25 (/26 # GenMode/27 # Required/28 (/29 'g'/30 'e'/31 'n'/32 )/33 )/34 (/35 # Opt/36 # Required/37 'O'/38 )/39 (/40 # ErrorFile/41 # Required/42 'e'/43 (/44 'e'/45 'r'/46 'r'/47 'o'/48 'r'/49 '-'/50 'f'/51 'i'/52 'l'/53 'e'/54 )/55 )/56 (/57 # SearchFolder/58 # Required/59 'd'/60 (/61 'd'/62 'i'/63 'r'/64 )/65 (/66 'd'/67 'i'/68 'r'/69 'e'/70 'c'/71 't'/72 'o'/73 'r'/74 'y'/75 )/76 )/77 (/78 # CppFlags/79 # Required/80 'C'/81 'F'/82 (/83 'c'/84 'p'/85 'p'/86 'f'/87 'l'/88 'a'/89 'g'/90 's'/91 )/92 )/93 (/94 # CppFlag/95 # Required/96 'f'/97 (/98 'c'/99 'p'/100 'p'/101 'f'/102 'l'/103 'a'/104 'g'/105 )/106 )/107 (/108 # RuntimeFolder/109 # Required/110 'D'/111 (/112 'r'/113 'u'/114 'n'/115 't'/116 'i'/117 'm'/118 'e'/119 '-'/120 'd'/121 'i'/122 'r'/123 )/124 (/125 'r'/126 'u'/127 'n'/128 't'/129 'i'/130 'm'/131 'e'/132 '-'/133 'd'/134 'i'/135 'r'/136 'e'/137 'c'/138 't'/139 'o'/140 'r'/141 'y'/142 )/143 )/144 )/145 Tile{ AsIs: e.Arguments#1/2 } >/146 </147 & Seq/148 & lambda_ParseCommandLine_0/149 & lambda_ParseCommandLine_1/150 & lambda_ParseCommandLine_2/151 & lambda_ParseCommandLine_3/152 & lambda_ParseCommandLine_4/153 & lambda_ParseCommandLine_5/154 (/155 & MapReduce/156 & lambda_ParseCommandLine_7/157 )/158 & lambda_ParseCommandLine_8/159 & lambda_ParseCommandLine_10/160 & lambda_ParseCommandLine_13/161 >/162 Tile{ AsIs: >/1 ]] }
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
  if( ! refalrts::alloc_ident( context[27], & ident_GenMode<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[28], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[36], & ident_Opt<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[37], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'O' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[41], & ident_ErrorFile<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[42], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[44] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[49], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[52], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[53], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[54], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[55] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[56] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[57] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[58], & ident_SearchFolder<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[59], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[60], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[61] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[62], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[63], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[64], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[65] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[66] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[67], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[68], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[69], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[70], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[71], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[72], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[73], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[74], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[75], 'y' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[76] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[77] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[78] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[79], & ident_CppFlags<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[80], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[81], 'C' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[82], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[83] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[84], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[85], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[86], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[87], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[88], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[89], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[90], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[91], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[92] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[93] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[94] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[95], & ident_CppFlag<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[96], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[97], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[98] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[99], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[100], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[101], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[102], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[103], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[104], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[105], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[106] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[107] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[108] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[109], & ident_RuntimeFolder<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[110], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[111], 'D' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[112] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[113], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[114], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[115], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[116], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[117], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[118], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[119], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[120], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[121], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[122], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[123], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[124] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[125] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[126], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[127], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[128], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[129], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[130], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[131], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[132], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[133], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[134], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[135], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[136], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[137], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[138], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[139], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[140], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[141], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[142], 'y' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[143] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[144] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[145] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[146] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[147] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[148], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[149], lambda_ParseCommandLine_0, "lambda_ParseCommandLine_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[150], lambda_ParseCommandLine_1, "lambda_ParseCommandLine_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[151], lambda_ParseCommandLine_2, "lambda_ParseCommandLine_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[152], lambda_ParseCommandLine_3, "lambda_ParseCommandLine_3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[153], lambda_ParseCommandLine_4, "lambda_ParseCommandLine_4" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[154], lambda_ParseCommandLine_5, "lambda_ParseCommandLine_5" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[155] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[156], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[157], lambda_ParseCommandLine_7, "lambda_ParseCommandLine_7" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[158] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[159], lambda_ParseCommandLine_8, "lambda_ParseCommandLine_8" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[160], lambda_ParseCommandLine_10, "lambda_ParseCommandLine_10" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[161], lambda_ParseCommandLine_13, "lambda_ParseCommandLine_13" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[162] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[162] );
  refalrts::push_stack( context[147] );
  refalrts::link_brackets( context[155], context[158] );
  refalrts::push_stack( context[146] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[7], context[145] );
  refalrts::link_brackets( context[108], context[144] );
  refalrts::link_brackets( context[125], context[143] );
  refalrts::link_brackets( context[112], context[124] );
  refalrts::link_brackets( context[94], context[107] );
  refalrts::link_brackets( context[98], context[106] );
  refalrts::link_brackets( context[78], context[93] );
  refalrts::link_brackets( context[83], context[92] );
  refalrts::link_brackets( context[57], context[77] );
  refalrts::link_brackets( context[66], context[76] );
  refalrts::link_brackets( context[61], context[65] );
  refalrts::link_brackets( context[40], context[56] );
  refalrts::link_brackets( context[44], context[55] );
  refalrts::link_brackets( context[35], context[39] );
  refalrts::link_brackets( context[26], context[34] );
  refalrts::link_brackets( context[29], context[33] );
  refalrts::link_brackets( context[8], context[25] );
  refalrts::link_brackets( context[12], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[146], context[162] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[145] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
