// This file automatically generated from 'DFA-Parser.ref'
// Don't edit! Edit 'DFA-Parser.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_169732774_2179250593
#define COOKIE1_ 169732774U
#define COOKIE2_ 2179250593U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_ErrorAt = 3,
  efunc_ParseElements = 4,
  efunc_ExtractSets = 5,
  efunc_Fetch = 6,
  efunc_gen_ParseSetDescr_S1L1Z1 = 7,
  efunc_DFAm_TextFromToken = 8,
  efunc_gen_UnexpectedToken_D1 = 9,
  efunc_gen_ParseSetDescr_D2 = 10,
  efunc_gen_ExtractAlternatives_L3 = 11,
  efunc_gen_ExtractAlternatives_L4 = 12,
  efunc_gen_ExtractAlternatives_L5 = 13,
  efunc_gen_ExtractAlternatives_L6Z1 = 14,
  efunc_gen_ParseSentence_S1L1Z1 = 15,
  efunc_Pipe = 16,
  efunc_gen_ExtractAlternatives_L1 = 17,
  efunc_gen_ExtractAlternatives_L2 = 18,
  efunc_gen_ParseSentence_D2 = 19,
  efunc_gen_ParseSetDescr_S1L1 = 20,
  efunc_gen_ParseSentence_S1L1 = 21,
  efunc_gen_ExtractAlternatives_L6 = 22,
  efunc_Mu = 23,
  efunc_Up = 24,
  efunc_Evm_met = 25,
  efunc_Residue = 26,
  efunc_u_u_Metau_Residue = 27,
  efunc_DFAm_Parse = 28,
  efunc_ParseSetDescr = 29,
  efunc_ParseSentence = 30,
  efunc_ExtractAlternatives = 31,
  efunc_ExtractAlternativesm_Head = 32,
  efunc_ExtractAlternativesm_Flush = 33,
  efunc_ExtractAlternativesm_NextState = 34,
  efunc_UnexpectedToken = 35,
  efunc_gen_ParseSetDescr_S1L1Z0 = 36,
  efunc_gen_ExtractAlternatives_L6Z0 = 37,
  efunc_gen_ParseSentence_S1L1Z0 = 38,
};


enum ident {
  ident_TEOF = 0,
  ident_TSetName = 1,
  ident_TEquals = 2,
  ident_TLiteral = 3,
  ident_Chars = 4,
  ident_Set = 5,
  ident_TName = 6,
  ident_TDot = 7,
  ident_Sentence = 8,
  ident_TFlush = 9,
  ident_Empty = 10,
  ident_TNamedFlush = 11,
  ident_TErrorFlush = 12,
  ident_TAlternative = 13,
  ident_Unnamed = 14,
  ident_Flush = 15,
  ident_FlushError = 16,
  ident_None = 17,
  ident_Finitive = 18,
  ident_Mu = 19,
  ident_Up = 20,
  ident_Evm_met = 21,
  ident_Residue = 22,
  ident_u_u_Metau_Residue = 23,
  ident_DFAm_Parse = 24,
  ident_ParseElements = 25,
  ident_ParseSetDescr = 26,
  ident_ExtractSets = 27,
  ident_ParseSentence = 28,
  ident_ExtractAlternatives = 29,
  ident_ExtractAlternativesm_Head = 30,
  ident_ExtractAlternativesm_Flush = 31,
  ident_ExtractAlternativesm_NextState = 32,
  ident_UnexpectedToken = 33,
};


static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Mu/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mu("Mu", COOKIE1_, COOKIE2_, func_Mu);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Residue("Residue", COOKIE1_, COOKIE2_, func_Residue);


static refalrts::FnResult func_u_u_Metau_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & __Meta_Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Metau_Residue("__Meta_Residue", COOKIE1_, COOKIE2_, func_u_u_Metau_Residue);


static refalrts::FnResult func_DFAm_Parse(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DFA-Parse/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & DFA-Parse/4 (/9 # TEOF/11 t.SrcPos#1/12 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_TEOF], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.SrcPos#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/12 } 'I'/14 Tile{ HalfReuse: 'l'/9 HalfReuse: 'l'/11 }"egal empty descriptio"/15 Tile{ HalfReuse: 'n'/10 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[14], 'I');
    refalrts::alloc_chars(vm, context[15], context[16], "egal empty descriptio", 21);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[9], 'l');
    refalrts::reinit_char(context[11], 'l');
    refalrts::reinit_char(context[10], 'n');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DFA-Parse/4 e.Tokens#1/2 >/1
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & ParseElements/6 (/7 (/8"Any"/9 )/11 )/12 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_ParseElements]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_chars(vm, context[9], context[10], "Any", 3);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DFAm_Parse("DFA-Parse", 0U, 0U, func_DFAm_Parse);


static refalrts::FnResult func_ParseElements(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 94 elems
  refalrts::Iter context[94];
  refalrts::zeros( context, 94 );
  // </0 & ParseElements/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseElements/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 e.new#4/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & ParseElements/4 (/7 e.new#9/15 )/8 (/11 e.new#10/17 )/12 (/13 s.new#5/23 t.new#6/24 e.new#7/21 )/14 e.new#8/19 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[2];
    context[20] = context[3];
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[13] ) )
      continue;
    // closed e.new#9 as range 15
    // closed e.new#10 as range 17
    // closed e.new#8 as range 19
    if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
      continue;
    context[25] = refalrts::tvar_left( context[24], context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.new#7 as range 21
    do {
      // </0 & ParseElements/4 (/7 e.new#14/26 )/8 (/11 e.new#15/28 )/12 (/13 # TSetName/23 t.new#11/24 e.new#12/30 )/14 e.new#13/32 >/1
      context[26] = context[15];
      context[27] = context[16];
      context[28] = context[17];
      context[29] = context[18];
      context[30] = context[21];
      context[31] = context[22];
      context[32] = context[19];
      context[33] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TSetName], context[23] ) )
        continue;
      // closed e.new#14 as range 26
      // closed e.new#15 as range 28
      // closed e.new#12 as range 30
      // closed e.new#13 as range 32
      do {
        // </0 & ParseElements/4 (/7 e.SetNames-B#1/42 (/48 e.Name#1/50 )/49 e.SetNames-E#1/44 )/8 (/11 e.RuleNames#1/36 )/12 (/13 # TSetName/23 t.SrcPos#1/24 e.Name#1/38 )/14 e.Tail#1/40 >/1
        context[34] = context[26];
        context[35] = context[27];
        context[36] = context[28];
        context[37] = context[29];
        context[38] = context[30];
        context[39] = context[31];
        context[40] = context[32];
        context[41] = context[33];
        // closed e.RuleNames#1 as range 36
        // closed e.Name#1 as range 38
        // closed e.Tail#1 as range 40
        context[42] = 0;
        context[43] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[44] = context[34];
          context[45] = context[35];
          context[46] = 0;
          context[47] = 0;
          context[48] = refalrts::brackets_left( context[46], context[47], context[44], context[45] );
          if( ! context[48] )
            continue;
          refalrts::bracket_pointers(context[48], context[49]);
          if( ! refalrts::repeated_evar_left( vm, context[50], context[51], context[38], context[39], context[46], context[47] ) )
            continue;
          if( ! refalrts::empty_seq( context[46], context[47] ) )
            continue;
          // closed e.SetNames-E#1 as range 44
          //DEBUG: t.SrcPos#1: 24
          //DEBUG: e.RuleNames#1: 36
          //DEBUG: e.Name#1: 38
          //DEBUG: e.Tail#1: 40
          //DEBUG: e.SetNames-B#1: 42
          //DEBUG: e.SetNames-E#1: 44

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames-B#1/42 {REMOVED TILE} e.SetNames-E#1/44 {REMOVED TILE} e.RuleNames#1/36 {REMOVED TILE} {REMOVED TILE} e.Name#1/38 {REMOVED TILE} e.Tail#1/40 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/24 } Tile{ HalfReuse: 'S'/8 HalfReuse: 'e'/11 } Tile{ HalfReuse: 't'/12 HalfReuse: ' '/13 HalfReuse: 'n'/23 } Tile{ HalfReuse: 'a'/7 } Tile{ HalfReuse: 'm'/14 }"e "/52 Tile{ HalfReuse: ':'/48 AsIs: e.Name#1/50 HalfReuse: ':'/49 }" redeclared"/54 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[52], context[53], "e ", 2);
          refalrts::alloc_chars(vm, context[54], context[55], " redeclared", 11);
          refalrts::update_name(context[4], functions[efunc_ErrorAt]);
          refalrts::reinit_char(context[8], 'S');
          refalrts::reinit_char(context[11], 'e');
          refalrts::reinit_char(context[12], 't');
          refalrts::reinit_char(context[13], ' ');
          refalrts::reinit_char(context[23], 'n');
          refalrts::reinit_char(context[7], 'a');
          refalrts::reinit_char(context[14], 'm');
          refalrts::reinit_char(context[48], ':');
          refalrts::reinit_char(context[49], ':');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[54], context[55] );
          res = refalrts::splice_evar( res, context[48], context[49] );
          res = refalrts::splice_evar( res, context[52], context[53] );
          res = refalrts::splice_elem( res, context[14] );
          res = refalrts::splice_elem( res, context[7] );
          res = refalrts::splice_evar( res, context[12], context[23] );
          res = refalrts::splice_evar( res, context[8], context[11] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[42], context[43], context[34], context[35] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseElements/4 (/7 e.new#20/34 )/8 (/11 e.new#21/36 )/12 (/13 # TSetName/23 t.new#16/24 e.new#17/38 )/14 t.new#18/42 e.new#19/40 >/1
        context[34] = context[26];
        context[35] = context[27];
        context[36] = context[28];
        context[37] = context[29];
        context[38] = context[30];
        context[39] = context[31];
        context[40] = context[32];
        context[41] = context[33];
        // closed e.new#20 as range 34
        // closed e.new#21 as range 36
        // closed e.new#17 as range 38
        context[43] = refalrts::tvar_left( context[42], context[40], context[41] );
        if( ! context[43] )
          continue;
        // closed e.new#19 as range 40
        do {
          // </0 & ParseElements/4 (/7 e.new#28/44 )/8 (/11 e.new#29/46 )/12 (/13 # TSetName/23 t.new#22/24 e.new#23/48 )/14 (/42 s.new#24/54 t.new#25/55 e.new#26/52 )/43 e.new#27/50 >/1
          context[44] = context[34];
          context[45] = context[35];
          context[46] = context[36];
          context[47] = context[37];
          context[48] = context[38];
          context[49] = context[39];
          context[50] = context[40];
          context[51] = context[41];
          context[52] = 0;
          context[53] = 0;
          if( ! refalrts::brackets_term( context[52], context[53], context[42] ) )
            continue;
          // closed e.new#28 as range 44
          // closed e.new#29 as range 46
          // closed e.new#23 as range 48
          // closed e.new#27 as range 50
          if( ! refalrts::svar_left( context[54], context[52], context[53] ) )
            continue;
          context[56] = refalrts::tvar_left( context[55], context[52], context[53] );
          if( ! context[56] )
            continue;
          // closed e.new#26 as range 52
          do {
            // </0 & ParseElements/4 (/7 e.new#34/57 )/8 (/11 e.new#35/59 )/12 (/13 # TSetName/23 t.new#30/24 e.new#31/61 )/14 (/42 # TEquals/54 t.new#32/55 )/43 e.new#33/63 >/1
            context[57] = context[44];
            context[58] = context[45];
            context[59] = context[46];
            context[60] = context[47];
            context[61] = context[48];
            context[62] = context[49];
            context[63] = context[50];
            context[64] = context[51];
            if( ! refalrts::ident_term( identifiers[ident_TEquals], context[54] ) )
              continue;
            if( ! refalrts::empty_seq( context[52], context[53] ) )
              continue;
            // closed e.new#34 as range 57
            // closed e.new#35 as range 59
            // closed e.new#31 as range 61
            // closed e.new#33 as range 63
            do {
              // </0 & ParseElements/4 (/7 e.new#43/65 )/8 (/11 e.new#44/67 )/12 (/13 # TSetName/23 t.new#36/24 e.new#37/69 )/14 (/42 # TEquals/54 t.new#38/55 )/43 (/75 s.new#39/77 t.new#40/78 e.new#41/73 )/76 e.new#42/71 >/1
              context[65] = context[57];
              context[66] = context[58];
              context[67] = context[59];
              context[68] = context[60];
              context[69] = context[61];
              context[70] = context[62];
              context[71] = context[63];
              context[72] = context[64];
              context[73] = 0;
              context[74] = 0;
              context[75] = refalrts::brackets_left( context[73], context[74], context[71], context[72] );
              if( ! context[75] )
                continue;
              refalrts::bracket_pointers(context[75], context[76]);
              // closed e.new#43 as range 65
              // closed e.new#44 as range 67
              // closed e.new#37 as range 69
              // closed e.new#42 as range 71
              if( ! refalrts::svar_left( context[77], context[73], context[74] ) )
                continue;
              context[79] = refalrts::tvar_left( context[78], context[73], context[74] );
              if( ! context[79] )
                continue;
              // closed e.new#41 as range 73
              do {
                // </0 & ParseElements/4 (/7 e.SetNames#1/80 )/8 (/11 e.RuleNames#1/82 )/12 (/13 # TSetName/23 t.SrcPos#1/24 e.Name#1/84 )/14 (/42 # TEquals/54 t.1#0/55 )/43 (/75 # TLiteral/77 t.2#0/78 e.3#0/86 )/76 e.0#0/88 >/1
                context[80] = context[65];
                context[81] = context[66];
                context[82] = context[67];
                context[83] = context[68];
                context[84] = context[69];
                context[85] = context[70];
                context[86] = context[73];
                context[87] = context[74];
                context[88] = context[71];
                context[89] = context[72];
                if( ! refalrts::ident_term( identifiers[ident_TLiteral], context[77] ) )
                  continue;
                // closed e.SetNames#1 as range 80
                // closed e.RuleNames#1 as range 82
                // closed e.Name#1 as range 84
                // closed e.3#0 as range 86
                // closed e.0#0 as range 88
                //DEBUG: t.SrcPos#1: 24
                //DEBUG: t.1#0: 55
                //DEBUG: t.2#0: 78
                //DEBUG: e.SetNames#1: 80
                //DEBUG: e.RuleNames#1: 82
                //DEBUG: e.Name#1: 84
                //DEBUG: e.3#0: 86
                //DEBUG: e.0#0: 88

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.1#0/55 {REMOVED TILE} t.2#0/78 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ HalfReuse: </54 } & ExtractSets/90 Tile{ HalfReuse: (/43 AsIs: (/75 Reuse: # Chars/77 } Tile{ AsIs: e.3#0/86 } )/91 Tile{ AsIs: )/76 AsIs: e.0#0/88 AsIs: >/1 } [*]/92 Tile{ HalfReuse: & ParseSetDescr$1\1@1/14 AsIs: (/42 } Tile{ AsIs: e.Name#1/84 } )/93 Tile{ AsIs: t.SrcPos#1/24 } Tile{ AsIs: (/7 AsIs: e.SetNames#1/80 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/82 AsIs: )/12 HalfReuse: {*}/13 HalfReuse: >/23 } Tile{ ]] }
                refalrts::alloc_name(vm, context[90], functions[efunc_ExtractSets]);
                refalrts::alloc_close_bracket(vm, context[91]);
                refalrts::alloc_closure_head(vm, context[92]);
                refalrts::alloc_close_bracket(vm, context[93]);
                refalrts::update_name(context[4], functions[efunc_Fetch]);
                refalrts::reinit_open_call(context[54]);
                refalrts::reinit_open_bracket(context[43]);
                refalrts::update_ident(context[77], identifiers[ident_Chars]);
                refalrts::reinit_name(context[14], functions[efunc_gen_ParseSetDescr_S1L1Z1]);
                refalrts::reinit_unwrapped_closure(context[13], context[92]);
                refalrts::reinit_close_call(context[23]);
                refalrts::push_stack( vm, context[23] );
                refalrts::push_stack( vm, context[0] );
                refalrts::link_brackets( context[11], context[12] );
                refalrts::link_brackets( context[7], context[8] );
                refalrts::link_brackets( context[42], context[93] );
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[54] );
                refalrts::link_brackets( context[43], context[76] );
                refalrts::link_brackets( context[75], context[91] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = arg_end->next;
                res = refalrts::splice_evar( res, context[7], context[23] );
                res = refalrts::splice_evar( res, context[24], context[25] );
                res = refalrts::splice_elem( res, context[93] );
                res = refalrts::splice_evar( res, context[84], context[85] );
                res = refalrts::splice_evar( res, context[14], context[42] );
                res = refalrts::splice_elem( res, context[92] );
                res = refalrts::splice_evar( res, context[76], context[1] );
                res = refalrts::splice_elem( res, context[91] );
                res = refalrts::splice_evar( res, context[86], context[87] );
                res = refalrts::splice_evar( res, context[43], context[77] );
                res = refalrts::splice_elem( res, context[90] );
                res = refalrts::splice_elem( res, context[54] );
                refalrts::splice_to_freelist_open( vm, context[4], res );
                refalrts::wrap_closure( context[13] );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              // </0 & ParseElements/4 (/7 e.SetNames#1/80 )/8 (/11 e.RuleNames#1/82 )/12 (/13 # TSetName/23 t.SrcPos#1/24 e.Name#1/84 )/14 (/42 # TEquals/54 t.1#0/55 )/43 (/75 # TSetName/77 t.2#0/78 e.3#0/86 )/76 e.0#0/88 >/1
              context[80] = context[65];
              context[81] = context[66];
              context[82] = context[67];
              context[83] = context[68];
              context[84] = context[69];
              context[85] = context[70];
              context[86] = context[73];
              context[87] = context[74];
              context[88] = context[71];
              context[89] = context[72];
              if( ! refalrts::ident_term( identifiers[ident_TSetName], context[77] ) )
                continue;
              // closed e.SetNames#1 as range 80
              // closed e.RuleNames#1 as range 82
              // closed e.Name#1 as range 84
              // closed e.3#0 as range 86
              // closed e.0#0 as range 88
              //DEBUG: t.SrcPos#1: 24
              //DEBUG: t.1#0: 55
              //DEBUG: t.2#0: 78
              //DEBUG: e.SetNames#1: 80
              //DEBUG: e.RuleNames#1: 82
              //DEBUG: e.Name#1: 84
              //DEBUG: e.3#0: 86
              //DEBUG: e.0#0: 88

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.1#0/55 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </90 & ExtractSets/91 Tile{ HalfReuse: (/43 AsIs: (/75 Reuse: # Set/77 AsIs: t.2#0/78 AsIs: e.3#0/86 AsIs: )/76 } Tile{ HalfReuse: )/54 } Tile{ AsIs: e.0#0/88 } Tile{ AsIs: >/1 } [*]/92 Tile{ HalfReuse: & ParseSetDescr$1\1@1/14 AsIs: (/42 } Tile{ AsIs: e.Name#1/84 } )/93 Tile{ AsIs: t.SrcPos#1/24 } Tile{ AsIs: (/7 AsIs: e.SetNames#1/80 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/82 AsIs: )/12 HalfReuse: {*}/13 HalfReuse: >/23 } Tile{ ]] }
              refalrts::alloc_open_call(vm, context[90]);
              refalrts::alloc_name(vm, context[91], functions[efunc_ExtractSets]);
              refalrts::alloc_closure_head(vm, context[92]);
              refalrts::alloc_close_bracket(vm, context[93]);
              refalrts::update_name(context[4], functions[efunc_Fetch]);
              refalrts::reinit_open_bracket(context[43]);
              refalrts::update_ident(context[77], identifiers[ident_Set]);
              refalrts::reinit_close_bracket(context[54]);
              refalrts::reinit_name(context[14], functions[efunc_gen_ParseSetDescr_S1L1Z1]);
              refalrts::reinit_unwrapped_closure(context[13], context[92]);
              refalrts::reinit_close_call(context[23]);
              refalrts::push_stack( vm, context[23] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[11], context[12] );
              refalrts::link_brackets( context[7], context[8] );
              refalrts::link_brackets( context[42], context[93] );
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[90] );
              refalrts::link_brackets( context[43], context[54] );
              refalrts::link_brackets( context[75], context[76] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = arg_end->next;
              res = refalrts::splice_evar( res, context[7], context[23] );
              res = refalrts::splice_evar( res, context[24], context[25] );
              res = refalrts::splice_elem( res, context[93] );
              res = refalrts::splice_evar( res, context[84], context[85] );
              res = refalrts::splice_evar( res, context[14], context[42] );
              res = refalrts::splice_elem( res, context[92] );
              res = refalrts::splice_elem( res, context[1] );
              res = refalrts::splice_evar( res, context[88], context[89] );
              res = refalrts::splice_elem( res, context[54] );
              res = refalrts::splice_evar( res, context[43], context[76] );
              res = refalrts::splice_evar( res, context[90], context[91] );
              refalrts::splice_to_freelist_open( vm, context[4], res );
              refalrts::wrap_closure( context[13] );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & ParseElements/4 (/7 e.SetNames#1/65 )/8 (/11 e.RuleNames#1/67 )/12 (/13 # TSetName/23 t.SrcPos#1/24 e.Name#1/69 )/14 (/42 # TEquals/54 t.1#0/55 )/43 e.#0/71 >/1
            context[65] = context[57];
            context[66] = context[58];
            context[67] = context[59];
            context[68] = context[60];
            context[69] = context[61];
            context[70] = context[62];
            context[71] = context[63];
            context[72] = context[64];
            // closed e.SetNames#1 as range 65
            // closed e.RuleNames#1 as range 67
            // closed e.Name#1 as range 69
            // closed e.#0 as range 71
            //DEBUG: t.SrcPos#1: 24
            //DEBUG: t.1#0: 55
            //DEBUG: e.SetNames#1: 65
            //DEBUG: e.RuleNames#1: 67
            //DEBUG: e.Name#1: 69
            //DEBUG: e.#0: 71

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.1#0/55 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } (/73 Tile{ AsIs: )/43 AsIs: e.#0/71 HalfReuse: [*]/1 } Tile{ HalfReuse: & ParseSetDescr$1\1@1/14 AsIs: (/42 } Tile{ AsIs: e.Name#1/69 } Tile{ HalfReuse: )/54 } Tile{ AsIs: t.SrcPos#1/24 } Tile{ AsIs: (/7 AsIs: e.SetNames#1/65 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/67 AsIs: )/12 HalfReuse: {*}/13 HalfReuse: >/23 } Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[73]);
            refalrts::update_name(context[4], functions[efunc_Fetch]);
            refalrts::reinit_closure_head(context[1]);
            refalrts::reinit_name(context[14], functions[efunc_gen_ParseSetDescr_S1L1Z1]);
            refalrts::reinit_close_bracket(context[54]);
            refalrts::reinit_unwrapped_closure(context[13], context[1]);
            refalrts::reinit_close_call(context[23]);
            refalrts::push_stack( vm, context[23] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[11], context[12] );
            refalrts::link_brackets( context[7], context[8] );
            refalrts::link_brackets( context[42], context[54] );
            refalrts::link_brackets( context[73], context[43] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[7], context[23] );
            res = refalrts::splice_evar( res, context[24], context[25] );
            res = refalrts::splice_elem( res, context[54] );
            res = refalrts::splice_evar( res, context[69], context[70] );
            res = refalrts::splice_evar( res, context[14], context[42] );
            res = refalrts::splice_evar( res, context[43], context[1] );
            res = refalrts::splice_elem( res, context[73] );
            refalrts::splice_to_freelist_open( vm, context[4], res );
            refalrts::wrap_closure( context[13] );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & ParseElements/4 (/7 e.SetNames#1/57 )/8 (/11 e.RuleNames#1/59 )/12 (/13 # TSetName/23 t.SrcPos#1/24 e.Name#1/61 )/14 (/42 s.Type#1/54 t.1#0/55 e.2#0/63 )/43 e.#0/65 >/1
          context[57] = context[44];
          context[58] = context[45];
          context[59] = context[46];
          context[60] = context[47];
          context[61] = context[48];
          context[62] = context[49];
          context[63] = context[52];
          context[64] = context[53];
          context[65] = context[50];
          context[66] = context[51];
          // closed e.SetNames#1 as range 57
          // closed e.RuleNames#1 as range 59
          // closed e.Name#1 as range 61
          // closed e.2#0 as range 63
          // closed e.#0 as range 65
          //DEBUG: t.SrcPos#1: 24
          //DEBUG: t.1#0: 55
          //DEBUG: s.Type#1: 54
          //DEBUG: e.SetNames#1: 57
          //DEBUG: e.RuleNames#1: 59
          //DEBUG: e.Name#1: 61
          //DEBUG: e.2#0: 63
          //DEBUG: e.#0: 65

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/57 {REMOVED TILE} e.RuleNames#1/59 {REMOVED TILE} t.SrcPos#1/24 e.Name#1/61 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.#0/65 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.1#0/55 } Tile{ HalfReuse: 'U'/8 HalfReuse: 'n'/11 } Tile{ HalfReuse: 'e'/12 HalfReuse: 'x'/13 HalfReuse: 'p'/23 } Tile{ HalfReuse: 'e'/7 } 'c'/67 Tile{ HalfReuse: 't'/43 }"ed "/68 Tile{ HalfReuse: </14 HalfReuse: & DFA-TextFromToken/42 AsIs: s.Type#1/54 } Tile{ AsIs: e.2#0/63 } >/70" expected \"=\""/71 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[67], 'c');
          refalrts::alloc_chars(vm, context[68], context[69], "ed ", 3);
          refalrts::alloc_close_call(vm, context[70]);
          refalrts::alloc_chars(vm, context[71], context[72], " expected \"=\"", 13);
          refalrts::update_name(context[4], functions[efunc_ErrorAt]);
          refalrts::reinit_char(context[8], 'U');
          refalrts::reinit_char(context[11], 'n');
          refalrts::reinit_char(context[12], 'e');
          refalrts::reinit_char(context[13], 'x');
          refalrts::reinit_char(context[23], 'p');
          refalrts::reinit_char(context[7], 'e');
          refalrts::reinit_char(context[43], 't');
          refalrts::reinit_open_call(context[14]);
          refalrts::reinit_name(context[42], functions[efunc_DFAm_TextFromToken]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[70] );
          refalrts::push_stack( vm, context[14] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[70], context[72] );
          res = refalrts::splice_evar( res, context[63], context[64] );
          res = refalrts::splice_evar( res, context[14], context[54] );
          res = refalrts::splice_evar( res, context[68], context[69] );
          res = refalrts::splice_elem( res, context[43] );
          res = refalrts::splice_elem( res, context[67] );
          res = refalrts::splice_elem( res, context[7] );
          res = refalrts::splice_evar( res, context[12], context[23] );
          res = refalrts::splice_evar( res, context[8], context[11] );
          res = refalrts::splice_evar( res, context[55], context[56] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & ParseElements/4 (/7 e.SetNames#1/44 )/8 (/11 e.RuleNames#1/46 )/12 (/13 # TSetName/23 t.SrcPos#1/24 e.Name#1/48 )/14 t.#0/42 e.#0/50 >/1
        context[44] = context[34];
        context[45] = context[35];
        context[46] = context[36];
        context[47] = context[37];
        context[48] = context[38];
        context[49] = context[39];
        context[50] = context[40];
        context[51] = context[41];
        // closed e.SetNames#1 as range 44
        // closed e.RuleNames#1 as range 46
        // closed e.Name#1 as range 48
        // closed e.#0 as range 50
        //DEBUG: t.SrcPos#1: 24
        //DEBUG: t.#0: 42
        //DEBUG: e.SetNames#1: 44
        //DEBUG: e.RuleNames#1: 46
        //DEBUG: e.Name#1: 48
        //DEBUG: e.#0: 50

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/7 e.SetNames#1/44 )/8 (/11 e.RuleNames#1/46 {REMOVED TILE} t.SrcPos#1/24 e.Name#1/48 )/14 {REMOVED TILE} e.#0/50 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken*1/4 } Tile{ AsIs: t.#0/42 } Tile{ HalfReuse: '\"'/12 HalfReuse: '='/13 HalfReuse: '\"'/23 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
        refalrts::reinit_char(context[12], '\"');
        refalrts::reinit_char(context[13], '=');
        refalrts::reinit_char(context[23], '\"');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[12], context[23] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseElements/4 (/7 e.SetNames#1/34 )/8 (/11 e.RuleNames#1/36 )/12 (/13 # TSetName/23 t.SrcPos#1/24 e.Name#1/38 )/14 e.Tail#1/40 >/1
      context[34] = context[26];
      context[35] = context[27];
      context[36] = context[28];
      context[37] = context[29];
      context[38] = context[30];
      context[39] = context[31];
      context[40] = context[32];
      context[41] = context[33];
      // closed e.SetNames#1 as range 34
      // closed e.RuleNames#1 as range 36
      // closed e.Name#1 as range 38
      // closed e.Tail#1 as range 40
      //DEBUG: t.SrcPos#1: 24
      //DEBUG: e.SetNames#1: 34
      //DEBUG: e.RuleNames#1: 36
      //DEBUG: e.Name#1: 38
      //DEBUG: e.Tail#1: 40

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr*2/4 AsIs: (/7 AsIs: e.SetNames#1/34 HalfReuse: (/8 } Tile{ AsIs: e.Name#1/38 } Tile{ HalfReuse: )/23 } )/42 Tile{ AsIs: (/11 AsIs: e.RuleNames#1/36 AsIs: )/12 } Tile{ AsIs: t.SrcPos#1/24 } Tile{ AsIs: (/13 } e.Name#1/38/43 Tile{ AsIs: )/14 AsIs: e.Tail#1/40 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[42]);
      refalrts::copy_evar(vm, context[43], context[44], context[38], context[39]);
      refalrts::update_name(context[4], functions[efunc_gen_ParseSetDescr_D2]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[42] );
      refalrts::link_brackets( context[8], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseElements/4 (/7 e.new#14/26 )/8 (/11 e.new#15/28 )/12 (/13 # TName/23 t.new#11/24 e.new#12/30 )/14 e.new#13/32 >/1
      context[26] = context[15];
      context[27] = context[16];
      context[28] = context[17];
      context[29] = context[18];
      context[30] = context[21];
      context[31] = context[22];
      context[32] = context[19];
      context[33] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TName], context[23] ) )
        continue;
      // closed e.new#14 as range 26
      // closed e.new#15 as range 28
      // closed e.new#12 as range 30
      // closed e.new#13 as range 32
      do {
        // </0 & ParseElements/4 (/7 e.SetNames#1/34 )/8 (/11 e.RuleNames-B#1/42 (/48 e.Name#1/50 )/49 e.RuleNames-E#1/44 )/12 (/13 # TName/23 t.SrcPos#1/24 e.Name#1/38 )/14 e.Tail#1/40 >/1
        context[34] = context[26];
        context[35] = context[27];
        context[36] = context[28];
        context[37] = context[29];
        context[38] = context[30];
        context[39] = context[31];
        context[40] = context[32];
        context[41] = context[33];
        // closed e.SetNames#1 as range 34
        // closed e.Name#1 as range 38
        // closed e.Tail#1 as range 40
        context[42] = 0;
        context[43] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[44] = context[36];
          context[45] = context[37];
          context[46] = 0;
          context[47] = 0;
          context[48] = refalrts::brackets_left( context[46], context[47], context[44], context[45] );
          if( ! context[48] )
            continue;
          refalrts::bracket_pointers(context[48], context[49]);
          if( ! refalrts::repeated_evar_left( vm, context[50], context[51], context[38], context[39], context[46], context[47] ) )
            continue;
          if( ! refalrts::empty_seq( context[46], context[47] ) )
            continue;
          // closed e.RuleNames-E#1 as range 44
          //DEBUG: t.SrcPos#1: 24
          //DEBUG: e.SetNames#1: 34
          //DEBUG: e.Name#1: 38
          //DEBUG: e.Tail#1: 40
          //DEBUG: e.RuleNames-B#1: 42
          //DEBUG: e.RuleNames-E#1: 44

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/34 {REMOVED TILE} e.RuleNames-B#1/42 {REMOVED TILE} e.RuleNames-E#1/44 {REMOVED TILE} {REMOVED TILE} e.Name#1/38 {REMOVED TILE} e.Tail#1/40 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/24 } Tile{ HalfReuse: 'N'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 'm'/7 } 'e'/52 Tile{ HalfReuse: ' '/48 AsIs: e.Name#1/50 HalfReuse: ' '/49 } Tile{ HalfReuse: 'r'/12 HalfReuse: 'e'/13 HalfReuse: 'd'/23 } Tile{ HalfReuse: 'e'/14 }"clared"/53 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[52], 'e');
          refalrts::alloc_chars(vm, context[53], context[54], "clared", 6);
          refalrts::update_name(context[4], functions[efunc_ErrorAt]);
          refalrts::reinit_char(context[8], 'N');
          refalrts::reinit_char(context[11], 'a');
          refalrts::reinit_char(context[7], 'm');
          refalrts::reinit_char(context[48], ' ');
          refalrts::reinit_char(context[49], ' ');
          refalrts::reinit_char(context[12], 'r');
          refalrts::reinit_char(context[13], 'e');
          refalrts::reinit_char(context[23], 'd');
          refalrts::reinit_char(context[14], 'e');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[53], context[54] );
          res = refalrts::splice_elem( res, context[14] );
          res = refalrts::splice_evar( res, context[12], context[23] );
          res = refalrts::splice_evar( res, context[48], context[49] );
          res = refalrts::splice_elem( res, context[52] );
          res = refalrts::splice_elem( res, context[7] );
          res = refalrts::splice_evar( res, context[8], context[11] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[42], context[43], context[36], context[37] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseElements/4 (/7 e.new#20/34 )/8 (/11 e.new#21/36 )/12 (/13 # TName/23 t.new#16/24 e.new#17/38 )/14 t.new#18/42 e.new#19/40 >/1
        context[34] = context[26];
        context[35] = context[27];
        context[36] = context[28];
        context[37] = context[29];
        context[38] = context[30];
        context[39] = context[31];
        context[40] = context[32];
        context[41] = context[33];
        // closed e.new#20 as range 34
        // closed e.new#21 as range 36
        // closed e.new#17 as range 38
        context[43] = refalrts::tvar_left( context[42], context[40], context[41] );
        if( ! context[43] )
          continue;
        // closed e.new#19 as range 40
        do {
          // </0 & ParseElements/4 (/7 e.new#28/44 )/8 (/11 e.new#29/46 )/12 (/13 # TName/23 t.new#22/24 e.new#23/48 )/14 (/42 s.new#24/54 t.new#25/55 e.new#26/52 )/43 e.new#27/50 >/1
          context[44] = context[34];
          context[45] = context[35];
          context[46] = context[36];
          context[47] = context[37];
          context[48] = context[38];
          context[49] = context[39];
          context[50] = context[40];
          context[51] = context[41];
          context[52] = 0;
          context[53] = 0;
          if( ! refalrts::brackets_term( context[52], context[53], context[42] ) )
            continue;
          // closed e.new#28 as range 44
          // closed e.new#29 as range 46
          // closed e.new#23 as range 48
          // closed e.new#27 as range 50
          if( ! refalrts::svar_left( context[54], context[52], context[53] ) )
            continue;
          context[56] = refalrts::tvar_left( context[55], context[52], context[53] );
          if( ! context[56] )
            continue;
          // closed e.new#26 as range 52
          do {
            // </0 & ParseElements/4 (/7 e.SetNames#1/57 )/8 (/11 e.RuleNames#1/59 )/12 (/13 # TName/23 t.SrcPos#1/24 e.Name#1/61 )/14 (/42 # TEquals/54 t.1#0/55 )/43 e.#0/63 >/1
            context[57] = context[44];
            context[58] = context[45];
            context[59] = context[46];
            context[60] = context[47];
            context[61] = context[48];
            context[62] = context[49];
            context[63] = context[50];
            context[64] = context[51];
            if( ! refalrts::ident_term( identifiers[ident_TEquals], context[54] ) )
              continue;
            if( ! refalrts::empty_seq( context[52], context[53] ) )
              continue;
            // closed e.SetNames#1 as range 57
            // closed e.RuleNames#1 as range 59
            // closed e.Name#1 as range 61
            // closed e.#0 as range 63
            //DEBUG: t.SrcPos#1: 24
            //DEBUG: t.1#0: 55
            //DEBUG: e.SetNames#1: 57
            //DEBUG: e.RuleNames#1: 59
            //DEBUG: e.Name#1: 61
            //DEBUG: e.#0: 63

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.1#0/55 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 } & Fetch/65 </66 Tile{ HalfReuse: & Fetch/43 AsIs: e.#0/63 HalfReuse: </1 } Tile{ HalfReuse: & Pipe/14 HalfReuse: & ExtractAlternatives\1/42 HalfReuse: & ExtractAlternatives\2/54 } & ExtractAlternatives\3/67 & ExtractAlternatives\4/68 & ExtractAlternatives\5/69 & ExtractAlternatives\6@1/70 >/71 >/72 [*]/73 & ParseSentence$1\1@1/74 Tile{ AsIs: t.SrcPos#1/24 } (/75 Tile{ AsIs: e.Name#1/61 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.SetNames#1/57 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/59 AsIs: )/12 HalfReuse: {*}/13 HalfReuse: >/23 } Tile{ ]] }
            refalrts::alloc_name(vm, context[65], functions[efunc_Fetch]);
            refalrts::alloc_open_call(vm, context[66]);
            refalrts::alloc_name(vm, context[67], functions[efunc_gen_ExtractAlternatives_L3]);
            refalrts::alloc_name(vm, context[68], functions[efunc_gen_ExtractAlternatives_L4]);
            refalrts::alloc_name(vm, context[69], functions[efunc_gen_ExtractAlternatives_L5]);
            refalrts::alloc_name(vm, context[70], functions[efunc_gen_ExtractAlternatives_L6Z1]);
            refalrts::alloc_close_call(vm, context[71]);
            refalrts::alloc_close_call(vm, context[72]);
            refalrts::alloc_closure_head(vm, context[73]);
            refalrts::alloc_name(vm, context[74], functions[efunc_gen_ParseSentence_S1L1Z1]);
            refalrts::alloc_open_bracket(vm, context[75]);
            refalrts::reinit_name(context[43], functions[efunc_Fetch]);
            refalrts::reinit_open_call(context[1]);
            refalrts::reinit_name(context[14], functions[efunc_Pipe]);
            refalrts::reinit_name(context[42], functions[efunc_gen_ExtractAlternatives_L1]);
            refalrts::reinit_name(context[54], functions[efunc_gen_ExtractAlternatives_L2]);
            refalrts::reinit_close_bracket(context[4]);
            refalrts::reinit_unwrapped_closure(context[13], context[73]);
            refalrts::reinit_close_call(context[23]);
            refalrts::push_stack( vm, context[23] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[11], context[12] );
            refalrts::link_brackets( context[7], context[8] );
            refalrts::link_brackets( context[75], context[4] );
            refalrts::push_stack( vm, context[72] );
            refalrts::push_stack( vm, context[66] );
            refalrts::push_stack( vm, context[71] );
            refalrts::push_stack( vm, context[1] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[4], context[23] );
            res = refalrts::splice_evar( res, context[61], context[62] );
            res = refalrts::splice_elem( res, context[75] );
            res = refalrts::splice_evar( res, context[24], context[25] );
            res = refalrts::splice_evar( res, context[67], context[74] );
            res = refalrts::splice_evar( res, context[14], context[54] );
            res = refalrts::splice_evar( res, context[43], context[1] );
            res = refalrts::splice_evar( res, context[65], context[66] );
            refalrts::splice_to_freelist_open( vm, context[0], res );
            refalrts::wrap_closure( context[13] );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & ParseElements/4 (/7 e.SetNames#1/57 )/8 (/11 e.RuleNames#1/59 )/12 (/13 # TName/23 t.SrcPos#1/24 e.Name#1/61 )/14 (/42 s.Type#1/54 t.1#0/55 e.2#0/63 )/43 e.#0/65 >/1
          context[57] = context[44];
          context[58] = context[45];
          context[59] = context[46];
          context[60] = context[47];
          context[61] = context[48];
          context[62] = context[49];
          context[63] = context[52];
          context[64] = context[53];
          context[65] = context[50];
          context[66] = context[51];
          // closed e.SetNames#1 as range 57
          // closed e.RuleNames#1 as range 59
          // closed e.Name#1 as range 61
          // closed e.2#0 as range 63
          // closed e.#0 as range 65
          //DEBUG: t.SrcPos#1: 24
          //DEBUG: t.1#0: 55
          //DEBUG: s.Type#1: 54
          //DEBUG: e.SetNames#1: 57
          //DEBUG: e.RuleNames#1: 59
          //DEBUG: e.Name#1: 61
          //DEBUG: e.2#0: 63
          //DEBUG: e.#0: 65

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/57 {REMOVED TILE} e.RuleNames#1/59 {REMOVED TILE} t.SrcPos#1/24 e.Name#1/61 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.#0/65 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.1#0/55 } Tile{ HalfReuse: 'U'/8 HalfReuse: 'n'/11 } Tile{ HalfReuse: 'e'/12 HalfReuse: 'x'/13 HalfReuse: 'p'/23 } Tile{ HalfReuse: 'e'/7 } 'c'/67 Tile{ HalfReuse: 't'/43 }"ed "/68 Tile{ HalfReuse: </14 HalfReuse: & DFA-TextFromToken/42 AsIs: s.Type#1/54 } Tile{ AsIs: e.2#0/63 } >/70" expected \"=\""/71 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[67], 'c');
          refalrts::alloc_chars(vm, context[68], context[69], "ed ", 3);
          refalrts::alloc_close_call(vm, context[70]);
          refalrts::alloc_chars(vm, context[71], context[72], " expected \"=\"", 13);
          refalrts::update_name(context[4], functions[efunc_ErrorAt]);
          refalrts::reinit_char(context[8], 'U');
          refalrts::reinit_char(context[11], 'n');
          refalrts::reinit_char(context[12], 'e');
          refalrts::reinit_char(context[13], 'x');
          refalrts::reinit_char(context[23], 'p');
          refalrts::reinit_char(context[7], 'e');
          refalrts::reinit_char(context[43], 't');
          refalrts::reinit_open_call(context[14]);
          refalrts::reinit_name(context[42], functions[efunc_DFAm_TextFromToken]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[70] );
          refalrts::push_stack( vm, context[14] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[70], context[72] );
          res = refalrts::splice_evar( res, context[63], context[64] );
          res = refalrts::splice_evar( res, context[14], context[54] );
          res = refalrts::splice_evar( res, context[68], context[69] );
          res = refalrts::splice_elem( res, context[43] );
          res = refalrts::splice_elem( res, context[67] );
          res = refalrts::splice_elem( res, context[7] );
          res = refalrts::splice_evar( res, context[12], context[23] );
          res = refalrts::splice_evar( res, context[8], context[11] );
          res = refalrts::splice_evar( res, context[55], context[56] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & ParseElements/4 (/7 e.SetNames#1/44 )/8 (/11 e.RuleNames#1/46 )/12 (/13 # TName/23 t.SrcPos#1/24 e.Name#1/48 )/14 t.#0/42 e.#0/50 >/1
        context[44] = context[34];
        context[45] = context[35];
        context[46] = context[36];
        context[47] = context[37];
        context[48] = context[38];
        context[49] = context[39];
        context[50] = context[40];
        context[51] = context[41];
        // closed e.SetNames#1 as range 44
        // closed e.RuleNames#1 as range 46
        // closed e.Name#1 as range 48
        // closed e.#0 as range 50
        //DEBUG: t.SrcPos#1: 24
        //DEBUG: t.#0: 42
        //DEBUG: e.SetNames#1: 44
        //DEBUG: e.RuleNames#1: 46
        //DEBUG: e.Name#1: 48
        //DEBUG: e.#0: 50

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/7 e.SetNames#1/44 )/8 (/11 e.RuleNames#1/46 {REMOVED TILE} t.SrcPos#1/24 e.Name#1/48 )/14 {REMOVED TILE} e.#0/50 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken*1/4 } Tile{ AsIs: t.#0/42 } Tile{ HalfReuse: '\"'/12 HalfReuse: '='/13 HalfReuse: '\"'/23 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
        refalrts::reinit_char(context[12], '\"');
        refalrts::reinit_char(context[13], '=');
        refalrts::reinit_char(context[23], '\"');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[12], context[23] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseElements/4 (/7 e.SetNames#1/34 )/8 (/11 e.RuleNames#1/36 )/12 (/13 # TName/23 t.SrcPos#1/24 e.Name#1/38 )/14 e.Tail#1/40 >/1
      context[34] = context[26];
      context[35] = context[27];
      context[36] = context[28];
      context[37] = context[29];
      context[38] = context[30];
      context[39] = context[31];
      context[40] = context[32];
      context[41] = context[33];
      // closed e.SetNames#1 as range 34
      // closed e.RuleNames#1 as range 36
      // closed e.Name#1 as range 38
      // closed e.Tail#1 as range 40
      //DEBUG: t.SrcPos#1: 24
      //DEBUG: e.SetNames#1: 34
      //DEBUG: e.RuleNames#1: 36
      //DEBUG: e.Name#1: 38
      //DEBUG: e.Tail#1: 40

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence*2/4 AsIs: (/7 AsIs: e.SetNames#1/34 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/36 HalfReuse: (/12 } e.Name#1/38/42 Tile{ HalfReuse: )/13 HalfReuse: )/23 AsIs: t.SrcPos#1/24 } (/44 Tile{ AsIs: e.Name#1/38 } Tile{ AsIs: )/14 AsIs: e.Tail#1/40 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[42], context[43], context[38], context[39]);
      refalrts::alloc_open_bracket(vm, context[44]);
      refalrts::update_name(context[4], functions[efunc_gen_ParseSentence_D2]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::reinit_close_bracket(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[44], context[14] );
      refalrts::link_brackets( context[11], context[23] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_evar( res, context[13], context[25] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseElements/4 (/7 e.SetNames#1/26 )/8 (/11 e.RuleNames#1/28 )/12 (/13 # TEOF/23 t.SrcPos#1/24 )/14 e.Tail#1/30 >/1
      context[26] = context[15];
      context[27] = context[16];
      context[28] = context[17];
      context[29] = context[18];
      context[30] = context[19];
      context[31] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TEOF], context[23] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.SetNames#1 as range 26
      // closed e.RuleNames#1 as range 28
      // closed e.Tail#1 as range 30
      //DEBUG: t.SrcPos#1: 24
      //DEBUG: e.SetNames#1: 26
      //DEBUG: e.RuleNames#1: 28
      //DEBUG: e.Tail#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ParseElements/4 (/7 e.SetNames#1/26 )/8 (/11 e.RuleNames#1/28 )/12 (/13 # TEOF/23 t.SrcPos#1/24 )/14 e.Tail#1/30 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseElements/4 (/7 e.SetNames#1/26 )/8 (/11 e.RuleNames#1/28 )/12 (/13 s.Type#1/23 t.0#0/24 e.1#0/30 )/14 e.Tail#1/32 >/1
    context[26] = context[15];
    context[27] = context[16];
    context[28] = context[17];
    context[29] = context[18];
    context[30] = context[21];
    context[31] = context[22];
    context[32] = context[19];
    context[33] = context[20];
    // closed e.SetNames#1 as range 26
    // closed e.RuleNames#1 as range 28
    // closed e.1#0 as range 30
    // closed e.Tail#1 as range 32
    //DEBUG: t.0#0: 24
    //DEBUG: s.Type#1: 23
    //DEBUG: e.SetNames#1: 26
    //DEBUG: e.RuleNames#1: 28
    //DEBUG: e.1#0: 30
    //DEBUG: e.Tail#1: 32

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/26 {REMOVED TILE} e.RuleNames#1/28 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Tail#1/32 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.0#0/24 } Tile{ HalfReuse: 'U'/7 } 'n'/34 Tile{ HalfReuse: 'e'/8 HalfReuse: 'x'/11 } Tile{ HalfReuse: 'p'/14 }"ected "/35 Tile{ HalfReuse: </12 HalfReuse: & DFA-TextFromToken/13 AsIs: s.Type#1/23 } Tile{ AsIs: e.1#0/30 } >/37" expected name or set name"/38 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[34], 'n');
    refalrts::alloc_chars(vm, context[35], context[36], "ected ", 6);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::alloc_chars(vm, context[38], context[39], " expected name or set name", 26);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'U');
    refalrts::reinit_char(context[8], 'e');
    refalrts::reinit_char(context[11], 'x');
    refalrts::reinit_char(context[14], 'p');
    refalrts::reinit_open_call(context[12]);
    refalrts::reinit_name(context[13], functions[efunc_DFAm_TextFromToken]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[37], context[39] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[12], context[23] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.Unexpected#1/13 e.Tail#1/2 >/1
  // closed e.SetNames#1 as range 5
  // closed e.RuleNames#1 as range 9
  // closed e.Tail#1 as range 2
  //DEBUG: t.Unexpected#1: 13
  //DEBUG: e.SetNames#1: 5
  //DEBUG: e.RuleNames#1: 9
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken*1/4 } Tile{ AsIs: t.Unexpected#1/13 } Tile{ HalfReuse: 'n'/7 } Tile{ HalfReuse: 'a'/8 HalfReuse: 'm'/11 } Tile{ HalfReuse: 'e'/12 }" or set name"/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[15], context[16], " or set name", 12);
  refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
  refalrts::reinit_char(context[7], 'n');
  refalrts::reinit_char(context[8], 'a');
  refalrts::reinit_char(context[11], 'm');
  refalrts::reinit_char(context[12], 'e');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseElements("ParseElements", COOKIE1_, COOKIE2_, func_ParseElements);


static refalrts::FnResult func_gen_ParseSetDescr_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 60 elems
  refalrts::Iter context[60];
  refalrts::zeros( context, 60 );
  // </0 & ParseSetDescr$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSetDescr$1\1/4 (/7 e.new#1/5 )/8 t.new#2/9 (/13 e.new#3/11 )/14 (/17 e.new#4/15 )/18 (/21 e.new#5/19 )/22 t.new#6/23 e.new#7/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
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
  // closed e.new#3 as range 11
  // closed e.new#4 as range 15
  // closed e.new#5 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 2
  do {
    // </0 & ParseSetDescr$1\1/4 (/7 e.new#13/25 )/8 t.new#8/9 (/13 e.new#14/27 )/14 (/17 e.new#15/29 )/18 (/21 e.new#16/31 )/22 (/23 s.new#9/37 t.new#10/38 e.new#11/35 )/24 e.new#12/33 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[11];
    context[28] = context[12];
    context[29] = context[15];
    context[30] = context[16];
    context[31] = context[19];
    context[32] = context[20];
    context[33] = context[2];
    context[34] = context[3];
    context[35] = 0;
    context[36] = 0;
    if( ! refalrts::brackets_term( context[35], context[36], context[23] ) )
      continue;
    // closed e.new#13 as range 25
    // closed e.new#14 as range 27
    // closed e.new#15 as range 29
    // closed e.new#16 as range 31
    // closed e.new#12 as range 33
    if( ! refalrts::svar_left( context[37], context[35], context[36] ) )
      continue;
    context[39] = refalrts::tvar_left( context[38], context[35], context[36] );
    if( ! context[39] )
      continue;
    // closed e.new#11 as range 35
    do {
      // </0 & ParseSetDescr$1\1/4 (/7 e.new#20/40 )/8 t.new#17/9 (/13 e.new#21/42 )/14 (/17 e.new#22/44 )/18 (/21 e.new#23/46 )/22 (/23 # TDot/37 t.new#18/38 )/24 e.new#19/48 >/1
      context[40] = context[25];
      context[41] = context[26];
      context[42] = context[27];
      context[43] = context[28];
      context[44] = context[29];
      context[45] = context[30];
      context[46] = context[31];
      context[47] = context[32];
      context[48] = context[33];
      context[49] = context[34];
      if( ! refalrts::ident_term( identifiers[ident_TDot], context[37] ) )
        continue;
      if( ! refalrts::empty_seq( context[35], context[36] ) )
        continue;
      // closed e.new#20 as range 40
      // closed e.new#21 as range 42
      // closed e.new#22 as range 44
      // closed e.new#23 as range 46
      // closed e.new#19 as range 48
      do {
        // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/50 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/52 )/14 (/17 e.RuleNames#1/54 )/18 (/21 )/22 (/23 # TDot/37 t.SrcPos#2/38 )/24 e.Tail#2/56 >/1
        context[50] = context[40];
        context[51] = context[41];
        context[52] = context[42];
        context[53] = context[43];
        context[54] = context[44];
        context[55] = context[45];
        context[56] = context[48];
        context[57] = context[49];
        if( ! refalrts::empty_seq( context[46], context[47] ) )
          continue;
        // closed e.Name#1 as range 50
        // closed e.SetNames#1 as range 52
        // closed e.RuleNames#1 as range 54
        // closed e.Tail#2 as range 56
        //DEBUG: t.SetNamePos#1: 9
        //DEBUG: t.SrcPos#2: 38
        //DEBUG: e.Name#1: 50
        //DEBUG: e.SetNames#1: 52
        //DEBUG: e.RuleNames#1: 54
        //DEBUG: e.Tail#2: 56

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SetNamePos#1/9 {REMOVED TILE} e.SetNames#1/52 {REMOVED TILE} e.RuleNames#1/54 {REMOVED TILE} {REMOVED TILE} e.Tail#2/56 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#2/38 HalfReuse: 'S'/24 } Tile{ HalfReuse: 'e'/13 } Tile{ HalfReuse: 't'/14 HalfReuse: ' '/17 } Tile{ HalfReuse: ':'/8 } Tile{ AsIs: e.Name#1/50 } Tile{ HalfReuse: ':'/18 HalfReuse: ' '/21 HalfReuse: 'n'/22 HalfReuse: 'o'/23 HalfReuse: 't'/37 } Tile{ HalfReuse: ' '/7 }"have content"/58 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[58], context[59], "have content", 12);
        refalrts::update_name(context[4], functions[efunc_ErrorAt]);
        refalrts::reinit_char(context[24], 'S');
        refalrts::reinit_char(context[13], 'e');
        refalrts::reinit_char(context[14], 't');
        refalrts::reinit_char(context[17], ' ');
        refalrts::reinit_char(context[8], ':');
        refalrts::reinit_char(context[18], ':');
        refalrts::reinit_char(context[21], ' ');
        refalrts::reinit_char(context[22], 'n');
        refalrts::reinit_char(context[23], 'o');
        refalrts::reinit_char(context[37], 't');
        refalrts::reinit_char(context[7], ' ');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[58], context[59] );
        res = refalrts::splice_elem( res, context[7] );
        res = refalrts::splice_evar( res, context[18], context[37] );
        res = refalrts::splice_evar( res, context[50], context[51] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[14], context[17] );
        res = refalrts::splice_elem( res, context[13] );
        res = refalrts::splice_evar( res, context[38], context[24] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/50 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/52 )/14 (/17 e.RuleNames#1/54 )/18 (/21 e.Body#2/56 )/22 (/23 # TDot/37 t.SrcPos#2/38 )/24 e.Tail#2/58 >/1
      context[50] = context[40];
      context[51] = context[41];
      context[52] = context[42];
      context[53] = context[43];
      context[54] = context[44];
      context[55] = context[45];
      context[56] = context[46];
      context[57] = context[47];
      context[58] = context[48];
      context[59] = context[49];
      // closed e.Name#1 as range 50
      // closed e.SetNames#1 as range 52
      // closed e.RuleNames#1 as range 54
      // closed e.Body#2 as range 56
      // closed e.Tail#2 as range 58
      //DEBUG: t.SetNamePos#1: 9
      //DEBUG: t.SrcPos#2: 38
      //DEBUG: e.Name#1: 50
      //DEBUG: e.SetNames#1: 52
      //DEBUG: e.RuleNames#1: 54
      //DEBUG: e.Body#2: 56
      //DEBUG: e.Tail#2: 58

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/38 )/24 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Set/4 } Tile{ AsIs: t.SetNamePos#1/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Name#1/50 } Tile{ HalfReuse: )/21 AsIs: e.Body#2/56 AsIs: )/22 HalfReuse: </23 HalfReuse: & ParseElements/37 } Tile{ AsIs: (/13 AsIs: e.SetNames#1/52 AsIs: )/14 AsIs: (/17 AsIs: e.RuleNames#1/54 AsIs: )/18 } Tile{ AsIs: e.Tail#2/58 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Set]);
      refalrts::reinit_close_bracket(context[21]);
      refalrts::reinit_open_call(context[23]);
      refalrts::reinit_name(context[37], functions[efunc_ParseElements]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[0], context[22] );
      refalrts::link_brackets( context[7], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_evar( res, context[13], context[18] );
      res = refalrts::splice_evar( res, context[21], context[37] );
      res = refalrts::splice_evar( res, context[50], context[51] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/40 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/42 )/14 (/17 e.RuleNames#1/44 )/18 (/21 e.Body#2/46 )/22 (/23 s.Type#1/37 t.0#0/38 e.1#0/48 )/24 e.Tail#2/50 >/1
    context[40] = context[25];
    context[41] = context[26];
    context[42] = context[27];
    context[43] = context[28];
    context[44] = context[29];
    context[45] = context[30];
    context[46] = context[31];
    context[47] = context[32];
    context[48] = context[35];
    context[49] = context[36];
    context[50] = context[33];
    context[51] = context[34];
    // closed e.Name#1 as range 40
    // closed e.SetNames#1 as range 42
    // closed e.RuleNames#1 as range 44
    // closed e.Body#2 as range 46
    // closed e.1#0 as range 48
    // closed e.Tail#2 as range 50
    //DEBUG: t.SetNamePos#1: 9
    //DEBUG: t.0#0: 38
    //DEBUG: s.Type#1: 37
    //DEBUG: e.Name#1: 40
    //DEBUG: e.SetNames#1: 42
    //DEBUG: e.RuleNames#1: 44
    //DEBUG: e.Body#2: 46
    //DEBUG: e.1#0: 48
    //DEBUG: e.Tail#2: 50

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.Name#1/40 {REMOVED TILE} t.SetNamePos#1/9 {REMOVED TILE} e.SetNames#1/42 {REMOVED TILE} e.RuleNames#1/44 {REMOVED TILE} e.Body#2/46 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Tail#2/50 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.0#0/38 } Tile{ HalfReuse: 'U'/14 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'e'/18 HalfReuse: 'x'/21 } Tile{ HalfReuse: 'p'/13 } Tile{ HalfReuse: 'e'/24 } Tile{ HalfReuse: 'c'/8 } Tile{ HalfReuse: 't'/7 }"ed "/52 Tile{ HalfReuse: </22 HalfReuse: & DFA-TextFromToken/23 AsIs: s.Type#1/37 } Tile{ AsIs: e.1#0/48 } >/54" expected dot at end of set"/55 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[52], context[53], "ed ", 3);
    refalrts::alloc_close_call(vm, context[54]);
    refalrts::alloc_chars(vm, context[55], context[56], " expected dot at end of set", 27);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[14], 'U');
    refalrts::reinit_char(context[17], 'n');
    refalrts::reinit_char(context[18], 'e');
    refalrts::reinit_char(context[21], 'x');
    refalrts::reinit_char(context[13], 'p');
    refalrts::reinit_char(context[24], 'e');
    refalrts::reinit_char(context[8], 'c');
    refalrts::reinit_char(context[7], 't');
    refalrts::reinit_open_call(context[22]);
    refalrts::reinit_name(context[23], functions[efunc_DFAm_TextFromToken]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[54] );
    refalrts::push_stack( vm, context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[54], context[56] );
    res = refalrts::splice_evar( res, context[48], context[49] );
    res = refalrts::splice_evar( res, context[22], context[37] );
    res = refalrts::splice_evar( res, context[52], context[53] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[18], context[21] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/5 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 t.Unexpected#2/23 e.Tail#2/2 >/1
  // closed e.Name#1 as range 5
  // closed e.SetNames#1 as range 11
  // closed e.RuleNames#1 as range 15
  // closed e.Body#2 as range 19
  // closed e.Tail#2 as range 2
  //DEBUG: t.SetNamePos#1: 9
  //DEBUG: t.Unexpected#2: 23
  //DEBUG: e.Name#1: 5
  //DEBUG: e.SetNames#1: 11
  //DEBUG: e.RuleNames#1: 15
  //DEBUG: e.Body#2: 19
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Name#1/5 {REMOVED TILE} t.SetNamePos#1/9 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} e.Body#2/19 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken*1/4 } Tile{ AsIs: t.Unexpected#2/23 } Tile{ HalfReuse: 'd'/14 HalfReuse: 'o'/17 } Tile{ HalfReuse: 't'/18 HalfReuse: ' '/21 } Tile{ HalfReuse: 'a'/22 } Tile{ HalfReuse: 't'/13 } Tile{ HalfReuse: ' '/8 } Tile{ HalfReuse: 'e'/7 }"nd of set"/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[25], context[26], "nd of set", 9);
  refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
  refalrts::reinit_char(context[14], 'd');
  refalrts::reinit_char(context[17], 'o');
  refalrts::reinit_char(context[18], 't');
  refalrts::reinit_char(context[21], ' ');
  refalrts::reinit_char(context[22], 'a');
  refalrts::reinit_char(context[13], 't');
  refalrts::reinit_char(context[8], ' ');
  refalrts::reinit_char(context[7], 'e');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSetDescr_S1L1("ParseSetDescr$1\\1", COOKIE1_, COOKIE2_, func_gen_ParseSetDescr_S1L1);


static refalrts::FnResult func_ParseSetDescr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 72 elems
  refalrts::Iter context[72];
  refalrts::zeros( context, 72 );
  // </0 & ParseSetDescr/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSetDescr/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 (/17 e.new#4/15 )/18 t.new#5/19 e.new#6/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.new#4 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 2
  do {
    // </0 & ParseSetDescr/4 (/7 e.new#12/21 )/8 (/11 e.new#13/23 )/12 t.new#7/13 (/17 e.new#14/25 )/18 (/19 s.new#8/31 t.new#9/32 e.new#10/29 )/20 e.new#11/27 >/1
    context[21] = context[5];
    context[22] = context[6];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[15];
    context[26] = context[16];
    context[27] = context[2];
    context[28] = context[3];
    context[29] = 0;
    context[30] = 0;
    if( ! refalrts::brackets_term( context[29], context[30], context[19] ) )
      continue;
    // closed e.new#12 as range 21
    // closed e.new#13 as range 23
    // closed e.new#14 as range 25
    // closed e.new#11 as range 27
    if( ! refalrts::svar_left( context[31], context[29], context[30] ) )
      continue;
    context[33] = refalrts::tvar_left( context[32], context[29], context[30] );
    if( ! context[33] )
      continue;
    // closed e.new#10 as range 29
    do {
      // </0 & ParseSetDescr/4 (/7 e.new#18/34 )/8 (/11 e.new#19/36 )/12 t.new#15/13 (/17 e.new#20/38 )/18 (/19 # TEquals/31 t.new#16/32 )/20 e.new#17/40 >/1
      context[34] = context[21];
      context[35] = context[22];
      context[36] = context[23];
      context[37] = context[24];
      context[38] = context[25];
      context[39] = context[26];
      context[40] = context[27];
      context[41] = context[28];
      if( ! refalrts::ident_term( identifiers[ident_TEquals], context[31] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      // closed e.new#18 as range 34
      // closed e.new#19 as range 36
      // closed e.new#20 as range 38
      // closed e.new#17 as range 40
      do {
        // </0 & ParseSetDescr/4 (/7 e.new#27/42 )/8 (/11 e.new#28/44 )/12 t.new#21/13 (/17 e.new#29/46 )/18 (/19 # TEquals/31 t.new#22/32 )/20 (/52 s.new#23/54 t.new#24/55 e.new#25/50 )/53 e.new#26/48 >/1
        context[42] = context[34];
        context[43] = context[35];
        context[44] = context[36];
        context[45] = context[37];
        context[46] = context[38];
        context[47] = context[39];
        context[48] = context[40];
        context[49] = context[41];
        context[50] = 0;
        context[51] = 0;
        context[52] = refalrts::brackets_left( context[50], context[51], context[48], context[49] );
        if( ! context[52] )
          continue;
        refalrts::bracket_pointers(context[52], context[53]);
        // closed e.new#27 as range 42
        // closed e.new#28 as range 44
        // closed e.new#29 as range 46
        // closed e.new#26 as range 48
        if( ! refalrts::svar_left( context[54], context[50], context[51] ) )
          continue;
        context[56] = refalrts::tvar_left( context[55], context[50], context[51] );
        if( ! context[56] )
          continue;
        // closed e.new#25 as range 50
        do {
          // </0 & ParseSetDescr/4 (/7 e.SetNames#1/57 )/8 (/11 e.RuleNames#1/59 )/12 t.SetNamePos#1/13 (/17 e.Name#1/61 )/18 (/19 # TEquals/31 t.SrcPos#1/32 )/20 (/52 # TLiteral/54 t.1#0/55 e.2#0/63 )/53 e.#0/65 >/1
          context[57] = context[42];
          context[58] = context[43];
          context[59] = context[44];
          context[60] = context[45];
          context[61] = context[46];
          context[62] = context[47];
          context[63] = context[50];
          context[64] = context[51];
          context[65] = context[48];
          context[66] = context[49];
          if( ! refalrts::ident_term( identifiers[ident_TLiteral], context[54] ) )
            continue;
          // closed e.SetNames#1 as range 57
          // closed e.RuleNames#1 as range 59
          // closed e.Name#1 as range 61
          // closed e.2#0 as range 63
          // closed e.#0 as range 65
          //DEBUG: t.SetNamePos#1: 13
          //DEBUG: t.SrcPos#1: 32
          //DEBUG: t.1#0: 55
          //DEBUG: e.SetNames#1: 57
          //DEBUG: e.RuleNames#1: 59
          //DEBUG: e.Name#1: 61
          //DEBUG: e.2#0: 63
          //DEBUG: e.#0: 65

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/32 {REMOVED TILE} t.1#0/55 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ HalfReuse: </19 HalfReuse: & ExtractSets/31 } Tile{ HalfReuse: (/20 AsIs: (/52 Reuse: # Chars/54 } Tile{ AsIs: e.2#0/63 } )/67 Tile{ AsIs: )/53 AsIs: e.#0/65 AsIs: >/1 } [*]/68 & ParseSetDescr$1\1/69 Tile{ AsIs: (/17 AsIs: e.Name#1/61 AsIs: )/18 } Tile{ AsIs: t.SetNamePos#1/13 } Tile{ AsIs: (/7 AsIs: e.SetNames#1/57 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/59 AsIs: )/12 } {*}/70 >/71 Tile{ ]] }
          refalrts::alloc_close_bracket(vm, context[67]);
          refalrts::alloc_closure_head(vm, context[68]);
          refalrts::alloc_name(vm, context[69], functions[efunc_gen_ParseSetDescr_S1L1]);
          refalrts::alloc_unwrapped_closure(vm, context[70], context[68]);
          refalrts::alloc_close_call(vm, context[71]);
          refalrts::update_name(context[4], functions[efunc_Fetch]);
          refalrts::reinit_open_call(context[19]);
          refalrts::reinit_name(context[31], functions[efunc_ExtractSets]);
          refalrts::reinit_open_bracket(context[20]);
          refalrts::update_ident(context[54], identifiers[ident_Chars]);
          refalrts::push_stack( vm, context[71] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[17], context[18] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[19] );
          refalrts::link_brackets( context[20], context[53] );
          refalrts::link_brackets( context[52], context[67] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[70], context[71] );
          res = refalrts::splice_evar( res, context[7], context[12] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          res = refalrts::splice_evar( res, context[17], context[18] );
          res = refalrts::splice_evar( res, context[68], context[69] );
          res = refalrts::splice_evar( res, context[53], context[1] );
          res = refalrts::splice_elem( res, context[67] );
          res = refalrts::splice_evar( res, context[63], context[64] );
          res = refalrts::splice_evar( res, context[20], context[54] );
          res = refalrts::splice_evar( res, context[19], context[31] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          refalrts::wrap_closure( context[70] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & ParseSetDescr/4 (/7 e.SetNames#1/57 )/8 (/11 e.RuleNames#1/59 )/12 t.SetNamePos#1/13 (/17 e.Name#1/61 )/18 (/19 # TEquals/31 t.SrcPos#1/32 )/20 (/52 # TSetName/54 t.1#0/55 e.2#0/63 )/53 e.#0/65 >/1
        context[57] = context[42];
        context[58] = context[43];
        context[59] = context[44];
        context[60] = context[45];
        context[61] = context[46];
        context[62] = context[47];
        context[63] = context[50];
        context[64] = context[51];
        context[65] = context[48];
        context[66] = context[49];
        if( ! refalrts::ident_term( identifiers[ident_TSetName], context[54] ) )
          continue;
        // closed e.SetNames#1 as range 57
        // closed e.RuleNames#1 as range 59
        // closed e.Name#1 as range 61
        // closed e.2#0 as range 63
        // closed e.#0 as range 65
        //DEBUG: t.SetNamePos#1: 13
        //DEBUG: t.SrcPos#1: 32
        //DEBUG: t.1#0: 55
        //DEBUG: e.SetNames#1: 57
        //DEBUG: e.RuleNames#1: 59
        //DEBUG: e.Name#1: 61
        //DEBUG: e.2#0: 63
        //DEBUG: e.#0: 65

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/32 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ HalfReuse: </19 HalfReuse: & ExtractSets/31 } Tile{ HalfReuse: (/20 AsIs: (/52 Reuse: # Set/54 AsIs: t.1#0/55 AsIs: e.2#0/63 AsIs: )/53 } )/67 Tile{ AsIs: e.#0/65 } >/68 [*]/69 & ParseSetDescr$1\1/70 Tile{ AsIs: (/17 AsIs: e.Name#1/61 AsIs: )/18 } Tile{ AsIs: t.SetNamePos#1/13 } Tile{ AsIs: (/7 AsIs: e.SetNames#1/57 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/59 AsIs: )/12 } {*}/71 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[67]);
        refalrts::alloc_close_call(vm, context[68]);
        refalrts::alloc_closure_head(vm, context[69]);
        refalrts::alloc_name(vm, context[70], functions[efunc_gen_ParseSetDescr_S1L1]);
        refalrts::alloc_unwrapped_closure(vm, context[71], context[69]);
        refalrts::update_name(context[4], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[19]);
        refalrts::reinit_name(context[31], functions[efunc_ExtractSets]);
        refalrts::reinit_open_bracket(context[20]);
        refalrts::update_ident(context[54], identifiers[ident_Set]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[17], context[18] );
        refalrts::push_stack( vm, context[68] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[20], context[67] );
        refalrts::link_brackets( context[52], context[53] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_elem( res, context[71] );
        res = refalrts::splice_evar( res, context[7], context[12] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[68], context[70] );
        res = refalrts::splice_evar( res, context[65], context[66] );
        res = refalrts::splice_elem( res, context[67] );
        res = refalrts::splice_evar( res, context[20], context[53] );
        res = refalrts::splice_evar( res, context[19], context[31] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        refalrts::wrap_closure( context[71] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseSetDescr/4 (/7 e.SetNames#1/42 )/8 (/11 e.RuleNames#1/44 )/12 t.SetNamePos#1/13 (/17 e.Name#1/46 )/18 (/19 # TEquals/31 t.SrcPos#1/32 )/20 e.Tail#1/48 >/1
      context[42] = context[34];
      context[43] = context[35];
      context[44] = context[36];
      context[45] = context[37];
      context[46] = context[38];
      context[47] = context[39];
      context[48] = context[40];
      context[49] = context[41];
      // closed e.SetNames#1 as range 42
      // closed e.RuleNames#1 as range 44
      // closed e.Name#1 as range 46
      // closed e.Tail#1 as range 48
      //DEBUG: t.SetNamePos#1: 13
      //DEBUG: t.SrcPos#1: 32
      //DEBUG: e.SetNames#1: 42
      //DEBUG: e.RuleNames#1: 44
      //DEBUG: e.Name#1: 46
      //DEBUG: e.Tail#1: 48

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/32 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: (/19 } Tile{ AsIs: )/20 AsIs: e.Tail#1/48 HalfReuse: [*]/1 } & ParseSetDescr$1\1/50 Tile{ AsIs: (/17 AsIs: e.Name#1/46 AsIs: )/18 } Tile{ AsIs: t.SetNamePos#1/13 } Tile{ AsIs: (/7 AsIs: e.SetNames#1/42 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/44 AsIs: )/12 } Tile{ HalfReuse: {*}/31 } >/51 Tile{ ]] }
      refalrts::alloc_name(vm, context[50], functions[efunc_gen_ParseSetDescr_S1L1]);
      refalrts::alloc_close_call(vm, context[51]);
      refalrts::update_name(context[4], functions[efunc_Fetch]);
      refalrts::reinit_closure_head(context[1]);
      refalrts::reinit_unwrapped_closure(context[31], context[1]);
      refalrts::push_stack( vm, context[51] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_elem( res, context[51] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_evar( res, context[20], context[1] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      refalrts::wrap_closure( context[31] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSetDescr/4 (/7 e.SetNames#1/34 )/8 (/11 e.RuleNames#1/36 )/12 t.SetNamePos#1/13 (/17 e.Name#1/38 )/18 (/19 s.Type#1/31 t.0#0/32 e.1#0/40 )/20 e.Tail#1/42 >/1
    context[34] = context[21];
    context[35] = context[22];
    context[36] = context[23];
    context[37] = context[24];
    context[38] = context[25];
    context[39] = context[26];
    context[40] = context[29];
    context[41] = context[30];
    context[42] = context[27];
    context[43] = context[28];
    // closed e.SetNames#1 as range 34
    // closed e.RuleNames#1 as range 36
    // closed e.Name#1 as range 38
    // closed e.1#0 as range 40
    // closed e.Tail#1 as range 42
    //DEBUG: t.SetNamePos#1: 13
    //DEBUG: t.0#0: 32
    //DEBUG: s.Type#1: 31
    //DEBUG: e.SetNames#1: 34
    //DEBUG: e.RuleNames#1: 36
    //DEBUG: e.Name#1: 38
    //DEBUG: e.1#0: 40
    //DEBUG: e.Tail#1: 42

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/34 {REMOVED TILE} e.RuleNames#1/36 {REMOVED TILE} t.SetNamePos#1/13 {REMOVED TILE} e.Name#1/38 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Tail#1/42 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.0#0/32 } Tile{ HalfReuse: 'U'/17 } Tile{ HalfReuse: 'n'/12 } Tile{ HalfReuse: 'e'/8 HalfReuse: 'x'/11 } Tile{ HalfReuse: 'p'/20 } Tile{ HalfReuse: 'e'/7 }"cted "/44 Tile{ HalfReuse: </18 HalfReuse: & DFA-TextFromToken/19 AsIs: s.Type#1/31 } Tile{ AsIs: e.1#0/40 } >/46" expected \"=\""/47 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[44], context[45], "cted ", 5);
    refalrts::alloc_close_call(vm, context[46]);
    refalrts::alloc_chars(vm, context[47], context[48], " expected \"=\"", 13);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[17], 'U');
    refalrts::reinit_char(context[12], 'n');
    refalrts::reinit_char(context[8], 'e');
    refalrts::reinit_char(context[11], 'x');
    refalrts::reinit_char(context[20], 'p');
    refalrts::reinit_char(context[7], 'e');
    refalrts::reinit_open_call(context[18]);
    refalrts::reinit_name(context[19], functions[efunc_DFAm_TextFromToken]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[46] );
    refalrts::push_stack( vm, context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[46], context[48] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[18], context[31] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSetDescr/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 )/18 t.Unexpected#1/19 e.Tail#1/2 >/1
  // closed e.SetNames#1 as range 5
  // closed e.RuleNames#1 as range 9
  // closed e.Name#1 as range 15
  // closed e.Tail#1 as range 2
  //DEBUG: t.SetNamePos#1: 13
  //DEBUG: t.Unexpected#1: 19
  //DEBUG: e.SetNames#1: 5
  //DEBUG: e.RuleNames#1: 9
  //DEBUG: e.Name#1: 15
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken*1/4 } Tile{ AsIs: t.Unexpected#1/19 } Tile{ HalfReuse: '\"'/8 HalfReuse: '='/11 } Tile{ HalfReuse: '\"'/18 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
  refalrts::reinit_char(context[8], '\"');
  refalrts::reinit_char(context[11], '=');
  refalrts::reinit_char(context[18], '\"');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseSetDescr("ParseSetDescr", COOKIE1_, COOKIE2_, func_ParseSetDescr);


static refalrts::FnResult func_ExtractSets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & ExtractSets/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractSets/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ExtractSets/4 (/7 e.new#7/9 )/8 (/15 s.new#3/17 t.new#4/18 e.new#5/13 )/16 e.new#6/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.new#7 as range 9
    // closed e.new#6 as range 11
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.new#5 as range 13
    do {
      // </0 & ExtractSets/4 (/7 e.Found#1/20 )/8 (/15 # TLiteral/17 t.SrcPos#1/18 e.Content#1/22 )/16 e.Tail#1/24 >/1
      context[20] = context[9];
      context[21] = context[10];
      context[22] = context[13];
      context[23] = context[14];
      context[24] = context[11];
      context[25] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_TLiteral], context[17] ) )
        continue;
      // closed e.Found#1 as range 20
      // closed e.Content#1 as range 22
      // closed e.Tail#1 as range 24
      //DEBUG: t.SrcPos#1: 18
      //DEBUG: e.Found#1: 20
      //DEBUG: e.Content#1: 22
      //DEBUG: e.Tail#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/18 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/20 HalfReuse: (/8 HalfReuse: # Chars/15 } Tile{ AsIs: e.Content#1/22 } Tile{ HalfReuse: )/17 } Tile{ AsIs: )/16 AsIs: e.Tail#1/24 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[15], identifiers[ident_Chars]);
      refalrts::reinit_close_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[16] );
      refalrts::link_brackets( context[8], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractSets/4 (/7 e.Found#1/20 )/8 (/15 # TSetName/17 t.SrcPos#1/18 e.Name#1/22 )/16 e.Tail#1/24 >/1
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[11];
    context[25] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_TSetName], context[17] ) )
      continue;
    // closed e.Found#1 as range 20
    // closed e.Name#1 as range 22
    // closed e.Tail#1 as range 24
    //DEBUG: t.SrcPos#1: 18
    //DEBUG: e.Found#1: 20
    //DEBUG: e.Name#1: 22
    //DEBUG: e.Tail#1: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/20 HalfReuse: (/8 HalfReuse: # Set/15 } Tile{ AsIs: t.SrcPos#1/18 } Tile{ AsIs: e.Name#1/22 } Tile{ HalfReuse: )/17 } Tile{ AsIs: )/16 AsIs: e.Tail#1/24 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_ident(context[15], identifiers[ident_Set]);
    refalrts::reinit_close_bracket(context[17]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[8], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 e.OtherTail#1/2 >/1
  // closed e.Found#1 as range 5
  // closed e.OtherTail#1 as range 2
  //DEBUG: e.Found#1: 5
  //DEBUG: e.OtherTail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractSets/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ AsIs: e.OtherTail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractSets("ExtractSets", COOKIE1_, COOKIE2_, func_ExtractSets);


static refalrts::FnResult func_gen_ParseSentence_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 57 elems
  refalrts::Iter context[57];
  refalrts::zeros( context, 57 );
  // </0 & ParseSentence$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSentence$1\1/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 (/17 e.new#4/15 )/18 (/21 e.new#5/19 )/22 t.new#6/23 e.new#7/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
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
  // closed e.new#2 as range 7
  // closed e.new#3 as range 11
  // closed e.new#4 as range 15
  // closed e.new#5 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 2
  do {
    // </0 & ParseSentence$1\1/4 t.new#8/5 (/9 e.new#13/25 )/10 (/13 e.new#14/27 )/14 (/17 e.new#15/29 )/18 (/21 e.new#16/31 )/22 (/23 s.new#9/37 t.new#10/38 e.new#11/35 )/24 e.new#12/33 >/1
    context[25] = context[7];
    context[26] = context[8];
    context[27] = context[11];
    context[28] = context[12];
    context[29] = context[15];
    context[30] = context[16];
    context[31] = context[19];
    context[32] = context[20];
    context[33] = context[2];
    context[34] = context[3];
    context[35] = 0;
    context[36] = 0;
    if( ! refalrts::brackets_term( context[35], context[36], context[23] ) )
      continue;
    // closed e.new#13 as range 25
    // closed e.new#14 as range 27
    // closed e.new#15 as range 29
    // closed e.new#16 as range 31
    // closed e.new#12 as range 33
    if( ! refalrts::svar_left( context[37], context[35], context[36] ) )
      continue;
    context[39] = refalrts::tvar_left( context[38], context[35], context[36] );
    if( ! context[39] )
      continue;
    // closed e.new#11 as range 35
    do {
      // </0 & ParseSentence$1\1/4 t.SentNamePos#1/5 (/9 e.Name#1/40 )/10 (/13 e.SetNames#1/42 )/14 (/17 e.RuleNames#1/44 )/18 (/21 e.Body#2/46 )/22 (/23 # TDot/37 t.SrcPos#2/38 )/24 e.Tail#2/48 >/1
      context[40] = context[25];
      context[41] = context[26];
      context[42] = context[27];
      context[43] = context[28];
      context[44] = context[29];
      context[45] = context[30];
      context[46] = context[31];
      context[47] = context[32];
      context[48] = context[33];
      context[49] = context[34];
      if( ! refalrts::ident_term( identifiers[ident_TDot], context[37] ) )
        continue;
      if( ! refalrts::empty_seq( context[35], context[36] ) )
        continue;
      // closed e.Name#1 as range 40
      // closed e.SetNames#1 as range 42
      // closed e.RuleNames#1 as range 44
      // closed e.Body#2 as range 46
      // closed e.Tail#2 as range 48
      //DEBUG: t.SentNamePos#1: 5
      //DEBUG: t.SrcPos#2: 38
      //DEBUG: e.Name#1: 40
      //DEBUG: e.SetNames#1: 42
      //DEBUG: e.RuleNames#1: 44
      //DEBUG: e.Body#2: 46
      //DEBUG: e.Tail#2: 48

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TDot/37 t.SrcPos#2/38 )/24 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Sentence/4 AsIs: t.SentNamePos#1/5 AsIs: (/9 } Tile{ AsIs: e.Name#1/40 } Tile{ HalfReuse: )/21 AsIs: e.Body#2/46 AsIs: )/22 HalfReuse: </23 } Tile{ HalfReuse: & ParseElements/10 AsIs: (/13 AsIs: e.SetNames#1/42 AsIs: )/14 AsIs: (/17 AsIs: e.RuleNames#1/44 AsIs: )/18 } Tile{ AsIs: e.Tail#2/48 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Sentence]);
      refalrts::reinit_close_bracket(context[21]);
      refalrts::reinit_open_call(context[23]);
      refalrts::reinit_name(context[10], functions[efunc_ParseElements]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[0], context[22] );
      refalrts::link_brackets( context[9], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[48], context[49] );
      res = refalrts::splice_evar( res, context[10], context[18] );
      res = refalrts::splice_evar( res, context[21], context[23] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSentence$1\1/4 t.SentNamePos#1/5 (/9 e.Name#1/40 )/10 (/13 e.SetNames#1/42 )/14 (/17 e.RuleNames#1/44 )/18 (/21 e.Body#2/46 )/22 (/23 s.Type#1/37 t.0#0/38 e.1#0/48 )/24 e.Tail#2/50 >/1
    context[40] = context[25];
    context[41] = context[26];
    context[42] = context[27];
    context[43] = context[28];
    context[44] = context[29];
    context[45] = context[30];
    context[46] = context[31];
    context[47] = context[32];
    context[48] = context[35];
    context[49] = context[36];
    context[50] = context[33];
    context[51] = context[34];
    // closed e.Name#1 as range 40
    // closed e.SetNames#1 as range 42
    // closed e.RuleNames#1 as range 44
    // closed e.Body#2 as range 46
    // closed e.1#0 as range 48
    // closed e.Tail#2 as range 50
    //DEBUG: t.SentNamePos#1: 5
    //DEBUG: t.0#0: 38
    //DEBUG: s.Type#1: 37
    //DEBUG: e.Name#1: 40
    //DEBUG: e.SetNames#1: 42
    //DEBUG: e.RuleNames#1: 44
    //DEBUG: e.Body#2: 46
    //DEBUG: e.1#0: 48
    //DEBUG: e.Tail#2: 50

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.SentNamePos#1/5 {REMOVED TILE} e.Name#1/40 {REMOVED TILE} e.SetNames#1/42 {REMOVED TILE} e.RuleNames#1/44 {REMOVED TILE} e.Body#2/46 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Tail#2/50 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.0#0/38 } Tile{ HalfReuse: 'U'/14 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'e'/18 HalfReuse: 'x'/21 } Tile{ HalfReuse: 'p'/10 HalfReuse: 'e'/13 } Tile{ HalfReuse: 'c'/24 } Tile{ HalfReuse: 't'/9 }"ed "/52 Tile{ HalfReuse: </22 HalfReuse: & DFA-TextFromToken/23 AsIs: s.Type#1/37 } Tile{ AsIs: e.1#0/48 } >/54" expected end of sentence"/55 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[52], context[53], "ed ", 3);
    refalrts::alloc_close_call(vm, context[54]);
    refalrts::alloc_chars(vm, context[55], context[56], " expected end of sentence", 25);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[14], 'U');
    refalrts::reinit_char(context[17], 'n');
    refalrts::reinit_char(context[18], 'e');
    refalrts::reinit_char(context[21], 'x');
    refalrts::reinit_char(context[10], 'p');
    refalrts::reinit_char(context[13], 'e');
    refalrts::reinit_char(context[24], 'c');
    refalrts::reinit_char(context[9], 't');
    refalrts::reinit_open_call(context[22]);
    refalrts::reinit_name(context[23], functions[efunc_DFAm_TextFromToken]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[54] );
    refalrts::push_stack( vm, context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[54], context[56] );
    res = refalrts::splice_evar( res, context[48], context[49] );
    res = refalrts::splice_evar( res, context[22], context[37] );
    res = refalrts::splice_evar( res, context[52], context[53] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[18], context[21] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSentence$1\1/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 t.Unexpected#2/23 e.Tail#2/2 >/1
  // closed e.Name#1 as range 7
  // closed e.SetNames#1 as range 11
  // closed e.RuleNames#1 as range 15
  // closed e.Body#2 as range 19
  // closed e.Tail#2 as range 2
  //DEBUG: t.SentNamePos#1: 5
  //DEBUG: t.Unexpected#2: 23
  //DEBUG: e.Name#1: 7
  //DEBUG: e.SetNames#1: 11
  //DEBUG: e.RuleNames#1: 15
  //DEBUG: e.Body#2: 19
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.SentNamePos#1/5 {REMOVED TILE} e.Name#1/7 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} e.Body#2/19 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken*1/4 } Tile{ AsIs: t.Unexpected#2/23 } Tile{ HalfReuse: 'e'/14 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'd'/18 HalfReuse: ' '/21 } Tile{ HalfReuse: 'o'/10 HalfReuse: 'f'/13 } Tile{ HalfReuse: ' '/22 } Tile{ HalfReuse: 's'/9 }"entence"/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[25], context[26], "entence", 7);
  refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
  refalrts::reinit_char(context[14], 'e');
  refalrts::reinit_char(context[17], 'n');
  refalrts::reinit_char(context[18], 'd');
  refalrts::reinit_char(context[21], ' ');
  refalrts::reinit_char(context[10], 'o');
  refalrts::reinit_char(context[13], 'f');
  refalrts::reinit_char(context[22], ' ');
  refalrts::reinit_char(context[9], 's');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_S1L1("ParseSentence$1\\1", COOKIE1_, COOKIE2_, func_gen_ParseSentence_S1L1);


static refalrts::FnResult func_ParseSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  // </0 & ParseSentence/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSentence/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 (/17 e.new#4/15 )/18 t.new#5/19 e.new#6/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.new#4 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 2
  do {
    // </0 & ParseSentence/4 (/7 e.new#12/21 )/8 (/11 e.new#13/23 )/12 t.new#7/13 (/17 e.new#14/25 )/18 (/19 s.new#8/31 t.new#9/32 e.new#10/29 )/20 e.new#11/27 >/1
    context[21] = context[5];
    context[22] = context[6];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[15];
    context[26] = context[16];
    context[27] = context[2];
    context[28] = context[3];
    context[29] = 0;
    context[30] = 0;
    if( ! refalrts::brackets_term( context[29], context[30], context[19] ) )
      continue;
    // closed e.new#12 as range 21
    // closed e.new#13 as range 23
    // closed e.new#14 as range 25
    // closed e.new#11 as range 27
    if( ! refalrts::svar_left( context[31], context[29], context[30] ) )
      continue;
    context[33] = refalrts::tvar_left( context[32], context[29], context[30] );
    if( ! context[33] )
      continue;
    // closed e.new#10 as range 29
    do {
      // </0 & ParseSentence/4 (/7 e.SetNames#1/34 )/8 (/11 e.RuleNames#1/36 )/12 t.SentNamePos#1/13 (/17 e.Name#1/38 )/18 (/19 # TEquals/31 t.SrcPos#1/32 )/20 e.Tail#1/40 >/1
      context[34] = context[21];
      context[35] = context[22];
      context[36] = context[23];
      context[37] = context[24];
      context[38] = context[25];
      context[39] = context[26];
      context[40] = context[27];
      context[41] = context[28];
      if( ! refalrts::ident_term( identifiers[ident_TEquals], context[31] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      // closed e.SetNames#1 as range 34
      // closed e.RuleNames#1 as range 36
      // closed e.Name#1 as range 38
      // closed e.Tail#1 as range 40
      //DEBUG: t.SentNamePos#1: 13
      //DEBUG: t.SrcPos#1: 32
      //DEBUG: e.SetNames#1: 34
      //DEBUG: e.RuleNames#1: 36
      //DEBUG: e.Name#1: 38
      //DEBUG: e.Tail#1: 40

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/32 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } & Fetch/42 Tile{ HalfReuse: </20 } & Fetch/43 Tile{ AsIs: e.Tail#1/40 } </44 Tile{ HalfReuse: & Pipe/18 HalfReuse: & ExtractAlternatives\1/19 HalfReuse: & ExtractAlternatives\2/31 } & ExtractAlternatives\3/45 & ExtractAlternatives\4/46 & ExtractAlternatives\5/47 & ExtractAlternatives\6@1/48 >/49 >/50 [*]/51 & ParseSentence$1\1/52 Tile{ AsIs: t.SentNamePos#1/13 AsIs: (/17 } Tile{ AsIs: e.Name#1/38 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.SetNames#1/34 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/36 AsIs: )/12 } {*}/53 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[42], functions[efunc_Fetch]);
      refalrts::alloc_name(vm, context[43], functions[efunc_Fetch]);
      refalrts::alloc_open_call(vm, context[44]);
      refalrts::alloc_name(vm, context[45], functions[efunc_gen_ExtractAlternatives_L3]);
      refalrts::alloc_name(vm, context[46], functions[efunc_gen_ExtractAlternatives_L4]);
      refalrts::alloc_name(vm, context[47], functions[efunc_gen_ExtractAlternatives_L5]);
      refalrts::alloc_name(vm, context[48], functions[efunc_gen_ExtractAlternatives_L6Z1]);
      refalrts::alloc_close_call(vm, context[49]);
      refalrts::alloc_close_call(vm, context[50]);
      refalrts::alloc_closure_head(vm, context[51]);
      refalrts::alloc_name(vm, context[52], functions[efunc_gen_ParseSentence_S1L1]);
      refalrts::alloc_unwrapped_closure(vm, context[53], context[51]);
      refalrts::reinit_open_call(context[20]);
      refalrts::reinit_name(context[18], functions[efunc_Pipe]);
      refalrts::reinit_name(context[19], functions[efunc_gen_ExtractAlternatives_L1]);
      refalrts::reinit_name(context[31], functions[efunc_gen_ExtractAlternatives_L2]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[17], context[4] );
      refalrts::push_stack( vm, context[50] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[49] );
      refalrts::push_stack( vm, context[44] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_evar( res, context[4], context[12] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      res = refalrts::splice_evar( res, context[45], context[52] );
      res = refalrts::splice_evar( res, context[18], context[31] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[42] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      refalrts::wrap_closure( context[53] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSentence/4 (/7 e.SetNames#1/34 )/8 (/11 e.RuleNames#1/36 )/12 t.SentNamePos#1/13 (/17 e.Name#1/38 )/18 (/19 s.Type#1/31 t.0#0/32 e.1#0/40 )/20 e.Tail#1/42 >/1
    context[34] = context[21];
    context[35] = context[22];
    context[36] = context[23];
    context[37] = context[24];
    context[38] = context[25];
    context[39] = context[26];
    context[40] = context[29];
    context[41] = context[30];
    context[42] = context[27];
    context[43] = context[28];
    // closed e.SetNames#1 as range 34
    // closed e.RuleNames#1 as range 36
    // closed e.Name#1 as range 38
    // closed e.1#0 as range 40
    // closed e.Tail#1 as range 42
    //DEBUG: t.SentNamePos#1: 13
    //DEBUG: t.0#0: 32
    //DEBUG: s.Type#1: 31
    //DEBUG: e.SetNames#1: 34
    //DEBUG: e.RuleNames#1: 36
    //DEBUG: e.Name#1: 38
    //DEBUG: e.1#0: 40
    //DEBUG: e.Tail#1: 42

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/34 {REMOVED TILE} e.RuleNames#1/36 {REMOVED TILE} t.SentNamePos#1/13 {REMOVED TILE} e.Name#1/38 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Tail#1/42 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.0#0/32 } Tile{ HalfReuse: 'U'/17 } Tile{ HalfReuse: 'n'/12 } Tile{ HalfReuse: 'e'/8 HalfReuse: 'x'/11 } Tile{ HalfReuse: 'p'/20 } Tile{ HalfReuse: 'e'/7 }"cted "/44 Tile{ HalfReuse: </18 HalfReuse: & DFA-TextFromToken/19 AsIs: s.Type#1/31 } Tile{ AsIs: e.1#0/40 } >/46" expected \"=\""/47 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[44], context[45], "cted ", 5);
    refalrts::alloc_close_call(vm, context[46]);
    refalrts::alloc_chars(vm, context[47], context[48], " expected \"=\"", 13);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[17], 'U');
    refalrts::reinit_char(context[12], 'n');
    refalrts::reinit_char(context[8], 'e');
    refalrts::reinit_char(context[11], 'x');
    refalrts::reinit_char(context[20], 'p');
    refalrts::reinit_char(context[7], 'e');
    refalrts::reinit_open_call(context[18]);
    refalrts::reinit_name(context[19], functions[efunc_DFAm_TextFromToken]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[46] );
    refalrts::push_stack( vm, context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[46], context[48] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[18], context[31] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSentence/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 )/18 t.Unexpected#1/19 e.Tail#1/2 >/1
  // closed e.SetNames#1 as range 5
  // closed e.RuleNames#1 as range 9
  // closed e.Name#1 as range 15
  // closed e.Tail#1 as range 2
  //DEBUG: t.SentNamePos#1: 13
  //DEBUG: t.Unexpected#1: 19
  //DEBUG: e.SetNames#1: 5
  //DEBUG: e.RuleNames#1: 9
  //DEBUG: e.Name#1: 15
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken*1/4 } Tile{ AsIs: t.Unexpected#1/19 } Tile{ HalfReuse: '\"'/8 HalfReuse: '='/11 } Tile{ HalfReuse: '\"'/18 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
  refalrts::reinit_char(context[8], '\"');
  refalrts::reinit_char(context[11], '=');
  refalrts::reinit_char(context[18], '\"');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseSentence("ParseSentence", COOKIE1_, COOKIE2_, func_ParseSentence);


static refalrts::FnResult func_gen_ExtractAlternatives_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ExtractAlternatives\1/4 (/7 s.TokType#2/9 t.SrcPos#2/10 e.Info#2/5 )/8 e.Tail#2/2 >/1
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
  // closed e.Tail#2 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 5
  //DEBUG: e.Tail#2: 2
  //DEBUG: s.TokType#2: 9
  //DEBUG: t.SrcPos#2: 10
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\1/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } t.SrcPos#2/10/12 Tile{ AsIs: (/7 AsIs: s.TokType#2/9 AsIs: t.SrcPos#2/10 AsIs: e.Info#2/5 AsIs: )/8 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::copy_evar(vm, context[12], context[13], context[10], context[11]);
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L1("ExtractAlternatives\\1", COOKIE1_, COOKIE2_, func_gen_ExtractAlternatives_L1);


static refalrts::FnResult func_gen_ExtractAlternatives_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & ExtractAlternatives\2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives\2/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & ExtractAlternatives\2/4 t.new#4/5 (/7 s.new#5/13 t.new#6/14 e.new#7/11 )/8 e.new#8/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    // closed e.new#8 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    context[15] = refalrts::tvar_left( context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.new#7 as range 11
    do {
      // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 (/7 # TLiteral/13 t.0#0/14 e.1#0/16 )/8 e.Tail#2/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[9];
      context[19] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_TLiteral], context[13] ) )
        continue;
      // closed e.1#0 as range 16
      // closed e.Tail#2 as range 18
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.0#0: 14
      //DEBUG: e.1#0: 16
      //DEBUG: e.Tail#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\2/4 {REMOVED TILE} t.0#0/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: (/7 Reuse: # Chars/13 } Tile{ AsIs: e.1#0/16 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Tail#2/18 } Tile{ ]] }
      refalrts::update_ident(context[13], identifiers[ident_Chars]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[5], context[13] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 (/7 # TSetName/13 t.0#0/14 e.1#0/16 )/8 e.Tail#2/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[9];
      context[19] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_TSetName], context[13] ) )
        continue;
      // closed e.1#0 as range 16
      // closed e.Tail#2 as range 18
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.0#0: 14
      //DEBUG: e.1#0: 16
      //DEBUG: e.Tail#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\2/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: (/7 Reuse: # Set/13 AsIs: t.0#0/14 AsIs: e.1#0/16 AsIs: )/8 } Tile{ AsIs: e.Tail#2/18 } Tile{ ]] }
      refalrts::update_ident(context[13], identifiers[ident_Set]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[5], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 (/7 # TFlush/13 t.0#0/14 )/8 e.Tail#2/16 >/1
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_TFlush], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.Tail#2 as range 16
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.0#0: 14
      //DEBUG: e.Tail#2: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 } Tile{ HalfReuse: # Empty/1 } Tile{ AsIs: (/7 AsIs: # TFlush/13 AsIs: t.0#0/14 AsIs: )/8 } Tile{ AsIs: e.Tail#2/16 } Tile{ ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_Empty]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 (/7 # TNamedFlush/13 t.0#0/14 e.1#0/16 )/8 e.Tail#2/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[9];
      context[19] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_TNamedFlush], context[13] ) )
        continue;
      // closed e.1#0 as range 16
      // closed e.Tail#2 as range 18
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.0#0: 14
      //DEBUG: e.1#0: 16
      //DEBUG: e.Tail#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 } Tile{ HalfReuse: # Empty/1 } Tile{ AsIs: (/7 AsIs: # TNamedFlush/13 AsIs: t.0#0/14 AsIs: e.1#0/16 AsIs: )/8 } Tile{ AsIs: e.Tail#2/18 } Tile{ ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_Empty]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 (/7 # TErrorFlush/13 t.0#0/14 e.1#0/16 )/8 e.Tail#2/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[9];
      context[19] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_TErrorFlush], context[13] ) )
        continue;
      // closed e.1#0 as range 16
      // closed e.Tail#2 as range 18
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.0#0: 14
      //DEBUG: e.1#0: 16
      //DEBUG: e.Tail#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 } Tile{ HalfReuse: # Empty/1 } Tile{ AsIs: (/7 AsIs: # TErrorFlush/13 AsIs: t.0#0/14 AsIs: e.1#0/16 AsIs: )/8 } Tile{ AsIs: e.Tail#2/18 } Tile{ ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_Empty]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 (/7 # TName/13 t.0#0/14 e.1#0/16 )/8 e.Tail#2/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[9];
      context[19] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_TName], context[13] ) )
        continue;
      // closed e.1#0 as range 16
      // closed e.Tail#2 as range 18
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.0#0: 14
      //DEBUG: e.1#0: 16
      //DEBUG: e.Tail#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 } Tile{ HalfReuse: # Empty/1 } Tile{ AsIs: (/7 AsIs: # TName/13 AsIs: t.0#0/14 AsIs: e.1#0/16 AsIs: )/8 } Tile{ AsIs: e.Tail#2/18 } Tile{ ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_Empty]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 (/7 # TAlternative/13 t.0#0/14 e.1#0/16 )/8 e.Tail#2/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[9];
      context[19] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_TAlternative], context[13] ) )
        continue;
      // closed e.1#0 as range 16
      // closed e.Tail#2 as range 18
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.0#0: 14
      //DEBUG: e.1#0: 16
      //DEBUG: e.Tail#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 } Tile{ HalfReuse: # Empty/1 } Tile{ AsIs: (/7 AsIs: # TAlternative/13 AsIs: t.0#0/14 AsIs: e.1#0/16 AsIs: )/8 } Tile{ AsIs: e.Tail#2/18 } Tile{ ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_Empty]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 (/7 # TDot/13 t.0#0/14 )/8 e.Tail#2/16 >/1
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_TDot], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.Tail#2 as range 16
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.0#0: 14
      //DEBUG: e.Tail#2: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 } Tile{ HalfReuse: # Empty/1 } Tile{ AsIs: (/7 AsIs: # TDot/13 AsIs: t.0#0/14 AsIs: )/8 } Tile{ AsIs: e.Tail#2/16 } Tile{ ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_Empty]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 (/7 s.Type#1/13 t.0#0/14 e.1#0/16 )/8 e.Tail#2/18 >/1
    context[16] = context[11];
    context[17] = context[12];
    context[18] = context[9];
    context[19] = context[10];
    // closed e.1#0 as range 16
    // closed e.Tail#2 as range 18
    //DEBUG: t.BeginSrcPos#2: 5
    //DEBUG: t.0#0: 14
    //DEBUG: s.Type#1: 13
    //DEBUG: e.1#0: 16
    //DEBUG: e.Tail#2: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 } Tile{ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.0#0/14 }"Unex"/20 Tile{ HalfReuse: 'p'/8 }"ected "/22 </24 Tile{ HalfReuse: & DFA-TextFromToken/7 AsIs: s.Type#1/13 } Tile{ AsIs: e.1#0/16 } Tile{ AsIs: >/1 }" expected  definition of state"/25 >/27 Tile{ AsIs: e.Tail#2/18 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[20], context[21], "Unex", 4);
    refalrts::alloc_chars(vm, context[22], context[23], "ected ", 6);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_chars(vm, context[25], context[26], " expected  definition of state", 30);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_name(context[7], functions[efunc_DFAm_TextFromToken]);
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 t.NextToken#2/7 e.Tail#2/2 >/1
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.NextToken#2: 7
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 } Tile{ AsIs: </0 Reuse: & UnexpectedToken*1/4 } Tile{ AsIs: t.NextToken#2/7 }" definition of state"/9 Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[9], context[10], " definition of state", 20);
  refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L2("ExtractAlternatives\\2", COOKIE1_, COOKIE2_, func_gen_ExtractAlternatives_L2);


static refalrts::FnResult func_gen_ExtractAlternatives_L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & ExtractAlternatives\3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives\3/4 t.new#1/5 t.new#2/7 t.new#3/9 e.new#4/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & ExtractAlternatives\3/4 t.new#5/5 t.new#6/7 (/9 s.new#7/15 t.new#8/16 e.new#9/13 )/10 e.new#10/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    // closed e.new#10 as range 11
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.new#9 as range 13
    do {
      // </0 & ExtractAlternatives\3/4 t.BeginSrcPos#2/5 t.Head#2/7 (/9 # TFlush/15 t.0#0/16 )/10 e.Tail#2/18 >/1
      context[18] = context[11];
      context[19] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_TFlush], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.Tail#2 as range 18
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.Head#2: 7
      //DEBUG: t.0#0: 16
      //DEBUG: e.Tail#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\3/4 {REMOVED TILE} # TFlush/15 t.0#0/16 )/10 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 HalfReuse: # Unnamed/9 } Tile{ AsIs: e.Tail#2/18 } Tile{ ]] }
      refalrts::reinit_ident(context[9], identifiers[ident_Unnamed]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives\3/4 t.BeginSrcPos#2/5 t.Head#2/7 (/9 # TNamedFlush/15 t.0#0/16 e.1#0/18 )/10 e.Tail#2/20 >/1
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[11];
      context[21] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_TNamedFlush], context[15] ) )
        continue;
      // closed e.1#0 as range 18
      // closed e.Tail#2 as range 20
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.Head#2: 7
      //DEBUG: t.0#0: 16
      //DEBUG: e.1#0: 18
      //DEBUG: e.Tail#2: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\3/4 {REMOVED TILE} t.0#0/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 AsIs: (/9 Reuse: # Flush/15 } Tile{ AsIs: e.1#0/18 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Tail#2/20 } Tile{ ]] }
      refalrts::update_ident(context[15], identifiers[ident_Flush]);
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[5], context[15] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives\3/4 t.BeginSrcPos#2/5 t.Head#2/7 (/9 # TErrorFlush/15 t.0#0/16 e.1#0/18 )/10 e.Tail#2/20 >/1
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[11];
      context[21] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_TErrorFlush], context[15] ) )
        continue;
      // closed e.1#0 as range 18
      // closed e.Tail#2 as range 20
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.Head#2: 7
      //DEBUG: t.0#0: 16
      //DEBUG: e.1#0: 18
      //DEBUG: e.Tail#2: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\3/4 {REMOVED TILE} t.0#0/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 AsIs: (/9 Reuse: # FlushError/15 } Tile{ AsIs: e.1#0/18 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Tail#2/20 } Tile{ ]] }
      refalrts::update_ident(context[15], identifiers[ident_FlushError]);
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[5], context[15] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives\3/4 t.BeginSrcPos#2/5 t.Head#2/7 (/9 # TName/15 t.0#0/16 e.1#0/18 )/10 e.Tail#2/20 >/1
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[11];
      context[21] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_TName], context[15] ) )
        continue;
      // closed e.1#0 as range 18
      // closed e.Tail#2 as range 20
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.Head#2: 7
      //DEBUG: t.0#0: 16
      //DEBUG: e.1#0: 18
      //DEBUG: e.Tail#2: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\3/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 } Tile{ HalfReuse: # None/1 } Tile{ AsIs: (/9 AsIs: # TName/15 AsIs: t.0#0/16 AsIs: e.1#0/18 AsIs: )/10 } Tile{ AsIs: e.Tail#2/20 } Tile{ ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_None]);
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[5], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives\3/4 t.new#11/5 t.new#12/7 (/9 s.new#13/15 t.new#14/16 )/10 e.new#15/18 >/1
      context[18] = context[11];
      context[19] = context[12];
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.new#15 as range 18
      do {
        // </0 & ExtractAlternatives\3/4 t.BeginSrcPos#2/5 t.Head#2/7 (/9 # TAlternative/15 t.0#0/16 )/10 e.Tail#2/20 >/1
        context[20] = context[18];
        context[21] = context[19];
        if( ! refalrts::ident_term( identifiers[ident_TAlternative], context[15] ) )
          continue;
        // closed e.Tail#2 as range 20
        //DEBUG: t.BeginSrcPos#2: 5
        //DEBUG: t.Head#2: 7
        //DEBUG: t.0#0: 16
        //DEBUG: e.Tail#2: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\3/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 } Tile{ HalfReuse: # None/1 } Tile{ AsIs: (/9 AsIs: # TAlternative/15 AsIs: t.0#0/16 AsIs: )/10 } Tile{ AsIs: e.Tail#2/20 } Tile{ ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_None]);
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[5], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ExtractAlternatives\3/4 t.BeginSrcPos#2/5 t.Head#2/7 (/9 # TDot/15 t.0#0/16 )/10 e.Tail#2/20 >/1
      context[20] = context[18];
      context[21] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_TDot], context[15] ) )
        continue;
      // closed e.Tail#2 as range 20
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.Head#2: 7
      //DEBUG: t.0#0: 16
      //DEBUG: e.Tail#2: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\3/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 } Tile{ HalfReuse: # None/1 } Tile{ AsIs: (/9 AsIs: # TDot/15 AsIs: t.0#0/16 AsIs: )/10 } Tile{ AsIs: e.Tail#2/20 } Tile{ ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_None]);
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[5], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives\3/4 t.BeginSrcPos#2/5 t.Head#2/7 (/9 s.Type#1/15 t.0#0/16 e.1#0/18 )/10 e.Tail#2/20 >/1
    context[18] = context[13];
    context[19] = context[14];
    context[20] = context[11];
    context[21] = context[12];
    // closed e.1#0 as range 18
    // closed e.Tail#2 as range 20
    //DEBUG: t.BeginSrcPos#2: 5
    //DEBUG: t.Head#2: 7
    //DEBUG: t.0#0: 16
    //DEBUG: s.Type#1: 15
    //DEBUG: e.1#0: 18
    //DEBUG: e.Tail#2: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 HalfReuse: </9 } & ErrorAt/22 Tile{ AsIs: t.0#0/16 }"Unex"/23 Tile{ HalfReuse: 'p'/10 }"ected "/25 Tile{ AsIs: </0 Reuse: & DFA-TextFromToken/4 } Tile{ AsIs: s.Type#1/15 } Tile{ AsIs: e.1#0/18 } Tile{ AsIs: >/1 }" expected flush or next state name"/27 >/29 Tile{ AsIs: e.Tail#2/20 } Tile{ ]] }
    refalrts::alloc_name(vm, context[22], functions[efunc_ErrorAt]);
    refalrts::alloc_chars(vm, context[23], context[24], "Unex", 4);
    refalrts::alloc_chars(vm, context[25], context[26], "ected ", 6);
    refalrts::alloc_chars(vm, context[27], context[28], " expected flush or next state name", 34);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_char(context[10], 'p');
    refalrts::update_name(context[4], functions[efunc_DFAm_TextFromToken]);
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives\3/4 t.BeginSrcPos#2/5 t.Head#2/7 t.NextToken#2/9 e.Tail#2/2 >/1
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.Head#2: 7
  //DEBUG: t.NextToken#2: 9
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 } Tile{ AsIs: </0 Reuse: & UnexpectedToken*1/4 } Tile{ AsIs: t.NextToken#2/9 }"flush or next state name"/11 Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[11], context[12], "flush or next state name", 24);
  refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L3("ExtractAlternatives\\3", COOKIE1_, COOKIE2_, func_gen_ExtractAlternatives_L3);


static refalrts::FnResult func_gen_ExtractAlternatives_L4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & ExtractAlternatives\4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives\4/4 t.new#1/5 t.new#2/7 t.new#3/9 t.new#4/11 e.new#5/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & ExtractAlternatives\4/4 t.new#6/5 t.new#7/7 t.new#8/9 (/11 s.new#9/17 t.new#10/18 e.new#11/15 )/12 e.new#12/13 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[11] ) )
      continue;
    // closed e.new#12 as range 13
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.new#11 as range 15
    do {
      // </0 & ExtractAlternatives\4/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 (/11 # TName/17 t.0#0/18 e.1#0/20 )/12 e.Tail#2/22 >/1
      context[20] = context[15];
      context[21] = context[16];
      context[22] = context[13];
      context[23] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_TName], context[17] ) )
        continue;
      // closed e.1#0 as range 20
      // closed e.Tail#2 as range 22
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.Head#2: 7
      //DEBUG: t.Flush#2: 9
      //DEBUG: t.0#0: 18
      //DEBUG: e.1#0: 20
      //DEBUG: e.Tail#2: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\4/4 {REMOVED TILE} # TName/17 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 AsIs: t.Flush#2/9 AsIs: (/11 } Tile{ AsIs: t.0#0/18 AsIs: e.1#0/20 AsIs: )/12 } Tile{ AsIs: e.Tail#2/22 } Tile{ ]] }
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[18], context[12] );
      res = refalrts::splice_evar( res, context[5], context[11] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives\4/4 t.new#13/5 t.new#14/7 t.new#15/9 (/11 s.new#16/17 t.new#17/18 )/12 e.new#18/20 >/1
      context[20] = context[13];
      context[21] = context[14];
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.new#18 as range 20
      do {
        // </0 & ExtractAlternatives\4/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 (/11 # TAlternative/17 t.0#0/18 )/12 e.Tail#2/22 >/1
        context[22] = context[20];
        context[23] = context[21];
        if( ! refalrts::ident_term( identifiers[ident_TAlternative], context[17] ) )
          continue;
        // closed e.Tail#2 as range 22
        //DEBUG: t.BeginSrcPos#2: 5
        //DEBUG: t.Head#2: 7
        //DEBUG: t.Flush#2: 9
        //DEBUG: t.0#0: 18
        //DEBUG: e.Tail#2: 22

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\4/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 AsIs: t.Flush#2/9 } Tile{ HalfReuse: # Finitive/1 } Tile{ AsIs: (/11 AsIs: # TAlternative/17 AsIs: t.0#0/18 AsIs: )/12 } Tile{ AsIs: e.Tail#2/22 } Tile{ ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_Finitive]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[5], context[10] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ExtractAlternatives\4/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 (/11 # TDot/17 t.0#0/18 )/12 e.Tail#2/22 >/1
      context[22] = context[20];
      context[23] = context[21];
      if( ! refalrts::ident_term( identifiers[ident_TDot], context[17] ) )
        continue;
      // closed e.Tail#2 as range 22
      //DEBUG: t.BeginSrcPos#2: 5
      //DEBUG: t.Head#2: 7
      //DEBUG: t.Flush#2: 9
      //DEBUG: t.0#0: 18
      //DEBUG: e.Tail#2: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\4/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 AsIs: t.Flush#2/9 } Tile{ HalfReuse: # Finitive/1 } Tile{ AsIs: (/11 AsIs: # TDot/17 AsIs: t.0#0/18 AsIs: )/12 } Tile{ AsIs: e.Tail#2/22 } Tile{ ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_Finitive]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[5], context[10] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives\4/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 (/11 s.Type#1/17 t.0#0/18 e.1#0/20 )/12 e.Tail#2/22 >/1
    context[20] = context[15];
    context[21] = context[16];
    context[22] = context[13];
    context[23] = context[14];
    // closed e.1#0 as range 20
    // closed e.Tail#2 as range 22
    //DEBUG: t.BeginSrcPos#2: 5
    //DEBUG: t.Head#2: 7
    //DEBUG: t.Flush#2: 9
    //DEBUG: t.0#0: 18
    //DEBUG: s.Type#1: 17
    //DEBUG: e.1#0: 20
    //DEBUG: e.Tail#2: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 AsIs: t.Flush#2/9 HalfReuse: </11 } & ErrorAt/24 Tile{ AsIs: t.0#0/18 }"Unex"/25 Tile{ HalfReuse: 'p'/12 }"ected "/27 Tile{ AsIs: </0 Reuse: & DFA-TextFromToken/4 } Tile{ AsIs: s.Type#1/17 } Tile{ AsIs: e.1#0/20 } Tile{ AsIs: >/1 }" expected next state name or next alternative"/29 >/31 Tile{ AsIs: e.Tail#2/22 } Tile{ ]] }
    refalrts::alloc_name(vm, context[24], functions[efunc_ErrorAt]);
    refalrts::alloc_chars(vm, context[25], context[26], "Unex", 4);
    refalrts::alloc_chars(vm, context[27], context[28], "ected ", 6);
    refalrts::alloc_chars(vm, context[29], context[30], " expected next state name or next alternative", 45);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::reinit_open_call(context[11]);
    refalrts::reinit_char(context[12], 'p');
    refalrts::update_name(context[4], functions[efunc_DFAm_TextFromToken]);
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[5], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives\4/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 t.NextToken#2/11 e.Tail#2/2 >/1
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.Head#2: 7
  //DEBUG: t.Flush#2: 9
  //DEBUG: t.NextToken#2: 11
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 AsIs: t.Flush#2/9 } Tile{ AsIs: </0 Reuse: & UnexpectedToken*1/4 } Tile{ AsIs: t.NextToken#2/11 }"next state name or next alternative"/13 Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[13], context[14], "next state name or next alternative", 35);
  refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L4("ExtractAlternatives\\4", COOKIE1_, COOKIE2_, func_gen_ExtractAlternatives_L4);


static refalrts::FnResult func_gen_ExtractAlternatives_L5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & ExtractAlternatives\5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives\5/4 t.new#1/5 t.new#2/7 t.new#3/9 t.new#4/11 e.new#5/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 t.Head#2/7 # None/9 # Finitive/11 e.Tail#2/13 >/1
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_None], context[9] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Finitive], context[11] ) )
      continue;
    // closed e.Tail#2 as range 13
    //DEBUG: t.BeginSrcPos#2: 5
    //DEBUG: t.Head#2: 7
    //DEBUG: e.Tail#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Head#2/7 {REMOVED TILE} e.Tail#2/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: t.BeginSrcPos#2/5 } 'E'/15 Tile{ HalfReuse: 'O'/9 HalfReuse: 'F'/11 }" alternative must have flush"/16 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[15], 'E');
    refalrts::alloc_chars(vm, context[16], context[17], " alternative must have flush", 28);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[9], 'O');
    refalrts::reinit_char(context[11], 'F');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 t.NextState#2/11 e.Tail#2/2 >/1
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.Head#2: 7
  //DEBUG: t.Flush#2: 9
  //DEBUG: t.NextState#2: 11
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Head#2/7 AsIs: t.Flush#2/9 AsIs: t.NextState#2/11 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L5("ExtractAlternatives\\5", COOKIE1_, COOKIE2_, func_gen_ExtractAlternatives_L5);


static refalrts::FnResult func_gen_ExtractAlternatives_L6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & ExtractAlternatives\6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives\6/4 (/7 e.new#1/5 )/8 t.new#2/9 t.new#3/11 t.new#4/13 e.new#5/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & ExtractAlternatives\6/4 (/7 e.Found#1/15 )/8 t.Head#2/9 t.Flush#2/11 t.NextState#2/13 (/21 # TAlternative/23 t.SrcPos#2/24 )/22 e.Tail#2/17 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left( identifiers[ident_TAlternative], context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.Found#1 as range 15
    // closed e.Tail#2 as range 17
    context[25] = refalrts::tvar_left( context[24], context[19], context[20] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    //DEBUG: t.Head#2: 9
    //DEBUG: t.Flush#2: 11
    //DEBUG: t.NextState#2: 13
    //DEBUG: e.Found#1: 15
    //DEBUG: e.Tail#2: 17
    //DEBUG: t.SrcPos#2: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </26 & Fetch/27 Tile{ AsIs: e.Tail#2/17 } </28 Tile{ HalfReuse: & Pipe/22 } & ExtractAlternatives\1/29 & ExtractAlternatives\2/30 & ExtractAlternatives\3/31 & ExtractAlternatives\4/32 & ExtractAlternatives\5/33 Tile{ HalfReuse: [*]/0 AsIs: & ExtractAlternatives\6/4 AsIs: (/7 AsIs: e.Found#1/15 HalfReuse: (/8 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: t.NextState#2/13 HalfReuse: )/21 HalfReuse: )/23 } {*}/34 >/35 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_gen_ExtractAlternatives_L1]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_ExtractAlternatives_L2]);
    refalrts::alloc_name(vm, context[31], functions[efunc_gen_ExtractAlternatives_L3]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_ExtractAlternatives_L4]);
    refalrts::alloc_name(vm, context[33], functions[efunc_gen_ExtractAlternatives_L5]);
    refalrts::alloc_unwrapped_closure(vm, context[34], context[0]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::reinit_name(context[22], functions[efunc_Pipe]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[21]);
    refalrts::reinit_close_bracket(context[23]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[28] );
    refalrts::link_brackets( context[7], context[23] );
    refalrts::link_brackets( context[8], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[0], context[23] );
    res = refalrts::splice_evar( res, context[29], context[33] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    refalrts::wrap_closure( context[34] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives\6/4 (/7 e.Found#1/5 )/8 t.Head#2/9 t.Flush#2/11 t.NextState#2/13 e.Tail#2/2 >/1
  // closed e.Found#1 as range 5
  // closed e.Tail#2 as range 2
  //DEBUG: t.Head#2: 9
  //DEBUG: t.Flush#2: 11
  //DEBUG: t.NextState#2: 13
  //DEBUG: e.Found#1: 5
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: t.NextState#2/13 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::link_brackets( context[7], context[4] );
  refalrts::link_brackets( context[8], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L6("ExtractAlternatives\\6", COOKIE1_, COOKIE2_, func_gen_ExtractAlternatives_L6);


static refalrts::FnResult func_ExtractAlternatives(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 e.Tail#1/2 >/1
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
  // closed e.Found#1 as range 5
  // closed e.Tail#1 as range 2
  //DEBUG: e.Found#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: e.Tail#1/2 } </11 & Pipe/12 & ExtractAlternatives\1/13 & ExtractAlternatives\2/14 & ExtractAlternatives\3/15 & ExtractAlternatives\4/16 & ExtractAlternatives\5/17 Tile{ HalfReuse: [*]/0 Reuse: & ExtractAlternatives\6/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } {*}/18 >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Pipe]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_ExtractAlternatives_L1]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_ExtractAlternatives_L2]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ExtractAlternatives_L3]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_ExtractAlternatives_L4]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_ExtractAlternatives_L5]);
  refalrts::alloc_unwrapped_closure(vm, context[18], context[0]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractAlternatives_L6]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternatives("ExtractAlternatives", COOKIE1_, COOKIE2_, func_ExtractAlternatives);


static refalrts::FnResult func_ExtractAlternativesm_Head(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & ExtractAlternatives-Head/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives-Head/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & ExtractAlternatives-Head/4 (/5 s.new#3/11 t.new#4/12 e.new#5/9 )/6 e.new#6/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    // closed e.new#6 as range 7
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & ExtractAlternatives-Head/4 (/5 s.new#7/11 t.new#8/12 e.new#9/14 )/6 >/1
      context[14] = context[9];
      context[15] = context[10];
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      // closed e.new#9 as range 14
      do {
        // </0 & ExtractAlternatives-Head/4 (/5 # TLiteral/11 t.SrcPos#1/12 e.Content#1/16 )/6 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_TLiteral], context[11] ) )
          continue;
        // closed e.Content#1 as range 16
        //DEBUG: t.SrcPos#1: 12
        //DEBUG: e.Content#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Head/4 {REMOVED TILE} t.SrcPos#1/12 {REMOVED TILE} )/6 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Chars/11 } Tile{ AsIs: e.Content#1/16 } Tile{ HalfReuse: )/1 ]] }
        refalrts::update_ident(context[11], identifiers[ident_Chars]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[5], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[5], context[11] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ExtractAlternatives-Head/4 (/5 # TSetName/11 t.SrcPos#1/12 e.Content#1/16 )/6 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_TSetName], context[11] ) )
          continue;
        // closed e.Content#1 as range 16
        //DEBUG: t.SrcPos#1: 12
        //DEBUG: e.Content#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Head/4 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Set/11 AsIs: t.SrcPos#1/12 AsIs: e.Content#1/16 AsIs: )/6 } Tile{ ]] }
        refalrts::update_ident(context[11], identifiers[ident_Set]);
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ExtractAlternatives-Head/4 (/5 # TFlush/11 t.SrcPos#1/12 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_TFlush], context[11] ) )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        //DEBUG: t.SrcPos#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TFlush/11 AsIs: t.SrcPos#1/12 AsIs: )/6 } Tile{ ]] }
        refalrts::reinit_ident(context[4], identifiers[ident_Empty]);
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[4], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ExtractAlternatives-Head/4 (/5 # TNamedFlush/11 t.SrcPos#1/12 e.Name#1/16 )/6 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_TNamedFlush], context[11] ) )
          continue;
        // closed e.Name#1 as range 16
        //DEBUG: t.SrcPos#1: 12
        //DEBUG: e.Name#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TNamedFlush/11 AsIs: t.SrcPos#1/12 AsIs: e.Name#1/16 AsIs: )/6 } Tile{ ]] }
        refalrts::reinit_ident(context[4], identifiers[ident_Empty]);
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[4], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ExtractAlternatives-Head/4 (/5 # TErrorFlush/11 t.SrcPos#1/12 e.Message#1/16 )/6 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_TErrorFlush], context[11] ) )
          continue;
        // closed e.Message#1 as range 16
        //DEBUG: t.SrcPos#1: 12
        //DEBUG: e.Message#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TErrorFlush/11 AsIs: t.SrcPos#1/12 AsIs: e.Message#1/16 AsIs: )/6 } Tile{ ]] }
        refalrts::reinit_ident(context[4], identifiers[ident_Empty]);
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[4], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ExtractAlternatives-Head/4 (/5 # TName/11 t.SrcPos#1/12 e.Name#1/16 )/6 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_TName], context[11] ) )
          continue;
        // closed e.Name#1 as range 16
        //DEBUG: t.SrcPos#1: 12
        //DEBUG: e.Name#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TName/11 AsIs: t.SrcPos#1/12 AsIs: e.Name#1/16 AsIs: )/6 } Tile{ ]] }
        refalrts::reinit_ident(context[4], identifiers[ident_Empty]);
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[4], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ExtractAlternatives-Head/4 (/5 # TAlternative/11 t.SrcPos#1/12 e.Message#1/16 )/6 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_TAlternative], context[11] ) )
          continue;
        // closed e.Message#1 as range 16
        //DEBUG: t.SrcPos#1: 12
        //DEBUG: e.Message#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TAlternative/11 AsIs: t.SrcPos#1/12 AsIs: e.Message#1/16 AsIs: )/6 } Tile{ ]] }
        refalrts::reinit_ident(context[4], identifiers[ident_Empty]);
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[4], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ExtractAlternatives-Head/4 (/5 # TDot/11 t.SrcPos#1/12 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TDot], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //DEBUG: t.SrcPos#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TDot/11 AsIs: t.SrcPos#1/12 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Empty]);
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives-Head/4 (/5 s.Type#1/11 t.0#0/12 e.1#0/14 )/6 e.Tail#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[7];
    context[17] = context[8];
    // closed e.1#0 as range 14
    // closed e.Tail#1 as range 16
    //DEBUG: t.0#0: 12
    //DEBUG: s.Type#1: 11
    //DEBUG: e.1#0: 14
    //DEBUG: e.Tail#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Tail#1/16 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.0#0/12 }"Une"/18 Tile{ HalfReuse: 'x'/6 }"pected "/20 </22 Tile{ HalfReuse: & DFA-TextFromToken/5 AsIs: s.Type#1/11 } Tile{ AsIs: e.1#0/14 } >/23" expected  definition of state"/24 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[18], context[19], "Une", 3);
    refalrts::alloc_chars(vm, context[20], context[21], "pected ", 7);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_chars(vm, context[24], context[25], " expected  definition of state", 30);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[6], 'x');
    refalrts::reinit_name(context[5], functions[efunc_DFAm_TextFromToken]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[5], context[11] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives-Head/4 t.Unexpected#1/5 e.Tail#1/2 >/1
  // closed e.Tail#1 as range 2
  //DEBUG: t.Unexpected#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken*1/4 AsIs: t.Unexpected#1/5 }" definition of state"/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[7], context[8], " definition of state", 20);
  refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternativesm_Head("ExtractAlternatives-Head", COOKIE1_, COOKIE2_, func_ExtractAlternativesm_Head);


static refalrts::FnResult func_ExtractAlternativesm_Flush(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ExtractAlternatives-Flush/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives-Flush/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ExtractAlternatives-Flush/4 (/5 s.new#2/9 t.new#3/10 e.new#4/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.new#4 as range 7
    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TFlush], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      //DEBUG: t.SrcPos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Unnamed/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_Unnamed]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 # TNamedFlush/9 t.SrcPos#1/10 e.Name#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TNamedFlush], context[9] ) )
        continue;
      // closed e.Name#1 as range 12
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Name#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Flush/9 } Tile{ AsIs: e.Name#1/12 } Tile{ HalfReuse: )/1 ]] }
      refalrts::update_ident(context[9], identifiers[ident_Flush]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 # TErrorFlush/9 t.SrcPos#1/10 e.Message#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TErrorFlush], context[9] ) )
        continue;
      // closed e.Message#1 as range 12
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Message#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # FlushError/9 } Tile{ AsIs: e.Message#1/12 } Tile{ HalfReuse: )/1 ]] }
      refalrts::update_ident(context[9], identifiers[ident_FlushError]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TName], context[9] ) )
        continue;
      // closed e.Name#1 as range 12
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Name#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TName/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/12 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_None]);
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 s.new#5/9 t.new#6/10 )/6 >/1
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      do {
        // </0 & ExtractAlternatives-Flush/4 (/5 # TAlternative/9 t.SrcPos#1/10 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_TAlternative], context[9] ) )
          continue;
        //DEBUG: t.SrcPos#1: 10

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
        refalrts::reinit_ident(context[4], identifiers[ident_None]);
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[4], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ExtractAlternatives-Flush/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TDot], context[9] ) )
        continue;
      //DEBUG: t.SrcPos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_None]);
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives-Flush/4 (/5 s.Type#1/9 t.0#0/10 e.1#0/12 )/6 >/1
    context[12] = context[7];
    context[13] = context[8];
    // closed e.1#0 as range 12
    //DEBUG: t.0#0: 10
    //DEBUG: s.Type#1: 9
    //DEBUG: e.1#0: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.0#0/10 }"Unexpected "/14 </16 Tile{ HalfReuse: & DFA-TextFromToken/5 AsIs: s.Type#1/9 } Tile{ AsIs: e.1#0/12 } >/17" expected flush or next state nam"/18 Tile{ HalfReuse: 'e'/6 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[14], context[15], "Unexpected ", 11);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_chars(vm, context[18], context[19], " expected flush or next state nam", 33);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_name(context[5], functions[efunc_DFAm_TextFromToken]);
    refalrts::reinit_char(context[6], 'e');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[17], context[19] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    res = refalrts::splice_evar( res, context[14], context[16] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives-Flush/4 t.Unexpected#1/5 >/1
  //DEBUG: t.Unexpected#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken*1/4 AsIs: t.Unexpected#1/5 HalfReuse: 'f'/1 }"lush or next state name"/7 >/9 Tile{ ]] }
  refalrts::alloc_chars(vm, context[7], context[8], "lush or next state name", 23);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
  refalrts::reinit_char(context[1], 'f');
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternativesm_Flush("ExtractAlternatives-Flush", COOKIE1_, COOKIE2_, func_ExtractAlternativesm_Flush);


static refalrts::FnResult func_ExtractAlternativesm_NextState(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ExtractAlternatives-NextState/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives-NextState/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ExtractAlternatives-NextState/4 (/5 s.new#2/9 t.new#3/10 e.new#4/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.new#4 as range 7
    do {
      // </0 & ExtractAlternatives-NextState/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TName], context[9] ) )
        continue;
      // closed e.Name#1 as range 12
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Name#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-NextState/4 (/5 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/12 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[9]);
      refalrts::link_brackets( context[9], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-NextState/4 (/5 s.new#5/9 t.new#6/10 )/6 >/1
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      do {
        // </0 & ExtractAlternatives-NextState/4 (/5 # TAlternative/9 t.SrcPos#1/10 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_TAlternative], context[9] ) )
          continue;
        //DEBUG: t.SrcPos#1: 10

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Finitive/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
        refalrts::reinit_ident(context[4], identifiers[ident_Finitive]);
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[4], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ExtractAlternatives-NextState/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TDot], context[9] ) )
        continue;
      //DEBUG: t.SrcPos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Finitive/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Finitive]);
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives-NextState/4 (/5 s.Type#1/9 t.0#0/10 e.1#0/12 )/6 >/1
    context[12] = context[7];
    context[13] = context[8];
    // closed e.1#0 as range 12
    //DEBUG: t.0#0: 10
    //DEBUG: s.Type#1: 9
    //DEBUG: e.1#0: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.0#0/10 }"Unexpected "/14 </16 Tile{ HalfReuse: & DFA-TextFromToken/5 AsIs: s.Type#1/9 } Tile{ AsIs: e.1#0/12 } >/17" expected next state name or next alternativ"/18 Tile{ HalfReuse: 'e'/6 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[14], context[15], "Unexpected ", 11);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_chars(vm, context[18], context[19], " expected next state name or next alternativ", 44);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_name(context[5], functions[efunc_DFAm_TextFromToken]);
    refalrts::reinit_char(context[6], 'e');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[17], context[19] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    res = refalrts::splice_evar( res, context[14], context[16] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives-NextState/4 t.Unexpected#1/5 >/1
  //DEBUG: t.Unexpected#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken*1/4 AsIs: t.Unexpected#1/5 HalfReuse: 'n'/1 }"ext state name or next alternative"/7 >/9 Tile{ ]] }
  refalrts::alloc_chars(vm, context[7], context[8], "ext state name or next alternative", 34);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
  refalrts::reinit_char(context[1], 'n');
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternativesm_NextState("ExtractAlternatives-NextState", COOKIE1_, COOKIE2_, func_ExtractAlternativesm_NextState);


static refalrts::FnResult func_UnexpectedToken(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & UnexpectedToken/4 (/7 s.Type#1/9 t.SrcPos#1/10 e.Unexpected#1/5 )/8 e.Message#1/2 >/1
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
  // closed e.Message#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Unexpected#1 as range 5
  //DEBUG: e.Message#1: 2
  //DEBUG: s.Type#1: 9
  //DEBUG: t.SrcPos#1: 10
  //DEBUG: e.Unexpected#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/10 }"Unexpected "/12 </14 Tile{ HalfReuse: & DFA-TextFromToken/7 AsIs: s.Type#1/9 } Tile{ AsIs: e.Unexpected#1/5 } >/15" expected"/16 Tile{ HalfReuse: ' '/8 AsIs: e.Message#1/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[12], context[13], "Unexpected ", 11);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_chars(vm, context[16], context[17], " expected", 9);
  refalrts::update_name(context[4], functions[efunc_ErrorAt]);
  refalrts::reinit_name(context[7], functions[efunc_DFAm_TextFromToken]);
  refalrts::reinit_char(context[8], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnexpectedToken("UnexpectedToken", COOKIE1_, COOKIE2_, func_UnexpectedToken);


static refalrts::FnResult func_gen_ParseSetDescr_S1L1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 70 elems
  refalrts::Iter context[70];
  refalrts::zeros( context, 70 );
  // </0 & ParseSetDescr$1\1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSetDescr$1\1@1/4 (/7 e.new#1/5 )/8 t.new#2/9 (/13 e.new#3/11 )/14 (/17 e.new#4/15 )/18 e.new#5/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
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
  // closed e.new#3 as range 11
  // closed e.new#4 as range 15
  // closed e.new#5 as range 2
  do {
    // </0 & ParseSetDescr$1\1@1/4 (/7 e.new#10/19 )/8 t.new#6/9 (/13 e.new#11/21 )/14 (/17 e.new#12/23 )/18 (/29 e.new#7/27 )/30 t.new#8/31 e.new#9/25 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[11];
    context[22] = context[12];
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[2];
    context[26] = context[3];
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    // closed e.new#10 as range 19
    // closed e.new#11 as range 21
    // closed e.new#12 as range 23
    // closed e.new#7 as range 27
    context[32] = refalrts::tvar_left( context[31], context[25], context[26] );
    if( ! context[32] )
      continue;
    // closed e.new#9 as range 25
    do {
      // </0 & ParseSetDescr$1\1@1/4 (/7 e.new#19/33 )/8 t.new#13/9 (/13 e.new#20/35 )/14 (/17 e.new#21/37 )/18 (/29 e.new#18/39 )/30 (/31 s.new#14/45 t.new#15/46 e.new#16/43 )/32 e.new#17/41 >/1
      context[33] = context[19];
      context[34] = context[20];
      context[35] = context[21];
      context[36] = context[22];
      context[37] = context[23];
      context[38] = context[24];
      context[39] = context[27];
      context[40] = context[28];
      context[41] = context[25];
      context[42] = context[26];
      context[43] = 0;
      context[44] = 0;
      if( ! refalrts::brackets_term( context[43], context[44], context[31] ) )
        continue;
      // closed e.new#19 as range 33
      // closed e.new#20 as range 35
      // closed e.new#21 as range 37
      // closed e.new#18 as range 39
      // closed e.new#17 as range 41
      if( ! refalrts::svar_left( context[45], context[43], context[44] ) )
        continue;
      context[47] = refalrts::tvar_left( context[46], context[43], context[44] );
      if( ! context[47] )
        continue;
      // closed e.new#16 as range 43
      do {
        // </0 & ParseSetDescr$1\1@1/4 (/7 e.new#26/48 )/8 t.new#22/9 (/13 e.new#27/50 )/14 (/17 e.new#28/52 )/18 (/29 e.new#25/54 )/30 (/31 # TDot/45 t.new#23/46 )/32 e.new#24/56 >/1
        context[48] = context[33];
        context[49] = context[34];
        context[50] = context[35];
        context[51] = context[36];
        context[52] = context[37];
        context[53] = context[38];
        context[54] = context[39];
        context[55] = context[40];
        context[56] = context[41];
        context[57] = context[42];
        if( ! refalrts::ident_term( identifiers[ident_TDot], context[45] ) )
          continue;
        if( ! refalrts::empty_seq( context[43], context[44] ) )
          continue;
        // closed e.new#26 as range 48
        // closed e.new#27 as range 50
        // closed e.new#28 as range 52
        // closed e.new#25 as range 54
        // closed e.new#24 as range 56
        do {
          // </0 & ParseSetDescr$1\1@1/4 (/7 e.Name0#1/58 )/8 t.SrcPos#1/9 (/13 e.SetNames0#1/60 )/14 (/17 e.RuleNames0#1/62 )/18 (/29 )/30 (/31 # TDot/45 t.SrcPos#2/46 )/32 e.Tail#2/64 >/1
          context[58] = context[48];
          context[59] = context[49];
          context[60] = context[50];
          context[61] = context[51];
          context[62] = context[52];
          context[63] = context[53];
          context[64] = context[56];
          context[65] = context[57];
          if( ! refalrts::empty_seq( context[54], context[55] ) )
            continue;
          // closed e.Name0#1 as range 58
          // closed e.SetNames0#1 as range 60
          // closed e.RuleNames0#1 as range 62
          // closed e.Tail#2 as range 64
          //DEBUG: t.SrcPos#1: 9
          //DEBUG: t.SrcPos#2: 46
          //DEBUG: e.Name0#1: 58
          //DEBUG: e.SetNames0#1: 60
          //DEBUG: e.RuleNames0#1: 62
          //DEBUG: e.Tail#2: 64

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/9 {REMOVED TILE} e.SetNames0#1/60 {REMOVED TILE} e.RuleNames0#1/62 {REMOVED TILE} {REMOVED TILE} e.Tail#2/64 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#2/46 HalfReuse: 'S'/32 } Tile{ HalfReuse: 'e'/13 } Tile{ HalfReuse: 't'/14 HalfReuse: ' '/17 } Tile{ HalfReuse: ':'/8 } Tile{ AsIs: e.Name0#1/58 } Tile{ HalfReuse: ':'/18 HalfReuse: ' '/29 HalfReuse: 'n'/30 HalfReuse: 'o'/31 HalfReuse: 't'/45 } Tile{ HalfReuse: ' '/7 }"have content"/66 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[66], context[67], "have content", 12);
          refalrts::update_name(context[4], functions[efunc_ErrorAt]);
          refalrts::reinit_char(context[32], 'S');
          refalrts::reinit_char(context[13], 'e');
          refalrts::reinit_char(context[14], 't');
          refalrts::reinit_char(context[17], ' ');
          refalrts::reinit_char(context[8], ':');
          refalrts::reinit_char(context[18], ':');
          refalrts::reinit_char(context[29], ' ');
          refalrts::reinit_char(context[30], 'n');
          refalrts::reinit_char(context[31], 'o');
          refalrts::reinit_char(context[45], 't');
          refalrts::reinit_char(context[7], ' ');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[66], context[67] );
          res = refalrts::splice_elem( res, context[7] );
          res = refalrts::splice_evar( res, context[18], context[45] );
          res = refalrts::splice_evar( res, context[58], context[59] );
          res = refalrts::splice_elem( res, context[8] );
          res = refalrts::splice_evar( res, context[14], context[17] );
          res = refalrts::splice_elem( res, context[13] );
          res = refalrts::splice_evar( res, context[46], context[32] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & ParseSetDescr$1\1@1/4 (/7 e.Name0#1/58 )/8 t.SrcPos#1/9 (/13 e.SetNames0#1/60 )/14 (/17 e.RuleNames0#1/62 )/18 (/29 e.Body#2/64 )/30 (/31 # TDot/45 t.SrcPos#2/46 )/32 e.Tail#2/66 >/1
        context[58] = context[48];
        context[59] = context[49];
        context[60] = context[50];
        context[61] = context[51];
        context[62] = context[52];
        context[63] = context[53];
        context[64] = context[54];
        context[65] = context[55];
        context[66] = context[56];
        context[67] = context[57];
        // closed e.Name0#1 as range 58
        // closed e.SetNames0#1 as range 60
        // closed e.RuleNames0#1 as range 62
        // closed e.Body#2 as range 64
        // closed e.Tail#2 as range 66
        //DEBUG: t.SrcPos#1: 9
        //DEBUG: t.SrcPos#2: 46
        //DEBUG: e.Name0#1: 58
        //DEBUG: e.SetNames0#1: 60
        //DEBUG: e.RuleNames0#1: 62
        //DEBUG: e.Body#2: 64
        //DEBUG: e.Tail#2: 66

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/46 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Set/4 } Tile{ AsIs: t.SrcPos#1/9 AsIs: (/13 } e.Name0#1/58/68 Tile{ HalfReuse: )/29 AsIs: e.Body#2/64 AsIs: )/30 HalfReuse: </31 HalfReuse: & ParseElements/45 } Tile{ HalfReuse: (/18 } Tile{ AsIs: e.SetNames0#1/60 } Tile{ AsIs: (/7 AsIs: e.Name0#1/58 AsIs: )/8 } Tile{ AsIs: )/14 AsIs: (/17 } Tile{ AsIs: e.RuleNames0#1/62 } Tile{ AsIs: )/32 AsIs: e.Tail#2/66 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[68], context[69], context[58], context[59]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_Set]);
        refalrts::reinit_close_bracket(context[29]);
        refalrts::reinit_open_call(context[31]);
        refalrts::reinit_name(context[45], functions[efunc_ParseElements]);
        refalrts::reinit_open_bracket(context[18]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[31] );
        refalrts::link_brackets( context[17], context[32] );
        refalrts::link_brackets( context[18], context[14] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[0], context[30] );
        refalrts::link_brackets( context[13], context[29] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[32];
        res = refalrts::splice_evar( res, context[62], context[63] );
        res = refalrts::splice_evar( res, context[14], context[17] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[60], context[61] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[29], context[45] );
        res = refalrts::splice_evar( res, context[68], context[69] );
        res = refalrts::splice_evar( res, context[9], context[13] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseSetDescr$1\1@1/4 (/7 e.Name0#1/48 )/8 t.SrcPos#1/9 (/13 e.SetNames0#1/50 )/14 (/17 e.RuleNames0#1/52 )/18 (/29 e.Body#2/54 )/30 (/31 s.Type#1/45 t.0#0/46 e.1#0/56 )/32 e.Tail#2/58 >/1
      context[48] = context[33];
      context[49] = context[34];
      context[50] = context[35];
      context[51] = context[36];
      context[52] = context[37];
      context[53] = context[38];
      context[54] = context[39];
      context[55] = context[40];
      context[56] = context[43];
      context[57] = context[44];
      context[58] = context[41];
      context[59] = context[42];
      // closed e.Name0#1 as range 48
      // closed e.SetNames0#1 as range 50
      // closed e.RuleNames0#1 as range 52
      // closed e.Body#2 as range 54
      // closed e.1#0 as range 56
      // closed e.Tail#2 as range 58
      //DEBUG: t.SrcPos#1: 9
      //DEBUG: t.0#0: 46
      //DEBUG: s.Type#1: 45
      //DEBUG: e.Name0#1: 48
      //DEBUG: e.SetNames0#1: 50
      //DEBUG: e.RuleNames0#1: 52
      //DEBUG: e.Body#2: 54
      //DEBUG: e.1#0: 56
      //DEBUG: e.Tail#2: 58

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Name0#1/48 {REMOVED TILE} t.SrcPos#1/9 {REMOVED TILE} e.SetNames0#1/50 {REMOVED TILE} e.RuleNames0#1/52 {REMOVED TILE} e.Body#2/54 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Tail#2/58 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.0#0/46 } Tile{ HalfReuse: 'U'/14 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'e'/18 HalfReuse: 'x'/29 } Tile{ HalfReuse: 'p'/13 } Tile{ HalfReuse: 'e'/32 } Tile{ HalfReuse: 'c'/8 } Tile{ HalfReuse: 't'/7 }"ed "/60 Tile{ HalfReuse: </30 HalfReuse: & DFA-TextFromToken/31 AsIs: s.Type#1/45 } Tile{ AsIs: e.1#0/56 } >/62" expected dot at end of set"/63 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[60], context[61], "ed ", 3);
      refalrts::alloc_close_call(vm, context[62]);
      refalrts::alloc_chars(vm, context[63], context[64], " expected dot at end of set", 27);
      refalrts::update_name(context[4], functions[efunc_ErrorAt]);
      refalrts::reinit_char(context[14], 'U');
      refalrts::reinit_char(context[17], 'n');
      refalrts::reinit_char(context[18], 'e');
      refalrts::reinit_char(context[29], 'x');
      refalrts::reinit_char(context[13], 'p');
      refalrts::reinit_char(context[32], 'e');
      refalrts::reinit_char(context[8], 'c');
      refalrts::reinit_char(context[7], 't');
      refalrts::reinit_open_call(context[30]);
      refalrts::reinit_name(context[31], functions[efunc_DFAm_TextFromToken]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[62] );
      refalrts::push_stack( vm, context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[62], context[64] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_evar( res, context[30], context[45] );
      res = refalrts::splice_evar( res, context[60], context[61] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[18], context[29] );
      res = refalrts::splice_evar( res, context[14], context[17] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSetDescr$1\1@1/4 (/7 e.Name0#1/33 )/8 t.SrcPos#1/9 (/13 e.SetNames0#1/35 )/14 (/17 e.RuleNames0#1/37 )/18 (/29 e.Body#2/39 )/30 t.Unexpected#2/31 e.Tail#2/41 >/1
    context[33] = context[19];
    context[34] = context[20];
    context[35] = context[21];
    context[36] = context[22];
    context[37] = context[23];
    context[38] = context[24];
    context[39] = context[27];
    context[40] = context[28];
    context[41] = context[25];
    context[42] = context[26];
    // closed e.Name0#1 as range 33
    // closed e.SetNames0#1 as range 35
    // closed e.RuleNames0#1 as range 37
    // closed e.Body#2 as range 39
    // closed e.Tail#2 as range 41
    //DEBUG: t.SrcPos#1: 9
    //DEBUG: t.Unexpected#2: 31
    //DEBUG: e.Name0#1: 33
    //DEBUG: e.SetNames0#1: 35
    //DEBUG: e.RuleNames0#1: 37
    //DEBUG: e.Body#2: 39
    //DEBUG: e.Tail#2: 41

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.Name0#1/33 {REMOVED TILE} t.SrcPos#1/9 {REMOVED TILE} e.SetNames0#1/35 {REMOVED TILE} e.RuleNames0#1/37 {REMOVED TILE} e.Body#2/39 {REMOVED TILE} {REMOVED TILE} e.Tail#2/41 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken*1/4 } Tile{ AsIs: t.Unexpected#2/31 } Tile{ HalfReuse: 'd'/14 HalfReuse: 'o'/17 } Tile{ HalfReuse: 't'/18 HalfReuse: ' '/29 } Tile{ HalfReuse: 'a'/30 } Tile{ HalfReuse: 't'/13 } Tile{ HalfReuse: ' '/8 } Tile{ HalfReuse: 'e'/7 }"nd of set"/43 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[43], context[44], "nd of set", 9);
    refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
    refalrts::reinit_char(context[14], 'd');
    refalrts::reinit_char(context[17], 'o');
    refalrts::reinit_char(context[18], 't');
    refalrts::reinit_char(context[29], ' ');
    refalrts::reinit_char(context[30], 'a');
    refalrts::reinit_char(context[13], 't');
    refalrts::reinit_char(context[8], ' ');
    refalrts::reinit_char(context[7], 'e');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[18], context[29] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSetDescr$1\1@1/4 (/7 e.Name0#1/5 )/8 t.SrcPos#1/9 (/13 e.SetNames0#1/11 )/14 (/17 e.RuleNames0#1/15 )/18 e.dyn#0/2 >/1
  // closed e.Name0#1 as range 5
  // closed e.SetNames0#1 as range 11
  // closed e.RuleNames0#1 as range 15
  // closed e.dyn#0 as range 2
  //DEBUG: t.SrcPos#1: 9
  //DEBUG: e.Name0#1: 5
  //DEBUG: e.SetNames0#1: 11
  //DEBUG: e.RuleNames0#1: 15
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr$1\1@0/4 AsIs: (/7 AsIs: e.Name0#1/5 AsIs: )/8 AsIs: t.SrcPos#1/9 AsIs: (/13 AsIs: e.SetNames0#1/11 HalfReuse: (/14 } e.Name0#1/5/19 )/21 )/22 Tile{ AsIs: (/17 AsIs: e.RuleNames0#1/15 AsIs: )/18 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[19], context[20], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseSetDescr_S1L1Z0]);
  refalrts::reinit_open_bracket(context[14]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[22] );
  refalrts::link_brackets( context[14], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[17];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSetDescr_S1L1Z1("ParseSetDescr$1\\1@1", COOKIE1_, COOKIE2_, func_gen_ParseSetDescr_S1L1Z1);


static refalrts::FnResult func_gen_ExtractAlternatives_L6Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & ExtractAlternatives\6@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ExtractAlternatives\6@1/4 t.new#1/7 t.new#2/9 t.new#3/11 e.new#4/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
    if( ! context[10] )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    // closed e.new#4 as range 5
    do {
      // </0 & ExtractAlternatives\6@1/4 t.Head#2/7 t.Flush#2/9 t.NextState#2/11 (/17 # TAlternative/19 t.SrcPos#2/20 )/18 e.Tail#2/13 >/1
      context[13] = context[5];
      context[14] = context[6];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::ident_left( identifiers[ident_TAlternative], context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.Tail#2 as range 13
      context[21] = refalrts::tvar_left( context[20], context[15], context[16] );
      if( ! context[21] )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      //DEBUG: t.Head#2: 7
      //DEBUG: t.Flush#2: 9
      //DEBUG: t.NextState#2: 11
      //DEBUG: e.Tail#2: 13
      //DEBUG: t.SrcPos#2: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </22 & Fetch/23 Tile{ AsIs: e.Tail#2/13 } </24 Tile{ HalfReuse: & Pipe/18 } & ExtractAlternatives\1/25 & ExtractAlternatives\2/26 & ExtractAlternatives\3/27 & ExtractAlternatives\4/28 & ExtractAlternatives\5/29 [*]/30 & ExtractAlternatives\6/31 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: t.Head#2/7 AsIs: t.Flush#2/9 AsIs: t.NextState#2/11 HalfReuse: )/17 HalfReuse: )/19 } {*}/32 >/33 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_Fetch]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_gen_ExtractAlternatives_L1]);
      refalrts::alloc_name(vm, context[26], functions[efunc_gen_ExtractAlternatives_L2]);
      refalrts::alloc_name(vm, context[27], functions[efunc_gen_ExtractAlternatives_L3]);
      refalrts::alloc_name(vm, context[28], functions[efunc_gen_ExtractAlternatives_L4]);
      refalrts::alloc_name(vm, context[29], functions[efunc_gen_ExtractAlternatives_L5]);
      refalrts::alloc_closure_head(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_gen_ExtractAlternatives_L6]);
      refalrts::alloc_unwrapped_closure(vm, context[32], context[30]);
      refalrts::alloc_close_call(vm, context[33]);
      refalrts::reinit_name(context[18], functions[efunc_Pipe]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_close_bracket(context[17]);
      refalrts::reinit_close_bracket(context[19]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[0], context[19] );
      refalrts::link_brackets( context[4], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[0], context[19] );
      res = refalrts::splice_evar( res, context[25], context[31] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      refalrts::wrap_closure( context[32] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives\6@1/4 t.Head#2/7 t.Flush#2/9 t.NextState#2/11 e.Tail#2/13 >/1
    context[13] = context[5];
    context[14] = context[6];
    // closed e.Tail#2 as range 13
    //DEBUG: t.Head#2: 7
    //DEBUG: t.Flush#2: 9
    //DEBUG: t.NextState#2: 11
    //DEBUG: e.Tail#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 AsIs: t.Head#2/7 AsIs: t.Flush#2/9 AsIs: t.NextState#2/11 } Tile{ HalfReuse: )/1 } )/15 Tile{ AsIs: e.Tail#2/13 } Tile{ ]] }
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[15] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives\6@1/4 e.dyn#0/2 >/1
  // closed e.dyn#0 as range 2
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & ExtractAlternatives\6@0/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_ExtractAlternatives_L6Z0]);
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

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L6Z1("ExtractAlternatives\\6@1", COOKIE1_, COOKIE2_, func_gen_ExtractAlternatives_L6Z1);


static refalrts::FnResult func_gen_ParseSentence_S1L1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 65 elems
  refalrts::Iter context[65];
  refalrts::zeros( context, 65 );
  // </0 & ParseSentence$1\1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSentence$1\1@1/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 (/17 e.new#4/15 )/18 e.new#5/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
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
  // closed e.new#2 as range 7
  // closed e.new#3 as range 11
  // closed e.new#4 as range 15
  // closed e.new#5 as range 2
  do {
    // </0 & ParseSentence$1\1@1/4 t.new#6/5 (/9 e.new#10/19 )/10 (/13 e.new#11/21 )/14 (/17 e.new#12/23 )/18 (/29 e.new#7/27 )/30 t.new#8/31 e.new#9/25 >/1
    context[19] = context[7];
    context[20] = context[8];
    context[21] = context[11];
    context[22] = context[12];
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[2];
    context[26] = context[3];
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    // closed e.new#10 as range 19
    // closed e.new#11 as range 21
    // closed e.new#12 as range 23
    // closed e.new#7 as range 27
    context[32] = refalrts::tvar_left( context[31], context[25], context[26] );
    if( ! context[32] )
      continue;
    // closed e.new#9 as range 25
    do {
      // </0 & ParseSentence$1\1@1/4 t.new#13/5 (/9 e.new#19/33 )/10 (/13 e.new#20/35 )/14 (/17 e.new#21/37 )/18 (/29 e.new#18/39 )/30 (/31 s.new#14/45 t.new#15/46 e.new#16/43 )/32 e.new#17/41 >/1
      context[33] = context[19];
      context[34] = context[20];
      context[35] = context[21];
      context[36] = context[22];
      context[37] = context[23];
      context[38] = context[24];
      context[39] = context[27];
      context[40] = context[28];
      context[41] = context[25];
      context[42] = context[26];
      context[43] = 0;
      context[44] = 0;
      if( ! refalrts::brackets_term( context[43], context[44], context[31] ) )
        continue;
      // closed e.new#19 as range 33
      // closed e.new#20 as range 35
      // closed e.new#21 as range 37
      // closed e.new#18 as range 39
      // closed e.new#17 as range 41
      if( ! refalrts::svar_left( context[45], context[43], context[44] ) )
        continue;
      context[47] = refalrts::tvar_left( context[46], context[43], context[44] );
      if( ! context[47] )
        continue;
      // closed e.new#16 as range 43
      do {
        // </0 & ParseSentence$1\1@1/4 t.SrcPos#1/5 (/9 e.Name0#1/48 )/10 (/13 e.SetNames0#1/50 )/14 (/17 e.RuleNames0#1/52 )/18 (/29 e.Body#2/54 )/30 (/31 # TDot/45 t.SrcPos#2/46 )/32 e.Tail#2/56 >/1
        context[48] = context[33];
        context[49] = context[34];
        context[50] = context[35];
        context[51] = context[36];
        context[52] = context[37];
        context[53] = context[38];
        context[54] = context[39];
        context[55] = context[40];
        context[56] = context[41];
        context[57] = context[42];
        if( ! refalrts::ident_term( identifiers[ident_TDot], context[45] ) )
          continue;
        if( ! refalrts::empty_seq( context[43], context[44] ) )
          continue;
        // closed e.Name0#1 as range 48
        // closed e.SetNames0#1 as range 50
        // closed e.RuleNames0#1 as range 52
        // closed e.Body#2 as range 54
        // closed e.Tail#2 as range 56
        //DEBUG: t.SrcPos#1: 5
        //DEBUG: t.SrcPos#2: 46
        //DEBUG: e.Name0#1: 48
        //DEBUG: e.SetNames0#1: 50
        //DEBUG: e.RuleNames0#1: 52
        //DEBUG: e.Body#2: 54
        //DEBUG: e.Tail#2: 56

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/46 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Sentence/4 AsIs: t.SrcPos#1/5 AsIs: (/9 AsIs: e.Name0#1/48 AsIs: )/10 } Tile{ AsIs: e.Body#2/54 } Tile{ AsIs: )/30 HalfReuse: </31 HalfReuse: & ParseElements/45 } Tile{ AsIs: (/13 AsIs: e.SetNames0#1/50 AsIs: )/14 AsIs: (/17 AsIs: e.RuleNames0#1/52 HalfReuse: (/18 } e.Name0#1/48/58 Tile{ HalfReuse: )/29 } Tile{ AsIs: )/32 AsIs: e.Tail#2/56 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[58], context[59], context[48], context[49]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_Sentence]);
        refalrts::reinit_open_call(context[31]);
        refalrts::reinit_name(context[45], functions[efunc_ParseElements]);
        refalrts::reinit_open_bracket(context[18]);
        refalrts::reinit_close_bracket(context[29]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[31] );
        refalrts::link_brackets( context[17], context[32] );
        refalrts::link_brackets( context[18], context[29] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[0], context[30] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[32];
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_evar( res, context[58], context[59] );
        res = refalrts::splice_evar( res, context[13], context[18] );
        res = refalrts::splice_evar( res, context[30], context[45] );
        res = refalrts::splice_evar( res, context[54], context[55] );
        refalrts::splice_to_freelist_open( vm, context[10], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseSentence$1\1@1/4 t.SrcPos#1/5 (/9 e.Name0#1/48 )/10 (/13 e.SetNames0#1/50 )/14 (/17 e.RuleNames0#1/52 )/18 (/29 e.Body#2/54 )/30 (/31 s.Type#1/45 t.0#0/46 e.1#0/56 )/32 e.Tail#2/58 >/1
      context[48] = context[33];
      context[49] = context[34];
      context[50] = context[35];
      context[51] = context[36];
      context[52] = context[37];
      context[53] = context[38];
      context[54] = context[39];
      context[55] = context[40];
      context[56] = context[43];
      context[57] = context[44];
      context[58] = context[41];
      context[59] = context[42];
      // closed e.Name0#1 as range 48
      // closed e.SetNames0#1 as range 50
      // closed e.RuleNames0#1 as range 52
      // closed e.Body#2 as range 54
      // closed e.1#0 as range 56
      // closed e.Tail#2 as range 58
      //DEBUG: t.SrcPos#1: 5
      //DEBUG: t.0#0: 46
      //DEBUG: s.Type#1: 45
      //DEBUG: e.Name0#1: 48
      //DEBUG: e.SetNames0#1: 50
      //DEBUG: e.RuleNames0#1: 52
      //DEBUG: e.Body#2: 54
      //DEBUG: e.1#0: 56
      //DEBUG: e.Tail#2: 58

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.SrcPos#1/5 {REMOVED TILE} e.Name0#1/48 {REMOVED TILE} e.SetNames0#1/50 {REMOVED TILE} e.RuleNames0#1/52 {REMOVED TILE} e.Body#2/54 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Tail#2/58 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.0#0/46 } Tile{ HalfReuse: 'U'/14 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'e'/18 HalfReuse: 'x'/29 } Tile{ HalfReuse: 'p'/10 HalfReuse: 'e'/13 } Tile{ HalfReuse: 'c'/32 } Tile{ HalfReuse: 't'/9 }"ed "/60 Tile{ HalfReuse: </30 HalfReuse: & DFA-TextFromToken/31 AsIs: s.Type#1/45 } Tile{ AsIs: e.1#0/56 } >/62" expected end of sentence"/63 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[60], context[61], "ed ", 3);
      refalrts::alloc_close_call(vm, context[62]);
      refalrts::alloc_chars(vm, context[63], context[64], " expected end of sentence", 25);
      refalrts::update_name(context[4], functions[efunc_ErrorAt]);
      refalrts::reinit_char(context[14], 'U');
      refalrts::reinit_char(context[17], 'n');
      refalrts::reinit_char(context[18], 'e');
      refalrts::reinit_char(context[29], 'x');
      refalrts::reinit_char(context[10], 'p');
      refalrts::reinit_char(context[13], 'e');
      refalrts::reinit_char(context[32], 'c');
      refalrts::reinit_char(context[9], 't');
      refalrts::reinit_open_call(context[30]);
      refalrts::reinit_name(context[31], functions[efunc_DFAm_TextFromToken]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[62] );
      refalrts::push_stack( vm, context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[62], context[64] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_evar( res, context[30], context[45] );
      res = refalrts::splice_evar( res, context[60], context[61] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[10], context[13] );
      res = refalrts::splice_evar( res, context[18], context[29] );
      res = refalrts::splice_evar( res, context[14], context[17] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSentence$1\1@1/4 t.SrcPos#1/5 (/9 e.Name0#1/33 )/10 (/13 e.SetNames0#1/35 )/14 (/17 e.RuleNames0#1/37 )/18 (/29 e.Body#2/39 )/30 t.Unexpected#2/31 e.Tail#2/41 >/1
    context[33] = context[19];
    context[34] = context[20];
    context[35] = context[21];
    context[36] = context[22];
    context[37] = context[23];
    context[38] = context[24];
    context[39] = context[27];
    context[40] = context[28];
    context[41] = context[25];
    context[42] = context[26];
    // closed e.Name0#1 as range 33
    // closed e.SetNames0#1 as range 35
    // closed e.RuleNames0#1 as range 37
    // closed e.Body#2 as range 39
    // closed e.Tail#2 as range 41
    //DEBUG: t.SrcPos#1: 5
    //DEBUG: t.Unexpected#2: 31
    //DEBUG: e.Name0#1: 33
    //DEBUG: e.SetNames0#1: 35
    //DEBUG: e.RuleNames0#1: 37
    //DEBUG: e.Body#2: 39
    //DEBUG: e.Tail#2: 41

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.SrcPos#1/5 {REMOVED TILE} e.Name0#1/33 {REMOVED TILE} e.SetNames0#1/35 {REMOVED TILE} e.RuleNames0#1/37 {REMOVED TILE} e.Body#2/39 {REMOVED TILE} {REMOVED TILE} e.Tail#2/41 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken*1/4 } Tile{ AsIs: t.Unexpected#2/31 } Tile{ HalfReuse: 'e'/14 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'd'/18 HalfReuse: ' '/29 } Tile{ HalfReuse: 'o'/10 HalfReuse: 'f'/13 } Tile{ HalfReuse: ' '/30 } Tile{ HalfReuse: 's'/9 }"entence"/43 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[43], context[44], "entence", 7);
    refalrts::update_name(context[4], functions[efunc_gen_UnexpectedToken_D1]);
    refalrts::reinit_char(context[14], 'e');
    refalrts::reinit_char(context[17], 'n');
    refalrts::reinit_char(context[18], 'd');
    refalrts::reinit_char(context[29], ' ');
    refalrts::reinit_char(context[10], 'o');
    refalrts::reinit_char(context[13], 'f');
    refalrts::reinit_char(context[30], ' ');
    refalrts::reinit_char(context[9], 's');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[18], context[29] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSentence$1\1@1/4 t.SrcPos#1/5 (/9 e.Name0#1/7 )/10 (/13 e.SetNames0#1/11 )/14 (/17 e.RuleNames0#1/15 )/18 e.dyn#0/2 >/1
  // closed e.Name0#1 as range 7
  // closed e.SetNames0#1 as range 11
  // closed e.RuleNames0#1 as range 15
  // closed e.dyn#0 as range 2
  //DEBUG: t.SrcPos#1: 5
  //DEBUG: e.Name0#1: 7
  //DEBUG: e.SetNames0#1: 11
  //DEBUG: e.RuleNames0#1: 15
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence$1\1@0/4 AsIs: t.SrcPos#1/5 AsIs: (/9 AsIs: e.Name0#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.SetNames0#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.RuleNames0#1/15 HalfReuse: (/18 } e.Name0#1/7/19 )/21 )/22 Tile{ AsIs: e.dyn#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[19], context[20], context[7], context[8]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseSentence_S1L1Z0]);
  refalrts::reinit_open_bracket(context[18]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[22] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_S1L1Z1("ParseSentence$1\\1@1", COOKIE1_, COOKIE2_, func_gen_ParseSentence_S1L1Z1);


//End of file
