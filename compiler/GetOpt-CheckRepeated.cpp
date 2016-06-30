// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult GetOpt_CheckRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #RepeatOption
template <typename SREFAL_PARAM_INT>
struct ident_RepeatOption {
  static const char *name() {
    return "RepeatOption";
  }
};

refalrts::FnResult GetOpt_CheckRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetOpt_CheckRepeated/4 (/7 e.CheckedTags_B#1/13 s.Tag#1/15 e.CheckedTags_E#1/36 )/8 (/11 e.Errors#1/9 )/12 e.Opts_B#1/16 (/20 s.Tag#1/22 s.Num1#1/23 e.Value#1/18 )/21 e.Opts_M#1/24 (/28 s.Tag#1/30 s.Num2#1/33 e.Value#1/31 )/29 e.Opts_E#1/40 >/1
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
    // closed e.Errors#1 as range 9
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[34] = context[2];
      context[35] = context[3];
      context[36] = context[5];
      context[37] = context[6];
      if( ! refalrts::svar_left( context[15], context[36], context[37] ) )
        continue;
      // closed e.CheckedTags_E#1 as range 5
      context[16] = 0;
      context[17] = 0;
      refalrts::start_e_loop();
      do {
        context[38] = context[34];
        context[39] = context[35];
        context[18] = 0;
        context[19] = 0;
        context[20] = refalrts::brackets_left( context[18], context[19], context[38], context[39] );
        if( ! context[20] )
          continue;
        refalrts::bracket_pointers(context[20], context[21]);
        if( ! refalrts::repeated_stvar_left( context[22], context[15], context[18], context[19] ) )
          continue;
        if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
          continue;
        // closed e.Value#1 as range 18
        context[24] = 0;
        context[25] = 0;
        refalrts::start_e_loop();
        do {
          context[40] = context[38];
          context[41] = context[39];
          context[26] = 0;
          context[27] = 0;
          context[28] = refalrts::brackets_left( context[26], context[27], context[40], context[41] );
          if( ! context[28] )
            continue;
          refalrts::bracket_pointers(context[28], context[29]);
          if( ! refalrts::repeated_stvar_left( context[30], context[22], context[26], context[27] ) )
            continue;
          if( ! refalrts::repeated_evar_right( context[31], context[32], context[18], context[19], context[26], context[27] ) )
            continue;
          // closed e.Opts_E#1 as range 2
          if( ! refalrts::svar_left( context[33], context[26], context[27] ) )
            continue;
          if( ! refalrts::empty_seq( context[26], context[27] ) )
            continue;

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/28 s.Tag#1/30 s.Num2#1/33 e.Value#1/31 )/29 {REMOVED TILE}  {REMOVED TILE} 
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & GetOpt_CheckRepeated/4 AsIs: (/7 AsIs: e.CheckedTags_B#1/13 AsIs: s.Tag#1/15 AsIs: e.CheckedTags_E#1/36 AsIs: )/8 AsIs: (/11 AsIs: e.Errors#1/9 AsIs: )/12 AsIs: e.Opts_B#1/16 AsIs: (/20 AsIs: s.Tag#1/22 AsIs: s.Num1#1/23 AsIs: e.Value#1/18 AsIs: )/21 } Tile{ AsIs: e.Opts_M#1/24 } Tile{ AsIs: e.Opts_E#1/40 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( context[1] );
          refalrts::push_stack( context[0] );
          refalrts::link_brackets( context[20], context[21] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[40], context[41] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          refalrts::use( res );
          refalrts::splice_to_freelist_open( context[21], res );
          return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
        } while ( refalrts::open_evar_advance( context[24], context[25], context[38], context[39] ) );
      } while ( refalrts::open_evar_advance( context[16], context[17], context[34], context[35] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[5], context[6] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetOpt_CheckRepeated/4 (/7 e.CheckedTags_B#1/13 s.Tag#1/15 e.CheckedTags_E#1/34 )/8 (/11 e.Errors#1/9 )/12 e.Opts_B#1/16 (/20 s.Tag#1/22 s.Num1#1/23 e.Value1#1/18 )/21 e.Opts_M#1/24 (/28 s.Tag#1/30 s.Num2#1/31 e.Value2#1/26 )/29 e.Opts_E#1/38 >/1
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
    // closed e.Errors#1 as range 9
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[2];
      context[33] = context[3];
      context[34] = context[5];
      context[35] = context[6];
      if( ! refalrts::svar_left( context[15], context[34], context[35] ) )
        continue;
      // closed e.CheckedTags_E#1 as range 5
      context[16] = 0;
      context[17] = 0;
      refalrts::start_e_loop();
      do {
        context[36] = context[32];
        context[37] = context[33];
        context[18] = 0;
        context[19] = 0;
        context[20] = refalrts::brackets_left( context[18], context[19], context[36], context[37] );
        if( ! context[20] )
          continue;
        refalrts::bracket_pointers(context[20], context[21]);
        if( ! refalrts::repeated_stvar_left( context[22], context[15], context[18], context[19] ) )
          continue;
        if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
          continue;
        // closed e.Value1#1 as range 18
        context[24] = 0;
        context[25] = 0;
        refalrts::start_e_loop();
        do {
          context[38] = context[36];
          context[39] = context[37];
          context[26] = 0;
          context[27] = 0;
          context[28] = refalrts::brackets_left( context[26], context[27], context[38], context[39] );
          if( ! context[28] )
            continue;
          refalrts::bracket_pointers(context[28], context[29]);
          if( ! refalrts::repeated_stvar_left( context[30], context[22], context[26], context[27] ) )
            continue;
          // closed e.Opts_E#1 as range 2
          if( ! refalrts::svar_left( context[31], context[26], context[27] ) )
            continue;
          // closed e.Value2#1 as range 26

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Value2#1/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & GetOpt_CheckRepeated/4 AsIs: (/7 AsIs: e.CheckedTags_B#1/13 AsIs: s.Tag#1/15 AsIs: e.CheckedTags_E#1/34 AsIs: )/8 AsIs: (/11 AsIs: e.Errors#1/9 HalfReuse: (/12 } Tile{ AsIs: s.Num2#1/31 } Tile{ HalfReuse: # RepeatOption/28 AsIs: s.Tag#1/30 } Tile{ AsIs: )/29 } )/40 Tile{ AsIs: e.Opts_B#1/16 } Tile{ AsIs: (/20 AsIs: s.Tag#1/22 AsIs: s.Num1#1/23 AsIs: e.Value1#1/18 AsIs: )/21 } Tile{ AsIs: e.Opts_M#1/24 } Tile{ AsIs: e.Opts_E#1/38 } Tile{ AsIs: >/1 ]] }
          if( ! refalrts::alloc_close_bracket( context[40] ) )
            return refalrts::cNoMemory;
          refalrts::reinit_open_bracket( context[12] );
          refalrts::reinit_ident( context[28], & ident_RepeatOption<int>::name );
          refalrts::push_stack( context[1] );
          refalrts::push_stack( context[0] );
          refalrts::link_brackets( context[20], context[21] );
          refalrts::link_brackets( context[11], context[40] );
          refalrts::link_brackets( context[12], context[29] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[20], context[21] );
          res = refalrts::splice_evar( res, context[16], context[17] );
          res = refalrts::splice_evar( res, context[40], context[40] );
          res = refalrts::splice_evar( res, context[29], context[29] );
          res = refalrts::splice_evar( res, context[28], context[30] );
          res = refalrts::splice_evar( res, context[31], context[31] );
          refalrts::use( res );
          refalrts::splice_to_freelist_open( context[12], res );
          return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
        } while ( refalrts::open_evar_advance( context[24], context[25], context[36], context[37] ) );
      } while ( refalrts::open_evar_advance( context[16], context[17], context[32], context[33] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[5], context[6] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GetOpt_CheckRepeated/4 (/7 e.CheckedTags#1/5 )/8 (/11 e.Errors#1/9 )/12 e.Options#1/2 >/1
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
  // closed e.CheckedTags#1 as range 5
  // closed e.Errors#1 as range 9
  // closed e.Options#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & GetOpt_CheckRepeated/4 (/7 e.CheckedTags#1/5 )/8 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.Errors#1/9 AsIs: )/12 } Tile{ AsIs: e.Options#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
