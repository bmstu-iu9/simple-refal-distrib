// This file automatically generated from 'Generator.ref'
// Don't edit! Edit 'Generator.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3106920329_2504367303
#define COOKIE1_ 3106920329U
#define COOKIE2_ 2504367303U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Map = 3,
  efunc_WriteFunction = 4,
  efunc_WriteAlternative = 5,
  efunc_gen_NextStatem_L_D2 = 6,
  efunc_gen_NextStatem_R_D2 = 7,
  efunc_EscapeChar = 8,
  efunc_gen_NextStatem_R_Z1 = 9,
  efunc_Fetch = 10,
  efunc_gen_WriteAlternativem_Aux_S2L1 = 11,
  efunc_gen_Flush_D3 = 12,
  efunc_gen_WriteAlternativem_Aux_D2 = 13,
  efunc_Mu = 14,
  efunc_Up = 15,
  efunc_Evm_met = 16,
  efunc_Residue = 17,
  efunc_u_u_Metau_Residue = 18,
  efunc_GenerateFromDFA = 19,
  efunc_WriteAlternativem_Aux = 20,
  efunc_Head = 21,
  efunc_Flush = 22,
  efunc_NextStatem_L = 23,
  efunc_NextStatem_R = 24,
  efunc_gen_NextStatem_R_Z0 = 25,
};


enum ident {
  ident_None = 0,
  ident_Empty = 1,
  ident_Finitive = 2,
  ident_Any = 3,
  ident_Unnamed = 4,
  ident_Flush = 5,
  ident_FlushError = 6,
  ident_Mu = 7,
  ident_Up = 8,
  ident_Evm_met = 9,
  ident_Residue = 10,
  ident_u_u_Metau_Residue = 11,
  ident_GenerateFromDFA = 12,
  ident_WriteFunction = 13,
  ident_WriteAlternative = 14,
  ident_WriteAlternativem_Aux = 15,
  ident_Head = 16,
  ident_NextStatem_L = 17,
  ident_NextStatem_R = 18,
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


static refalrts::FnResult func_GenerateFromDFA(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & GenerateFromDFA/4 e.Rules/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Rules as range 2
  //DEBUG: e.Rules: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & WriteFunction/4 AsIs: e.Rules/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_WriteFunction]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenerateFromDFA("GenerateFromDFA", 0U, 0U, func_GenerateFromDFA);


static refalrts::FnResult func_WriteFunction(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & WriteFunction/4 (/7 (/11 e.NextRule/9 )/12 e.Alternatives/5 )/8 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextRule as range 9
  // closed e.Alternatives as range 5
  //DEBUG: e.NextRule: 9
  //DEBUG: e.Alternatives: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 )/14 (/15"$SPEC "/16 e.NextRule/9/18" (e.acc) e.text;"/20 Tile{ HalfReuse: )/0 HalfReuse: (/4 HalfReuse: )/7 AsIs: (/11 AsIs: e.NextRule/9 HalfReuse: ' '/12 } '{'/22 )/23 </24 & Map/25 & WriteAlternative/26 Tile{ AsIs: e.Alternatives/5 } >/27 (/28 Tile{ HalfReuse: '}'/8 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_chars(vm, context[16], context[17], "$SPEC ", 6);
  refalrts::copy_evar(vm, context[18], context[19], context[9], context[10]);
  refalrts::alloc_chars(vm, context[20], context[21], " (e.acc) e.text;", 16);
  refalrts::alloc_char(vm, context[22], '{');
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[26], functions[efunc_WriteAlternative]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_char(context[12], ' ');
  refalrts::reinit_char(context[8], '}');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[28], context[1] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[11], context[23] );
  refalrts::link_brackets( context[4], context[7] );
  refalrts::link_brackets( context[15], context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[13], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WriteFunction("WriteFunction", COOKIE1_, COOKIE2_, func_WriteFunction);


static refalrts::FnResult func_WriteAlternative(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & WriteAlternative/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & WriteAlternative/4 (/9 s.new1/11 t.new2/12 t.new3/14 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    context[15] = refalrts::tvar_left( context[14], context[7], context[8] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    do {
      // </0 & WriteAlternative/4 (/9 s.new4/11 s.new5/12 t.new6/14 )/10 >/1
      if( ! refalrts::svar_term( context[12], context[12] ) )
        continue;
      do {
        // </0 & WriteAlternative/4 (/9 s.new7/11 # None/12 t.new8/14 )/10 >/1
        if( ! refalrts::ident_term( identifiers[ident_None], context[12] ) )
          continue;
        do {
          // </0 & WriteAlternative/4 (/9 # Empty/11 # None/12 t.new9/14 )/10 >/1
          if( ! refalrts::ident_term( identifiers[ident_Empty], context[11] ) )
            continue;
          do {
            // </0 & WriteAlternative/4 (/9 # Empty/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/9 HalfReuse: '('/11 HalfReuse: 'e'/12 HalfReuse: '.'/14 HalfReuse: 'A'/10 HalfReuse: 'c'/1 }"cum) =;"/16 )/18 Tile{ ]] }
            refalrts::alloc_chars(vm, context[16], context[17], "cum) =;", 7);
            refalrts::alloc_close_bracket(vm, context[18]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_char(context[4], ' ');
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '(');
            refalrts::reinit_char(context[12], 'e');
            refalrts::reinit_char(context[14], '.');
            refalrts::reinit_char(context[10], 'A');
            refalrts::reinit_char(context[1], 'c');
            refalrts::link_brackets( context[0], context[18] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[16], context[18] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/9 # Empty/11 # None/12 (/14 e./16 )/15 )/10 >/1
            context[16] = 0;
            context[17] = 0;
            if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
              continue;
            // closed e. as range 16
            //DEBUG: e.: 16

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/18"  (e.Accum) e.Te"/19 Tile{ HalfReuse: 'x'/0 HalfReuse: 't'/4 HalfReuse: ' '/9 HalfReuse: '='/11 HalfReuse: ' '/12 HalfReuse: '<'/14 AsIs: e./16 HalfReuse: ' '/15 HalfReuse: '('/10 HalfReuse: 'e'/1 }".Accum) e.Text>;"/21 )/23 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[18]);
            refalrts::alloc_chars(vm, context[19], context[20], "  (e.Accum) e.Te", 16);
            refalrts::alloc_chars(vm, context[21], context[22], ".Accum) e.Text>;", 16);
            refalrts::alloc_close_bracket(vm, context[23]);
            refalrts::reinit_char(context[0], 'x');
            refalrts::reinit_char(context[4], 't');
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '=');
            refalrts::reinit_char(context[12], ' ');
            refalrts::reinit_char(context[14], '<');
            refalrts::reinit_char(context[15], ' ');
            refalrts::reinit_char(context[10], '(');
            refalrts::reinit_char(context[1], 'e');
            refalrts::link_brackets( context[18], context[23] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[21], context[23] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[18], context[20] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/9 # Empty/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/16"  (e.Accu"/17 Tile{ HalfReuse: 'm'/0 HalfReuse: ')'/4 HalfReuse: </9 HalfReuse: & NextState-L*2/11 Reuse: # Finitive/12 HalfReuse: >/14 HalfReuse: ';'/10 HalfReuse: )/1 ]] }
            refalrts::alloc_open_bracket(vm, context[16]);
            refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accu", 9);
            refalrts::reinit_char(context[0], 'm');
            refalrts::reinit_char(context[4], ')');
            refalrts::reinit_open_call(context[9]);
            refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::update_ident(context[12], identifiers[ident_Finitive]);
            refalrts::reinit_close_call(context[14]);
            refalrts::reinit_char(context[10], ';');
            refalrts::reinit_close_bracket(context[1]);
            refalrts::link_brackets( context[16], context[1] );
            refalrts::push_stack( vm, context[14] );
            refalrts::push_stack( vm, context[9] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[0];
            res = refalrts::splice_evar( res, context[16], context[18] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/9 # Empty/11 # None/12 (/14 e./16 )/15 )/10 >/1
            context[16] = 0;
            context[17] = 0;
            if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
              continue;
            // closed e. as range 16
            //DEBUG: e.: 16

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/18"  (e.Acc"/19 Tile{ HalfReuse: 'u'/0 HalfReuse: 'm'/4 HalfReuse: ')'/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: (/14 AsIs: e./16 AsIs: )/15 HalfReuse: >/10 HalfReuse: ' '/1 } '<'/21 e./16/22" (e.Accum) e.Text>;"/24 )/26 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[18]);
            refalrts::alloc_chars(vm, context[19], context[20], "  (e.Acc", 8);
            refalrts::alloc_char(vm, context[21], '<');
            refalrts::copy_evar(vm, context[22], context[23], context[16], context[17]);
            refalrts::alloc_chars(vm, context[24], context[25], " (e.Accum) e.Text>;", 19);
            refalrts::alloc_close_bracket(vm, context[26]);
            refalrts::reinit_char(context[0], 'u');
            refalrts::reinit_char(context[4], 'm');
            refalrts::reinit_char(context[9], ')');
            refalrts::reinit_open_call(context[11]);
            refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_close_call(context[10]);
            refalrts::reinit_char(context[1], ' ');
            refalrts::link_brackets( context[18], context[26] );
            refalrts::push_stack( vm, context[10] );
            refalrts::push_stack( vm, context[11] );
            refalrts::link_brackets( context[14], context[15] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[21], context[26] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[18], context[20] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative/4 (/9 # Empty/11 # None/12 t.1/14 )/10 >/1
          //DEBUG: t.1: 14

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/16"  (e.Acc"/17 Tile{ HalfReuse: 'u'/0 HalfReuse: 'm'/4 HalfReuse: ')'/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: t.1/14 HalfReuse: >/10 HalfReuse: </1 } & NextState-R*2/19 t.1/14/20"e.Accum"/22 >/24 ';'/25 )/26 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[16]);
          refalrts::alloc_chars(vm, context[17], context[18], "  (e.Acc", 8);
          refalrts::alloc_name(vm, context[19], functions[efunc_gen_NextStatem_R_D2]);
          refalrts::copy_evar(vm, context[20], context[21], context[14], context[15]);
          refalrts::alloc_chars(vm, context[22], context[23], "e.Accum", 7);
          refalrts::alloc_close_call(vm, context[24]);
          refalrts::alloc_char(vm, context[25], ';');
          refalrts::alloc_close_bracket(vm, context[26]);
          refalrts::reinit_char(context[0], 'u');
          refalrts::reinit_char(context[4], 'm');
          refalrts::reinit_char(context[9], ')');
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[10]);
          refalrts::reinit_open_call(context[1]);
          refalrts::link_brackets( context[16], context[26] );
          refalrts::push_stack( vm, context[24] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[11] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[19], context[26] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[16], context[18] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative/4 (/9 # Any/11 # None/12 t.new9/14 )/10 >/1
          if( ! refalrts::ident_term( identifiers[ident_Any], context[11] ) )
            continue;
          do {
            // </0 & WriteAlternative/4 (/9 # Any/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/9 HalfReuse: '('/11 HalfReuse: 'e'/12 HalfReuse: '.'/14 HalfReuse: 'A'/10 HalfReuse: 'c'/1 }"cum) s.Any =;"/16 )/18 Tile{ ]] }
            refalrts::alloc_chars(vm, context[16], context[17], "cum) s.Any =;", 13);
            refalrts::alloc_close_bracket(vm, context[18]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_char(context[4], ' ');
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '(');
            refalrts::reinit_char(context[12], 'e');
            refalrts::reinit_char(context[14], '.');
            refalrts::reinit_char(context[10], 'A');
            refalrts::reinit_char(context[1], 'c');
            refalrts::link_brackets( context[0], context[18] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[16], context[18] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/9 # Any/11 # None/12 (/14 e./16 )/15 )/10 >/1
            context[16] = 0;
            context[17] = 0;
            if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
              continue;
            // closed e. as range 16
            //DEBUG: e.: 16

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/18"  (e.Accum) s.Any e.Te"/19 Tile{ HalfReuse: 'x'/0 HalfReuse: 't'/4 HalfReuse: ' '/9 HalfReuse: '='/11 HalfReuse: ' '/12 HalfReuse: '<'/14 AsIs: e./16 HalfReuse: ' '/15 HalfReuse: '('/10 HalfReuse: 'e'/1 }".Accum s.Any) e.Text>;"/21 )/23 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[18]);
            refalrts::alloc_chars(vm, context[19], context[20], "  (e.Accum) s.Any e.Te", 22);
            refalrts::alloc_chars(vm, context[21], context[22], ".Accum s.Any) e.Text>;", 22);
            refalrts::alloc_close_bracket(vm, context[23]);
            refalrts::reinit_char(context[0], 'x');
            refalrts::reinit_char(context[4], 't');
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '=');
            refalrts::reinit_char(context[12], ' ');
            refalrts::reinit_char(context[14], '<');
            refalrts::reinit_char(context[15], ' ');
            refalrts::reinit_char(context[10], '(');
            refalrts::reinit_char(context[1], 'e');
            refalrts::link_brackets( context[18], context[23] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[21], context[23] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[18], context[20] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/9 # Any/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/16"  (e.Accum) s.A"/17 Tile{ HalfReuse: 'n'/0 HalfReuse: 'y'/4 HalfReuse: </9 HalfReuse: & NextState-L*2/11 Reuse: # Finitive/12 HalfReuse: >/14 HalfReuse: ';'/10 HalfReuse: )/1 ]] }
            refalrts::alloc_open_bracket(vm, context[16]);
            refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum) s.A", 15);
            refalrts::reinit_char(context[0], 'n');
            refalrts::reinit_char(context[4], 'y');
            refalrts::reinit_open_call(context[9]);
            refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::update_ident(context[12], identifiers[ident_Finitive]);
            refalrts::reinit_close_call(context[14]);
            refalrts::reinit_char(context[10], ';');
            refalrts::reinit_close_bracket(context[1]);
            refalrts::link_brackets( context[16], context[1] );
            refalrts::push_stack( vm, context[14] );
            refalrts::push_stack( vm, context[9] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[0];
            res = refalrts::splice_evar( res, context[16], context[18] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/9 # Any/11 # None/12 (/14 e./16 )/15 )/10 >/1
            context[16] = 0;
            context[17] = 0;
            if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
              continue;
            // closed e. as range 16
            //DEBUG: e.: 16

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/18"  (e.Accum) s."/19 Tile{ HalfReuse: 'A'/0 HalfReuse: 'n'/4 HalfReuse: 'y'/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: (/14 AsIs: e./16 AsIs: )/15 HalfReuse: >/10 HalfReuse: ' '/1 } '<'/21 e./16/22" (e.Accum s.Any) e.Text>;"/24 )/26 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[18]);
            refalrts::alloc_chars(vm, context[19], context[20], "  (e.Accum) s.", 14);
            refalrts::alloc_char(vm, context[21], '<');
            refalrts::copy_evar(vm, context[22], context[23], context[16], context[17]);
            refalrts::alloc_chars(vm, context[24], context[25], " (e.Accum s.Any) e.Text>;", 25);
            refalrts::alloc_close_bracket(vm, context[26]);
            refalrts::reinit_char(context[0], 'A');
            refalrts::reinit_char(context[4], 'n');
            refalrts::reinit_char(context[9], 'y');
            refalrts::reinit_open_call(context[11]);
            refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_close_call(context[10]);
            refalrts::reinit_char(context[1], ' ');
            refalrts::link_brackets( context[18], context[26] );
            refalrts::push_stack( vm, context[10] );
            refalrts::push_stack( vm, context[11] );
            refalrts::link_brackets( context[14], context[15] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[21], context[26] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[18], context[20] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative/4 (/9 # Any/11 # None/12 t.1/14 )/10 >/1
          //DEBUG: t.1: 14

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/16"  (e.Accum) s."/17 Tile{ HalfReuse: 'A'/0 HalfReuse: 'n'/4 HalfReuse: 'y'/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: t.1/14 HalfReuse: >/10 HalfReuse: </1 } & NextState-R*2/19 t.1/14/20"e.Accum s.Any"/22 >/24 ';'/25 )/26 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[16]);
          refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum) s.", 14);
          refalrts::alloc_name(vm, context[19], functions[efunc_gen_NextStatem_R_D2]);
          refalrts::copy_evar(vm, context[20], context[21], context[14], context[15]);
          refalrts::alloc_chars(vm, context[22], context[23], "e.Accum s.Any", 13);
          refalrts::alloc_close_call(vm, context[24]);
          refalrts::alloc_char(vm, context[25], ';');
          refalrts::alloc_close_bracket(vm, context[26]);
          refalrts::reinit_char(context[0], 'A');
          refalrts::reinit_char(context[4], 'n');
          refalrts::reinit_char(context[9], 'y');
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[10]);
          refalrts::reinit_open_call(context[1]);
          refalrts::link_brackets( context[16], context[26] );
          refalrts::push_stack( vm, context[24] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[11] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[19], context[26] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[16], context[18] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative/4 (/9 s.new9/11 # None/12 # Finitive/14 )/10 >/1
          if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
            continue;
          do {
            // </0 & WriteAlternative/4 (/9 # Empty/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Empty], context[11] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/9 HalfReuse: '('/11 HalfReuse: 'e'/12 HalfReuse: '.'/14 HalfReuse: 'A'/10 HalfReuse: 'c'/1 }"cum) \'"/16 </18 & EscapeChar/19 # Empty/20 >/21"\' =;"/22 )/24 Tile{ ]] }
            refalrts::alloc_chars(vm, context[16], context[17], "cum) \'", 6);
            refalrts::alloc_open_call(vm, context[18]);
            refalrts::alloc_name(vm, context[19], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[20], identifiers[ident_Empty]);
            refalrts::alloc_close_call(vm, context[21]);
            refalrts::alloc_chars(vm, context[22], context[23], "\' =;", 4);
            refalrts::alloc_close_bracket(vm, context[24]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_char(context[4], ' ');
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '(');
            refalrts::reinit_char(context[12], 'e');
            refalrts::reinit_char(context[14], '.');
            refalrts::reinit_char(context[10], 'A');
            refalrts::reinit_char(context[1], 'c');
            refalrts::link_brackets( context[0], context[24] );
            refalrts::push_stack( vm, context[21] );
            refalrts::push_stack( vm, context[18] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[16], context[24] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/9 # Any/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Any], context[11] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/9 HalfReuse: '('/11 HalfReuse: 'e'/12 HalfReuse: '.'/14 HalfReuse: 'A'/10 HalfReuse: 'c'/1 }"cum) \'"/16 </18 & EscapeChar/19 # Any/20 >/21"\' =;"/22 )/24 Tile{ ]] }
            refalrts::alloc_chars(vm, context[16], context[17], "cum) \'", 6);
            refalrts::alloc_open_call(vm, context[18]);
            refalrts::alloc_name(vm, context[19], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[20], identifiers[ident_Any]);
            refalrts::alloc_close_call(vm, context[21]);
            refalrts::alloc_chars(vm, context[22], context[23], "\' =;", 4);
            refalrts::alloc_close_bracket(vm, context[24]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_char(context[4], ' ');
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '(');
            refalrts::reinit_char(context[12], 'e');
            refalrts::reinit_char(context[14], '.');
            refalrts::reinit_char(context[10], 'A');
            refalrts::reinit_char(context[1], 'c');
            refalrts::link_brackets( context[0], context[24] );
            refalrts::push_stack( vm, context[21] );
            refalrts::push_stack( vm, context[18] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[16], context[24] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative/4 (/9 s.Head/11 # None/12 # Finitive/14 )/10 >/1
          //DEBUG: s.Head: 11

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/16"  (e.Accum) \'"/17 </19 & EscapeChar/20 s.Head/11/21 >/22"\' ="/23 </25 & NextState-R@1/26 Tile{ HalfReuse: # Finitive/0 HalfReuse: </4 HalfReuse: & EscapeChar/9 AsIs: s.Head/11 HalfReuse: >/12 HalfReuse: >/14 HalfReuse: ';'/10 HalfReuse: )/1 ]] }
          refalrts::alloc_open_bracket(vm, context[16]);
          refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum) \'", 13);
          refalrts::alloc_open_call(vm, context[19]);
          refalrts::alloc_name(vm, context[20], functions[efunc_EscapeChar]);
          refalrts::copy_stvar(vm, context[21], context[11]);
          refalrts::alloc_close_call(vm, context[22]);
          refalrts::alloc_chars(vm, context[23], context[24], "\' =", 3);
          refalrts::alloc_open_call(vm, context[25]);
          refalrts::alloc_name(vm, context[26], functions[efunc_gen_NextStatem_R_Z1]);
          refalrts::reinit_ident(context[0], identifiers[ident_Finitive]);
          refalrts::reinit_open_call(context[4]);
          refalrts::reinit_name(context[9], functions[efunc_EscapeChar]);
          refalrts::reinit_close_call(context[12]);
          refalrts::reinit_close_call(context[14]);
          refalrts::reinit_char(context[10], ';');
          refalrts::reinit_close_bracket(context[1]);
          refalrts::link_brackets( context[16], context[1] );
          refalrts::push_stack( vm, context[14] );
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[12] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[22] );
          refalrts::push_stack( vm, context[19] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[0];
          res = refalrts::splice_evar( res, context[16], context[26] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative/4 (/9 s.new9/11 # None/12 (/14 e.new10/16 )/15 )/10 >/1
          context[16] = 0;
          context[17] = 0;
          if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
            continue;
          // closed e.new10 as range 16
          do {
            // </0 & WriteAlternative/4 (/9 # Empty/11 # None/12 (/14 e./18 )/15 )/10 >/1
            context[18] = context[16];
            context[19] = context[17];
            if( ! refalrts::ident_term( identifiers[ident_Empty], context[11] ) )
              continue;
            // closed e. as range 18
            //DEBUG: e.: 18

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/20"  (e.Accum) \'"/21 </23 & EscapeChar/24 # Empty/25 >/26"\' e.Te"/27 Tile{ HalfReuse: 'x'/0 HalfReuse: 't'/4 HalfReuse: ' '/9 HalfReuse: '='/11 HalfReuse: ' '/12 HalfReuse: '<'/14 AsIs: e./18 HalfReuse: ' '/15 HalfReuse: '('/10 HalfReuse: 'e'/1 }".Accum) e.Text>;"/29 )/31 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[20]);
            refalrts::alloc_chars(vm, context[21], context[22], "  (e.Accum) \'", 13);
            refalrts::alloc_open_call(vm, context[23]);
            refalrts::alloc_name(vm, context[24], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[25], identifiers[ident_Empty]);
            refalrts::alloc_close_call(vm, context[26]);
            refalrts::alloc_chars(vm, context[27], context[28], "\' e.Te", 6);
            refalrts::alloc_chars(vm, context[29], context[30], ".Accum) e.Text>;", 16);
            refalrts::alloc_close_bracket(vm, context[31]);
            refalrts::reinit_char(context[0], 'x');
            refalrts::reinit_char(context[4], 't');
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '=');
            refalrts::reinit_char(context[12], ' ');
            refalrts::reinit_char(context[14], '<');
            refalrts::reinit_char(context[15], ' ');
            refalrts::reinit_char(context[10], '(');
            refalrts::reinit_char(context[1], 'e');
            refalrts::link_brackets( context[20], context[31] );
            refalrts::push_stack( vm, context[26] );
            refalrts::push_stack( vm, context[23] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[29], context[31] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[20], context[28] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/9 # Any/11 # None/12 (/14 e./18 )/15 )/10 >/1
            context[18] = context[16];
            context[19] = context[17];
            if( ! refalrts::ident_term( identifiers[ident_Any], context[11] ) )
              continue;
            // closed e. as range 18
            //DEBUG: e.: 18

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/20"  (e.Accum) \'"/21 </23 & EscapeChar/24 # Any/25 >/26"\' e.Te"/27 Tile{ HalfReuse: 'x'/0 HalfReuse: 't'/4 HalfReuse: ' '/9 HalfReuse: '='/11 HalfReuse: ' '/12 HalfReuse: '<'/14 AsIs: e./18 HalfReuse: ' '/15 HalfReuse: '('/10 HalfReuse: 'e'/1 }".Accum s.Any) e.Text>;"/29 )/31 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[20]);
            refalrts::alloc_chars(vm, context[21], context[22], "  (e.Accum) \'", 13);
            refalrts::alloc_open_call(vm, context[23]);
            refalrts::alloc_name(vm, context[24], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[25], identifiers[ident_Any]);
            refalrts::alloc_close_call(vm, context[26]);
            refalrts::alloc_chars(vm, context[27], context[28], "\' e.Te", 6);
            refalrts::alloc_chars(vm, context[29], context[30], ".Accum s.Any) e.Text>;", 22);
            refalrts::alloc_close_bracket(vm, context[31]);
            refalrts::reinit_char(context[0], 'x');
            refalrts::reinit_char(context[4], 't');
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '=');
            refalrts::reinit_char(context[12], ' ');
            refalrts::reinit_char(context[14], '<');
            refalrts::reinit_char(context[15], ' ');
            refalrts::reinit_char(context[10], '(');
            refalrts::reinit_char(context[1], 'e');
            refalrts::link_brackets( context[20], context[31] );
            refalrts::push_stack( vm, context[26] );
            refalrts::push_stack( vm, context[23] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[29], context[31] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[20], context[28] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative/4 (/9 s.Head/11 # None/12 (/14 e./18 )/15 )/10 >/1
          context[18] = context[16];
          context[19] = context[17];
          // closed e. as range 18
          //DEBUG: s.Head: 11
          //DEBUG: e.: 18

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/9 }"(e.Accum) \'"/20 </22 & EscapeChar/23 Tile{ AsIs: s.Head/11 } >/24"\' e.Text ="/25 </27 Tile{ HalfReuse: & NextState-R@1/12 AsIs: (/14 AsIs: e./18 AsIs: )/15 HalfReuse: </10 HalfReuse: & EscapeChar/1 } s.Head/11/28 >/29 >/30 ';'/31 )/32 Tile{ ]] }
          refalrts::alloc_chars(vm, context[20], context[21], "(e.Accum) \'", 11);
          refalrts::alloc_open_call(vm, context[22]);
          refalrts::alloc_name(vm, context[23], functions[efunc_EscapeChar]);
          refalrts::alloc_close_call(vm, context[24]);
          refalrts::alloc_chars(vm, context[25], context[26], "\' e.Text =", 10);
          refalrts::alloc_open_call(vm, context[27]);
          refalrts::copy_stvar(vm, context[28], context[11]);
          refalrts::alloc_close_call(vm, context[29]);
          refalrts::alloc_close_call(vm, context[30]);
          refalrts::alloc_char(vm, context[31], ';');
          refalrts::alloc_close_bracket(vm, context[32]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_char(context[4], ' ');
          refalrts::reinit_char(context[9], ' ');
          refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_R_Z1]);
          refalrts::reinit_open_call(context[10]);
          refalrts::reinit_name(context[1], functions[efunc_EscapeChar]);
          refalrts::link_brackets( context[0], context[32] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[29] );
          refalrts::push_stack( vm, context[10] );
          refalrts::link_brackets( context[14], context[15] );
          refalrts::push_stack( vm, context[24] );
          refalrts::push_stack( vm, context[22] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[28], context[32] );
          res = refalrts::splice_evar( res, context[12], context[1] );
          res = refalrts::splice_evar( res, context[24], context[27] );
          res = refalrts::splice_elem( res, context[11] );
          res = refalrts::splice_evar( res, context[20], context[23] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative/4 (/9 # Empty/11 # None/12 t.new9/14 )/10 >/1
          if( ! refalrts::ident_term( identifiers[ident_Empty], context[11] ) )
            continue;
          do {
            // </0 & WriteAlternative/4 (/9 # Empty/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/16"  (e.Accum) \'"/17 </19 & EscapeChar/20 # Empty/21 Tile{ HalfReuse: >/0 HalfReuse: '\''/4 HalfReuse: </9 HalfReuse: & NextState-L*2/11 Reuse: # Finitive/12 HalfReuse: >/14 HalfReuse: ';'/10 HalfReuse: )/1 ]] }
            refalrts::alloc_open_bracket(vm, context[16]);
            refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum) \'", 13);
            refalrts::alloc_open_call(vm, context[19]);
            refalrts::alloc_name(vm, context[20], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[21], identifiers[ident_Empty]);
            refalrts::reinit_close_call(context[0]);
            refalrts::reinit_char(context[4], '\'');
            refalrts::reinit_open_call(context[9]);
            refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::update_ident(context[12], identifiers[ident_Finitive]);
            refalrts::reinit_close_call(context[14]);
            refalrts::reinit_char(context[10], ';');
            refalrts::reinit_close_bracket(context[1]);
            refalrts::link_brackets( context[16], context[1] );
            refalrts::push_stack( vm, context[14] );
            refalrts::push_stack( vm, context[9] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[19] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[0];
            res = refalrts::splice_evar( res, context[16], context[21] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/9 # Empty/11 # None/12 (/14 e./16 )/15 )/10 >/1
            context[16] = 0;
            context[17] = 0;
            if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
              continue;
            // closed e. as range 16
            //DEBUG: e.: 16

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/18"  (e.Accum) \'"/19 </21 & EscapeChar/22 Tile{ HalfReuse: # Empty/0 HalfReuse: >/4 HalfReuse: '\''/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: (/14 AsIs: e./16 AsIs: )/15 HalfReuse: >/10 HalfReuse: ' '/1 } '<'/23 e./16/24" (e.Accum) e.Text>;"/26 )/28 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[18]);
            refalrts::alloc_chars(vm, context[19], context[20], "  (e.Accum) \'", 13);
            refalrts::alloc_open_call(vm, context[21]);
            refalrts::alloc_name(vm, context[22], functions[efunc_EscapeChar]);
            refalrts::alloc_char(vm, context[23], '<');
            refalrts::copy_evar(vm, context[24], context[25], context[16], context[17]);
            refalrts::alloc_chars(vm, context[26], context[27], " (e.Accum) e.Text>;", 19);
            refalrts::alloc_close_bracket(vm, context[28]);
            refalrts::reinit_ident(context[0], identifiers[ident_Empty]);
            refalrts::reinit_close_call(context[4]);
            refalrts::reinit_char(context[9], '\'');
            refalrts::reinit_open_call(context[11]);
            refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_close_call(context[10]);
            refalrts::reinit_char(context[1], ' ');
            refalrts::link_brackets( context[18], context[28] );
            refalrts::push_stack( vm, context[10] );
            refalrts::push_stack( vm, context[11] );
            refalrts::link_brackets( context[14], context[15] );
            refalrts::push_stack( vm, context[4] );
            refalrts::push_stack( vm, context[21] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[23], context[28] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[18], context[22] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative/4 (/9 # Empty/11 # None/12 t.1/14 )/10 >/1
          //DEBUG: t.1: 14

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/16"  (e.Accum) \'"/17 </19 & EscapeChar/20 Tile{ HalfReuse: # Empty/0 HalfReuse: >/4 HalfReuse: '\''/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: t.1/14 HalfReuse: >/10 HalfReuse: </1 } & NextState-R*2/21 t.1/14/22"e.Accum"/24 >/26 ';'/27 )/28 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[16]);
          refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum) \'", 13);
          refalrts::alloc_open_call(vm, context[19]);
          refalrts::alloc_name(vm, context[20], functions[efunc_EscapeChar]);
          refalrts::alloc_name(vm, context[21], functions[efunc_gen_NextStatem_R_D2]);
          refalrts::copy_evar(vm, context[22], context[23], context[14], context[15]);
          refalrts::alloc_chars(vm, context[24], context[25], "e.Accum", 7);
          refalrts::alloc_close_call(vm, context[26]);
          refalrts::alloc_char(vm, context[27], ';');
          refalrts::alloc_close_bracket(vm, context[28]);
          refalrts::reinit_ident(context[0], identifiers[ident_Empty]);
          refalrts::reinit_close_call(context[4]);
          refalrts::reinit_char(context[9], '\'');
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[10]);
          refalrts::reinit_open_call(context[1]);
          refalrts::link_brackets( context[16], context[28] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[19] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[21], context[28] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[16], context[20] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative/4 (/9 # Any/11 # None/12 t.new9/14 )/10 >/1
          if( ! refalrts::ident_term( identifiers[ident_Any], context[11] ) )
            continue;
          do {
            // </0 & WriteAlternative/4 (/9 # Any/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/16"  (e.Accum) \'"/17 </19 & EscapeChar/20 # Any/21 Tile{ HalfReuse: >/0 HalfReuse: '\''/4 HalfReuse: </9 HalfReuse: & NextState-L*2/11 Reuse: # Finitive/12 HalfReuse: >/14 HalfReuse: ';'/10 HalfReuse: )/1 ]] }
            refalrts::alloc_open_bracket(vm, context[16]);
            refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum) \'", 13);
            refalrts::alloc_open_call(vm, context[19]);
            refalrts::alloc_name(vm, context[20], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[21], identifiers[ident_Any]);
            refalrts::reinit_close_call(context[0]);
            refalrts::reinit_char(context[4], '\'');
            refalrts::reinit_open_call(context[9]);
            refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::update_ident(context[12], identifiers[ident_Finitive]);
            refalrts::reinit_close_call(context[14]);
            refalrts::reinit_char(context[10], ';');
            refalrts::reinit_close_bracket(context[1]);
            refalrts::link_brackets( context[16], context[1] );
            refalrts::push_stack( vm, context[14] );
            refalrts::push_stack( vm, context[9] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[19] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[0];
            res = refalrts::splice_evar( res, context[16], context[21] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/9 # Any/11 # None/12 (/14 e./16 )/15 )/10 >/1
            context[16] = 0;
            context[17] = 0;
            if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
              continue;
            // closed e. as range 16
            //DEBUG: e.: 16

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/18"  (e.Accum) \'"/19 </21 & EscapeChar/22 Tile{ HalfReuse: # Any/0 HalfReuse: >/4 HalfReuse: '\''/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: (/14 AsIs: e./16 AsIs: )/15 HalfReuse: >/10 HalfReuse: ' '/1 } '<'/23 e./16/24" (e.Accum s.Any) e.Text>;"/26 )/28 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[18]);
            refalrts::alloc_chars(vm, context[19], context[20], "  (e.Accum) \'", 13);
            refalrts::alloc_open_call(vm, context[21]);
            refalrts::alloc_name(vm, context[22], functions[efunc_EscapeChar]);
            refalrts::alloc_char(vm, context[23], '<');
            refalrts::copy_evar(vm, context[24], context[25], context[16], context[17]);
            refalrts::alloc_chars(vm, context[26], context[27], " (e.Accum s.Any) e.Text>;", 25);
            refalrts::alloc_close_bracket(vm, context[28]);
            refalrts::reinit_ident(context[0], identifiers[ident_Any]);
            refalrts::reinit_close_call(context[4]);
            refalrts::reinit_char(context[9], '\'');
            refalrts::reinit_open_call(context[11]);
            refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_close_call(context[10]);
            refalrts::reinit_char(context[1], ' ');
            refalrts::link_brackets( context[18], context[28] );
            refalrts::push_stack( vm, context[10] );
            refalrts::push_stack( vm, context[11] );
            refalrts::link_brackets( context[14], context[15] );
            refalrts::push_stack( vm, context[4] );
            refalrts::push_stack( vm, context[21] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[23], context[28] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[18], context[22] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative/4 (/9 # Any/11 # None/12 t.1/14 )/10 >/1
          //DEBUG: t.1: 14

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/16"  (e.Accum) \'"/17 </19 & EscapeChar/20 Tile{ HalfReuse: # Any/0 HalfReuse: >/4 HalfReuse: '\''/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: t.1/14 HalfReuse: >/10 HalfReuse: </1 } & NextState-R*2/21 t.1/14/22"e.Accum s.Any"/24 >/26 ';'/27 )/28 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[16]);
          refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum) \'", 13);
          refalrts::alloc_open_call(vm, context[19]);
          refalrts::alloc_name(vm, context[20], functions[efunc_EscapeChar]);
          refalrts::alloc_name(vm, context[21], functions[efunc_gen_NextStatem_R_D2]);
          refalrts::copy_evar(vm, context[22], context[23], context[14], context[15]);
          refalrts::alloc_chars(vm, context[24], context[25], "e.Accum s.Any", 13);
          refalrts::alloc_close_call(vm, context[26]);
          refalrts::alloc_char(vm, context[27], ';');
          refalrts::alloc_close_bracket(vm, context[28]);
          refalrts::reinit_ident(context[0], identifiers[ident_Any]);
          refalrts::reinit_close_call(context[4]);
          refalrts::reinit_char(context[9], '\'');
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[10]);
          refalrts::reinit_open_call(context[1]);
          refalrts::link_brackets( context[16], context[28] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[19] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[21], context[28] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[16], context[20] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative/4 (/9 s.Head/11 # None/12 t.1/14 )/10 >/1
        //DEBUG: t.1: 14
        //DEBUG: s.Head: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/16"  (e.Accum) "/17 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/9 AsIs: s.Head/11 HalfReuse: >/12 } '\''/19 </20 & NextState-L*2/21 Tile{ AsIs: t.1/14 HalfReuse: >/10 HalfReuse: </1 } & NextState-R@1/22 t.1/14/23 </25 & EscapeChar/26 s.Head/11/27 >/28 >/29 ';'/30 )/31 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[16]);
        refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum) ", 12);
        refalrts::alloc_char(vm, context[19], '\'');
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::alloc_name(vm, context[22], functions[efunc_gen_NextStatem_R_Z1]);
        refalrts::copy_evar(vm, context[23], context[24], context[14], context[15]);
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::alloc_name(vm, context[26], functions[efunc_EscapeChar]);
        refalrts::copy_stvar(vm, context[27], context[11]);
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::alloc_char(vm, context[30], ';');
        refalrts::alloc_close_bracket(vm, context[31]);
        refalrts::reinit_char(context[0], '\'');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[9], functions[efunc_EscapeChar]);
        refalrts::reinit_close_call(context[12]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_open_call(context[1]);
        refalrts::link_brackets( context[16], context[31] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[22], context[31] );
        res = refalrts::splice_evar( res, context[14], context[1] );
        res = refalrts::splice_evar( res, context[19], context[21] );
        res = refalrts::splice_evar( res, context[0], context[12] );
        res = refalrts::splice_evar( res, context[16], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative/4 (/9 # Empty/11 # Unnamed/12 # Finitive/14 )/10 >/1
      if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Empty], context[11] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[12] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/9 HalfReuse: '('/11 HalfReuse: 'e'/12 HalfReuse: '.'/14 HalfReuse: 'A'/10 HalfReuse: 'c'/1 }"cum) ="/16 </18 & Fetch/19 & WriteAlternative-Aux$2\1/20 >/21 ';'/22 )/23 Tile{ ]] }
      refalrts::alloc_chars(vm, context[16], context[17], "cum) =", 6);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_Fetch]);
      refalrts::alloc_name(vm, context[20], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::alloc_char(vm, context[22], ';');
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_char(context[4], ' ');
      refalrts::reinit_char(context[9], ' ');
      refalrts::reinit_char(context[11], '(');
      refalrts::reinit_char(context[12], 'e');
      refalrts::reinit_char(context[14], '.');
      refalrts::reinit_char(context[10], 'A');
      refalrts::reinit_char(context[1], 'c');
      refalrts::link_brackets( context[0], context[23] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative/4 (/9 # Empty/11 t.new4/12 t.new5/14 )/10 >/1
      if( ! refalrts::ident_term( identifiers[ident_Empty], context[11] ) )
        continue;
      do {
        // </0 & WriteAlternative/4 (/9 # Empty/11 t.new6/12 # Finitive/14 )/10 >/1
        if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
          continue;
        do {
          // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 s.new7/18 e.new8/16 )/13 # Finitive/14 )/10 >/1
          context[16] = 0;
          context[17] = 0;
          if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
            continue;
          if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
            continue;
          // closed e.new8 as range 16
          do {
            // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 # Flush/18 e.0/19 )/13 # Finitive/14 )/10 >/1
            context[19] = context[16];
            context[20] = context[17];
            if( ! refalrts::ident_term( identifiers[ident_Flush], context[18] ) )
              continue;
            // closed e.0 as range 19
            //DEBUG: e.0: 19

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/21"  (e.Accum)"/22 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '('/18 AsIs: e.0/19 HalfReuse: ' '/13 HalfReuse: 'e'/14 HalfReuse: '.'/10 HalfReuse: 'A'/1 }"ccum)"/24 & WriteAlternative-Aux$2\1/26 >/27 ';'/28 )/29 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[21]);
            refalrts::alloc_chars(vm, context[22], context[23], "  (e.Accum)", 11);
            refalrts::alloc_chars(vm, context[24], context[25], "ccum)", 5);
            refalrts::alloc_name(vm, context[26], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::alloc_close_call(vm, context[27]);
            refalrts::alloc_char(vm, context[28], ';');
            refalrts::alloc_close_bracket(vm, context[29]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '=');
            refalrts::reinit_open_call(context[9]);
            refalrts::reinit_name(context[11], functions[efunc_Fetch]);
            refalrts::reinit_char(context[12], ' ');
            refalrts::reinit_char(context[18], '(');
            refalrts::reinit_char(context[13], ' ');
            refalrts::reinit_char(context[14], 'e');
            refalrts::reinit_char(context[10], '.');
            refalrts::reinit_char(context[1], 'A');
            refalrts::link_brackets( context[21], context[29] );
            refalrts::push_stack( vm, context[27] );
            refalrts::push_stack( vm, context[9] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[24], context[29] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[21], context[23] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 # FlushError/18 e.0/19 )/13 # Finitive/14 )/10 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_FlushError], context[18] ) )
            continue;
          // closed e.0 as range 19
          //DEBUG: e.0: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/21"  (e.Accum) ="/22 </24 & Fetch/25" (TokenE"/26 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/9 HalfReuse: 'r'/11 HalfReuse: ' '/12 HalfReuse: '\''/18 AsIs: e.0/19 HalfReuse: '\''/13 HalfReuse: ')'/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 } ';'/28 )/29 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[21]);
          refalrts::alloc_chars(vm, context[22], context[23], "  (e.Accum) =", 13);
          refalrts::alloc_open_call(vm, context[24]);
          refalrts::alloc_name(vm, context[25], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[26], context[27], " (TokenE", 8);
          refalrts::alloc_char(vm, context[28], ';');
          refalrts::alloc_close_bracket(vm, context[29]);
          refalrts::reinit_char(context[0], 'r');
          refalrts::reinit_char(context[4], 'r');
          refalrts::reinit_char(context[9], 'o');
          refalrts::reinit_char(context[11], 'r');
          refalrts::reinit_char(context[12], ' ');
          refalrts::reinit_char(context[18], '\'');
          refalrts::reinit_char(context[13], '\'');
          refalrts::reinit_char(context[14], ')');
          refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::link_brackets( context[21], context[29] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[24] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[21], context[27] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative/4 (/9 # Empty/11 t.0/12 # Finitive/14 )/10 >/1
        //DEBUG: t.0: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/16"  (e.Accum) ="/17 </19 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/9 AsIs: # Empty/11 AsIs: t.0/12 HalfReuse: >/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 } ';'/20 )/21 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[16]);
        refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum) =", 13);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_char(vm, context[20], ';');
        refalrts::alloc_close_bracket(vm, context[21]);
        refalrts::reinit_name(context[0], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[9], functions[efunc_gen_Flush_D3]);
        refalrts::reinit_close_call(context[14]);
        refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::link_brackets( context[16], context[21] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[14] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[16], context[19] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative/4 (/9 # Empty/11 t.new6/12 (/14 e.new7/16 )/15 )/10 >/1
        context[16] = 0;
        context[17] = 0;
        if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
          continue;
        // closed e.new7 as range 16
        do {
          // </0 & WriteAlternative/4 (/9 # Empty/11 # Unnamed/12 (/14 e./18 )/15 )/10 >/1
          context[18] = context[16];
          context[19] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[12] ) )
            continue;
          // closed e. as range 18
          //DEBUG: e.: 18

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/20"  (e.Accum) e.Text"/21 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '<'/14 AsIs: e./18 HalfReuse: ' '/15 HalfReuse: '('/10 HalfReuse: ')'/1 }" e.Text>"/23 & WriteAlternative-Aux$2\1/25 >/26 ';'/27 )/28 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[20]);
          refalrts::alloc_chars(vm, context[21], context[22], "  (e.Accum) e.Text", 18);
          refalrts::alloc_chars(vm, context[23], context[24], " e.Text>", 8);
          refalrts::alloc_name(vm, context[25], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[26]);
          refalrts::alloc_char(vm, context[27], ';');
          refalrts::alloc_close_bracket(vm, context[28]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '=');
          refalrts::reinit_open_call(context[9]);
          refalrts::reinit_name(context[11], functions[efunc_Fetch]);
          refalrts::reinit_char(context[12], ' ');
          refalrts::reinit_char(context[14], '<');
          refalrts::reinit_char(context[15], ' ');
          refalrts::reinit_char(context[10], '(');
          refalrts::reinit_char(context[1], ')');
          refalrts::link_brackets( context[20], context[28] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[9] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[23], context[28] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[20], context[22] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 s.new8/22 e.new9/20 )/13 (/14 e.new10/18 )/15 )/10 >/1
          context[18] = context[16];
          context[19] = context[17];
          context[20] = 0;
          context[21] = 0;
          if( ! refalrts::brackets_term( context[20], context[21], context[12] ) )
            continue;
          // closed e.new10 as range 18
          if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
            continue;
          // closed e.new9 as range 20
          do {
            // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 # Flush/22 e.1/23 )/13 (/14 e./25 )/15 )/10 >/1
            context[23] = context[20];
            context[24] = context[21];
            context[25] = context[18];
            context[26] = context[19];
            if( ! refalrts::ident_term( identifiers[ident_Flush], context[22] ) )
              continue;
            // closed e.1 as range 23
            // closed e. as range 25
            //DEBUG: e.1: 23
            //DEBUG: e.: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/27"  (e.Accum) e.Text"/28 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '('/22 AsIs: e.1/23 HalfReuse: ' '/13 HalfReuse: 'e'/14 }".Accum) <"/30 Tile{ AsIs: e./25 }" () e.Text>"/32 & WriteAlternative-Aux$2\1/34 Tile{ HalfReuse: >/15 HalfReuse: ';'/10 HalfReuse: )/1 ]] }
            refalrts::alloc_open_bracket(vm, context[27]);
            refalrts::alloc_chars(vm, context[28], context[29], "  (e.Accum) e.Text", 18);
            refalrts::alloc_chars(vm, context[30], context[31], ".Accum) <", 9);
            refalrts::alloc_chars(vm, context[32], context[33], " () e.Text>", 11);
            refalrts::alloc_name(vm, context[34], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '=');
            refalrts::reinit_open_call(context[9]);
            refalrts::reinit_name(context[11], functions[efunc_Fetch]);
            refalrts::reinit_char(context[12], ' ');
            refalrts::reinit_char(context[22], '(');
            refalrts::reinit_char(context[13], ' ');
            refalrts::reinit_char(context[14], 'e');
            refalrts::reinit_close_call(context[15]);
            refalrts::reinit_char(context[10], ';');
            refalrts::reinit_close_bracket(context[1]);
            refalrts::link_brackets( context[27], context[1] );
            refalrts::push_stack( vm, context[15] );
            refalrts::push_stack( vm, context[9] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[15];
            res = refalrts::splice_evar( res, context[32], context[34] );
            res = refalrts::splice_evar( res, context[25], context[26] );
            res = refalrts::splice_evar( res, context[30], context[31] );
            res = refalrts::splice_evar( res, context[0], context[14] );
            res = refalrts::splice_evar( res, context[27], context[29] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 # FlushError/22 e.1/23 )/13 (/14 e./25 )/15 )/10 >/1
          context[23] = context[20];
          context[24] = context[21];
          context[25] = context[18];
          context[26] = context[19];
          if( ! refalrts::ident_term( identifiers[ident_FlushError], context[22] ) )
            continue;
          // closed e.1 as range 23
          // closed e. as range 25
          //DEBUG: e.1: 23
          //DEBUG: e.: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/27"  (e.Accum) e.Text ="/28 </30 & Fetch/31" (TokenE"/32 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/9 HalfReuse: 'r'/11 HalfReuse: ' '/12 HalfReuse: '\''/22 AsIs: e.1/23 HalfReuse: '\''/13 HalfReuse: ')'/14 }" <"/34 Tile{ AsIs: e./25 }" () e.Text>"/36 & WriteAlternative-Aux$2\1/38 Tile{ HalfReuse: >/15 HalfReuse: ';'/10 HalfReuse: )/1 ]] }
          refalrts::alloc_open_bracket(vm, context[27]);
          refalrts::alloc_chars(vm, context[28], context[29], "  (e.Accum) e.Text =", 20);
          refalrts::alloc_open_call(vm, context[30]);
          refalrts::alloc_name(vm, context[31], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[32], context[33], " (TokenE", 8);
          refalrts::alloc_chars(vm, context[34], context[35], " <", 2);
          refalrts::alloc_chars(vm, context[36], context[37], " () e.Text>", 11);
          refalrts::alloc_name(vm, context[38], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::reinit_char(context[0], 'r');
          refalrts::reinit_char(context[4], 'r');
          refalrts::reinit_char(context[9], 'o');
          refalrts::reinit_char(context[11], 'r');
          refalrts::reinit_char(context[12], ' ');
          refalrts::reinit_char(context[22], '\'');
          refalrts::reinit_char(context[13], '\'');
          refalrts::reinit_char(context[14], ')');
          refalrts::reinit_close_call(context[15]);
          refalrts::reinit_char(context[10], ';');
          refalrts::reinit_close_bracket(context[1]);
          refalrts::link_brackets( context[27], context[1] );
          refalrts::push_stack( vm, context[15] );
          refalrts::push_stack( vm, context[30] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[15];
          res = refalrts::splice_evar( res, context[36], context[38] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[34], context[35] );
          res = refalrts::splice_evar( res, context[0], context[14] );
          res = refalrts::splice_evar( res, context[27], context[33] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative/4 (/9 # Empty/11 t.0/12 (/14 e./18 )/15 )/10 >/1
        context[18] = context[16];
        context[19] = context[17];
        // closed e. as range 18
        //DEBUG: t.0: 12
        //DEBUG: e.: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/20"  (e.Accum) e.Text ="/21 </23 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/9 AsIs: # Empty/11 AsIs: t.0/12 HalfReuse: >/14 }" <"/24 Tile{ AsIs: e./18 }" () e.Text>"/26 & WriteAlternative-Aux$2\1/28 Tile{ HalfReuse: >/15 HalfReuse: ';'/10 HalfReuse: )/1 ]] }
        refalrts::alloc_open_bracket(vm, context[20]);
        refalrts::alloc_chars(vm, context[21], context[22], "  (e.Accum) e.Text =", 20);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_chars(vm, context[24], context[25], " <", 2);
        refalrts::alloc_chars(vm, context[26], context[27], " () e.Text>", 11);
        refalrts::alloc_name(vm, context[28], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::reinit_name(context[0], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[9], functions[efunc_gen_Flush_D3]);
        refalrts::reinit_close_call(context[14]);
        refalrts::reinit_close_call(context[15]);
        refalrts::reinit_char(context[10], ';');
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[20], context[1] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[14] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[15];
        res = refalrts::splice_evar( res, context[26], context[28] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[0], context[14] );
        res = refalrts::splice_evar( res, context[20], context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative/4 (/9 # Empty/11 # Unnamed/12 t.new6/14 )/10 >/1
        if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[12] ) )
          continue;
        do {
          // </0 & WriteAlternative/4 (/9 # Empty/11 # Unnamed/12 # Finitive/14 )/10 >/1
          if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
            continue;

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/16"  (e.Accum)"/17 Tile{ AsIs: </0 Reuse: & NextState-L*2/4 HalfReuse: # Finitive/9 HalfReuse: >/11 HalfReuse: </12 HalfReuse: & Fetch/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 } ';'/19 )/20 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[16]);
          refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum)", 11);
          refalrts::alloc_char(vm, context[19], ';');
          refalrts::alloc_close_bracket(vm, context[20]);
          refalrts::update_name(context[4], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_ident(context[9], identifiers[ident_Finitive]);
          refalrts::reinit_close_call(context[11]);
          refalrts::reinit_open_call(context[12]);
          refalrts::reinit_name(context[14], functions[efunc_Fetch]);
          refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::link_brackets( context[16], context[20] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[12] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[16], context[18] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative/4 (/9 # Empty/11 # Unnamed/12 (/14 e./16 )/15 )/10 >/1
          context[16] = 0;
          context[17] = 0;
          if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
            continue;
          // closed e. as range 16
          //DEBUG: e.: 16

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/18"  (e.Acc"/19 Tile{ HalfReuse: 'u'/0 HalfReuse: 'm'/4 HalfReuse: ')'/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: (/14 AsIs: e./16 AsIs: )/15 HalfReuse: >/10 HalfReuse: </1 } & Fetch/21" <"/22 e./16/24" () e.Text>"/26 & WriteAlternative-Aux$2\1/28 >/29 ';'/30 )/31 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[18]);
          refalrts::alloc_chars(vm, context[19], context[20], "  (e.Acc", 8);
          refalrts::alloc_name(vm, context[21], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[22], context[23], " <", 2);
          refalrts::copy_evar(vm, context[24], context[25], context[16], context[17]);
          refalrts::alloc_chars(vm, context[26], context[27], " () e.Text>", 11);
          refalrts::alloc_name(vm, context[28], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[29]);
          refalrts::alloc_char(vm, context[30], ';');
          refalrts::alloc_close_bracket(vm, context[31]);
          refalrts::reinit_char(context[0], 'u');
          refalrts::reinit_char(context[4], 'm');
          refalrts::reinit_char(context[9], ')');
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[10]);
          refalrts::reinit_open_call(context[1]);
          refalrts::link_brackets( context[18], context[31] );
          refalrts::push_stack( vm, context[29] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[11] );
          refalrts::link_brackets( context[14], context[15] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[21], context[31] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[18], context[20] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative/4 (/9 # Empty/11 # Unnamed/12 t.1/14 )/10 >/1
        //DEBUG: t.1: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/16"  (e.Acc"/17 Tile{ HalfReuse: 'u'/0 HalfReuse: 'm'/4 HalfReuse: ')'/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: t.1/14 HalfReuse: >/10 HalfReuse: </1 } & Fetch/19 </20 & NextState-R*2/21 t.1/14/22 >/24 & WriteAlternative-Aux$2\1/25 >/26 ';'/27 )/28 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[16]);
        refalrts::alloc_chars(vm, context[17], context[18], "  (e.Acc", 8);
        refalrts::alloc_name(vm, context[19], functions[efunc_Fetch]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_gen_NextStatem_R_D2]);
        refalrts::copy_evar(vm, context[22], context[23], context[14], context[15]);
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::alloc_char(vm, context[27], ';');
        refalrts::alloc_close_bracket(vm, context[28]);
        refalrts::reinit_char(context[0], 'u');
        refalrts::reinit_char(context[4], 'm');
        refalrts::reinit_char(context[9], ')');
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_open_call(context[1]);
        refalrts::link_brackets( context[16], context[28] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[19], context[28] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[16], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 s.new6/18 e.new7/16 )/13 t.new8/14 )/10 >/1
        context[16] = 0;
        context[17] = 0;
        if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
          continue;
        if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
          continue;
        // closed e.new7 as range 16
        do {
          // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 # Flush/18 e.new9/19 )/13 t.new10/14 )/10 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_Flush], context[18] ) )
            continue;
          // closed e.new9 as range 19
          do {
            // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 # Flush/18 e.0/21 )/13 # Finitive/14 )/10 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
              continue;
            // closed e.0 as range 21
            //DEBUG: e.0: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/23"  (e.Accum)"/24 </26 & NextState-L*2/27 Tile{ HalfReuse: # Finitive/0 HalfReuse: >/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '('/18 AsIs: e.0/21 HalfReuse: ' '/13 HalfReuse: 'e'/14 HalfReuse: '.'/10 HalfReuse: 'A'/1 }"ccum)"/28 & WriteAlternative-Aux$2\1/30 >/31 ';'/32 )/33 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[23]);
            refalrts::alloc_chars(vm, context[24], context[25], "  (e.Accum)", 11);
            refalrts::alloc_open_call(vm, context[26]);
            refalrts::alloc_name(vm, context[27], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::alloc_chars(vm, context[28], context[29], "ccum)", 5);
            refalrts::alloc_name(vm, context[30], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::alloc_close_call(vm, context[31]);
            refalrts::alloc_char(vm, context[32], ';');
            refalrts::alloc_close_bracket(vm, context[33]);
            refalrts::reinit_ident(context[0], identifiers[ident_Finitive]);
            refalrts::reinit_close_call(context[4]);
            refalrts::reinit_open_call(context[9]);
            refalrts::reinit_name(context[11], functions[efunc_Fetch]);
            refalrts::reinit_char(context[12], ' ');
            refalrts::reinit_char(context[18], '(');
            refalrts::reinit_char(context[13], ' ');
            refalrts::reinit_char(context[14], 'e');
            refalrts::reinit_char(context[10], '.');
            refalrts::reinit_char(context[1], 'A');
            refalrts::link_brackets( context[23], context[33] );
            refalrts::push_stack( vm, context[31] );
            refalrts::push_stack( vm, context[9] );
            refalrts::push_stack( vm, context[4] );
            refalrts::push_stack( vm, context[26] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[28], context[33] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[23], context[27] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 # Flush/18 e.0/21 )/13 (/14 e./23 )/15 )/10 >/1
            context[21] = context[19];
            context[22] = context[20];
            context[23] = 0;
            context[24] = 0;
            if( ! refalrts::brackets_term( context[23], context[24], context[14] ) )
              continue;
            // closed e.0 as range 21
            // closed e. as range 23
            //DEBUG: e.0: 21
            //DEBUG: e.: 23

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/9 HalfReuse: '('/11 HalfReuse: 'e'/12 HalfReuse: '.'/18 }"Accum)"/25 </27 Tile{ HalfReuse: & NextState-L*2/13 AsIs: (/14 AsIs: e./23 AsIs: )/15 HalfReuse: >/10 HalfReuse: </1 } & Fetch/28" ("/29 Tile{ AsIs: e.0/21 }" e.Accum) <"/31 e./23/33" () e.Text>"/35 & WriteAlternative-Aux$2\1/37 >/38 ';'/39 )/40 Tile{ ]] }
            refalrts::alloc_chars(vm, context[25], context[26], "Accum)", 6);
            refalrts::alloc_open_call(vm, context[27]);
            refalrts::alloc_name(vm, context[28], functions[efunc_Fetch]);
            refalrts::alloc_chars(vm, context[29], context[30], " (", 2);
            refalrts::alloc_chars(vm, context[31], context[32], " e.Accum) <", 11);
            refalrts::copy_evar(vm, context[33], context[34], context[23], context[24]);
            refalrts::alloc_chars(vm, context[35], context[36], " () e.Text>", 11);
            refalrts::alloc_name(vm, context[37], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::alloc_close_call(vm, context[38]);
            refalrts::alloc_char(vm, context[39], ';');
            refalrts::alloc_close_bracket(vm, context[40]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_char(context[4], ' ');
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '(');
            refalrts::reinit_char(context[12], 'e');
            refalrts::reinit_char(context[18], '.');
            refalrts::reinit_name(context[13], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_close_call(context[10]);
            refalrts::reinit_open_call(context[1]);
            refalrts::link_brackets( context[0], context[40] );
            refalrts::push_stack( vm, context[38] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[10] );
            refalrts::push_stack( vm, context[27] );
            refalrts::link_brackets( context[14], context[15] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[31], context[40] );
            res = refalrts::splice_evar( res, context[21], context[22] );
            res = refalrts::splice_evar( res, context[28], context[30] );
            res = refalrts::splice_evar( res, context[13], context[1] );
            res = refalrts::splice_evar( res, context[25], context[27] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 # Flush/18 e.0/21 )/13 t.1/14 )/10 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.0 as range 21
          //DEBUG: t.1: 14
          //DEBUG: e.0: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/9 HalfReuse: '('/11 HalfReuse: 'e'/12 HalfReuse: '.'/18 }"Accum)"/23 </25 Tile{ HalfReuse: & NextState-L*2/13 AsIs: t.1/14 HalfReuse: >/10 HalfReuse: </1 } & Fetch/26" ("/27 Tile{ AsIs: e.0/21 }" e.Accum)"/29 </31 & NextState-R*2/32 t.1/14/33 >/35 & WriteAlternative-Aux$2\1/36 >/37 ';'/38 )/39 Tile{ ]] }
          refalrts::alloc_chars(vm, context[23], context[24], "Accum)", 6);
          refalrts::alloc_open_call(vm, context[25]);
          refalrts::alloc_name(vm, context[26], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[27], context[28], " (", 2);
          refalrts::alloc_chars(vm, context[29], context[30], " e.Accum)", 9);
          refalrts::alloc_open_call(vm, context[31]);
          refalrts::alloc_name(vm, context[32], functions[efunc_gen_NextStatem_R_D2]);
          refalrts::copy_evar(vm, context[33], context[34], context[14], context[15]);
          refalrts::alloc_close_call(vm, context[35]);
          refalrts::alloc_name(vm, context[36], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[37]);
          refalrts::alloc_char(vm, context[38], ';');
          refalrts::alloc_close_bracket(vm, context[39]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_char(context[4], ' ');
          refalrts::reinit_char(context[9], ' ');
          refalrts::reinit_char(context[11], '(');
          refalrts::reinit_char(context[12], 'e');
          refalrts::reinit_char(context[18], '.');
          refalrts::reinit_name(context[13], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[10]);
          refalrts::reinit_open_call(context[1]);
          refalrts::link_brackets( context[0], context[39] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[25] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[29], context[39] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[26], context[28] );
          res = refalrts::splice_evar( res, context[13], context[1] );
          res = refalrts::splice_evar( res, context[23], context[25] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 # FlushError/18 e.new9/19 )/13 t.new10/14 )/10 >/1
        context[19] = context[16];
        context[20] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_FlushError], context[18] ) )
          continue;
        // closed e.new9 as range 19
        do {
          // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 # FlushError/18 e.0/21 )/13 # Finitive/14 )/10 >/1
          context[21] = context[19];
          context[22] = context[20];
          if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
            continue;
          // closed e.0 as range 21
          //DEBUG: e.0: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/23"  (e.Accum)"/24 </26 & NextState-L*2/27 # Finitive/28 >/29 </30 & Fetch/31" (TokenE"/32 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/9 HalfReuse: 'r'/11 HalfReuse: ' '/12 HalfReuse: '\''/18 AsIs: e.0/21 HalfReuse: '\''/13 HalfReuse: ')'/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 } ';'/34 )/35 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[23]);
          refalrts::alloc_chars(vm, context[24], context[25], "  (e.Accum)", 11);
          refalrts::alloc_open_call(vm, context[26]);
          refalrts::alloc_name(vm, context[27], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::alloc_ident(vm, context[28], identifiers[ident_Finitive]);
          refalrts::alloc_close_call(vm, context[29]);
          refalrts::alloc_open_call(vm, context[30]);
          refalrts::alloc_name(vm, context[31], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[32], context[33], " (TokenE", 8);
          refalrts::alloc_char(vm, context[34], ';');
          refalrts::alloc_close_bracket(vm, context[35]);
          refalrts::reinit_char(context[0], 'r');
          refalrts::reinit_char(context[4], 'r');
          refalrts::reinit_char(context[9], 'o');
          refalrts::reinit_char(context[11], 'r');
          refalrts::reinit_char(context[12], ' ');
          refalrts::reinit_char(context[18], '\'');
          refalrts::reinit_char(context[13], '\'');
          refalrts::reinit_char(context[14], ')');
          refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::link_brackets( context[23], context[35] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[29] );
          refalrts::push_stack( vm, context[26] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[34], context[35] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[23], context[33] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 # FlushError/18 e.0/21 )/13 (/14 e./23 )/15 )/10 >/1
          context[21] = context[19];
          context[22] = context[20];
          context[23] = 0;
          context[24] = 0;
          if( ! refalrts::brackets_term( context[23], context[24], context[14] ) )
            continue;
          // closed e.0 as range 21
          // closed e. as range 23
          //DEBUG: e.0: 21
          //DEBUG: e.: 23

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/9 HalfReuse: '('/11 HalfReuse: 'e'/12 HalfReuse: '.'/18 }"Accum)"/25 </27 Tile{ HalfReuse: & NextState-L*2/13 AsIs: (/14 AsIs: e./23 AsIs: )/15 HalfReuse: >/10 HalfReuse: </1 } & Fetch/28" (TokenError \'"/29 Tile{ AsIs: e.0/21 }"\') <"/31 e./23/33" () e.Text>"/35 & WriteAlternative-Aux$2\1/37 >/38 ';'/39 )/40 Tile{ ]] }
          refalrts::alloc_chars(vm, context[25], context[26], "Accum)", 6);
          refalrts::alloc_open_call(vm, context[27]);
          refalrts::alloc_name(vm, context[28], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[29], context[30], " (TokenError \'", 14);
          refalrts::alloc_chars(vm, context[31], context[32], "\') <", 4);
          refalrts::copy_evar(vm, context[33], context[34], context[23], context[24]);
          refalrts::alloc_chars(vm, context[35], context[36], " () e.Text>", 11);
          refalrts::alloc_name(vm, context[37], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[38]);
          refalrts::alloc_char(vm, context[39], ';');
          refalrts::alloc_close_bracket(vm, context[40]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_char(context[4], ' ');
          refalrts::reinit_char(context[9], ' ');
          refalrts::reinit_char(context[11], '(');
          refalrts::reinit_char(context[12], 'e');
          refalrts::reinit_char(context[18], '.');
          refalrts::reinit_name(context[13], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[10]);
          refalrts::reinit_open_call(context[1]);
          refalrts::link_brackets( context[0], context[40] );
          refalrts::push_stack( vm, context[38] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[27] );
          refalrts::link_brackets( context[14], context[15] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[31], context[40] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[28], context[30] );
          res = refalrts::splice_evar( res, context[13], context[1] );
          res = refalrts::splice_evar( res, context[25], context[27] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative/4 (/9 # Empty/11 (/12 # FlushError/18 e.0/21 )/13 t.1/14 )/10 >/1
        context[21] = context[19];
        context[22] = context[20];
        // closed e.0 as range 21
        //DEBUG: t.1: 14
        //DEBUG: e.0: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/23"  (e.Accum)"/24 </26 & NextState-L*2/27 Tile{ AsIs: t.1/14 HalfReuse: >/10 HalfReuse: </1 } & Fetch/28" (TokenE"/29 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/9 HalfReuse: 'r'/11 HalfReuse: ' '/12 HalfReuse: '\''/18 AsIs: e.0/21 HalfReuse: '\''/13 } ')'/31 </32 & NextState-R*2/33 t.1/14/34 >/36 & WriteAlternative-Aux$2\1/37 >/38 ';'/39 )/40 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[23]);
        refalrts::alloc_chars(vm, context[24], context[25], "  (e.Accum)", 11);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::alloc_name(vm, context[28], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[29], context[30], " (TokenE", 8);
        refalrts::alloc_char(vm, context[31], ')');
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[33], functions[efunc_gen_NextStatem_R_D2]);
        refalrts::copy_evar(vm, context[34], context[35], context[14], context[15]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::alloc_name(vm, context[37], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[38]);
        refalrts::alloc_char(vm, context[39], ';');
        refalrts::alloc_close_bracket(vm, context[40]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_char(context[0], 'r');
        refalrts::reinit_char(context[4], 'r');
        refalrts::reinit_char(context[9], 'o');
        refalrts::reinit_char(context[11], 'r');
        refalrts::reinit_char(context[12], ' ');
        refalrts::reinit_char(context[18], '\'');
        refalrts::reinit_char(context[13], '\'');
        refalrts::link_brackets( context[23], context[40] );
        refalrts::push_stack( vm, context[38] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[26] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[31], context[40] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[28], context[30] );
        res = refalrts::splice_evar( res, context[14], context[1] );
        res = refalrts::splice_evar( res, context[23], context[27] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative/4 (/9 # Empty/11 t.0/12 # Finitive/14 )/10 >/1
        if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
          continue;
        //DEBUG: t.0: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/16"  (e.Accum)"/17 </19 & NextState-L*2/20 # Finitive/21 >/22 </23 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/9 AsIs: # Empty/11 AsIs: t.0/12 HalfReuse: >/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 } ';'/24 )/25 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[16]);
        refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum)", 11);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::alloc_ident(vm, context[21], identifiers[ident_Finitive]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_char(vm, context[24], ';');
        refalrts::alloc_close_bracket(vm, context[25]);
        refalrts::reinit_name(context[0], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[9], functions[efunc_gen_Flush_D3]);
        refalrts::reinit_close_call(context[14]);
        refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::link_brackets( context[16], context[25] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[14] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[19] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[16], context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative/4 (/9 # Empty/11 t.0/12 (/14 e./16 )/15 )/10 >/1
        context[16] = 0;
        context[17] = 0;
        if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
          continue;
        // closed e. as range 16
        //DEBUG: t.0: 12
        //DEBUG: e.: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/18"  (e.Accum)"/19 </21 & NextState-L*2/22 Tile{ AsIs: (/14 AsIs: e./16 AsIs: )/15 HalfReuse: >/10 HalfReuse: </1 } Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/9 AsIs: # Empty/11 AsIs: t.0/12 } >/23" <"/24 e./16/26" () e.Text>"/28 & WriteAlternative-Aux$2\1/30 >/31 ';'/32 )/33 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[18]);
        refalrts::alloc_chars(vm, context[19], context[20], "  (e.Accum)", 11);
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_name(vm, context[22], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::alloc_close_call(vm, context[23]);
        refalrts::alloc_chars(vm, context[24], context[25], " <", 2);
        refalrts::copy_evar(vm, context[26], context[27], context[16], context[17]);
        refalrts::alloc_chars(vm, context[28], context[29], " () e.Text>", 11);
        refalrts::alloc_name(vm, context[30], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[31]);
        refalrts::alloc_char(vm, context[32], ';');
        refalrts::alloc_close_bracket(vm, context[33]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_name(context[0], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[9], functions[efunc_gen_Flush_D3]);
        refalrts::link_brackets( context[18], context[33] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[21] );
        refalrts::link_brackets( context[14], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[23], context[33] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[14], context[1] );
        res = refalrts::splice_evar( res, context[18], context[22] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative/4 (/9 # Empty/11 t.0/12 t.1/14 )/10 >/1
      //DEBUG: t.0: 12
      //DEBUG: t.1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/16"  (e.Accum)"/17 </19 & NextState-L*2/20 Tile{ AsIs: t.1/14 HalfReuse: >/10 HalfReuse: </1 } Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/9 AsIs: # Empty/11 AsIs: t.0/12 } >/21 </22 & NextState-R*2/23 t.1/14/24 >/26 & WriteAlternative-Aux$2\1/27 >/28 ';'/29 )/30 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[16]);
      refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum)", 11);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_gen_NextStatem_R_D2]);
      refalrts::copy_evar(vm, context[24], context[25], context[14], context[15]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::alloc_char(vm, context[29], ';');
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::reinit_close_call(context[10]);
      refalrts::reinit_open_call(context[1]);
      refalrts::reinit_name(context[0], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[9], functions[efunc_gen_Flush_D3]);
      refalrts::link_brackets( context[16], context[30] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[30] );
      res = refalrts::splice_evar( res, context[0], context[13] );
      res = refalrts::splice_evar( res, context[14], context[1] );
      res = refalrts::splice_evar( res, context[16], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WriteAlternative/4 (/9 # Any/11 t.new4/12 t.new5/14 )/10 >/1
    if( ! refalrts::ident_term( identifiers[ident_Any], context[11] ) )
      continue;
    do {
      // </0 & WriteAlternative/4 (/9 # Any/11 t.new6/12 # Finitive/14 )/10 >/1
      if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
        continue;
      do {
        // </0 & WriteAlternative/4 (/9 # Any/11 # Unnamed/12 # Finitive/14 )/10 >/1
        if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/9 HalfReuse: '('/11 HalfReuse: 'e'/12 HalfReuse: '.'/14 HalfReuse: 'A'/10 HalfReuse: 'c'/1 }"cum) s.Any ="/16 </18 & Fetch/19 & WriteAlternative-Aux$2\1/20 >/21 ';'/22 )/23 Tile{ ]] }
        refalrts::alloc_chars(vm, context[16], context[17], "cum) s.Any =", 12);
        refalrts::alloc_open_call(vm, context[18]);
        refalrts::alloc_name(vm, context[19], functions[efunc_Fetch]);
        refalrts::alloc_name(vm, context[20], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_char(vm, context[22], ';');
        refalrts::alloc_close_bracket(vm, context[23]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_char(context[4], ' ');
        refalrts::reinit_char(context[9], ' ');
        refalrts::reinit_char(context[11], '(');
        refalrts::reinit_char(context[12], 'e');
        refalrts::reinit_char(context[14], '.');
        refalrts::reinit_char(context[10], 'A');
        refalrts::reinit_char(context[1], 'c');
        refalrts::link_brackets( context[0], context[23] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[18] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[16], context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative/4 (/9 # Any/11 (/12 s.new7/18 e.new8/16 )/13 # Finitive/14 )/10 >/1
        context[16] = 0;
        context[17] = 0;
        if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
          continue;
        if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
          continue;
        // closed e.new8 as range 16
        do {
          // </0 & WriteAlternative/4 (/9 # Any/11 (/12 # Flush/18 e.0/19 )/13 # Finitive/14 )/10 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_Flush], context[18] ) )
            continue;
          // closed e.0 as range 19
          //DEBUG: e.0: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/21"  (e.Accum) s.Any"/22 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '('/18 AsIs: e.0/19 HalfReuse: ' '/13 HalfReuse: 'e'/14 HalfReuse: '.'/10 HalfReuse: 'A'/1 }"ccum s.Any)"/24 & WriteAlternative-Aux$2\1/26 >/27 ';'/28 )/29 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[21]);
          refalrts::alloc_chars(vm, context[22], context[23], "  (e.Accum) s.Any", 17);
          refalrts::alloc_chars(vm, context[24], context[25], "ccum s.Any)", 11);
          refalrts::alloc_name(vm, context[26], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[27]);
          refalrts::alloc_char(vm, context[28], ';');
          refalrts::alloc_close_bracket(vm, context[29]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '=');
          refalrts::reinit_open_call(context[9]);
          refalrts::reinit_name(context[11], functions[efunc_Fetch]);
          refalrts::reinit_char(context[12], ' ');
          refalrts::reinit_char(context[18], '(');
          refalrts::reinit_char(context[13], ' ');
          refalrts::reinit_char(context[14], 'e');
          refalrts::reinit_char(context[10], '.');
          refalrts::reinit_char(context[1], 'A');
          refalrts::link_brackets( context[21], context[29] );
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[9] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[24], context[29] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[21], context[23] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative/4 (/9 # Any/11 (/12 # FlushError/18 e.0/19 )/13 # Finitive/14 )/10 >/1
        context[19] = context[16];
        context[20] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_FlushError], context[18] ) )
          continue;
        // closed e.0 as range 19
        //DEBUG: e.0: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/21"  (e.Accum) s.Any ="/22 </24 & Fetch/25" (TokenE"/26 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/9 HalfReuse: 'r'/11 HalfReuse: ' '/12 HalfReuse: '\''/18 AsIs: e.0/19 HalfReuse: '\''/13 HalfReuse: ')'/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 } ';'/28 )/29 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[21]);
        refalrts::alloc_chars(vm, context[22], context[23], "  (e.Accum) s.Any =", 19);
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[26], context[27], " (TokenE", 8);
        refalrts::alloc_char(vm, context[28], ';');
        refalrts::alloc_close_bracket(vm, context[29]);
        refalrts::reinit_char(context[0], 'r');
        refalrts::reinit_char(context[4], 'r');
        refalrts::reinit_char(context[9], 'o');
        refalrts::reinit_char(context[11], 'r');
        refalrts::reinit_char(context[12], ' ');
        refalrts::reinit_char(context[18], '\'');
        refalrts::reinit_char(context[13], '\'');
        refalrts::reinit_char(context[14], ')');
        refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::link_brackets( context[21], context[29] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[21], context[27] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative/4 (/9 # Any/11 t.0/12 # Finitive/14 )/10 >/1
      //DEBUG: t.0: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/16"  (e.Accum) s.Any ="/17 </19 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/9 AsIs: # Any/11 AsIs: t.0/12 HalfReuse: >/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 } ';'/20 )/21 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[16]);
      refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum) s.Any =", 19);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_char(vm, context[20], ';');
      refalrts::alloc_close_bracket(vm, context[21]);
      refalrts::reinit_name(context[0], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[9], functions[efunc_gen_Flush_D3]);
      refalrts::reinit_close_call(context[14]);
      refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::link_brackets( context[16], context[21] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WriteAlternative/4 (/9 # Any/11 t.new6/12 (/14 e.new7/16 )/15 )/10 >/1
    context[16] = 0;
    context[17] = 0;
    if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
      continue;
    // closed e.new7 as range 16
    do {
      // </0 & WriteAlternative/4 (/9 # Any/11 # Unnamed/12 (/14 e./18 )/15 )/10 >/1
      context[18] = context[16];
      context[19] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[12] ) )
        continue;
      // closed e. as range 18
      //DEBUG: e.: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/20"  (e.Accum) s.Any e.Text"/21 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '<'/14 AsIs: e./18 HalfReuse: ' '/15 HalfReuse: '('/10 HalfReuse: ')'/1 }" e.Text>"/23 & WriteAlternative-Aux$2\1/25 >/26 ';'/27 )/28 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[20]);
      refalrts::alloc_chars(vm, context[21], context[22], "  (e.Accum) s.Any e.Text", 24);
      refalrts::alloc_chars(vm, context[23], context[24], " e.Text>", 8);
      refalrts::alloc_name(vm, context[25], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_char(vm, context[27], ';');
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], '=');
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[11], functions[efunc_Fetch]);
      refalrts::reinit_char(context[12], ' ');
      refalrts::reinit_char(context[14], '<');
      refalrts::reinit_char(context[15], ' ');
      refalrts::reinit_char(context[10], '(');
      refalrts::reinit_char(context[1], ')');
      refalrts::link_brackets( context[20], context[28] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[28] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[20], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative/4 (/9 # Any/11 (/12 s.new8/22 e.new9/20 )/13 (/14 e.new10/18 )/15 )/10 >/1
      context[18] = context[16];
      context[19] = context[17];
      context[20] = 0;
      context[21] = 0;
      if( ! refalrts::brackets_term( context[20], context[21], context[12] ) )
        continue;
      // closed e.new10 as range 18
      if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
        continue;
      // closed e.new9 as range 20
      do {
        // </0 & WriteAlternative/4 (/9 # Any/11 (/12 # Flush/22 e.1/23 )/13 (/14 e./25 )/15 )/10 >/1
        context[23] = context[20];
        context[24] = context[21];
        context[25] = context[18];
        context[26] = context[19];
        if( ! refalrts::ident_term( identifiers[ident_Flush], context[22] ) )
          continue;
        // closed e.1 as range 23
        // closed e. as range 25
        //DEBUG: e.1: 23
        //DEBUG: e.: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/27"  (e.Accum) s.Any e.Text"/28 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '('/22 AsIs: e.1/23 HalfReuse: ' '/13 HalfReuse: 'e'/14 }".Accum s.Any) <"/30 Tile{ AsIs: e./25 }" () e.Text>"/32 & WriteAlternative-Aux$2\1/34 Tile{ HalfReuse: >/15 HalfReuse: ';'/10 HalfReuse: )/1 ]] }
        refalrts::alloc_open_bracket(vm, context[27]);
        refalrts::alloc_chars(vm, context[28], context[29], "  (e.Accum) s.Any e.Text", 24);
        refalrts::alloc_chars(vm, context[30], context[31], ".Accum s.Any) <", 15);
        refalrts::alloc_chars(vm, context[32], context[33], " () e.Text>", 11);
        refalrts::alloc_name(vm, context[34], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '=');
        refalrts::reinit_open_call(context[9]);
        refalrts::reinit_name(context[11], functions[efunc_Fetch]);
        refalrts::reinit_char(context[12], ' ');
        refalrts::reinit_char(context[22], '(');
        refalrts::reinit_char(context[13], ' ');
        refalrts::reinit_char(context[14], 'e');
        refalrts::reinit_close_call(context[15]);
        refalrts::reinit_char(context[10], ';');
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[27], context[1] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[15];
        res = refalrts::splice_evar( res, context[32], context[34] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[0], context[14] );
        res = refalrts::splice_evar( res, context[27], context[29] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative/4 (/9 # Any/11 (/12 # FlushError/22 e.1/23 )/13 (/14 e./25 )/15 )/10 >/1
      context[23] = context[20];
      context[24] = context[21];
      context[25] = context[18];
      context[26] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_FlushError], context[22] ) )
        continue;
      // closed e.1 as range 23
      // closed e. as range 25
      //DEBUG: e.1: 23
      //DEBUG: e.: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/27"  (e.Accum) s.Any e.Text ="/28 </30 & Fetch/31" (TokenE"/32 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/9 HalfReuse: 'r'/11 HalfReuse: ' '/12 HalfReuse: '\''/22 AsIs: e.1/23 HalfReuse: '\''/13 HalfReuse: ')'/14 }" <"/34 Tile{ AsIs: e./25 }" () e.Text>"/36 & WriteAlternative-Aux$2\1/38 Tile{ HalfReuse: >/15 HalfReuse: ';'/10 HalfReuse: )/1 ]] }
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::alloc_chars(vm, context[28], context[29], "  (e.Accum) s.Any e.Text =", 26);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_Fetch]);
      refalrts::alloc_chars(vm, context[32], context[33], " (TokenE", 8);
      refalrts::alloc_chars(vm, context[34], context[35], " <", 2);
      refalrts::alloc_chars(vm, context[36], context[37], " () e.Text>", 11);
      refalrts::alloc_name(vm, context[38], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::reinit_char(context[0], 'r');
      refalrts::reinit_char(context[4], 'r');
      refalrts::reinit_char(context[9], 'o');
      refalrts::reinit_char(context[11], 'r');
      refalrts::reinit_char(context[12], ' ');
      refalrts::reinit_char(context[22], '\'');
      refalrts::reinit_char(context[13], '\'');
      refalrts::reinit_char(context[14], ')');
      refalrts::reinit_close_call(context[15]);
      refalrts::reinit_char(context[10], ';');
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[27], context[1] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[0], context[14] );
      res = refalrts::splice_evar( res, context[27], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WriteAlternative/4 (/9 # Any/11 t.0/12 (/14 e./18 )/15 )/10 >/1
    context[18] = context[16];
    context[19] = context[17];
    // closed e. as range 18
    //DEBUG: t.0: 12
    //DEBUG: e.: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/20"  (e.Accum) s.Any e.Text ="/21 </23 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/9 AsIs: # Any/11 AsIs: t.0/12 HalfReuse: >/14 }" <"/24 Tile{ AsIs: e./18 }" () e.Text>"/26 & WriteAlternative-Aux$2\1/28 Tile{ HalfReuse: >/15 HalfReuse: ';'/10 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::alloc_chars(vm, context[21], context[22], "  (e.Accum) s.Any e.Text =", 26);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_chars(vm, context[24], context[25], " <", 2);
    refalrts::alloc_chars(vm, context[26], context[27], " () e.Text>", 11);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
    refalrts::reinit_name(context[0], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[9], functions[efunc_gen_Flush_D3]);
    refalrts::reinit_close_call(context[14]);
    refalrts::reinit_close_call(context[15]);
    refalrts::reinit_char(context[10], ';');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[20], context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[15];
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & WriteAlternative/4 t.new1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & WriteAlternative/4 (/5 s.new2/9 t.new3/10 t.new4/12 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    do {
      // </0 & WriteAlternative/4 (/5 # Any/9 t.new5/10 t.new6/12 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Any], context[9] ) )
        continue;
      do {
        // </0 & WriteAlternative/4 (/5 # Any/9 # Unnamed/10 t.new7/12 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[10] ) )
          continue;
        do {
          // </0 & WriteAlternative/4 (/5 # Any/9 # Unnamed/10 # Finitive/12 )/6 >/1
          if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
            continue;

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/14"  (e.Accum) s.Any"/15 Tile{ AsIs: </0 Reuse: & NextState-L*2/4 HalfReuse: # Finitive/5 HalfReuse: >/9 HalfReuse: </10 HalfReuse: & Fetch/12 HalfReuse: & WriteAlternative-Aux$2\1/6 AsIs: >/1 } ';'/17 )/18 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[14]);
          refalrts::alloc_chars(vm, context[15], context[16], "  (e.Accum) s.Any", 17);
          refalrts::alloc_char(vm, context[17], ';');
          refalrts::alloc_close_bracket(vm, context[18]);
          refalrts::update_name(context[4], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_ident(context[5], identifiers[ident_Finitive]);
          refalrts::reinit_close_call(context[9]);
          refalrts::reinit_open_call(context[10]);
          refalrts::reinit_name(context[12], functions[efunc_Fetch]);
          refalrts::reinit_name(context[6], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::link_brackets( context[14], context[18] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[9] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[17], context[18] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[14], context[16] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative/4 (/5 # Any/9 # Unnamed/10 (/12 e./14 )/13 )/6 >/1
          context[14] = 0;
          context[15] = 0;
          if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
            continue;
          // closed e. as range 14
          //DEBUG: e.: 14

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/16"  (e.Accum) s."/17 Tile{ HalfReuse: 'A'/0 HalfReuse: 'n'/4 HalfReuse: 'y'/5 HalfReuse: </9 HalfReuse: & NextState-L*2/10 AsIs: (/12 AsIs: e./14 AsIs: )/13 HalfReuse: >/6 HalfReuse: </1 } & Fetch/19" <"/20 e./14/22" () e.Text>"/24 & WriteAlternative-Aux$2\1/26 >/27 ';'/28 )/29 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[16]);
          refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum) s.", 14);
          refalrts::alloc_name(vm, context[19], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[20], context[21], " <", 2);
          refalrts::copy_evar(vm, context[22], context[23], context[14], context[15]);
          refalrts::alloc_chars(vm, context[24], context[25], " () e.Text>", 11);
          refalrts::alloc_name(vm, context[26], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[27]);
          refalrts::alloc_char(vm, context[28], ';');
          refalrts::alloc_close_bracket(vm, context[29]);
          refalrts::reinit_char(context[0], 'A');
          refalrts::reinit_char(context[4], 'n');
          refalrts::reinit_char(context[5], 'y');
          refalrts::reinit_open_call(context[9]);
          refalrts::reinit_name(context[10], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[6]);
          refalrts::reinit_open_call(context[1]);
          refalrts::link_brackets( context[16], context[29] );
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[6] );
          refalrts::push_stack( vm, context[9] );
          refalrts::link_brackets( context[12], context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[19], context[29] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[16], context[18] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative/4 (/5 # Any/9 # Unnamed/10 t.1/12 )/6 >/1
        //DEBUG: t.1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/14"  (e.Accum) s."/15 Tile{ HalfReuse: 'A'/0 HalfReuse: 'n'/4 HalfReuse: 'y'/5 HalfReuse: </9 HalfReuse: & NextState-L*2/10 AsIs: t.1/12 HalfReuse: >/6 HalfReuse: </1 } & Fetch/17 </18 & NextState-R*2/19 t.1/12/20 >/22 & WriteAlternative-Aux$2\1/23 >/24 ';'/25 )/26 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[14]);
        refalrts::alloc_chars(vm, context[15], context[16], "  (e.Accum) s.", 14);
        refalrts::alloc_name(vm, context[17], functions[efunc_Fetch]);
        refalrts::alloc_open_call(vm, context[18]);
        refalrts::alloc_name(vm, context[19], functions[efunc_gen_NextStatem_R_D2]);
        refalrts::copy_evar(vm, context[20], context[21], context[12], context[13]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_name(vm, context[23], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::alloc_char(vm, context[25], ';');
        refalrts::alloc_close_bracket(vm, context[26]);
        refalrts::reinit_char(context[0], 'A');
        refalrts::reinit_char(context[4], 'n');
        refalrts::reinit_char(context[5], 'y');
        refalrts::reinit_open_call(context[9]);
        refalrts::reinit_name(context[10], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::reinit_close_call(context[6]);
        refalrts::reinit_open_call(context[1]);
        refalrts::link_brackets( context[14], context[26] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[17], context[26] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[14], context[16] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative/4 (/5 # Any/9 (/10 s.new7/16 e.new8/14 )/11 t.new9/12 )/6 >/1
        context[14] = 0;
        context[15] = 0;
        if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
          continue;
        if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
          continue;
        // closed e.new8 as range 14
        do {
          // </0 & WriteAlternative/4 (/5 # Any/9 (/10 # Flush/16 e.new10/17 )/11 t.new11/12 )/6 >/1
          context[17] = context[14];
          context[18] = context[15];
          if( ! refalrts::ident_term( identifiers[ident_Flush], context[16] ) )
            continue;
          // closed e.new10 as range 17
          do {
            // </0 & WriteAlternative/4 (/5 # Any/9 (/10 # Flush/16 e.0/19 )/11 # Finitive/12 )/6 >/1
            context[19] = context[17];
            context[20] = context[18];
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
              continue;
            // closed e.0 as range 19
            //DEBUG: e.0: 19

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/21"  (e.Accum) s.Any"/22 </24 & NextState-L*2/25 Tile{ HalfReuse: # Finitive/0 HalfReuse: >/4 HalfReuse: </5 HalfReuse: & Fetch/9 HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.0/19 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/6 HalfReuse: 'A'/1 }"ccum s.Any)"/26 & WriteAlternative-Aux$2\1/28 >/29 ';'/30 )/31 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[21]);
            refalrts::alloc_chars(vm, context[22], context[23], "  (e.Accum) s.Any", 17);
            refalrts::alloc_open_call(vm, context[24]);
            refalrts::alloc_name(vm, context[25], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::alloc_chars(vm, context[26], context[27], "ccum s.Any)", 11);
            refalrts::alloc_name(vm, context[28], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::alloc_close_call(vm, context[29]);
            refalrts::alloc_char(vm, context[30], ';');
            refalrts::alloc_close_bracket(vm, context[31]);
            refalrts::reinit_ident(context[0], identifiers[ident_Finitive]);
            refalrts::reinit_close_call(context[4]);
            refalrts::reinit_open_call(context[5]);
            refalrts::reinit_name(context[9], functions[efunc_Fetch]);
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_char(context[16], '(');
            refalrts::reinit_char(context[11], ' ');
            refalrts::reinit_char(context[12], 'e');
            refalrts::reinit_char(context[6], '.');
            refalrts::reinit_char(context[1], 'A');
            refalrts::link_brackets( context[21], context[31] );
            refalrts::push_stack( vm, context[29] );
            refalrts::push_stack( vm, context[5] );
            refalrts::push_stack( vm, context[4] );
            refalrts::push_stack( vm, context[24] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[26], context[31] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[21], context[25] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/5 # Any/9 (/10 # Flush/16 e.0/19 )/11 (/12 e./21 )/13 )/6 >/1
            context[19] = context[17];
            context[20] = context[18];
            context[21] = 0;
            context[22] = 0;
            if( ! refalrts::brackets_term( context[21], context[22], context[12] ) )
              continue;
            // closed e.0 as range 19
            // closed e. as range 21
            //DEBUG: e.0: 19
            //DEBUG: e.: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/5 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/16 }"Accum) s.Any"/23 </25 Tile{ HalfReuse: & NextState-L*2/11 AsIs: (/12 AsIs: e./21 AsIs: )/13 HalfReuse: >/6 HalfReuse: </1 } & Fetch/26" ("/27 Tile{ AsIs: e.0/19 }" e.Accum s.Any) <"/29 e./21/31" () e.Text>"/33 & WriteAlternative-Aux$2\1/35 >/36 ';'/37 )/38 Tile{ ]] }
            refalrts::alloc_chars(vm, context[23], context[24], "Accum) s.Any", 12);
            refalrts::alloc_open_call(vm, context[25]);
            refalrts::alloc_name(vm, context[26], functions[efunc_Fetch]);
            refalrts::alloc_chars(vm, context[27], context[28], " (", 2);
            refalrts::alloc_chars(vm, context[29], context[30], " e.Accum s.Any) <", 17);
            refalrts::copy_evar(vm, context[31], context[32], context[21], context[22]);
            refalrts::alloc_chars(vm, context[33], context[34], " () e.Text>", 11);
            refalrts::alloc_name(vm, context[35], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::alloc_close_call(vm, context[36]);
            refalrts::alloc_char(vm, context[37], ';');
            refalrts::alloc_close_bracket(vm, context[38]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_char(context[4], ' ');
            refalrts::reinit_char(context[5], ' ');
            refalrts::reinit_char(context[9], '(');
            refalrts::reinit_char(context[10], 'e');
            refalrts::reinit_char(context[16], '.');
            refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_close_call(context[6]);
            refalrts::reinit_open_call(context[1]);
            refalrts::link_brackets( context[0], context[38] );
            refalrts::push_stack( vm, context[36] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[6] );
            refalrts::push_stack( vm, context[25] );
            refalrts::link_brackets( context[12], context[13] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[29], context[38] );
            res = refalrts::splice_evar( res, context[19], context[20] );
            res = refalrts::splice_evar( res, context[26], context[28] );
            res = refalrts::splice_evar( res, context[11], context[1] );
            res = refalrts::splice_evar( res, context[23], context[25] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative/4 (/5 # Any/9 (/10 # Flush/16 e.0/19 )/11 t.1/12 )/6 >/1
          context[19] = context[17];
          context[20] = context[18];
          // closed e.0 as range 19
          //DEBUG: t.1: 12
          //DEBUG: e.0: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/5 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/16 }"Accum) s.Any"/21 </23 Tile{ HalfReuse: & NextState-L*2/11 AsIs: t.1/12 HalfReuse: >/6 HalfReuse: </1 } & Fetch/24" ("/25 Tile{ AsIs: e.0/19 }" e.Accum s.Any)"/27 </29 & NextState-R*2/30 t.1/12/31 >/33 & WriteAlternative-Aux$2\1/34 >/35 ';'/36 )/37 Tile{ ]] }
          refalrts::alloc_chars(vm, context[21], context[22], "Accum) s.Any", 12);
          refalrts::alloc_open_call(vm, context[23]);
          refalrts::alloc_name(vm, context[24], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[25], context[26], " (", 2);
          refalrts::alloc_chars(vm, context[27], context[28], " e.Accum s.Any)", 15);
          refalrts::alloc_open_call(vm, context[29]);
          refalrts::alloc_name(vm, context[30], functions[efunc_gen_NextStatem_R_D2]);
          refalrts::copy_evar(vm, context[31], context[32], context[12], context[13]);
          refalrts::alloc_close_call(vm, context[33]);
          refalrts::alloc_name(vm, context[34], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[35]);
          refalrts::alloc_char(vm, context[36], ';');
          refalrts::alloc_close_bracket(vm, context[37]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_char(context[4], ' ');
          refalrts::reinit_char(context[5], ' ');
          refalrts::reinit_char(context[9], '(');
          refalrts::reinit_char(context[10], 'e');
          refalrts::reinit_char(context[16], '.');
          refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[6]);
          refalrts::reinit_open_call(context[1]);
          refalrts::link_brackets( context[0], context[37] );
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[33] );
          refalrts::push_stack( vm, context[29] );
          refalrts::push_stack( vm, context[6] );
          refalrts::push_stack( vm, context[23] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[27], context[37] );
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[24], context[26] );
          res = refalrts::splice_evar( res, context[11], context[1] );
          res = refalrts::splice_evar( res, context[21], context[23] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative/4 (/5 # Any/9 (/10 # FlushError/16 e.new10/17 )/11 t.new11/12 )/6 >/1
        context[17] = context[14];
        context[18] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_FlushError], context[16] ) )
          continue;
        // closed e.new10 as range 17
        do {
          // </0 & WriteAlternative/4 (/5 # Any/9 (/10 # FlushError/16 e.0/19 )/11 # Finitive/12 )/6 >/1
          context[19] = context[17];
          context[20] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
            continue;
          // closed e.0 as range 19
          //DEBUG: e.0: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/21"  (e.Accum) s.Any"/22 </24 & NextState-L*2/25 # Finitive/26 >/27 </28 & Fetch/29" (TokenE"/30 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/5 HalfReuse: 'r'/9 HalfReuse: ' '/10 HalfReuse: '\''/16 AsIs: e.0/19 HalfReuse: '\''/11 HalfReuse: ')'/12 HalfReuse: & WriteAlternative-Aux$2\1/6 AsIs: >/1 } ';'/32 )/33 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[21]);
          refalrts::alloc_chars(vm, context[22], context[23], "  (e.Accum) s.Any", 17);
          refalrts::alloc_open_call(vm, context[24]);
          refalrts::alloc_name(vm, context[25], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::alloc_ident(vm, context[26], identifiers[ident_Finitive]);
          refalrts::alloc_close_call(vm, context[27]);
          refalrts::alloc_open_call(vm, context[28]);
          refalrts::alloc_name(vm, context[29], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[30], context[31], " (TokenE", 8);
          refalrts::alloc_char(vm, context[32], ';');
          refalrts::alloc_close_bracket(vm, context[33]);
          refalrts::reinit_char(context[0], 'r');
          refalrts::reinit_char(context[4], 'r');
          refalrts::reinit_char(context[5], 'o');
          refalrts::reinit_char(context[9], 'r');
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_char(context[16], '\'');
          refalrts::reinit_char(context[11], '\'');
          refalrts::reinit_char(context[12], ')');
          refalrts::reinit_name(context[6], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::link_brackets( context[21], context[33] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[24] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[21], context[31] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative/4 (/5 # Any/9 (/10 # FlushError/16 e.0/19 )/11 (/12 e./21 )/13 )/6 >/1
          context[19] = context[17];
          context[20] = context[18];
          context[21] = 0;
          context[22] = 0;
          if( ! refalrts::brackets_term( context[21], context[22], context[12] ) )
            continue;
          // closed e.0 as range 19
          // closed e. as range 21
          //DEBUG: e.0: 19
          //DEBUG: e.: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/5 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/16 }"Accum) s.Any"/23 </25 Tile{ HalfReuse: & NextState-L*2/11 AsIs: (/12 AsIs: e./21 AsIs: )/13 HalfReuse: >/6 HalfReuse: </1 } & Fetch/26" (TokenError \'"/27 Tile{ AsIs: e.0/19 }"\') <"/29 e./21/31" () e.Text>"/33 & WriteAlternative-Aux$2\1/35 >/36 ';'/37 )/38 Tile{ ]] }
          refalrts::alloc_chars(vm, context[23], context[24], "Accum) s.Any", 12);
          refalrts::alloc_open_call(vm, context[25]);
          refalrts::alloc_name(vm, context[26], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[27], context[28], " (TokenError \'", 14);
          refalrts::alloc_chars(vm, context[29], context[30], "\') <", 4);
          refalrts::copy_evar(vm, context[31], context[32], context[21], context[22]);
          refalrts::alloc_chars(vm, context[33], context[34], " () e.Text>", 11);
          refalrts::alloc_name(vm, context[35], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[36]);
          refalrts::alloc_char(vm, context[37], ';');
          refalrts::alloc_close_bracket(vm, context[38]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_char(context[4], ' ');
          refalrts::reinit_char(context[5], ' ');
          refalrts::reinit_char(context[9], '(');
          refalrts::reinit_char(context[10], 'e');
          refalrts::reinit_char(context[16], '.');
          refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[6]);
          refalrts::reinit_open_call(context[1]);
          refalrts::link_brackets( context[0], context[38] );
          refalrts::push_stack( vm, context[36] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[6] );
          refalrts::push_stack( vm, context[25] );
          refalrts::link_brackets( context[12], context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[29], context[38] );
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[26], context[28] );
          res = refalrts::splice_evar( res, context[11], context[1] );
          res = refalrts::splice_evar( res, context[23], context[25] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative/4 (/5 # Any/9 (/10 # FlushError/16 e.0/19 )/11 t.1/12 )/6 >/1
        context[19] = context[17];
        context[20] = context[18];
        // closed e.0 as range 19
        //DEBUG: t.1: 12
        //DEBUG: e.0: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/21"  (e.Accum) s.Any"/22 </24 & NextState-L*2/25 Tile{ AsIs: t.1/12 HalfReuse: >/6 HalfReuse: </1 } & Fetch/26" (TokenE"/27 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/5 HalfReuse: 'r'/9 HalfReuse: ' '/10 HalfReuse: '\''/16 AsIs: e.0/19 HalfReuse: '\''/11 } ')'/29 </30 & NextState-R*2/31 t.1/12/32 >/34 & WriteAlternative-Aux$2\1/35 >/36 ';'/37 )/38 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[21]);
        refalrts::alloc_chars(vm, context[22], context[23], "  (e.Accum) s.Any", 17);
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::alloc_name(vm, context[26], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[27], context[28], " (TokenE", 8);
        refalrts::alloc_char(vm, context[29], ')');
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_gen_NextStatem_R_D2]);
        refalrts::copy_evar(vm, context[32], context[33], context[12], context[13]);
        refalrts::alloc_close_call(vm, context[34]);
        refalrts::alloc_name(vm, context[35], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::alloc_char(vm, context[37], ';');
        refalrts::alloc_close_bracket(vm, context[38]);
        refalrts::reinit_close_call(context[6]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_char(context[0], 'r');
        refalrts::reinit_char(context[4], 'r');
        refalrts::reinit_char(context[5], 'o');
        refalrts::reinit_char(context[9], 'r');
        refalrts::reinit_char(context[10], ' ');
        refalrts::reinit_char(context[16], '\'');
        refalrts::reinit_char(context[11], '\'');
        refalrts::link_brackets( context[21], context[38] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[29], context[38] );
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[26], context[28] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[21], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative/4 (/5 # Any/9 t.0/10 # Finitive/12 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
          continue;
        //DEBUG: t.0: 10

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/14"  (e.Accum) s.Any"/15 </17 & NextState-L*2/18 # Finitive/19 >/20 </21 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/5 AsIs: # Any/9 AsIs: t.0/10 HalfReuse: >/12 HalfReuse: & WriteAlternative-Aux$2\1/6 AsIs: >/1 } ';'/22 )/23 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[14]);
        refalrts::alloc_chars(vm, context[15], context[16], "  (e.Accum) s.Any", 17);
        refalrts::alloc_open_call(vm, context[17]);
        refalrts::alloc_name(vm, context[18], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::alloc_ident(vm, context[19], identifiers[ident_Finitive]);
        refalrts::alloc_close_call(vm, context[20]);
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_char(vm, context[22], ';');
        refalrts::alloc_close_bracket(vm, context[23]);
        refalrts::reinit_name(context[0], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[5], functions[efunc_gen_Flush_D3]);
        refalrts::reinit_close_call(context[12]);
        refalrts::reinit_name(context[6], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::link_brackets( context[14], context[23] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[17] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[14], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative/4 (/5 # Any/9 t.0/10 (/12 e./14 )/13 )/6 >/1
        context[14] = 0;
        context[15] = 0;
        if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
          continue;
        // closed e. as range 14
        //DEBUG: t.0: 10
        //DEBUG: e.: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/16"  (e.Accum) s.Any"/17 </19 & NextState-L*2/20 Tile{ AsIs: (/12 AsIs: e./14 AsIs: )/13 HalfReuse: >/6 HalfReuse: </1 } Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/5 AsIs: # Any/9 AsIs: t.0/10 } >/21" <"/22 e./14/24" () e.Text>"/26 & WriteAlternative-Aux$2\1/28 >/29 ';'/30 )/31 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[16]);
        refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum) s.Any", 17);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_chars(vm, context[22], context[23], " <", 2);
        refalrts::copy_evar(vm, context[24], context[25], context[14], context[15]);
        refalrts::alloc_chars(vm, context[26], context[27], " () e.Text>", 11);
        refalrts::alloc_name(vm, context[28], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::alloc_char(vm, context[30], ';');
        refalrts::alloc_close_bracket(vm, context[31]);
        refalrts::reinit_close_call(context[6]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_name(context[0], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[5], functions[efunc_gen_Flush_D3]);
        refalrts::link_brackets( context[16], context[31] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[21], context[31] );
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[16], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative/4 (/5 # Any/9 t.0/10 t.1/12 )/6 >/1
      //DEBUG: t.0: 10
      //DEBUG: t.1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/14"  (e.Accum) s.Any"/15 </17 & NextState-L*2/18 Tile{ AsIs: t.1/12 HalfReuse: >/6 HalfReuse: </1 } Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/5 AsIs: # Any/9 AsIs: t.0/10 } >/19 </20 & NextState-R*2/21 t.1/12/22 >/24 & WriteAlternative-Aux$2\1/25 >/26 ';'/27 )/28 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[14]);
      refalrts::alloc_chars(vm, context[15], context[16], "  (e.Accum) s.Any", 17);
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[21], functions[efunc_gen_NextStatem_R_D2]);
      refalrts::copy_evar(vm, context[22], context[23], context[12], context[13]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_char(vm, context[27], ';');
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_open_call(context[1]);
      refalrts::reinit_name(context[0], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[5], functions[efunc_gen_Flush_D3]);
      refalrts::link_brackets( context[14], context[28] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[28] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[14], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative/4 (/5 s.new5/9 t.new6/10 # Finitive/12 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
        continue;
      do {
        // </0 & WriteAlternative/4 (/5 s.Head/9 # Unnamed/10 # Finitive/12 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[10] ) )
          continue;
        //DEBUG: s.Head: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/14"  (e.Accum) "/15 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/5 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/12 HalfReuse: ' '/6 HalfReuse: '='/1 } </17 & Fetch/18 & WriteAlternative-Aux$2\1/19 >/20 ';'/21 )/22 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[14]);
        refalrts::alloc_chars(vm, context[15], context[16], "  (e.Accum) ", 12);
        refalrts::alloc_open_call(vm, context[17]);
        refalrts::alloc_name(vm, context[18], functions[efunc_Fetch]);
        refalrts::alloc_name(vm, context[19], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[20]);
        refalrts::alloc_char(vm, context[21], ';');
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::reinit_char(context[0], '\'');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[5], functions[efunc_EscapeChar]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_char(context[12], '\'');
        refalrts::reinit_char(context[6], ' ');
        refalrts::reinit_char(context[1], '=');
        refalrts::link_brackets( context[14], context[22] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[17] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[17], context[22] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[14], context[16] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative/4 (/5 s.new7/9 (/10 s.new8/16 e.new9/14 )/11 # Finitive/12 )/6 >/1
        context[14] = 0;
        context[15] = 0;
        if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
          continue;
        if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
          continue;
        // closed e.new9 as range 14
        do {
          // </0 & WriteAlternative/4 (/5 s.new10/9 (/10 # Flush/16 e.new11/17 )/11 # Finitive/12 )/6 >/1
          context[17] = context[14];
          context[18] = context[15];
          if( ! refalrts::ident_term( identifiers[ident_Flush], context[16] ) )
            continue;
          // closed e.new11 as range 17
          do {
            // </0 & WriteAlternative/4 (/5 # Empty/9 (/10 # Flush/16 e.0/19 )/11 # Finitive/12 )/6 >/1
            context[19] = context[17];
            context[20] = context[18];
            if( ! refalrts::ident_term( identifiers[ident_Empty], context[9] ) )
              continue;
            // closed e.0 as range 19
            //DEBUG: e.0: 19

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/21"  (e.Accum) \'"/22 </24 & EscapeChar/25 # Empty/26 >/27 '\''/28 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </5 HalfReuse: & Fetch/9 HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.0/19 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/6 HalfReuse: 'A'/1 }"ccum)"/29 & WriteAlternative-Aux$2\1/31 >/32 ';'/33 )/34 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[21]);
            refalrts::alloc_chars(vm, context[22], context[23], "  (e.Accum) \'", 13);
            refalrts::alloc_open_call(vm, context[24]);
            refalrts::alloc_name(vm, context[25], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[26], identifiers[ident_Empty]);
            refalrts::alloc_close_call(vm, context[27]);
            refalrts::alloc_char(vm, context[28], '\'');
            refalrts::alloc_chars(vm, context[29], context[30], "ccum)", 5);
            refalrts::alloc_name(vm, context[31], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::alloc_close_call(vm, context[32]);
            refalrts::alloc_char(vm, context[33], ';');
            refalrts::alloc_close_bracket(vm, context[34]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '=');
            refalrts::reinit_open_call(context[5]);
            refalrts::reinit_name(context[9], functions[efunc_Fetch]);
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_char(context[16], '(');
            refalrts::reinit_char(context[11], ' ');
            refalrts::reinit_char(context[12], 'e');
            refalrts::reinit_char(context[6], '.');
            refalrts::reinit_char(context[1], 'A');
            refalrts::link_brackets( context[21], context[34] );
            refalrts::push_stack( vm, context[32] );
            refalrts::push_stack( vm, context[5] );
            refalrts::push_stack( vm, context[27] );
            refalrts::push_stack( vm, context[24] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[29], context[34] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[21], context[28] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/5 # Any/9 (/10 # Flush/16 e.0/19 )/11 # Finitive/12 )/6 >/1
            context[19] = context[17];
            context[20] = context[18];
            if( ! refalrts::ident_term( identifiers[ident_Any], context[9] ) )
              continue;
            // closed e.0 as range 19
            //DEBUG: e.0: 19

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/21"  (e.Accum) \'"/22 </24 & EscapeChar/25 # Any/26 >/27 '\''/28 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </5 HalfReuse: & Fetch/9 HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.0/19 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/6 HalfReuse: 'A'/1 }"ccum s.Any)"/29 & WriteAlternative-Aux$2\1/31 >/32 ';'/33 )/34 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[21]);
            refalrts::alloc_chars(vm, context[22], context[23], "  (e.Accum) \'", 13);
            refalrts::alloc_open_call(vm, context[24]);
            refalrts::alloc_name(vm, context[25], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[26], identifiers[ident_Any]);
            refalrts::alloc_close_call(vm, context[27]);
            refalrts::alloc_char(vm, context[28], '\'');
            refalrts::alloc_chars(vm, context[29], context[30], "ccum s.Any)", 11);
            refalrts::alloc_name(vm, context[31], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::alloc_close_call(vm, context[32]);
            refalrts::alloc_char(vm, context[33], ';');
            refalrts::alloc_close_bracket(vm, context[34]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '=');
            refalrts::reinit_open_call(context[5]);
            refalrts::reinit_name(context[9], functions[efunc_Fetch]);
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_char(context[16], '(');
            refalrts::reinit_char(context[11], ' ');
            refalrts::reinit_char(context[12], 'e');
            refalrts::reinit_char(context[6], '.');
            refalrts::reinit_char(context[1], 'A');
            refalrts::link_brackets( context[21], context[34] );
            refalrts::push_stack( vm, context[32] );
            refalrts::push_stack( vm, context[5] );
            refalrts::push_stack( vm, context[27] );
            refalrts::push_stack( vm, context[24] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[29], context[34] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[21], context[28] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative/4 (/5 s.Head/9 (/10 # Flush/16 e.0/19 )/11 # Finitive/12 )/6 >/1
          context[19] = context[17];
          context[20] = context[18];
          // closed e.0 as range 19
          //DEBUG: s.Head: 9
          //DEBUG: e.0: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/5 }"(e.Accum) \'"/21 </23 & EscapeChar/24 Tile{ AsIs: s.Head/9 } >/25"\' ="/26 </28 & Fetch/29 Tile{ HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.0/19 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/6 HalfReuse: 'A'/1 }"ccum \'"/30 </32 & EscapeChar/33 s.Head/9/34 >/35"\')"/36 & WriteAlternative-Aux$2\1/38 >/39 ';'/40 )/41 Tile{ ]] }
          refalrts::alloc_chars(vm, context[21], context[22], "(e.Accum) \'", 11);
          refalrts::alloc_open_call(vm, context[23]);
          refalrts::alloc_name(vm, context[24], functions[efunc_EscapeChar]);
          refalrts::alloc_close_call(vm, context[25]);
          refalrts::alloc_chars(vm, context[26], context[27], "\' =", 3);
          refalrts::alloc_open_call(vm, context[28]);
          refalrts::alloc_name(vm, context[29], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[30], context[31], "ccum \'", 6);
          refalrts::alloc_open_call(vm, context[32]);
          refalrts::alloc_name(vm, context[33], functions[efunc_EscapeChar]);
          refalrts::copy_stvar(vm, context[34], context[9]);
          refalrts::alloc_close_call(vm, context[35]);
          refalrts::alloc_chars(vm, context[36], context[37], "\')", 2);
          refalrts::alloc_name(vm, context[38], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[39]);
          refalrts::alloc_char(vm, context[40], ';');
          refalrts::alloc_close_bracket(vm, context[41]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_char(context[4], ' ');
          refalrts::reinit_char(context[5], ' ');
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_char(context[16], '(');
          refalrts::reinit_char(context[11], ' ');
          refalrts::reinit_char(context[12], 'e');
          refalrts::reinit_char(context[6], '.');
          refalrts::reinit_char(context[1], 'A');
          refalrts::link_brackets( context[0], context[41] );
          refalrts::push_stack( vm, context[39] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[23] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[30], context[41] );
          res = refalrts::splice_evar( res, context[10], context[1] );
          res = refalrts::splice_evar( res, context[25], context[29] );
          res = refalrts::splice_elem( res, context[9] );
          res = refalrts::splice_evar( res, context[21], context[24] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative/4 (/5 s.Head/9 (/10 # FlushError/16 e.0/17 )/11 # Finitive/12 )/6 >/1
        context[17] = context[14];
        context[18] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_FlushError], context[16] ) )
          continue;
        // closed e.0 as range 17
        //DEBUG: s.Head: 9
        //DEBUG: e.0: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/5 }"(e.Accum) \'"/19 </21 & EscapeChar/22 Tile{ AsIs: s.Head/9 } >/23"\' ="/24 </26 & Fetch/27" (TokenError"/28 Tile{ HalfReuse: ' '/10 HalfReuse: '\''/16 AsIs: e.0/17 HalfReuse: '\''/11 HalfReuse: ')'/12 HalfReuse: & WriteAlternative-Aux$2\1/6 AsIs: >/1 } ';'/30 )/31 Tile{ ]] }
        refalrts::alloc_chars(vm, context[19], context[20], "(e.Accum) \'", 11);
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_name(vm, context[22], functions[efunc_EscapeChar]);
        refalrts::alloc_close_call(vm, context[23]);
        refalrts::alloc_chars(vm, context[24], context[25], "\' =", 3);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[28], context[29], " (TokenError", 12);
        refalrts::alloc_char(vm, context[30], ';');
        refalrts::alloc_close_bracket(vm, context[31]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_char(context[4], ' ');
        refalrts::reinit_char(context[5], ' ');
        refalrts::reinit_char(context[10], ' ');
        refalrts::reinit_char(context[16], '\'');
        refalrts::reinit_char(context[11], '\'');
        refalrts::reinit_char(context[12], ')');
        refalrts::reinit_name(context[6], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::link_brackets( context[0], context[31] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[10], context[1] );
        res = refalrts::splice_evar( res, context[23], context[29] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[19], context[22] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative/4 (/5 s.Head/9 t.0/10 # Finitive/12 )/6 >/1
      //DEBUG: t.0: 10
      //DEBUG: s.Head: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/14"  (e.Accum) \'"/15 </17 & EscapeChar/18 s.Head/9/19 >/20"\' ="/21 </23 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/5 AsIs: s.Head/9 AsIs: t.0/10 HalfReuse: >/12 HalfReuse: & WriteAlternative-Aux$2\1/6 AsIs: >/1 } ';'/24 )/25 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[14]);
      refalrts::alloc_chars(vm, context[15], context[16], "  (e.Accum) \'", 13);
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_EscapeChar]);
      refalrts::copy_stvar(vm, context[19], context[9]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_chars(vm, context[21], context[22], "\' =", 3);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_char(vm, context[24], ';');
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::reinit_name(context[0], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[5], functions[efunc_gen_Flush_D3]);
      refalrts::reinit_close_call(context[12]);
      refalrts::reinit_name(context[6], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::link_brackets( context[14], context[25] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[14], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative/4 (/5 s.new5/9 t.new6/10 (/12 e.new7/14 )/13 )/6 >/1
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
        continue;
      // closed e.new7 as range 14
      do {
        // </0 & WriteAlternative/4 (/5 s.Head/9 # Unnamed/10 (/12 e./16 )/13 )/6 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[10] ) )
          continue;
        // closed e. as range 16
        //DEBUG: s.Head: 9
        //DEBUG: e.: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/18"  (e.Accum) "/19 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/5 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/12 }" e.Text ="/21 </23 & Fetch/24" <"/25 Tile{ AsIs: e./16 }" () e.Text>"/27 & WriteAlternative-Aux$2\1/29 Tile{ HalfReuse: >/13 HalfReuse: ';'/6 HalfReuse: )/1 ]] }
        refalrts::alloc_open_bracket(vm, context[18]);
        refalrts::alloc_chars(vm, context[19], context[20], "  (e.Accum) ", 12);
        refalrts::alloc_chars(vm, context[21], context[22], " e.Text =", 9);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[25], context[26], " <", 2);
        refalrts::alloc_chars(vm, context[27], context[28], " () e.Text>", 11);
        refalrts::alloc_name(vm, context[29], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::reinit_char(context[0], '\'');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[5], functions[efunc_EscapeChar]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_char(context[12], '\'');
        refalrts::reinit_close_call(context[13]);
        refalrts::reinit_char(context[6], ';');
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[18], context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[13];
        res = refalrts::splice_evar( res, context[27], context[29] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[21], context[26] );
        res = refalrts::splice_evar( res, context[0], context[12] );
        res = refalrts::splice_evar( res, context[18], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative/4 (/5 s.new8/9 (/10 s.new9/20 e.new10/18 )/11 (/12 e.new11/16 )/13 )/6 >/1
        context[16] = context[14];
        context[17] = context[15];
        context[18] = 0;
        context[19] = 0;
        if( ! refalrts::brackets_term( context[18], context[19], context[10] ) )
          continue;
        // closed e.new11 as range 16
        if( ! refalrts::svar_left( context[20], context[18], context[19] ) )
          continue;
        // closed e.new10 as range 18
        do {
          // </0 & WriteAlternative/4 (/5 s.new12/9 (/10 # Flush/20 e.new13/21 )/11 (/12 e.new14/23 )/13 )/6 >/1
          context[21] = context[18];
          context[22] = context[19];
          context[23] = context[16];
          context[24] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_Flush], context[20] ) )
            continue;
          // closed e.new13 as range 21
          // closed e.new14 as range 23
          do {
            // </0 & WriteAlternative/4 (/5 # Empty/9 (/10 # Flush/20 e.1/25 )/11 (/12 e./27 )/13 )/6 >/1
            context[25] = context[21];
            context[26] = context[22];
            context[27] = context[23];
            context[28] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_Empty], context[9] ) )
              continue;
            // closed e.1 as range 25
            // closed e. as range 27
            //DEBUG: e.1: 25
            //DEBUG: e.: 27

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/29"  (e.Accum) \'"/30 </32 & EscapeChar/33 # Empty/34 >/35"\' e.Text"/36 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </5 HalfReuse: & Fetch/9 HalfReuse: ' '/10 HalfReuse: '('/20 AsIs: e.1/25 HalfReuse: ' '/11 HalfReuse: 'e'/12 }".Accum) <"/38 Tile{ AsIs: e./27 }" () e.Text>"/40 & WriteAlternative-Aux$2\1/42 Tile{ HalfReuse: >/13 HalfReuse: ';'/6 HalfReuse: )/1 ]] }
            refalrts::alloc_open_bracket(vm, context[29]);
            refalrts::alloc_chars(vm, context[30], context[31], "  (e.Accum) \'", 13);
            refalrts::alloc_open_call(vm, context[32]);
            refalrts::alloc_name(vm, context[33], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[34], identifiers[ident_Empty]);
            refalrts::alloc_close_call(vm, context[35]);
            refalrts::alloc_chars(vm, context[36], context[37], "\' e.Text", 8);
            refalrts::alloc_chars(vm, context[38], context[39], ".Accum) <", 9);
            refalrts::alloc_chars(vm, context[40], context[41], " () e.Text>", 11);
            refalrts::alloc_name(vm, context[42], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '=');
            refalrts::reinit_open_call(context[5]);
            refalrts::reinit_name(context[9], functions[efunc_Fetch]);
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_char(context[20], '(');
            refalrts::reinit_char(context[11], ' ');
            refalrts::reinit_char(context[12], 'e');
            refalrts::reinit_close_call(context[13]);
            refalrts::reinit_char(context[6], ';');
            refalrts::reinit_close_bracket(context[1]);
            refalrts::link_brackets( context[29], context[1] );
            refalrts::push_stack( vm, context[13] );
            refalrts::push_stack( vm, context[5] );
            refalrts::push_stack( vm, context[35] );
            refalrts::push_stack( vm, context[32] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[13];
            res = refalrts::splice_evar( res, context[40], context[42] );
            res = refalrts::splice_evar( res, context[27], context[28] );
            res = refalrts::splice_evar( res, context[38], context[39] );
            res = refalrts::splice_evar( res, context[0], context[12] );
            res = refalrts::splice_evar( res, context[29], context[37] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/5 # Any/9 (/10 # Flush/20 e.1/25 )/11 (/12 e./27 )/13 )/6 >/1
            context[25] = context[21];
            context[26] = context[22];
            context[27] = context[23];
            context[28] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_Any], context[9] ) )
              continue;
            // closed e.1 as range 25
            // closed e. as range 27
            //DEBUG: e.1: 25
            //DEBUG: e.: 27

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/29"  (e.Accum) \'"/30 </32 & EscapeChar/33 # Any/34 >/35"\' e.Text"/36 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </5 HalfReuse: & Fetch/9 HalfReuse: ' '/10 HalfReuse: '('/20 AsIs: e.1/25 HalfReuse: ' '/11 HalfReuse: 'e'/12 }".Accum s.Any) <"/38 Tile{ AsIs: e./27 }" () e.Text>"/40 & WriteAlternative-Aux$2\1/42 Tile{ HalfReuse: >/13 HalfReuse: ';'/6 HalfReuse: )/1 ]] }
            refalrts::alloc_open_bracket(vm, context[29]);
            refalrts::alloc_chars(vm, context[30], context[31], "  (e.Accum) \'", 13);
            refalrts::alloc_open_call(vm, context[32]);
            refalrts::alloc_name(vm, context[33], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[34], identifiers[ident_Any]);
            refalrts::alloc_close_call(vm, context[35]);
            refalrts::alloc_chars(vm, context[36], context[37], "\' e.Text", 8);
            refalrts::alloc_chars(vm, context[38], context[39], ".Accum s.Any) <", 15);
            refalrts::alloc_chars(vm, context[40], context[41], " () e.Text>", 11);
            refalrts::alloc_name(vm, context[42], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '=');
            refalrts::reinit_open_call(context[5]);
            refalrts::reinit_name(context[9], functions[efunc_Fetch]);
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_char(context[20], '(');
            refalrts::reinit_char(context[11], ' ');
            refalrts::reinit_char(context[12], 'e');
            refalrts::reinit_close_call(context[13]);
            refalrts::reinit_char(context[6], ';');
            refalrts::reinit_close_bracket(context[1]);
            refalrts::link_brackets( context[29], context[1] );
            refalrts::push_stack( vm, context[13] );
            refalrts::push_stack( vm, context[5] );
            refalrts::push_stack( vm, context[35] );
            refalrts::push_stack( vm, context[32] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[13];
            res = refalrts::splice_evar( res, context[40], context[42] );
            res = refalrts::splice_evar( res, context[27], context[28] );
            res = refalrts::splice_evar( res, context[38], context[39] );
            res = refalrts::splice_evar( res, context[0], context[12] );
            res = refalrts::splice_evar( res, context[29], context[37] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative/4 (/5 s.Head/9 (/10 # Flush/20 e.1/25 )/11 (/12 e./27 )/13 )/6 >/1
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          // closed e.1 as range 25
          // closed e. as range 27
          //DEBUG: s.Head: 9
          //DEBUG: e.1: 25
          //DEBUG: e.: 27

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/29"  (e.Accum) "/30 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/5 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/20 }" e.Text ="/32 </34 & Fetch/35" ("/36 Tile{ AsIs: e.1/25 }" e.Accum \'"/38 </40 & EscapeChar/41 s.Head/9/42 >/43"\')"/44 Tile{ HalfReuse: ' '/11 HalfReuse: '<'/12 AsIs: e./27 HalfReuse: ' '/13 HalfReuse: '('/6 HalfReuse: ')'/1 }" e.Text>"/46 & WriteAlternative-Aux$2\1/48 >/49 ';'/50 )/51 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[29]);
          refalrts::alloc_chars(vm, context[30], context[31], "  (e.Accum) ", 12);
          refalrts::alloc_chars(vm, context[32], context[33], " e.Text =", 9);
          refalrts::alloc_open_call(vm, context[34]);
          refalrts::alloc_name(vm, context[35], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[36], context[37], " (", 2);
          refalrts::alloc_chars(vm, context[38], context[39], " e.Accum \'", 10);
          refalrts::alloc_open_call(vm, context[40]);
          refalrts::alloc_name(vm, context[41], functions[efunc_EscapeChar]);
          refalrts::copy_stvar(vm, context[42], context[9]);
          refalrts::alloc_close_call(vm, context[43]);
          refalrts::alloc_chars(vm, context[44], context[45], "\')", 2);
          refalrts::alloc_chars(vm, context[46], context[47], " e.Text>", 8);
          refalrts::alloc_name(vm, context[48], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[49]);
          refalrts::alloc_char(vm, context[50], ';');
          refalrts::alloc_close_bracket(vm, context[51]);
          refalrts::reinit_char(context[0], '\'');
          refalrts::reinit_open_call(context[4]);
          refalrts::reinit_name(context[5], functions[efunc_EscapeChar]);
          refalrts::reinit_close_call(context[10]);
          refalrts::reinit_char(context[20], '\'');
          refalrts::reinit_char(context[11], ' ');
          refalrts::reinit_char(context[12], '<');
          refalrts::reinit_char(context[13], ' ');
          refalrts::reinit_char(context[6], '(');
          refalrts::reinit_char(context[1], ')');
          refalrts::link_brackets( context[29], context[51] );
          refalrts::push_stack( vm, context[49] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[43] );
          refalrts::push_stack( vm, context[40] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[4] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[46], context[51] );
          res = refalrts::splice_evar( res, context[11], context[1] );
          res = refalrts::splice_evar( res, context[38], context[45] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[32], context[37] );
          res = refalrts::splice_evar( res, context[0], context[20] );
          res = refalrts::splice_evar( res, context[29], context[31] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative/4 (/5 s.Head/9 (/10 # FlushError/20 e.1/21 )/11 (/12 e./23 )/13 )/6 >/1
        context[21] = context[18];
        context[22] = context[19];
        context[23] = context[16];
        context[24] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_FlushError], context[20] ) )
          continue;
        // closed e.1 as range 21
        // closed e. as range 23
        //DEBUG: s.Head: 9
        //DEBUG: e.1: 21
        //DEBUG: e.: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/25"  (e.Accum) "/26 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/5 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/20 }" e.Text ="/28 </30 & Fetch/31" (TokenError \'"/32 Tile{ AsIs: e.1/21 }"\')"/34 Tile{ HalfReuse: ' '/11 HalfReuse: '<'/12 AsIs: e./23 HalfReuse: ' '/13 HalfReuse: '('/6 HalfReuse: ')'/1 }" e.Text>"/36 & WriteAlternative-Aux$2\1/38 >/39 ';'/40 )/41 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[25]);
        refalrts::alloc_chars(vm, context[26], context[27], "  (e.Accum) ", 12);
        refalrts::alloc_chars(vm, context[28], context[29], " e.Text =", 9);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[32], context[33], " (TokenError \'", 14);
        refalrts::alloc_chars(vm, context[34], context[35], "\')", 2);
        refalrts::alloc_chars(vm, context[36], context[37], " e.Text>", 8);
        refalrts::alloc_name(vm, context[38], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[39]);
        refalrts::alloc_char(vm, context[40], ';');
        refalrts::alloc_close_bracket(vm, context[41]);
        refalrts::reinit_char(context[0], '\'');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[5], functions[efunc_EscapeChar]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_char(context[20], '\'');
        refalrts::reinit_char(context[11], ' ');
        refalrts::reinit_char(context[12], '<');
        refalrts::reinit_char(context[13], ' ');
        refalrts::reinit_char(context[6], '(');
        refalrts::reinit_char(context[1], ')');
        refalrts::link_brackets( context[25], context[41] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[36], context[41] );
        res = refalrts::splice_evar( res, context[11], context[1] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[28], context[33] );
        res = refalrts::splice_evar( res, context[0], context[20] );
        res = refalrts::splice_evar( res, context[25], context[27] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative/4 (/5 s.Head/9 t.0/10 (/12 e./16 )/13 )/6 >/1
      context[16] = context[14];
      context[17] = context[15];
      // closed e. as range 16
      //DEBUG: t.0: 10
      //DEBUG: s.Head: 9
      //DEBUG: e.: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/18"  (e.Accum) \'"/19 </21 & EscapeChar/22 s.Head/9/23 >/24"\' e.Text ="/25 </27 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/5 AsIs: s.Head/9 AsIs: t.0/10 HalfReuse: >/12 }" <"/28 Tile{ AsIs: e./16 }" () e.Text>"/30 & WriteAlternative-Aux$2\1/32 Tile{ HalfReuse: >/13 HalfReuse: ';'/6 HalfReuse: )/1 ]] }
      refalrts::alloc_open_bracket(vm, context[18]);
      refalrts::alloc_chars(vm, context[19], context[20], "  (e.Accum) \'", 13);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_EscapeChar]);
      refalrts::copy_stvar(vm, context[23], context[9]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_chars(vm, context[25], context[26], "\' e.Text =", 10);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_chars(vm, context[28], context[29], " <", 2);
      refalrts::alloc_chars(vm, context[30], context[31], " () e.Text>", 11);
      refalrts::alloc_name(vm, context[32], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::reinit_name(context[0], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[5], functions[efunc_gen_Flush_D3]);
      refalrts::reinit_close_call(context[12]);
      refalrts::reinit_close_call(context[13]);
      refalrts::reinit_char(context[6], ';');
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[18], context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_evar( res, context[30], context[32] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[0], context[12] );
      res = refalrts::splice_evar( res, context[18], context[27] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative/4 (/5 s.new5/9 # Unnamed/10 t.new6/12 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[10] ) )
        continue;
      do {
        // </0 & WriteAlternative/4 (/5 s.Head/9 # Unnamed/10 # Finitive/12 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
          continue;
        //DEBUG: s.Head: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/14"  (e.Accum) "/15 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/5 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/12 HalfReuse: </6 HalfReuse: & NextState-L*2/1 } # Finitive/17 >/18 </19 & Fetch/20 & WriteAlternative-Aux$2\1/21 >/22 ';'/23 )/24 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[14]);
        refalrts::alloc_chars(vm, context[15], context[16], "  (e.Accum) ", 12);
        refalrts::alloc_ident(vm, context[17], identifiers[ident_Finitive]);
        refalrts::alloc_close_call(vm, context[18]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_Fetch]);
        refalrts::alloc_name(vm, context[21], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_char(vm, context[23], ';');
        refalrts::alloc_close_bracket(vm, context[24]);
        refalrts::reinit_char(context[0], '\'');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[5], functions[efunc_EscapeChar]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_char(context[12], '\'');
        refalrts::reinit_open_call(context[6]);
        refalrts::reinit_name(context[1], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::link_brackets( context[14], context[24] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[17], context[24] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[14], context[16] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative/4 (/5 s.Head/9 # Unnamed/10 (/12 e./14 )/13 )/6 >/1
        context[14] = 0;
        context[15] = 0;
        if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
          continue;
        // closed e. as range 14
        //DEBUG: s.Head: 9
        //DEBUG: e.: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/5 }"(e.Accum) \'"/16 </18 & EscapeChar/19 Tile{ AsIs: s.Head/9 } >/20 '\''/21 </22 Tile{ HalfReuse: & NextState-L*2/10 AsIs: (/12 AsIs: e./14 AsIs: )/13 HalfReuse: >/6 HalfReuse: </1 } & Fetch/23" <"/24 e./14/26" () e.Text>"/28 & WriteAlternative-Aux$2\1/30 >/31 ';'/32 )/33 Tile{ ]] }
        refalrts::alloc_chars(vm, context[16], context[17], "(e.Accum) \'", 11);
        refalrts::alloc_open_call(vm, context[18]);
        refalrts::alloc_name(vm, context[19], functions[efunc_EscapeChar]);
        refalrts::alloc_close_call(vm, context[20]);
        refalrts::alloc_char(vm, context[21], '\'');
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::alloc_name(vm, context[23], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[24], context[25], " <", 2);
        refalrts::copy_evar(vm, context[26], context[27], context[14], context[15]);
        refalrts::alloc_chars(vm, context[28], context[29], " () e.Text>", 11);
        refalrts::alloc_name(vm, context[30], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[31]);
        refalrts::alloc_char(vm, context[32], ';');
        refalrts::alloc_close_bracket(vm, context[33]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_char(context[4], ' ');
        refalrts::reinit_char(context[5], ' ');
        refalrts::reinit_name(context[10], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::reinit_close_call(context[6]);
        refalrts::reinit_open_call(context[1]);
        refalrts::link_brackets( context[0], context[33] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[22] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[18] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[23], context[33] );
        res = refalrts::splice_evar( res, context[10], context[1] );
        res = refalrts::splice_evar( res, context[20], context[22] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[16], context[19] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative/4 (/5 s.Head/9 # Unnamed/10 t.1/12 )/6 >/1
      //DEBUG: t.1: 12
      //DEBUG: s.Head: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/14"  (e.Accum) "/15 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/5 AsIs: s.Head/9 HalfReuse: >/10 } '\''/17 </18 & NextState-L*2/19 Tile{ AsIs: t.1/12 HalfReuse: >/6 HalfReuse: </1 } & Fetch/20 </21 & NextState-R*2/22 t.1/12/23 >/25 & WriteAlternative-Aux$2\1/26 >/27 ';'/28 )/29 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[14]);
      refalrts::alloc_chars(vm, context[15], context[16], "  (e.Accum) ", 12);
      refalrts::alloc_char(vm, context[17], '\'');
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::alloc_name(vm, context[20], functions[efunc_Fetch]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_gen_NextStatem_R_D2]);
      refalrts::copy_evar(vm, context[23], context[24], context[12], context[13]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::alloc_char(vm, context[28], ';');
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::reinit_char(context[0], '\'');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[5], functions[efunc_EscapeChar]);
      refalrts::reinit_close_call(context[10]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_open_call(context[1]);
      refalrts::link_brackets( context[14], context[29] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[29] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[17], context[19] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[14], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative/4 (/5 s.new5/9 (/10 s.new6/16 e.new7/14 )/11 t.new8/12 )/6 >/1
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
        continue;
      // closed e.new7 as range 14
      do {
        // </0 & WriteAlternative/4 (/5 s.new9/9 (/10 # Flush/16 e.new10/17 )/11 t.new11/12 )/6 >/1
        context[17] = context[14];
        context[18] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_Flush], context[16] ) )
          continue;
        // closed e.new10 as range 17
        do {
          // </0 & WriteAlternative/4 (/5 # Empty/9 (/10 # Flush/16 e.new12/19 )/11 t.new13/12 )/6 >/1
          context[19] = context[17];
          context[20] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_Empty], context[9] ) )
            continue;
          // closed e.new12 as range 19
          do {
            // </0 & WriteAlternative/4 (/5 # Empty/9 (/10 # Flush/16 e.0/21 )/11 # Finitive/12 )/6 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
              continue;
            // closed e.0 as range 21
            //DEBUG: e.0: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/23"  (e.Accum) \'"/24 </26 & EscapeChar/27 # Empty/28 >/29 '\''/30 </31 & NextState-L*2/32 Tile{ HalfReuse: # Finitive/0 HalfReuse: >/4 HalfReuse: </5 HalfReuse: & Fetch/9 HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.0/21 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/6 HalfReuse: 'A'/1 }"ccum)"/33 & WriteAlternative-Aux$2\1/35 >/36 ';'/37 )/38 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[23]);
            refalrts::alloc_chars(vm, context[24], context[25], "  (e.Accum) \'", 13);
            refalrts::alloc_open_call(vm, context[26]);
            refalrts::alloc_name(vm, context[27], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[28], identifiers[ident_Empty]);
            refalrts::alloc_close_call(vm, context[29]);
            refalrts::alloc_char(vm, context[30], '\'');
            refalrts::alloc_open_call(vm, context[31]);
            refalrts::alloc_name(vm, context[32], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::alloc_chars(vm, context[33], context[34], "ccum)", 5);
            refalrts::alloc_name(vm, context[35], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::alloc_close_call(vm, context[36]);
            refalrts::alloc_char(vm, context[37], ';');
            refalrts::alloc_close_bracket(vm, context[38]);
            refalrts::reinit_ident(context[0], identifiers[ident_Finitive]);
            refalrts::reinit_close_call(context[4]);
            refalrts::reinit_open_call(context[5]);
            refalrts::reinit_name(context[9], functions[efunc_Fetch]);
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_char(context[16], '(');
            refalrts::reinit_char(context[11], ' ');
            refalrts::reinit_char(context[12], 'e');
            refalrts::reinit_char(context[6], '.');
            refalrts::reinit_char(context[1], 'A');
            refalrts::link_brackets( context[23], context[38] );
            refalrts::push_stack( vm, context[36] );
            refalrts::push_stack( vm, context[5] );
            refalrts::push_stack( vm, context[4] );
            refalrts::push_stack( vm, context[31] );
            refalrts::push_stack( vm, context[29] );
            refalrts::push_stack( vm, context[26] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[33], context[38] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[23], context[32] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/5 # Empty/9 (/10 # Flush/16 e.0/21 )/11 (/12 e./23 )/13 )/6 >/1
            context[21] = context[19];
            context[22] = context[20];
            context[23] = 0;
            context[24] = 0;
            if( ! refalrts::brackets_term( context[23], context[24], context[12] ) )
              continue;
            // closed e.0 as range 21
            // closed e. as range 23
            //DEBUG: e.0: 21
            //DEBUG: e.: 23

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/5 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/16 }"Accum) \'"/25 </27 & EscapeChar/28 # Empty/29 >/30 '\''/31 </32 Tile{ HalfReuse: & NextState-L*2/11 AsIs: (/12 AsIs: e./23 AsIs: )/13 HalfReuse: >/6 HalfReuse: </1 } & Fetch/33" ("/34 Tile{ AsIs: e.0/21 }" e.Accum) <"/36 e./23/38" () e.Text>"/40 & WriteAlternative-Aux$2\1/42 >/43 ';'/44 )/45 Tile{ ]] }
            refalrts::alloc_chars(vm, context[25], context[26], "Accum) \'", 8);
            refalrts::alloc_open_call(vm, context[27]);
            refalrts::alloc_name(vm, context[28], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[29], identifiers[ident_Empty]);
            refalrts::alloc_close_call(vm, context[30]);
            refalrts::alloc_char(vm, context[31], '\'');
            refalrts::alloc_open_call(vm, context[32]);
            refalrts::alloc_name(vm, context[33], functions[efunc_Fetch]);
            refalrts::alloc_chars(vm, context[34], context[35], " (", 2);
            refalrts::alloc_chars(vm, context[36], context[37], " e.Accum) <", 11);
            refalrts::copy_evar(vm, context[38], context[39], context[23], context[24]);
            refalrts::alloc_chars(vm, context[40], context[41], " () e.Text>", 11);
            refalrts::alloc_name(vm, context[42], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::alloc_close_call(vm, context[43]);
            refalrts::alloc_char(vm, context[44], ';');
            refalrts::alloc_close_bracket(vm, context[45]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_char(context[4], ' ');
            refalrts::reinit_char(context[5], ' ');
            refalrts::reinit_char(context[9], '(');
            refalrts::reinit_char(context[10], 'e');
            refalrts::reinit_char(context[16], '.');
            refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_close_call(context[6]);
            refalrts::reinit_open_call(context[1]);
            refalrts::link_brackets( context[0], context[45] );
            refalrts::push_stack( vm, context[43] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[6] );
            refalrts::push_stack( vm, context[32] );
            refalrts::link_brackets( context[12], context[13] );
            refalrts::push_stack( vm, context[30] );
            refalrts::push_stack( vm, context[27] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[36], context[45] );
            res = refalrts::splice_evar( res, context[21], context[22] );
            res = refalrts::splice_evar( res, context[33], context[35] );
            res = refalrts::splice_evar( res, context[11], context[1] );
            res = refalrts::splice_evar( res, context[25], context[32] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative/4 (/5 # Empty/9 (/10 # Flush/16 e.0/21 )/11 t.1/12 )/6 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.0 as range 21
          //DEBUG: t.1: 12
          //DEBUG: e.0: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/5 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/16 }"Accum) \'"/23 </25 & EscapeChar/26 # Empty/27 >/28 '\''/29 </30 Tile{ HalfReuse: & NextState-L*2/11 AsIs: t.1/12 HalfReuse: >/6 HalfReuse: </1 } & Fetch/31" ("/32 Tile{ AsIs: e.0/21 }" e.Accum)"/34 </36 & NextState-R*2/37 t.1/12/38 >/40 & WriteAlternative-Aux$2\1/41 >/42 ';'/43 )/44 Tile{ ]] }
          refalrts::alloc_chars(vm, context[23], context[24], "Accum) \'", 8);
          refalrts::alloc_open_call(vm, context[25]);
          refalrts::alloc_name(vm, context[26], functions[efunc_EscapeChar]);
          refalrts::alloc_ident(vm, context[27], identifiers[ident_Empty]);
          refalrts::alloc_close_call(vm, context[28]);
          refalrts::alloc_char(vm, context[29], '\'');
          refalrts::alloc_open_call(vm, context[30]);
          refalrts::alloc_name(vm, context[31], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[32], context[33], " (", 2);
          refalrts::alloc_chars(vm, context[34], context[35], " e.Accum)", 9);
          refalrts::alloc_open_call(vm, context[36]);
          refalrts::alloc_name(vm, context[37], functions[efunc_gen_NextStatem_R_D2]);
          refalrts::copy_evar(vm, context[38], context[39], context[12], context[13]);
          refalrts::alloc_close_call(vm, context[40]);
          refalrts::alloc_name(vm, context[41], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[42]);
          refalrts::alloc_char(vm, context[43], ';');
          refalrts::alloc_close_bracket(vm, context[44]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_char(context[4], ' ');
          refalrts::reinit_char(context[5], ' ');
          refalrts::reinit_char(context[9], '(');
          refalrts::reinit_char(context[10], 'e');
          refalrts::reinit_char(context[16], '.');
          refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[6]);
          refalrts::reinit_open_call(context[1]);
          refalrts::link_brackets( context[0], context[44] );
          refalrts::push_stack( vm, context[42] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[40] );
          refalrts::push_stack( vm, context[36] );
          refalrts::push_stack( vm, context[6] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[25] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[34], context[44] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[31], context[33] );
          res = refalrts::splice_evar( res, context[11], context[1] );
          res = refalrts::splice_evar( res, context[23], context[30] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative/4 (/5 # Any/9 (/10 # Flush/16 e.new12/19 )/11 t.new13/12 )/6 >/1
          context[19] = context[17];
          context[20] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_Any], context[9] ) )
            continue;
          // closed e.new12 as range 19
          do {
            // </0 & WriteAlternative/4 (/5 # Any/9 (/10 # Flush/16 e.0/21 )/11 # Finitive/12 )/6 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
              continue;
            // closed e.0 as range 21
            //DEBUG: e.0: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/23"  (e.Accum) \'"/24 </26 & EscapeChar/27 # Any/28 >/29 '\''/30 </31 & NextState-L*2/32 Tile{ HalfReuse: # Finitive/0 HalfReuse: >/4 HalfReuse: </5 HalfReuse: & Fetch/9 HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.0/21 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/6 HalfReuse: 'A'/1 }"ccum s.Any)"/33 & WriteAlternative-Aux$2\1/35 >/36 ';'/37 )/38 Tile{ ]] }
            refalrts::alloc_open_bracket(vm, context[23]);
            refalrts::alloc_chars(vm, context[24], context[25], "  (e.Accum) \'", 13);
            refalrts::alloc_open_call(vm, context[26]);
            refalrts::alloc_name(vm, context[27], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[28], identifiers[ident_Any]);
            refalrts::alloc_close_call(vm, context[29]);
            refalrts::alloc_char(vm, context[30], '\'');
            refalrts::alloc_open_call(vm, context[31]);
            refalrts::alloc_name(vm, context[32], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::alloc_chars(vm, context[33], context[34], "ccum s.Any)", 11);
            refalrts::alloc_name(vm, context[35], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::alloc_close_call(vm, context[36]);
            refalrts::alloc_char(vm, context[37], ';');
            refalrts::alloc_close_bracket(vm, context[38]);
            refalrts::reinit_ident(context[0], identifiers[ident_Finitive]);
            refalrts::reinit_close_call(context[4]);
            refalrts::reinit_open_call(context[5]);
            refalrts::reinit_name(context[9], functions[efunc_Fetch]);
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_char(context[16], '(');
            refalrts::reinit_char(context[11], ' ');
            refalrts::reinit_char(context[12], 'e');
            refalrts::reinit_char(context[6], '.');
            refalrts::reinit_char(context[1], 'A');
            refalrts::link_brackets( context[23], context[38] );
            refalrts::push_stack( vm, context[36] );
            refalrts::push_stack( vm, context[5] );
            refalrts::push_stack( vm, context[4] );
            refalrts::push_stack( vm, context[31] );
            refalrts::push_stack( vm, context[29] );
            refalrts::push_stack( vm, context[26] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[33], context[38] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[23], context[32] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative/4 (/5 # Any/9 (/10 # Flush/16 e.0/21 )/11 (/12 e./23 )/13 )/6 >/1
            context[21] = context[19];
            context[22] = context[20];
            context[23] = 0;
            context[24] = 0;
            if( ! refalrts::brackets_term( context[23], context[24], context[12] ) )
              continue;
            // closed e.0 as range 21
            // closed e. as range 23
            //DEBUG: e.0: 21
            //DEBUG: e.: 23

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/5 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/16 }"Accum) \'"/25 </27 & EscapeChar/28 # Any/29 >/30 '\''/31 </32 Tile{ HalfReuse: & NextState-L*2/11 AsIs: (/12 AsIs: e./23 AsIs: )/13 HalfReuse: >/6 HalfReuse: </1 } & Fetch/33" ("/34 Tile{ AsIs: e.0/21 }" e.Accum s.Any) <"/36 e./23/38" () e.Text>"/40 & WriteAlternative-Aux$2\1/42 >/43 ';'/44 )/45 Tile{ ]] }
            refalrts::alloc_chars(vm, context[25], context[26], "Accum) \'", 8);
            refalrts::alloc_open_call(vm, context[27]);
            refalrts::alloc_name(vm, context[28], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[29], identifiers[ident_Any]);
            refalrts::alloc_close_call(vm, context[30]);
            refalrts::alloc_char(vm, context[31], '\'');
            refalrts::alloc_open_call(vm, context[32]);
            refalrts::alloc_name(vm, context[33], functions[efunc_Fetch]);
            refalrts::alloc_chars(vm, context[34], context[35], " (", 2);
            refalrts::alloc_chars(vm, context[36], context[37], " e.Accum s.Any) <", 17);
            refalrts::copy_evar(vm, context[38], context[39], context[23], context[24]);
            refalrts::alloc_chars(vm, context[40], context[41], " () e.Text>", 11);
            refalrts::alloc_name(vm, context[42], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::alloc_close_call(vm, context[43]);
            refalrts::alloc_char(vm, context[44], ';');
            refalrts::alloc_close_bracket(vm, context[45]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_char(context[4], ' ');
            refalrts::reinit_char(context[5], ' ');
            refalrts::reinit_char(context[9], '(');
            refalrts::reinit_char(context[10], 'e');
            refalrts::reinit_char(context[16], '.');
            refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_close_call(context[6]);
            refalrts::reinit_open_call(context[1]);
            refalrts::link_brackets( context[0], context[45] );
            refalrts::push_stack( vm, context[43] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[6] );
            refalrts::push_stack( vm, context[32] );
            refalrts::link_brackets( context[12], context[13] );
            refalrts::push_stack( vm, context[30] );
            refalrts::push_stack( vm, context[27] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[36], context[45] );
            res = refalrts::splice_evar( res, context[21], context[22] );
            res = refalrts::splice_evar( res, context[33], context[35] );
            res = refalrts::splice_evar( res, context[11], context[1] );
            res = refalrts::splice_evar( res, context[25], context[32] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative/4 (/5 # Any/9 (/10 # Flush/16 e.0/21 )/11 t.1/12 )/6 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.0 as range 21
          //DEBUG: t.1: 12
          //DEBUG: e.0: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/5 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/16 }"Accum) \'"/23 </25 & EscapeChar/26 # Any/27 >/28 '\''/29 </30 Tile{ HalfReuse: & NextState-L*2/11 AsIs: t.1/12 HalfReuse: >/6 HalfReuse: </1 } & Fetch/31" ("/32 Tile{ AsIs: e.0/21 }" e.Accum s.Any)"/34 </36 & NextState-R*2/37 t.1/12/38 >/40 & WriteAlternative-Aux$2\1/41 >/42 ';'/43 )/44 Tile{ ]] }
          refalrts::alloc_chars(vm, context[23], context[24], "Accum) \'", 8);
          refalrts::alloc_open_call(vm, context[25]);
          refalrts::alloc_name(vm, context[26], functions[efunc_EscapeChar]);
          refalrts::alloc_ident(vm, context[27], identifiers[ident_Any]);
          refalrts::alloc_close_call(vm, context[28]);
          refalrts::alloc_char(vm, context[29], '\'');
          refalrts::alloc_open_call(vm, context[30]);
          refalrts::alloc_name(vm, context[31], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[32], context[33], " (", 2);
          refalrts::alloc_chars(vm, context[34], context[35], " e.Accum s.Any)", 15);
          refalrts::alloc_open_call(vm, context[36]);
          refalrts::alloc_name(vm, context[37], functions[efunc_gen_NextStatem_R_D2]);
          refalrts::copy_evar(vm, context[38], context[39], context[12], context[13]);
          refalrts::alloc_close_call(vm, context[40]);
          refalrts::alloc_name(vm, context[41], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[42]);
          refalrts::alloc_char(vm, context[43], ';');
          refalrts::alloc_close_bracket(vm, context[44]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_char(context[4], ' ');
          refalrts::reinit_char(context[5], ' ');
          refalrts::reinit_char(context[9], '(');
          refalrts::reinit_char(context[10], 'e');
          refalrts::reinit_char(context[16], '.');
          refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[6]);
          refalrts::reinit_open_call(context[1]);
          refalrts::link_brackets( context[0], context[44] );
          refalrts::push_stack( vm, context[42] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[40] );
          refalrts::push_stack( vm, context[36] );
          refalrts::push_stack( vm, context[6] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[25] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[34], context[44] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[31], context[33] );
          res = refalrts::splice_evar( res, context[11], context[1] );
          res = refalrts::splice_evar( res, context[23], context[30] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative/4 (/5 s.Head/9 (/10 # Flush/16 e.0/19 )/11 # Finitive/12 )/6 >/1
          context[19] = context[17];
          context[20] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
            continue;
          // closed e.0 as range 19
          //DEBUG: s.Head: 9
          //DEBUG: e.0: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/5 }"(e.Accum) \'"/21 </23 & EscapeChar/24 Tile{ AsIs: s.Head/9 } >/25 '\''/26 </27 & NextState-L*2/28 # Finitive/29 >/30 </31 & Fetch/32 Tile{ HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.0/19 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/6 HalfReuse: 'A'/1 }"ccum \'"/33 </35 & EscapeChar/36 s.Head/9/37 >/38"\')"/39 & WriteAlternative-Aux$2\1/41 >/42 ';'/43 )/44 Tile{ ]] }
          refalrts::alloc_chars(vm, context[21], context[22], "(e.Accum) \'", 11);
          refalrts::alloc_open_call(vm, context[23]);
          refalrts::alloc_name(vm, context[24], functions[efunc_EscapeChar]);
          refalrts::alloc_close_call(vm, context[25]);
          refalrts::alloc_char(vm, context[26], '\'');
          refalrts::alloc_open_call(vm, context[27]);
          refalrts::alloc_name(vm, context[28], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::alloc_ident(vm, context[29], identifiers[ident_Finitive]);
          refalrts::alloc_close_call(vm, context[30]);
          refalrts::alloc_open_call(vm, context[31]);
          refalrts::alloc_name(vm, context[32], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[33], context[34], "ccum \'", 6);
          refalrts::alloc_open_call(vm, context[35]);
          refalrts::alloc_name(vm, context[36], functions[efunc_EscapeChar]);
          refalrts::copy_stvar(vm, context[37], context[9]);
          refalrts::alloc_close_call(vm, context[38]);
          refalrts::alloc_chars(vm, context[39], context[40], "\')", 2);
          refalrts::alloc_name(vm, context[41], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[42]);
          refalrts::alloc_char(vm, context[43], ';');
          refalrts::alloc_close_bracket(vm, context[44]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_char(context[4], ' ');
          refalrts::reinit_char(context[5], ' ');
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_char(context[16], '(');
          refalrts::reinit_char(context[11], ' ');
          refalrts::reinit_char(context[12], 'e');
          refalrts::reinit_char(context[6], '.');
          refalrts::reinit_char(context[1], 'A');
          refalrts::link_brackets( context[0], context[44] );
          refalrts::push_stack( vm, context[42] );
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[38] );
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[23] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[33], context[44] );
          res = refalrts::splice_evar( res, context[10], context[1] );
          res = refalrts::splice_evar( res, context[25], context[32] );
          res = refalrts::splice_elem( res, context[9] );
          res = refalrts::splice_evar( res, context[21], context[24] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative/4 (/5 s.Head/9 (/10 # Flush/16 e.0/19 )/11 (/12 e./21 )/13 )/6 >/1
          context[19] = context[17];
          context[20] = context[18];
          context[21] = 0;
          context[22] = 0;
          if( ! refalrts::brackets_term( context[21], context[22], context[12] ) )
            continue;
          // closed e.0 as range 19
          // closed e. as range 21
          //DEBUG: s.Head: 9
          //DEBUG: e.0: 19
          //DEBUG: e.: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/23"  (e.Accum) "/24 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/5 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/16 } </26 Tile{ HalfReuse: & NextState-L*2/11 AsIs: (/12 AsIs: e./21 AsIs: )/13 HalfReuse: >/6 HalfReuse: </1 } & Fetch/27" ("/28 Tile{ AsIs: e.0/19 }" e.Accum \'"/30 </32 & EscapeChar/33 s.Head/9/34 >/35"\') <"/36 e./21/38" () e.Text>"/40 & WriteAlternative-Aux$2\1/42 >/43 ';'/44 )/45 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[23]);
          refalrts::alloc_chars(vm, context[24], context[25], "  (e.Accum) ", 12);
          refalrts::alloc_open_call(vm, context[26]);
          refalrts::alloc_name(vm, context[27], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[28], context[29], " (", 2);
          refalrts::alloc_chars(vm, context[30], context[31], " e.Accum \'", 10);
          refalrts::alloc_open_call(vm, context[32]);
          refalrts::alloc_name(vm, context[33], functions[efunc_EscapeChar]);
          refalrts::copy_stvar(vm, context[34], context[9]);
          refalrts::alloc_close_call(vm, context[35]);
          refalrts::alloc_chars(vm, context[36], context[37], "\') <", 4);
          refalrts::copy_evar(vm, context[38], context[39], context[21], context[22]);
          refalrts::alloc_chars(vm, context[40], context[41], " () e.Text>", 11);
          refalrts::alloc_name(vm, context[42], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[43]);
          refalrts::alloc_char(vm, context[44], ';');
          refalrts::alloc_close_bracket(vm, context[45]);
          refalrts::reinit_char(context[0], '\'');
          refalrts::reinit_open_call(context[4]);
          refalrts::reinit_name(context[5], functions[efunc_EscapeChar]);
          refalrts::reinit_close_call(context[10]);
          refalrts::reinit_char(context[16], '\'');
          refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[6]);
          refalrts::reinit_open_call(context[1]);
          refalrts::link_brackets( context[23], context[45] );
          refalrts::push_stack( vm, context[43] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[6] );
          refalrts::push_stack( vm, context[26] );
          refalrts::link_brackets( context[12], context[13] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[4] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[30], context[45] );
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[27], context[29] );
          res = refalrts::splice_evar( res, context[11], context[1] );
          res = refalrts::splice_elem( res, context[26] );
          res = refalrts::splice_evar( res, context[0], context[16] );
          res = refalrts::splice_evar( res, context[23], context[25] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative/4 (/5 s.Head/9 (/10 # Flush/16 e.0/19 )/11 t.1/12 )/6 >/1
        context[19] = context[17];
        context[20] = context[18];
        // closed e.0 as range 19
        //DEBUG: t.1: 12
        //DEBUG: s.Head: 9
        //DEBUG: e.0: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/21"  (e.Accum) "/22 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/5 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/16 } </24 Tile{ HalfReuse: & NextState-L*2/11 AsIs: t.1/12 HalfReuse: >/6 HalfReuse: </1 } & Fetch/25" ("/26 Tile{ AsIs: e.0/19 }" e.Accum \'"/28 </30 & EscapeChar/31 s.Head/9/32 >/33"\')"/34 </36 & NextState-R*2/37 t.1/12/38 >/40 & WriteAlternative-Aux$2\1/41 >/42 ';'/43 )/44 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[21]);
        refalrts::alloc_chars(vm, context[22], context[23], "  (e.Accum) ", 12);
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[26], context[27], " (", 2);
        refalrts::alloc_chars(vm, context[28], context[29], " e.Accum \'", 10);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_EscapeChar]);
        refalrts::copy_stvar(vm, context[32], context[9]);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::alloc_chars(vm, context[34], context[35], "\')", 2);
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::alloc_name(vm, context[37], functions[efunc_gen_NextStatem_R_D2]);
        refalrts::copy_evar(vm, context[38], context[39], context[12], context[13]);
        refalrts::alloc_close_call(vm, context[40]);
        refalrts::alloc_name(vm, context[41], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[42]);
        refalrts::alloc_char(vm, context[43], ';');
        refalrts::alloc_close_bracket(vm, context[44]);
        refalrts::reinit_char(context[0], '\'');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[5], functions[efunc_EscapeChar]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_char(context[16], '\'');
        refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::reinit_close_call(context[6]);
        refalrts::reinit_open_call(context[1]);
        refalrts::link_brackets( context[21], context[44] );
        refalrts::push_stack( vm, context[42] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[28], context[44] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[25], context[27] );
        res = refalrts::splice_evar( res, context[11], context[1] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_evar( res, context[0], context[16] );
        res = refalrts::splice_evar( res, context[21], context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative/4 (/5 s.new9/9 (/10 # FlushError/16 e.new10/17 )/11 t.new11/12 )/6 >/1
      context[17] = context[14];
      context[18] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_FlushError], context[16] ) )
        continue;
      // closed e.new10 as range 17
      do {
        // </0 & WriteAlternative/4 (/5 s.Head/9 (/10 # FlushError/16 e.0/19 )/11 # Finitive/12 )/6 >/1
        context[19] = context[17];
        context[20] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
          continue;
        // closed e.0 as range 19
        //DEBUG: s.Head: 9
        //DEBUG: e.0: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/5 }"(e.Accum) \'"/21 </23 & EscapeChar/24 Tile{ AsIs: s.Head/9 } >/25 '\''/26 </27 & NextState-L*2/28 # Finitive/29 >/30 </31 & Fetch/32" (TokenError"/33 Tile{ HalfReuse: ' '/10 HalfReuse: '\''/16 AsIs: e.0/19 HalfReuse: '\''/11 HalfReuse: ')'/12 HalfReuse: & WriteAlternative-Aux$2\1/6 AsIs: >/1 } ';'/35 )/36 Tile{ ]] }
        refalrts::alloc_chars(vm, context[21], context[22], "(e.Accum) \'", 11);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_EscapeChar]);
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_char(vm, context[26], '\'');
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::alloc_name(vm, context[28], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::alloc_ident(vm, context[29], identifiers[ident_Finitive]);
        refalrts::alloc_close_call(vm, context[30]);
        refalrts::alloc_open_call(vm, context[31]);
        refalrts::alloc_name(vm, context[32], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[33], context[34], " (TokenError", 12);
        refalrts::alloc_char(vm, context[35], ';');
        refalrts::alloc_close_bracket(vm, context[36]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_char(context[4], ' ');
        refalrts::reinit_char(context[5], ' ');
        refalrts::reinit_char(context[10], ' ');
        refalrts::reinit_char(context[16], '\'');
        refalrts::reinit_char(context[11], '\'');
        refalrts::reinit_char(context[12], ')');
        refalrts::reinit_name(context[6], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::link_brackets( context[0], context[36] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[10], context[1] );
        res = refalrts::splice_evar( res, context[25], context[34] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[21], context[24] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative/4 (/5 s.Head/9 (/10 # FlushError/16 e.0/19 )/11 (/12 e./21 )/13 )/6 >/1
        context[19] = context[17];
        context[20] = context[18];
        context[21] = 0;
        context[22] = 0;
        if( ! refalrts::brackets_term( context[21], context[22], context[12] ) )
          continue;
        // closed e.0 as range 19
        // closed e. as range 21
        //DEBUG: s.Head: 9
        //DEBUG: e.0: 19
        //DEBUG: e.: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/23"  (e.Accum) "/24 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/5 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/16 } </26 Tile{ HalfReuse: & NextState-L*2/11 AsIs: (/12 AsIs: e./21 AsIs: )/13 HalfReuse: >/6 HalfReuse: </1 } & Fetch/27" (TokenError \'"/28 Tile{ AsIs: e.0/19 }"\') <"/30 e./21/32" () e.Text>"/34 & WriteAlternative-Aux$2\1/36 >/37 ';'/38 )/39 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[23]);
        refalrts::alloc_chars(vm, context[24], context[25], "  (e.Accum) ", 12);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[28], context[29], " (TokenError \'", 14);
        refalrts::alloc_chars(vm, context[30], context[31], "\') <", 4);
        refalrts::copy_evar(vm, context[32], context[33], context[21], context[22]);
        refalrts::alloc_chars(vm, context[34], context[35], " () e.Text>", 11);
        refalrts::alloc_name(vm, context[36], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[37]);
        refalrts::alloc_char(vm, context[38], ';');
        refalrts::alloc_close_bracket(vm, context[39]);
        refalrts::reinit_char(context[0], '\'');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[5], functions[efunc_EscapeChar]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_char(context[16], '\'');
        refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::reinit_close_call(context[6]);
        refalrts::reinit_open_call(context[1]);
        refalrts::link_brackets( context[23], context[39] );
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[26] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[30], context[39] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[27], context[29] );
        res = refalrts::splice_evar( res, context[11], context[1] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_evar( res, context[0], context[16] );
        res = refalrts::splice_evar( res, context[23], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative/4 (/5 s.Head/9 (/10 # FlushError/16 e.0/19 )/11 t.1/12 )/6 >/1
      context[19] = context[17];
      context[20] = context[18];
      // closed e.0 as range 19
      //DEBUG: t.1: 12
      //DEBUG: s.Head: 9
      //DEBUG: e.0: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/21"  (e.Accum) "/22 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/5 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/16 } </24 Tile{ HalfReuse: & NextState-L*2/11 AsIs: t.1/12 HalfReuse: >/6 HalfReuse: </1 } & Fetch/25" (TokenError \'"/26 Tile{ AsIs: e.0/19 }"\')"/28 </30 & NextState-R*2/31 t.1/12/32 >/34 & WriteAlternative-Aux$2\1/35 >/36 ';'/37 )/38 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[21]);
      refalrts::alloc_chars(vm, context[22], context[23], "  (e.Accum) ", 12);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_Fetch]);
      refalrts::alloc_chars(vm, context[26], context[27], " (TokenError \'", 14);
      refalrts::alloc_chars(vm, context[28], context[29], "\')", 2);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_gen_NextStatem_R_D2]);
      refalrts::copy_evar(vm, context[32], context[33], context[12], context[13]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_name(vm, context[35], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::alloc_char(vm, context[37], ';');
      refalrts::alloc_close_bracket(vm, context[38]);
      refalrts::reinit_char(context[0], '\'');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[5], functions[efunc_EscapeChar]);
      refalrts::reinit_close_call(context[10]);
      refalrts::reinit_char(context[16], '\'');
      refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_open_call(context[1]);
      refalrts::link_brackets( context[21], context[38] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[28], context[38] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[25], context[27] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[0], context[16] );
      res = refalrts::splice_evar( res, context[21], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative/4 (/5 s.Head/9 t.0/10 # Finitive/12 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
        continue;
      //DEBUG: t.0: 10
      //DEBUG: s.Head: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/14"  (e.Accum) \'"/15 </17 & EscapeChar/18 s.Head/9/19 >/20 '\''/21 </22 & NextState-L*2/23 # Finitive/24 >/25 </26 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/5 AsIs: s.Head/9 AsIs: t.0/10 HalfReuse: >/12 HalfReuse: & WriteAlternative-Aux$2\1/6 AsIs: >/1 } ';'/27 )/28 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[14]);
      refalrts::alloc_chars(vm, context[15], context[16], "  (e.Accum) \'", 13);
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_EscapeChar]);
      refalrts::copy_stvar(vm, context[19], context[9]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_char(vm, context[21], '\'');
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::alloc_ident(vm, context[24], identifiers[ident_Finitive]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_char(vm, context[27], ';');
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::reinit_name(context[0], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[5], functions[efunc_gen_Flush_D3]);
      refalrts::reinit_close_call(context[12]);
      refalrts::reinit_name(context[6], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::link_brackets( context[14], context[28] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[14], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative/4 (/5 s.Head/9 t.0/10 (/12 e./14 )/13 )/6 >/1
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
        continue;
      // closed e. as range 14
      //DEBUG: t.0: 10
      //DEBUG: s.Head: 9
      //DEBUG: e.: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/16"  (e.Accum) \'"/17 </19 & EscapeChar/20 s.Head/9/21 >/22 '\''/23 </24 & NextState-L*2/25 Tile{ AsIs: (/12 AsIs: e./14 AsIs: )/13 HalfReuse: >/6 HalfReuse: </1 } Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/5 AsIs: s.Head/9 AsIs: t.0/10 } >/26" <"/27 e./14/29" () e.Text>"/31 & WriteAlternative-Aux$2\1/33 >/34 ';'/35 )/36 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[16]);
      refalrts::alloc_chars(vm, context[17], context[18], "  (e.Accum) \'", 13);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_EscapeChar]);
      refalrts::copy_stvar(vm, context[21], context[9]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::alloc_char(vm, context[23], '\'');
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_chars(vm, context[27], context[28], " <", 2);
      refalrts::copy_evar(vm, context[29], context[30], context[14], context[15]);
      refalrts::alloc_chars(vm, context[31], context[32], " () e.Text>", 11);
      refalrts::alloc_name(vm, context[33], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_char(vm, context[35], ';');
      refalrts::alloc_close_bracket(vm, context[36]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_open_call(context[1]);
      refalrts::reinit_name(context[0], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[5], functions[efunc_gen_Flush_D3]);
      refalrts::link_brackets( context[16], context[36] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[26], context[36] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[16], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WriteAlternative/4 (/5 s.Head/9 t.0/10 t.1/12 )/6 >/1
    //DEBUG: t.0: 10
    //DEBUG: t.1: 12
    //DEBUG: s.Head: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/14"  (e.Accum) \'"/15 </17 & EscapeChar/18 s.Head/9/19 >/20 '\''/21 </22 & NextState-L*2/23 Tile{ AsIs: t.1/12 HalfReuse: >/6 HalfReuse: </1 } Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/5 AsIs: s.Head/9 AsIs: t.0/10 } >/24 </25 & NextState-R*2/26 t.1/12/27 >/29 & WriteAlternative-Aux$2\1/30 >/31 ';'/32 )/33 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[14]);
    refalrts::alloc_chars(vm, context[15], context[16], "  (e.Accum) \'", 13);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_EscapeChar]);
    refalrts::copy_stvar(vm, context[19], context[9]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_char(vm, context[21], '\'');
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_NextStatem_L_D2]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_gen_NextStatem_R_D2]);
    refalrts::copy_evar(vm, context[27], context[28], context[12], context[13]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::alloc_char(vm, context[32], ';');
    refalrts::alloc_close_bracket(vm, context[33]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_open_call(context[1]);
    refalrts::reinit_name(context[0], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_Flush_D3]);
    refalrts::link_brackets( context[14], context[33] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[33] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[14], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & WriteAlternative/4 t.Alternative/5 >/1
  //DEBUG: t.Alternative: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/7"  (e.Accum)"/8 Tile{ AsIs: </0 Reuse: & WriteAlternative-Aux*2/4 AsIs: t.Alternative/5 AsIs: >/1 } ';'/10 )/11 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_chars(vm, context[8], context[9], "  (e.Accum)", 11);
  refalrts::alloc_char(vm, context[10], ';');
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_WriteAlternativem_Aux_D2]);
  refalrts::link_brackets( context[7], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WriteAlternative("WriteAlternative", COOKIE1_, COOKIE2_, func_WriteAlternative);


static refalrts::FnResult func_gen_WriteAlternativem_Aux_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & WriteAlternative-Aux$2\1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & WriteAlternative-Aux$2\1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & WriteAlternative-Aux$2\1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 ]] }
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & WriteAlternative-Aux$2\1/4 e.ResultNotEmpty/2 >/1
  // closed e.ResultNotEmpty as range 2
  //DEBUG: e.ResultNotEmpty: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & WriteAlternative-Aux$2\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ResultNotEmpty/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_WriteAlternativem_Aux_S2L1("WriteAlternative-Aux$2\\1", COOKIE1_, COOKIE2_, func_gen_WriteAlternativem_Aux_S2L1);


static refalrts::FnResult func_WriteAlternativem_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & WriteAlternative-Aux/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & WriteAlternative-Aux/4 (/9 s.new1/11 t.new2/12 t.new3/14 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    context[15] = refalrts::tvar_left( context[14], context[7], context[8] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    do {
      // </0 & WriteAlternative-Aux/4 (/9 s.new4/11 s.new5/12 t.new6/14 )/10 >/1
      if( ! refalrts::svar_term( context[12], context[12] ) )
        continue;
      do {
        // </0 & WriteAlternative-Aux/4 (/9 s.new7/11 # None/12 t.new8/14 )/10 >/1
        if( ! refalrts::ident_term( identifiers[ident_None], context[12] ) )
          continue;
        do {
          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # None/12 t.new9/14 )/10 >/1
          if( ! refalrts::ident_term( identifiers[ident_Empty], context[11] ) )
            continue;
          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # None/12 # Finitive/14 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/10 HalfReuse: '='/1 ]] }
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_char(context[1], '=');
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[10];
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # None/12 (/14 e./16 )/15 )/10 >/1
            context[16] = 0;
            context[17] = 0;
            if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
              continue;
            // closed e. as range 16
            //DEBUG: e.: 16

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" e.Te"/18 Tile{ HalfReuse: 'x'/0 HalfReuse: 't'/4 HalfReuse: ' '/9 HalfReuse: '='/11 HalfReuse: ' '/12 HalfReuse: '<'/14 AsIs: e./16 HalfReuse: ' '/15 HalfReuse: '('/10 HalfReuse: 'e'/1 }".Accum) e.Text>"/20 Tile{ ]] }
            refalrts::alloc_chars(vm, context[18], context[19], " e.Te", 5);
            refalrts::alloc_chars(vm, context[20], context[21], ".Accum) e.Text>", 15);
            refalrts::reinit_char(context[0], 'x');
            refalrts::reinit_char(context[4], 't');
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '=');
            refalrts::reinit_char(context[12], ' ');
            refalrts::reinit_char(context[14], '<');
            refalrts::reinit_char(context[15], ' ');
            refalrts::reinit_char(context[10], '(');
            refalrts::reinit_char(context[1], 'e');
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[20], context[21] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[18], context[19] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} # None/12 # Finitive/14 )/10 >/1 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & NextState-L*2/4 HalfReuse: # Finitive/9 HalfReuse: >/11 } Tile{ ]] }
            refalrts::update_name(context[4], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_ident(context[9], identifiers[ident_Finitive]);
            refalrts::reinit_close_call(context[11]);
            refalrts::push_stack( vm, context[11] );
            refalrts::push_stack( vm, context[0] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            refalrts::splice_to_freelist_open( vm, context[11], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # None/12 (/14 e./16 )/15 )/10 >/1
            context[16] = 0;
            context[17] = 0;
            if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
              continue;
            // closed e. as range 16
            //DEBUG: e.: 16

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: (/14 AsIs: e./16 AsIs: )/15 HalfReuse: >/10 HalfReuse: ' '/1 } '<'/18 e./16/19 Tile{ HalfReuse: ' '/0 HalfReuse: '('/4 HalfReuse: 'e'/9 }".Accum) e.Text>"/21 Tile{ ]] }
            refalrts::alloc_char(vm, context[18], '<');
            refalrts::copy_evar(vm, context[19], context[20], context[16], context[17]);
            refalrts::alloc_chars(vm, context[21], context[22], ".Accum) e.Text>", 15);
            refalrts::reinit_open_call(context[11]);
            refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_close_call(context[10]);
            refalrts::reinit_char(context[1], ' ');
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '(');
            refalrts::reinit_char(context[9], 'e');
            refalrts::push_stack( vm, context[10] );
            refalrts::push_stack( vm, context[11] );
            refalrts::link_brackets( context[14], context[15] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[21], context[22] );
            res = refalrts::splice_evar( res, context[0], context[9] );
            res = refalrts::splice_evar( res, context[19], context[20] );
            res = refalrts::splice_elem( res, context[18] );
            res = refalrts::splice_evar( res, context[11], context[1] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # None/12 t.NextState/14 )/10 >/1
          //DEBUG: t.NextState: 14

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & NextState-L*2/4 } t.NextState/14/16 Tile{ HalfReuse: >/9 HalfReuse: </11 HalfReuse: & NextState-R*2/12 AsIs: t.NextState/14 HalfReuse: 'e'/10 HalfReuse: '.'/1 }"Accum"/18 >/20 Tile{ ]] }
          refalrts::copy_evar(vm, context[16], context[17], context[14], context[15]);
          refalrts::alloc_chars(vm, context[18], context[19], "Accum", 5);
          refalrts::alloc_close_call(vm, context[20]);
          refalrts::update_name(context[4], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[9]);
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_R_D2]);
          refalrts::reinit_char(context[10], 'e');
          refalrts::reinit_char(context[1], '.');
          refalrts::push_stack( vm, context[20] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[9] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[18], context[20] );
          res = refalrts::splice_evar( res, context[9], context[1] );
          res = refalrts::splice_evar( res, context[16], context[17] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative-Aux/4 (/9 # Any/11 # None/12 t.new9/14 )/10 >/1
          if( ! refalrts::ident_term( identifiers[ident_Any], context[11] ) )
            continue;
          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Any/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 's'/4 HalfReuse: '.'/9 HalfReuse: 'A'/11 HalfReuse: 'n'/12 HalfReuse: 'y'/14 HalfReuse: ' '/10 HalfReuse: '='/1 ]] }
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], 's');
            refalrts::reinit_char(context[9], '.');
            refalrts::reinit_char(context[11], 'A');
            refalrts::reinit_char(context[12], 'n');
            refalrts::reinit_char(context[14], 'y');
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_char(context[1], '=');
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Any/11 # None/12 (/14 e./16 )/15 )/10 >/1
            context[16] = 0;
            context[17] = 0;
            if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
              continue;
            // closed e. as range 16
            //DEBUG: e.: 16

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" s.Any e.Te"/18 Tile{ HalfReuse: 'x'/0 HalfReuse: 't'/4 HalfReuse: ' '/9 HalfReuse: '='/11 HalfReuse: ' '/12 HalfReuse: '<'/14 AsIs: e./16 HalfReuse: ' '/15 HalfReuse: '('/10 HalfReuse: 'e'/1 }".Accum s.Any) e.Text>"/20 Tile{ ]] }
            refalrts::alloc_chars(vm, context[18], context[19], " s.Any e.Te", 11);
            refalrts::alloc_chars(vm, context[20], context[21], ".Accum s.Any) e.Text>", 21);
            refalrts::reinit_char(context[0], 'x');
            refalrts::reinit_char(context[4], 't');
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '=');
            refalrts::reinit_char(context[12], ' ');
            refalrts::reinit_char(context[14], '<');
            refalrts::reinit_char(context[15], ' ');
            refalrts::reinit_char(context[10], '(');
            refalrts::reinit_char(context[1], 'e');
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[20], context[21] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[18], context[19] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Any/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" s"/16 Tile{ HalfReuse: '.'/0 HalfReuse: 'A'/4 HalfReuse: 'n'/9 HalfReuse: 'y'/11 HalfReuse: </12 HalfReuse: & NextState-L*2/14 HalfReuse: # Finitive/10 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[16], context[17], " s", 2);
            refalrts::reinit_char(context[0], '.');
            refalrts::reinit_char(context[4], 'A');
            refalrts::reinit_char(context[9], 'n');
            refalrts::reinit_char(context[11], 'y');
            refalrts::reinit_open_call(context[12]);
            refalrts::reinit_name(context[14], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_ident(context[10], identifiers[ident_Finitive]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[12] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[0];
            res = refalrts::splice_evar( res, context[16], context[17] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Any/11 # None/12 (/14 e./16 )/15 )/10 >/1
            context[16] = 0;
            context[17] = 0;
            if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
              continue;
            // closed e. as range 16
            //DEBUG: e.: 16

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" s."/18 Tile{ HalfReuse: 'A'/0 HalfReuse: 'n'/4 HalfReuse: 'y'/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: (/14 AsIs: e./16 AsIs: )/15 HalfReuse: >/10 HalfReuse: ' '/1 } '<'/20 e./16/21" (e.Accum s.Any) e.Text>"/23 Tile{ ]] }
            refalrts::alloc_chars(vm, context[18], context[19], " s.", 3);
            refalrts::alloc_char(vm, context[20], '<');
            refalrts::copy_evar(vm, context[21], context[22], context[16], context[17]);
            refalrts::alloc_chars(vm, context[23], context[24], " (e.Accum s.Any) e.Text>", 24);
            refalrts::reinit_char(context[0], 'A');
            refalrts::reinit_char(context[4], 'n');
            refalrts::reinit_char(context[9], 'y');
            refalrts::reinit_open_call(context[11]);
            refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_close_call(context[10]);
            refalrts::reinit_char(context[1], ' ');
            refalrts::push_stack( vm, context[10] );
            refalrts::push_stack( vm, context[11] );
            refalrts::link_brackets( context[14], context[15] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[20], context[24] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[18], context[19] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative-Aux/4 (/9 # Any/11 # None/12 t.NextState/14 )/10 >/1
          //DEBUG: t.NextState: 14

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ }" s."/16 Tile{ HalfReuse: 'A'/0 HalfReuse: 'n'/4 HalfReuse: 'y'/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: t.NextState/14 HalfReuse: >/10 HalfReuse: </1 } & NextState-R*2/18 t.NextState/14/19"e.Accum s.Any"/21 >/23 Tile{ ]] }
          refalrts::alloc_chars(vm, context[16], context[17], " s.", 3);
          refalrts::alloc_name(vm, context[18], functions[efunc_gen_NextStatem_R_D2]);
          refalrts::copy_evar(vm, context[19], context[20], context[14], context[15]);
          refalrts::alloc_chars(vm, context[21], context[22], "e.Accum s.Any", 13);
          refalrts::alloc_close_call(vm, context[23]);
          refalrts::reinit_char(context[0], 'A');
          refalrts::reinit_char(context[4], 'n');
          refalrts::reinit_char(context[9], 'y');
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[10]);
          refalrts::reinit_open_call(context[1]);
          refalrts::push_stack( vm, context[23] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[11] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[18], context[23] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[16], context[17] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative-Aux/4 (/9 s.new9/11 # None/12 # Finitive/14 )/10 >/1
          if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
            continue;
          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Empty], context[11] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } ' '/16 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/9 AsIs: # Empty/11 HalfReuse: >/12 HalfReuse: '\''/14 HalfReuse: ' '/10 HalfReuse: '='/1 ]] }
            refalrts::alloc_char(vm, context[16], ' ');
            refalrts::reinit_char(context[0], '\'');
            refalrts::reinit_open_call(context[4]);
            refalrts::reinit_name(context[9], functions[efunc_EscapeChar]);
            refalrts::reinit_close_call(context[12]);
            refalrts::reinit_char(context[14], '\'');
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_char(context[1], '=');
            refalrts::push_stack( vm, context[12] );
            refalrts::push_stack( vm, context[4] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[0];
            res = refalrts::splice_elem( res, context[16] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Any/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Any], context[11] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } ' '/16 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/9 AsIs: # Any/11 HalfReuse: >/12 HalfReuse: '\''/14 HalfReuse: ' '/10 HalfReuse: '='/1 ]] }
            refalrts::alloc_char(vm, context[16], ' ');
            refalrts::reinit_char(context[0], '\'');
            refalrts::reinit_open_call(context[4]);
            refalrts::reinit_name(context[9], functions[efunc_EscapeChar]);
            refalrts::reinit_close_call(context[12]);
            refalrts::reinit_char(context[14], '\'');
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_char(context[1], '=');
            refalrts::push_stack( vm, context[12] );
            refalrts::push_stack( vm, context[4] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[0];
            res = refalrts::splice_elem( res, context[16] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative-Aux/4 (/9 s.Head/11 # None/12 # Finitive/14 )/10 >/1
          //DEBUG: s.Head: 11

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } ' '/16 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/9 AsIs: s.Head/11 HalfReuse: >/12 HalfReuse: '\''/14 HalfReuse: ' '/10 HalfReuse: '='/1 } </17 & NextState-R@1/18 # Finitive/19 </20 & EscapeChar/21 s.Head/11/22 >/23 >/24 Tile{ ]] }
          refalrts::alloc_char(vm, context[16], ' ');
          refalrts::alloc_open_call(vm, context[17]);
          refalrts::alloc_name(vm, context[18], functions[efunc_gen_NextStatem_R_Z1]);
          refalrts::alloc_ident(vm, context[19], identifiers[ident_Finitive]);
          refalrts::alloc_open_call(vm, context[20]);
          refalrts::alloc_name(vm, context[21], functions[efunc_EscapeChar]);
          refalrts::copy_stvar(vm, context[22], context[11]);
          refalrts::alloc_close_call(vm, context[23]);
          refalrts::alloc_close_call(vm, context[24]);
          refalrts::reinit_char(context[0], '\'');
          refalrts::reinit_open_call(context[4]);
          refalrts::reinit_name(context[9], functions[efunc_EscapeChar]);
          refalrts::reinit_close_call(context[12]);
          refalrts::reinit_char(context[14], '\'');
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_char(context[1], '=');
          refalrts::push_stack( vm, context[24] );
          refalrts::push_stack( vm, context[17] );
          refalrts::push_stack( vm, context[23] );
          refalrts::push_stack( vm, context[20] );
          refalrts::push_stack( vm, context[12] );
          refalrts::push_stack( vm, context[4] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[17], context[24] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_elem( res, context[16] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative-Aux/4 (/9 s.new9/11 # None/12 (/14 e.new10/16 )/15 )/10 >/1
          context[16] = 0;
          context[17] = 0;
          if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
            continue;
          // closed e.new10 as range 16
          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # None/12 (/14 e./18 )/15 )/10 >/1
            context[18] = context[16];
            context[19] = context[17];
            if( ! refalrts::ident_term( identifiers[ident_Empty], context[11] ) )
              continue;
            // closed e. as range 18
            //DEBUG: e.: 18

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" \'"/20 </22 & EscapeChar/23 # Empty/24 >/25"\' e.Te"/26 Tile{ HalfReuse: 'x'/0 HalfReuse: 't'/4 HalfReuse: ' '/9 HalfReuse: '='/11 HalfReuse: ' '/12 HalfReuse: '<'/14 AsIs: e./18 HalfReuse: ' '/15 HalfReuse: '('/10 HalfReuse: 'e'/1 }".Accum) e.Text>"/28 Tile{ ]] }
            refalrts::alloc_chars(vm, context[20], context[21], " \'", 2);
            refalrts::alloc_open_call(vm, context[22]);
            refalrts::alloc_name(vm, context[23], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[24], identifiers[ident_Empty]);
            refalrts::alloc_close_call(vm, context[25]);
            refalrts::alloc_chars(vm, context[26], context[27], "\' e.Te", 6);
            refalrts::alloc_chars(vm, context[28], context[29], ".Accum) e.Text>", 15);
            refalrts::reinit_char(context[0], 'x');
            refalrts::reinit_char(context[4], 't');
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '=');
            refalrts::reinit_char(context[12], ' ');
            refalrts::reinit_char(context[14], '<');
            refalrts::reinit_char(context[15], ' ');
            refalrts::reinit_char(context[10], '(');
            refalrts::reinit_char(context[1], 'e');
            refalrts::push_stack( vm, context[25] );
            refalrts::push_stack( vm, context[22] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[28], context[29] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[20], context[27] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Any/11 # None/12 (/14 e./18 )/15 )/10 >/1
            context[18] = context[16];
            context[19] = context[17];
            if( ! refalrts::ident_term( identifiers[ident_Any], context[11] ) )
              continue;
            // closed e. as range 18
            //DEBUG: e.: 18

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" \'"/20 </22 & EscapeChar/23 # Any/24 >/25"\' e.Te"/26 Tile{ HalfReuse: 'x'/0 HalfReuse: 't'/4 HalfReuse: ' '/9 HalfReuse: '='/11 HalfReuse: ' '/12 HalfReuse: '<'/14 AsIs: e./18 HalfReuse: ' '/15 HalfReuse: '('/10 HalfReuse: 'e'/1 }".Accum s.Any) e.Text>"/28 Tile{ ]] }
            refalrts::alloc_chars(vm, context[20], context[21], " \'", 2);
            refalrts::alloc_open_call(vm, context[22]);
            refalrts::alloc_name(vm, context[23], functions[efunc_EscapeChar]);
            refalrts::alloc_ident(vm, context[24], identifiers[ident_Any]);
            refalrts::alloc_close_call(vm, context[25]);
            refalrts::alloc_chars(vm, context[26], context[27], "\' e.Te", 6);
            refalrts::alloc_chars(vm, context[28], context[29], ".Accum s.Any) e.Text>", 21);
            refalrts::reinit_char(context[0], 'x');
            refalrts::reinit_char(context[4], 't');
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '=');
            refalrts::reinit_char(context[12], ' ');
            refalrts::reinit_char(context[14], '<');
            refalrts::reinit_char(context[15], ' ');
            refalrts::reinit_char(context[10], '(');
            refalrts::reinit_char(context[1], 'e');
            refalrts::push_stack( vm, context[25] );
            refalrts::push_stack( vm, context[22] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[28], context[29] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[20], context[27] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative-Aux/4 (/9 s.Head/11 # None/12 (/14 e./18 )/15 )/10 >/1
          context[18] = context[16];
          context[19] = context[17];
          // closed e. as range 18
          //DEBUG: s.Head: 11
          //DEBUG: e.: 18

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </9 } & EscapeChar/20 Tile{ AsIs: s.Head/11 } >/21"\' e.Text ="/22 </24 Tile{ HalfReuse: & NextState-R@1/12 AsIs: (/14 AsIs: e./18 AsIs: )/15 HalfReuse: </10 HalfReuse: & EscapeChar/1 } s.Head/11/25 >/26 >/27 Tile{ ]] }
          refalrts::alloc_name(vm, context[20], functions[efunc_EscapeChar]);
          refalrts::alloc_close_call(vm, context[21]);
          refalrts::alloc_chars(vm, context[22], context[23], "\' e.Text =", 10);
          refalrts::alloc_open_call(vm, context[24]);
          refalrts::copy_stvar(vm, context[25], context[11]);
          refalrts::alloc_close_call(vm, context[26]);
          refalrts::alloc_close_call(vm, context[27]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '\'');
          refalrts::reinit_open_call(context[9]);
          refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_R_Z1]);
          refalrts::reinit_open_call(context[10]);
          refalrts::reinit_name(context[1], functions[efunc_EscapeChar]);
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[24] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[10] );
          refalrts::link_brackets( context[14], context[15] );
          refalrts::push_stack( vm, context[21] );
          refalrts::push_stack( vm, context[9] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[25], context[27] );
          res = refalrts::splice_evar( res, context[12], context[1] );
          res = refalrts::splice_evar( res, context[21], context[24] );
          res = refalrts::splice_elem( res, context[11] );
          res = refalrts::splice_elem( res, context[20] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # None/12 t.new9/14 )/10 >/1
          if( ! refalrts::ident_term( identifiers[ident_Empty], context[11] ) )
            continue;
          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" \'"/16 </18 Tile{ HalfReuse: & EscapeChar/0 HalfReuse: # Empty/4 HalfReuse: >/9 HalfReuse: '\''/11 HalfReuse: </12 HalfReuse: & NextState-L*2/14 HalfReuse: # Finitive/10 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[16], context[17], " \'", 2);
            refalrts::alloc_open_call(vm, context[18]);
            refalrts::reinit_name(context[0], functions[efunc_EscapeChar]);
            refalrts::reinit_ident(context[4], identifiers[ident_Empty]);
            refalrts::reinit_close_call(context[9]);
            refalrts::reinit_char(context[11], '\'');
            refalrts::reinit_open_call(context[12]);
            refalrts::reinit_name(context[14], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_ident(context[10], identifiers[ident_Finitive]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[12] );
            refalrts::push_stack( vm, context[9] );
            refalrts::push_stack( vm, context[18] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[0];
            res = refalrts::splice_evar( res, context[16], context[18] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # None/12 (/14 e./16 )/15 )/10 >/1
            context[16] = 0;
            context[17] = 0;
            if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
              continue;
            // closed e. as range 16
            //DEBUG: e.: 16

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" \'"/18 </20 & EscapeChar/21 Tile{ HalfReuse: # Empty/0 HalfReuse: >/4 HalfReuse: '\''/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: (/14 AsIs: e./16 AsIs: )/15 HalfReuse: >/10 HalfReuse: ' '/1 } '<'/22 e./16/23" (e.Accum) e.Text>"/25 Tile{ ]] }
            refalrts::alloc_chars(vm, context[18], context[19], " \'", 2);
            refalrts::alloc_open_call(vm, context[20]);
            refalrts::alloc_name(vm, context[21], functions[efunc_EscapeChar]);
            refalrts::alloc_char(vm, context[22], '<');
            refalrts::copy_evar(vm, context[23], context[24], context[16], context[17]);
            refalrts::alloc_chars(vm, context[25], context[26], " (e.Accum) e.Text>", 18);
            refalrts::reinit_ident(context[0], identifiers[ident_Empty]);
            refalrts::reinit_close_call(context[4]);
            refalrts::reinit_char(context[9], '\'');
            refalrts::reinit_open_call(context[11]);
            refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_close_call(context[10]);
            refalrts::reinit_char(context[1], ' ');
            refalrts::push_stack( vm, context[10] );
            refalrts::push_stack( vm, context[11] );
            refalrts::link_brackets( context[14], context[15] );
            refalrts::push_stack( vm, context[4] );
            refalrts::push_stack( vm, context[20] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[22], context[26] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[18], context[21] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # None/12 t.NextState/14 )/10 >/1
          //DEBUG: t.NextState: 14

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ }" \'"/16 </18 & EscapeChar/19 Tile{ HalfReuse: # Empty/0 HalfReuse: >/4 HalfReuse: '\''/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: t.NextState/14 HalfReuse: >/10 HalfReuse: </1 } & NextState-R*2/20 t.NextState/14/21"e.Accum"/23 >/25 Tile{ ]] }
          refalrts::alloc_chars(vm, context[16], context[17], " \'", 2);
          refalrts::alloc_open_call(vm, context[18]);
          refalrts::alloc_name(vm, context[19], functions[efunc_EscapeChar]);
          refalrts::alloc_name(vm, context[20], functions[efunc_gen_NextStatem_R_D2]);
          refalrts::copy_evar(vm, context[21], context[22], context[14], context[15]);
          refalrts::alloc_chars(vm, context[23], context[24], "e.Accum", 7);
          refalrts::alloc_close_call(vm, context[25]);
          refalrts::reinit_ident(context[0], identifiers[ident_Empty]);
          refalrts::reinit_close_call(context[4]);
          refalrts::reinit_char(context[9], '\'');
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[10]);
          refalrts::reinit_open_call(context[1]);
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[18] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[20], context[25] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[16], context[19] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative-Aux/4 (/9 # Any/11 # None/12 t.new9/14 )/10 >/1
          if( ! refalrts::ident_term( identifiers[ident_Any], context[11] ) )
            continue;
          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Any/11 # None/12 # Finitive/14 )/10 >/1
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
              continue;

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" \'"/16 </18 Tile{ HalfReuse: & EscapeChar/0 HalfReuse: # Any/4 HalfReuse: >/9 HalfReuse: '\''/11 HalfReuse: </12 HalfReuse: & NextState-L*2/14 HalfReuse: # Finitive/10 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[16], context[17], " \'", 2);
            refalrts::alloc_open_call(vm, context[18]);
            refalrts::reinit_name(context[0], functions[efunc_EscapeChar]);
            refalrts::reinit_ident(context[4], identifiers[ident_Any]);
            refalrts::reinit_close_call(context[9]);
            refalrts::reinit_char(context[11], '\'');
            refalrts::reinit_open_call(context[12]);
            refalrts::reinit_name(context[14], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_ident(context[10], identifiers[ident_Finitive]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[12] );
            refalrts::push_stack( vm, context[9] );
            refalrts::push_stack( vm, context[18] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[0];
            res = refalrts::splice_evar( res, context[16], context[18] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Any/11 # None/12 (/14 e./16 )/15 )/10 >/1
            context[16] = 0;
            context[17] = 0;
            if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
              continue;
            // closed e. as range 16
            //DEBUG: e.: 16

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" \'"/18 </20 & EscapeChar/21 Tile{ HalfReuse: # Any/0 HalfReuse: >/4 HalfReuse: '\''/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: (/14 AsIs: e./16 AsIs: )/15 HalfReuse: >/10 HalfReuse: ' '/1 } '<'/22 e./16/23" (e.Accum s.Any) e.Text>"/25 Tile{ ]] }
            refalrts::alloc_chars(vm, context[18], context[19], " \'", 2);
            refalrts::alloc_open_call(vm, context[20]);
            refalrts::alloc_name(vm, context[21], functions[efunc_EscapeChar]);
            refalrts::alloc_char(vm, context[22], '<');
            refalrts::copy_evar(vm, context[23], context[24], context[16], context[17]);
            refalrts::alloc_chars(vm, context[25], context[26], " (e.Accum s.Any) e.Text>", 24);
            refalrts::reinit_ident(context[0], identifiers[ident_Any]);
            refalrts::reinit_close_call(context[4]);
            refalrts::reinit_char(context[9], '\'');
            refalrts::reinit_open_call(context[11]);
            refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_close_call(context[10]);
            refalrts::reinit_char(context[1], ' ');
            refalrts::push_stack( vm, context[10] );
            refalrts::push_stack( vm, context[11] );
            refalrts::link_brackets( context[14], context[15] );
            refalrts::push_stack( vm, context[4] );
            refalrts::push_stack( vm, context[20] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[22], context[26] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[18], context[21] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative-Aux/4 (/9 # Any/11 # None/12 t.NextState/14 )/10 >/1
          //DEBUG: t.NextState: 14

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ }" \'"/16 </18 & EscapeChar/19 Tile{ HalfReuse: # Any/0 HalfReuse: >/4 HalfReuse: '\''/9 HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: t.NextState/14 HalfReuse: >/10 HalfReuse: </1 } & NextState-R*2/20 t.NextState/14/21"e.Accum s.Any"/23 >/25 Tile{ ]] }
          refalrts::alloc_chars(vm, context[16], context[17], " \'", 2);
          refalrts::alloc_open_call(vm, context[18]);
          refalrts::alloc_name(vm, context[19], functions[efunc_EscapeChar]);
          refalrts::alloc_name(vm, context[20], functions[efunc_gen_NextStatem_R_D2]);
          refalrts::copy_evar(vm, context[21], context[22], context[14], context[15]);
          refalrts::alloc_chars(vm, context[23], context[24], "e.Accum s.Any", 13);
          refalrts::alloc_close_call(vm, context[25]);
          refalrts::reinit_ident(context[0], identifiers[ident_Any]);
          refalrts::reinit_close_call(context[4]);
          refalrts::reinit_char(context[9], '\'');
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[10]);
          refalrts::reinit_open_call(context[1]);
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[18] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[20], context[25] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[16], context[19] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative-Aux/4 (/9 s.Head/11 # None/12 t.NextState/14 )/10 >/1
        //DEBUG: t.NextState: 14
        //DEBUG: s.Head: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } ' '/16 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/9 AsIs: s.Head/11 HalfReuse: >/12 } '\''/17 </18 & NextState-L*2/19 t.NextState/14/20 >/22 </23 & NextState-R@1/24 Tile{ AsIs: t.NextState/14 } </25 & EscapeChar/26 s.Head/11/27 Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[16], ' ');
        refalrts::alloc_char(vm, context[17], '\'');
        refalrts::alloc_open_call(vm, context[18]);
        refalrts::alloc_name(vm, context[19], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::copy_evar(vm, context[20], context[21], context[14], context[15]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_gen_NextStatem_R_Z1]);
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::alloc_name(vm, context[26], functions[efunc_EscapeChar]);
        refalrts::copy_stvar(vm, context[27], context[11]);
        refalrts::reinit_char(context[0], '\'');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[9], functions[efunc_EscapeChar]);
        refalrts::reinit_close_call(context[12]);
        refalrts::reinit_close_call(context[10]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[25], context[27] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[17], context[24] );
        res = refalrts::splice_evar( res, context[0], context[12] );
        res = refalrts::splice_elem( res, context[16] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # Unnamed/12 # Finitive/14 )/10 >/1
      if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Empty], context[11] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[12] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & WriteAlternative-Aux/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '='/11 HalfReuse: </12 HalfReuse: & Fetch/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
      refalrts::reinit_char(context[9], ' ');
      refalrts::reinit_char(context[11], '=');
      refalrts::reinit_open_call(context[12]);
      refalrts::reinit_name(context[14], functions[efunc_Fetch]);
      refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 t.new4/12 t.new5/14 )/10 >/1
      if( ! refalrts::ident_term( identifiers[ident_Empty], context[11] ) )
        continue;
      do {
        // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 t.new6/12 # Finitive/14 )/10 >/1
        if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
          continue;
        do {
          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 s.new7/18 e.new8/16 )/13 # Finitive/14 )/10 >/1
          context[16] = 0;
          context[17] = 0;
          if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
            continue;
          if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
            continue;
          // closed e.new8 as range 16
          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 # Flush/18 e.0/19 )/13 # Finitive/14 )/10 >/1
            context[19] = context[16];
            context[20] = context[17];
            if( ! refalrts::ident_term( identifiers[ident_Flush], context[18] ) )
              continue;
            // closed e.0 as range 19
            //DEBUG: e.0: 19

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '('/18 AsIs: e.0/19 HalfReuse: ' '/13 HalfReuse: 'e'/14 HalfReuse: '.'/10 HalfReuse: 'A'/1 }"ccum)"/21 & WriteAlternative-Aux$2\1/23 >/24 Tile{ ]] }
            refalrts::alloc_chars(vm, context[21], context[22], "ccum)", 5);
            refalrts::alloc_name(vm, context[23], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::alloc_close_call(vm, context[24]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '=');
            refalrts::reinit_open_call(context[9]);
            refalrts::reinit_name(context[11], functions[efunc_Fetch]);
            refalrts::reinit_char(context[12], ' ');
            refalrts::reinit_char(context[18], '(');
            refalrts::reinit_char(context[13], ' ');
            refalrts::reinit_char(context[14], 'e');
            refalrts::reinit_char(context[10], '.');
            refalrts::reinit_char(context[1], 'A');
            refalrts::push_stack( vm, context[24] );
            refalrts::push_stack( vm, context[9] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[21], context[24] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 # FlushError/18 e.0/19 )/13 # Finitive/14 )/10 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_FlushError], context[18] ) )
            continue;
          // closed e.0 as range 19
          //DEBUG: e.0: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ }" ="/21 </23 & Fetch/24" (TokenE"/25 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/9 HalfReuse: 'r'/11 HalfReuse: ' '/12 HalfReuse: '\''/18 AsIs: e.0/19 HalfReuse: '\''/13 HalfReuse: ')'/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[21], context[22], " =", 2);
          refalrts::alloc_open_call(vm, context[23]);
          refalrts::alloc_name(vm, context[24], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[25], context[26], " (TokenE", 8);
          refalrts::reinit_char(context[0], 'r');
          refalrts::reinit_char(context[4], 'r');
          refalrts::reinit_char(context[9], 'o');
          refalrts::reinit_char(context[11], 'r');
          refalrts::reinit_char(context[12], ' ');
          refalrts::reinit_char(context[18], '\'');
          refalrts::reinit_char(context[13], '\'');
          refalrts::reinit_char(context[14], ')');
          refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[23] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[0];
          res = refalrts::splice_evar( res, context[21], context[26] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 t.Flush/12 # Finitive/14 )/10 >/1
        //DEBUG: t.Flush: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ }" ="/16 </18 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/9 AsIs: # Empty/11 AsIs: t.Flush/12 HalfReuse: >/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[16], context[17], " =", 2);
        refalrts::alloc_open_call(vm, context[18]);
        refalrts::reinit_name(context[0], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[9], functions[efunc_gen_Flush_D3]);
        refalrts::reinit_close_call(context[14]);
        refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[14] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[16], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 t.new6/12 (/14 e.new7/16 )/15 )/10 >/1
        context[16] = 0;
        context[17] = 0;
        if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
          continue;
        // closed e.new7 as range 16
        do {
          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # Unnamed/12 (/14 e./18 )/15 )/10 >/1
          context[18] = context[16];
          context[19] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[12] ) )
            continue;
          // closed e. as range 18
          //DEBUG: e.: 18

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ }" e.Text"/20 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '<'/14 AsIs: e./18 HalfReuse: ' '/15 HalfReuse: '('/10 HalfReuse: ')'/1 }" e.Text>"/22 & WriteAlternative-Aux$2\1/24 >/25 Tile{ ]] }
          refalrts::alloc_chars(vm, context[20], context[21], " e.Text", 7);
          refalrts::alloc_chars(vm, context[22], context[23], " e.Text>", 8);
          refalrts::alloc_name(vm, context[24], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[25]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '=');
          refalrts::reinit_open_call(context[9]);
          refalrts::reinit_name(context[11], functions[efunc_Fetch]);
          refalrts::reinit_char(context[12], ' ');
          refalrts::reinit_char(context[14], '<');
          refalrts::reinit_char(context[15], ' ');
          refalrts::reinit_char(context[10], '(');
          refalrts::reinit_char(context[1], ')');
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[9] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[22], context[25] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[20], context[21] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 s.new8/22 e.new9/20 )/13 (/14 e.new10/18 )/15 )/10 >/1
          context[18] = context[16];
          context[19] = context[17];
          context[20] = 0;
          context[21] = 0;
          if( ! refalrts::brackets_term( context[20], context[21], context[12] ) )
            continue;
          // closed e.new10 as range 18
          if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
            continue;
          // closed e.new9 as range 20
          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 # Flush/22 e.1/23 )/13 (/14 e./25 )/15 )/10 >/1
            context[23] = context[20];
            context[24] = context[21];
            context[25] = context[18];
            context[26] = context[19];
            if( ! refalrts::ident_term( identifiers[ident_Flush], context[22] ) )
              continue;
            // closed e.1 as range 23
            // closed e. as range 25
            //DEBUG: e.1: 23
            //DEBUG: e.: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" e.Text"/27 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '('/22 AsIs: e.1/23 HalfReuse: ' '/13 HalfReuse: 'e'/14 }".Accum) <"/29 Tile{ AsIs: e./25 }" () e.Text"/31 Tile{ HalfReuse: '>'/15 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[27], context[28], " e.Text", 7);
            refalrts::alloc_chars(vm, context[29], context[30], ".Accum) <", 9);
            refalrts::alloc_chars(vm, context[31], context[32], " () e.Text", 10);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '=');
            refalrts::reinit_open_call(context[9]);
            refalrts::reinit_name(context[11], functions[efunc_Fetch]);
            refalrts::reinit_char(context[12], ' ');
            refalrts::reinit_char(context[22], '(');
            refalrts::reinit_char(context[13], ' ');
            refalrts::reinit_char(context[14], 'e');
            refalrts::reinit_char(context[15], '>');
            refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[9] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[15];
            res = refalrts::splice_evar( res, context[31], context[32] );
            res = refalrts::splice_evar( res, context[25], context[26] );
            res = refalrts::splice_evar( res, context[29], context[30] );
            res = refalrts::splice_evar( res, context[0], context[14] );
            res = refalrts::splice_evar( res, context[27], context[28] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 # FlushError/22 e.1/23 )/13 (/14 e./25 )/15 )/10 >/1
          context[23] = context[20];
          context[24] = context[21];
          context[25] = context[18];
          context[26] = context[19];
          if( ! refalrts::ident_term( identifiers[ident_FlushError], context[22] ) )
            continue;
          // closed e.1 as range 23
          // closed e. as range 25
          //DEBUG: e.1: 23
          //DEBUG: e.: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ }" e.Text ="/27 </29 & Fetch/30" (TokenE"/31 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/9 HalfReuse: 'r'/11 HalfReuse: ' '/12 HalfReuse: '\''/22 AsIs: e.1/23 HalfReuse: '\''/13 HalfReuse: ')'/14 }" <"/33 Tile{ AsIs: e./25 }" () e.Text"/35 Tile{ HalfReuse: '>'/15 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[27], context[28], " e.Text =", 9);
          refalrts::alloc_open_call(vm, context[29]);
          refalrts::alloc_name(vm, context[30], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[31], context[32], " (TokenE", 8);
          refalrts::alloc_chars(vm, context[33], context[34], " <", 2);
          refalrts::alloc_chars(vm, context[35], context[36], " () e.Text", 10);
          refalrts::reinit_char(context[0], 'r');
          refalrts::reinit_char(context[4], 'r');
          refalrts::reinit_char(context[9], 'o');
          refalrts::reinit_char(context[11], 'r');
          refalrts::reinit_char(context[12], ' ');
          refalrts::reinit_char(context[22], '\'');
          refalrts::reinit_char(context[13], '\'');
          refalrts::reinit_char(context[14], ')');
          refalrts::reinit_char(context[15], '>');
          refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[29] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[15];
          res = refalrts::splice_evar( res, context[35], context[36] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[33], context[34] );
          res = refalrts::splice_evar( res, context[0], context[14] );
          res = refalrts::splice_evar( res, context[27], context[32] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 t.Flush/12 (/14 e./18 )/15 )/10 >/1
        context[18] = context[16];
        context[19] = context[17];
        // closed e. as range 18
        //DEBUG: t.Flush: 12
        //DEBUG: e.: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ }" e.Text ="/20 </22 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/9 AsIs: # Empty/11 AsIs: t.Flush/12 HalfReuse: >/14 }" <"/23 Tile{ AsIs: e./18 }" () e.Text"/25 Tile{ HalfReuse: '>'/15 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[20], context[21], " e.Text =", 9);
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::alloc_chars(vm, context[23], context[24], " <", 2);
        refalrts::alloc_chars(vm, context[25], context[26], " () e.Text", 10);
        refalrts::reinit_name(context[0], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[9], functions[efunc_gen_Flush_D3]);
        refalrts::reinit_close_call(context[14]);
        refalrts::reinit_char(context[15], '>');
        refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[14] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[15];
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[0], context[14] );
        res = refalrts::splice_evar( res, context[20], context[22] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # Unnamed/12 t.new6/14 )/10 >/1
        if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[12] ) )
          continue;
        do {
          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # Unnamed/12 # Finitive/14 )/10 >/1
          if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
            continue;

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & NextState-L*2/4 HalfReuse: # Finitive/9 HalfReuse: >/11 HalfReuse: </12 HalfReuse: & Fetch/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
          refalrts::update_name(context[4], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_ident(context[9], identifiers[ident_Finitive]);
          refalrts::reinit_close_call(context[11]);
          refalrts::reinit_open_call(context[12]);
          refalrts::reinit_name(context[14], functions[efunc_Fetch]);
          refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[12] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[0] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # Unnamed/12 (/14 e./16 )/15 )/10 >/1
          context[16] = 0;
          context[17] = 0;
          if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
            continue;
          // closed e. as range 16
          //DEBUG: e.: 16

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </11 HalfReuse: & NextState-L*2/12 AsIs: (/14 AsIs: e./16 AsIs: )/15 HalfReuse: >/10 HalfReuse: </1 } & Fetch/18" <"/19 e./16/21" () e.Text"/23 Tile{ HalfReuse: '>'/0 Reuse: & WriteAlternative-Aux$2\1/4 HalfReuse: >/9 } Tile{ ]] }
          refalrts::alloc_name(vm, context[18], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[19], context[20], " <", 2);
          refalrts::copy_evar(vm, context[21], context[22], context[16], context[17]);
          refalrts::alloc_chars(vm, context[23], context[24], " () e.Text", 10);
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[10]);
          refalrts::reinit_open_call(context[1]);
          refalrts::reinit_char(context[0], '>');
          refalrts::update_name(context[4], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::reinit_close_call(context[9]);
          refalrts::push_stack( vm, context[9] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[11] );
          refalrts::link_brackets( context[14], context[15] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[0], context[9] );
          res = refalrts::splice_evar( res, context[18], context[24] );
          res = refalrts::splice_evar( res, context[11], context[1] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 # Unnamed/12 t.NextState/14 )/10 >/1
        //DEBUG: t.NextState: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </16 & NextState-L*2/17 t.NextState/14/18 Tile{ HalfReuse: >/0 HalfReuse: </4 HalfReuse: & Fetch/9 HalfReuse: </11 HalfReuse: & NextState-R*2/12 AsIs: t.NextState/14 HalfReuse: >/10 HalfReuse: & WriteAlternative-Aux$2\1/1 } >/20 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[17], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::copy_evar(vm, context[18], context[19], context[14], context[15]);
        refalrts::alloc_close_call(vm, context[20]);
        refalrts::reinit_close_call(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[9], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[12], functions[efunc_gen_NextStatem_R_D2]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_name(context[1], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[11] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[16], context[19] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 s.new6/18 e.new7/16 )/13 t.new8/14 )/10 >/1
        context[16] = 0;
        context[17] = 0;
        if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
          continue;
        if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
          continue;
        // closed e.new7 as range 16
        do {
          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 # Flush/18 e.new9/19 )/13 t.new10/14 )/10 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_Flush], context[18] ) )
            continue;
          // closed e.new9 as range 19
          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 # Flush/18 e.0/21 )/13 # Finitive/14 )/10 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
              continue;
            // closed e.0 as range 21
            //DEBUG: e.0: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } </23 & NextState-L*2/24 Tile{ HalfReuse: # Finitive/0 HalfReuse: >/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '('/18 AsIs: e.0/21 HalfReuse: ' '/13 HalfReuse: 'e'/14 HalfReuse: '.'/10 HalfReuse: 'A'/1 }"ccum)"/25 & WriteAlternative-Aux$2\1/27 >/28 Tile{ ]] }
            refalrts::alloc_open_call(vm, context[23]);
            refalrts::alloc_name(vm, context[24], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::alloc_chars(vm, context[25], context[26], "ccum)", 5);
            refalrts::alloc_name(vm, context[27], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::alloc_close_call(vm, context[28]);
            refalrts::reinit_ident(context[0], identifiers[ident_Finitive]);
            refalrts::reinit_close_call(context[4]);
            refalrts::reinit_open_call(context[9]);
            refalrts::reinit_name(context[11], functions[efunc_Fetch]);
            refalrts::reinit_char(context[12], ' ');
            refalrts::reinit_char(context[18], '(');
            refalrts::reinit_char(context[13], ' ');
            refalrts::reinit_char(context[14], 'e');
            refalrts::reinit_char(context[10], '.');
            refalrts::reinit_char(context[1], 'A');
            refalrts::push_stack( vm, context[28] );
            refalrts::push_stack( vm, context[9] );
            refalrts::push_stack( vm, context[4] );
            refalrts::push_stack( vm, context[23] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[25], context[28] );
            res = refalrts::splice_evar( res, context[0], context[1] );
            res = refalrts::splice_evar( res, context[23], context[24] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 # Flush/18 e.0/21 )/13 (/14 e./23 )/15 )/10 >/1
            context[21] = context[19];
            context[22] = context[20];
            context[23] = 0;
            context[24] = 0;
            if( ! refalrts::brackets_term( context[23], context[24], context[14] ) )
              continue;
            // closed e.0 as range 21
            // closed e. as range 23
            //DEBUG: e.0: 21
            //DEBUG: e.: 23

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & NextState-L*2/13 AsIs: (/14 AsIs: e./23 AsIs: )/15 HalfReuse: >/10 HalfReuse: </1 } & Fetch/25" ("/26 Tile{ AsIs: e.0/21 } Tile{ HalfReuse: ' '/4 HalfReuse: 'e'/9 HalfReuse: '.'/11 HalfReuse: 'A'/12 HalfReuse: 'c'/18 }"cum) <"/28 e./23/30" () e.Text>"/32 & WriteAlternative-Aux$2\1/34 >/35 Tile{ ]] }
            refalrts::alloc_name(vm, context[25], functions[efunc_Fetch]);
            refalrts::alloc_chars(vm, context[26], context[27], " (", 2);
            refalrts::alloc_chars(vm, context[28], context[29], "cum) <", 6);
            refalrts::copy_evar(vm, context[30], context[31], context[23], context[24]);
            refalrts::alloc_chars(vm, context[32], context[33], " () e.Text>", 11);
            refalrts::alloc_name(vm, context[34], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
            refalrts::alloc_close_call(vm, context[35]);
            refalrts::reinit_name(context[13], functions[efunc_gen_NextStatem_L_D2]);
            refalrts::reinit_close_call(context[10]);
            refalrts::reinit_open_call(context[1]);
            refalrts::reinit_char(context[4], ' ');
            refalrts::reinit_char(context[9], 'e');
            refalrts::reinit_char(context[11], '.');
            refalrts::reinit_char(context[12], 'A');
            refalrts::reinit_char(context[18], 'c');
            refalrts::push_stack( vm, context[35] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[10] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[14], context[15] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[28], context[35] );
            res = refalrts::splice_evar( res, context[4], context[18] );
            res = refalrts::splice_evar( res, context[21], context[22] );
            res = refalrts::splice_evar( res, context[25], context[27] );
            res = refalrts::splice_evar( res, context[13], context[1] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 # Flush/18 e.0/21 )/13 t.NextState/14 )/10 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.0 as range 21
          //DEBUG: t.NextState: 14
          //DEBUG: e.0: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } & NextState-L*2/23 t.NextState/14/24 Tile{ HalfReuse: >/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '('/18 AsIs: e.0/21 HalfReuse: ' '/13 }"e.Accum)"/26 </28 & NextState-R*2/29 Tile{ AsIs: t.NextState/14 } >/30 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[23], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::copy_evar(vm, context[24], context[25], context[14], context[15]);
          refalrts::alloc_chars(vm, context[26], context[27], "e.Accum)", 8);
          refalrts::alloc_open_call(vm, context[28]);
          refalrts::alloc_name(vm, context[29], functions[efunc_gen_NextStatem_R_D2]);
          refalrts::alloc_close_call(vm, context[30]);
          refalrts::reinit_close_call(context[4]);
          refalrts::reinit_open_call(context[9]);
          refalrts::reinit_name(context[11], functions[efunc_Fetch]);
          refalrts::reinit_char(context[12], ' ');
          refalrts::reinit_char(context[18], '(');
          refalrts::reinit_char(context[13], ' ');
          refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[9] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          res = refalrts::splice_elem( res, context[30] );
          res = refalrts::splice_evar( res, context[14], context[15] );
          res = refalrts::splice_evar( res, context[26], context[29] );
          res = refalrts::splice_evar( res, context[4], context[13] );
          res = refalrts::splice_evar( res, context[23], context[25] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 # FlushError/18 e.new9/19 )/13 t.new10/14 )/10 >/1
        context[19] = context[16];
        context[20] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_FlushError], context[18] ) )
          continue;
        // closed e.new9 as range 19
        do {
          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 # FlushError/18 e.0/21 )/13 # Finitive/14 )/10 >/1
          context[21] = context[19];
          context[22] = context[20];
          if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
            continue;
          // closed e.0 as range 21
          //DEBUG: e.0: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } </23 & NextState-L*2/24 # Finitive/25 >/26 </27 & Fetch/28" (TokenE"/29 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/9 HalfReuse: 'r'/11 HalfReuse: ' '/12 HalfReuse: '\''/18 AsIs: e.0/21 HalfReuse: '\''/13 HalfReuse: ')'/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[23]);
          refalrts::alloc_name(vm, context[24], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::alloc_ident(vm, context[25], identifiers[ident_Finitive]);
          refalrts::alloc_close_call(vm, context[26]);
          refalrts::alloc_open_call(vm, context[27]);
          refalrts::alloc_name(vm, context[28], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[29], context[30], " (TokenE", 8);
          refalrts::reinit_char(context[0], 'r');
          refalrts::reinit_char(context[4], 'r');
          refalrts::reinit_char(context[9], 'o');
          refalrts::reinit_char(context[11], 'r');
          refalrts::reinit_char(context[12], ' ');
          refalrts::reinit_char(context[18], '\'');
          refalrts::reinit_char(context[13], '\'');
          refalrts::reinit_char(context[14], ')');
          refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[23] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[0];
          res = refalrts::splice_evar( res, context[23], context[30] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 # FlushError/18 e.0/21 )/13 (/14 e./23 )/15 )/10 >/1
          context[21] = context[19];
          context[22] = context[20];
          context[23] = 0;
          context[24] = 0;
          if( ! refalrts::brackets_term( context[23], context[24], context[14] ) )
            continue;
          // closed e.0 as range 21
          // closed e. as range 23
          //DEBUG: e.0: 21
          //DEBUG: e.: 23

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & NextState-L*2/13 AsIs: (/14 AsIs: e./23 AsIs: )/15 HalfReuse: >/10 HalfReuse: </1 } Tile{ Reuse: & Fetch/4 HalfReuse: ' '/9 HalfReuse: '('/11 HalfReuse: 'T'/12 HalfReuse: 'o'/18 }"kenError \'"/25 Tile{ AsIs: e.0/21 }"\') <"/27 e./23/29" () e.Text>"/31 & WriteAlternative-Aux$2\1/33 >/34 Tile{ ]] }
          refalrts::alloc_chars(vm, context[25], context[26], "kenError \'", 10);
          refalrts::alloc_chars(vm, context[27], context[28], "\') <", 4);
          refalrts::copy_evar(vm, context[29], context[30], context[23], context[24]);
          refalrts::alloc_chars(vm, context[31], context[32], " () e.Text>", 11);
          refalrts::alloc_name(vm, context[33], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[34]);
          refalrts::reinit_name(context[13], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[10]);
          refalrts::reinit_open_call(context[1]);
          refalrts::update_name(context[4], functions[efunc_Fetch]);
          refalrts::reinit_char(context[9], ' ');
          refalrts::reinit_char(context[11], '(');
          refalrts::reinit_char(context[12], 'T');
          refalrts::reinit_char(context[18], 'o');
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[14], context[15] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[27], context[34] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[4], context[18] );
          res = refalrts::splice_evar( res, context[13], context[1] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 (/12 # FlushError/18 e.0/21 )/13 t.NextState/14 )/10 >/1
        context[21] = context[19];
        context[22] = context[20];
        // closed e.0 as range 21
        //DEBUG: t.NextState: 14
        //DEBUG: e.0: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </23 & NextState-L*2/24 t.NextState/14/25 >/27 </28 & Fetch/29" (TokenE"/30 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/9 HalfReuse: 'r'/11 HalfReuse: ' '/12 HalfReuse: '\''/18 AsIs: e.0/21 HalfReuse: '\''/13 } ')'/32 </33 & NextState-R*2/34 Tile{ AsIs: t.NextState/14 } >/35 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::copy_evar(vm, context[25], context[26], context[14], context[15]);
        refalrts::alloc_close_call(vm, context[27]);
        refalrts::alloc_open_call(vm, context[28]);
        refalrts::alloc_name(vm, context[29], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[30], context[31], " (TokenE", 8);
        refalrts::alloc_char(vm, context[32], ')');
        refalrts::alloc_open_call(vm, context[33]);
        refalrts::alloc_name(vm, context[34], functions[efunc_gen_NextStatem_R_D2]);
        refalrts::alloc_close_call(vm, context[35]);
        refalrts::reinit_char(context[0], 'r');
        refalrts::reinit_char(context[4], 'r');
        refalrts::reinit_char(context[9], 'o');
        refalrts::reinit_char(context[11], 'r');
        refalrts::reinit_char(context[12], ' ');
        refalrts::reinit_char(context[18], '\'');
        refalrts::reinit_char(context[13], '\'');
        refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[32], context[34] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[23], context[31] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 t.Flush/12 # Finitive/14 )/10 >/1
        if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
          continue;
        //DEBUG: t.Flush: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </16 & NextState-L*2/17 # Finitive/18 >/19 </20 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/9 AsIs: # Empty/11 AsIs: t.Flush/12 HalfReuse: >/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[17], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::alloc_ident(vm, context[18], identifiers[ident_Finitive]);
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::reinit_name(context[0], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[9], functions[efunc_gen_Flush_D3]);
        refalrts::reinit_close_call(context[14]);
        refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[14] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[16], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 t.Flush/12 (/14 e./16 )/15 )/10 >/1
        context[16] = 0;
        context[17] = 0;
        if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
          continue;
        // closed e. as range 16
        //DEBUG: t.Flush: 12
        //DEBUG: e.: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </18 & NextState-L*2/19 Tile{ AsIs: (/14 AsIs: e./16 AsIs: )/15 HalfReuse: >/10 HalfReuse: </1 } Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/9 AsIs: # Empty/11 AsIs: t.Flush/12 } >/20" <"/21 e./16/23" () e.Text>"/25 & WriteAlternative-Aux$2\1/27 >/28 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[18]);
        refalrts::alloc_name(vm, context[19], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::alloc_close_call(vm, context[20]);
        refalrts::alloc_chars(vm, context[21], context[22], " <", 2);
        refalrts::copy_evar(vm, context[23], context[24], context[16], context[17]);
        refalrts::alloc_chars(vm, context[25], context[26], " () e.Text>", 11);
        refalrts::alloc_name(vm, context[27], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_name(context[0], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[9], functions[efunc_gen_Flush_D3]);
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[18] );
        refalrts::link_brackets( context[14], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[20], context[28] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[14], context[1] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative-Aux/4 (/9 # Empty/11 t.Flush/12 t.NextState/14 )/10 >/1
      //DEBUG: t.Flush: 12
      //DEBUG: t.NextState: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </16 & NextState-L*2/17 t.NextState/14/18 >/20 </21 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/9 AsIs: # Empty/11 AsIs: t.Flush/12 } >/22 </23 & NextState-R*2/24 Tile{ AsIs: t.NextState/14 } >/25 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[17], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::copy_evar(vm, context[18], context[19], context[14], context[15]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_gen_NextStatem_R_D2]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::reinit_name(context[0], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[9], functions[efunc_gen_Flush_D3]);
      refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[22], context[24] );
      res = refalrts::splice_evar( res, context[0], context[13] );
      res = refalrts::splice_evar( res, context[16], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WriteAlternative-Aux/4 (/9 # Any/11 t.new4/12 t.new5/14 )/10 >/1
    if( ! refalrts::ident_term( identifiers[ident_Any], context[11] ) )
      continue;
    do {
      // </0 & WriteAlternative-Aux/4 (/9 # Any/11 t.new6/12 # Finitive/14 )/10 >/1
      if( ! refalrts::ident_term( identifiers[ident_Finitive], context[14] ) )
        continue;
      do {
        // </0 & WriteAlternative-Aux/4 (/9 # Any/11 # Unnamed/12 # Finitive/14 )/10 >/1
        if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ }" s.A"/16 Tile{ HalfReuse: 'n'/0 HalfReuse: 'y'/4 HalfReuse: ' '/9 HalfReuse: '='/11 HalfReuse: </12 HalfReuse: & Fetch/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[16], context[17], " s.A", 4);
        refalrts::reinit_char(context[0], 'n');
        refalrts::reinit_char(context[4], 'y');
        refalrts::reinit_char(context[9], ' ');
        refalrts::reinit_char(context[11], '=');
        refalrts::reinit_open_call(context[12]);
        refalrts::reinit_name(context[14], functions[efunc_Fetch]);
        refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[16], context[17] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative-Aux/4 (/9 # Any/11 (/12 s.new7/18 e.new8/16 )/13 # Finitive/14 )/10 >/1
        context[16] = 0;
        context[17] = 0;
        if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
          continue;
        if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
          continue;
        // closed e.new8 as range 16
        do {
          // </0 & WriteAlternative-Aux/4 (/9 # Any/11 (/12 # Flush/18 e.0/19 )/13 # Finitive/14 )/10 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_Flush], context[18] ) )
            continue;
          // closed e.0 as range 19
          //DEBUG: e.0: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ }" s.Any"/21 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '('/18 AsIs: e.0/19 HalfReuse: ' '/13 HalfReuse: 'e'/14 HalfReuse: '.'/10 HalfReuse: 'A'/1 }"ccum s.Any)"/23 & WriteAlternative-Aux$2\1/25 >/26 Tile{ ]] }
          refalrts::alloc_chars(vm, context[21], context[22], " s.Any", 6);
          refalrts::alloc_chars(vm, context[23], context[24], "ccum s.Any)", 11);
          refalrts::alloc_name(vm, context[25], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[26]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '=');
          refalrts::reinit_open_call(context[9]);
          refalrts::reinit_name(context[11], functions[efunc_Fetch]);
          refalrts::reinit_char(context[12], ' ');
          refalrts::reinit_char(context[18], '(');
          refalrts::reinit_char(context[13], ' ');
          refalrts::reinit_char(context[14], 'e');
          refalrts::reinit_char(context[10], '.');
          refalrts::reinit_char(context[1], 'A');
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[9] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[23], context[26] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative-Aux/4 (/9 # Any/11 (/12 # FlushError/18 e.0/19 )/13 # Finitive/14 )/10 >/1
        context[19] = context[16];
        context[20] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_FlushError], context[18] ) )
          continue;
        // closed e.0 as range 19
        //DEBUG: e.0: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ }" s.Any ="/21 </23 & Fetch/24" (TokenE"/25 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/9 HalfReuse: 'r'/11 HalfReuse: ' '/12 HalfReuse: '\''/18 AsIs: e.0/19 HalfReuse: '\''/13 HalfReuse: ')'/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[21], context[22], " s.Any =", 8);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[25], context[26], " (TokenE", 8);
        refalrts::reinit_char(context[0], 'r');
        refalrts::reinit_char(context[4], 'r');
        refalrts::reinit_char(context[9], 'o');
        refalrts::reinit_char(context[11], 'r');
        refalrts::reinit_char(context[12], ' ');
        refalrts::reinit_char(context[18], '\'');
        refalrts::reinit_char(context[13], '\'');
        refalrts::reinit_char(context[14], ')');
        refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[21], context[26] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative-Aux/4 (/9 # Any/11 t.Flush/12 # Finitive/14 )/10 >/1
      //DEBUG: t.Flush: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" s.Any ="/16 </18 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/9 AsIs: # Any/11 AsIs: t.Flush/12 HalfReuse: >/14 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[16], context[17], " s.Any =", 8);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::reinit_name(context[0], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[9], functions[efunc_gen_Flush_D3]);
      refalrts::reinit_close_call(context[14]);
      refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[16], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WriteAlternative-Aux/4 (/9 # Any/11 t.new6/12 (/14 e.new7/16 )/15 )/10 >/1
    context[16] = 0;
    context[17] = 0;
    if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
      continue;
    // closed e.new7 as range 16
    do {
      // </0 & WriteAlternative-Aux/4 (/9 # Any/11 # Unnamed/12 (/14 e./18 )/15 )/10 >/1
      context[18] = context[16];
      context[19] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[12] ) )
        continue;
      // closed e. as range 18
      //DEBUG: e.: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" s.Any e.Text"/20 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '<'/14 AsIs: e./18 HalfReuse: ' '/15 HalfReuse: '('/10 HalfReuse: ')'/1 }" e.Text>"/22 & WriteAlternative-Aux$2\1/24 >/25 Tile{ ]] }
      refalrts::alloc_chars(vm, context[20], context[21], " s.Any e.Text", 13);
      refalrts::alloc_chars(vm, context[22], context[23], " e.Text>", 8);
      refalrts::alloc_name(vm, context[24], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], '=');
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[11], functions[efunc_Fetch]);
      refalrts::reinit_char(context[12], ' ');
      refalrts::reinit_char(context[14], '<');
      refalrts::reinit_char(context[15], ' ');
      refalrts::reinit_char(context[10], '(');
      refalrts::reinit_char(context[1], ')');
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[25] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative-Aux/4 (/9 # Any/11 (/12 s.new8/22 e.new9/20 )/13 (/14 e.new10/18 )/15 )/10 >/1
      context[18] = context[16];
      context[19] = context[17];
      context[20] = 0;
      context[21] = 0;
      if( ! refalrts::brackets_term( context[20], context[21], context[12] ) )
        continue;
      // closed e.new10 as range 18
      if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
        continue;
      // closed e.new9 as range 20
      do {
        // </0 & WriteAlternative-Aux/4 (/9 # Any/11 (/12 # Flush/22 e.1/23 )/13 (/14 e./25 )/15 )/10 >/1
        context[23] = context[20];
        context[24] = context[21];
        context[25] = context[18];
        context[26] = context[19];
        if( ! refalrts::ident_term( identifiers[ident_Flush], context[22] ) )
          continue;
        // closed e.1 as range 23
        // closed e. as range 25
        //DEBUG: e.1: 23
        //DEBUG: e.: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ }" s.Any e.Text"/27 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </9 HalfReuse: & Fetch/11 HalfReuse: ' '/12 HalfReuse: '('/22 AsIs: e.1/23 HalfReuse: ' '/13 HalfReuse: 'e'/14 }".Accum s.Any) <"/29 Tile{ AsIs: e./25 }" () e.Text"/31 Tile{ HalfReuse: '>'/15 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[27], context[28], " s.Any e.Text", 13);
        refalrts::alloc_chars(vm, context[29], context[30], ".Accum s.Any) <", 15);
        refalrts::alloc_chars(vm, context[31], context[32], " () e.Text", 10);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '=');
        refalrts::reinit_open_call(context[9]);
        refalrts::reinit_name(context[11], functions[efunc_Fetch]);
        refalrts::reinit_char(context[12], ' ');
        refalrts::reinit_char(context[22], '(');
        refalrts::reinit_char(context[13], ' ');
        refalrts::reinit_char(context[14], 'e');
        refalrts::reinit_char(context[15], '>');
        refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[15];
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[0], context[14] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative-Aux/4 (/9 # Any/11 (/12 # FlushError/22 e.1/23 )/13 (/14 e./25 )/15 )/10 >/1
      context[23] = context[20];
      context[24] = context[21];
      context[25] = context[18];
      context[26] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_FlushError], context[22] ) )
        continue;
      // closed e.1 as range 23
      // closed e. as range 25
      //DEBUG: e.1: 23
      //DEBUG: e.: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" s.Any e.Text ="/27 </29 & Fetch/30" (TokenE"/31 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/9 HalfReuse: 'r'/11 HalfReuse: ' '/12 HalfReuse: '\''/22 AsIs: e.1/23 HalfReuse: '\''/13 HalfReuse: ')'/14 }" <"/33 Tile{ AsIs: e./25 }" () e.Text"/35 Tile{ HalfReuse: '>'/15 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[27], context[28], " s.Any e.Text =", 15);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_Fetch]);
      refalrts::alloc_chars(vm, context[31], context[32], " (TokenE", 8);
      refalrts::alloc_chars(vm, context[33], context[34], " <", 2);
      refalrts::alloc_chars(vm, context[35], context[36], " () e.Text", 10);
      refalrts::reinit_char(context[0], 'r');
      refalrts::reinit_char(context[4], 'r');
      refalrts::reinit_char(context[9], 'o');
      refalrts::reinit_char(context[11], 'r');
      refalrts::reinit_char(context[12], ' ');
      refalrts::reinit_char(context[22], '\'');
      refalrts::reinit_char(context[13], '\'');
      refalrts::reinit_char(context[14], ')');
      refalrts::reinit_char(context[15], '>');
      refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[29] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[0], context[14] );
      res = refalrts::splice_evar( res, context[27], context[32] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WriteAlternative-Aux/4 (/9 # Any/11 t.Flush/12 (/14 e./18 )/15 )/10 >/1
    context[18] = context[16];
    context[19] = context[17];
    // closed e. as range 18
    //DEBUG: t.Flush: 12
    //DEBUG: e.: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }" s.Any e.Text ="/20 </22 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/9 AsIs: # Any/11 AsIs: t.Flush/12 HalfReuse: >/14 }" <"/23 Tile{ AsIs: e./18 }" () e.Text"/25 Tile{ HalfReuse: '>'/15 HalfReuse: & WriteAlternative-Aux$2\1/10 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[20], context[21], " s.Any e.Text =", 15);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_chars(vm, context[23], context[24], " <", 2);
    refalrts::alloc_chars(vm, context[25], context[26], " () e.Text", 10);
    refalrts::reinit_name(context[0], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[9], functions[efunc_gen_Flush_D3]);
    refalrts::reinit_close_call(context[14]);
    refalrts::reinit_char(context[15], '>');
    refalrts::reinit_name(context[10], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[15];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & WriteAlternative-Aux/4 (/7 s.new1/9 t.new2/10 t.new3/12 )/8 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & WriteAlternative-Aux/4 (/7 # Any/9 t.new4/10 t.new5/12 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Any], context[9] ) )
      continue;
    do {
      // </0 & WriteAlternative-Aux/4 (/7 # Any/9 # Unnamed/10 t.new6/12 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[10] ) )
        continue;
      do {
        // </0 & WriteAlternative-Aux/4 (/7 # Any/9 # Unnamed/10 # Finitive/12 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ }" s.Any"/14 Tile{ AsIs: </0 Reuse: & NextState-L*2/4 HalfReuse: # Finitive/7 HalfReuse: >/9 HalfReuse: </10 HalfReuse: & Fetch/12 HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[14], context[15], " s.Any", 6);
        refalrts::update_name(context[4], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::reinit_ident(context[7], identifiers[ident_Finitive]);
        refalrts::reinit_close_call(context[9]);
        refalrts::reinit_open_call(context[10]);
        refalrts::reinit_name(context[12], functions[efunc_Fetch]);
        refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[9] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[14], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative-Aux/4 (/7 # Any/9 # Unnamed/10 (/12 e./14 )/13 )/8 >/1
        context[14] = 0;
        context[15] = 0;
        if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
          continue;
        // closed e. as range 14
        //DEBUG: e.: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ }" s."/16 Tile{ HalfReuse: 'A'/0 HalfReuse: 'n'/4 HalfReuse: 'y'/7 HalfReuse: </9 HalfReuse: & NextState-L*2/10 AsIs: (/12 AsIs: e./14 AsIs: )/13 HalfReuse: >/8 HalfReuse: </1 } & Fetch/18" <"/19 e./14/21" () e.Text>"/23 & WriteAlternative-Aux$2\1/25 >/26 Tile{ ]] }
        refalrts::alloc_chars(vm, context[16], context[17], " s.", 3);
        refalrts::alloc_name(vm, context[18], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[19], context[20], " <", 2);
        refalrts::copy_evar(vm, context[21], context[22], context[14], context[15]);
        refalrts::alloc_chars(vm, context[23], context[24], " () e.Text>", 11);
        refalrts::alloc_name(vm, context[25], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::reinit_char(context[0], 'A');
        refalrts::reinit_char(context[4], 'n');
        refalrts::reinit_char(context[7], 'y');
        refalrts::reinit_open_call(context[9]);
        refalrts::reinit_name(context[10], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::reinit_close_call(context[8]);
        refalrts::reinit_open_call(context[1]);
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[9] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[18], context[26] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative-Aux/4 (/7 # Any/9 # Unnamed/10 t.NextState/12 )/8 >/1
      //DEBUG: t.NextState: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" s."/14 Tile{ HalfReuse: 'A'/0 HalfReuse: 'n'/4 HalfReuse: 'y'/7 HalfReuse: </9 HalfReuse: & NextState-L*2/10 AsIs: t.NextState/12 HalfReuse: >/8 HalfReuse: </1 } & Fetch/16 </17 & NextState-R*2/18 t.NextState/12/19 >/21 & WriteAlternative-Aux$2\1/22 >/23 Tile{ ]] }
      refalrts::alloc_chars(vm, context[14], context[15], " s.", 3);
      refalrts::alloc_name(vm, context[16], functions[efunc_Fetch]);
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_NextStatem_R_D2]);
      refalrts::copy_evar(vm, context[19], context[20], context[12], context[13]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::reinit_char(context[0], 'A');
      refalrts::reinit_char(context[4], 'n');
      refalrts::reinit_char(context[7], 'y');
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[10], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_call(context[1]);
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[23] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 s.new6/16 e.new7/14 )/11 t.new8/12 )/8 >/1
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
        continue;
      // closed e.new7 as range 14
      do {
        // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 # Flush/16 e.new9/17 )/11 t.new10/12 )/8 >/1
        context[17] = context[14];
        context[18] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_Flush], context[16] ) )
          continue;
        // closed e.new9 as range 17
        do {
          // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 # Flush/16 e.0/19 )/11 # Finitive/12 )/8 >/1
          context[19] = context[17];
          context[20] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
            continue;
          // closed e.0 as range 19
          //DEBUG: e.0: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ }" s.Any"/21 </23 & NextState-L*2/24 Tile{ HalfReuse: # Finitive/0 HalfReuse: >/4 HalfReuse: </7 HalfReuse: & Fetch/9 HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.0/19 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/8 HalfReuse: 'A'/1 }"ccum s.Any)"/25 & WriteAlternative-Aux$2\1/27 >/28 Tile{ ]] }
          refalrts::alloc_chars(vm, context[21], context[22], " s.Any", 6);
          refalrts::alloc_open_call(vm, context[23]);
          refalrts::alloc_name(vm, context[24], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::alloc_chars(vm, context[25], context[26], "ccum s.Any)", 11);
          refalrts::alloc_name(vm, context[27], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[28]);
          refalrts::reinit_ident(context[0], identifiers[ident_Finitive]);
          refalrts::reinit_close_call(context[4]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[9], functions[efunc_Fetch]);
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_char(context[16], '(');
          refalrts::reinit_char(context[11], ' ');
          refalrts::reinit_char(context[12], 'e');
          refalrts::reinit_char(context[8], '.');
          refalrts::reinit_char(context[1], 'A');
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[23] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[25], context[28] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[21], context[24] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 # Flush/16 e.0/19 )/11 (/12 e./21 )/13 )/8 >/1
          context[19] = context[17];
          context[20] = context[18];
          context[21] = 0;
          context[22] = 0;
          if( ! refalrts::brackets_term( context[21], context[22], context[12] ) )
            continue;
          // closed e.0 as range 19
          // closed e. as range 21
          //DEBUG: e.0: 19
          //DEBUG: e.: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 's'/4 HalfReuse: '.'/7 HalfReuse: 'A'/9 HalfReuse: 'n'/10 HalfReuse: 'y'/16 } </23 Tile{ HalfReuse: & NextState-L*2/11 AsIs: (/12 AsIs: e./21 AsIs: )/13 HalfReuse: >/8 HalfReuse: </1 } & Fetch/24" ("/25 Tile{ AsIs: e.0/19 }" e.Accum s.Any) <"/27 e./21/29" () e.Text>"/31 & WriteAlternative-Aux$2\1/33 >/34 Tile{ ]] }
          refalrts::alloc_open_call(vm, context[23]);
          refalrts::alloc_name(vm, context[24], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[25], context[26], " (", 2);
          refalrts::alloc_chars(vm, context[27], context[28], " e.Accum s.Any) <", 17);
          refalrts::copy_evar(vm, context[29], context[30], context[21], context[22]);
          refalrts::alloc_chars(vm, context[31], context[32], " () e.Text>", 11);
          refalrts::alloc_name(vm, context[33], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[34]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], 's');
          refalrts::reinit_char(context[7], '.');
          refalrts::reinit_char(context[9], 'A');
          refalrts::reinit_char(context[10], 'n');
          refalrts::reinit_char(context[16], 'y');
          refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[8]);
          refalrts::reinit_open_call(context[1]);
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[23] );
          refalrts::link_brackets( context[12], context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[27], context[34] );
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[24], context[26] );
          res = refalrts::splice_evar( res, context[11], context[1] );
          res = refalrts::splice_elem( res, context[23] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 # Flush/16 e.0/19 )/11 t.NextState/12 )/8 >/1
        context[19] = context[17];
        context[20] = context[18];
        // closed e.0 as range 19
        //DEBUG: t.NextState: 12
        //DEBUG: e.0: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 's'/4 HalfReuse: '.'/7 HalfReuse: 'A'/9 HalfReuse: 'n'/10 HalfReuse: 'y'/16 } </21 & NextState-L*2/22 t.NextState/12/23 >/25 </26 & Fetch/27" ("/28 Tile{ AsIs: e.0/19 }" e.Accum s.Any)"/30 </32 Tile{ HalfReuse: & NextState-R*2/11 AsIs: t.NextState/12 } >/33 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_name(vm, context[22], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::copy_evar(vm, context[23], context[24], context[12], context[13]);
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[28], context[29], " (", 2);
        refalrts::alloc_chars(vm, context[30], context[31], " e.Accum s.Any)", 15);
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], 's');
        refalrts::reinit_char(context[7], '.');
        refalrts::reinit_char(context[9], 'A');
        refalrts::reinit_char(context[10], 'n');
        refalrts::reinit_char(context[16], 'y');
        refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_R_D2]);
        refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_evar( res, context[11], context[13] );
        res = refalrts::splice_evar( res, context[30], context[32] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[21], context[29] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 # FlushError/16 e.new9/17 )/11 t.new10/12 )/8 >/1
      context[17] = context[14];
      context[18] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_FlushError], context[16] ) )
        continue;
      // closed e.new9 as range 17
      do {
        // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 # FlushError/16 e.0/19 )/11 # Finitive/12 )/8 >/1
        context[19] = context[17];
        context[20] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
          continue;
        // closed e.0 as range 19
        //DEBUG: e.0: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ }" s.Any"/21 </23 & NextState-L*2/24 # Finitive/25 >/26 </27 & Fetch/28" (TokenE"/29 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/7 HalfReuse: 'r'/9 HalfReuse: ' '/10 HalfReuse: '\''/16 AsIs: e.0/19 HalfReuse: '\''/11 HalfReuse: ')'/12 HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[21], context[22], " s.Any", 6);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_Finitive]);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::alloc_name(vm, context[28], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[29], context[30], " (TokenE", 8);
        refalrts::reinit_char(context[0], 'r');
        refalrts::reinit_char(context[4], 'r');
        refalrts::reinit_char(context[7], 'o');
        refalrts::reinit_char(context[9], 'r');
        refalrts::reinit_char(context[10], ' ');
        refalrts::reinit_char(context[16], '\'');
        refalrts::reinit_char(context[11], '\'');
        refalrts::reinit_char(context[12], ')');
        refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[21], context[30] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 # FlushError/16 e.0/19 )/11 (/12 e./21 )/13 )/8 >/1
        context[19] = context[17];
        context[20] = context[18];
        context[21] = 0;
        context[22] = 0;
        if( ! refalrts::brackets_term( context[21], context[22], context[12] ) )
          continue;
        // closed e.0 as range 19
        // closed e. as range 21
        //DEBUG: e.0: 19
        //DEBUG: e.: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 's'/4 HalfReuse: '.'/7 HalfReuse: 'A'/9 HalfReuse: 'n'/10 HalfReuse: 'y'/16 } </23 Tile{ HalfReuse: & NextState-L*2/11 AsIs: (/12 AsIs: e./21 AsIs: )/13 HalfReuse: >/8 HalfReuse: </1 } & Fetch/24" (TokenError \'"/25 Tile{ AsIs: e.0/19 }"\') <"/27 e./21/29" () e.Text>"/31 & WriteAlternative-Aux$2\1/33 >/34 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[25], context[26], " (TokenError \'", 14);
        refalrts::alloc_chars(vm, context[27], context[28], "\') <", 4);
        refalrts::copy_evar(vm, context[29], context[30], context[21], context[22]);
        refalrts::alloc_chars(vm, context[31], context[32], " () e.Text>", 11);
        refalrts::alloc_name(vm, context[33], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[34]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], 's');
        refalrts::reinit_char(context[7], '.');
        refalrts::reinit_char(context[9], 'A');
        refalrts::reinit_char(context[10], 'n');
        refalrts::reinit_char(context[16], 'y');
        refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::reinit_close_call(context[8]);
        refalrts::reinit_open_call(context[1]);
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[23] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[27], context[34] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[24], context[26] );
        res = refalrts::splice_evar( res, context[11], context[1] );
        res = refalrts::splice_elem( res, context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 # FlushError/16 e.0/19 )/11 t.NextState/12 )/8 >/1
      context[19] = context[17];
      context[20] = context[18];
      // closed e.0 as range 19
      //DEBUG: t.NextState: 12
      //DEBUG: e.0: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" s.Any"/21 </23 & NextState-L*2/24 t.NextState/12/25 >/27 </28 & Fetch/29" (TokenE"/30 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/7 HalfReuse: 'r'/9 HalfReuse: ' '/10 HalfReuse: '\''/16 AsIs: e.0/19 HalfReuse: '\''/11 } ')'/32 </33 & NextState-R*2/34 Tile{ AsIs: t.NextState/12 } >/35 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[21], context[22], " s.Any", 6);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::copy_evar(vm, context[25], context[26], context[12], context[13]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[29], functions[efunc_Fetch]);
      refalrts::alloc_chars(vm, context[30], context[31], " (TokenE", 8);
      refalrts::alloc_char(vm, context[32], ')');
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_gen_NextStatem_R_D2]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::reinit_char(context[0], 'r');
      refalrts::reinit_char(context[4], 'r');
      refalrts::reinit_char(context[7], 'o');
      refalrts::reinit_char(context[9], 'r');
      refalrts::reinit_char(context[10], ' ');
      refalrts::reinit_char(context[16], '\'');
      refalrts::reinit_char(context[11], '\'');
      refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[32], context[34] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[21], context[31] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative-Aux/4 (/7 # Any/9 t.Flush/10 # Finitive/12 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
        continue;
      //DEBUG: t.Flush: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" s.Any"/14 </16 & NextState-L*2/17 # Finitive/18 >/19 </20 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/7 AsIs: # Any/9 AsIs: t.Flush/10 HalfReuse: >/12 HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[14], context[15], " s.Any", 6);
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[17], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::alloc_ident(vm, context[18], identifiers[ident_Finitive]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::reinit_name(context[0], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_gen_Flush_D3]);
      refalrts::reinit_close_call(context[12]);
      refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[14], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative-Aux/4 (/7 # Any/9 t.Flush/10 (/12 e./14 )/13 )/8 >/1
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
        continue;
      // closed e. as range 14
      //DEBUG: t.Flush: 10
      //DEBUG: e.: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" s.Any"/16 </18 & NextState-L*2/19 Tile{ AsIs: (/12 AsIs: e./14 AsIs: )/13 HalfReuse: >/8 HalfReuse: </1 } Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/7 AsIs: # Any/9 AsIs: t.Flush/10 } >/20" <"/21 e./14/23" () e.Text>"/25 & WriteAlternative-Aux$2\1/27 >/28 Tile{ ]] }
      refalrts::alloc_chars(vm, context[16], context[17], " s.Any", 6);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_chars(vm, context[21], context[22], " <", 2);
      refalrts::copy_evar(vm, context[23], context[24], context[14], context[15]);
      refalrts::alloc_chars(vm, context[25], context[26], " () e.Text>", 11);
      refalrts::alloc_name(vm, context[27], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_call(context[1]);
      refalrts::reinit_name(context[0], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_gen_Flush_D3]);
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[18] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[28] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WriteAlternative-Aux/4 (/7 # Any/9 t.Flush/10 t.NextState/12 )/8 >/1
    //DEBUG: t.Flush: 10
    //DEBUG: t.NextState: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }" s.Any"/14 </16 & NextState-L*2/17 t.NextState/12/18 >/20 </21 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/7 AsIs: # Any/9 AsIs: t.Flush/10 } >/22 </23 & NextState-R*2/24 Tile{ AsIs: t.NextState/12 } >/25 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[14], context[15], " s.Any", 6);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_NextStatem_L_D2]);
    refalrts::copy_evar(vm, context[18], context[19], context[12], context[13]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_NextStatem_R_D2]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::reinit_name(context[0], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_Flush_D3]);
    refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[14], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & WriteAlternative-Aux/4 (/7 s.new4/9 t.new5/10 # Finitive/12 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
      continue;
    do {
      // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 # Unnamed/10 # Finitive/12 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[10] ) )
        continue;
      //DEBUG: s.Head: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } ' '/14 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/7 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/12 HalfReuse: ' '/8 HalfReuse: '='/1 } </15 & Fetch/16 & WriteAlternative-Aux$2\1/17 >/18 Tile{ ]] }
      refalrts::alloc_char(vm, context[14], ' ');
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_Fetch]);
      refalrts::alloc_name(vm, context[17], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[18]);
      refalrts::reinit_char(context[0], '\'');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_EscapeChar]);
      refalrts::reinit_close_call(context[10]);
      refalrts::reinit_char(context[12], '\'');
      refalrts::reinit_char(context[8], ' ');
      refalrts::reinit_char(context[1], '=');
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[18] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative-Aux/4 (/7 s.new6/9 (/10 s.new7/16 e.new8/14 )/11 # Finitive/12 )/8 >/1
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
        continue;
      // closed e.new8 as range 14
      do {
        // </0 & WriteAlternative-Aux/4 (/7 s.new9/9 (/10 # Flush/16 e.new10/17 )/11 # Finitive/12 )/8 >/1
        context[17] = context[14];
        context[18] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_Flush], context[16] ) )
          continue;
        // closed e.new10 as range 17
        do {
          // </0 & WriteAlternative-Aux/4 (/7 # Empty/9 (/10 # Flush/16 e.0/19 )/11 # Finitive/12 )/8 >/1
          context[19] = context[17];
          context[20] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_Empty], context[9] ) )
            continue;
          // closed e.0 as range 19
          //DEBUG: e.0: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ }" \'"/21 </23 & EscapeChar/24 # Empty/25 >/26 '\''/27 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </7 HalfReuse: & Fetch/9 HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.0/19 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/8 HalfReuse: 'A'/1 }"ccum)"/28 & WriteAlternative-Aux$2\1/30 >/31 Tile{ ]] }
          refalrts::alloc_chars(vm, context[21], context[22], " \'", 2);
          refalrts::alloc_open_call(vm, context[23]);
          refalrts::alloc_name(vm, context[24], functions[efunc_EscapeChar]);
          refalrts::alloc_ident(vm, context[25], identifiers[ident_Empty]);
          refalrts::alloc_close_call(vm, context[26]);
          refalrts::alloc_char(vm, context[27], '\'');
          refalrts::alloc_chars(vm, context[28], context[29], "ccum)", 5);
          refalrts::alloc_name(vm, context[30], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[31]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '=');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[9], functions[efunc_Fetch]);
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_char(context[16], '(');
          refalrts::reinit_char(context[11], ' ');
          refalrts::reinit_char(context[12], 'e');
          refalrts::reinit_char(context[8], '.');
          refalrts::reinit_char(context[1], 'A');
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[23] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[28], context[31] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[21], context[27] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 # Flush/16 e.0/19 )/11 # Finitive/12 )/8 >/1
          context[19] = context[17];
          context[20] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_Any], context[9] ) )
            continue;
          // closed e.0 as range 19
          //DEBUG: e.0: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ }" \'"/21 </23 & EscapeChar/24 # Any/25 >/26 '\''/27 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </7 HalfReuse: & Fetch/9 HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.0/19 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/8 HalfReuse: 'A'/1 }"ccum s.Any)"/28 & WriteAlternative-Aux$2\1/30 >/31 Tile{ ]] }
          refalrts::alloc_chars(vm, context[21], context[22], " \'", 2);
          refalrts::alloc_open_call(vm, context[23]);
          refalrts::alloc_name(vm, context[24], functions[efunc_EscapeChar]);
          refalrts::alloc_ident(vm, context[25], identifiers[ident_Any]);
          refalrts::alloc_close_call(vm, context[26]);
          refalrts::alloc_char(vm, context[27], '\'');
          refalrts::alloc_chars(vm, context[28], context[29], "ccum s.Any)", 11);
          refalrts::alloc_name(vm, context[30], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[31]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '=');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[9], functions[efunc_Fetch]);
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_char(context[16], '(');
          refalrts::reinit_char(context[11], ' ');
          refalrts::reinit_char(context[12], 'e');
          refalrts::reinit_char(context[8], '.');
          refalrts::reinit_char(context[1], 'A');
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[23] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[28], context[31] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[21], context[27] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 (/10 # Flush/16 e.0/19 )/11 # Finitive/12 )/8 >/1
        context[19] = context[17];
        context[20] = context[18];
        // closed e.0 as range 19
        //DEBUG: s.Head: 9
        //DEBUG: e.0: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </7 } & EscapeChar/21 Tile{ AsIs: s.Head/9 } >/22"\' ="/23 </25 & Fetch/26 Tile{ HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.0/19 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/8 HalfReuse: 'A'/1 }"ccum \'"/27 </29 & EscapeChar/30 s.Head/9/31 >/32"\')"/33 & WriteAlternative-Aux$2\1/35 >/36 Tile{ ]] }
        refalrts::alloc_name(vm, context[21], functions[efunc_EscapeChar]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_chars(vm, context[23], context[24], "\' =", 3);
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::alloc_name(vm, context[26], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[27], context[28], "ccum \'", 6);
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::alloc_name(vm, context[30], functions[efunc_EscapeChar]);
        refalrts::copy_stvar(vm, context[31], context[9]);
        refalrts::alloc_close_call(vm, context[32]);
        refalrts::alloc_chars(vm, context[33], context[34], "\')", 2);
        refalrts::alloc_name(vm, context[35], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '\'');
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_char(context[10], ' ');
        refalrts::reinit_char(context[16], '(');
        refalrts::reinit_char(context[11], ' ');
        refalrts::reinit_char(context[12], 'e');
        refalrts::reinit_char(context[8], '.');
        refalrts::reinit_char(context[1], 'A');
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[27], context[36] );
        res = refalrts::splice_evar( res, context[10], context[1] );
        res = refalrts::splice_evar( res, context[22], context[26] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_elem( res, context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 (/10 # FlushError/16 e.0/17 )/11 # Finitive/12 )/8 >/1
      context[17] = context[14];
      context[18] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_FlushError], context[16] ) )
        continue;
      // closed e.0 as range 17
      //DEBUG: s.Head: 9
      //DEBUG: e.0: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </7 } & EscapeChar/19 Tile{ AsIs: s.Head/9 } >/20"\' ="/21 </23 & Fetch/24" (TokenError"/25 Tile{ HalfReuse: ' '/10 HalfReuse: '\''/16 AsIs: e.0/17 HalfReuse: '\''/11 HalfReuse: ')'/12 HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[19], functions[efunc_EscapeChar]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_chars(vm, context[21], context[22], "\' =", 3);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_Fetch]);
      refalrts::alloc_chars(vm, context[25], context[26], " (TokenError", 12);
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], '\'');
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_char(context[10], ' ');
      refalrts::reinit_char(context[16], '\'');
      refalrts::reinit_char(context[11], '\'');
      refalrts::reinit_char(context[12], ')');
      refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[20], context[26] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 t.Flush/10 # Finitive/12 )/8 >/1
    //DEBUG: t.Flush: 10
    //DEBUG: s.Head: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }" \'"/14 </16 & EscapeChar/17 s.Head/9/18 >/19"\' ="/20 </22 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/7 AsIs: s.Head/9 AsIs: t.Flush/10 HalfReuse: >/12 HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[14], context[15], " \'", 2);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_EscapeChar]);
    refalrts::copy_stvar(vm, context[18], context[9]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_chars(vm, context[20], context[21], "\' =", 3);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::reinit_name(context[0], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_Flush_D3]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[14], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & WriteAlternative-Aux/4 (/7 s.new4/9 t.new5/10 (/12 e.new6/14 )/13 )/8 >/1
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
      continue;
    // closed e.new6 as range 14
    do {
      // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 # Unnamed/10 (/12 e./16 )/13 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[10] ) )
        continue;
      // closed e. as range 16
      //DEBUG: s.Head: 9
      //DEBUG: e.: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } ' '/18 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/7 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/12 }" e.Text ="/19 </21 & Fetch/22" <"/23 Tile{ AsIs: e./16 }" () e.Text"/25 Tile{ HalfReuse: '>'/13 HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], ' ');
      refalrts::alloc_chars(vm, context[19], context[20], " e.Text =", 9);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_Fetch]);
      refalrts::alloc_chars(vm, context[23], context[24], " <", 2);
      refalrts::alloc_chars(vm, context[25], context[26], " () e.Text", 10);
      refalrts::reinit_char(context[0], '\'');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_EscapeChar]);
      refalrts::reinit_close_call(context[10]);
      refalrts::reinit_char(context[12], '\'');
      refalrts::reinit_char(context[13], '>');
      refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[19], context[24] );
      res = refalrts::splice_evar( res, context[0], context[12] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative-Aux/4 (/7 s.new7/9 (/10 s.new8/20 e.new9/18 )/11 (/12 e.new10/16 )/13 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      context[18] = 0;
      context[19] = 0;
      if( ! refalrts::brackets_term( context[18], context[19], context[10] ) )
        continue;
      // closed e.new10 as range 16
      if( ! refalrts::svar_left( context[20], context[18], context[19] ) )
        continue;
      // closed e.new9 as range 18
      do {
        // </0 & WriteAlternative-Aux/4 (/7 s.new11/9 (/10 # Flush/20 e.new12/21 )/11 (/12 e.new13/23 )/13 )/8 >/1
        context[21] = context[18];
        context[22] = context[19];
        context[23] = context[16];
        context[24] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_Flush], context[20] ) )
          continue;
        // closed e.new12 as range 21
        // closed e.new13 as range 23
        do {
          // </0 & WriteAlternative-Aux/4 (/7 # Empty/9 (/10 # Flush/20 e.1/25 )/11 (/12 e./27 )/13 )/8 >/1
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_Empty], context[9] ) )
            continue;
          // closed e.1 as range 25
          // closed e. as range 27
          //DEBUG: e.1: 25
          //DEBUG: e.: 27

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ }" \'"/29 </31 & EscapeChar/32 # Empty/33 >/34"\' e.Text"/35 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </7 HalfReuse: & Fetch/9 HalfReuse: ' '/10 HalfReuse: '('/20 AsIs: e.1/25 HalfReuse: ' '/11 HalfReuse: 'e'/12 }".Accum) <"/37 Tile{ AsIs: e./27 }" () e.Text"/39 Tile{ HalfReuse: '>'/13 HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[29], context[30], " \'", 2);
          refalrts::alloc_open_call(vm, context[31]);
          refalrts::alloc_name(vm, context[32], functions[efunc_EscapeChar]);
          refalrts::alloc_ident(vm, context[33], identifiers[ident_Empty]);
          refalrts::alloc_close_call(vm, context[34]);
          refalrts::alloc_chars(vm, context[35], context[36], "\' e.Text", 8);
          refalrts::alloc_chars(vm, context[37], context[38], ".Accum) <", 9);
          refalrts::alloc_chars(vm, context[39], context[40], " () e.Text", 10);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '=');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[9], functions[efunc_Fetch]);
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_char(context[20], '(');
          refalrts::reinit_char(context[11], ' ');
          refalrts::reinit_char(context[12], 'e');
          refalrts::reinit_char(context[13], '>');
          refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[31] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[13];
          res = refalrts::splice_evar( res, context[39], context[40] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          res = refalrts::splice_evar( res, context[37], context[38] );
          res = refalrts::splice_evar( res, context[0], context[12] );
          res = refalrts::splice_evar( res, context[29], context[36] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 # Flush/20 e.1/25 )/11 (/12 e./27 )/13 )/8 >/1
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_Any], context[9] ) )
            continue;
          // closed e.1 as range 25
          // closed e. as range 27
          //DEBUG: e.1: 25
          //DEBUG: e.: 27

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ }" \'"/29 </31 & EscapeChar/32 # Any/33 >/34"\' e.Text"/35 Tile{ HalfReuse: ' '/0 HalfReuse: '='/4 HalfReuse: </7 HalfReuse: & Fetch/9 HalfReuse: ' '/10 HalfReuse: '('/20 AsIs: e.1/25 HalfReuse: ' '/11 HalfReuse: 'e'/12 }".Accum s.Any) <"/37 Tile{ AsIs: e./27 }" () e.Text"/39 Tile{ HalfReuse: '>'/13 HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[29], context[30], " \'", 2);
          refalrts::alloc_open_call(vm, context[31]);
          refalrts::alloc_name(vm, context[32], functions[efunc_EscapeChar]);
          refalrts::alloc_ident(vm, context[33], identifiers[ident_Any]);
          refalrts::alloc_close_call(vm, context[34]);
          refalrts::alloc_chars(vm, context[35], context[36], "\' e.Text", 8);
          refalrts::alloc_chars(vm, context[37], context[38], ".Accum s.Any) <", 15);
          refalrts::alloc_chars(vm, context[39], context[40], " () e.Text", 10);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '=');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[9], functions[efunc_Fetch]);
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_char(context[20], '(');
          refalrts::reinit_char(context[11], ' ');
          refalrts::reinit_char(context[12], 'e');
          refalrts::reinit_char(context[13], '>');
          refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[31] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[13];
          res = refalrts::splice_evar( res, context[39], context[40] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          res = refalrts::splice_evar( res, context[37], context[38] );
          res = refalrts::splice_evar( res, context[0], context[12] );
          res = refalrts::splice_evar( res, context[29], context[36] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 (/10 # Flush/20 e.1/25 )/11 (/12 e./27 )/13 )/8 >/1
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[23];
        context[28] = context[24];
        // closed e.1 as range 25
        // closed e. as range 27
        //DEBUG: s.Head: 9
        //DEBUG: e.1: 25
        //DEBUG: e.: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } ' '/29 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/7 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/20 }" e.Text ="/30 </32 & Fetch/33" ("/34 Tile{ AsIs: e.1/25 }" e.Accum \'"/36 </38 & EscapeChar/39 s.Head/9/40 >/41"\')"/42 Tile{ HalfReuse: ' '/11 HalfReuse: '<'/12 AsIs: e./27 HalfReuse: ' '/13 HalfReuse: '('/8 HalfReuse: ')'/1 }" e.Text>"/44 & WriteAlternative-Aux$2\1/46 >/47 Tile{ ]] }
        refalrts::alloc_char(vm, context[29], ' ');
        refalrts::alloc_chars(vm, context[30], context[31], " e.Text =", 9);
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[33], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[34], context[35], " (", 2);
        refalrts::alloc_chars(vm, context[36], context[37], " e.Accum \'", 10);
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::alloc_name(vm, context[39], functions[efunc_EscapeChar]);
        refalrts::copy_stvar(vm, context[40], context[9]);
        refalrts::alloc_close_call(vm, context[41]);
        refalrts::alloc_chars(vm, context[42], context[43], "\')", 2);
        refalrts::alloc_chars(vm, context[44], context[45], " e.Text>", 8);
        refalrts::alloc_name(vm, context[46], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[47]);
        refalrts::reinit_char(context[0], '\'');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_EscapeChar]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_char(context[20], '\'');
        refalrts::reinit_char(context[11], ' ');
        refalrts::reinit_char(context[12], '<');
        refalrts::reinit_char(context[13], ' ');
        refalrts::reinit_char(context[8], '(');
        refalrts::reinit_char(context[1], ')');
        refalrts::push_stack( vm, context[47] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[38] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[44], context[47] );
        res = refalrts::splice_evar( res, context[11], context[1] );
        res = refalrts::splice_evar( res, context[36], context[43] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[30], context[35] );
        res = refalrts::splice_evar( res, context[0], context[20] );
        res = refalrts::splice_elem( res, context[29] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 (/10 # FlushError/20 e.1/21 )/11 (/12 e./23 )/13 )/8 >/1
      context[21] = context[18];
      context[22] = context[19];
      context[23] = context[16];
      context[24] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_FlushError], context[20] ) )
        continue;
      // closed e.1 as range 21
      // closed e. as range 23
      //DEBUG: s.Head: 9
      //DEBUG: e.1: 21
      //DEBUG: e.: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } ' '/25 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/7 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/20 }" e.Text ="/26 </28 & Fetch/29" (TokenError \'"/30 Tile{ AsIs: e.1/21 }"\')"/32 Tile{ HalfReuse: ' '/11 HalfReuse: '<'/12 AsIs: e./23 HalfReuse: ' '/13 HalfReuse: '('/8 HalfReuse: ')'/1 }" e.Text>"/34 & WriteAlternative-Aux$2\1/36 >/37 Tile{ ]] }
      refalrts::alloc_char(vm, context[25], ' ');
      refalrts::alloc_chars(vm, context[26], context[27], " e.Text =", 9);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[29], functions[efunc_Fetch]);
      refalrts::alloc_chars(vm, context[30], context[31], " (TokenError \'", 14);
      refalrts::alloc_chars(vm, context[32], context[33], "\')", 2);
      refalrts::alloc_chars(vm, context[34], context[35], " e.Text>", 8);
      refalrts::alloc_name(vm, context[36], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[37]);
      refalrts::reinit_char(context[0], '\'');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_EscapeChar]);
      refalrts::reinit_close_call(context[10]);
      refalrts::reinit_char(context[20], '\'');
      refalrts::reinit_char(context[11], ' ');
      refalrts::reinit_char(context[12], '<');
      refalrts::reinit_char(context[13], ' ');
      refalrts::reinit_char(context[8], '(');
      refalrts::reinit_char(context[1], ')');
      refalrts::push_stack( vm, context[37] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[34], context[37] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[26], context[31] );
      res = refalrts::splice_evar( res, context[0], context[20] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 t.Flush/10 (/12 e./16 )/13 )/8 >/1
    context[16] = context[14];
    context[17] = context[15];
    // closed e. as range 16
    //DEBUG: t.Flush: 10
    //DEBUG: s.Head: 9
    //DEBUG: e.: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }" \'"/18 </20 & EscapeChar/21 s.Head/9/22 >/23"\' e.Text ="/24 </26 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/7 AsIs: s.Head/9 AsIs: t.Flush/10 HalfReuse: >/12 }" <"/27 Tile{ AsIs: e./16 }" () e.Text"/29 Tile{ HalfReuse: '>'/13 HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[18], context[19], " \'", 2);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_EscapeChar]);
    refalrts::copy_stvar(vm, context[22], context[9]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_chars(vm, context[24], context[25], "\' e.Text =", 10);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_chars(vm, context[27], context[28], " <", 2);
    refalrts::alloc_chars(vm, context[29], context[30], " () e.Text", 10);
    refalrts::reinit_name(context[0], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_Flush_D3]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_char(context[13], '>');
    refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[18], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & WriteAlternative-Aux/4 (/7 s.new4/9 # Unnamed/10 t.new5/12 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[10] ) )
      continue;
    do {
      // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 # Unnamed/10 # Finitive/12 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
        continue;
      //DEBUG: s.Head: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } ' '/14 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/7 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/12 HalfReuse: </8 HalfReuse: & NextState-L*2/1 } # Finitive/15 >/16 </17 & Fetch/18 & WriteAlternative-Aux$2\1/19 >/20 Tile{ ]] }
      refalrts::alloc_char(vm, context[14], ' ');
      refalrts::alloc_ident(vm, context[15], identifiers[ident_Finitive]);
      refalrts::alloc_close_call(vm, context[16]);
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_Fetch]);
      refalrts::alloc_name(vm, context[19], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::reinit_char(context[0], '\'');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_EscapeChar]);
      refalrts::reinit_close_call(context[10]);
      refalrts::reinit_char(context[12], '\'');
      refalrts::reinit_open_call(context[8]);
      refalrts::reinit_name(context[1], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[20] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 # Unnamed/10 (/12 e./14 )/13 )/8 >/1
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
        continue;
      // closed e. as range 14
      //DEBUG: s.Head: 9
      //DEBUG: e.: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </7 } & EscapeChar/16 Tile{ AsIs: s.Head/9 } >/17 '\''/18 </19 Tile{ HalfReuse: & NextState-L*2/10 AsIs: (/12 AsIs: e./14 AsIs: )/13 HalfReuse: >/8 HalfReuse: </1 } & Fetch/20" <"/21 e./14/23" () e.Text>"/25 & WriteAlternative-Aux$2\1/27 >/28 Tile{ ]] }
      refalrts::alloc_name(vm, context[16], functions[efunc_EscapeChar]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::alloc_char(vm, context[18], '\'');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_Fetch]);
      refalrts::alloc_chars(vm, context[21], context[22], " <", 2);
      refalrts::copy_evar(vm, context[23], context[24], context[14], context[15]);
      refalrts::alloc_chars(vm, context[25], context[26], " () e.Text>", 11);
      refalrts::alloc_name(vm, context[27], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], '\'');
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[10], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_call(context[1]);
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[28] );
      res = refalrts::splice_evar( res, context[10], context[1] );
      res = refalrts::splice_evar( res, context[17], context[19] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 # Unnamed/10 t.NextState/12 )/8 >/1
    //DEBUG: t.NextState: 12
    //DEBUG: s.Head: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } ' '/14 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/7 AsIs: s.Head/9 HalfReuse: >/10 } '\''/15 </16 & NextState-L*2/17 t.NextState/12/18 >/20 </21 & Fetch/22 </23 & NextState-R*2/24 Tile{ AsIs: t.NextState/12 } >/25 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[14], ' ');
    refalrts::alloc_char(vm, context[15], '\'');
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_NextStatem_L_D2]);
    refalrts::copy_evar(vm, context[18], context[19], context[12], context[13]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_NextStatem_R_D2]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::reinit_char(context[0], '\'');
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_EscapeChar]);
    refalrts::reinit_close_call(context[10]);
    refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[15], context[24] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & WriteAlternative-Aux/4 (/7 s.new4/9 (/10 s.new5/16 e.new6/14 )/11 t.new7/12 )/8 >/1
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
      continue;
    // closed e.new6 as range 14
    do {
      // </0 & WriteAlternative-Aux/4 (/7 s.new8/9 (/10 # Flush/16 e.new9/17 )/11 t.new10/12 )/8 >/1
      context[17] = context[14];
      context[18] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_Flush], context[16] ) )
        continue;
      // closed e.new9 as range 17
      do {
        // </0 & WriteAlternative-Aux/4 (/7 # Empty/9 (/10 # Flush/16 e.new11/19 )/11 t.new12/12 )/8 >/1
        context[19] = context[17];
        context[20] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_Empty], context[9] ) )
          continue;
        // closed e.new11 as range 19
        do {
          // </0 & WriteAlternative-Aux/4 (/7 # Empty/9 (/10 # Flush/16 e.0/21 )/11 # Finitive/12 )/8 >/1
          context[21] = context[19];
          context[22] = context[20];
          if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
            continue;
          // closed e.0 as range 21
          //DEBUG: e.0: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ }" \'"/23 </25 & EscapeChar/26 # Empty/27 >/28 '\''/29 </30 & NextState-L*2/31 Tile{ HalfReuse: # Finitive/0 HalfReuse: >/4 HalfReuse: </7 HalfReuse: & Fetch/9 HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.0/21 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/8 HalfReuse: 'A'/1 }"ccum)"/32 & WriteAlternative-Aux$2\1/34 >/35 Tile{ ]] }
          refalrts::alloc_chars(vm, context[23], context[24], " \'", 2);
          refalrts::alloc_open_call(vm, context[25]);
          refalrts::alloc_name(vm, context[26], functions[efunc_EscapeChar]);
          refalrts::alloc_ident(vm, context[27], identifiers[ident_Empty]);
          refalrts::alloc_close_call(vm, context[28]);
          refalrts::alloc_char(vm, context[29], '\'');
          refalrts::alloc_open_call(vm, context[30]);
          refalrts::alloc_name(vm, context[31], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::alloc_chars(vm, context[32], context[33], "ccum)", 5);
          refalrts::alloc_name(vm, context[34], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[35]);
          refalrts::reinit_ident(context[0], identifiers[ident_Finitive]);
          refalrts::reinit_close_call(context[4]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[9], functions[efunc_Fetch]);
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_char(context[16], '(');
          refalrts::reinit_char(context[11], ' ');
          refalrts::reinit_char(context[12], 'e');
          refalrts::reinit_char(context[8], '.');
          refalrts::reinit_char(context[1], 'A');
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[25] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[32], context[35] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[23], context[31] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative-Aux/4 (/7 # Empty/9 (/10 # Flush/16 e.0/21 )/11 (/12 e./23 )/13 )/8 >/1
          context[21] = context[19];
          context[22] = context[20];
          context[23] = 0;
          context[24] = 0;
          if( ! refalrts::brackets_term( context[23], context[24], context[12] ) )
            continue;
          // closed e.0 as range 21
          // closed e. as range 23
          //DEBUG: e.0: 21
          //DEBUG: e.: 23

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </7 HalfReuse: & EscapeChar/9 HalfReuse: # Empty/10 HalfReuse: >/16 } '\''/25 </26 Tile{ HalfReuse: & NextState-L*2/11 AsIs: (/12 AsIs: e./23 AsIs: )/13 HalfReuse: >/8 HalfReuse: </1 } & Fetch/27" ("/28 Tile{ AsIs: e.0/21 }" e.Accum) <"/30 e./23/32" () e.Text>"/34 & WriteAlternative-Aux$2\1/36 >/37 Tile{ ]] }
          refalrts::alloc_char(vm, context[25], '\'');
          refalrts::alloc_open_call(vm, context[26]);
          refalrts::alloc_name(vm, context[27], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[28], context[29], " (", 2);
          refalrts::alloc_chars(vm, context[30], context[31], " e.Accum) <", 11);
          refalrts::copy_evar(vm, context[32], context[33], context[23], context[24]);
          refalrts::alloc_chars(vm, context[34], context[35], " () e.Text>", 11);
          refalrts::alloc_name(vm, context[36], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[37]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '\'');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[9], functions[efunc_EscapeChar]);
          refalrts::reinit_ident(context[10], identifiers[ident_Empty]);
          refalrts::reinit_close_call(context[16]);
          refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[8]);
          refalrts::reinit_open_call(context[1]);
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[26] );
          refalrts::link_brackets( context[12], context[13] );
          refalrts::push_stack( vm, context[16] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[30], context[37] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[27], context[29] );
          res = refalrts::splice_evar( res, context[11], context[1] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative-Aux/4 (/7 # Empty/9 (/10 # Flush/16 e.0/21 )/11 t.NextState/12 )/8 >/1
        context[21] = context[19];
        context[22] = context[20];
        // closed e.0 as range 21
        //DEBUG: t.NextState: 12
        //DEBUG: e.0: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </7 HalfReuse: & EscapeChar/9 HalfReuse: # Empty/10 HalfReuse: >/16 } '\''/23 </24 & NextState-L*2/25 t.NextState/12/26 >/28 </29 & Fetch/30" ("/31 Tile{ AsIs: e.0/21 }" e.Accum)"/33 </35 Tile{ HalfReuse: & NextState-R*2/11 AsIs: t.NextState/12 } >/36 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[23], '\'');
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::copy_evar(vm, context[26], context[27], context[12], context[13]);
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::alloc_name(vm, context[30], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[31], context[32], " (", 2);
        refalrts::alloc_chars(vm, context[33], context[34], " e.Accum)", 9);
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '\'');
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[9], functions[efunc_EscapeChar]);
        refalrts::reinit_ident(context[10], identifiers[ident_Empty]);
        refalrts::reinit_close_call(context[16]);
        refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_R_D2]);
        refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_evar( res, context[11], context[13] );
        res = refalrts::splice_evar( res, context[33], context[35] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[23], context[32] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 # Flush/16 e.new11/19 )/11 t.new12/12 )/8 >/1
        context[19] = context[17];
        context[20] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_Any], context[9] ) )
          continue;
        // closed e.new11 as range 19
        do {
          // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 # Flush/16 e.0/21 )/11 # Finitive/12 )/8 >/1
          context[21] = context[19];
          context[22] = context[20];
          if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
            continue;
          // closed e.0 as range 21
          //DEBUG: e.0: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ }" \'"/23 </25 & EscapeChar/26 # Any/27 >/28 '\''/29 </30 & NextState-L*2/31 Tile{ HalfReuse: # Finitive/0 HalfReuse: >/4 HalfReuse: </7 HalfReuse: & Fetch/9 HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.0/21 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/8 HalfReuse: 'A'/1 }"ccum s.Any)"/32 & WriteAlternative-Aux$2\1/34 >/35 Tile{ ]] }
          refalrts::alloc_chars(vm, context[23], context[24], " \'", 2);
          refalrts::alloc_open_call(vm, context[25]);
          refalrts::alloc_name(vm, context[26], functions[efunc_EscapeChar]);
          refalrts::alloc_ident(vm, context[27], identifiers[ident_Any]);
          refalrts::alloc_close_call(vm, context[28]);
          refalrts::alloc_char(vm, context[29], '\'');
          refalrts::alloc_open_call(vm, context[30]);
          refalrts::alloc_name(vm, context[31], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::alloc_chars(vm, context[32], context[33], "ccum s.Any)", 11);
          refalrts::alloc_name(vm, context[34], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[35]);
          refalrts::reinit_ident(context[0], identifiers[ident_Finitive]);
          refalrts::reinit_close_call(context[4]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[9], functions[efunc_Fetch]);
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_char(context[16], '(');
          refalrts::reinit_char(context[11], ' ');
          refalrts::reinit_char(context[12], 'e');
          refalrts::reinit_char(context[8], '.');
          refalrts::reinit_char(context[1], 'A');
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[25] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[32], context[35] );
          res = refalrts::splice_evar( res, context[0], context[1] );
          res = refalrts::splice_evar( res, context[23], context[31] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 # Flush/16 e.0/21 )/11 (/12 e./23 )/13 )/8 >/1
          context[21] = context[19];
          context[22] = context[20];
          context[23] = 0;
          context[24] = 0;
          if( ! refalrts::brackets_term( context[23], context[24], context[12] ) )
            continue;
          // closed e.0 as range 21
          // closed e. as range 23
          //DEBUG: e.0: 21
          //DEBUG: e.: 23

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </7 HalfReuse: & EscapeChar/9 HalfReuse: # Any/10 HalfReuse: >/16 } '\''/25 </26 Tile{ HalfReuse: & NextState-L*2/11 AsIs: (/12 AsIs: e./23 AsIs: )/13 HalfReuse: >/8 HalfReuse: </1 } & Fetch/27" ("/28 Tile{ AsIs: e.0/21 }" e.Accum s.Any) <"/30 e./23/32" () e.Text>"/34 & WriteAlternative-Aux$2\1/36 >/37 Tile{ ]] }
          refalrts::alloc_char(vm, context[25], '\'');
          refalrts::alloc_open_call(vm, context[26]);
          refalrts::alloc_name(vm, context[27], functions[efunc_Fetch]);
          refalrts::alloc_chars(vm, context[28], context[29], " (", 2);
          refalrts::alloc_chars(vm, context[30], context[31], " e.Accum s.Any) <", 17);
          refalrts::copy_evar(vm, context[32], context[33], context[23], context[24]);
          refalrts::alloc_chars(vm, context[34], context[35], " () e.Text>", 11);
          refalrts::alloc_name(vm, context[36], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
          refalrts::alloc_close_call(vm, context[37]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '\'');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[9], functions[efunc_EscapeChar]);
          refalrts::reinit_ident(context[10], identifiers[ident_Any]);
          refalrts::reinit_close_call(context[16]);
          refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
          refalrts::reinit_close_call(context[8]);
          refalrts::reinit_open_call(context[1]);
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[26] );
          refalrts::link_brackets( context[12], context[13] );
          refalrts::push_stack( vm, context[16] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[30], context[37] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[27], context[29] );
          res = refalrts::splice_evar( res, context[11], context[1] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & WriteAlternative-Aux/4 (/7 # Any/9 (/10 # Flush/16 e.0/21 )/11 t.NextState/12 )/8 >/1
        context[21] = context[19];
        context[22] = context[20];
        // closed e.0 as range 21
        //DEBUG: t.NextState: 12
        //DEBUG: e.0: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </7 HalfReuse: & EscapeChar/9 HalfReuse: # Any/10 HalfReuse: >/16 } '\''/23 </24 & NextState-L*2/25 t.NextState/12/26 >/28 </29 & Fetch/30" ("/31 Tile{ AsIs: e.0/21 }" e.Accum s.Any)"/33 </35 Tile{ HalfReuse: & NextState-R*2/11 AsIs: t.NextState/12 } >/36 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[23], '\'');
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::copy_evar(vm, context[26], context[27], context[12], context[13]);
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::alloc_name(vm, context[30], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[31], context[32], " (", 2);
        refalrts::alloc_chars(vm, context[33], context[34], " e.Accum s.Any)", 15);
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '\'');
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[9], functions[efunc_EscapeChar]);
        refalrts::reinit_ident(context[10], identifiers[ident_Any]);
        refalrts::reinit_close_call(context[16]);
        refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_R_D2]);
        refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_evar( res, context[11], context[13] );
        res = refalrts::splice_evar( res, context[33], context[35] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[23], context[32] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 (/10 # Flush/16 e.0/19 )/11 # Finitive/12 )/8 >/1
        context[19] = context[17];
        context[20] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
          continue;
        // closed e.0 as range 19
        //DEBUG: s.Head: 9
        //DEBUG: e.0: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </7 } & EscapeChar/21 Tile{ AsIs: s.Head/9 } >/22 '\''/23 </24 & NextState-L*2/25 # Finitive/26 >/27 </28 & Fetch/29 Tile{ HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.0/19 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/8 HalfReuse: 'A'/1 }"ccum \'"/30 </32 & EscapeChar/33 s.Head/9/34 >/35"\')"/36 & WriteAlternative-Aux$2\1/38 >/39 Tile{ ]] }
        refalrts::alloc_name(vm, context[21], functions[efunc_EscapeChar]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_char(vm, context[23], '\'');
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::alloc_ident(vm, context[26], identifiers[ident_Finitive]);
        refalrts::alloc_close_call(vm, context[27]);
        refalrts::alloc_open_call(vm, context[28]);
        refalrts::alloc_name(vm, context[29], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[30], context[31], "ccum \'", 6);
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[33], functions[efunc_EscapeChar]);
        refalrts::copy_stvar(vm, context[34], context[9]);
        refalrts::alloc_close_call(vm, context[35]);
        refalrts::alloc_chars(vm, context[36], context[37], "\')", 2);
        refalrts::alloc_name(vm, context[38], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[39]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '\'');
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_char(context[10], ' ');
        refalrts::reinit_char(context[16], '(');
        refalrts::reinit_char(context[11], ' ');
        refalrts::reinit_char(context[12], 'e');
        refalrts::reinit_char(context[8], '.');
        refalrts::reinit_char(context[1], 'A');
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[30], context[39] );
        res = refalrts::splice_evar( res, context[10], context[1] );
        res = refalrts::splice_evar( res, context[22], context[29] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_elem( res, context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 (/10 # Flush/16 e.0/19 )/11 (/12 e./21 )/13 )/8 >/1
        context[19] = context[17];
        context[20] = context[18];
        context[21] = 0;
        context[22] = 0;
        if( ! refalrts::brackets_term( context[21], context[22], context[12] ) )
          continue;
        // closed e.0 as range 19
        // closed e. as range 21
        //DEBUG: s.Head: 9
        //DEBUG: e.0: 19
        //DEBUG: e.: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } ' '/23 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/7 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/16 } </24 Tile{ HalfReuse: & NextState-L*2/11 AsIs: (/12 AsIs: e./21 AsIs: )/13 HalfReuse: >/8 HalfReuse: </1 } & Fetch/25" ("/26 Tile{ AsIs: e.0/19 }" e.Accum \'"/28 </30 & EscapeChar/31 s.Head/9/32 >/33"\') <"/34 e./21/36" () e.Text>"/38 & WriteAlternative-Aux$2\1/40 >/41 Tile{ ]] }
        refalrts::alloc_char(vm, context[23], ' ');
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_Fetch]);
        refalrts::alloc_chars(vm, context[26], context[27], " (", 2);
        refalrts::alloc_chars(vm, context[28], context[29], " e.Accum \'", 10);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_EscapeChar]);
        refalrts::copy_stvar(vm, context[32], context[9]);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::alloc_chars(vm, context[34], context[35], "\') <", 4);
        refalrts::copy_evar(vm, context[36], context[37], context[21], context[22]);
        refalrts::alloc_chars(vm, context[38], context[39], " () e.Text>", 11);
        refalrts::alloc_name(vm, context[40], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
        refalrts::alloc_close_call(vm, context[41]);
        refalrts::reinit_char(context[0], '\'');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_EscapeChar]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_char(context[16], '\'');
        refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
        refalrts::reinit_close_call(context[8]);
        refalrts::reinit_open_call(context[1]);
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[24] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[28], context[41] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[25], context[27] );
        res = refalrts::splice_evar( res, context[11], context[1] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_evar( res, context[0], context[16] );
        res = refalrts::splice_elem( res, context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 (/10 # Flush/16 e.0/19 )/11 t.NextState/12 )/8 >/1
      context[19] = context[17];
      context[20] = context[18];
      // closed e.0 as range 19
      //DEBUG: t.NextState: 12
      //DEBUG: s.Head: 9
      //DEBUG: e.0: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } ' '/21 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/7 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/16 } </22 & NextState-L*2/23 t.NextState/12/24 >/26 </27 & Fetch/28" ("/29 Tile{ AsIs: e.0/19 }" e.Accum \'"/31 </33 & EscapeChar/34 s.Head/9/35 >/36"\')"/37 </39 Tile{ HalfReuse: & NextState-R*2/11 AsIs: t.NextState/12 } >/40 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[21], ' ');
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::copy_evar(vm, context[24], context[25], context[12], context[13]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_Fetch]);
      refalrts::alloc_chars(vm, context[29], context[30], " (", 2);
      refalrts::alloc_chars(vm, context[31], context[32], " e.Accum \'", 10);
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_EscapeChar]);
      refalrts::copy_stvar(vm, context[35], context[9]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::alloc_chars(vm, context[37], context[38], "\')", 2);
      refalrts::alloc_open_call(vm, context[39]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::reinit_char(context[0], '\'');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_EscapeChar]);
      refalrts::reinit_close_call(context[10]);
      refalrts::reinit_char(context[16], '\'');
      refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_R_D2]);
      refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[11], context[13] );
      res = refalrts::splice_evar( res, context[31], context[39] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[22], context[30] );
      res = refalrts::splice_evar( res, context[0], context[16] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WriteAlternative-Aux/4 (/7 s.new8/9 (/10 # FlushError/16 e.new9/17 )/11 t.new10/12 )/8 >/1
    context[17] = context[14];
    context[18] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_FlushError], context[16] ) )
      continue;
    // closed e.new9 as range 17
    do {
      // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 (/10 # FlushError/16 e.0/19 )/11 # Finitive/12 )/8 >/1
      context[19] = context[17];
      context[20] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
        continue;
      // closed e.0 as range 19
      //DEBUG: s.Head: 9
      //DEBUG: e.0: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </7 } & EscapeChar/21 Tile{ AsIs: s.Head/9 } >/22 '\''/23 </24 & NextState-L*2/25 # Finitive/26 >/27 </28 & Fetch/29" (TokenError"/30 Tile{ HalfReuse: ' '/10 HalfReuse: '\''/16 AsIs: e.0/19 HalfReuse: '\''/11 HalfReuse: ')'/12 HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[21], functions[efunc_EscapeChar]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::alloc_char(vm, context[23], '\'');
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::alloc_ident(vm, context[26], identifiers[ident_Finitive]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[29], functions[efunc_Fetch]);
      refalrts::alloc_chars(vm, context[30], context[31], " (TokenError", 12);
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], '\'');
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_char(context[10], ' ');
      refalrts::reinit_char(context[16], '\'');
      refalrts::reinit_char(context[11], '\'');
      refalrts::reinit_char(context[12], ')');
      refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[22], context[31] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 (/10 # FlushError/16 e.0/19 )/11 (/12 e./21 )/13 )/8 >/1
      context[19] = context[17];
      context[20] = context[18];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[12] ) )
        continue;
      // closed e.0 as range 19
      // closed e. as range 21
      //DEBUG: s.Head: 9
      //DEBUG: e.0: 19
      //DEBUG: e.: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } ' '/23 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/7 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/16 } </24 Tile{ HalfReuse: & NextState-L*2/11 AsIs: (/12 AsIs: e./21 AsIs: )/13 HalfReuse: >/8 HalfReuse: </1 } & Fetch/25" (TokenError \'"/26 Tile{ AsIs: e.0/19 }"\') <"/28 e./21/30" () e.Text>"/32 & WriteAlternative-Aux$2\1/34 >/35 Tile{ ]] }
      refalrts::alloc_char(vm, context[23], ' ');
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_Fetch]);
      refalrts::alloc_chars(vm, context[26], context[27], " (TokenError \'", 14);
      refalrts::alloc_chars(vm, context[28], context[29], "\') <", 4);
      refalrts::copy_evar(vm, context[30], context[31], context[21], context[22]);
      refalrts::alloc_chars(vm, context[32], context[33], " () e.Text>", 11);
      refalrts::alloc_name(vm, context[34], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::reinit_char(context[0], '\'');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_EscapeChar]);
      refalrts::reinit_close_call(context[10]);
      refalrts::reinit_char(context[16], '\'');
      refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_L_D2]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_call(context[1]);
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[28], context[35] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[25], context[27] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[0], context[16] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 (/10 # FlushError/16 e.0/19 )/11 t.NextState/12 )/8 >/1
    context[19] = context[17];
    context[20] = context[18];
    // closed e.0 as range 19
    //DEBUG: t.NextState: 12
    //DEBUG: s.Head: 9
    //DEBUG: e.0: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } ' '/21 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/7 AsIs: s.Head/9 HalfReuse: >/10 HalfReuse: '\''/16 } </22 & NextState-L*2/23 t.NextState/12/24 >/26 </27 & Fetch/28" (TokenError \'"/29 Tile{ AsIs: e.0/19 }"\')"/31 </33 Tile{ HalfReuse: & NextState-R*2/11 AsIs: t.NextState/12 } >/34 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[21], ' ');
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_NextStatem_L_D2]);
    refalrts::copy_evar(vm, context[24], context[25], context[12], context[13]);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_Fetch]);
    refalrts::alloc_chars(vm, context[29], context[30], " (TokenError \'", 14);
    refalrts::alloc_chars(vm, context[31], context[32], "\')", 2);
    refalrts::alloc_open_call(vm, context[33]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::reinit_char(context[0], '\'');
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_EscapeChar]);
    refalrts::reinit_close_call(context[10]);
    refalrts::reinit_char(context[16], '\'');
    refalrts::reinit_name(context[11], functions[efunc_gen_NextStatem_R_D2]);
    refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[22], context[30] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 t.Flush/10 # Finitive/12 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Finitive], context[12] ) )
      continue;
    //DEBUG: t.Flush: 10
    //DEBUG: s.Head: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }" \'"/14 </16 & EscapeChar/17 s.Head/9/18 >/19 '\''/20 </21 & NextState-L*2/22 # Finitive/23 >/24 </25 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/7 AsIs: s.Head/9 AsIs: t.Flush/10 HalfReuse: >/12 HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[14], context[15], " \'", 2);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_EscapeChar]);
    refalrts::copy_stvar(vm, context[18], context[9]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_char(vm, context[20], '\'');
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_NextStatem_L_D2]);
    refalrts::alloc_ident(vm, context[23], identifiers[ident_Finitive]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::reinit_name(context[0], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_Flush_D3]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[14], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 t.Flush/10 (/12 e./14 )/13 )/8 >/1
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
      continue;
    // closed e. as range 14
    //DEBUG: t.Flush: 10
    //DEBUG: s.Head: 9
    //DEBUG: e.: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }" \'"/16 </18 & EscapeChar/19 s.Head/9/20 >/21 '\''/22 </23 & NextState-L*2/24 Tile{ AsIs: (/12 AsIs: e./14 AsIs: )/13 HalfReuse: >/8 HalfReuse: </1 } Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/7 AsIs: s.Head/9 AsIs: t.Flush/10 } >/25" <"/26 e./14/28" () e.Text>"/30 & WriteAlternative-Aux$2\1/32 >/33 Tile{ ]] }
    refalrts::alloc_chars(vm, context[16], context[17], " \'", 2);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_EscapeChar]);
    refalrts::copy_stvar(vm, context[20], context[9]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_char(vm, context[22], '\'');
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_NextStatem_L_D2]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_chars(vm, context[26], context[27], " <", 2);
    refalrts::copy_evar(vm, context[28], context[29], context[14], context[15]);
    refalrts::alloc_chars(vm, context[30], context[31], " () e.Text>", 11);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_open_call(context[1]);
    refalrts::reinit_name(context[0], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_Flush_D3]);
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[33] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[16], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & WriteAlternative-Aux/4 (/7 s.Head/9 t.Flush/10 t.NextState/12 )/8 >/1
  //DEBUG: t.Flush: 10
  //DEBUG: t.NextState: 12
  //DEBUG: s.Head: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }" \'"/14 </16 & EscapeChar/17 s.Head/9/18 >/19 '\''/20 </21 & NextState-L*2/22 t.NextState/12/23 >/25 </26 Tile{ HalfReuse: & Fetch/0 HalfReuse: </4 HalfReuse: & Flush*3/7 AsIs: s.Head/9 AsIs: t.Flush/10 } >/27 </28 & NextState-R*2/29 Tile{ AsIs: t.NextState/12 } >/30 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[14], context[15], " \'", 2);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_EscapeChar]);
  refalrts::copy_stvar(vm, context[18], context[9]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_char(vm, context[20], '\'');
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_gen_NextStatem_L_D2]);
  refalrts::copy_evar(vm, context[23], context[24], context[12], context[13]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_gen_NextStatem_R_D2]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::reinit_name(context[0], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Flush_D3]);
  refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[27], context[29] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[14], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WriteAlternativem_Aux("WriteAlternative-Aux", COOKIE1_, COOKIE2_, func_WriteAlternativem_Aux);


static refalrts::FnResult func_Head(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Head/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Head/4 s.new1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Head/4 # Empty/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Empty], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Head/4 # Empty/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Head/4 # Any/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Any], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 's'/4 HalfReuse: '.'/5 HalfReuse: 'A'/1 }"ny"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "ny", 2);
    refalrts::reinit_char(context[0], ' ');
    refalrts::reinit_char(context[4], 's');
    refalrts::reinit_char(context[5], '.');
    refalrts::reinit_char(context[1], 'A');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Head/4 s.Other/5 >/1
  //DEBUG: s.Other: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }" \'"/6 Tile{ AsIs: </0 Reuse: & EscapeChar/4 AsIs: s.Other/5 AsIs: >/1 } '\''/8 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], " \'", 2);
  refalrts::alloc_char(vm, context[8], '\'');
  refalrts::update_name(context[4], functions[efunc_EscapeChar]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Head("Head", COOKIE1_, COOKIE2_, func_Head);


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
  // </0 & Flush/4 s.new1/5 t.new2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Flush/4 s.Head/5 # Unnamed/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[6] ) )
      continue;
    //DEBUG: s.Head: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Flush/4 s.Head/5 # Unnamed/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Flush/4 s.new3/5 (/6 s.new4/10 e.new5/8 )/7 >/1
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new5 as range 8
  do {
    // </0 & Flush/4 s.new6/5 (/6 # Flush/10 e.new7/11 )/7 >/1
    context[11] = context[8];
    context[12] = context[9];
    if( ! refalrts::ident_term( identifiers[ident_Flush], context[10] ) )
      continue;
    // closed e.new7 as range 11
    do {
      // </0 & Flush/4 # Empty/5 (/6 # Flush/10 e.FlushName/13 )/7 >/1
      context[13] = context[11];
      context[14] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Empty], context[5] ) )
        continue;
      // closed e.FlushName as range 13
      //DEBUG: e.FlushName: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/6 HalfReuse: '('/10 AsIs: e.FlushName/13 HalfReuse: ' '/7 HalfReuse: 'e'/1 } Tile{ HalfReuse: '.'/0 HalfReuse: 'A'/4 HalfReuse: 'c'/5 }"cum)"/15 Tile{ ]] }
      refalrts::alloc_chars(vm, context[15], context[16], "cum)", 4);
      refalrts::reinit_char(context[6], ' ');
      refalrts::reinit_char(context[10], '(');
      refalrts::reinit_char(context[7], ' ');
      refalrts::reinit_char(context[1], 'e');
      refalrts::reinit_char(context[0], '.');
      refalrts::reinit_char(context[4], 'A');
      refalrts::reinit_char(context[5], 'c');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[6], context[1] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flush/4 # Any/5 (/6 # Flush/10 e.FlushName/13 )/7 >/1
      context[13] = context[11];
      context[14] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Any], context[5] ) )
        continue;
      // closed e.FlushName as range 13
      //DEBUG: e.FlushName: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/6 HalfReuse: '('/10 AsIs: e.FlushName/13 HalfReuse: ' '/7 HalfReuse: 'e'/1 } Tile{ HalfReuse: '.'/0 HalfReuse: 'A'/4 HalfReuse: 'c'/5 }"cum s.Any)"/15 Tile{ ]] }
      refalrts::alloc_chars(vm, context[15], context[16], "cum s.Any)", 10);
      refalrts::reinit_char(context[6], ' ');
      refalrts::reinit_char(context[10], '(');
      refalrts::reinit_char(context[7], ' ');
      refalrts::reinit_char(context[1], 'e');
      refalrts::reinit_char(context[0], '.');
      refalrts::reinit_char(context[4], 'A');
      refalrts::reinit_char(context[5], 'c');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[6], context[1] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Flush/4 s.Head/5 (/6 # Flush/10 e.FlushName/13 )/7 >/1
    context[13] = context[11];
    context[14] = context[12];
    // closed e.FlushName as range 13
    //DEBUG: s.Head: 5
    //DEBUG: e.FlushName: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }" ("/15 Tile{ AsIs: e.FlushName/13 }" e"/17 Tile{ HalfReuse: '.'/7 }"Accum \'"/19 Tile{ AsIs: </0 Reuse: & EscapeChar/4 AsIs: s.Head/5 HalfReuse: >/6 HalfReuse: '\''/10 } Tile{ HalfReuse: ')'/1 ]] }
    refalrts::alloc_chars(vm, context[15], context[16], " (", 2);
    refalrts::alloc_chars(vm, context[17], context[18], " e", 2);
    refalrts::alloc_chars(vm, context[19], context[20], "Accum \'", 7);
    refalrts::reinit_char(context[7], '.');
    refalrts::update_name(context[4], functions[efunc_EscapeChar]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_char(context[10], '\'');
    refalrts::reinit_char(context[1], ')');
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Flush/4 s.Head/5 (/6 # FlushError/10 e.Message/8 )/7 >/1
  if( ! refalrts::ident_term( identifiers[ident_FlushError], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message as range 8
  //DEBUG: s.Head: 5
  //DEBUG: e.Message: 8

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Head/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '('/4 }"TokenError"/11 Tile{ HalfReuse: ' '/6 HalfReuse: '\''/10 AsIs: e.Message/8 HalfReuse: '\''/7 HalfReuse: ')'/1 ]] }
  refalrts::alloc_chars(vm, context[11], context[12], "TokenError", 10);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_char(context[4], '(');
  refalrts::reinit_char(context[6], ' ');
  refalrts::reinit_char(context[10], '\'');
  refalrts::reinit_char(context[7], '\'');
  refalrts::reinit_char(context[1], ')');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flush("Flush", COOKIE1_, COOKIE2_, func_Flush);


static refalrts::FnResult func_NextStatem_L(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & NextState-L/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & NextState-L/4 t.new1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & NextState-L/4 # Finitive/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Finitive], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NextState-L/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/5 HalfReuse: '='/1 ]] }
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], '=');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NextState-L/4 (/5 e.NextStateName/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextStateName as range 7
  //DEBUG: e.NextStateName: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.NextStateName/7 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'e'/4 HalfReuse: '.'/5 }"Text"/9 Tile{ HalfReuse: ' '/6 HalfReuse: '='/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "Text", 4);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_char(context[4], 'e');
  refalrts::reinit_char(context[5], '.');
  refalrts::reinit_char(context[6], ' ');
  refalrts::reinit_char(context[1], '=');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NextStatem_L("NextState-L", COOKIE1_, COOKIE2_, func_NextStatem_L);


static refalrts::FnResult func_NextStatem_R(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & NextState-R/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & NextState-R/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & NextState-R/4 # Finitive/5 e.NextStateAccum/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Finitive], context[5] ) )
      continue;
    // closed e.NextStateAccum as range 7
    //DEBUG: e.NextStateAccum: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NextState-R/4 # Finitive/5 e.NextStateAccum/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NextState-R/4 (/5 e.NextStateName/7 )/6 e.NextStateAccum/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextStateName as range 7
  // closed e.NextStateAccum as range 2
  //DEBUG: e.NextStateName: 7
  //DEBUG: e.NextStateAccum: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: '<'/5 AsIs: e.NextStateName/7 HalfReuse: ' '/6 } '('/9 Tile{ AsIs: e.NextStateAccum/2 } Tile{ HalfReuse: ')'/0 }" e.Text"/10 Tile{ HalfReuse: '>'/1 ]] }
  refalrts::alloc_char(vm, context[9], '(');
  refalrts::alloc_chars(vm, context[10], context[11], " e.Text", 7);
  refalrts::reinit_char(context[4], ' ');
  refalrts::reinit_char(context[5], '<');
  refalrts::reinit_char(context[6], ' ');
  refalrts::reinit_char(context[0], ')');
  refalrts::reinit_char(context[1], '>');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[0] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[4], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NextStatem_R("NextState-R", COOKIE1_, COOKIE2_, func_NextStatem_R);


static refalrts::FnResult func_gen_NextStatem_R_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & NextState-R@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & NextState-R@1/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & NextState-R@1/4 # Finitive/5 e.Call/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Finitive], context[5] ) )
      continue;
    // closed e.Call as range 7
    //DEBUG: e.Call: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NextState-R@1/4 # Finitive/5 e.Call/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NextState-R@1/4 (/5 e.NextStateName/9 )/6 e.Call/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    // closed e.NextStateName as range 9
    // closed e.Call as range 7
    //DEBUG: e.NextStateName: 9
    //DEBUG: e.Call: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: '<'/5 AsIs: e.NextStateName/9 HalfReuse: ' '/6 }"(e"/11 Tile{ HalfReuse: '.'/0 }"Accum \'"/13 Tile{ AsIs: e.Call/7 }"\') e.Text"/15 Tile{ HalfReuse: '>'/1 ]] }
    refalrts::alloc_chars(vm, context[11], context[12], "(e", 2);
    refalrts::alloc_chars(vm, context[13], context[14], "Accum \'", 7);
    refalrts::alloc_chars(vm, context[15], context[16], "\') e.Text", 9);
    refalrts::reinit_char(context[4], ' ');
    refalrts::reinit_char(context[5], '<');
    refalrts::reinit_char(context[6], ' ');
    refalrts::reinit_char(context[0], '.');
    refalrts::reinit_char(context[1], '>');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[0] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NextState-R@1/4 t.dyn0/5 e.Call/2 >/1
  // closed e.Call as range 2
  //DEBUG: t.dyn0: 5
  //DEBUG: e.Call: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NextState-R@0/4 AsIs: t.dyn0/5 }"e.Accum \'"/7 Tile{ AsIs: e.Call/2 } '\''/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[7], context[8], "e.Accum \'", 9);
  refalrts::alloc_char(vm, context[9], '\'');
  refalrts::update_name(context[4], functions[efunc_gen_NextStatem_R_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NextStatem_R_Z1("NextState-R@1", COOKIE1_, COOKIE2_, func_gen_NextStatem_R_Z1);


//End of file
