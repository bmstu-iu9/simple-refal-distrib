// This file automatically generated from 'GetOpt.ref'
// Don't edit! Edit 'GetOpt.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_4145616865_25143199

enum efunc {
  efunc_FoldErrors = 0,
  efunc_MarkupArguments = 1,
  efunc_ResolveOpts = 2,
  efunc_Add = 3,
  efunc_MarkupAllFiles = 4,
  efunc_Inc = 5,
  efunc_ResolveOptsm_LongParam = 6,
  efunc_ResolveOptsm_Long = 7,
  efunc_ResolveOptsm_Short = 8,
  efunc_DoFoldErrors = 9,
};


enum ident {
  ident_Longm_Param = 0,
  ident_Long = 1,
  ident_Short = 2,
  ident_Word = 3,
  ident_Error = 4,
  ident_UnknownLongOption = 5,
  ident_UnknownShortOption = 6,
  ident_FILE = 7,
  ident_Required = 8,
  ident_Optional = 9,
  ident_None = 10,
  ident_UnexpectedLongOptionParam = 11,
  ident_NoRequiredParam = 12,
  ident_NoParam = 13,
};


static refalrts::FnResult func_GetOpt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & GetOpt/4 (/7 e.Description#1/5 )/8 e.Arguments#1/2 >/1
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
  // closed e.Description#1 as range 5
  // closed e.Arguments#1 as range 2
  //DEBUG: e.Description#1: 5
  //DEBUG: e.Arguments#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & FoldErrors/10 Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } </11 & MarkupArguments/12 1/13 Tile{ AsIs: e.Arguments#1/2 } >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_FoldErrors]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_MarkupArguments]);
  refalrts::alloc_number(vm, context[13], 1UL);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetOpt("GetOpt", 0U, 0U, func_GetOpt);


static refalrts::FnResult func_Inc(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Inc/4 s.Num#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Num#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 HalfReuse: 1/1 } >/6 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_number(context[1], 1UL);
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Inc("Inc", 4145616865U, 25143199U, func_Inc);


static refalrts::FnResult func_MarkupArguments(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & MarkupArguments/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MarkupArguments/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MarkupArguments/4 s.new#3/5 (/10 e.new#4/8 )/11 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    // closed e.new#4 as range 8
    // closed e.new#5 as range 6
    do {
      // </0 & MarkupArguments/4 s.new#6/5 (/10 '-'/14 s.new#7/15 e.new#8/12 )/11 e.new#9/6 >/1
      context[12] = context[8];
      context[13] = context[9];
      context[14] = refalrts::char_left( '-', context[12], context[13] );
      if( ! context[14] )
        continue;
      // closed e.new#9 as range 6
      if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
        continue;
      // closed e.new#8 as range 12
      do {
        // </0 & MarkupArguments/4 s.new#10/5 (/10 '-'/14 '-'/15 e.new#11/12 )/11 e.new#12/6 >/1
        if( ! refalrts::char_term( '-', context[15] ) )
          continue;
        // closed e.new#11 as range 12
        // closed e.new#12 as range 6
        do {
          // </0 & MarkupArguments/4 s.Num#1/5 (/10 '-'/14 '-'/15 )/11 e.Tail#1/6 >/1
          if( ! refalrts::empty_seq( context[12], context[13] ) )
            continue;
          // closed e.Tail#1 as range 6
          //DEBUG: s.Num#1: 5
          //DEBUG: e.Tail#1: 6

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Num#1/5 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & MarkupAllFiles/4 } Tile{ HalfReuse: </10 HalfReuse: & Inc/14 HalfReuse: s.Num1 #5/15 HalfReuse: >/11 AsIs: e.Tail#1/6 AsIs: >/1 ]] }
          refalrts::update_name(context[4], functions[efunc_MarkupAllFiles]);
          refalrts::reinit_open_call(context[10]);
          refalrts::reinit_name(context[14], functions[efunc_Inc]);
          refalrts::reinit_svar( context[15], context[5] );
          refalrts::reinit_close_call(context[11]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & MarkupArguments/4 s.Num#1/5 (/10 '-'/14 '-'/15 e.Arg#1/18 '='/22 e.Param#1/20 )/11 e.Tail#1/6 >/1
          context[16] = context[12];
          context[17] = context[13];
          // closed e.Tail#1 as range 6
          context[18] = 0;
          context[19] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[20] = context[16];
            context[21] = context[17];
            context[22] = refalrts::char_left( '=', context[20], context[21] );
            if( ! context[22] )
              continue;
            // closed e.Param#1 as range 20
            //DEBUG: s.Num#1: 5
            //DEBUG: e.Tail#1: 6
            //DEBUG: e.Arg#1: 18
            //DEBUG: e.Param#1: 20

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/23 Tile{ HalfReuse: # Long-Param/10 HalfReuse: s.Num1 #5/14 HalfReuse: (/15 AsIs: e.Arg#1/18 HalfReuse: )/22 AsIs: e.Param#1/20 AsIs: )/11 } </24 & MarkupArguments/25 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/26 Tile{ AsIs: e.Tail#1/6 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[23]);
            refalrts::alloc_open_call(vm, context[24]);
            refalrts::alloc_name(vm, context[25], functions[efunc_MarkupArguments]);
            refalrts::alloc_close_call(vm, context[26]);
            refalrts::reinit_ident(context[10], identifiers[ident_Longm_Param]);
            refalrts::reinit_svar( context[14], context[5] );
            refalrts::reinit_open_bracket(context[15]);
            refalrts::reinit_close_bracket(context[22]);
            refalrts::update_name(context[4], functions[efunc_Inc]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[24] );
            refalrts::push_stack( vm, context[26] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[23], context[11] );
            refalrts::link_brackets( context[15], context[22] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[6], context[7] );
            res = refalrts::splice_evar( res, context[26], context[26] );
            res = refalrts::splice_evar( res, context[0], context[5] );
            res = refalrts::splice_evar( res, context[24], context[25] );
            res = refalrts::splice_evar( res, context[10], context[11] );
            res = refalrts::splice_evar( res, context[23], context[23] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[18], context[19], context[16], context[17] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & MarkupArguments/4 s.Num#1/5 (/10 '-'/14 '-'/15 e.Arg#1/12 )/11 e.Tail#1/6 >/1
        // closed e.Arg#1 as range 12
        // closed e.Tail#1 as range 6
        //DEBUG: s.Num#1: 5
        //DEBUG: e.Arg#1: 12
        //DEBUG: e.Tail#1: 6

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/10 HalfReuse: # Long/14 HalfReuse: s.Num1 #5/15 AsIs: e.Arg#1/12 AsIs: )/11 } </16 & MarkupArguments/17 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/18 Tile{ AsIs: e.Tail#1/6 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[17], functions[efunc_MarkupArguments]);
        refalrts::alloc_close_call(vm, context[18]);
        refalrts::reinit_ident(context[14], identifiers[ident_Long]);
        refalrts::reinit_svar( context[15], context[5] );
        refalrts::update_name(context[4], functions[efunc_Inc]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[10], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[6], context[7] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & MarkupArguments/4 s.Num#1/5 (/10 '-'/14 s.Init#1/15 e.Arg#1/12 )/11 e.Tail#1/6 >/1
      // closed e.Arg#1 as range 12
      // closed e.Tail#1 as range 6
      //DEBUG: s.Num#1: 5
      //DEBUG: s.Init#1: 15
      //DEBUG: e.Arg#1: 12
      //DEBUG: e.Tail#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/16 Tile{ HalfReuse: # Short/10 HalfReuse: s.Num1 #5/14 AsIs: s.Init#1/15 AsIs: e.Arg#1/12 AsIs: )/11 } </17 & MarkupArguments/18 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/19 Tile{ AsIs: e.Tail#1/6 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[16]);
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_MarkupArguments]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::reinit_ident(context[10], identifiers[ident_Short]);
      refalrts::reinit_svar( context[14], context[5] );
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MarkupArguments/4 s.Num#1/5 (/10 e.Arg#1/8 )/11 e.Tail#1/6 >/1
    // closed e.Arg#1 as range 8
    // closed e.Tail#1 as range 6
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Arg#1: 8
    //DEBUG: e.Tail#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Word/4 AsIs: s.Num#1/5 } Tile{ AsIs: e.Arg#1/8 } Tile{ HalfReuse: )/10 } </12 & MarkupArguments/13 </14 & Inc/15 s.Num#1/5/16 Tile{ HalfReuse: >/11 AsIs: e.Tail#1/6 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_MarkupArguments]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Inc]);
    refalrts::copy_stvar(vm, context[16], context[5]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Word]);
    refalrts::reinit_close_bracket(context[10]);
    refalrts::reinit_close_call(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MarkupArguments/4 s.Num#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Num#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MarkupArguments/4 s.Num#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MarkupArguments("MarkupArguments", 4145616865U, 25143199U, func_MarkupArguments);


static refalrts::FnResult func_MarkupAllFiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & MarkupAllFiles/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MarkupAllFiles/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MarkupAllFiles/4 s.Num#1/5 (/10 e.Arg#1/8 )/11 e.Tail#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    // closed e.Arg#1 as range 8
    // closed e.Tail#1 as range 6
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Arg#1: 8
    //DEBUG: e.Tail#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Word/4 AsIs: s.Num#1/5 } Tile{ AsIs: e.Arg#1/8 } Tile{ HalfReuse: )/10 } </12 & MarkupAllFiles/13 </14 & Inc/15 s.Num#1/5/16 Tile{ HalfReuse: >/11 AsIs: e.Tail#1/6 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_MarkupAllFiles]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Inc]);
    refalrts::copy_stvar(vm, context[16], context[5]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Word]);
    refalrts::reinit_close_bracket(context[10]);
    refalrts::reinit_close_call(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MarkupAllFiles/4 s.Num#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Num#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MarkupAllFiles/4 s.Num#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MarkupAllFiles("MarkupAllFiles", 4145616865U, 25143199U, func_MarkupAllFiles);


static refalrts::FnResult func_ResolveOpts(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & ResolveOpts/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveOpts/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ResolveOpts/4 (/7 e.new#3/5 )/8 (/13 s.new#4/15 s.new#5/16 e.new#6/11 )/14 e.new#7/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.new#3 as range 5
    // closed e.new#7 as range 9
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
      continue;
    // closed e.new#6 as range 11
    do {
      // </0 & ResolveOpts/4 (/7 e.new#8/5 )/8 (/13 # Long-Param/15 s.new#9/16 (/21 e.new#10/19 )/22 e.new#11/17 )/14 e.new#12/9 >/1
      context[17] = context[11];
      context[18] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Longm_Param], context[15] ) )
        continue;
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.new#8 as range 5
      // closed e.new#10 as range 19
      // closed e.new#11 as range 17
      // closed e.new#12 as range 9
      do {
        // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/25 (/31 s.Tag#1/33 s.HasArg#1/34 e.Opts-B#1/35 (/41 e.Long#1/43 )/42 e.Opts-E#1/37 )/32 e.Descrs-E#1/27 )/8 (/13 # Long-Param/15 s.Num#1/16 (/21 e.Long#1/19 )/22 e.Param#1/17 )/14 e.ArgsTail#1/9 >/1
        context[23] = context[5];
        context[24] = context[6];
        // closed e.Long#1 as range 19
        // closed e.Param#1 as range 17
        // closed e.ArgsTail#1 as range 9
        context[25] = 0;
        context[26] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[27] = context[23];
          context[28] = context[24];
          context[29] = 0;
          context[30] = 0;
          context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
          if( ! context[31] )
            continue;
          refalrts::bracket_pointers(context[31], context[32]);
          // closed e.Descrs-E#1 as range 27
          if( ! refalrts::svar_left( context[33], context[29], context[30] ) )
            continue;
          if( ! refalrts::svar_left( context[34], context[29], context[30] ) )
            continue;
          context[35] = 0;
          context[36] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[37] = context[29];
            context[38] = context[30];
            context[39] = 0;
            context[40] = 0;
            context[41] = refalrts::brackets_left( context[39], context[40], context[37], context[38] );
            if( ! context[41] )
              continue;
            refalrts::bracket_pointers(context[41], context[42]);
            if( ! refalrts::repeated_evar_left( vm, context[43], context[44], context[19], context[20], context[39], context[40] ) )
              continue;
            if( ! refalrts::empty_seq( context[39], context[40] ) )
              continue;
            // closed e.Opts-E#1 as range 37
            //DEBUG: s.Num#1: 16
            //DEBUG: e.Long#1: 19
            //DEBUG: e.Param#1: 17
            //DEBUG: e.ArgsTail#1: 9
            //DEBUG: e.Descrs-B#1: 25
            //DEBUG: e.Descrs-E#1: 27
            //DEBUG: s.Tag#1: 33
            //DEBUG: s.HasArg#1: 34
            //DEBUG: e.Opts-B#1: 35
            //DEBUG: e.Opts-E#1: 37

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.Num#1/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-LongParam/4 AsIs: (/7 AsIs: e.Descrs-B#1/25 AsIs: (/31 AsIs: s.Tag#1/33 AsIs: s.HasArg#1/34 AsIs: e.Opts-B#1/35 AsIs: (/41 AsIs: e.Long#1/43 AsIs: )/42 AsIs: e.Opts-E#1/37 AsIs: )/32 AsIs: e.Descrs-E#1/27 AsIs: )/8 HalfReuse: s.Num1 #16/13 HalfReuse: s.Tag1 #33/15 } s.HasArg#1/34/45 Tile{ AsIs: (/21 } Tile{ AsIs: e.Long#1/19 } )/46 Tile{ HalfReuse: (/22 AsIs: e.Param#1/17 AsIs: )/14 AsIs: e.ArgsTail#1/9 AsIs: >/1 ]] }
            refalrts::copy_stvar(vm, context[45], context[34]);
            refalrts::alloc_close_bracket(vm, context[46]);
            refalrts::update_name(context[4], functions[efunc_ResolveOptsm_LongParam]);
            refalrts::reinit_svar( context[13], context[16] );
            refalrts::reinit_svar( context[15], context[33] );
            refalrts::reinit_open_bracket(context[22]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[22], context[14] );
            refalrts::link_brackets( context[21], context[46] );
            refalrts::link_brackets( context[7], context[8] );
            refalrts::link_brackets( context[31], context[32] );
            refalrts::link_brackets( context[41], context[42] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[22];
            res = refalrts::splice_evar( res, context[46], context[46] );
            res = refalrts::splice_evar( res, context[19], context[20] );
            res = refalrts::splice_evar( res, context[21], context[21] );
            res = refalrts::splice_evar( res, context[45], context[45] );
            refalrts::splice_to_freelist_open( vm, context[15], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[35], context[36], context[29], context[30] ) );
        } while ( refalrts::open_evar_advance( context[25], context[26], context[23], context[24] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/13 # Long-Param/15 s.Num#1/16 (/21 e.Long#1/19 )/22 e.Param#1/17 )/14 e.ArgsTail#1/9 >/1
      // closed e.Description#1 as range 5
      // closed e.Long#1 as range 19
      // closed e.Param#1 as range 17
      // closed e.ArgsTail#1 as range 9
      //DEBUG: s.Num#1: 16
      //DEBUG: e.Description#1: 5
      //DEBUG: e.Long#1: 19
      //DEBUG: e.Param#1: 17
      //DEBUG: e.ArgsTail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Param#1/17 )/14 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 Reuse: # Error/15 AsIs: s.Num#1/16 HalfReuse: # UnknownLongOption/21 AsIs: e.Long#1/19 AsIs: )/22 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::update_ident(context[15], identifiers[ident_Error]);
      refalrts::reinit_ident(context[21], identifiers[ident_UnknownLongOption]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[13], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[13], context[22] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ResolveOpts/4 (/7 e.new#8/5 )/8 (/13 # Long/15 s.new#9/16 e.new#10/11 )/14 e.new#11/9 >/1
      if( ! refalrts::ident_term( identifiers[ident_Long], context[15] ) )
        continue;
      // closed e.new#8 as range 5
      // closed e.new#10 as range 11
      // closed e.new#11 as range 9
      do {
        // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/19 (/25 s.Tag#1/27 s.HasArg#1/28 e.Opts-B#1/29 (/35 e.Long#1/37 )/36 e.Opts-E#1/31 )/26 e.Descrs-E#1/21 )/8 (/13 # Long/15 s.Num#1/16 e.Long#1/11 )/14 e.ArgsTail#1/9 >/1
        context[17] = context[5];
        context[18] = context[6];
        // closed e.Long#1 as range 11
        // closed e.ArgsTail#1 as range 9
        context[19] = 0;
        context[20] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[21] = context[17];
          context[22] = context[18];
          context[23] = 0;
          context[24] = 0;
          context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
          if( ! context[25] )
            continue;
          refalrts::bracket_pointers(context[25], context[26]);
          // closed e.Descrs-E#1 as range 21
          if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
            continue;
          if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
            continue;
          context[29] = 0;
          context[30] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[31] = context[23];
            context[32] = context[24];
            context[33] = 0;
            context[34] = 0;
            context[35] = refalrts::brackets_left( context[33], context[34], context[31], context[32] );
            if( ! context[35] )
              continue;
            refalrts::bracket_pointers(context[35], context[36]);
            if( ! refalrts::repeated_evar_left( vm, context[37], context[38], context[11], context[12], context[33], context[34] ) )
              continue;
            if( ! refalrts::empty_seq( context[33], context[34] ) )
              continue;
            // closed e.Opts-E#1 as range 31
            //DEBUG: s.Num#1: 16
            //DEBUG: e.Long#1: 11
            //DEBUG: e.ArgsTail#1: 9
            //DEBUG: e.Descrs-B#1: 19
            //DEBUG: e.Descrs-E#1: 21
            //DEBUG: s.Tag#1: 27
            //DEBUG: s.HasArg#1: 28
            //DEBUG: e.Opts-B#1: 29
            //DEBUG: e.Opts-E#1: 31

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.Num#1/16 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-Long/4 AsIs: (/7 AsIs: e.Descrs-B#1/19 AsIs: (/25 AsIs: s.Tag#1/27 AsIs: s.HasArg#1/28 AsIs: e.Opts-B#1/29 AsIs: (/35 AsIs: e.Long#1/37 AsIs: )/36 AsIs: e.Opts-E#1/31 AsIs: )/26 AsIs: e.Descrs-E#1/21 AsIs: )/8 HalfReuse: s.Num1 #16/13 HalfReuse: s.Tag1 #27/15 } s.HasArg#1/28/39 (/40 Tile{ AsIs: e.Long#1/11 } Tile{ AsIs: )/14 AsIs: e.ArgsTail#1/9 AsIs: >/1 ]] }
            refalrts::copy_stvar(vm, context[39], context[28]);
            refalrts::alloc_open_bracket(vm, context[40]);
            refalrts::update_name(context[4], functions[efunc_ResolveOptsm_Long]);
            refalrts::reinit_svar( context[13], context[16] );
            refalrts::reinit_svar( context[15], context[27] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[40], context[14] );
            refalrts::link_brackets( context[7], context[8] );
            refalrts::link_brackets( context[25], context[26] );
            refalrts::link_brackets( context[35], context[36] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[14];
            res = refalrts::splice_evar( res, context[11], context[12] );
            res = refalrts::splice_evar( res, context[39], context[40] );
            refalrts::splice_to_freelist_open( vm, context[15], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[29], context[30], context[23], context[24] ) );
        } while ( refalrts::open_evar_advance( context[19], context[20], context[17], context[18] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/13 # Long/15 s.Num#1/16 e.Long#1/11 )/14 e.ArgsTail#1/9 >/1
      // closed e.Description#1 as range 5
      // closed e.Long#1 as range 11
      // closed e.ArgsTail#1 as range 9
      //DEBUG: s.Num#1: 16
      //DEBUG: e.Description#1: 5
      //DEBUG: e.Long#1: 11
      //DEBUG: e.ArgsTail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 Reuse: # Error/15 AsIs: s.Num#1/16 } # UnknownLongOption/17 Tile{ AsIs: e.Long#1/11 } Tile{ AsIs: )/14 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[17], identifiers[ident_UnknownLongOption]);
      refalrts::update_ident(context[15], identifiers[ident_Error]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[13], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ResolveOpts/4 (/7 e.new#8/5 )/8 (/13 # Short/15 s.new#9/16 s.new#10/19 e.new#11/17 )/14 e.new#12/9 >/1
      context[17] = context[11];
      context[18] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Short], context[15] ) )
        continue;
      // closed e.new#8 as range 5
      // closed e.new#12 as range 9
      if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
        continue;
      // closed e.new#11 as range 17
      do {
        // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/22 (/28 s.Tag#1/30 s.HasArg#1/31 e.Opts-B#1/32 s.Short#1/36 e.Opts-E#1/34 )/29 e.Descrs-E#1/24 )/8 (/13 # Short/15 s.Num#1/16 s.Short#1/19 e.OptTail#1/17 )/14 e.ArgsTail#1/9 >/1
        context[20] = context[5];
        context[21] = context[6];
        // closed e.OptTail#1 as range 17
        // closed e.ArgsTail#1 as range 9
        context[22] = 0;
        context[23] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[24] = context[20];
          context[25] = context[21];
          context[26] = 0;
          context[27] = 0;
          context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
          if( ! context[28] )
            continue;
          refalrts::bracket_pointers(context[28], context[29]);
          // closed e.Descrs-E#1 as range 24
          if( ! refalrts::svar_left( context[30], context[26], context[27] ) )
            continue;
          if( ! refalrts::svar_left( context[31], context[26], context[27] ) )
            continue;
          context[32] = 0;
          context[33] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[34] = context[26];
            context[35] = context[27];
            if( ! refalrts::repeated_stvar_left( vm, context[36], context[19], context[34], context[35] ) )
              continue;
            // closed e.Opts-E#1 as range 34
            //DEBUG: s.Num#1: 16
            //DEBUG: s.Short#1: 19
            //DEBUG: e.OptTail#1: 17
            //DEBUG: e.ArgsTail#1: 9
            //DEBUG: e.Descrs-B#1: 22
            //DEBUG: e.Descrs-E#1: 24
            //DEBUG: s.Tag#1: 30
            //DEBUG: s.HasArg#1: 31
            //DEBUG: e.Opts-B#1: 32
            //DEBUG: e.Opts-E#1: 34

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.Num#1/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-Short/4 AsIs: (/7 AsIs: e.Descrs-B#1/22 AsIs: (/28 AsIs: s.Tag#1/30 AsIs: s.HasArg#1/31 AsIs: e.Opts-B#1/32 AsIs: s.Short#1/36 AsIs: e.Opts-E#1/34 AsIs: )/29 AsIs: e.Descrs-E#1/24 AsIs: )/8 HalfReuse: s.Num1 #16/13 HalfReuse: s.Tag1 #30/15 } s.HasArg#1/31/37 Tile{ AsIs: s.Short#1/19 } (/38 Tile{ AsIs: e.OptTail#1/17 } Tile{ AsIs: )/14 AsIs: e.ArgsTail#1/9 AsIs: >/1 ]] }
            refalrts::copy_stvar(vm, context[37], context[31]);
            refalrts::alloc_open_bracket(vm, context[38]);
            refalrts::update_name(context[4], functions[efunc_ResolveOptsm_Short]);
            refalrts::reinit_svar( context[13], context[16] );
            refalrts::reinit_svar( context[15], context[30] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[38], context[14] );
            refalrts::link_brackets( context[7], context[8] );
            refalrts::link_brackets( context[28], context[29] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[14];
            res = refalrts::splice_evar( res, context[17], context[18] );
            res = refalrts::splice_evar( res, context[38], context[38] );
            res = refalrts::splice_evar( res, context[19], context[19] );
            res = refalrts::splice_evar( res, context[37], context[37] );
            refalrts::splice_to_freelist_open( vm, context[15], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[32], context[33], context[26], context[27] ) );
        } while ( refalrts::open_evar_advance( context[22], context[23], context[20], context[21] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/13 # Short/15 s.Num#1/16 s.Short#1/19 )/14 e.ArgsTail#1/9 >/1
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;
        // closed e.Description#1 as range 5
        // closed e.ArgsTail#1 as range 9
        //DEBUG: s.Num#1: 16
        //DEBUG: s.Short#1: 19
        //DEBUG: e.Description#1: 5
        //DEBUG: e.ArgsTail#1: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/13 Reuse: # Error/15 AsIs: s.Num#1/16 } # UnknownShortOption/20 Tile{ AsIs: s.Short#1/19 AsIs: )/14 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/9 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[20], identifiers[ident_UnknownShortOption]);
        refalrts::update_ident(context[15], identifiers[ident_Error]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[19], context[14] );
        res = refalrts::splice_evar( res, context[20], context[20] );
        res = refalrts::splice_evar( res, context[13], context[16] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/13 # Short/15 s.Num#1/16 s.Short#1/19 e.OptTail#1/17 )/14 e.ArgsTail#1/9 >/1
      // closed e.Description#1 as range 5
      // closed e.OptTail#1 as range 17
      // closed e.ArgsTail#1 as range 9
      //DEBUG: s.Num#1: 16
      //DEBUG: s.Short#1: 19
      //DEBUG: e.Description#1: 5
      //DEBUG: e.OptTail#1: 17
      //DEBUG: e.ArgsTail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/20 # Error/21 s.Num#1/16/22 # UnknownShortOption/23 Tile{ AsIs: s.Short#1/19 } )/24 Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 AsIs: (/13 AsIs: # Short/15 AsIs: s.Num#1/16 } Tile{ AsIs: e.OptTail#1/17 } Tile{ AsIs: )/14 AsIs: e.ArgsTail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[20]);
      refalrts::alloc_ident(vm, context[21], identifiers[ident_Error]);
      refalrts::copy_stvar(vm, context[22], context[16]);
      refalrts::alloc_ident(vm, context[23], identifiers[ident_UnknownShortOption]);
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[20], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[0], context[16] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[20], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/13 # Word/15 s.Num#1/16 e.File#1/11 )/14 e.ArgsTail#1/9 >/1
    if( ! refalrts::ident_term( identifiers[ident_Word], context[15] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.File#1 as range 11
    // closed e.ArgsTail#1 as range 9
    //DEBUG: s.Num#1: 16
    //DEBUG: e.Description#1: 5
    //DEBUG: e.File#1: 11
    //DEBUG: e.ArgsTail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/13 Reuse: # FILE/15 AsIs: s.Num#1/16 AsIs: e.File#1/11 AsIs: )/14 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_ident(context[15], identifiers[ident_FILE]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 5
  //DEBUG: e.Description#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveOpts("ResolveOpts", 4145616865U, 25143199U, func_ResolveOpts);


static refalrts::FnResult func_ResolveOptsm_LongParam(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & ResolveOpts-LongParam/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveOpts-LongParam/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 s.new#4/11 (/14 e.new#5/12 )/15 (/18 e.new#6/16 )/19 e.new#7/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  // closed e.new#5 as range 12
  // closed e.new#6 as range 16
  // closed e.new#7 as range 2
  do {
    // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Required], context[11] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.Param#1 as range 16
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: e.Description#1: 5
    //DEBUG: e.Long#1: 12
    //DEBUG: e.Param#1: 16
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Required/11 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ HalfReuse: s.Tag1 #10/15 HalfReuse: s.Num1 #9/18 AsIs: e.Param#1/16 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[15], context[10] );
    refalrts::reinit_svar( context[18], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Optional], context[11] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.Param#1 as range 16
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: e.Description#1: 5
    //DEBUG: e.Long#1: 12
    //DEBUG: e.Param#1: 16
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Optional/11 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ HalfReuse: s.Tag1 #10/15 HalfReuse: s.Num1 #9/18 AsIs: e.Param#1/16 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[15], context[10] );
    refalrts::reinit_svar( context[18], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_None], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 5
  // closed e.Long#1 as range 12
  // closed e.Param#1 as range 16
  // closed e.ArgsTail#1 as range 2
  //DEBUG: s.Num#1: 9
  //DEBUG: s.Tag#1: 10
  //DEBUG: e.Description#1: 5
  //DEBUG: e.Long#1: 12
  //DEBUG: e.Param#1: 16
  //DEBUG: e.ArgsTail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/20 # Error/21 Tile{ AsIs: s.Num#1/9 } # UnexpectedLongOptionParam/22 Tile{ AsIs: (/18 } Tile{ HalfReuse: '-'/11 HalfReuse: '-'/14 AsIs: e.Long#1/12 AsIs: )/15 } Tile{ AsIs: e.Param#1/16 } Tile{ AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_Error]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_UnexpectedLongOptionParam]);
  refalrts::reinit_char(context[11], '-');
  refalrts::reinit_char(context[14], '-');
  refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[20], context[19] );
  refalrts::link_brackets( context[18], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveOptsm_LongParam("ResolveOpts-LongParam", 4145616865U, 25143199U, func_ResolveOptsm_LongParam);


static refalrts::FnResult func_ResolveOptsm_Long(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & ResolveOpts-Long/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveOpts-Long/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 s.new#4/11 (/14 e.new#5/12 )/15 e.new#6/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.new#5 as range 12
  // closed e.new#6 as range 2
  do {
    // </0 & ResolveOpts-Long/4 (/7 e.new#7/5 )/8 s.new#8/9 s.new#9/10 # Required/11 (/14 e.new#10/12 )/15 e.new#11/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Required], context[11] ) )
      continue;
    // closed e.new#7 as range 5
    // closed e.new#10 as range 12
    // closed e.new#11 as range 2
    do {
      // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 (/20 # Word/22 s.WordNum#1/23 e.Param#1/18 )/21 e.ArgsTail#1/16 >/1
      context[16] = context[2];
      context[17] = context[3];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = refalrts::ident_left( identifiers[ident_Word], context[18], context[19] );
      if( ! context[22] )
        continue;
      // closed e.Description#1 as range 5
      // closed e.Long#1 as range 12
      // closed e.ArgsTail#1 as range 16
      if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
        continue;
      // closed e.Param#1 as range 18
      //DEBUG: s.Num#1: 9
      //DEBUG: s.Tag#1: 10
      //DEBUG: e.Description#1: 5
      //DEBUG: e.Long#1: 12
      //DEBUG: e.ArgsTail#1: 16
      //DEBUG: s.WordNum#1: 23
      //DEBUG: e.Param#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} e.Long#1/12 {REMOVED TILE} (/20 # Word/22 s.WordNum#1/23 {REMOVED TILE} )/21 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: e.Param#1/18 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_svar( context[11], context[9] );
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: e.Description#1: 5
    //DEBUG: e.Long#1: 12
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 # Error/17 Tile{ AsIs: s.Num#1/9 } # NoRequiredParam/18 Tile{ HalfReuse: '-'/11 HalfReuse: '-'/14 AsIs: e.Long#1/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_ident(vm, context[17], identifiers[ident_Error]);
    refalrts::alloc_ident(vm, context[18], identifiers[ident_NoRequiredParam]);
    refalrts::reinit_char(context[11], '-');
    refalrts::reinit_char(context[14], '-');
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ResolveOpts-Long/4 (/7 e.new#7/5 )/8 s.new#8/9 s.new#9/10 # Optional/11 (/14 e.new#10/12 )/15 e.new#11/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Optional], context[11] ) )
      continue;
    // closed e.new#7 as range 5
    // closed e.new#10 as range 12
    // closed e.new#11 as range 2
    do {
      // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 (/20 # Word/22 s.WordNum#1/23 e.Param#1/18 )/21 e.ArgsTail#1/16 >/1
      context[16] = context[2];
      context[17] = context[3];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = refalrts::ident_left( identifiers[ident_Word], context[18], context[19] );
      if( ! context[22] )
        continue;
      // closed e.Description#1 as range 5
      // closed e.Long#1 as range 12
      // closed e.ArgsTail#1 as range 16
      if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
        continue;
      // closed e.Param#1 as range 18
      //DEBUG: s.Num#1: 9
      //DEBUG: s.Tag#1: 10
      //DEBUG: e.Description#1: 5
      //DEBUG: e.Long#1: 12
      //DEBUG: e.ArgsTail#1: 16
      //DEBUG: s.WordNum#1: 23
      //DEBUG: e.Param#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} e.Long#1/12 {REMOVED TILE} (/20 # Word/22 s.WordNum#1/23 {REMOVED TILE} )/21 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: e.Param#1/18 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_svar( context[11], context[9] );
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: e.Description#1: 5
    //DEBUG: e.Long#1: 12
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 HalfReuse: # NoParam/14 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::reinit_ident(context[14], identifiers[ident_NoParam]);
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_None], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 5
  // closed e.Long#1 as range 12
  // closed e.ArgsTail#1 as range 2
  //DEBUG: s.Num#1: 9
  //DEBUG: s.Tag#1: 10
  //DEBUG: e.Description#1: 5
  //DEBUG: e.Long#1: 12
  //DEBUG: e.ArgsTail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/15 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 HalfReuse: )/14 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_open_bracket(context[15]);
  refalrts::reinit_svar( context[11], context[9] );
  refalrts::reinit_close_bracket(context[14]);
  refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveOptsm_Long("ResolveOpts-Long", 4145616865U, 25143199U, func_ResolveOptsm_Long);


static refalrts::FnResult func_ResolveOptsm_Short(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & ResolveOpts-Short/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveOpts-Short/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 s.new#4/11 s.new#5/12 (/15 e.new#6/13 )/16 e.new#7/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#6 as range 13
  // closed e.new#7 as range 2
  do {
    // </0 & ResolveOpts-Short/4 (/7 e.new#8/5 )/8 s.new#9/9 s.new#10/10 # Required/11 s.new#11/12 (/15 e.new#12/13 )/16 e.new#13/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Required], context[11] ) )
      continue;
    // closed e.new#8 as range 5
    // closed e.new#12 as range 13
    // closed e.new#13 as range 2
    do {
      // </0 & ResolveOpts-Short/4 (/7 e.new#14/5 )/8 s.new#15/9 s.new#16/10 # Required/11 s.new#17/12 (/15 )/16 e.new#18/2 >/1
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.new#14 as range 5
      // closed e.new#18 as range 2
      do {
        // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 )/16 (/21 # Word/23 s.WordNum#1/24 e.Param#1/19 )/22 e.ArgsTail#1/17 >/1
        context[17] = context[2];
        context[18] = context[3];
        context[19] = 0;
        context[20] = 0;
        context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
        if( ! context[21] )
          continue;
        refalrts::bracket_pointers(context[21], context[22]);
        context[23] = refalrts::ident_left( identifiers[ident_Word], context[19], context[20] );
        if( ! context[23] )
          continue;
        // closed e.Description#1 as range 5
        // closed e.ArgsTail#1 as range 17
        if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
          continue;
        // closed e.Param#1 as range 19
        //DEBUG: s.Num#1: 9
        //DEBUG: s.Tag#1: 10
        //DEBUG: s.Short#1: 12
        //DEBUG: e.Description#1: 5
        //DEBUG: e.ArgsTail#1: 17
        //DEBUG: s.WordNum#1: 24
        //DEBUG: e.Param#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 {REMOVED TILE} # Word/23 s.WordNum#1/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/15 HalfReuse: s.Tag1 #10/16 HalfReuse: s.Num1 #9/21 } Tile{ AsIs: e.Param#1/19 } Tile{ AsIs: )/22 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/17 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_svar( context[16], context[10] );
        refalrts::reinit_svar( context[21], context[9] );
        refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[15], context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[15], context[21] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
      // closed e.Description#1 as range 5
      // closed e.ArgsTail#1 as range 2
      //DEBUG: s.Num#1: 9
      //DEBUG: s.Tag#1: 10
      //DEBUG: s.Short#1: 12
      //DEBUG: e.Description#1: 5
      //DEBUG: e.ArgsTail#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/17 # Error/18 Tile{ AsIs: s.Num#1/9 } Tile{ HalfReuse: # NoRequiredParam/16 } Tile{ HalfReuse: '-'/11 AsIs: s.Short#1/12 HalfReuse: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[17]);
      refalrts::alloc_ident(vm, context[18], identifiers[ident_Error]);
      refalrts::reinit_ident(context[16], identifiers[ident_NoRequiredParam]);
      refalrts::reinit_char(context[11], '-');
      refalrts::reinit_close_bracket(context[15]);
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[17], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[11], context[15] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 e.Param#1/13 )/16 e.ArgsTail#1/2 >/1
    // closed e.Description#1 as range 5
    // closed e.Param#1 as range 13
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: s.Short#1: 12
    //DEBUG: e.Description#1: 5
    //DEBUG: e.Param#1: 13
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 } Tile{ AsIs: s.Tag#1/10 } Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.Param#1/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[11]);
    refalrts::reinit_svar( context[15], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ResolveOpts-Short/4 (/7 e.new#8/5 )/8 s.new#9/9 s.new#10/10 # Optional/11 s.new#11/12 (/15 e.new#12/13 )/16 e.new#13/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Optional], context[11] ) )
      continue;
    // closed e.new#8 as range 5
    // closed e.new#12 as range 13
    // closed e.new#13 as range 2
    do {
      // </0 & ResolveOpts-Short/4 (/7 e.new#14/5 )/8 s.new#15/9 s.new#16/10 # Optional/11 s.new#17/12 (/15 )/16 e.new#18/2 >/1
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.new#14 as range 5
      // closed e.new#18 as range 2
      do {
        // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 )/16 (/21 # Word/23 s.WordNum#1/24 e.Param#1/19 )/22 e.ArgsTail#1/17 >/1
        context[17] = context[2];
        context[18] = context[3];
        context[19] = 0;
        context[20] = 0;
        context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
        if( ! context[21] )
          continue;
        refalrts::bracket_pointers(context[21], context[22]);
        context[23] = refalrts::ident_left( identifiers[ident_Word], context[19], context[20] );
        if( ! context[23] )
          continue;
        // closed e.Description#1 as range 5
        // closed e.ArgsTail#1 as range 17
        if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
          continue;
        // closed e.Param#1 as range 19
        //DEBUG: s.Num#1: 9
        //DEBUG: s.Tag#1: 10
        //DEBUG: s.Short#1: 12
        //DEBUG: e.Description#1: 5
        //DEBUG: e.ArgsTail#1: 17
        //DEBUG: s.WordNum#1: 24
        //DEBUG: e.Param#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 {REMOVED TILE} # Word/23 s.WordNum#1/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/15 HalfReuse: s.Tag1 #10/16 HalfReuse: s.Num1 #9/21 } Tile{ AsIs: e.Param#1/19 } Tile{ AsIs: )/22 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/17 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_svar( context[16], context[10] );
        refalrts::reinit_svar( context[21], context[9] );
        refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[15], context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[15], context[21] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
      // closed e.Description#1 as range 5
      // closed e.ArgsTail#1 as range 2
      //DEBUG: s.Num#1: 9
      //DEBUG: s.Tag#1: 10
      //DEBUG: s.Short#1: 12
      //DEBUG: e.Description#1: 5
      //DEBUG: e.ArgsTail#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/17 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ HalfReuse: # NoParam/15 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[17]);
      refalrts::reinit_svar( context[11], context[9] );
      refalrts::reinit_ident(context[15], identifiers[ident_NoParam]);
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[17], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 e.Param#1/13 )/16 e.ArgsTail#1/2 >/1
    // closed e.Description#1 as range 5
    // closed e.Param#1 as range 13
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: s.Short#1: 12
    //DEBUG: e.Description#1: 5
    //DEBUG: e.Param#1: 13
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 } Tile{ AsIs: s.Tag#1/10 } Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.Param#1/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[11]);
    refalrts::reinit_svar( context[15], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveOpts-Short/4 (/7 e.new#8/5 )/8 s.new#9/9 s.new#10/10 # None/11 s.new#11/12 (/15 e.new#12/13 )/16 e.new#13/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_None], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#8 as range 5
  // closed e.new#12 as range 13
  // closed e.new#13 as range 2
  do {
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 2
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: s.Short#1: 12
    //DEBUG: e.Description#1: 5
    //DEBUG: e.ArgsTail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 s.Short#1/12 (/15 e.OptTail#1/13 )/16 e.ArgsTail#1/2 >/1
  // closed e.Description#1 as range 5
  // closed e.OptTail#1 as range 13
  // closed e.ArgsTail#1 as range 2
  //DEBUG: s.Num#1: 9
  //DEBUG: s.Tag#1: 10
  //DEBUG: s.Short#1: 12
  //DEBUG: e.Description#1: 5
  //DEBUG: e.OptTail#1: 13
  //DEBUG: e.ArgsTail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/17 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } )/18 Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } (/19 # Short/20 Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.OptTail#1/13 AsIs: )/16 AsIs: e.ArgsTail#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_Short]);
  refalrts::reinit_svar( context[11], context[9] );
  refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
  refalrts::reinit_svar( context[15], context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[19], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveOptsm_Short("ResolveOpts-Short", 4145616865U, 25143199U, func_ResolveOptsm_Short);


static refalrts::FnResult func_FoldErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & FoldErrors/4 e.OptionsAndErrors#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.OptionsAndErrors#1 as range 2
  //DEBUG: e.OptionsAndErrors#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoFoldErrors/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.OptionsAndErrors#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_DoFoldErrors]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FoldErrors("FoldErrors", 4145616865U, 25143199U, func_FoldErrors);


static refalrts::FnResult func_DoFoldErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoFoldErrors/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoFoldErrors/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & DoFoldErrors/4 (/7 e.Errors#1/5 )/8 e.Options#1/11 (/17 # Error/19 s.Num#1/20 s.ErrorCode#1/21 e.Info#1/15 )/18 e.OptionsAndErrors#1/13 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.Errors#1 as range 5
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[13] = context[9];
      context[14] = context[10];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::ident_left( identifiers[ident_Error], context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.OptionsAndErrors#1 as range 13
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
        continue;
      // closed e.Info#1 as range 15
      //DEBUG: e.Errors#1: 5
      //DEBUG: e.Options#1: 11
      //DEBUG: e.OptionsAndErrors#1: 13
      //DEBUG: s.Num#1: 20
      //DEBUG: s.ErrorCode#1: 21
      //DEBUG: e.Info#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Error/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFoldErrors/4 AsIs: (/7 AsIs: e.Errors#1/5 HalfReuse: (/8 } Tile{ AsIs: s.Num#1/20 AsIs: s.ErrorCode#1/21 AsIs: e.Info#1/15 AsIs: )/18 } Tile{ HalfReuse: )/17 } Tile{ AsIs: e.Options#1/11 } Tile{ AsIs: e.OptionsAndErrors#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[17] );
      refalrts::link_brackets( context[8], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[20], context[18] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[11], context[12], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFoldErrors/4 (/7 e.Errors#1/5 )/8 e.Options#1/2 >/1
  // closed e.Errors#1 as range 5
  // closed e.Options#1 as range 2
  //DEBUG: e.Errors#1: 5
  //DEBUG: e.Options#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoFoldErrors/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#1/5 AsIs: )/8 } Tile{ AsIs: e.Options#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoFoldErrors("DoFoldErrors", 4145616865U, 25143199U, func_DoFoldErrors);


//End of file
