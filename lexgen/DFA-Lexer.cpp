// This file automatically generated from 'DFA-Lexer.ref'
// Don't edit! Edit 'DFA-Lexer.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3380239190_1630330240
#define COOKIE1_ 3380239190U
#define COOKIE2_ 1630330240U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_EscapeString = 3,
  efunc_Inc = 4,
  efunc_Pipe = 5,
  efunc_Map = 6,
  efunc_gen_DFAm_Tokens_L1 = 7,
  efunc_LoTokens = 8,
  efunc_MapAccum = 9,
  efunc_gen_DFAm_Tokens_L2 = 10,
  efunc_gen_DFAm_Tokens_L3 = 11,
  efunc_Fetch = 12,
  efunc_Root = 13,
  efunc_FilterTokens = 14,
  efunc_Unescape = 15,
  efunc_gen_FilterTokens_L1 = 16,
  efunc_Chr = 17,
  efunc_gen_Unescape_S6L1 = 18,
  efunc_gen_CollectDigits_Z1 = 19,
  efunc_gen_CollectDigits_S1C1 = 20,
  efunc_Type = 21,
  efunc_Numb = 22,
  efunc_SetName = 23,
  efunc_ErrorFlush = 24,
  efunc_FlushName = 25,
  efunc_Literal = 26,
  efunc_Name = 27,
  efunc_FlushNameTail = 28,
  efunc_Mu = 29,
  efunc_Up = 30,
  efunc_Evm_met = 31,
  efunc_Residue = 32,
  efunc_u_u_Metau_Residue = 33,
  efunc_DFAm_TextFromToken = 34,
  efunc_DFAm_Tokens = 35,
  efunc_CollectDigits = 36,
  efunc_Flush = 37,
  efunc_Literalm_Escape = 38,
  efunc_Literalm_Quote = 39,
  efunc_Literalm_DecCode = 40,
  efunc_gen_CollectDigits_Z1S1C1 = 41,
  efunc_gen_CollectDigits_Z0 = 42,
};


enum ident {
  ident_TSetName = 0,
  ident_TLiteral = 1,
  ident_TName = 2,
  ident_TNamedFlush = 3,
  ident_TEquals = 4,
  ident_TDot = 5,
  ident_TAlternative = 6,
  ident_TFlush = 7,
  ident_TErrorFlush = 8,
  ident_TEOF = 9,
  ident_TNewLine = 10,
  ident_EOF = 11,
  ident_TokenError = 12,
  ident_TError = 13,
  ident_TPunctuation = 14,
  ident_TUnexpectedChar = 15,
  ident_Mu = 16,
  ident_Up = 17,
  ident_Evm_met = 18,
  ident_Residue = 19,
  ident_u_u_Metau_Residue = 20,
  ident_DFAm_TextFromToken = 21,
  ident_DFAm_Tokens = 22,
  ident_LoTokens = 23,
  ident_FilterTokens = 24,
  ident_Unescape = 25,
  ident_CollectDigits = 26,
  ident_Root = 27,
  ident_SetName = 28,
  ident_Flush = 29,
  ident_Literal = 30,
  ident_Name = 31,
  ident_ErrorFlush = 32,
  ident_FlushName = 33,
  ident_Literalm_Escape = 34,
  ident_Literalm_Quote = 35,
  ident_FlushNameTail = 36,
  ident_Literalm_DecCode = 37,
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
  // </0 & Mu/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
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
  // </0 & Residue/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
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
  // </0 & __Meta_Residue/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 AsIs: >/1 ]] }
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


static refalrts::FnResult func_DFAm_TextFromToken(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & DFA-TextFromToken/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DFA-TextFromToken/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & DFA-TextFromToken/4 # TSetName/5 e.Name/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TSetName], context[5] ) )
      continue;
    // closed e.Name as range 6
    //DEBUG: e.Name: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 'e'/4 HalfReuse: 't'/5 }" n"/8 Tile{ HalfReuse: 'a'/1 }"me "/10 Tile{ AsIs: e.Name/6 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], " n", 2);
    refalrts::alloc_chars(vm, context[10], context[11], "me ", 3);
    refalrts::reinit_char(context[0], 's');
    refalrts::reinit_char(context[4], 'e');
    refalrts::reinit_char(context[5], 't');
    refalrts::reinit_char(context[1], 'a');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DFA-TextFromToken/4 # TLiteral/5 e.Text/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TLiteral], context[5] ) )
      continue;
    // closed e.Text as range 6
    //DEBUG: e.Text: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"literal "/8 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeString/5 AsIs: e.Text/6 AsIs: >/1 } '\''/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "literal ", 8);
    refalrts::alloc_char(vm, context[10], '\'');
    refalrts::reinit_char(context[0], '\'');
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_EscapeString]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DFA-TextFromToken/4 # TName/5 e.Name/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TName], context[5] ) )
      continue;
    // closed e.Name as range 6
    //DEBUG: e.Name: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 } Tile{ HalfReuse: 'e'/1 } ' '/8 Tile{ AsIs: e.Name/6 } Tile{ ]] }
    refalrts::alloc_char(vm, context[8], ' ');
    refalrts::reinit_char(context[0], 'n');
    refalrts::reinit_char(context[4], 'a');
    refalrts::reinit_char(context[5], 'm');
    refalrts::reinit_char(context[1], 'e');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DFA-TextFromToken/4 # TNamedFlush/5 e.Name/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TNamedFlush], context[5] ) )
      continue;
    // closed e.Name as range 6
    //DEBUG: e.Name: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 }"ed"/8 Tile{ HalfReuse: ' '/1 }"flush "/10 Tile{ AsIs: e.Name/6 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "ed", 2);
    refalrts::alloc_chars(vm, context[10], context[11], "flush ", 6);
    refalrts::reinit_char(context[0], 'n');
    refalrts::reinit_char(context[4], 'a');
    refalrts::reinit_char(context[5], 'm');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DFA-TextFromToken/4 s.new3/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    do {
      // </0 & DFA-TextFromToken/4 # TEquals/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_TEquals], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '='/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char(context[4], '\"');
      refalrts::reinit_char(context[5], '=');
      refalrts::reinit_char(context[1], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DFA-TextFromToken/4 # TDot/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_TDot], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '.'/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char(context[4], '\"');
      refalrts::reinit_char(context[5], '.');
      refalrts::reinit_char(context[1], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DFA-TextFromToken/4 # TAlternative/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_TAlternative], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '|'/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char(context[4], '\"');
      refalrts::reinit_char(context[5], '|');
      refalrts::reinit_char(context[1], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DFA-TextFromToken/4 # TFlush/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TFlush], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'f'/0 HalfReuse: 'l'/4 HalfReuse: 'u'/5 HalfReuse: 's'/1 } 'h'/6 Tile{ ]] }
    refalrts::alloc_char(vm, context[6], 'h');
    refalrts::reinit_char(context[0], 'f');
    refalrts::reinit_char(context[4], 'l');
    refalrts::reinit_char(context[5], 'u');
    refalrts::reinit_char(context[1], 's');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DFA-TextFromToken/4 # TErrorFlush/5 e.Text/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TErrorFlush], context[5] ) )
      continue;
    // closed e.Text as range 6
    //DEBUG: e.Text: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"error flus"/8 Tile{ HalfReuse: 'h'/0 HalfReuse: ' '/4 HalfReuse: '\"'/5 AsIs: e.Text/6 HalfReuse: '\"'/1 ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "error flus", 10);
    refalrts::reinit_char(context[0], 'h');
    refalrts::reinit_char(context[4], ' ');
    refalrts::reinit_char(context[5], '\"');
    refalrts::reinit_char(context[1], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DFA-TextFromToken/4 # TEOF/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_TEOF], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'e'/0 HalfReuse: 'n'/4 HalfReuse: 'd'/5 HalfReuse: ' '/1 }"of file"/6 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "of file", 7);
  refalrts::reinit_char(context[0], 'e');
  refalrts::reinit_char(context[4], 'n');
  refalrts::reinit_char(context[5], 'd');
  refalrts::reinit_char(context[1], ' ');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DFAm_TextFromToken("DFA-TextFromToken", 0U, 0U, func_DFAm_TextFromToken);


static refalrts::FnResult func_gen_DFAm_Tokens_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & DFA-Tokens\1/4 (/7 e.Line/5 )/8 >/1
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
  // closed e.Line as range 5
  //DEBUG: e.Line: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DFA-Tokens\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Line/5 } Tile{ HalfReuse: '\n'/1 ]] }
  refalrts::reinit_char(context[1], '\n');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DFAm_Tokens_L1("DFA-Tokens\\1", COOKIE1_, COOKIE2_, func_gen_DFAm_Tokens_L1);


static refalrts::FnResult func_gen_DFAm_Tokens_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & DFA-Tokens\2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DFA-Tokens\2/4 s.new1/9 (/7 s.new2/10 e.new3/5 )/8 >/1
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
  // closed e.new3 as range 5
  do {
    // </0 & DFA-Tokens\2/4 s.LineNumber/9 (/7 # TNewLine/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TNewLine], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.LineNumber: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # TNewLine/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.LineNumber/9 HalfReuse: >/7 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_Inc]);
    refalrts::reinit_close_call(context[7]);
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DFA-Tokens\2/4 s.LineNumber/9 (/7 s.TokName/10 e.Content/5 )/8 >/1
  // closed e.Content as range 5
  //DEBUG: s.LineNumber: 9
  //DEBUG: s.TokName: 10
  //DEBUG: e.Content: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DFA-Tokens\2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.LineNumber/9 AsIs: (/7 AsIs: s.TokName/10 } Tile{ HalfReuse: s.LineNumber9 /8 } Tile{ AsIs: e.Content/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DFAm_Tokens_L2("DFA-Tokens\\2", COOKIE1_, COOKIE2_, func_gen_DFAm_Tokens_L2);


static refalrts::FnResult func_gen_DFAm_Tokens_L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & DFA-Tokens\3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DFA-Tokens\3/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & DFA-Tokens\3/4 s.LineNumber/5 e.Tokens/6 (/10 # EOF/12 s.EOFLineNumber/13 )/11 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_right( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    context[12] = refalrts::ident_left( identifiers[ident_EOF], context[8], context[9] );
    if( ! context[12] )
      continue;
    // closed e.Tokens as range 6
    if( ! refalrts::svar_left( context[13], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    //DEBUG: s.LineNumber: 5
    //DEBUG: e.Tokens: 6
    //DEBUG: s.EOFLineNumber: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DFA-Tokens\3/4 s.LineNumber/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens/6 } Tile{ AsIs: (/10 Reuse: # TEOF/12 AsIs: s.EOFLineNumber/13 AsIs: )/11 } Tile{ ]] }
    refalrts::update_ident(context[12], identifiers[ident_TEOF]);
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DFA-Tokens\3/4 s.LineNumber/5 e.Tokens/2 >/1
  // closed e.Tokens as range 2
  //DEBUG: s.LineNumber: 5
  //DEBUG: e.Tokens: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens/2 } Tile{ HalfReuse: (/0 HalfReuse: # TEOF/4 AsIs: s.LineNumber/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TEOF]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DFAm_Tokens_L3("DFA-Tokens\\3", COOKIE1_, COOKIE2_, func_gen_DFAm_Tokens_L3);


static refalrts::FnResult func_DFAm_Tokens(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DFA-Tokens/4 s.FirstLineNumber/5 e.Lines/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Lines as range 2
  //DEBUG: s.FirstLineNumber: 5
  //DEBUG: e.Lines: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Lines/2 } </6 & Pipe/7 (/8 & Map/9 & DFA-Tokens\1/10 )/11 & LoTokens/12 (/13 & MapAccum/14 & DFA-Tokens\2/15 </16 & Inc/17 Tile{ AsIs: s.FirstLineNumber/5 } >/18 )/19 & DFA-Tokens\3/20 >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Pipe]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_DFAm_Tokens_L1]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_LoTokens]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_DFAm_Tokens_L2]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_Inc]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_DFAm_Tokens_L3]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[6] );
  refalrts::link_brackets( context[13], context[19] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DFAm_Tokens("DFA-Tokens", 0U, 0U, func_DFAm_Tokens);


static refalrts::FnResult func_LoTokens(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & LoTokens/4 e.Text/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Text as range 2
  //DEBUG: e.Text: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FilterTokens/4 } </5 & Root/6 (/7 )/8 Tile{ AsIs: e.Text/2 } >/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Root]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_FilterTokens]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LoTokens("LoTokens", COOKIE1_, COOKIE2_, func_LoTokens);


static refalrts::FnResult func_gen_FilterTokens_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & FilterTokens\1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FilterTokens\1/4 (/7 s.new1/9 e.new2/5 )/8 >/1
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
  // closed e.new2 as range 5
  do {
    // </0 & FilterTokens\1/4 (/7 s.new3/9 e.new4/10 s.new5/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::svar_right( context[12], context[10], context[11] ) )
      continue;
    // closed e.new4 as range 10
    do {
      // </0 & FilterTokens\1/4 (/7 # TNewLine/9 '\n'/12 )/8 >/1
      if( ! refalrts::char_term( '\n', context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TNewLine], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TNewLine/9 HalfReuse: )/12 } Tile{ ]] }
      refalrts::reinit_close_bracket(context[12]);
      refalrts::link_brackets( context[7], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FilterTokens\1/4 (/7 # TSetName/9 e.SetName/13 ':'/12 )/8 >/1
      context[13] = context[10];
      context[14] = context[11];
      if( ! refalrts::char_term( ':', context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TSetName], context[9] ) )
        continue;
      // closed e.SetName as range 13
      //DEBUG: e.SetName: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TSetName/9 AsIs: e.SetName/13 HalfReuse: )/12 } Tile{ ]] }
      refalrts::reinit_close_bracket(context[12]);
      refalrts::link_brackets( context[7], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FilterTokens\1/4 (/7 # TFlush/9 '-'/12 )/8 >/1
      if( ! refalrts::char_term( '-', context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TFlush], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TFlush/9 HalfReuse: )/12 } Tile{ ]] }
      refalrts::reinit_close_bracket(context[12]);
      refalrts::link_brackets( context[7], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FilterTokens\1/4 (/7 # TErrorFlush/9 e.Message/13 '\"'/12 )/8 >/1
    context[13] = context[10];
    context[14] = context[11];
    if( ! refalrts::char_term( '\"', context[12] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_TErrorFlush], context[9] ) )
      continue;
    // closed e.Message as range 13
    //DEBUG: e.Message: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TErrorFlush/9 AsIs: e.Message/13 HalfReuse: )/12 } Tile{ ]] }
    refalrts::reinit_close_bracket(context[12]);
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FilterTokens\1/4 (/7 # TNamedFlush/9 e.FlushName/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TNamedFlush], context[9] ) )
      continue;
    // closed e.FlushName as range 10
    //DEBUG: e.FlushName: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TNamedFlush/9 AsIs: e.FlushName/10 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FilterTokens\1/4 (/7 # TLiteral/9 e.Content/10 '\''/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TLiteral], context[9] ) )
      continue;
    context[12] = refalrts::char_right( '\'', context[10], context[11] );
    if( ! context[12] )
      continue;
    // closed e.Content as range 10
    //DEBUG: e.Content: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TLiteral/4 HalfReuse: </7 HalfReuse: & Unescape/9 AsIs: e.Content/10 HalfReuse: >/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TLiteral]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_Unescape]);
    refalrts::reinit_close_call(context[12]);
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FilterTokens\1/4 (/7 # TokenError/9 e.Message/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TokenError], context[9] ) )
      continue;
    // closed e.Message as range 10
    //DEBUG: e.Message: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TError/9 AsIs: e.Message/10 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident(context[9], identifiers[ident_TError]);
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 s.new3/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TPunctuation], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    do {
      // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '='/12 )/8 >/1
      if( ! refalrts::char_term( '=', context[12] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TEquals/8 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[8], identifiers[ident_TEquals]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[12], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '.'/12 )/8 >/1
      if( ! refalrts::char_term( '.', context[12] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TDot/8 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[8], identifiers[ident_TDot]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[12], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FilterTokens\1/4 (/7 # TPunctuation/9 '|'/12 )/8 >/1
    if( ! refalrts::char_term( '|', context[12] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 (/7 # TPunctuation/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TAlternative/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[12]);
    refalrts::reinit_ident(context[8], identifiers[ident_TAlternative]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[12], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FilterTokens\1/4 (/7 # TName/9 e.Name/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TName], context[9] ) )
      continue;
    // closed e.Name as range 10
    //DEBUG: e.Name: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TName/9 AsIs: e.Name/10 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FilterTokens\1/4 (/7 # TUnexpectedChar/9 s.Char/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TUnexpectedChar], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.Char: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/13 # TError/14 'U'/15 Tile{ HalfReuse: 'n'/1 }"expected charac"/16 Tile{ HalfReuse: 't'/0 HalfReuse: 'e'/4 HalfReuse: 'r'/7 HalfReuse: ' '/9 AsIs: s.Char/12 AsIs: )/8 } Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[13]);
    refalrts::alloc_ident(vm, context[14], identifiers[ident_TError]);
    refalrts::alloc_char(vm, context[15], 'U');
    refalrts::alloc_chars(vm, context[16], context[17], "expected charac", 15);
    refalrts::reinit_char(context[1], 'n');
    refalrts::reinit_char(context[0], 't');
    refalrts::reinit_char(context[4], 'e');
    refalrts::reinit_char(context[7], 'r');
    refalrts::reinit_char(context[9], ' ');
    refalrts::link_brackets( context[13], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[13], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FilterTokens\1/4 (/7 # TEOF/9 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_TEOF], context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FilterTokens\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TEOF/9 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FilterTokens_L1("FilterTokens\\1", COOKIE1_, COOKIE2_, func_gen_FilterTokens_L1);


static refalrts::FnResult func_FilterTokens(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & FilterTokens/4 e.Tokens/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tokens as range 2
  //DEBUG: e.Tokens: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & FilterTokens\1/4 AsIs: e.Tokens/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_FilterTokens_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FilterTokens("FilterTokens", COOKIE1_, COOKIE2_, func_FilterTokens);


static refalrts::FnResult func_gen_Unescape_S6L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Unescape$6\1/4 s.Number/5 e.Tail$a/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail$a as range 2
  //DEBUG: s.Number: 5
  //DEBUG: e.Tail$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Chr/4 AsIs: s.Number/5 } >/6 </7 & Unescape/8 Tile{ AsIs: e.Tail$a/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Unescape]);
  refalrts::update_name(context[4], functions[efunc_Chr]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Unescape_S6L1("Unescape$6\\1", COOKIE1_, COOKIE2_, func_gen_Unescape_S6L1);


static refalrts::FnResult func_Unescape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Unescape/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Unescape/4 s.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & Unescape/4 s.new3/7 s.new4/10 e.new5/8 >/1
      context[8] = context[5];
      context[9] = context[6];
      if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
        continue;
      // closed e.new5 as range 8
      do {
        // </0 & Unescape/4 '\\'/7 s.new6/10 e.new7/11 >/1
        context[11] = context[8];
        context[12] = context[9];
        if( ! refalrts::char_term( '\\', context[7] ) )
          continue;
        // closed e.new7 as range 11
        do {
          // </0 & Unescape/4 '\\'/7 'n'/10 e.Tail/13 >/1
          context[13] = context[11];
          context[14] = context[12];
          if( ! refalrts::char_term( 'n', context[10] ) )
            continue;
          // closed e.Tail as range 13
          //DEBUG: e.Tail: 13

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: '\n'/4 HalfReuse: </7 HalfReuse: & Unescape/10 AsIs: e.Tail/13 AsIs: >/1 ]] }
          refalrts::reinit_char(context[4], '\n');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[10], functions[efunc_Unescape]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[4];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Unescape/4 '\\'/7 'r'/10 e.Tail/13 >/1
          context[13] = context[11];
          context[14] = context[12];
          if( ! refalrts::char_term( 'r', context[10] ) )
            continue;
          // closed e.Tail as range 13
          //DEBUG: e.Tail: 13

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: '\r'/4 HalfReuse: </7 HalfReuse: & Unescape/10 AsIs: e.Tail/13 AsIs: >/1 ]] }
          refalrts::reinit_char(context[4], '\r');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[10], functions[efunc_Unescape]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[4];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Unescape/4 '\\'/7 '\\'/10 e.Tail/13 >/1
          context[13] = context[11];
          context[14] = context[12];
          if( ! refalrts::char_term( '\\', context[10] ) )
            continue;
          // closed e.Tail as range 13
          //DEBUG: e.Tail: 13

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: '\\'/4 HalfReuse: </7 HalfReuse: & Unescape/10 AsIs: e.Tail/13 AsIs: >/1 ]] }
          refalrts::reinit_char(context[4], '\\');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[10], functions[efunc_Unescape]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[4];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Unescape/4 '\\'/7 't'/10 e.Tail/13 >/1
          context[13] = context[11];
          context[14] = context[12];
          if( ! refalrts::char_term( 't', context[10] ) )
            continue;
          // closed e.Tail as range 13
          //DEBUG: e.Tail: 13

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: '\t'/4 HalfReuse: </7 HalfReuse: & Unescape/10 AsIs: e.Tail/13 AsIs: >/1 ]] }
          refalrts::reinit_char(context[4], '\t');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[10], functions[efunc_Unescape]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[4];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Unescape/4 '\\'/7 '\''/10 e.Tail/13 >/1
          context[13] = context[11];
          context[14] = context[12];
          if( ! refalrts::char_term( '\'', context[10] ) )
            continue;
          // closed e.Tail as range 13
          //DEBUG: e.Tail: 13

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: </7 HalfReuse: & Unescape/10 AsIs: e.Tail/13 AsIs: >/1 ]] }
          refalrts::reinit_char(context[4], '\'');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[10], functions[efunc_Unescape]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[4];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Unescape/4 '\\'/7 'd'/10 e.Tail/13 >/1
        context[13] = context[11];
        context[14] = context[12];
        if( ! refalrts::char_term( 'd', context[10] ) )
          continue;
        // closed e.Tail as range 13
        //DEBUG: e.Tail: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 HalfReuse: & CollectDigits@1/10 AsIs: e.Tail/13 AsIs: >/1 } & Unescape$6\1/15 >/16 Tile{ ]] }
        refalrts::alloc_name(vm, context[15], functions[efunc_gen_Unescape_S6L1]);
        refalrts::alloc_close_call(vm, context[16]);
        refalrts::update_name(context[4], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[10], functions[efunc_gen_CollectDigits_Z1]);
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[15], context[16] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Unescape/4 '\''/7 '\''/10 e.Tail/11 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::char_term( '\'', context[7] ) )
        continue;
      if( ! refalrts::char_term( '\'', context[10] ) )
        continue;
      // closed e.Tail as range 11
      //DEBUG: e.Tail: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: </7 HalfReuse: & Unescape/10 AsIs: e.Tail/11 AsIs: >/1 ]] }
      refalrts::reinit_char(context[4], '\'');
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[10], functions[efunc_Unescape]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Unescape/4 s.Other/7 e.Tail/8 >/1
    context[8] = context[5];
    context[9] = context[6];
    // closed e.Tail as range 8
    //DEBUG: s.Other: 7
    //DEBUG: e.Tail: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Other/7 } Tile{ AsIs: </0 AsIs: & Unescape/4 } Tile{ AsIs: e.Tail/8 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Unescape/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Unescape/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Unescape("Unescape", COOKIE1_, COOKIE2_, func_Unescape);


static refalrts::FnResult func_CollectDigits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & CollectDigits/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CollectDigits/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & CollectDigits/4 (/7 e.Scanned/9 )/8 s.Next/13 e.Tail/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Scanned as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.Tail as range 11
    //DEBUG: e.Scanned: 9
    //DEBUG: s.Next: 13
    //DEBUG: e.Tail: 11
    //9: e.Scanned
    //11: e.Tail
    //13: s.Next
    //19: s.Next

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_CollectDigits_S1C1]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Type]);
    refalrts::copy_stvar(vm, context[19], context[13]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[14] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </14 & CollectDigits$1?1/18 'D'/19 '0'/20 s.Digit/21 >/15
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::call_left( context[16], context[17], context[14], context[15] );
      context[19] = refalrts::char_left( 'D', context[16], context[17] );
      if( ! context[19] )
        continue;
      context[20] = refalrts::char_left( '0', context[16], context[17] );
      if( ! context[20] )
        continue;
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      //DEBUG: e.Scanned: 9
      //DEBUG: s.Next: 13
      //DEBUG: e.Tail: 11
      //DEBUG: s.Digit: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Next/13 {REMOVED TILE} </14 & CollectDigits$1?1/18 'D'/19 {REMOVED TILE} s.Digit/21 >/15 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CollectDigits/4 AsIs: (/7 AsIs: e.Scanned/9 HalfReuse: s.Digit21 /8 } Tile{ HalfReuse: )/20 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_svar( context[8], context[21] );
      refalrts::reinit_close_bracket(context[20]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[14], context[15]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CollectDigits/4 (/7 e.Scanned/5 )/8 e.Tail/2 >/1
  // closed e.Scanned as range 5
  // closed e.Tail as range 2
  //DEBUG: e.Scanned: 5
  //DEBUG: e.Tail: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Numb/4 } Tile{ AsIs: e.Scanned/5 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail/2 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_Numb]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CollectDigits("CollectDigits", COOKIE1_, COOKIE2_, func_CollectDigits);


static refalrts::FnResult func_Root(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Root/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Root/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Root/4 (/7 e.new5/9 )/8 s.new3/13 e.new4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new4 as range 11
    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 ' '/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( ' ', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum/14 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 '\t'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\t', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum/14 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 '\r'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\r', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum/14 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 '\n'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\n', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TNewLine/18 Tile{ AsIs: e.Accum/14 } '\n'/19 )/20 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TNewLine]);
      refalrts::alloc_char(vm, context[19], '\n');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 ':'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( ':', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SetName/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SetName]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.new7/14 )/8 '!'/13 e.new6/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '!', context[13] ) )
        continue;
      // closed e.new7 as range 14
      // closed e.new6 as range 16
      do {
        // </0 & Root/4 (/7 e.new10/18 )/8 '!'/13 s.new8/22 e.new9/20 >/1
        context[18] = context[14];
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[17];
        // closed e.new10 as range 18
        if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
          continue;
        // closed e.new9 as range 20
        do {
          // </0 & Root/4 (/7 e.Accum/23 )/8 '!'/13 '-'/22 e./25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::char_term( '-', context[22] ) )
            continue;
          // closed e.Accum as range 23
          // closed e. as range 25
          //DEBUG: e.Accum: 23
          //DEBUG: e.: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} e.Accum/23 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TFlush/4 HalfReuse: '-'/7 } )/27 </28 Tile{ HalfReuse: & Root/8 HalfReuse: (/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[27]);
          refalrts::alloc_open_call(vm, context[28]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_ident(context[4], identifiers[ident_TFlush]);
          refalrts::reinit_char(context[7], '-');
          refalrts::reinit_name(context[8], functions[efunc_Root]);
          refalrts::reinit_open_bracket(context[13]);
          refalrts::reinit_close_bracket(context[22]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[28] );
          refalrts::link_brackets( context[13], context[22] );
          refalrts::link_brackets( context[0], context[27] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[27], context[28] );
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Root/4 (/7 e.Accum/23 )/8 '!'/13 '\"'/22 e./25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::char_term( '\"', context[22] ) )
            continue;
          // closed e.Accum as range 23
          // closed e. as range 25
          //DEBUG: e.Accum: 23
          //DEBUG: e.: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} & Root/4 (/7 e.Accum/23 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ErrorFlush/8 HalfReuse: (/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
          refalrts::reinit_name(context[8], functions[efunc_ErrorFlush]);
          refalrts::reinit_open_bracket(context[13]);
          refalrts::reinit_close_bracket(context[22]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[13], context[22] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Root/4 (/7 e.Accum/23 )/8 '!'/13 '#'/22 e./25 >/1
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::char_term( '#', context[22] ) )
          continue;
        // closed e.Accum as range 23
        // closed e. as range 25
        //DEBUG: e.Accum: 23
        //DEBUG: e.: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/7 e.Accum/23 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushName/4 } Tile{ HalfReuse: (/8 Reuse: '#'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_FlushName]);
        refalrts::reinit_open_bracket(context[8]);
        refalrts::update_char(context[13], '#');
        refalrts::reinit_close_bracket(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[8], context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Root/4 (/7 e.Accum/18 )/8 '!'/13 e.Text/20 >/1
      context[18] = context[14];
      context[19] = context[15];
      context[20] = context[16];
      context[21] = context[17];
      // closed e.Accum as range 18
      // closed e.Text as range 20
      //DEBUG: e.Accum: 18
      //DEBUG: e.Text: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum/18 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushName/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text/20 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushName]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 '\''/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\'', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 '='/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '=', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/18 Tile{ AsIs: e.Accum/14 } '='/19 )/20 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TPunctuation]);
      refalrts::alloc_char(vm, context[19], '=');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 '.'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '.', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/18 Tile{ AsIs: e.Accum/14 } '.'/19 )/20 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TPunctuation]);
      refalrts::alloc_char(vm, context[19], '.');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 '|'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '|', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TPunctuation/18 Tile{ AsIs: e.Accum/14 } '|'/19 )/20 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TPunctuation]);
      refalrts::alloc_char(vm, context[19], '|');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'A'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'A', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'B'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'B', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'C'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'C', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'D'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'D', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'E'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'E', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'F'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'F', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'G'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'G', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'G'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'G');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'H'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'H', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'H'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'H');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'I'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'I', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'I'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'I');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'J'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'J', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'J'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'J');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'K'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'K', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'K'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'K');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'L'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'L', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'L'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'L');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'M'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'M', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'M'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'M');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'N'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'N', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'N'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'N');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'O'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'O', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'P'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'P', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'Q'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Q', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'R'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'R', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'S'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'S', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'T'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'T', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'U'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'U', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'V'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'V', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'W'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'W', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'X'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'X', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'Y'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Y', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum/14 )/8 'Z'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Z', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'Z');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Root/4 (/7 e.Accum/14 )/8 s.Any/13 e.Text/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    // closed e.Accum as range 14
    // closed e.Text as range 16
    //DEBUG: s.Any: 13
    //DEBUG: e.Accum: 14
    //DEBUG: e.Text: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/18 # TUnexpectedChar/19 Tile{ AsIs: e.Accum/14 } Tile{ AsIs: s.Any/13 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } )/20 Tile{ AsIs: e.Text/16 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_ident(vm, context[19], identifiers[ident_TUnexpectedChar]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::link_brackets( context[18], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Root/4 (/7 e.Accum/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum as range 5
  //DEBUG: e.Accum: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TEOF/7 AsIs: e.Accum/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_TEOF]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Root("Root", COOKIE1_, COOKIE2_, func_Root);


static refalrts::FnResult func_SetName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & SetName/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & SetName/4 (/9 e.new1/7 )/10 s.new2/11 e.new3/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.new1 as range 7
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    // closed e.new3 as range 5
    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 ':'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( ':', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TSetName/4 } Tile{ AsIs: e.Accum/12 } ':'/16 Tile{ HalfReuse: )/9 } </17 & Root/18 Tile{ HalfReuse: (/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[16], ':');
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_Root]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TSetName]);
      refalrts::reinit_close_bracket(context[9]);
      refalrts::reinit_open_bracket(context[10]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[17] );
      refalrts::link_brackets( context[10], context[11] );
      refalrts::link_brackets( context[0], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 '0'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '0'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '0');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 '1'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '1'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '1');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 '2'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '2'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '2');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 '3'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '3'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '3');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 '4'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '4'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '4');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 '5'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '5'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '5');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 '6'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '6'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '6');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 '7'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '7'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '7');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 '8'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '8'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '8');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 '9'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '9', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '9'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '9');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'a'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'a', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'a'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'a');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'b'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'b', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'b'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'b');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'c'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'c', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'c'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'c');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'd'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'd', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'd'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'd');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'e'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'e', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'e'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'e');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'f'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'f', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'f'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'f');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'g'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'g', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'g'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'g');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'h'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'h', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'h'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'h');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'i'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'i', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'i'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'i');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'j'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'j', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'j'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'j');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'k'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'k', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'k'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'k');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'l'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'l', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'l'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'l');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'm'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'm', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'm'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'm');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'n'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'n', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'n'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'n');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'o'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'o', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'o'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'o');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'p'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'p', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'p'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'p');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'q'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'q', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'q'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'q');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'r'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'r', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'r'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'r');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 's'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 's', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 's'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 's');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 't'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 't', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 't'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 't');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'u'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'u', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'u'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'u');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'v'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'v', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'v'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'v');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'w'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'w', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'w'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'w');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'x'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'x', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'x'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'x');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'y'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'y', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'y'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'y');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'z'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'z', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'z'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'z');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'A'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'A'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'A');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'B'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'B'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'B');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'C'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'C'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'C');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'D'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'D'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'D');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'E'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'E'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'E');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'F'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'F'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'F');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'G'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'G', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'G'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'G');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'H'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'H', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'H'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'H');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'I'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'I', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'I'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'I');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'J'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'J', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'J'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'J');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'K'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'K', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'K'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'K');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'L'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'L', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'L'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'L');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/9 e.Accum/12 )/10 'M'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'M', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'M'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'M');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SetName/4 (/9 e.Accum/12 )/10 'N'/11 e.Text/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::char_term( 'N', context[11] ) )
      continue;
    // closed e.Accum as range 12
    // closed e.Text as range 14
    //DEBUG: e.Accum: 12
    //DEBUG: e.Text: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'N'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
    refalrts::reinit_char(context[10], 'N');
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetName/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & SetName/4 (/7 e.new5/9 )/8 s.new3/13 e.new4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new4 as range 11
    do {
      // </0 & SetName/4 (/7 e.Accum/14 )/8 'O'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'O', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum/14 )/8 'P'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'P', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum/14 )/8 'Q'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Q', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum/14 )/8 'R'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'R', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum/14 )/8 'S'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'S', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum/14 )/8 'T'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'T', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum/14 )/8 'U'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'U', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum/14 )/8 'V'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'V', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum/14 )/8 'W'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'W', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum/14 )/8 'X'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'X', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum/14 )/8 'Y'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Y', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum/14 )/8 'Z'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Z', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Z');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetName/4 (/7 e.Accum/14 )/8 '-'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '-', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '-'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '-');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SetName/4 (/7 e.Accum/14 )/8 '_'/13 e.Text/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '_', context[13] ) )
      continue;
    // closed e.Accum as range 14
    // closed e.Text as range 16
    //DEBUG: e.Accum: 14
    //DEBUG: e.Text: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '_'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
    refalrts::reinit_char(context[8], '_');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SetName/4 (/7 e.Accum/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Accum as range 9
    //DEBUG: e.Accum: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'e'/7 }"xpected end of set name, got EO"/11 Tile{ HalfReuse: 'F'/8 HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[11], context[12], "xpected end of set name, got EO", 31);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
    refalrts::reinit_char(context[7], 'e');
    refalrts::reinit_char(context[8], 'F');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetName/4 (/7 e.Accum/5 )/8 e.Text/2 >/1
  // closed e.Accum as range 5
  // closed e.Text as range 2
  //DEBUG: e.Accum: 5
  //DEBUG: e.Text: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"expected end of set name"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "expected end of set name", 24);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Root]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetName("SetName", COOKIE1_, COOKIE2_, func_SetName);


static refalrts::FnResult func_Flush(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Flush/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Flush/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Flush/4 (/7 e.new5/9 )/8 s.new3/13 e.new4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new4 as range 11
    do {
      // </0 & Flush/4 (/7 e.Accum/14 )/8 '-'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '-', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TFlush/4 } Tile{ AsIs: e.Accum/14 } '-'/18 Tile{ HalfReuse: )/7 } </19 & Root/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '-');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_Root]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TFlush]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flush/4 (/7 e.Accum/14 )/8 '\"'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\"', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorFlush/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ErrorFlush]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Flush/4 (/7 e.Accum/14 )/8 '#'/13 e.Text/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '#', context[13] ) )
      continue;
    // closed e.Accum as range 14
    // closed e.Text as range 16
    //DEBUG: e.Accum: 14
    //DEBUG: e.Text: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushName/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '#'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_FlushName]);
    refalrts::reinit_char(context[8], '#');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Flush/4 (/7 e.Accum/5 )/8 e.Text/2 >/1
  // closed e.Accum as range 5
  // closed e.Text as range 2
  //DEBUG: e.Accum: 5
  //DEBUG: e.Text: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushName/4 AsIs: (/7 AsIs: e.Accum/5 AsIs: )/8 AsIs: e.Text/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_FlushName]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flush("Flush", COOKIE1_, COOKIE2_, func_Flush);


static refalrts::FnResult func_Literal(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & Literal/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Literal/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Literal/4 (/7 e.new5/9 )/8 s.new3/13 e.new4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new4 as range 11
    do {
      // </0 & Literal/4 (/7 e.new7/14 )/8 '\\'/13 e.new6/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\\', context[13] ) )
        continue;
      // closed e.new7 as range 14
      // closed e.new6 as range 16
      do {
        // </0 & Literal/4 (/7 e.new10/18 )/8 '\\'/13 s.new8/22 e.new9/20 >/1
        context[18] = context[14];
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[17];
        // closed e.new10 as range 18
        if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
          continue;
        // closed e.new9 as range 20
        do {
          // </0 & Literal/4 (/7 e.Accum/23 )/8 '\\'/13 'n'/22 e./25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::char_term( 'n', context[22] ) )
            continue;
          // closed e.Accum as range 23
          // closed e. as range 25
          //DEBUG: e.Accum: 23
          //DEBUG: e.: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: '\\'/8 Reuse: 'n'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
          refalrts::reinit_char(context[8], '\\');
          refalrts::update_char(context[13], 'n');
          refalrts::reinit_close_bracket(context[22]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[22] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Literal/4 (/7 e.Accum/23 )/8 '\\'/13 'r'/22 e./25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::char_term( 'r', context[22] ) )
            continue;
          // closed e.Accum as range 23
          // closed e. as range 25
          //DEBUG: e.Accum: 23
          //DEBUG: e.: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: '\\'/8 Reuse: 'r'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
          refalrts::reinit_char(context[8], '\\');
          refalrts::update_char(context[13], 'r');
          refalrts::reinit_close_bracket(context[22]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[22] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Literal/4 (/7 e.Accum/23 )/8 '\\'/13 '\\'/22 e./25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::char_term( '\\', context[22] ) )
            continue;
          // closed e.Accum as range 23
          // closed e. as range 25
          //DEBUG: e.Accum: 23
          //DEBUG: e.: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: '\\'/8 AsIs: '\\'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
          refalrts::reinit_char(context[8], '\\');
          refalrts::reinit_close_bracket(context[22]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[22] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Literal/4 (/7 e.Accum/23 )/8 '\\'/13 't'/22 e./25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::char_term( 't', context[22] ) )
            continue;
          // closed e.Accum as range 23
          // closed e. as range 25
          //DEBUG: e.Accum: 23
          //DEBUG: e.: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: '\\'/8 Reuse: 't'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
          refalrts::reinit_char(context[8], '\\');
          refalrts::update_char(context[13], 't');
          refalrts::reinit_close_bracket(context[22]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[22] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Literal/4 (/7 e.Accum/23 )/8 '\\'/13 '\''/22 e./25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::char_term( '\'', context[22] ) )
            continue;
          // closed e.Accum as range 23
          // closed e. as range 25
          //DEBUG: e.Accum: 23
          //DEBUG: e.: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: '\\'/8 Reuse: '\''/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
          refalrts::reinit_char(context[8], '\\');
          refalrts::update_char(context[13], '\'');
          refalrts::reinit_close_bracket(context[22]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[22] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Literal/4 (/7 e.new12/23 )/8 '\\'/13 'd'/22 e.new11/25 >/1
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::char_term( 'd', context[22] ) )
          continue;
        // closed e.new12 as range 23
        // closed e.new11 as range 25
        do {
          // </0 & Literal/4 (/7 e.new15/27 )/8 '\\'/13 'd'/22 s.new13/31 e.new14/29 >/1
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          context[30] = context[26];
          // closed e.new15 as range 27
          if( ! refalrts::svar_left( context[31], context[29], context[30] ) )
            continue;
          // closed e.new14 as range 29
          do {
            // </0 & Literal/4 (/7 e.Accum/32 )/8 '\\'/13 'd'/22 '0'/31 e.0/34 >/1
            context[32] = context[27];
            context[33] = context[28];
            context[34] = context[29];
            context[35] = context[30];
            if( ! refalrts::char_term( '0', context[31] ) )
              continue;
            // closed e.Accum as range 32
            // closed e.0 as range 34
            //DEBUG: e.Accum: 32
            //DEBUG: e.0: 34

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/32 HalfReuse: '\\'/8 Reuse: 'd'/13 Reuse: '0'/22 HalfReuse: )/31 AsIs: e.0/34 AsIs: >/1 ]] }
            refalrts::reinit_char(context[8], '\\');
            refalrts::update_char(context[13], 'd');
            refalrts::update_char(context[22], '0');
            refalrts::reinit_close_bracket(context[31]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[7], context[31] );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Literal/4 (/7 e.Accum/32 )/8 '\\'/13 'd'/22 '1'/31 e.0/34 >/1
            context[32] = context[27];
            context[33] = context[28];
            context[34] = context[29];
            context[35] = context[30];
            if( ! refalrts::char_term( '1', context[31] ) )
              continue;
            // closed e.Accum as range 32
            // closed e.0 as range 34
            //DEBUG: e.Accum: 32
            //DEBUG: e.0: 34

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/32 HalfReuse: '\\'/8 Reuse: 'd'/13 Reuse: '1'/22 HalfReuse: )/31 AsIs: e.0/34 AsIs: >/1 ]] }
            refalrts::reinit_char(context[8], '\\');
            refalrts::update_char(context[13], 'd');
            refalrts::update_char(context[22], '1');
            refalrts::reinit_close_bracket(context[31]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[7], context[31] );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Literal/4 (/7 e.Accum/32 )/8 '\\'/13 'd'/22 '2'/31 e.0/34 >/1
            context[32] = context[27];
            context[33] = context[28];
            context[34] = context[29];
            context[35] = context[30];
            if( ! refalrts::char_term( '2', context[31] ) )
              continue;
            // closed e.Accum as range 32
            // closed e.0 as range 34
            //DEBUG: e.Accum: 32
            //DEBUG: e.0: 34

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/32 HalfReuse: '\\'/8 Reuse: 'd'/13 Reuse: '2'/22 HalfReuse: )/31 AsIs: e.0/34 AsIs: >/1 ]] }
            refalrts::reinit_char(context[8], '\\');
            refalrts::update_char(context[13], 'd');
            refalrts::update_char(context[22], '2');
            refalrts::reinit_close_bracket(context[31]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[7], context[31] );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Literal/4 (/7 e.Accum/32 )/8 '\\'/13 'd'/22 '3'/31 e.0/34 >/1
            context[32] = context[27];
            context[33] = context[28];
            context[34] = context[29];
            context[35] = context[30];
            if( ! refalrts::char_term( '3', context[31] ) )
              continue;
            // closed e.Accum as range 32
            // closed e.0 as range 34
            //DEBUG: e.Accum: 32
            //DEBUG: e.0: 34

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/32 HalfReuse: '\\'/8 Reuse: 'd'/13 Reuse: '3'/22 HalfReuse: )/31 AsIs: e.0/34 AsIs: >/1 ]] }
            refalrts::reinit_char(context[8], '\\');
            refalrts::update_char(context[13], 'd');
            refalrts::update_char(context[22], '3');
            refalrts::reinit_close_bracket(context[31]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[7], context[31] );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Literal/4 (/7 e.Accum/32 )/8 '\\'/13 'd'/22 '4'/31 e.0/34 >/1
            context[32] = context[27];
            context[33] = context[28];
            context[34] = context[29];
            context[35] = context[30];
            if( ! refalrts::char_term( '4', context[31] ) )
              continue;
            // closed e.Accum as range 32
            // closed e.0 as range 34
            //DEBUG: e.Accum: 32
            //DEBUG: e.0: 34

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/32 HalfReuse: '\\'/8 Reuse: 'd'/13 Reuse: '4'/22 HalfReuse: )/31 AsIs: e.0/34 AsIs: >/1 ]] }
            refalrts::reinit_char(context[8], '\\');
            refalrts::update_char(context[13], 'd');
            refalrts::update_char(context[22], '4');
            refalrts::reinit_close_bracket(context[31]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[7], context[31] );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Literal/4 (/7 e.Accum/32 )/8 '\\'/13 'd'/22 '5'/31 e.0/34 >/1
            context[32] = context[27];
            context[33] = context[28];
            context[34] = context[29];
            context[35] = context[30];
            if( ! refalrts::char_term( '5', context[31] ) )
              continue;
            // closed e.Accum as range 32
            // closed e.0 as range 34
            //DEBUG: e.Accum: 32
            //DEBUG: e.0: 34

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/32 HalfReuse: '\\'/8 Reuse: 'd'/13 Reuse: '5'/22 HalfReuse: )/31 AsIs: e.0/34 AsIs: >/1 ]] }
            refalrts::reinit_char(context[8], '\\');
            refalrts::update_char(context[13], 'd');
            refalrts::update_char(context[22], '5');
            refalrts::reinit_close_bracket(context[31]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[7], context[31] );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Literal/4 (/7 e.Accum/32 )/8 '\\'/13 'd'/22 '6'/31 e.0/34 >/1
            context[32] = context[27];
            context[33] = context[28];
            context[34] = context[29];
            context[35] = context[30];
            if( ! refalrts::char_term( '6', context[31] ) )
              continue;
            // closed e.Accum as range 32
            // closed e.0 as range 34
            //DEBUG: e.Accum: 32
            //DEBUG: e.0: 34

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/32 HalfReuse: '\\'/8 Reuse: 'd'/13 Reuse: '6'/22 HalfReuse: )/31 AsIs: e.0/34 AsIs: >/1 ]] }
            refalrts::reinit_char(context[8], '\\');
            refalrts::update_char(context[13], 'd');
            refalrts::update_char(context[22], '6');
            refalrts::reinit_close_bracket(context[31]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[7], context[31] );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Literal/4 (/7 e.Accum/32 )/8 '\\'/13 'd'/22 '7'/31 e.0/34 >/1
            context[32] = context[27];
            context[33] = context[28];
            context[34] = context[29];
            context[35] = context[30];
            if( ! refalrts::char_term( '7', context[31] ) )
              continue;
            // closed e.Accum as range 32
            // closed e.0 as range 34
            //DEBUG: e.Accum: 32
            //DEBUG: e.0: 34

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/32 HalfReuse: '\\'/8 Reuse: 'd'/13 Reuse: '7'/22 HalfReuse: )/31 AsIs: e.0/34 AsIs: >/1 ]] }
            refalrts::reinit_char(context[8], '\\');
            refalrts::update_char(context[13], 'd');
            refalrts::update_char(context[22], '7');
            refalrts::reinit_close_bracket(context[31]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[7], context[31] );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Literal/4 (/7 e.Accum/32 )/8 '\\'/13 'd'/22 '8'/31 e.0/34 >/1
            context[32] = context[27];
            context[33] = context[28];
            context[34] = context[29];
            context[35] = context[30];
            if( ! refalrts::char_term( '8', context[31] ) )
              continue;
            // closed e.Accum as range 32
            // closed e.0 as range 34
            //DEBUG: e.Accum: 32
            //DEBUG: e.0: 34

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/32 HalfReuse: '\\'/8 Reuse: 'd'/13 Reuse: '8'/22 HalfReuse: )/31 AsIs: e.0/34 AsIs: >/1 ]] }
            refalrts::reinit_char(context[8], '\\');
            refalrts::update_char(context[13], 'd');
            refalrts::update_char(context[22], '8');
            refalrts::reinit_close_bracket(context[31]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[7], context[31] );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Literal/4 (/7 e.Accum/32 )/8 '\\'/13 'd'/22 '9'/31 e.0/34 >/1
          context[32] = context[27];
          context[33] = context[28];
          context[34] = context[29];
          context[35] = context[30];
          if( ! refalrts::char_term( '9', context[31] ) )
            continue;
          // closed e.Accum as range 32
          // closed e.0 as range 34
          //DEBUG: e.Accum: 32
          //DEBUG: e.0: 34

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/32 HalfReuse: '\\'/8 Reuse: 'd'/13 Reuse: '9'/22 HalfReuse: )/31 AsIs: e.0/34 AsIs: >/1 ]] }
          refalrts::reinit_char(context[8], '\\');
          refalrts::update_char(context[13], 'd');
          refalrts::update_char(context[22], '9');
          refalrts::reinit_close_bracket(context[31]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[31] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Literal/4 (/7 e.Accum/27 )/8 '\\'/13 'd'/22 >/1
          context[27] = context[23];
          context[28] = context[24];
          if( ! refalrts::empty_seq( context[25], context[26] ) )
            continue;
          // closed e.Accum as range 27
          //DEBUG: e.Accum: 27

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} e.Accum/27 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of f"/29 Tile{ HalfReuse: 'i'/8 Reuse: 'l'/13 Reuse: 'e'/22 HalfReuse: )/1 ]] }
          refalrts::alloc_chars(vm, context[29], context[30], "nexpected end of f", 18);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
          refalrts::reinit_char(context[7], 'U');
          refalrts::reinit_char(context[8], 'i');
          refalrts::update_char(context[13], 'l');
          refalrts::update_char(context[22], 'e');
          refalrts::reinit_close_bracket(context[1]);
          refalrts::link_brackets( context[0], context[1] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[29], context[30] );
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Literal/4 (/7 e.Accum/27 )/8 '\\'/13 'd'/22 e./29 >/1
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[25];
        context[30] = context[26];
        // closed e.Accum as range 27
        // closed e. as range 29
        //DEBUG: e.Accum: 27
        //DEBUG: e.: 29

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} e.Accum/27 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'E'/7 }"xpected digits"/31 )/33 </34 Tile{ HalfReuse: & Root/8 HalfReuse: (/13 HalfReuse: )/22 AsIs: e./29 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[31], context[32], "xpected digits", 14);
        refalrts::alloc_close_bracket(vm, context[33]);
        refalrts::alloc_open_call(vm, context[34]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
        refalrts::reinit_char(context[7], 'E');
        refalrts::reinit_name(context[8], functions[efunc_Root]);
        refalrts::reinit_open_bracket(context[13]);
        refalrts::reinit_close_bracket(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[34] );
        refalrts::link_brackets( context[13], context[22] );
        refalrts::link_brackets( context[0], context[33] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[31], context[34] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Literal/4 (/7 e.Accum/18 )/8 '\\'/13 e.Text/20 >/1
      context[18] = context[14];
      context[19] = context[15];
      context[20] = context[16];
      context[21] = context[17];
      // closed e.Accum as range 18
      // closed e.Text as range 20
      //DEBUG: e.Accum: 18
      //DEBUG: e.Text: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum/18 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected escaped character"/22 )/24 </25 & Root/26 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text/20 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[22], context[23], "nexpected escaped character", 27);
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_Root]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
      refalrts::reinit_char(context[7], 'U');
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[22], context[26] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal/4 (/7 e.new7/14 )/8 '\''/13 e.new6/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\'', context[13] ) )
        continue;
      // closed e.new7 as range 14
      // closed e.new6 as range 16
      do {
        // </0 & Literal/4 (/7 e.Accum/18 )/8 '\''/13 '\''/22 e./20 >/1
        context[18] = context[14];
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[17];
        context[22] = refalrts::char_left( '\'', context[20], context[21] );
        if( ! context[22] )
          continue;
        // closed e.Accum as range 18
        // closed e. as range 20
        //DEBUG: e.Accum: 18
        //DEBUG: e.: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/18 HalfReuse: '\''/8 AsIs: '\''/13 HalfReuse: )/22 AsIs: e./20 AsIs: >/1 ]] }
        refalrts::reinit_char(context[8], '\'');
        refalrts::reinit_close_bracket(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[22] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Literal/4 (/7 e.Accum/18 )/8 '\''/13 e.Text/20 >/1
      context[18] = context[14];
      context[19] = context[15];
      context[20] = context[16];
      context[21] = context[17];
      // closed e.Accum as range 18
      // closed e.Text as range 20
      //DEBUG: e.Accum: 18
      //DEBUG: e.Text: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TLiteral/4 } Tile{ AsIs: e.Accum/18 } '\''/22 Tile{ HalfReuse: )/7 } </23 & Root/24 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text/20 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[22], '\'');
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_Root]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TLiteral]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Literal/4 (/7 e.Accum/14 )/8 '\n'/13 e.Text/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '\n', context[13] ) )
      continue;
    // closed e.Accum as range 14
    // closed e.Text as range 16
    //DEBUG: e.Accum: 14
    //DEBUG: e.Text: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum/14 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of line at literal"/18 )/20 </21 & Root/22 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[18], context[19], "nexpected end of line at literal", 32);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Root]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
    refalrts::reinit_char(context[7], 'U');
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[18], context[22] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Literal/4 (/7 e.Accum/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Accum as range 9
    //DEBUG: e.Accum: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of file at litera"/11 Tile{ HalfReuse: 'l'/8 HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[11], context[12], "nexpected end of file at litera", 31);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
    refalrts::reinit_char(context[7], 'U');
    refalrts::reinit_char(context[8], 'l');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Literal/4 (/7 e.Accum/5 )/8 s.Any/9 e.Text/2 >/1
  // closed e.Accum as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text as range 2
  //DEBUG: e.Accum: 5
  //DEBUG: s.Any: 9
  //DEBUG: e.Text: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Any/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Accum/5 HalfReuse: s.Any9 /8 } )/10 Tile{ AsIs: e.Text/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Literal("Literal", COOKIE1_, COOKIE2_, func_Literal);


static refalrts::FnResult func_Name(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Name/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Name/4 (/9 e.new1/7 )/10 s.new2/11 e.new3/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.new1 as range 7
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    // closed e.new3 as range 5
    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 '0'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '0'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '0');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 '1'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '1'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '1');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 '2'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '2'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '2');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 '3'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '3'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '3');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 '4'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '4'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '4');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 '5'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '5'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '5');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 '6'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '6'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '6');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 '7'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '7'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '7');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 '8'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '8'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '8');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 '9'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '9', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '9'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '9');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'a'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'a', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'a'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'a');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'b'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'b', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'b'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'b');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'c'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'c', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'c'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'c');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'd'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'd', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'd'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'd');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'e'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'e', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'e'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'e');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'f'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'f', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'f'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'f');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'g'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'g', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'g'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'g');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'h'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'h', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'h'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'h');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'i'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'i', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'i'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'i');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'j'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'j', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'j'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'j');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'k'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'k', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'k'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'k');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'l'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'l', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'l'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'l');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'm'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'm', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'm'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'm');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'n'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'n', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'n'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'n');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'o'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'o', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'o'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'o');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'p'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'p', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'p'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'p');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'q'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'q', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'q'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'q');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'r'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'r', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'r'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'r');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 's'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 's', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 's'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 's');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 't'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 't', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 't'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 't');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'u'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'u', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'u'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'u');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'v'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'v', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'v'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'v');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'w'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'w', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'w'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'w');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'x'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'x', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'x'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'x');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'y'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'y', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'y'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'y');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'z'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'z', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'z'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'z');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'A'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'A'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'A');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'B'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'B'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'B');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'C'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'C'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'C');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'D'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'D'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'D');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'E'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'E'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'E');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'F'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'F'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'F');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'G'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'G', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'G'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'G');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'H'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'H', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'H'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'H');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'I'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'I', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'I'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'I');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'J'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'J', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'J'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'J');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'K'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'K', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'K'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'K');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'L'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'L', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'L'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'L');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'M'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'M', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'M'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'M');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/9 e.Accum/12 )/10 'N'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'N'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'N');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Name/4 (/9 e.Accum/12 )/10 'O'/11 e.Text/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::char_term( 'O', context[11] ) )
      continue;
    // closed e.Accum as range 12
    // closed e.Text as range 14
    //DEBUG: e.Accum: 12
    //DEBUG: e.Text: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'O'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
    refalrts::reinit_char(context[10], 'O');
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Name/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Name/4 (/7 e.new5/9 )/8 s.new3/13 e.new4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new4 as range 11
    do {
      // </0 & Name/4 (/7 e.Accum/14 )/8 'P'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'P', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum/14 )/8 'Q'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Q', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum/14 )/8 'R'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'R', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum/14 )/8 'S'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'S', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum/14 )/8 'T'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'T', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum/14 )/8 'U'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'U', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum/14 )/8 'V'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'V', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum/14 )/8 'W'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'W', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum/14 )/8 'X'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'X', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum/14 )/8 'Y'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Y', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum/14 )/8 'Z'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Z', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Z');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum/14 )/8 '-'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '-', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '-'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '-');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Name/4 (/7 e.Accum/14 )/8 '_'/13 e.Text/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '_', context[13] ) )
      continue;
    // closed e.Accum as range 14
    // closed e.Text as range 16
    //DEBUG: e.Accum: 14
    //DEBUG: e.Text: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '_'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
    refalrts::reinit_char(context[8], '_');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Name/4 (/7 e.Accum/5 )/8 e.Text/2 >/1
  // closed e.Accum as range 5
  // closed e.Text as range 2
  //DEBUG: e.Accum: 5
  //DEBUG: e.Text: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TName/10 Tile{ AsIs: e.Accum/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TName]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Root]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Name("Name", COOKIE1_, COOKIE2_, func_Name);


static refalrts::FnResult func_ErrorFlush(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ErrorFlush/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & ErrorFlush/4 (/9 e.new1/7 )/10 s.new2/11 e.new3/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.new1 as range 7
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    // closed e.new3 as range 5
    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 '0'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '0'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '0');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 '1'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '1'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '1');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 '2'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '2'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '2');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 '3'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '3'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '3');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 '4'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '4'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '4');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 '5'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '5'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '5');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 '6'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '6'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '6');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 '7'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '7'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '7');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 '8'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '8'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '8');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 '9'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '9', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '9'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '9');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'a'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'a', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'a'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'a');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'b'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'b', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'b'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'b');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'c'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'c', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'c'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'c');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'd'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'd', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'd'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'd');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'e'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'e', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'e'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'e');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'f'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'f', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'f'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'f');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'g'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'g', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'g'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'g');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'h'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'h', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'h'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'h');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'i'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'i', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'i'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'i');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'j'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'j', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'j'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'j');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'k'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'k', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'k'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'k');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'l'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'l', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'l'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'l');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'm'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'm', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'm'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'm');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'n'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'n', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'n'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'n');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'o'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'o', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'o'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'o');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'p'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'p', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'p'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'p');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'q'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'q', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'q'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'q');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'r'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'r', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'r'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'r');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 's'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 's', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 's'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 's');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 't'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 't', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 't'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 't');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'u'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'u', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'u'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'u');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'v'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'v', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'v'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'v');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'w'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'w', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'w'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'w');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'x'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'x', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'x'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'x');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'y'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'y', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'y'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'y');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'z'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'z', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'z'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'z');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'A'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'A'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'A');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'B'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'B'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'B');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'C'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'C'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'C');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'D'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'D'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'D');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'E'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'E'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'E');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'F'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'F'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'F');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'G'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'G', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'G'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'G');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'H'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'H', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'H'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'H');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'I'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'I', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'I'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'I');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'J'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'J', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'J'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'J');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'K'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'K', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'K'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'K');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'L'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'L', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'L'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'L');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'M'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'M', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'M'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'M');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'N'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'N'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'N');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ErrorFlush/4 (/9 e.Accum/12 )/10 'O'/11 e.Text/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::char_term( 'O', context[11] ) )
      continue;
    // closed e.Accum as range 12
    // closed e.Text as range 14
    //DEBUG: e.Accum: 12
    //DEBUG: e.Text: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'O'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
    refalrts::reinit_char(context[10], 'O');
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ErrorFlush/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & ErrorFlush/4 (/7 e.new5/9 )/8 s.new3/13 e.new4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new4 as range 11
    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 'P'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'P', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 'Q'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Q', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 'R'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'R', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 'S'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'S', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 'T'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'T', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 'U'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'U', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 'V'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'V', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 'W'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'W', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 'X'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'X', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 'Y'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Y', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 'Z'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Z', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Z');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '-'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '-', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '-'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '-');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '_'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '_', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '_'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '_');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 ' '/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( ' ', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: ' '/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], ' ');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '\t'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\t', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '\t'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '\t');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 ','/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( ',', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: ','/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], ',');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '.'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '.', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '.'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '.');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 ':'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( ':', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: ':'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], ':');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 ';'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( ';', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: ';'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], ';');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '('/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '(', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '('/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '(');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 ')'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( ')', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: ')'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], ')');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '{'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '{', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '{'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '{');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '}'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '}', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '}'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '}');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '['/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '[', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '['/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '[');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 ']'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( ']', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: ']'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], ']');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '*'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '*', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '*'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '*');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '&'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '&', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '&'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '&');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '!'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '!', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '!'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '!');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '@'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '@', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '@'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '@');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '#'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '#', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '#'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '#');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '$'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '$', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '$'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '$');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '%'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '%', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '%'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '%');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '^'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '^', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '^'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '^');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '='/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '=', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '='/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '=');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '+'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '+', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '+'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '+');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '/'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '/', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorFlush/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '/'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '/');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ErrorFlush/4 (/7 e.Accum/14 )/8 '\"'/13 e.Text/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '\"', context[13] ) )
      continue;
    // closed e.Accum as range 14
    // closed e.Text as range 16
    //DEBUG: e.Accum: 14
    //DEBUG: e.Text: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TErrorFlush/4 } Tile{ AsIs: e.Accum/14 } '\"'/18 Tile{ HalfReuse: )/7 } </19 & Root/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[18], '\"');
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Root]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TErrorFlush]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ErrorFlush/4 (/7 e.Accum/5 )/8 e.Text/2 >/1
  // closed e.Accum as range 5
  // closed e.Text as range 2
  //DEBUG: e.Accum: 5
  //DEBUG: e.Text: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected error text or double quote"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Expected error text or double quote", 35);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Root]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ErrorFlush("ErrorFlush", COOKIE1_, COOKIE2_, func_ErrorFlush);


static refalrts::FnResult func_FlushName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & FlushName/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FlushName/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & FlushName/4 (/7 e.new5/9 )/8 s.new3/13 e.new4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new4 as range 11
    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'A'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'A', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'B'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'B', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'C'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'C', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'D'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'D', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'E'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'E', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'F'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'F', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'G'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'G', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'G'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'G');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'H'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'H', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'H'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'H');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'I'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'I', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'I'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'I');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'J'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'J', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'J'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'J');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'K'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'K', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'K'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'K');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'L'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'L', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'L'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'L');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'M'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'M', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'M'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'M');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'N'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'N', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'N'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'N');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'O'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'O', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'P'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'P', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'Q'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Q', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'R'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'R', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'S'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'S', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'T'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'T', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'U'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'U', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'V'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'V', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'W'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'W', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'X'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'X', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushName/4 (/7 e.Accum/14 )/8 'Y'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Y', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FlushName/4 (/7 e.Accum/14 )/8 'Z'/13 e.Text/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( 'Z', context[13] ) )
      continue;
    // closed e.Accum as range 14
    // closed e.Text as range 16
    //DEBUG: e.Accum: 14
    //DEBUG: e.Text: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_FlushNameTail]);
    refalrts::reinit_char(context[8], 'Z');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlushName/4 (/7 e.Accum/5 )/8 e.Text/2 >/1
  // closed e.Accum as range 5
  // closed e.Text as range 2
  //DEBUG: e.Accum: 5
  //DEBUG: e.Text: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected flush name"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Expected flush name", 19);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Root]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FlushName("FlushName", COOKIE1_, COOKIE2_, func_FlushName);


static refalrts::FnResult func_Literalm_Escape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Literal-Escape/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Literal-Escape/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Literal-Escape/4 (/7 e.new5/9 )/8 s.new3/13 e.new4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new4 as range 11
    do {
      // </0 & Literal-Escape/4 (/7 e.Accum/14 )/8 'n'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'n', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'n'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], 'n');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-Escape/4 (/7 e.Accum/14 )/8 'r'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'r', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'r'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], 'r');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-Escape/4 (/7 e.Accum/14 )/8 '\\'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\\', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '\\'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], '\\');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-Escape/4 (/7 e.Accum/14 )/8 't'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 't', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 't'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], 't');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-Escape/4 (/7 e.Accum/14 )/8 '\''/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\'', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '\''/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], '\'');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Literal-Escape/4 (/7 e.new7/14 )/8 'd'/13 e.new6/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( 'd', context[13] ) )
      continue;
    // closed e.new7 as range 14
    // closed e.new6 as range 16
    do {
      // </0 & Literal-Escape/4 (/7 e.new10/18 )/8 'd'/13 s.new8/22 e.new9/20 >/1
      context[18] = context[14];
      context[19] = context[15];
      context[20] = context[16];
      context[21] = context[17];
      // closed e.new10 as range 18
      if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
        continue;
      // closed e.new9 as range 20
      do {
        // </0 & Literal-Escape/4 (/7 e.Accum/23 )/8 'd'/13 '0'/22 e./25 >/1
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::char_term( '0', context[22] ) )
          continue;
        // closed e.Accum as range 23
        // closed e. as range 25
        //DEBUG: e.Accum: 23
        //DEBUG: e.: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: 'd'/8 Reuse: '0'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Literal]);
        refalrts::reinit_char(context[8], 'd');
        refalrts::update_char(context[13], '0');
        refalrts::reinit_close_bracket(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[22] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Literal-Escape/4 (/7 e.Accum/23 )/8 'd'/13 '1'/22 e./25 >/1
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::char_term( '1', context[22] ) )
          continue;
        // closed e.Accum as range 23
        // closed e. as range 25
        //DEBUG: e.Accum: 23
        //DEBUG: e.: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: 'd'/8 Reuse: '1'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Literal]);
        refalrts::reinit_char(context[8], 'd');
        refalrts::update_char(context[13], '1');
        refalrts::reinit_close_bracket(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[22] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Literal-Escape/4 (/7 e.Accum/23 )/8 'd'/13 '2'/22 e./25 >/1
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::char_term( '2', context[22] ) )
          continue;
        // closed e.Accum as range 23
        // closed e. as range 25
        //DEBUG: e.Accum: 23
        //DEBUG: e.: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: 'd'/8 Reuse: '2'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Literal]);
        refalrts::reinit_char(context[8], 'd');
        refalrts::update_char(context[13], '2');
        refalrts::reinit_close_bracket(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[22] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Literal-Escape/4 (/7 e.Accum/23 )/8 'd'/13 '3'/22 e./25 >/1
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::char_term( '3', context[22] ) )
          continue;
        // closed e.Accum as range 23
        // closed e. as range 25
        //DEBUG: e.Accum: 23
        //DEBUG: e.: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: 'd'/8 Reuse: '3'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Literal]);
        refalrts::reinit_char(context[8], 'd');
        refalrts::update_char(context[13], '3');
        refalrts::reinit_close_bracket(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[22] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Literal-Escape/4 (/7 e.Accum/23 )/8 'd'/13 '4'/22 e./25 >/1
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::char_term( '4', context[22] ) )
          continue;
        // closed e.Accum as range 23
        // closed e. as range 25
        //DEBUG: e.Accum: 23
        //DEBUG: e.: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: 'd'/8 Reuse: '4'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Literal]);
        refalrts::reinit_char(context[8], 'd');
        refalrts::update_char(context[13], '4');
        refalrts::reinit_close_bracket(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[22] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Literal-Escape/4 (/7 e.Accum/23 )/8 'd'/13 '5'/22 e./25 >/1
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::char_term( '5', context[22] ) )
          continue;
        // closed e.Accum as range 23
        // closed e. as range 25
        //DEBUG: e.Accum: 23
        //DEBUG: e.: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: 'd'/8 Reuse: '5'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Literal]);
        refalrts::reinit_char(context[8], 'd');
        refalrts::update_char(context[13], '5');
        refalrts::reinit_close_bracket(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[22] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Literal-Escape/4 (/7 e.Accum/23 )/8 'd'/13 '6'/22 e./25 >/1
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::char_term( '6', context[22] ) )
          continue;
        // closed e.Accum as range 23
        // closed e. as range 25
        //DEBUG: e.Accum: 23
        //DEBUG: e.: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: 'd'/8 Reuse: '6'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Literal]);
        refalrts::reinit_char(context[8], 'd');
        refalrts::update_char(context[13], '6');
        refalrts::reinit_close_bracket(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[22] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Literal-Escape/4 (/7 e.Accum/23 )/8 'd'/13 '7'/22 e./25 >/1
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::char_term( '7', context[22] ) )
          continue;
        // closed e.Accum as range 23
        // closed e. as range 25
        //DEBUG: e.Accum: 23
        //DEBUG: e.: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: 'd'/8 Reuse: '7'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Literal]);
        refalrts::reinit_char(context[8], 'd');
        refalrts::update_char(context[13], '7');
        refalrts::reinit_close_bracket(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[22] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Literal-Escape/4 (/7 e.Accum/23 )/8 'd'/13 '8'/22 e./25 >/1
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::char_term( '8', context[22] ) )
          continue;
        // closed e.Accum as range 23
        // closed e. as range 25
        //DEBUG: e.Accum: 23
        //DEBUG: e.: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: 'd'/8 Reuse: '8'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Literal]);
        refalrts::reinit_char(context[8], 'd');
        refalrts::update_char(context[13], '8');
        refalrts::reinit_close_bracket(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[22] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Literal-Escape/4 (/7 e.Accum/23 )/8 'd'/13 '9'/22 e./25 >/1
      context[23] = context[18];
      context[24] = context[19];
      context[25] = context[20];
      context[26] = context[21];
      if( ! refalrts::char_term( '9', context[22] ) )
        continue;
      // closed e.Accum as range 23
      // closed e. as range 25
      //DEBUG: e.Accum: 23
      //DEBUG: e.: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/23 HalfReuse: 'd'/8 Reuse: '9'/13 HalfReuse: )/22 AsIs: e./25 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], 'd');
      refalrts::update_char(context[13], '9');
      refalrts::reinit_close_bracket(context[22]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[22] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-Escape/4 (/7 e.Accum/18 )/8 'd'/13 >/1
      context[18] = context[14];
      context[19] = context[15];
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.Accum as range 18
      //DEBUG: e.Accum: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum/18 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of fi"/20 Tile{ HalfReuse: 'l'/8 Reuse: 'e'/13 HalfReuse: )/1 ]] }
      refalrts::alloc_chars(vm, context[20], context[21], "nexpected end of fi", 19);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
      refalrts::reinit_char(context[7], 'U');
      refalrts::reinit_char(context[8], 'l');
      refalrts::update_char(context[13], 'e');
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Literal-Escape/4 (/7 e.Accum/18 )/8 'd'/13 e.Text/20 >/1
    context[18] = context[14];
    context[19] = context[15];
    context[20] = context[16];
    context[21] = context[17];
    // closed e.Accum as range 18
    // closed e.Text as range 20
    //DEBUG: e.Accum: 18
    //DEBUG: e.Text: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum/18 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'E'/7 }"xpected digits"/22 )/24 </25 & Root/26 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text/20 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[22], context[23], "xpected digits", 14);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Root]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[25] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[22], context[26] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Literal-Escape/4 (/7 e.Accum/5 )/8 e.Text/2 >/1
  // closed e.Accum as range 5
  // closed e.Text as range 2
  //DEBUG: e.Accum: 5
  //DEBUG: e.Text: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"Unexpected escaped character"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Unexpected escaped character", 28);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Root]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Literalm_Escape("Literal-Escape", COOKIE1_, COOKIE2_, func_Literalm_Escape);


static refalrts::FnResult func_Literalm_Quote(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Literal-Quote/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Literal-Quote/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Literal-Quote/4 (/7 e.Accum/9 )/8 '\''/13 e.Text/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\'', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum as range 9
    // closed e.Text as range 11
    //DEBUG: e.Accum: 9
    //DEBUG: e.Text: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/9 HalfReuse: '\''/8 HalfReuse: )/13 AsIs: e.Text/11 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Literal]);
    refalrts::reinit_char(context[8], '\'');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Literal-Quote/4 (/7 e.Accum/5 )/8 e.Text/2 >/1
  // closed e.Accum as range 5
  // closed e.Text as range 2
  //DEBUG: e.Accum: 5
  //DEBUG: e.Text: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TLiteral/10 Tile{ AsIs: e.Accum/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TLiteral]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Root]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Literalm_Quote("Literal-Quote", COOKIE1_, COOKIE2_, func_Literalm_Quote);


static refalrts::FnResult func_FlushNameTail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & FlushNameTail/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & FlushNameTail/4 (/9 e.new1/7 )/10 s.new2/11 e.new3/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.new1 as range 7
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    // closed e.new3 as range 5
    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 '0'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '0'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '0');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 '1'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '1'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '1');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 '2'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '2'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '2');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 '3'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '3'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '3');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 '4'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '4'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '4');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 '5'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '5'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '5');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 '6'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '6'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '6');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 '7'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '7'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '7');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 '8'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '8'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '8');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 '9'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( '9', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: '9'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], '9');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'a'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'a', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'a'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'a');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'b'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'b', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'b'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'b');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'c'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'c', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'c'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'c');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'd'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'd', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'd'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'd');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'e'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'e', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'e'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'e');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'f'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'f', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'f'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'f');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'g'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'g', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'g'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'g');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'h'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'h', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'h'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'h');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'i'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'i', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'i'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'i');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'j'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'j', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'j'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'j');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'k'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'k', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'k'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'k');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'l'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'l', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'l'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'l');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'm'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'm', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'm'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'm');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'n'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'n', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'n'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'n');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'o'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'o', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'o'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'o');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'p'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'p', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'p'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'p');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'q'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'q', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'q'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'q');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'r'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'r', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'r'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'r');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 's'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 's', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 's'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 's');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 't'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 't', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 't'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 't');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'u'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'u', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'u'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'u');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'v'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'v', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'v'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'v');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'w'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'w', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'w'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'w');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'x'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'x', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'x'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'x');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'y'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'y', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'y'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'y');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'z'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'z', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'z'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'z');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'A'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'A'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'A');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'B'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'B'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'B');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'C'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'C'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'C');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'D'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'D'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'D');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'E'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'E'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'E');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'F'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'F'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'F');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'G'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'G', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'G'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'G');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'H'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'H', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'H'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'H');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'I'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'I', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'I'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'I');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'J'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'J', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'J'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'J');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'K'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'K', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'K'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'K');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'L'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'L', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'L'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'L');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'M'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'M', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'M'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'M');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'N'/11 e.Text/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      // closed e.Accum as range 12
      // closed e.Text as range 14
      //DEBUG: e.Accum: 12
      //DEBUG: e.Text: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'N'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[10], 'N');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FlushNameTail/4 (/9 e.Accum/12 )/10 'O'/11 e.Text/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::char_term( 'O', context[11] ) )
      continue;
    // closed e.Accum as range 12
    // closed e.Text as range 14
    //DEBUG: e.Accum: 12
    //DEBUG: e.Text: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/9 AsIs: e.Accum/12 HalfReuse: 'O'/10 HalfReuse: )/11 AsIs: e.Text/14 AsIs: >/1 ]] }
    refalrts::reinit_char(context[10], 'O');
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlushNameTail/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & FlushNameTail/4 (/7 e.new5/9 )/8 s.new3/13 e.new4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new4 as range 11
    do {
      // </0 & FlushNameTail/4 (/7 e.Accum/14 )/8 'P'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'P', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum/14 )/8 'Q'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Q', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum/14 )/8 'R'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'R', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum/14 )/8 'S'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'S', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum/14 )/8 'T'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'T', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum/14 )/8 'U'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'U', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum/14 )/8 'V'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'V', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum/14 )/8 'W'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'W', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum/14 )/8 'X'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'X', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum/14 )/8 'Y'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Y', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum/14 )/8 'Z'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Z', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Z');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlushNameTail/4 (/7 e.Accum/14 )/8 '-'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '-', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '-'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '-');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FlushNameTail/4 (/7 e.Accum/14 )/8 '_'/13 e.Text/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '_', context[13] ) )
      continue;
    // closed e.Accum as range 14
    // closed e.Text as range 16
    //DEBUG: e.Accum: 14
    //DEBUG: e.Text: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlushNameTail/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '_'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
    refalrts::reinit_char(context[8], '_');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlushNameTail/4 (/7 e.Accum/5 )/8 e.Text/2 >/1
  // closed e.Accum as range 5
  // closed e.Text as range 2
  //DEBUG: e.Accum: 5
  //DEBUG: e.Text: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TNamedFlush/10 Tile{ AsIs: e.Accum/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TNamedFlush]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Root]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FlushNameTail("FlushNameTail", COOKIE1_, COOKIE2_, func_FlushNameTail);


static refalrts::FnResult func_Literalm_DecCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Literal-DecCode/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Literal-DecCode/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Literal-DecCode/4 (/7 e.new5/9 )/8 s.new3/13 e.new4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new4 as range 11
    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum/14 )/8 '0'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum/14 )/8 '1'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum/14 )/8 '2'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum/14 )/8 '3'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum/14 )/8 '4'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum/14 )/8 '5'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum/14 )/8 '6'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum/14 )/8 '7'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Literal-DecCode/4 (/7 e.Accum/14 )/8 '8'/13 e.Text/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '8', context[13] ) )
        continue;
      // closed e.Accum as range 14
      // closed e.Text as range 16
      //DEBUG: e.Accum: 14
      //DEBUG: e.Text: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Literal]);
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Literal-DecCode/4 (/7 e.Accum/14 )/8 '9'/13 e.Text/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '9', context[13] ) )
      continue;
    // closed e.Accum as range 14
    // closed e.Text as range 16
    //DEBUG: e.Accum: 14
    //DEBUG: e.Text: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Accum/14 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text/16 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Literal]);
    refalrts::reinit_char(context[8], '9');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Literal-DecCode/4 (/7 e.Accum/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Accum as range 9
    //DEBUG: e.Accum: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected end of fil"/11 Tile{ HalfReuse: 'e'/8 HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[11], context[12], "nexpected end of fil", 20);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
    refalrts::reinit_char(context[7], 'U');
    refalrts::reinit_char(context[8], 'e');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Literal-DecCode/4 (/7 e.Accum/5 )/8 e.Text/2 >/1
  // closed e.Accum as range 5
  // closed e.Text as range 2
  //DEBUG: e.Accum: 5
  //DEBUG: e.Text: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"Expected digits"/11 )/13 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Expected digits", 15);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Root]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Literalm_DecCode("Literal-DecCode", COOKIE1_, COOKIE2_, func_Literalm_DecCode);


static refalrts::FnResult func_gen_CollectDigits_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & CollectDigits@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & CollectDigits@1/4 s.Next/7 e.Tail/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.Tail as range 5
    //DEBUG: s.Next: 7
    //DEBUG: e.Tail: 5
    //5: e.Tail
    //7: s.Next
    //13: s.Next

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[10], functions[efunc_gen_CollectDigits_Z1S1C1]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Type]);
    refalrts::copy_stvar(vm, context[13], context[7]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[8] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[11] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </8 & CollectDigits@1$1?1/12 'D'/13 '0'/14 s.Digit/15 >/9
      context[10] = 0;
      context[11] = 0;
      context[12] = refalrts::call_left( context[10], context[11], context[8], context[9] );
      context[13] = refalrts::char_left( 'D', context[10], context[11] );
      if( ! context[13] )
        continue;
      context[14] = refalrts::char_left( '0', context[10], context[11] );
      if( ! context[14] )
        continue;
      if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      //DEBUG: s.Next: 7
      //DEBUG: e.Tail: 5
      //DEBUG: s.Digit: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Next/7 {REMOVED TILE} </8 & CollectDigits@1$1?1/12 'D'/13 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CollectDigits/4 } Tile{ HalfReuse: (/14 AsIs: s.Digit/15 HalfReuse: )/9 } Tile{ AsIs: e.Tail/5 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CollectDigits]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_close_bracket(context[9]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[14], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[14], context[9] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[8], context[9]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CollectDigits@1/4 e.Tail/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Tail as range 5
    //DEBUG: e.Tail: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & CollectDigits@1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 0/0 } Tile{ AsIs: e.Tail/5 } Tile{ ]] }
    refalrts::reinit_number(context[0], 0UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CollectDigits@1/4 e.dyn1/2 >/1
  // closed e.dyn1 as range 2
  //DEBUG: e.dyn1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CollectDigits@0/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.dyn1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_CollectDigits_Z0]);
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

static refalrts::NativeReference nat_ref_gen_CollectDigits_Z1("CollectDigits@1", COOKIE1_, COOKIE2_, func_gen_CollectDigits_Z1);


//End of file
