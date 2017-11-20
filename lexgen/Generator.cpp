// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_Any = refalrts::ident_from_static("Any");
const refalrts::RefalIdentifier ident_Empty = refalrts::ident_from_static("Empty");
const refalrts::RefalIdentifier ident_Finitive = refalrts::ident_from_static("Finitive");
const refalrts::RefalIdentifier ident_Flush = refalrts::ident_from_static("Flush");
const refalrts::RefalIdentifier ident_FlushError = refalrts::ident_from_static("FlushError");
const refalrts::RefalIdentifier ident_None = refalrts::ident_from_static("None");
const refalrts::RefalIdentifier ident_Unnamed = refalrts::ident_from_static("Unnamed");
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_EscapeChar("EscapeChar", 0U, 0U);
static refalrts::ExternalReference ref_GenerateFromDFA("GenerateFromDFA", 0U, 0U);
static refalrts::ExternalReference ref_WriteFunction("WriteFunction", 3016463358U, 4232659796U);
static refalrts::ExternalReference ref_WriteAlternative("WriteAlternative", 3016463358U, 4232659796U);
static refalrts::ExternalReference ref_gen_WriteAlternativem_Aux_S2L1("WriteAlternative-Aux$2\\1", 3016463358U, 4232659796U);
static refalrts::ExternalReference ref_WriteAlternativem_Aux("WriteAlternative-Aux", 3016463358U, 4232659796U);
static refalrts::ExternalReference ref_Head("Head", 3016463358U, 4232659796U);
static refalrts::ExternalReference ref_Flush("Flush", 3016463358U, 4232659796U);
static refalrts::ExternalReference ref_NextStatem_L("NextState-L", 3016463358U, 4232659796U);
static refalrts::ExternalReference ref_NextStatem_R("NextState-R", 3016463358U, 4232659796U);

static refalrts::FnResult func_GenerateFromDFA(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & GenerateFromDFA/4 e.Rules#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Rules#1 as range 2
  //DEBUG: e.Rules#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & WriteFunction/4 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_WriteFunction.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenerateFromDFA("GenerateFromDFA", 0U, 0U, func_GenerateFromDFA);

static refalrts::FnResult func_WriteFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & WriteFunction/4 (/7 (/11 e.NextRule#1/9 )/12 e.Alternatives#1/5 )/8 >/1
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
  // closed e.NextRule#1 as range 9
  // closed e.Alternatives#1 as range 5
  //DEBUG: e.NextRule#1: 9
  //DEBUG: e.Alternatives#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: )/7 AsIs: (/11 AsIs: e.NextRule#1/9 HalfReuse: ' '/12 } '{'/13 )/14 Tile{ AsIs: </0 } & Map/15 & WriteAlternative/16 Tile{ AsIs: e.Alternatives#1/5 } >/17 (/18 Tile{ HalfReuse: '}'/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_char( context[13], '{' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_WriteAlternative.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_char( context[12], ' ' );
  refalrts::reinit_char( context[8], '}' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[18], context[1] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[4], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WriteFunction("WriteFunction", 3016463358U, 4232659796U, func_WriteFunction);

static refalrts::FnResult func_WriteAlternative(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & WriteAlternative/4 t.Alternative#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Alternative#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/7"  (e.Accum)"/8 Tile{ AsIs: </0 Reuse: & WriteAlternative-Aux/4 AsIs: t.Alternative#1/5 AsIs: >/1 } ';'/10 )/11 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "  (e.Accum)", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_WriteAlternativem_Aux.ref.function );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WriteAlternative("WriteAlternative", 3016463358U, 4232659796U, func_WriteAlternative);

static refalrts::FnResult func_gen_WriteAlternativem_Aux_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & WriteAlternative-Aux$2\1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    //
    // </0 & WriteAlternative-Aux$2\1/4 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & WriteAlternative-Aux$2\1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 ]] }
    refalrts::reinit_char( context[1], ' ' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & WriteAlternative-Aux$2\1/4 e.ResultNotEmpty#2/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.ResultNotEmpty#2 as range 5
  //DEBUG: e.ResultNotEmpty#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & WriteAlternative-Aux$2\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ResultNotEmpty#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_WriteAlternativem_Aux_S2L1("WriteAlternative-Aux$2\\1", 3016463358U, 4232659796U, func_gen_WriteAlternativem_Aux_S2L1);

static refalrts::FnResult func_WriteAlternativem_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  //FAST GEN: ( s.$ t.$ t.$ )
  //GLOBAL GEN: ( s.$ t.$ t.$ )
  // </0 & WriteAlternative-Aux/4 (/7 s.idxB#0/9 t.idxBV#0/10 t.idxBVV#0/12 )/8 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( s.idx # None t.idx )
    // </0 & WriteAlternative-Aux/4 (/7 s.Head#1/9 # None/10 t.NextState#1/12 )/8 >/1
    if( ! refalrts::ident_term(  ident_None, context[10] ) )
      continue;
    //DEBUG: t.NextState#1: 12
    //DEBUG: s.Head#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Head/4 HalfReuse: s.Head1 #9/7 } >/14 </15 & NextState-L/16 t.NextState#1/12/17 >/19 </20 Tile{ HalfReuse: & NextState-R/10 AsIs: t.NextState#1/12 }"e.Accum"/21 </23 & Head/24 Tile{ AsIs: s.Head#1/9 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ref_NextStatem_L.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[17], context[18], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], "e.Accum", 7 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], ref_Head.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Head.ref.function );
    refalrts::reinit_svar( context[7], context[9] );
    refalrts::reinit_name( context[10], ref_NextStatem_R.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[14], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx t.idx t.idx )
  // </0 & WriteAlternative-Aux/4 (/7 s.Head#1/9 t.Flush#1/10 t.NextState#1/12 )/8 >/1
  //DEBUG: t.Flush#1: 10
  //DEBUG: t.NextState#1: 12
  //DEBUG: s.Head#1: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Head/4 HalfReuse: s.Head1 #9/7 } >/14 </15 & NextState-L/16 t.NextState#1/12/17 >/19 </20 & Fetch/21 </22 & Flush/23 Tile{ AsIs: s.Head#1/9 AsIs: t.Flush#1/10 } >/24 </25 & NextState-R/26 Tile{ AsIs: t.NextState#1/12 } >/27 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_NextStatem_L.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[17], context[18], context[12], context[13]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], ref_Flush.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], ref_NextStatem_R.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Head.ref.function );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_name( context[8], ref_gen_WriteAlternativem_Aux_S2L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[14], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WriteAlternativem_Aux("WriteAlternative-Aux", 3016463358U, 4232659796U, func_WriteAlternativem_Aux);

static refalrts::FnResult func_Head(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & Head/4 s.idx#0/5 >/1
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
    // # Empty
    // </0 & Head/4 # Empty/5 >/1
    if( ! refalrts::ident_term(  ident_Empty, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Head/4 # Empty/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Any
    // </0 & Head/4 # Any/5 >/1
    if( ! refalrts::ident_term(  ident_Any, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 's'/4 HalfReuse: '.'/5 HalfReuse: 'A'/1 }"ny"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "ny", 2 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], 's' );
    refalrts::reinit_char( context[5], '.' );
    refalrts::reinit_char( context[1], 'A' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx
  // </0 & Head/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }" \'"/6 Tile{ AsIs: </0 Reuse: & EscapeChar/4 AsIs: s.Other#1/5 AsIs: >/1 } '\''/8 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], " \'", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], '\'' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_EscapeChar.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Head("Head", 3016463358U, 4232659796U, func_Head);

static refalrts::FnResult func_Flush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: s.$ t.$
  //GLOBAL GEN: s.$ t.$
  // </0 & Flush/4 s.idx#0/5 t.idxV#0/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx # Unnamed
    // </0 & Flush/4 s.Head#1/5 # Unnamed/6 >/1
    if( ! refalrts::ident_term(  ident_Unnamed, context[6] ) )
      continue;
    //DEBUG: s.Head#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Flush/4 s.Head#1/5 # Unnamed/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # Flush e.idx )
    // </0 & Flush/4 s.Head#1/5 (/6 # Flush/10 e.FlushName#1/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  ident_Flush, context[8], context[9] );
    if( ! context[10] )
      continue;
    // closed e.FlushName#1 as range 8
    //DEBUG: s.Head#1: 5
    //DEBUG: e.FlushName#1: 8

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '('/1 } Tile{ AsIs: e.FlushName#1/8 }" e.Accum"/11 Tile{ AsIs: </0 Reuse: & Head/4 AsIs: s.Head#1/5 HalfReuse: >/6 HalfReuse: ')'/10 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[11], context[12], " e.Accum", 8 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[1], '(' );
    refalrts::update_name( context[4], ref_Head.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_char( context[10], ')' );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( # FlushError e.idx )
  // </0 & Flush/4 s.Head#1/5 (/6 # FlushError/10 e.Message#1/8 )/7 >/1
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::ident_left(  ident_FlushError, context[8], context[9] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 8
  //DEBUG: s.Head#1: 5
  //DEBUG: e.Message#1: 8

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Head#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '('/4 }"#TokenError"/11 Tile{ HalfReuse: ' '/6 HalfReuse: '\''/10 AsIs: e.Message#1/8 HalfReuse: '\''/7 HalfReuse: ')'/1 ]] }
  if( ! refalrts::alloc_chars( context[11], context[12], "#TokenError", 11 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], ' ' );
  refalrts::reinit_char( context[4], '(' );
  refalrts::reinit_char( context[6], ' ' );
  refalrts::reinit_char( context[10], '\'' );
  refalrts::reinit_char( context[7], '\'' );
  refalrts::reinit_char( context[1], ')' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flush("Flush", 3016463358U, 4232659796U, func_Flush);

static refalrts::FnResult func_NextStatem_L(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & NextState-L/4 t.idx#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // # Finitive
    // </0 & NextState-L/4 # Finitive/5 >/1
    if( ! refalrts::ident_term(  ident_Finitive, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NextState-L/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/5 HalfReuse: '='/1 ]] }
    refalrts::reinit_char( context[5], ' ' );
    refalrts::reinit_char( context[1], '=' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & NextState-L/4 (/5 e.NextStateName#1/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextStateName#1 as range 7
  //DEBUG: e.NextStateName#1: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.NextStateName#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'e'/4 HalfReuse: '.'/5 }"Text"/9 Tile{ HalfReuse: ' '/6 HalfReuse: '='/1 ]] }
  if( ! refalrts::alloc_chars( context[9], context[10], "Text", 4 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], ' ' );
  refalrts::reinit_char( context[4], 'e' );
  refalrts::reinit_char( context[5], '.' );
  refalrts::reinit_char( context[6], ' ' );
  refalrts::reinit_char( context[1], '=' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NextStatem_L("NextState-L", 3016463358U, 4232659796U, func_NextStatem_L);

static refalrts::FnResult func_NextStatem_R(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & NextState-R/4 t.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # Finitive e.idx
    // </0 & NextState-R/4 # Finitive/5 e.NextStateAccum#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term(  ident_Finitive, context[5] ) )
      continue;
    // closed e.NextStateAccum#1 as range 7
    //DEBUG: e.NextStateAccum#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NextState-R/4 # Finitive/5 e.NextStateAccum#1/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & NextState-R/4 (/5 e.NextStateName#1/9 )/6 e.NextStateAccum#1/7 >/1
  context[7] = context[2];
  context[8] = context[3];
  context[9] = 0;
  context[10] = 0;
  if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextStateName#1 as range 9
  // closed e.NextStateAccum#1 as range 7
  //DEBUG: e.NextStateName#1: 9
  //DEBUG: e.NextStateAccum#1: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: '<'/5 AsIs: e.NextStateName#1/9 HalfReuse: ' '/6 } '('/11 Tile{ AsIs: e.NextStateAccum#1/7 } Tile{ HalfReuse: ')'/0 }" e.Text"/12 Tile{ HalfReuse: '>'/1 ]] }
  if( ! refalrts::alloc_char( context[11], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], " e.Text", 7 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[4], ' ' );
  refalrts::reinit_char( context[5], '<' );
  refalrts::reinit_char( context[6], ' ' );
  refalrts::reinit_char( context[0], ')' );
  refalrts::reinit_char( context[1], '>' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[4], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NextStatem_R("NextState-R", 3016463358U, 4232659796U, func_NextStatem_R);


//End of file
