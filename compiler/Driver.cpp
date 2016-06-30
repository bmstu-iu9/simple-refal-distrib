// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HighLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HighLevelRASL_OptPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HighLevelRASL_OptResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LexFolding(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LowLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ParseProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SelectGenMode(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SelectRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #EL_HasErrors
template <typename SREFAL_PARAM_INT>
struct ident_EL_HasErrors {
  static const char *name() {
    return "EL_HasErrors";
  }
};

// identifier #EL_NoErrors
template <typename SREFAL_PARAM_INT>
struct ident_EL_NoErrors {
  static const char *name() {
    return "EL_NoErrors";
  }
};

// identifier #Fails
template <typename SREFAL_PARAM_INT>
struct ident_Fails {
  static const char *name() {
    return "Fails";
  }
};

// identifier #OnlyDirect
template <typename SREFAL_PARAM_INT>
struct ident_OnlyDirect {
  static const char *name() {
    return "OnlyDirect";
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

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

static refalrts::FnResult lambda_CompileFile_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_CompileFile_0/4 (/7 e.SrcName#1/5 )/8 e.LexFolding#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.SrcName#1 as range 5
  // closed e.LexFolding#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & ParseProgram/0 HalfReuse: </4 HalfReuse: & EL_Create/7 AsIs: e.SrcName#1/5 HalfReuse: >/8 AsIs: e.LexFolding#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ParseProgram, "ParseProgram" );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], EL_Create, "EL_Create" );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_CompileFile_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_CompileFile_1/4 (/8 e.AST#2/6 )/9 s.Opt#1/14 s.GenMode#1/15 (/12 e.OutputName#1/10 )/13 # EL_NoErrors/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_right(  & ident_EL_NoErrors<int>::name, context[2], context[3] );
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
    context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.AST#2 as range 6
    // closed e.OutputName#1 as range 10
    if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.AST#2/6 } </16 & Seq/17 </18 Tile{ HalfReuse: & SelectRASL/9 AsIs: s.Opt#1/14 } >/19 Tile{ AsIs: (/8 } & LowLevelRASL/20 </21 & SelectGenMode/22 Tile{ AsIs: s.GenMode#1/15 } s.Opt#1/14/23 >/24 )/25 & GenProgram/26 (/27 & SaveFile/28 Tile{ AsIs: (/12 AsIs: e.OutputName#1/10 AsIs: )/13 HalfReuse: )/5 AsIs: >/1 } >/29 # Success/30 e.OutputName#1/10/31 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], Seq, "Seq" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], LowLevelRASL, "LowLevelRASL" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], SelectGenMode, "SelectGenMode" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[23], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], GenProgram, "GenProgram" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], SaveFile, "SaveFile" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[30], & ident_Success<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[31], context[32], context[10], context[11]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_name( context[9], SelectRASL, "SelectRASL" );
    refalrts::reinit_close_bracket( context[5] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[27], context[5] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[25] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[23], context[28] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[9], context[14] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_CompileFile_1/4 (/8 e.AST#2/6 )/9 s.Opt#1/14 s.GenMode#1/15 (/12 e.OutputName#1/10 )/13 # EL_HasErrors/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_right(  & ident_EL_HasErrors<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.AST#2 as range 6
  // closed e.OutputName#1 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_CompileFile_1/4 (/8 e.AST#2/6 )/9 s.Opt#1/14 s.GenMode#1/15 (/12 e.OutputName#1/10 )/13 # EL_HasErrors/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 } Tile{ ]] }
  refalrts::reinit_ident( context[0], & ident_Fails<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_CompileFile_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_CompileFile_2/4 s.Opt#1/5 s.GenMode#1/6 (/9 e.OutputName#1/7 )/10 t.ErrorList#2/11 e.AST#2/2 >/1
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
  // closed e.OutputName#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 } & Fetch/13 </14 & EL_Destroy/15 Tile{ AsIs: t.ErrorList#2/11 } >/16 </17 & CreateClosure /18 & lambda_CompileFile_1/19 (/20 Tile{ AsIs: e.AST#2/2 } Tile{ HalfReuse: )/4 AsIs: s.Opt#1/5 AsIs: s.GenMode#1/6 AsIs: (/9 AsIs: e.OutputName#1/7 AsIs: )/10 } >/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[13], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], EL_Destroy, "EL_Destroy" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], lambda_CompileFile_1, "lambda_CompileFile_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[20], context[4] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[4], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CompileFile/4 s.GenMode#1/5 s.Opt#1/6 (/9 e.SrcName#1/7 )/10 e.OutputName#1/2 >/1
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
  // closed e.SrcName#1 as range 7
  // closed e.OutputName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & LexFolding/12 e.SrcName#1/7/13 >/15 </16 & Seq/17 </18 & CreateClosure /19 & lambda_CompileFile_0/20 Tile{ AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 } >/21 </22 & CreateClosure /23 & lambda_CompileFile_2/24 Tile{ AsIs: s.Opt#1/6 } Tile{ AsIs: s.GenMode#1/5 } (/25 Tile{ AsIs: e.OutputName#1/2 } )/26 >/27 >/28 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], LexFolding, "LexFolding" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[13], context[14], context[7], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], lambda_CompileFile_0, "lambda_CompileFile_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], lambda_CompileFile_2, "lambda_CompileFile_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[22] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[21], context[24] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[20] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult SelectRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SelectRASL/4 # OptNone/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_OptNone<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SelectRASL/4 # OptNone/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: & HighLevelRASL/0 } Tile{ ]] }
    refalrts::reinit_name( context[0], HighLevelRASL, "HighLevelRASL" );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SelectRASL/4 # OptPattern/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_OptPattern<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SelectRASL/4 # OptPattern/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: & HighLevelRASL_OptPattern/0 } Tile{ ]] }
    refalrts::reinit_name( context[0], HighLevelRASL_OptPattern, "HighLevelRASL_OptPattern" );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SelectRASL/4 # OptResult/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_OptResult<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & SelectRASL/4 # OptResult/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: & HighLevelRASL_OptResult/0 } Tile{ ]] }
  refalrts::reinit_name( context[0], HighLevelRASL_OptResult, "HighLevelRASL_OptResult" );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult SelectGenMode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SelectGenMode/4 s.GenMode#1/6 # OptNone/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_right(  & ident_OptNone<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SelectGenMode/4 s.GenMode#1/6 # OptNone/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.GenMode1 #6/0 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SelectGenMode/4 s.GenMode#1/6 # OptPattern/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_right(  & ident_OptPattern<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SelectGenMode/4 s.GenMode#1/6 # OptPattern/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # OnlyDirect/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_OnlyDirect<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SelectGenMode/4 s.GenMode#1/6 # OptResult/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_right(  & ident_OptResult<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & SelectGenMode/4 s.GenMode#1/6 # OptResult/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: # OnlyDirect/0 } Tile{ ]] }
  refalrts::reinit_ident( context[0], & ident_OnlyDirect<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
