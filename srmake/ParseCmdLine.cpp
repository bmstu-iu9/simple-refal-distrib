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
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GetOpt_CheckRepeated, "GetOpt_CheckRepeated" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FILE<int>::name,
    & ident_SrefCompiler<int>::name,
    & ident_CppCompiler<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParseCommandLine_0/4 (/7 e.Errors#2/5 )/8 e.Options#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Errors#2 as range 5
    // closed e.Options#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & GetOpt_CheckRepeated/10 (/11 # CppCompiler/12 # SrefCompiler/13 Tile{ HalfReuse: # FILE/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: e.Options#2/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 0, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icAllocIdent, 0, 2, 12},
    {refalrts::icAllocIdent, 0, 1, 13},
    {refalrts::icReinitIdent, 0, 0, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 4, 0},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 13, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & lambda_ParseCommandLine_0/4 (/7 e.Errors#2/5 )/8 e.Options#2/2 >/1
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
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NoCppCompiler<int>::name,
    & ident_CppCompiler<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )E 
    //GLOBAL GEN:(E )E 
    // </0 & lambda_ParseCommandLine_1/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +23, 0, 0},
    //(E )E 
    // </0 & lambda_ParseCommandLine_1/4 (/7 e.Errors#2/5 )/8 e.Options_B#2/9 (/13 # CppCompiler/15 s.Num#2/16 e.Command#2/11 )/14 e.Options_E#2/2 >/1
    // closed e.Errors#2 as range 5
    {refalrts::icSave, 0, 17, 2},
    {refalrts::icEPrepare, 0, 9, 17},
    {refalrts::icEStart, 0, 9, 17},
    {refalrts::icSave, 0, 19, 17},
    {refalrts::icBracketLeftSave, 0, 11, 19},
    {refalrts::icIdentLeftSave, 15, 1, 11},
    // closed e.Options_E#2 as range 19(2)
    {refalrts::icsVarLeft, 0, 16, 11},
    // closed e.Command#2 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_1/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#2/16 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 } Tile{ AsIs: (/13 HalfReuse: (/15 } Tile{ AsIs: e.Command#2/11 } Tile{ AsIs: )/14 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options_B#2/9 } Tile{ AsIs: e.Options_E#2/19(2) } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icLinkBrackets, 13, 0, 0},
    {refalrts::icLinkBrackets, 15, 14, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceTile, 13, 15, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )E 
    // </0 & lambda_ParseCommandLine_1/4 (/7 e.Errors#2/5 )/8 e.Options#2/2 >/1
    // closed e.Errors#2 as range 5
    // closed e.Options#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 HalfReuse: (/8 } Tile{ HalfReuse: 1/0 HalfReuse: # NoCppCompiler/4 } Tile{ HalfReuse: )/1 } )/9 (/10 (/11 )/12 )/13 Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitInt, 0, 1, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 10, 13, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icLinkBrackets, 8, 1, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 9, 13, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )E 
  //GLOBAL GEN:(E )E 
  // </0 & lambda_ParseCommandLine_1/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    refalrts::start_sentence();
    //(E )E 
    // </0 & lambda_ParseCommandLine_1/4 (/7 e.Errors#2/5 )/8 e.Options_B#2/9 (/13 # CppCompiler/15 s.Num#2/16 e.Command#2/11 )/14 e.Options_E#2/2 >/1
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
      context[15] = refalrts::ident_left(  & ident_CppCompiler<int>::name, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Options_E#2 as range 19(2)
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.Command#2 as range 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_1/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#2/16 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 } Tile{ AsIs: (/13 HalfReuse: (/15 } Tile{ AsIs: e.Command#2/11 } Tile{ AsIs: )/14 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options_B#2/9 } Tile{ AsIs: e.Options_E#2/19(2) } Tile{ ]] }
      refalrts::reinit_open_bracket( context[15] );
      refalrts::reinit_close_bracket( context[0] );
      refalrts::link_brackets( context[13], context[0] );
      refalrts::link_brackets( context[15], context[14] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[13], context[15] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[17], context[18] ) );
  } while ( 0 );

  //(E )E 
  // </0 & lambda_ParseCommandLine_1/4 (/7 e.Errors#2/5 )/8 e.Options#2/2 >/1
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
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_SrefCompiler<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"fc-core", 7}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )(E )E 
    //GLOBAL GEN:(E )(E )E 
    // </0 & lambda_ParseCommandLine_2/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    // closed e.idxTT#0 as range 2
    {refalrts::icOnFailGoTo, +22, 0, 0},
    //(E )(E )E 
    // </0 & lambda_ParseCommandLine_2/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options_B#2/13 (/17 # SrefCompiler/19 s.Num#2/20 e.Command#2/15 )/18 e.Options_E#2/2 >/1
    // closed e.Errors#2 as range 5
    // closed e.Bag#2 as range 9
    {refalrts::icSave, 0, 21, 2},
    {refalrts::icEPrepare, 0, 13, 21},
    {refalrts::icEStart, 0, 13, 21},
    {refalrts::icSave, 0, 23, 21},
    {refalrts::icBracketLeftSave, 0, 15, 23},
    {refalrts::icIdentLeftSave, 19, 0, 15},
    // closed e.Options_E#2 as range 23(2)
    {refalrts::icsVarLeft, 0, 20, 15},
    // closed e.Command#2 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_2/4 {REMOVED TILE}  {REMOVED TILE}  (/17 # SrefCompiler/19 s.Num#2/20 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } Tile{ AsIs: e.Command#2/15 } Tile{ AsIs: )/18 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options_B#2/13 } Tile{ AsIs: e.Options_E#2/23(2) } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icLinkBrackets, 11, 0, 0},
    {refalrts::icLinkBrackets, 12, 18, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 7, 12, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )(E )E 
    // </0 & lambda_ParseCommandLine_2/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
    // closed e.Errors#2 as range 5
    // closed e.Bag#2 as range 9
    // closed e.Options#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } Tile{ HalfReuse: 's'/0 HalfReuse: 'r'/4 } Tile{ HalfReuse: 'e'/1 }"fc-core"/13 )/15 )/16 Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
    {refalrts::icAllocString, 0, 0, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitChar, 0, 's', 0},
    {refalrts::icReinitChar, 0, 'r', 4},
    {refalrts::icReinitChar, 0, 'e', 1},
    {refalrts::icLinkBrackets, 11, 16, 0},
    {refalrts::icLinkBrackets, 12, 15, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 13, 16, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 12, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )(E )E 
  //GLOBAL GEN:(E )(E )E 
  // </0 & lambda_ParseCommandLine_2/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
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
    refalrts::start_sentence();
    //(E )(E )E 
    // </0 & lambda_ParseCommandLine_2/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options_B#2/13 (/17 # SrefCompiler/19 s.Num#2/20 e.Command#2/15 )/18 e.Options_E#2/2 >/1
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
      context[19] = refalrts::ident_left(  & ident_SrefCompiler<int>::name, context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.Options_E#2 as range 23(2)
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      // closed e.Command#2 as range 15

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_2/4 {REMOVED TILE}  {REMOVED TILE}  (/17 # SrefCompiler/19 s.Num#2/20 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } Tile{ AsIs: e.Command#2/15 } Tile{ AsIs: )/18 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options_B#2/13 } Tile{ AsIs: e.Options_E#2/23(2) } Tile{ ]] }
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_close_bracket( context[0] );
      refalrts::link_brackets( context[11], context[0] );
      refalrts::link_brackets( context[12], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[21], context[22] ) );
  } while ( 0 );

  //(E )(E )E 
  // </0 & lambda_ParseCommandLine_2/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
  // closed e.Errors#2 as range 5
  // closed e.Bag#2 as range 9
  // closed e.Options#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } Tile{ HalfReuse: 's'/0 HalfReuse: 'r'/4 } Tile{ HalfReuse: 'e'/1 }"fc-core"/13 )/15 )/16 Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[13], context[14], "fc-core", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_char( context[0], 's' );
  refalrts::reinit_char( context[4], 'r' );
  refalrts::reinit_char( context[1], 'e' );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NoSourceFile<int>::name,
    & ident_FILE<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )(E )E 
    //GLOBAL GEN:(E )(E )E 
    // </0 & lambda_ParseCommandLine_3/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    // closed e.idxTT#0 as range 2
    {refalrts::icOnFailGoTo, +22, 0, 0},
    //(E )(E )E 
    // </0 & lambda_ParseCommandLine_3/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options_B#2/13 (/17 # FILE/19 s.Num#2/20 e.FileName#2/15 )/18 e.Options_E#2/2 >/1
    // closed e.Errors#2 as range 5
    // closed e.Bag#2 as range 9
    {refalrts::icSave, 0, 21, 2},
    {refalrts::icEPrepare, 0, 13, 21},
    {refalrts::icEStart, 0, 13, 21},
    {refalrts::icSave, 0, 23, 21},
    {refalrts::icBracketLeftSave, 0, 15, 23},
    {refalrts::icIdentLeftSave, 19, 1, 15},
    // closed e.Options_E#2 as range 23(2)
    {refalrts::icsVarLeft, 0, 20, 15},
    // closed e.FileName#2 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_3/4 {REMOVED TILE}  {REMOVED TILE}  (/17 # FILE/19 s.Num#2/20 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } Tile{ AsIs: e.FileName#2/15 } Tile{ AsIs: )/18 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options_B#2/13 } Tile{ AsIs: e.Options_E#2/23(2) } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icLinkBrackets, 11, 0, 0},
    {refalrts::icLinkBrackets, 12, 18, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 7, 12, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )(E )E 
    // </0 & lambda_ParseCommandLine_3/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
    // closed e.Errors#2 as range 5
    // closed e.Bag#2 as range 9
    // closed e.Options#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: 1/4 } Tile{ HalfReuse: # NoSourceFile/1 } )/13 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } )/14 )/15 Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitInt, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icLinkBrackets, 11, 15, 0},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icLinkBrackets, 0, 8, 0},
    {refalrts::icLinkBrackets, 7, 13, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icSpliceTile, 8, 12, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 4, 4, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )(E )E 
  //GLOBAL GEN:(E )(E )E 
  // </0 & lambda_ParseCommandLine_3/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
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
    refalrts::start_sentence();
    //(E )(E )E 
    // </0 & lambda_ParseCommandLine_3/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options_B#2/13 (/17 # FILE/19 s.Num#2/20 e.FileName#2/15 )/18 e.Options_E#2/2 >/1
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
      context[19] = refalrts::ident_left(  & ident_FILE<int>::name, context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.Options_E#2 as range 23(2)
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      // closed e.FileName#2 as range 15

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_ParseCommandLine_3/4 {REMOVED TILE}  {REMOVED TILE}  (/17 # FILE/19 s.Num#2/20 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 HalfReuse: (/12 } Tile{ AsIs: e.FileName#2/15 } Tile{ AsIs: )/18 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Options_B#2/13 } Tile{ AsIs: e.Options_E#2/23(2) } Tile{ ]] }
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_close_bracket( context[0] );
      refalrts::link_brackets( context[11], context[0] );
      refalrts::link_brackets( context[12], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[21], context[22] ) );
  } while ( 0 );

  //(E )(E )E 
  // </0 & lambda_ParseCommandLine_3/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
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
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CompilerOption<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )T 
    //GLOBAL GEN:(E )T 
    // </0 & lambda_ParseCommandLine_4/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +23, 0, 0},
    //((E )(E )E )(#CompilerOptionS E )
    // </0 & lambda_ParseCommandLine_4/4 (/7 (/16 e.CppCompiler#3/14 )/17 (/20 e.SrefCompiler#3/18 )/21 e.Bag#3/5 )/8 (/9 # CompilerOption/13 s.Num#3/22 e.Flag#3/11 )/10 >/1
    {refalrts::icBracketTerm, 0, 11, 9},
    {refalrts::icIdentLeftSave, 13, 0, 11},
    {refalrts::icSave, 0, 23, 5},
    {refalrts::icBracketLeftSave, 0, 14, 23},
    {refalrts::icBracketLeftSave, 0, 18, 23},
    // closed e.CppCompiler#3 as range 14
    // closed e.SrefCompiler#3 as range 18
    // closed e.Bag#3 as range 23(5)
    {refalrts::icsVarLeft, 0, 22, 11},
    // closed e.Flag#3 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/9 # CompilerOption/13 s.Num#3/22 {REMOVED TILE}  )/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/16 AsIs: e.CppCompiler#3/14 AsIs: )/17 AsIs: (/20 AsIs: e.SrefCompiler#3/18 HalfReuse: ' '/21 } Tile{ HalfReuse: '\"'/0 } Tile{ AsIs: e.Flag#3/11 } Tile{ HalfReuse: '\"'/4 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Bag#3/23(5) } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitChar, 0, ' ', 21},
    {refalrts::icReinitChar, 0, '\"', 0},
    {refalrts::icReinitChar, 0, '\"', 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icLinkBrackets, 20, 8, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 4, 4, 0},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 21, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )T 
    // </0 & lambda_ParseCommandLine_4/4 (/7 e.Bag#3/5 )/8 t.OtherOption#3/9 >/1
    // closed e.Bag#3 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_ParseCommandLine_4/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Bag#3/5 AsIs: )/8 AsIs: t.OtherOption#3/9 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 10, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )T 
  //GLOBAL GEN:(E )T 
  // </0 & lambda_ParseCommandLine_4/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 >/1
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
    refalrts::start_sentence();
    //((E )(E )E )(#CompilerOptionS E )
    // </0 & lambda_ParseCommandLine_4/4 (/7 (/16 e.CppCompiler#3/14 )/17 (/20 e.SrefCompiler#3/18 )/21 e.Bag#3/5 )/8 (/9 # CompilerOption/13 s.Num#3/22 e.Flag#3/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_CompilerOption<int>::name, context[11], context[12] );
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
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/9 # CompilerOption/13 s.Num#3/22 {REMOVED TILE}  )/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/16 AsIs: e.CppCompiler#3/14 AsIs: )/17 AsIs: (/20 AsIs: e.SrefCompiler#3/18 HalfReuse: ' '/21 } Tile{ HalfReuse: '\"'/0 } Tile{ AsIs: e.Flag#3/11 } Tile{ HalfReuse: '\"'/4 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Bag#3/23(5) } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_char( context[21], ' ' );
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], '\"' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[20], context[8] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[7], context[21] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )T 
  // </0 & lambda_ParseCommandLine_4/4 (/7 e.Bag#3/5 )/8 t.OtherOption#3/9 >/1
  // closed e.Bag#3 as range 5

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
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseCommandLine_4, "lambda_ParseCommandLine_4" },
    { MapReduce, "MapReduce" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParseCommandLine_5/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.Errors#2 as range 5
    // closed e.Bag#2 as range 9
    // closed e.Options#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } )/13 Tile{ AsIs: </0 Reuse: & MapReduce/4 } Tile{ HalfReuse: & lambda_ParseCommandLine_4/8 AsIs: (/11 AsIs: e.Bag#2/9 AsIs: )/12 AsIs: e.Options#2/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 13, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & lambda_ParseCommandLine_5/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
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
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_6(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Runtime<int>::name,
    & ident_RuntimeFolder<int>::name,
    & ident_Search<int>::name,
    & ident_SearchFolder<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(S S E )
    //GLOBAL GEN:(S S E )
    // </0 & lambda_ParseCommandLine_6/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icsVarLeft, 0, 10, 5},
    // closed e.idxBVV#0 as range 5
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //(#SearchFolderS E )
    // </0 & lambda_ParseCommandLine_6/4 (/7 # SearchFolder/9 s.Num#3/10 e.Folder#3/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 3, 9},
    // closed e.Folder#3 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 # SearchFolder/9 s.Num#3/10 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Search/4 } Tile{ AsIs: e.Folder#3/5 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(#RuntimeFolderS E )
    // </0 & lambda_ParseCommandLine_6/4 (/7 # RuntimeFolder/9 s.Num#3/10 e.Folder#3/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 9},
    // closed e.Folder#3 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 # RuntimeFolder/9 s.Num#3/10 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Runtime/4 } Tile{ AsIs: e.Folder#3/5 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(S S E )
  //GLOBAL GEN:(S S E )
  // </0 & lambda_ParseCommandLine_6/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
    refalrts::start_sentence();
    //(#SearchFolderS E )
    // </0 & lambda_ParseCommandLine_6/4 (/7 # SearchFolder/9 s.Num#3/10 e.Folder#3/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_SearchFolder<int>::name, context[9] ) )
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

  //(#RuntimeFolderS E )
  // </0 & lambda_ParseCommandLine_6/4 (/7 # RuntimeFolder/9 s.Num#3/10 e.Folder#3/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_RuntimeFolder<int>::name, context[9] ) )
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
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_7(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Map, "Map" },
    { lambda_ParseCommandLine_6, "lambda_ParseCommandLine_6" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ParseCommandLine_7/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.Errors#2 as range 5
    // closed e.Bag#2 as range 9
    // closed e.Options#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Bag#2/9 AsIs: )/12 } Tile{ AsIs: </0 Reuse: & Map/4 } & lambda_ParseCommandLine_6/13 Tile{ AsIs: e.Options#2/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocFunc, 0, 1, 13},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 12, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & lambda_ParseCommandLine_7/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Options#2/2 >/1
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
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_8(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FILE<int>::name,
    & ident_SrefCompiler<int>::name,
    & ident_CppCompiler<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"ce filename", 11},
    {"on -s or --sref-command", 23},
    {"on -c or --cpp-command", 22}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S 
    //GLOBAL GEN:S 
    // </0 & lambda_ParseCommandLine_8/4 s.idx#0/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //#CppCompiler
    // </0 & lambda_ParseCommandLine_8/4 # CppCompiler/5 >/1
    {refalrts::icIdentTerm, 0, 2, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'o'/0 HalfReuse: 'p'/4 HalfReuse: 't'/5 HalfReuse: 'i'/1 }"on -c or --cpp-command"/6 Tile{ ]] }
    {refalrts::icAllocString, 0, 2, 6},
    {refalrts::icReinitChar, 0, 'o', 0},
    {refalrts::icReinitChar, 0, 'p', 4},
    {refalrts::icReinitChar, 0, 't', 5},
    {refalrts::icReinitChar, 0, 'i', 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //#SrefCompiler
    // </0 & lambda_ParseCommandLine_8/4 # SrefCompiler/5 >/1
    {refalrts::icIdentTerm, 0, 1, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'o'/0 HalfReuse: 'p'/4 HalfReuse: 't'/5 HalfReuse: 'i'/1 }"on -s or --sref-command"/6 Tile{ ]] }
    {refalrts::icAllocString, 0, 1, 6},
    {refalrts::icReinitChar, 0, 'o', 0},
    {refalrts::icReinitChar, 0, 'p', 4},
    {refalrts::icReinitChar, 0, 't', 5},
    {refalrts::icReinitChar, 0, 'i', 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //#FILE
    // </0 & lambda_ParseCommandLine_8/4 # FILE/5 >/1
    {refalrts::icIdentTerm, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 'o'/4 HalfReuse: 'u'/5 HalfReuse: 'r'/1 }"ce filename"/6 Tile{ ]] }
    {refalrts::icAllocString, 0, 0, 6},
    {refalrts::icReinitChar, 0, 's', 0},
    {refalrts::icReinitChar, 0, 'o', 4},
    {refalrts::icReinitChar, 0, 'u', 5},
    {refalrts::icReinitChar, 0, 'r', 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:S 
  //GLOBAL GEN:S 
  // </0 & lambda_ParseCommandLine_8/4 s.idx#0/5 >/1
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
    refalrts::start_sentence();
    //#CppCompiler
    // </0 & lambda_ParseCommandLine_8/4 # CppCompiler/5 >/1
    if( ! refalrts::ident_term(  & ident_CppCompiler<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
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
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //#SrefCompiler
    // </0 & lambda_ParseCommandLine_8/4 # SrefCompiler/5 >/1
    if( ! refalrts::ident_term(  & ident_SrefCompiler<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
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
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //#FILE
  // </0 & lambda_ParseCommandLine_8/4 # FILE/5 >/1
  if( ! refalrts::ident_term(  & ident_FILE<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_9(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseCommandLine_8, "lambda_ParseCommandLine_8" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NoSourceFile<int>::name,
    & ident_NoCppCompiler<int>::name,
    & ident_RepeatOption<int>::name,
    & ident_UnknownLongOption<int>::name,
    & ident_UnknownShortOption<int>::name,
    & ident_NoRequiredParam<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"ted source filename in command line", 35},
    {"n -c or --cpp-command not found", 31},
    {" must appear one time", 21},
    {"own option --", 13},
    {"own option -", 12},
    {" expects paramete", 17},
    {"ion ", 4}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )
    //GLOBAL GEN:(S S E )
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icsVarLeft, 0, 10, 5},
    // closed e.idxBVV#0 as range 5
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //(S #NoRequiredParamE )
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # NoRequiredParam/10 e.Param#3/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 5, 10},
    // closed e.Param#3 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 } Tile{ HalfReuse: 'p'/0 HalfReuse: 't'/4 }"ion "/11 Tile{ AsIs: e.Param#3/5 }" expects paramete"/13 Tile{ HalfReuse: 'r'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocString, 0, 6, 11},
    {refalrts::icAllocString, 0, 5, 13},
    {refalrts::icReinitChar, 0, 'o', 10},
    {refalrts::icReinitChar, 0, 'p', 0},
    {refalrts::icReinitChar, 0, 't', 4},
    {refalrts::icReinitChar, 0, 'r', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 10, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    //(S #UnknownShortOptionS )
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # UnknownShortOption/10 s.Option#3/11 )/8 >/1
    {refalrts::icIdentTerm, 0, 4, 10},
    {refalrts::icSave, 0, 15, 5},
    {refalrts::icsVarLeft, 0, 11, 15},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'u'/10 } Tile{ HalfReuse: 'n'/0 HalfReuse: 'k'/4 } Tile{ HalfReuse: 'n'/1 }"own option -"/12 Tile{ AsIs: s.Option#3/11 AsIs: )/8 } Tile{ ]] }
    {refalrts::icAllocString, 0, 4, 12},
    {refalrts::icReinitChar, 0, 'u', 10},
    {refalrts::icReinitChar, 0, 'n', 0},
    {refalrts::icReinitChar, 0, 'k', 4},
    {refalrts::icReinitChar, 0, 'n', 1},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 8, 0},
    {refalrts::icSpliceTile, 12, 13, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 10, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    //(S #UnknownLongOptionE )
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # UnknownLongOption/10 e.Option#3/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 3, 10},
    // closed e.Option#3 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'u'/10 } Tile{ HalfReuse: 'n'/0 HalfReuse: 'k'/4 } Tile{ HalfReuse: 'n'/8 }"own option --"/11 Tile{ AsIs: e.Option#3/5 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icAllocString, 0, 3, 11},
    {refalrts::icReinitChar, 0, 'u', 10},
    {refalrts::icReinitChar, 0, 'n', 0},
    {refalrts::icReinitChar, 0, 'k', 4},
    {refalrts::icReinitChar, 0, 'n', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 10, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    //(S #RepeatOptionS )
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # RepeatOption/10 s.Tag#3/11 )/8 >/1
    {refalrts::icIdentTerm, 0, 2, 10},
    {refalrts::icSave, 0, 15, 5},
    {refalrts::icsVarLeft, 0, 11, 15},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Pos#3/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Pos3 #9/4 HalfReuse: </7 } Tile{ HalfReuse: & Fetch/10 AsIs: s.Tag#3/11 HalfReuse: & lambda_ParseCommandLine_8/8 AsIs: >/1 }" must appear one time"/12 )/14 Tile{ ]] }
    {refalrts::icAllocString, 0, 2, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitSVar, 0, 9, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 1, 10},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icLinkBrackets, 0, 14, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 12, 14, 0},
    {refalrts::icSpliceTile, 10, 1, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //(S #NoCppCompiler)
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # NoCppCompiler/10 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 10},
    {refalrts::icSave, 0, 15, 5},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 HalfReuse: 'p'/8 HalfReuse: 't'/1 } Tile{ HalfReuse: 'i'/0 HalfReuse: 'o'/4 }"n -c or --cpp-command not found"/11 )/13 Tile{ ]] }
    {refalrts::icAllocString, 0, 1, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icReinitChar, 0, 'o', 10},
    {refalrts::icReinitChar, 0, 'p', 8},
    {refalrts::icReinitChar, 0, 't', 1},
    {refalrts::icReinitChar, 0, 'i', 0},
    {refalrts::icReinitChar, 0, 'o', 4},
    {refalrts::icLinkBrackets, 7, 13, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 13, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 1, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(S #NoSourceFile)
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # NoSourceFile/10 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 10},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'e'/10 HalfReuse: 'x'/8 HalfReuse: 'p'/1 } Tile{ HalfReuse: 'e'/0 HalfReuse: 'c'/4 }"ted source filename in command line"/11 )/13 Tile{ ]] }
    {refalrts::icAllocString, 0, 0, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icReinitChar, 0, 'e', 10},
    {refalrts::icReinitChar, 0, 'x', 8},
    {refalrts::icReinitChar, 0, 'p', 1},
    {refalrts::icReinitChar, 0, 'e', 0},
    {refalrts::icReinitChar, 0, 'c', 4},
    {refalrts::icLinkBrackets, 7, 13, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 13, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 1, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[5];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )
  //GLOBAL GEN:(S S E )
  // </0 & lambda_ParseCommandLine_9/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
    refalrts::start_sentence();
    //(S #NoRequiredParamE )
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # NoRequiredParam/10 e.Param#3/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_NoRequiredParam<int>::name, context[10] ) )
      continue;
    // closed e.Param#3 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
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
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S #UnknownShortOptionS )
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # UnknownShortOption/10 s.Option#3/11 )/8 >/1
    if( ! refalrts::ident_term(  & ident_UnknownShortOption<int>::name, context[10] ) )
      continue;
    context[15] = context[5];
    context[16] = context[6];
    if( ! refalrts::svar_left( context[11], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'u'/10 } Tile{ HalfReuse: 'n'/0 HalfReuse: 'k'/4 } Tile{ HalfReuse: 'n'/1 }"own option -"/12 Tile{ AsIs: s.Option#3/11 AsIs: )/8 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[12], context[13], "own option -", 12 ) )
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
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S #UnknownLongOptionE )
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # UnknownLongOption/10 e.Option#3/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_UnknownLongOption<int>::name, context[10] ) )
      continue;
    // closed e.Option#3 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'u'/10 } Tile{ HalfReuse: 'n'/0 HalfReuse: 'k'/4 } Tile{ HalfReuse: 'n'/8 }"own option --"/11 Tile{ AsIs: e.Option#3/5 } Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[11], context[12], "own option --", 13 ) )
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
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S #RepeatOptionS )
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # RepeatOption/10 s.Tag#3/11 )/8 >/1
    if( ! refalrts::ident_term(  & ident_RepeatOption<int>::name, context[10] ) )
      continue;
    context[15] = context[5];
    context[16] = context[6];
    if( ! refalrts::svar_left( context[11], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Pos#3/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Pos3 #9/4 HalfReuse: </7 } Tile{ HalfReuse: & Fetch/10 AsIs: s.Tag#3/11 HalfReuse: & lambda_ParseCommandLine_8/8 AsIs: >/1 }" must appear one time"/12 )/14 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[12], context[13], " must appear one time", 21 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[10], Fetch, "Fetch" );
    refalrts::reinit_name( context[8], lambda_ParseCommandLine_8, "lambda_ParseCommandLine_8" );
    refalrts::link_brackets( context[0], context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(S #NoCppCompiler)
    // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # NoCppCompiler/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_NoCppCompiler<int>::name, context[10] ) )
      continue;
    context[15] = context[5];
    context[16] = context[6];
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 HalfReuse: 'p'/8 HalfReuse: 't'/1 } Tile{ HalfReuse: 'i'/0 HalfReuse: 'o'/4 }"n -c or --cpp-command not found"/11 )/13 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[11], context[12], "n -c or --cpp-command not found", 31 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'o' );
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_char( context[1], 't' );
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'o' );
    refalrts::link_brackets( context[7], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[13] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(S #NoSourceFile)
  // </0 & lambda_ParseCommandLine_9/4 (/7 s.Pos#3/9 # NoSourceFile/10 )/8 >/1
  if( ! refalrts::ident_term(  & ident_NoSourceFile<int>::name, context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'e'/10 HalfReuse: 'x'/8 HalfReuse: 'p'/1 } Tile{ HalfReuse: 'e'/0 HalfReuse: 'c'/4 }"ted source filename in command line"/11 )/13 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[11], context[12], "ted source filename in command line", 35 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[10], 'e' );
  refalrts::reinit_char( context[8], 'x' );
  refalrts::reinit_char( context[1], 'p' );
  refalrts::reinit_char( context[0], 'e' );
  refalrts::reinit_char( context[4], 'c' );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_10(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseCommandLine_9, "lambda_ParseCommandLine_9" },
    { Map, "Map" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Fails<int>::name,
    & ident_Success<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )(E )E 
    //GLOBAL GEN:(E )(E )E 
    // </0 & lambda_ParseCommandLine_10/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    // closed e.idxTT#0 as range 2
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //()((E )(E )(E ))E 
    // </0 & lambda_ParseCommandLine_10/4 (/7 )/8 (/11 (/15 e.CppCompiler#2/13 )/16 (/19 e.SrefCompiler#2/17 )/20 (/23 e.MainSource#2/21 )/24 )/12 e.Folders#2/2 >/1
    {refalrts::icSave, 0, 25, 9},
    {refalrts::icBracketLeftSave, 0, 13, 25},
    {refalrts::icBracketLeftSave, 0, 17, 25},
    {refalrts::icBracketLeftSave, 0, 21, 25},
    {refalrts::icSave, 0, 27, 5},
    {refalrts::icEmpty, 0, 0, 27},
    {refalrts::icEmpty, 0, 0, 25},
    // closed e.CppCompiler#2 as range 13
    // closed e.SrefCompiler#2 as range 17
    // closed e.MainSource#2 as range 21
    // closed e.Folders#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_ParseCommandLine_10/4 (/7 )/8 {REMOVED TILE}  )/12 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/11 AsIs: (/15 AsIs: e.CppCompiler#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.SrefCompiler#2/17 AsIs: )/20 AsIs: (/23 AsIs: e.MainSource#2/21 AsIs: )/24 } Tile{ AsIs: e.Folders#2/2 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 1, 11},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 11, 24, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )(E )E 
    // </0 & lambda_ParseCommandLine_10/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Folders#2/2 >/1
    // closed e.Errors#2 as range 5
    // closed e.Bag#2 as range 9
    // closed e.Folders#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Bag#2/9 )/12 e.Folders#2/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/11 } Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_ParseCommandLine_9/7 AsIs: e.Errors#2/5 HalfReuse: >/8 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 0, 11},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )(E )E 
  //GLOBAL GEN:(E )(E )E 
  // </0 & lambda_ParseCommandLine_10/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
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
    refalrts::start_sentence();
    //()((E )(E )(E ))E 
    // </0 & lambda_ParseCommandLine_10/4 (/7 )/8 (/11 (/15 e.CppCompiler#2/13 )/16 (/19 e.SrefCompiler#2/17 )/20 (/23 e.MainSource#2/21 )/24 )/12 e.Folders#2/2 >/1
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

  //(E )(E )E 
  // </0 & lambda_ParseCommandLine_10/4 (/7 e.Errors#2/5 )/8 (/11 e.Bag#2/9 )/12 e.Folders#2/2 >/1
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
#endif
}

refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 77 elems
  refalrts::Iter context[77];
  refalrts::zeros( context, 77 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { lambda_ParseCommandLine_10, "lambda_ParseCommandLine_10" },
    { lambda_ParseCommandLine_7, "lambda_ParseCommandLine_7" },
    { lambda_ParseCommandLine_5, "lambda_ParseCommandLine_5" },
    { lambda_ParseCommandLine_3, "lambda_ParseCommandLine_3" },
    { lambda_ParseCommandLine_2, "lambda_ParseCommandLine_2" },
    { lambda_ParseCommandLine_1, "lambda_ParseCommandLine_1" },
    { lambda_ParseCommandLine_0, "lambda_ParseCommandLine_0" },
    { Seq, "Seq" },
    { GetOpt, "GetOpt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Required<int>::name,
    & ident_CompilerOption<int>::name,
    & ident_RuntimeFolder<int>::name,
    & ident_SearchFolder<int>::name,
    & ident_SrefCompiler<int>::name,
    & ident_CppCompiler<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"through", 7},
    {"thru", 4},
    {"runtime-directory", 17},
    {"runtime-dir", 11},
    {"directory", 9},
    {"dir", 3},
    {"sref-command", 12},
    {"cpp-command", 11}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & ParseCommandLine/4 e.Arguments#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Arguments#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & GetOpt/6 (/7 (/8 # CppCompiler/9 # Required/10 'c'/11 (/12"cpp-command"/13 )/15 )/16 (/17 # SrefCompiler/18 # Required/19 's'/20 (/21"sref-command"/22 )/24 )/25 (/26 # SearchFolder/27 # Required/28 'd'/29 (/30"dir"/31 )/33 (/34"directory"/35 )/37 )/38 (/39 # RuntimeFolder/40 # Required/41 'D'/42 (/43"runtime-dir"/44 )/46 (/47"runtime-directory"/48 )/50 )/51 (/52 # CompilerOption/53 # Required/54 'X'/55 (/56"thru"/57 )/59 (/60"through"/61 )/63 )/64 )/65 Tile{ AsIs: e.Arguments#1/2 } >/66 </67 & Seq/68 & lambda_ParseCommandLine_0/69 & lambda_ParseCommandLine_1/70 & lambda_ParseCommandLine_2/71 & lambda_ParseCommandLine_3/72 & lambda_ParseCommandLine_5/73 & lambda_ParseCommandLine_7/74 & lambda_ParseCommandLine_10/75 >/76 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 9, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icAllocIdent, 0, 5, 9},
    {refalrts::icAllocIdent, 0, 0, 10},
    {refalrts::icAllocChar, 0, 'c', 11},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icAllocString, 0, 7, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icAllocIdent, 0, 4, 18},
    {refalrts::icAllocIdent, 0, 0, 19},
    {refalrts::icAllocChar, 0, 's', 20},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icAllocString, 0, 6, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocIdent, 0, 3, 27},
    {refalrts::icAllocIdent, 0, 0, 28},
    {refalrts::icAllocChar, 0, 'd', 29},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icAllocString, 0, 5, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icAllocString, 0, 4, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icAllocIdent, 0, 2, 40},
    {refalrts::icAllocIdent, 0, 0, 41},
    {refalrts::icAllocChar, 0, 'D', 42},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 43},
    {refalrts::icAllocString, 0, 3, 44},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 46},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 47},
    {refalrts::icAllocString, 0, 2, 48},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 50},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 51},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 52},
    {refalrts::icAllocIdent, 0, 1, 53},
    {refalrts::icAllocIdent, 0, 0, 54},
    {refalrts::icAllocChar, 0, 'X', 55},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 56},
    {refalrts::icAllocString, 0, 1, 57},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 59},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 60},
    {refalrts::icAllocString, 0, 0, 61},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 63},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 64},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 65},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 66},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 67},
    {refalrts::icAllocFunc, 0, 8, 68},
    {refalrts::icAllocFunc, 0, 7, 69},
    {refalrts::icAllocFunc, 0, 6, 70},
    {refalrts::icAllocFunc, 0, 5, 71},
    {refalrts::icAllocFunc, 0, 4, 72},
    {refalrts::icAllocFunc, 0, 3, 73},
    {refalrts::icAllocFunc, 0, 2, 74},
    {refalrts::icAllocFunc, 0, 1, 75},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 76},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 76},
    {refalrts::icPushStack, 0, 0, 67},
    {refalrts::icPushStack, 0, 0, 66},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icLinkBrackets, 7, 65, 0},
    {refalrts::icLinkBrackets, 52, 64, 0},
    {refalrts::icLinkBrackets, 60, 63, 0},
    {refalrts::icLinkBrackets, 56, 59, 0},
    {refalrts::icLinkBrackets, 39, 51, 0},
    {refalrts::icLinkBrackets, 47, 50, 0},
    {refalrts::icLinkBrackets, 43, 46, 0},
    {refalrts::icLinkBrackets, 26, 38, 0},
    {refalrts::icLinkBrackets, 34, 37, 0},
    {refalrts::icLinkBrackets, 30, 33, 0},
    {refalrts::icLinkBrackets, 17, 25, 0},
    {refalrts::icLinkBrackets, 21, 24, 0},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icLinkBrackets, 12, 15, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 66, 76, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 5, 65, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & ParseCommandLine/4 e.Arguments#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arguments#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & GetOpt/6 (/7 (/8 # CppCompiler/9 # Required/10 'c'/11 (/12"cpp-command"/13 )/15 )/16 (/17 # SrefCompiler/18 # Required/19 's'/20 (/21"sref-command"/22 )/24 )/25 (/26 # SearchFolder/27 # Required/28 'd'/29 (/30"dir"/31 )/33 (/34"directory"/35 )/37 )/38 (/39 # RuntimeFolder/40 # Required/41 'D'/42 (/43"runtime-dir"/44 )/46 (/47"runtime-directory"/48 )/50 )/51 (/52 # CompilerOption/53 # Required/54 'X'/55 (/56"thru"/57 )/59 (/60"through"/61 )/63 )/64 )/65 Tile{ AsIs: e.Arguments#1/2 } >/66 </67 & Seq/68 & lambda_ParseCommandLine_0/69 & lambda_ParseCommandLine_1/70 & lambda_ParseCommandLine_2/71 & lambda_ParseCommandLine_3/72 & lambda_ParseCommandLine_5/73 & lambda_ParseCommandLine_7/74 & lambda_ParseCommandLine_10/75 >/76 Tile{ AsIs: >/1 ]] }
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
  if( ! refalrts::alloc_chars( context[13], context[14], "cpp-command", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[18], & ident_SrefCompiler<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[19], & ident_Required<int>::name ) )
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
  if( ! refalrts::alloc_ident( context[27], & ident_SearchFolder<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[28], & ident_Required<int>::name ) )
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
  if( ! refalrts::alloc_ident( context[40], & ident_RuntimeFolder<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[41], & ident_Required<int>::name ) )
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
  if( ! refalrts::alloc_ident( context[53], & ident_CompilerOption<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[54], & ident_Required<int>::name ) )
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
  if( ! refalrts::alloc_name( context[68], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[69], lambda_ParseCommandLine_0, "lambda_ParseCommandLine_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[70], lambda_ParseCommandLine_1, "lambda_ParseCommandLine_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[71], lambda_ParseCommandLine_2, "lambda_ParseCommandLine_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[72], lambda_ParseCommandLine_3, "lambda_ParseCommandLine_3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[73], lambda_ParseCommandLine_5, "lambda_ParseCommandLine_5" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[74], lambda_ParseCommandLine_7, "lambda_ParseCommandLine_7" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[75], lambda_ParseCommandLine_10, "lambda_ParseCommandLine_10" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[76] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
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
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
