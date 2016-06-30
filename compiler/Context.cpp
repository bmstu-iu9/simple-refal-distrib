// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Cntx_AddNewVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_AddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_CheckVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_PopScope(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_PushScope(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_ResetAfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Context(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ShiftVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ShiftVariable_AddToFree(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Unique(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #AlreadyBounded
template <typename SREFAL_PARAM_INT>
struct ident_AlreadyBounded {
  static const char *name() {
    return "AlreadyBounded";
  }
};

// identifier #ExistVariable
template <typename SREFAL_PARAM_INT>
struct ident_ExistVariable {
  static const char *name() {
    return "ExistVariable";
  }
};

// identifier #FreeVarsFunc
template <typename SREFAL_PARAM_INT>
struct ident_FreeVarsFunc {
  static const char *name() {
    return "FreeVarsFunc";
  }
};

// identifier #FreeVarsSent
template <typename SREFAL_PARAM_INT>
struct ident_FreeVarsSent {
  static const char *name() {
    return "FreeVarsSent";
  }
};

// identifier #InvalidMode
template <typename SREFAL_PARAM_INT>
struct ident_InvalidMode {
  static const char *name() {
    return "InvalidMode";
  }
};

// identifier #NotFound
template <typename SREFAL_PARAM_INT>
struct ident_NotFound {
  static const char *name() {
    return "NotFound";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

static refalrts::FnResult Context(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

refalrts::FnResult Cntx_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Cntx_Create/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & Context/4 HalfReuse: 0/1 } ]/5 Tile{ ]] }
  if( ! refalrts::alloc_close_adt( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_adt( context[0] );
  refalrts::update_name( context[4], Context, "Context" );
  refalrts::reinit_number( context[1], 0UL );
  refalrts::link_brackets( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult Cntx_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Cntx_Destroy/4 [/7Context/8 0/10 ]/9 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], Context, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = refalrts::number_left( 0UL, context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Cntx_Destroy/4 [/7Context/8 0/10 ]/9 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult Cntx_AddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Cntx_AddVariable/4 [/7Context/8 s.StackDepth#1/10 e.Variables_B#1/12 (/16 s.Mode#1/18 e.Index#1/19 s.VarDepth#1/21 )/17 e.Variables_E#1/22 ]/9 s.Mode#1/11 e.Index#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::adt_left( context[5], context[6], Context, context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::adt_pointers(context[7], context[8], context[9]);
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
      continue;
    // closed e.Index#1 as range 2
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop();
    do {
      context[22] = context[5];
      context[23] = context[6];
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[22], context[23] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      if( ! refalrts::repeated_stvar_left( context[18], context[11], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[19], context[20], context[2], context[3], context[14], context[15] ) )
        continue;
      // closed e.Variables_E#1 as range 5
      if( ! refalrts::svar_left( context[21], context[14], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & Context/8 AsIs: s.StackDepth#1/10 } Tile{ AsIs: </0 Reuse: & ShiftVariable/4 } (/24 Tile{ AsIs: s.Mode#1/11 AsIs: e.Index#1/2 HalfReuse: s.VarDepth1 #21/1 } )/25 Tile{ AsIs: e.Variables_B#1/12 } >/26 Tile{ AsIs: (/16 AsIs: s.Mode#1/18 AsIs: e.Index#1/19 AsIs: s.VarDepth#1/21 AsIs: )/17 AsIs: e.Variables_E#1/22 AsIs: ]/9 } # Success/27 s.VarDepth#1/21/28 Tile{ ]] }
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_Success<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[28], context[21]))
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ShiftVariable, "ShiftVariable" );
      refalrts::reinit_svar( context[1], context[21] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::push_stack( context[26] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[16], context[9] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[10] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[12], context[13], context[5], context[6] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Cntx_AddVariable/4 [/7Context/8 s.StackDepth#1/10 e.Variables_B#1/12 (/16 s.OldMode#1/18 e.Index#1/19 s.VarDepth#1/21 )/17 e.Variables_E#1/22 ]/9 s.NewMode#1/11 e.Index#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::adt_left( context[5], context[6], Context, context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::adt_pointers(context[7], context[8], context[9]);
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
      continue;
    // closed e.Index#1 as range 2
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop();
    do {
      context[22] = context[5];
      context[23] = context[6];
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[22], context[23] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      // closed e.Variables_E#1 as range 5
      if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[19], context[20], context[2], context[3], context[14], context[15] ) )
        continue;
      if( ! refalrts::svar_left( context[21], context[14], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.NewMode#1/11 e.Index#1/2 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & Context/8 AsIs: s.StackDepth#1/10 AsIs: e.Variables_B#1/12 AsIs: (/16 AsIs: s.OldMode#1/18 AsIs: e.Index#1/19 AsIs: s.VarDepth#1/21 AsIs: )/17 AsIs: e.Variables_E#1/22 AsIs: ]/9 } Tile{ HalfReuse: # InvalidMode/0 HalfReuse: s.VarDepth1 #21/4 } Tile{ HalfReuse: s.OldMode1 #18/1 ]] }
      refalrts::reinit_ident( context[0], & ident_InvalidMode<int>::name );
      refalrts::reinit_svar( context[4], context[21] );
      refalrts::reinit_svar( context[1], context[18] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[9] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[12], context[13], context[5], context[6] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Cntx_AddVariable/4 [/7Context/8 s.StackDepth#1/10 e.Variables#1/5 ]/9 s.Mode#1/11 e.Index#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], Context, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Variables#1 as range 5
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & Context/8 AsIs: s.StackDepth#1/10 } Tile{ HalfReuse: (/9 AsIs: s.Mode#1/11 AsIs: e.Index#1/2 HalfReuse: s.StackDepth1 #10/1 } )/12 Tile{ AsIs: e.Variables#1/5 } Tile{ HalfReuse: ]/0 HalfReuse: # Success/4 } s.StackDepth#1/10/13 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[13], context[10]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_svar( context[1], context[10] );
  refalrts::reinit_close_adt( context[0] );
  refalrts::reinit_ident( context[4], & ident_Success<int>::name );
  refalrts::link_brackets( context[7], context[0] );
  refalrts::link_brackets( context[9], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ShiftVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ShiftVariable/4 (/7 s.Mode#1/9 e.Index#1/5 s.VarDepth#1/10 )/8 e.Variables_B#1/11 (/15 # FreeVarsSent/17 e.Free#1/13 )/16 (/20 # FreeVarsFunc/22 e.FreeFunc#1/18 )/21 e.Variables_E#1/23 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[2];
      context[24] = context[3];
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[23], context[24] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = refalrts::ident_left(  & ident_FreeVarsSent<int>::name, context[13], context[14] );
      if( ! context[17] )
        continue;
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[23], context[24] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = refalrts::ident_left(  & ident_FreeVarsFunc<int>::name, context[18], context[19] );
      if( ! context[22] )
        continue;
      // closed e.Free#1 as range 13
      // closed e.FreeFunc#1 as range 18
      // closed e.Variables_E#1 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Variables_B#1/11 } (/25 s.Mode#1/9/26 e.Index#1/5/27 s.VarDepth#1/10/29 )/30 Tile{ AsIs: (/15 AsIs: # FreeVarsSent/17 } </31 & ShiftVariable_AddToFree/32 (/33 s.Mode#1/9/34 e.Index#1/5/35 s.VarDepth#1/10/37 )/38 Tile{ AsIs: e.Free#1/13 } >/39 Tile{ AsIs: )/16 AsIs: (/20 AsIs: # FreeVarsFunc/22 AsIs: e.FreeFunc#1/18 AsIs: )/21 } Tile{ AsIs: </0 AsIs: & ShiftVariable/4 AsIs: (/7 AsIs: s.Mode#1/9 AsIs: e.Index#1/5 AsIs: s.VarDepth#1/10 AsIs: )/8 } Tile{ AsIs: e.Variables_E#1/23 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[26], context[9]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[27], context[28], context[5], context[6]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[29], context[10]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[32], ShiftVariable_AddToFree, "ShiftVariable_AddToFree" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[34], context[9]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[35], context[36], context[5], context[6]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[37], context[10]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[31] );
      refalrts::link_brackets( context[33], context[38] );
      refalrts::link_brackets( context[25], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[16], context[21] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[31], context[38] );
      res = refalrts::splice_evar( res, context[15], context[17] );
      res = refalrts::splice_evar( res, context[25], context[30] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[11], context[12], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ShiftVariable/4 (/7 s.Mode#1/9 e.Index#1/5 s.VarDepth#1/10 )/8 e.Variables#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Variables#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ShiftVariable/4 (/7 s.Mode#1/9 e.Index#1/5 s.VarDepth#1/10 )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Variables#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ShiftVariable_AddToFree(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ShiftVariable_AddToFree/4 (/7 s.Mode#1/9 e.Index#1/5 s.VarDepth#1/10 )/8 e.Variables_B#1/11 (/15 s.Mode#1/17 e.Index#1/18 s.VarDepth#1/20 )/16 e.Variables_E#1/21 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[2];
      context[22] = context[3];
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[21], context[22] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      if( ! refalrts::repeated_stvar_left( context[17], context[9], context[13], context[14] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[18], context[19], context[5], context[6], context[13], context[14] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[20], context[10], context[13], context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.Variables_E#1 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & ShiftVariable_AddToFree/4 {REMOVED TILE}  {REMOVED TILE}  (/15 s.Mode#1/17 e.Index#1/18 s.VarDepth#1/20 )/16 {REMOVED TILE}  >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Variables_B#1/11 } Tile{ AsIs: (/7 AsIs: s.Mode#1/9 AsIs: e.Index#1/5 AsIs: s.VarDepth#1/10 AsIs: )/8 } Tile{ AsIs: e.Variables_E#1/21 } Tile{ ]] }
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[11], context[12], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ShiftVariable_AddToFree/4 (/7 s.Mode#1/9 e.Index#1/5 s.VarDepth#1/10 )/8 e.Variables#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Variables#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ShiftVariable_AddToFree/4 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Variables#1/2 } Tile{ AsIs: (/7 AsIs: s.Mode#1/9 AsIs: e.Index#1/5 AsIs: s.VarDepth#1/10 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Cntx_AddNewVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Cntx_AddNewVariable_0/4 s.StackDepth#1/5 s.Mode#1/6 (/9 e.Index#1/7 )/10 (/13 e.FreeSent#1/11 )/14 (/17 e.FreeFunc#1/15 )/18 (/21 e.Stack#1/19 )/22 e.LocalVars_B#2/23 (/27 s.Mode#1/29 e.Index#1/30 s.Depth#2/32 )/28 e.LocalVars_E#2/33 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Index#1 as range 7
    // closed e.FreeSent#1 as range 11
    // closed e.FreeFunc#1 as range 15
    // closed e.Stack#1 as range 19
    context[23] = 0;
    context[24] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[2];
      context[34] = context[3];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[33], context[34] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      if( ! refalrts::repeated_stvar_left( context[29], context[6], context[25], context[26] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[30], context[31], context[7], context[8], context[25], context[26] ) )
        continue;
      // closed e.LocalVars_E#2 as range 2
      if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  s.StackDepth#1/5 s.Mode#1/6 {REMOVED TILE}  e.Index#1/7 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & Context/4 } Tile{ HalfReuse: s.StackDepth1 #5/22 AsIs: e.LocalVars_B#2/23 AsIs: (/27 AsIs: s.Mode#1/29 AsIs: e.Index#1/30 AsIs: s.Depth#2/32 AsIs: )/28 AsIs: e.LocalVars_E#2/33 HalfReuse: (/1 } Tile{ HalfReuse: # FreeVarsSent/13 AsIs: e.FreeSent#1/11 AsIs: )/14 AsIs: (/17 } Tile{ HalfReuse: # FreeVarsFunc/9 } Tile{ AsIs: e.FreeFunc#1/15 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Stack#1/19 } Tile{ HalfReuse: ]/18 HalfReuse: # AlreadyBounded/21 } s.Depth#2/32/35 Tile{ ]] }
      if (! refalrts::copy_stvar(context[35], context[32]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_adt( context[0] );
      refalrts::update_name( context[4], Context, "Context" );
      refalrts::reinit_svar( context[22], context[5] );
      refalrts::reinit_open_bracket( context[1] );
      refalrts::reinit_ident( context[13], & ident_FreeVarsSent<int>::name );
      refalrts::reinit_ident( context[9], & ident_FreeVarsFunc<int>::name );
      refalrts::reinit_close_adt( context[18] );
      refalrts::reinit_ident( context[21], & ident_AlreadyBounded<int>::name );
      refalrts::link_brackets( context[0], context[18] );
      refalrts::link_brackets( context[17], context[10] );
      refalrts::link_brackets( context[1], context[14] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[18], context[21] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      res = refalrts::splice_evar( res, context[22], context[1] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[23], context[24], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Cntx_AddNewVariable_0/4 s.StackDepth#1/5 s.Mode#1/6 (/9 e.Index#1/7 )/10 (/13 e.FreeSent#1/11 )/14 (/17 e.FreeFunc#1/15 )/18 (/21 e.Stack#1/19 )/22 e.LocalVars_B#2/23 (/27 s.OldMode#2/29 e.Index#1/30 s.VarDepth#2/32 )/28 e.LocalVars_E#2/33 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Index#1 as range 7
    // closed e.FreeSent#1 as range 11
    // closed e.FreeFunc#1 as range 15
    // closed e.Stack#1 as range 19
    context[23] = 0;
    context[24] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[2];
      context[34] = context[3];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[33], context[34] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      // closed e.LocalVars_E#2 as range 2
      if( ! refalrts::svar_left( context[29], context[25], context[26] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[30], context[31], context[7], context[8], context[25], context[26] ) )
        continue;
      if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  s.StackDepth#1/5 s.Mode#1/6 {REMOVED TILE}  e.Index#1/7 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & Context/4 } Tile{ HalfReuse: s.StackDepth1 #5/22 AsIs: e.LocalVars_B#2/23 AsIs: (/27 AsIs: s.OldMode#2/29 AsIs: e.Index#1/30 AsIs: s.VarDepth#2/32 AsIs: )/28 AsIs: e.LocalVars_E#2/33 HalfReuse: (/1 } Tile{ HalfReuse: # FreeVarsSent/13 AsIs: e.FreeSent#1/11 AsIs: )/14 AsIs: (/17 } Tile{ HalfReuse: # FreeVarsFunc/9 } Tile{ AsIs: e.FreeFunc#1/15 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Stack#1/19 } Tile{ HalfReuse: ]/18 HalfReuse: # InvalidMode/21 } s.VarDepth#2/32/35 s.OldMode#2/29/36 Tile{ ]] }
      if (! refalrts::copy_stvar(context[35], context[32]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[29]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_adt( context[0] );
      refalrts::update_name( context[4], Context, "Context" );
      refalrts::reinit_svar( context[22], context[5] );
      refalrts::reinit_open_bracket( context[1] );
      refalrts::reinit_ident( context[13], & ident_FreeVarsSent<int>::name );
      refalrts::reinit_ident( context[9], & ident_FreeVarsFunc<int>::name );
      refalrts::reinit_close_adt( context[18] );
      refalrts::reinit_ident( context[21], & ident_InvalidMode<int>::name );
      refalrts::link_brackets( context[0], context[18] );
      refalrts::link_brackets( context[17], context[10] );
      refalrts::link_brackets( context[1], context[14] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[18], context[21] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      res = refalrts::splice_evar( res, context[22], context[1] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[23], context[24], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Cntx_AddNewVariable_0/4 s.StackDepth#1/5 s.Mode#1/6 (/9 e.Index#1/7 )/10 (/13 e.FreeSent#1/11 )/14 (/17 e.FreeFunc#1/15 )/18 (/21 e.Stack#1/19 )/22 e.LocalVars#2/2 >/1
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
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Index#1 as range 7
  // closed e.FreeSent#1 as range 11
  // closed e.FreeFunc#1 as range 15
  // closed e.Stack#1 as range 19
  // closed e.LocalVars#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & Context/4 AsIs: s.StackDepth#1/5 } Tile{ AsIs: (/9 } Tile{ AsIs: s.Mode#1/6 } Tile{ AsIs: e.Index#1/7 } s.StackDepth#1/5/23 Tile{ AsIs: )/18 } Tile{ AsIs: e.LocalVars#2/2 } Tile{ HalfReuse: (/10 HalfReuse: # FreeVarsSent/13 AsIs: e.FreeSent#1/11 AsIs: )/14 AsIs: (/17 } # FreeVarsFunc/24 Tile{ AsIs: e.FreeFunc#1/15 } Tile{ HalfReuse: )/21 AsIs: e.Stack#1/19 HalfReuse: ]/22 } # Success/25 Tile{ HalfReuse: s.StackDepth1 #5/1 ]] }
  if (! refalrts::copy_stvar(context[23], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[24], & ident_FreeVarsFunc<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[25], & ident_Success<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_adt( context[0] );
  refalrts::update_name( context[4], Context, "Context" );
  refalrts::reinit_open_bracket( context[10] );
  refalrts::reinit_ident( context[13], & ident_FreeVarsSent<int>::name );
  refalrts::reinit_close_bracket( context[21] );
  refalrts::reinit_close_adt( context[22] );
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::link_brackets( context[0], context[22] );
  refalrts::link_brackets( context[17], context[21] );
  refalrts::link_brackets( context[10], context[14] );
  refalrts::link_brackets( context[9], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[10], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult Cntx_AddNewVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Cntx_AddNewVariable/4 [/7Context/8 s.StackDepth#1/10 e.LocalVars#1/12 (/16 # FreeVarsSent/18 e.FreeSent#1/14 )/17 (/21 # FreeVarsFunc/23 e.FreeFunc#1/19 )/22 e.Stack#1/24 ]/9 s.Mode#1/11 e.Index#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], Context, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 2
  context[12] = 0;
  context[13] = 0;
  refalrts::start_e_loop();
  do {
    context[24] = context[5];
    context[25] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[24], context[25] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_FreeVarsSent<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[24], context[25] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  & ident_FreeVarsFunc<int>::name, context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.FreeSent#1 as range 14
    // closed e.FreeFunc#1 as range 19
    // closed e.Stack#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.LocalVars#1/12 } Tile{ HalfReuse: </23 } Tile{ HalfReuse: & CreateClosure /7 Reuse: & lambda_Cntx_AddNewVariable_0/8 AsIs: s.StackDepth#1/10 } Tile{ AsIs: s.Mode#1/11 } (/26 Tile{ AsIs: e.Index#1/2 } Tile{ HalfReuse: )/16 HalfReuse: (/18 AsIs: e.FreeSent#1/14 AsIs: )/17 AsIs: (/21 } Tile{ AsIs: e.FreeFunc#1/19 } )/27 Tile{ HalfReuse: (/22 AsIs: e.Stack#1/24 HalfReuse: )/9 } >/28 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_open_call( context[23] );
    refalrts::reinit_name( context[7], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::update_name( context[8], lambda_Cntx_AddNewVariable_0, "lambda_Cntx_AddNewVariable_0" );
    refalrts::reinit_close_bracket( context[16] );
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[22], context[9] );
    refalrts::link_brackets( context[21], context[27] );
    refalrts::link_brackets( context[18], context[17] );
    refalrts::link_brackets( context[26], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[22], context[9] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[16], context[21] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[12], context[13], context[5], context[6] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

refalrts::FnResult Cntx_CheckVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Cntx_CheckVariable/4 [/7Context/8 s.StackDepth#1/10 e.Variables_B#1/12 (/16 s.Mode#1/18 e.Index#1/19 s.VarDepth#1/21 )/17 e.Variables_E#1/22 ]/9 s.Mode#1/11 e.Index#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::adt_left( context[5], context[6], Context, context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::adt_pointers(context[7], context[8], context[9]);
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
      continue;
    // closed e.Index#1 as range 2
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop();
    do {
      context[22] = context[5];
      context[23] = context[6];
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[22], context[23] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      if( ! refalrts::repeated_stvar_left( context[18], context[11], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[19], context[20], context[2], context[3], context[14], context[15] ) )
        continue;
      // closed e.Variables_E#1 as range 5
      if( ! refalrts::svar_left( context[21], context[14], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & Context/8 AsIs: s.StackDepth#1/10 } Tile{ AsIs: </0 Reuse: & ShiftVariable/4 } (/24 Tile{ AsIs: s.Mode#1/11 AsIs: e.Index#1/2 HalfReuse: s.VarDepth1 #21/1 } )/25 Tile{ AsIs: e.Variables_B#1/12 } >/26 Tile{ AsIs: (/16 AsIs: s.Mode#1/18 AsIs: e.Index#1/19 AsIs: s.VarDepth#1/21 AsIs: )/17 AsIs: e.Variables_E#1/22 AsIs: ]/9 } # ExistVariable/27 s.VarDepth#1/21/28 Tile{ ]] }
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_ExistVariable<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[28], context[21]))
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ShiftVariable, "ShiftVariable" );
      refalrts::reinit_svar( context[1], context[21] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::push_stack( context[26] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[16], context[9] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[10] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[12], context[13], context[5], context[6] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Cntx_CheckVariable/4 [/7Context/8 s.StackDepth#1/10 e.Variables_B#1/12 (/16 s.OldMode#1/18 e.Index#1/19 s.VarDepth#1/21 )/17 e.Variables_E#1/22 ]/9 s.NewMode#1/11 e.Index#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::adt_left( context[5], context[6], Context, context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::adt_pointers(context[7], context[8], context[9]);
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
      continue;
    // closed e.Index#1 as range 2
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop();
    do {
      context[22] = context[5];
      context[23] = context[6];
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[22], context[23] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      // closed e.Variables_E#1 as range 5
      if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[19], context[20], context[2], context[3], context[14], context[15] ) )
        continue;
      if( ! refalrts::svar_left( context[21], context[14], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.NewMode#1/11 e.Index#1/2 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & Context/8 AsIs: s.StackDepth#1/10 AsIs: e.Variables_B#1/12 AsIs: (/16 AsIs: s.OldMode#1/18 AsIs: e.Index#1/19 AsIs: s.VarDepth#1/21 AsIs: )/17 AsIs: e.Variables_E#1/22 AsIs: ]/9 } Tile{ HalfReuse: # InvalidMode/0 HalfReuse: 0/4 } Tile{ HalfReuse: s.OldMode1 #18/1 ]] }
      refalrts::reinit_ident( context[0], & ident_InvalidMode<int>::name );
      refalrts::reinit_number( context[4], 0UL );
      refalrts::reinit_svar( context[1], context[18] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[9] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[12], context[13], context[5], context[6] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Cntx_CheckVariable/4 [/7Context/8 s.StackDepth#1/10 e.Variables#1/5 ]/9 s.Mode#1/11 e.Index#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], Context, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Variables#1 as range 5
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Cntx_CheckVariable/4 {REMOVED TILE}  s.Mode#1/11 e.Index#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & Context/8 AsIs: s.StackDepth#1/10 AsIs: e.Variables#1/5 AsIs: ]/9 } Tile{ HalfReuse: # NotFound/1 ]] }
  refalrts::reinit_ident( context[1], & ident_NotFound<int>::name );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult Cntx_ResetAfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Cntx_ResetAfterSentence/4 [/7Context/8 s.StackDepth#1/10 e.Locals#1/11 (/15 # FreeVarsSent/17 e.FreeSent#1/13 )/16 (/20 # FreeVarsFunc/22 e.FreeFunc#1/18 )/21 e.Outers#1/23 ]/9 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], Context, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  refalrts::start_e_loop();
  do {
    context[23] = context[5];
    context[24] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[23], context[24] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_FreeVarsSent<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[23], context[24] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_FreeVarsFunc<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.FreeSent#1 as range 13
    // closed e.FreeFunc#1 as range 18
    // closed e.Outers#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Locals#1/11 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & Context/8 AsIs: s.StackDepth#1/10 } Tile{ AsIs: (/15 AsIs: # FreeVarsSent/17 } Tile{ AsIs: )/16 AsIs: (/20 AsIs: # FreeVarsFunc/22 } Tile{ AsIs: </0 Reuse: & Unique/4 } Tile{ AsIs: e.FreeSent#1/13 } Tile{ AsIs: e.FreeFunc#1/18 } Tile{ AsIs: >/1 } Tile{ AsIs: )/21 AsIs: e.Outers#1/23 AsIs: ]/9 } Tile{ ]] }
    refalrts::update_name( context[4], Unique, "Unique" );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[9] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[16], context[22] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[11], context[12], context[5], context[6] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

static refalrts::FnResult Unique(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Unique/4 e.Begin#1/5 t.Copy#1/7 e.Middle#1/9 t.Copy#1/11 e.End#1/15 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[13] = context[2];
      context[14] = context[3];
      context[8] = refalrts::tvar_left( context[7], context[13], context[14] );
      if( ! context[8] )
        continue;
      context[9] = 0;
      context[10] = 0;
      refalrts::start_e_loop();
      do {
        context[15] = context[13];
        context[16] = context[14];
        context[12] = refalrts::repeated_stvar_left( context[11], context[7], context[15], context[16] );
        if( ! context[12] )
          continue;
        // closed e.End#1 as range 2

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.Copy#1/11 {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Begin#1/5 } Tile{ AsIs: </0 AsIs: & Unique/4 } Tile{ AsIs: t.Copy#1/7 } Tile{ AsIs: e.Middle#1/9 } Tile{ AsIs: e.End#1/15 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[9], context[10], context[13], context[14] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Unique/4 e.Uniques#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Uniques#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Unique/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniques#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult Cntx_PushScope(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Cntx_PushScope/4 [/7Context/8 s.StackDepth#1/10 e.Variables#1/5 ]/9 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], Context, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Variables#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & Context/4 HalfReuse: </7 Reuse: & Inc/8 AsIs: s.StackDepth#1/10 } Tile{ HalfReuse: >/9 } (/11 # FreeVarsSent/12 )/13 (/14 # FreeVarsFunc/15 )/16 Tile{ AsIs: e.Variables#1/5 } Tile{ HalfReuse: ]/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_FreeVarsSent<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[15], & ident_FreeVarsFunc<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_adt( context[0] );
  refalrts::update_name( context[4], Context, "Context" );
  refalrts::reinit_open_call( context[7] );
  refalrts::update_name( context[8], Inc, "Inc" );
  refalrts::reinit_close_call( context[9] );
  refalrts::reinit_close_adt( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[14], context[16] );
  refalrts::link_brackets( context[11], context[13] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult Cntx_PopScope(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Cntx_PopScope/4 [/7Context/8 s.StackDepth#1/10 (/13 # FreeVarsSent/15 )/14 (/18 # FreeVarsFunc/20 e.ClosureContext#1/16 )/19 e.Outers#1/5 ]/9 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], Context, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = refalrts::ident_left(  & ident_FreeVarsSent<int>::name, context[11], context[12] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[5], context[6] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = refalrts::ident_left(  & ident_FreeVarsFunc<int>::name, context[16], context[17] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ClosureContext#1 as range 16
  // closed e.Outers#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  # FreeVarsSent/15 )/14 (/18 # FreeVarsFunc/20 {REMOVED TILE}  )/19 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & Context/4 HalfReuse: </7 Reuse: & Dec/8 AsIs: s.StackDepth#1/10 HalfReuse: >/13 } Tile{ AsIs: e.Outers#1/5 } Tile{ AsIs: ]/9 } Tile{ AsIs: e.ClosureContext#1/16 } Tile{ ]] }
  refalrts::reinit_open_adt( context[0] );
  refalrts::update_name( context[4], Context, "Context" );
  refalrts::reinit_open_call( context[7] );
  refalrts::update_name( context[8], Dec, "Dec" );
  refalrts::reinit_close_call( context[13] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[13], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
