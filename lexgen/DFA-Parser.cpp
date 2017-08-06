// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_Chars = refalrts::ident_from_static("Chars");
const refalrts::RefalIdentifier ident_Empty = refalrts::ident_from_static("Empty");
const refalrts::RefalIdentifier ident_Finitive = refalrts::ident_from_static("Finitive");
const refalrts::RefalIdentifier ident_Flush = refalrts::ident_from_static("Flush");
const refalrts::RefalIdentifier ident_FlushError = refalrts::ident_from_static("FlushError");
const refalrts::RefalIdentifier ident_None = refalrts::ident_from_static("None");
const refalrts::RefalIdentifier ident_Sentence = refalrts::ident_from_static("Sentence");
const refalrts::RefalIdentifier ident_Set = refalrts::ident_from_static("Set");
const refalrts::RefalIdentifier ident_TAlternative = refalrts::ident_from_static("TAlternative");
const refalrts::RefalIdentifier ident_TDot = refalrts::ident_from_static("TDot");
const refalrts::RefalIdentifier ident_TEOF = refalrts::ident_from_static("TEOF");
const refalrts::RefalIdentifier ident_TEquals = refalrts::ident_from_static("TEquals");
const refalrts::RefalIdentifier ident_TErrorFlush = refalrts::ident_from_static("TErrorFlush");
const refalrts::RefalIdentifier ident_TFlush = refalrts::ident_from_static("TFlush");
const refalrts::RefalIdentifier ident_TLiteral = refalrts::ident_from_static("TLiteral");
const refalrts::RefalIdentifier ident_TName = refalrts::ident_from_static("TName");
const refalrts::RefalIdentifier ident_TNamedFlush = refalrts::ident_from_static("TNamedFlush");
const refalrts::RefalIdentifier ident_TSetName = refalrts::ident_from_static("TSetName");
const refalrts::RefalIdentifier ident_Unnamed = refalrts::ident_from_static("Unnamed");
static refalrts::ExternalReference ref_ErrorAt("ErrorAt", 0U, 0U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Seq("Seq", 0U, 0U);
static refalrts::ExternalReference ref_DFAm_TextFromToken("DFA-TextFromToken", 0U, 0U);
static refalrts::ExternalReference ref_DFAm_Parse("DFA-Parse", 0U, 0U);
static refalrts::ExternalReference ref_ParseElements("ParseElements", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_gen_ParseSetDescr_S1L1("ParseSetDescr$1\\1", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_ParseSetDescr("ParseSetDescr", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_ExtractSets("ExtractSets", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_gen_ParseSentence_S1L1("ParseSentence$1\\1", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_ParseSentence("ParseSentence", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_gen_ExtractAlternatives_L1("ExtractAlternatives\\1", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_gen_ExtractAlternatives_L2("ExtractAlternatives\\2", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_gen_ExtractAlternatives_L3("ExtractAlternatives\\3", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_gen_ExtractAlternatives_L4("ExtractAlternatives\\4", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_gen_ExtractAlternatives_L5("ExtractAlternatives\\5", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_gen_ExtractAlternatives_L6("ExtractAlternatives\\6", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_ExtractAlternatives("ExtractAlternatives", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_ExtractAlternativesm_Head("ExtractAlternatives-Head", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_ExtractAlternativesm_Flush("ExtractAlternatives-Flush", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_ExtractAlternativesm_NextState("ExtractAlternatives-NextState", 452973408U, 3382509061U);
static refalrts::ExternalReference ref_UnexpectedToken("UnexpectedToken", 452973408U, 3382509061U);

static refalrts::FnResult func_DFAm_Parse(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & DFA-Parse/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ( # TEOF t.idx )
    // </0 & DFA-Parse/4 (/7 # TEOF/9 t.SrcPos#1/10 )/8 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[15], context[16] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  ident_TEOF, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: t.SrcPos#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/10 } 'I'/12 Tile{ HalfReuse: 'l'/7 HalfReuse: 'l'/9 }"egal empty descriptio"/13 Tile{ HalfReuse: 'n'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[12], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], "egal empty descriptio", 21 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ErrorAt.ref.function );
    refalrts::reinit_char( context[7], 'l' );
    refalrts::reinit_char( context[9], 'l' );
    refalrts::reinit_char( context[8], 'n' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & DFA-Parse/4 e.Tokens#1/2 >/1
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & ParseElements/6 (/7 (/8"Any"/9 )/11 )/12 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_ParseElements.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "Any", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
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

static refalrts::FnResult func_ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  //FAST GEN: ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & ParseElements/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 e.idxTTV#0/2 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTV#0 as range 2
  do {
    // ( e.idx ) ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.SetNames-B#1/20 (/24 e.Name#1/26 )/25 e.SetNames-E#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TSetName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  ident_TSetName, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.RuleNames#1 as range 9
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 15
    context[32] = context[5];
    context[33] = context[6];
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop();
    do {
      context[34] = context[32];
      context[35] = context[33];
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[34], context[35] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::repeated_evar_left( context[26], context[27], context[15], context[16], context[22], context[23] ) )
        continue;
      if( ! refalrts::empty_seq( context[22], context[23] ) )
        continue;
      // closed e.SetNames-E#1 as range 34(5)
      //DEBUG: e.RuleNames#1: 9
      //DEBUG: e.Tail#1: 2
      //DEBUG: t.SrcPos#1: 18
      //DEBUG: e.Name#1: 15
      //DEBUG: e.SetNames-B#1: 20
      //DEBUG: e.SetNames-E#1: 5

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames-B#1/20 {REMOVED TILE} e.SetNames-E#1/34(5) {REMOVED TILE} e.RuleNames#1/9 {REMOVED TILE} {REMOVED TILE} e.Name#1/15 {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/18 } Tile{ HalfReuse: 'S'/8 HalfReuse: 'e'/11 } Tile{ HalfReuse: 't'/12 HalfReuse: ' '/13 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'a'/7 } Tile{ HalfReuse: 'm'/14 }"e "/28 Tile{ HalfReuse: ':'/24 AsIs: e.Name#1/26 HalfReuse: ':'/25 }" redeclared"/30 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_chars( context[28], context[29], "e ", 2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[30], context[31], " redeclared", 11 ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_ErrorAt.ref.function );
      refalrts::reinit_char( context[8], 'S' );
      refalrts::reinit_char( context[11], 'e' );
      refalrts::reinit_char( context[12], 't' );
      refalrts::reinit_char( context[13], ' ' );
      refalrts::reinit_char( context[17], 'n' );
      refalrts::reinit_char( context[7], 'a' );
      refalrts::reinit_char( context[14], 'm' );
      refalrts::reinit_char( context[24], ':' );
      refalrts::reinit_char( context[25], ':' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[32], context[33] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TSetName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  ident_TSetName, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.RuleNames#1 as range 9
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 15
    //DEBUG: e.SetNames#1: 5
    //DEBUG: e.RuleNames#1: 9
    //DEBUG: e.Tail#1: 2
    //DEBUG: t.SrcPos#1: 18
    //DEBUG: e.Name#1: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr/4 AsIs: (/7 AsIs: e.SetNames#1/5 HalfReuse: (/8 } Tile{ AsIs: e.Name#1/15 } Tile{ HalfReuse: )/17 } )/20 Tile{ AsIs: (/11 AsIs: e.RuleNames#1/9 AsIs: )/12 } Tile{ AsIs: t.SrcPos#1/18 } Tile{ AsIs: (/13 } e.Name#1/15/21 Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[15], context[16]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ParseSetDescr.ref.function );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::link_brackets( context[8], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( # TName t.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames-B#1/20 (/24 e.Name#1/26 )/25 e.RuleNames-E#1/9 )/12 (/13 # TName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  ident_TName, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 15
    context[32] = context[9];
    context[33] = context[10];
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop();
    do {
      context[34] = context[32];
      context[35] = context[33];
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[34], context[35] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::repeated_evar_left( context[26], context[27], context[15], context[16], context[22], context[23] ) )
        continue;
      if( ! refalrts::empty_seq( context[22], context[23] ) )
        continue;
      // closed e.RuleNames-E#1 as range 34(9)
      //DEBUG: e.SetNames#1: 5
      //DEBUG: e.Tail#1: 2
      //DEBUG: t.SrcPos#1: 18
      //DEBUG: e.Name#1: 15
      //DEBUG: e.RuleNames-B#1: 20
      //DEBUG: e.RuleNames-E#1: 9

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/5 {REMOVED TILE} e.RuleNames-B#1/20 {REMOVED TILE} e.RuleNames-E#1/34(9) {REMOVED TILE} {REMOVED TILE} e.Name#1/15 {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/18 } Tile{ HalfReuse: 'N'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 'm'/7 } 'e'/28 Tile{ HalfReuse: ' '/24 AsIs: e.Name#1/26 HalfReuse: ' '/25 } Tile{ HalfReuse: 'r'/12 HalfReuse: 'e'/13 HalfReuse: 'd'/17 } Tile{ HalfReuse: 'e'/14 }"clared"/29 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( context[28], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[29], context[30], "clared", 6 ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_ErrorAt.ref.function );
      refalrts::reinit_char( context[8], 'N' );
      refalrts::reinit_char( context[11], 'a' );
      refalrts::reinit_char( context[7], 'm' );
      refalrts::reinit_char( context[24], ' ' );
      refalrts::reinit_char( context[25], ' ' );
      refalrts::reinit_char( context[12], 'r' );
      refalrts::reinit_char( context[13], 'e' );
      refalrts::reinit_char( context[17], 'd' );
      refalrts::reinit_char( context[14], 'e' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[32], context[33] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( # TName t.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  ident_TName, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.RuleNames#1 as range 9
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 15
    //DEBUG: e.SetNames#1: 5
    //DEBUG: e.RuleNames#1: 9
    //DEBUG: e.Tail#1: 2
    //DEBUG: t.SrcPos#1: 18
    //DEBUG: e.Name#1: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence/4 AsIs: (/7 AsIs: e.SetNames#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/9 HalfReuse: (/12 } e.Name#1/15/20 Tile{ HalfReuse: )/13 HalfReuse: )/17 AsIs: t.SrcPos#1/18 } (/22 Tile{ AsIs: e.Name#1/15 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if (! refalrts::copy_evar(context[20], context[21], context[15], context[16]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ParseSentence.ref.function );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::reinit_close_bracket( context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[22], context[14] );
    refalrts::link_brackets( context[11], context[17] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[13], context[19] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( # TEOF t.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TEOF/17 t.SrcPos#1/18 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  ident_TEOF, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.RuleNames#1 as range 9
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: e.SetNames#1: 5
    //DEBUG: e.RuleNames#1: 9
    //DEBUG: e.Tail#1: 2
    //DEBUG: t.SrcPos#1: 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TEOF/17 t.SrcPos#1/18 )/14 e.Tail#1/2 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) t.idx e.idx
  // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.Unexpected#1/13 e.Tail#1/2 >/1
  // closed e.SetNames#1 as range 5
  // closed e.RuleNames#1 as range 9
  // closed e.Tail#1 as range 2
  //DEBUG: t.Unexpected#1: 13
  //DEBUG: e.SetNames#1: 5
  //DEBUG: e.RuleNames#1: 9
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/13 } Tile{ HalfReuse: 'n'/7 } Tile{ HalfReuse: 'a'/8 HalfReuse: 'm'/11 } Tile{ HalfReuse: 'e'/12 }" or set name"/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[15], context[16], " or set name", 12 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[7], 'n' );
  refalrts::reinit_char( context[8], 'a' );
  refalrts::reinit_char( context[11], 'm' );
  refalrts::reinit_char( context[12], 'e' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseElements("ParseElements", 452973408U, 3382509061U, func_ParseElements);

static refalrts::FnResult func_gen_ParseSetDescr_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  //FAST GEN: ( e.$ ) t.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: ( e.$ ) t.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & ParseSetDescr$1\1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 (/13 e.idxTVB#0/11 )/14 (/17 e.idxTVTB#0/15 )/18 (/21 e.idxTVTTB#0/19 )/22 t.idxTVTTT#0/23 e.idxTVTTTV#0/2 >/1
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
  // closed e.idxTVB#0 as range 11
  // closed e.idxTVTB#0 as range 15
  // closed e.idxTVTTB#0 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVTTTV#0 as range 2
  do {
    // ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( ) ( # TDot t.idx ) e.idx
    // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/5 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 )/22 (/23 # TDot/27 t.SrcPos#2/28 )/24 e.Tail#2/2 >/1
    context[25] = 0;
    context[26] = 0;
    if( ! refalrts::brackets_term( context[25], context[26], context[23] ) )
      continue;
    context[27] = refalrts::ident_left(  ident_TDot, context[25], context[26] );
    if( ! context[27] )
      continue;
    context[32] = context[19];
    context[33] = context[20];
    if( ! refalrts::empty_seq( context[32], context[33] ) )
      continue;
    // closed e.Name#1 as range 5
    // closed e.SetNames#1 as range 11
    // closed e.RuleNames#1 as range 15
    // closed e.Tail#2 as range 2
    context[29] = refalrts::tvar_left( context[28], context[25], context[26] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    //DEBUG: t.SetNamePos#1: 9
    //DEBUG: e.Name#1: 5
    //DEBUG: e.SetNames#1: 11
    //DEBUG: e.RuleNames#1: 15
    //DEBUG: e.Tail#2: 2
    //DEBUG: t.SrcPos#2: 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SetNamePos#1/9 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#2/28 HalfReuse: 'S'/24 } Tile{ HalfReuse: 'e'/13 } Tile{ HalfReuse: 't'/14 HalfReuse: ' '/17 } Tile{ HalfReuse: ':'/8 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: ':'/18 HalfReuse: ' '/21 HalfReuse: 'n'/22 HalfReuse: 'o'/23 HalfReuse: 't'/27 } Tile{ HalfReuse: ' '/7 }"have content"/30 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[30], context[31], "have content", 12 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ErrorAt.ref.function );
    refalrts::reinit_char( context[24], 'S' );
    refalrts::reinit_char( context[13], 'e' );
    refalrts::reinit_char( context[14], 't' );
    refalrts::reinit_char( context[17], ' ' );
    refalrts::reinit_char( context[8], ':' );
    refalrts::reinit_char( context[18], ':' );
    refalrts::reinit_char( context[21], ' ' );
    refalrts::reinit_char( context[22], 'n' );
    refalrts::reinit_char( context[23], 'o' );
    refalrts::reinit_char( context[27], 't' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[18], context[27] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[28], context[24] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TDot t.idx ) e.idx
    // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/5 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 (/23 # TDot/27 t.SrcPos#2/28 )/24 e.Tail#2/2 >/1
    context[25] = 0;
    context[26] = 0;
    if( ! refalrts::brackets_term( context[25], context[26], context[23] ) )
      continue;
    context[27] = refalrts::ident_left(  ident_TDot, context[25], context[26] );
    if( ! context[27] )
      continue;
    // closed e.Name#1 as range 5
    // closed e.SetNames#1 as range 11
    // closed e.RuleNames#1 as range 15
    // closed e.Body#2 as range 19
    // closed e.Tail#2 as range 2
    context[29] = refalrts::tvar_left( context[28], context[25], context[26] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    //DEBUG: t.SetNamePos#1: 9
    //DEBUG: e.Name#1: 5
    //DEBUG: e.SetNames#1: 11
    //DEBUG: e.RuleNames#1: 15
    //DEBUG: e.Body#2: 19
    //DEBUG: e.Tail#2: 2
    //DEBUG: t.SrcPos#2: 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/28 )/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Set/4 } Tile{ AsIs: t.SetNamePos#1/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: )/21 AsIs: e.Body#2/19 AsIs: )/22 HalfReuse: </23 HalfReuse: & ParseElements/27 } Tile{ AsIs: (/13 AsIs: e.SetNames#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.RuleNames#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Set );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::reinit_open_call( context[23] );
    refalrts::reinit_name( context[27], ref_ParseElements.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[0], context[22] );
    refalrts::link_brackets( context[7], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[13], context[18] );
    res = refalrts::splice_evar( res, context[21], context[27] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Name#1/5 {REMOVED TILE} t.SetNamePos#1/9 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} e.Body#2/19 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#2/23 } Tile{ HalfReuse: 'd'/14 HalfReuse: 'o'/17 } Tile{ HalfReuse: 't'/18 HalfReuse: ' '/21 } Tile{ HalfReuse: 'a'/22 } Tile{ HalfReuse: 't'/13 } Tile{ HalfReuse: ' '/8 } Tile{ HalfReuse: 'e'/7 }"nd of set"/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[25], context[26], "nd of set", 9 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[14], 'd' );
  refalrts::reinit_char( context[17], 'o' );
  refalrts::reinit_char( context[18], 't' );
  refalrts::reinit_char( context[21], ' ' );
  refalrts::reinit_char( context[22], 'a' );
  refalrts::reinit_char( context[13], 't' );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_char( context[7], 'e' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSetDescr_S1L1("ParseSetDescr$1\\1", 452973408U, 3382509061U, func_gen_ParseSetDescr_S1L1);

static refalrts::FnResult func_ParseSetDescr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ e.$
  // </0 & ParseSetDescr/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 (/17 e.idxTTVB#0/15 )/18 t.idxTTVT#0/19 e.idxTTVTV#0/2 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.idxTTVB#0 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTVTV#0 as range 2
  do {
    // ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( # TEquals t.idx ) e.idx
    // </0 & ParseSetDescr/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 )/18 (/19 # TEquals/23 t.SrcPos#1/24 )/20 e.Tail#1/2 >/1
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[19] ) )
      continue;
    context[23] = refalrts::ident_left(  ident_TEquals, context[21], context[22] );
    if( ! context[23] )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.RuleNames#1 as range 9
    // closed e.Name#1 as range 15
    // closed e.Tail#1 as range 2
    context[25] = refalrts::tvar_left( context[24], context[21], context[22] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    //DEBUG: t.SetNamePos#1: 13
    //DEBUG: e.SetNames#1: 5
    //DEBUG: e.RuleNames#1: 9
    //DEBUG: e.Name#1: 15
    //DEBUG: e.Tail#1: 2
    //DEBUG: t.SrcPos#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </26 & ExtractSets/27 Tile{ AsIs: (/19 } Tile{ AsIs: )/20 AsIs: e.Tail#1/2 AsIs: >/1 } </28 Tile{ HalfReuse: & @create_closure@/23 } & ParseSetDescr$1\1/29 Tile{ AsIs: (/17 AsIs: e.Name#1/15 AsIs: )/18 } Tile{ AsIs: t.SetNamePos#1/13 } Tile{ AsIs: (/7 AsIs: e.SetNames#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/9 AsIs: )/12 } >/30 >/31 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], ref_ExtractSets.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], ref_gen_ParseSetDescr_S1L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Fetch.ref.function );
    refalrts::reinit_name( context[23], refalrts::create_closure );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[28] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[26] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx e.idx
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/7 e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/19 } Tile{ HalfReuse: '\"'/8 HalfReuse: '='/11 } Tile{ HalfReuse: '\"'/18 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::reinit_char( context[11], '=' );
  refalrts::reinit_char( context[18], '\"' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseSetDescr("ParseSetDescr", 452973408U, 3382509061U, func_ParseSetDescr);

static refalrts::FnResult func_ExtractSets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & ExtractSets/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) ( # TLiteral t.idx e.idx ) e.idx
    // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 (/11 # TLiteral/13 t.SrcPos#1/14 e.Content#1/9 )/12 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[16], context[17] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_TLiteral, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 16(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Content#1 as range 9
    //DEBUG: e.Found#1: 5
    //DEBUG: e.Tail#1: 2
    //DEBUG: t.SrcPos#1: 14
    //DEBUG: e.Content#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/14 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 HalfReuse: # Chars/11 } Tile{ AsIs: e.Content#1/9 } Tile{ HalfReuse: )/13 } Tile{ AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[11], ident_Chars );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
    // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 (/11 # TSetName/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[16], context[17] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_TSetName, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 16(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Name#1 as range 9
    //DEBUG: e.Found#1: 5
    //DEBUG: e.Tail#1: 2
    //DEBUG: t.SrcPos#1: 14
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 HalfReuse: # Set/11 } Tile{ AsIs: t.SrcPos#1/14 } Tile{ AsIs: e.Name#1/9 } Tile{ HalfReuse: )/13 } Tile{ AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[11], ident_Set );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 e.OtherTail#1/2 >/1
  // closed e.Found#1 as range 5
  // closed e.OtherTail#1 as range 2
  //DEBUG: e.Found#1: 5
  //DEBUG: e.OtherTail#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractSets/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ AsIs: e.OtherTail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractSets("ExtractSets", 452973408U, 3382509061U, func_ExtractSets);

static refalrts::FnResult func_gen_ParseSentence_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  //FAST GEN: t.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: t.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & ParseSentence$1\1/4 t.idx#0/5 (/9 e.idxVB#0/7 )/10 (/13 e.idxVTB#0/11 )/14 (/17 e.idxVTTB#0/15 )/18 (/21 e.idxVTTTB#0/19 )/22 t.idxVTTTT#0/23 e.idxVTTTTV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  // closed e.idxVB#0 as range 7
  // closed e.idxVTB#0 as range 11
  // closed e.idxVTTB#0 as range 15
  // closed e.idxVTTTB#0 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTTTTV#0 as range 2
  do {
    // t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( # TDot t.idx ) e.idx
    // </0 & ParseSentence$1\1/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 (/23 # TDot/27 t.SrcPos#2/28 )/24 e.Tail#2/2 >/1
    context[25] = 0;
    context[26] = 0;
    if( ! refalrts::brackets_term( context[25], context[26], context[23] ) )
      continue;
    context[27] = refalrts::ident_left(  ident_TDot, context[25], context[26] );
    if( ! context[27] )
      continue;
    // closed e.Name#1 as range 7
    // closed e.SetNames#1 as range 11
    // closed e.RuleNames#1 as range 15
    // closed e.Body#2 as range 19
    // closed e.Tail#2 as range 2
    context[29] = refalrts::tvar_left( context[28], context[25], context[26] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    //DEBUG: t.SentNamePos#1: 5
    //DEBUG: e.Name#1: 7
    //DEBUG: e.SetNames#1: 11
    //DEBUG: e.RuleNames#1: 15
    //DEBUG: e.Body#2: 19
    //DEBUG: e.Tail#2: 2
    //DEBUG: t.SrcPos#2: 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TDot/27 t.SrcPos#2/28 )/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Sentence/4 AsIs: t.SentNamePos#1/5 AsIs: (/9 } Tile{ AsIs: e.Name#1/7 } Tile{ HalfReuse: )/21 AsIs: e.Body#2/19 AsIs: )/22 HalfReuse: </23 } Tile{ HalfReuse: & ParseElements/10 AsIs: (/13 AsIs: e.SetNames#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.RuleNames#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Sentence );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::reinit_open_call( context[23] );
    refalrts::reinit_name( context[10], ref_ParseElements.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[0], context[22] );
    refalrts::link_brackets( context[9], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[10], context[18] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} t.SentNamePos#1/5 {REMOVED TILE} e.Name#1/7 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} e.Body#2/19 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#2/23 } Tile{ HalfReuse: 'e'/14 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'd'/18 HalfReuse: ' '/21 } Tile{ HalfReuse: 'o'/10 HalfReuse: 'f'/13 } Tile{ HalfReuse: ' '/22 } Tile{ HalfReuse: 's'/9 }"entence"/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[25], context[26], "entence", 7 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[14], 'e' );
  refalrts::reinit_char( context[17], 'n' );
  refalrts::reinit_char( context[18], 'd' );
  refalrts::reinit_char( context[21], ' ' );
  refalrts::reinit_char( context[10], 'o' );
  refalrts::reinit_char( context[13], 'f' );
  refalrts::reinit_char( context[22], ' ' );
  refalrts::reinit_char( context[9], 's' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_S1L1("ParseSentence$1\\1", 452973408U, 3382509061U, func_gen_ParseSentence_S1L1);

static refalrts::FnResult func_ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ e.$
  // </0 & ParseSentence/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 (/17 e.idxTTVB#0/15 )/18 t.idxTTVT#0/19 e.idxTTVTV#0/2 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.idxTTVB#0 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTVTV#0 as range 2
  do {
    // ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( # TEquals t.idx ) e.idx
    // </0 & ParseSentence/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 )/18 (/19 # TEquals/23 t.SrcPos#1/24 )/20 e.Tail#1/2 >/1
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[19] ) )
      continue;
    context[23] = refalrts::ident_left(  ident_TEquals, context[21], context[22] );
    if( ! context[23] )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.RuleNames#1 as range 9
    // closed e.Name#1 as range 15
    // closed e.Tail#1 as range 2
    context[25] = refalrts::tvar_left( context[24], context[21], context[22] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    //DEBUG: t.SentNamePos#1: 13
    //DEBUG: e.SetNames#1: 5
    //DEBUG: e.RuleNames#1: 9
    //DEBUG: e.Name#1: 15
    //DEBUG: e.Tail#1: 2
    //DEBUG: t.SrcPos#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } & Fetch/26 </27 Tile{ HalfReuse: & ExtractAlternatives/18 AsIs: (/19 } Tile{ AsIs: )/20 AsIs: e.Tail#1/2 AsIs: >/1 } </28 Tile{ HalfReuse: & @create_closure@/23 } & ParseSentence$1\1/29 Tile{ AsIs: t.SentNamePos#1/13 AsIs: (/17 } Tile{ AsIs: e.Name#1/15 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.SetNames#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/9 AsIs: )/12 } >/30 >/31 Tile{ ]] }
    if( ! refalrts::alloc_name( context[26], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], ref_gen_ParseSentence_S1L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[18], ref_ExtractAlternatives.ref.function );
    refalrts::reinit_name( context[23], refalrts::create_closure );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[28] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[4] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[27] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[4], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[17] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx e.idx
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/7 e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/19 } Tile{ HalfReuse: '\"'/8 HalfReuse: '='/11 } Tile{ HalfReuse: '\"'/18 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::reinit_char( context[11], '=' );
  refalrts::reinit_char( context[18], '\"' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseSentence("ParseSentence", 452973408U, 3382509061U, func_ParseSentence);

static refalrts::FnResult func_gen_ExtractAlternatives_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\1/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } t.SrcPos#2/10/12 Tile{ AsIs: (/7 AsIs: s.TokType#2/9 AsIs: t.SrcPos#2/10 AsIs: e.Info#2/5 AsIs: )/8 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  if (! refalrts::copy_evar(context[12], context[13], context[10], context[11]))
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L1("ExtractAlternatives\\1", 452973408U, 3382509061U, func_gen_ExtractAlternatives_L1);

static refalrts::FnResult func_gen_ExtractAlternatives_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 t.NextToken#2/7 e.Tail#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.NextToken#2: 7
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-Head/4 } Tile{ AsIs: t.NextToken#2/7 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::update_name( context[4], ref_ExtractAlternativesm_Head.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L2("ExtractAlternatives\\2", 452973408U, 3382509061U, func_gen_ExtractAlternatives_L2);

static refalrts::FnResult func_gen_ExtractAlternatives_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ExtractAlternatives\3/4 t.BeginSrcPos#2/5 t.Head#2/7 t.NextToken#2/9 e.Tail#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.Head#2: 7
  //DEBUG: t.NextToken#2: 9
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 } Tile{ AsIs: t.NextToken#2/9 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::update_name( context[4], ref_ExtractAlternativesm_Flush.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L3("ExtractAlternatives\\3", 452973408U, 3382509061U, func_gen_ExtractAlternatives_L3);

static refalrts::FnResult func_gen_ExtractAlternatives_L4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ExtractAlternatives\4/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 t.NextToken#2/11 e.Tail#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.Head#2: 7
  //DEBUG: t.Flush#2: 9
  //DEBUG: t.NextToken#2: 11
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 AsIs: t.Flush#2/9 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 } Tile{ AsIs: t.NextToken#2/11 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::update_name( context[4], ref_ExtractAlternativesm_NextState.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L4("ExtractAlternatives\\4", 452973408U, 3382509061U, func_gen_ExtractAlternatives_L4);

static refalrts::FnResult func_gen_ExtractAlternatives_L5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: t.$ t.$ t.$ t.$ e.$
  //GLOBAL GEN: t.$ t.$ t.$ t.$ e.$
  // </0 & ExtractAlternatives\5/4 t.idx#0/5 t.idxV#0/7 t.idxVV#0/9 t.idxVVV#0/11 e.idxVVVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  // closed e.idxVVVV#0 as range 2
  do {
    // t.idx t.idx # None # Finitive e.idx
    // </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 t.Head#2/7 # None/9 # Finitive/11 e.Tail#2/2 >/1
    if( ! refalrts::ident_term(  ident_None, context[9] ) )
      continue;
    if( ! refalrts::ident_term(  ident_Finitive, context[11] ) )
      continue;
    // closed e.Tail#2 as range 2
    //DEBUG: t.BeginSrcPos#2: 5
    //DEBUG: t.Head#2: 7
    //DEBUG: e.Tail#2: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.Head#2/7 {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: t.BeginSrcPos#2/5 } 'E'/13 Tile{ HalfReuse: 'O'/9 HalfReuse: 'F'/11 }" alternative must have flush"/14 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[13], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " alternative must have flush", 28 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ErrorAt.ref.function );
    refalrts::reinit_char( context[9], 'O' );
    refalrts::reinit_char( context[11], 'F' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx t.idx t.idx t.idx e.idx
  // </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 t.NextState#2/11 e.Tail#2/2 >/1
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.Head#2: 7
  //DEBUG: t.Flush#2: 9
  //DEBUG: t.NextState#2: 11
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Head#2/7 AsIs: t.Flush#2/9 AsIs: t.NextState#2/11 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L5("ExtractAlternatives\\5", 452973408U, 3382509061U, func_gen_ExtractAlternatives_L5);

static refalrts::FnResult func_gen_ExtractAlternatives_L6(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: ( e.$ ) t.$ t.$ t.$ e.$
  //GLOBAL GEN: ( e.$ ) t.$ t.$ t.$ e.$
  // </0 & ExtractAlternatives\6/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 t.idxTVV#0/13 e.idxTVVV#0/2 >/1
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
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVVV#0 as range 2
  do {
    // ( e.idx ) t.idx t.idx t.idx ( # TAlternative t.idx ) e.idx
    // </0 & ExtractAlternatives\6/4 (/7 e.Found#1/5 )/8 t.Head#2/9 t.Flush#2/11 t.NextState#2/13 (/17 # TAlternative/19 t.SrcPos#2/20 )/18 e.Tail#2/2 >/1
    context[22] = context[2];
    context[23] = context[3];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[22], context[23] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left(  ident_TAlternative, context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#2 as range 22(2)
    context[21] = refalrts::tvar_left( context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: t.Head#2: 9
    //DEBUG: t.Flush#2: 11
    //DEBUG: t.NextState#2: 13
    //DEBUG: e.Found#1: 5
    //DEBUG: e.Tail#2: 2
    //DEBUG: t.SrcPos#2: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.SrcPos#2/20 )/18 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: t.NextState#2/13 HalfReuse: )/17 HalfReuse: )/19 } Tile{ AsIs: e.Tail#2/22(2) } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ExtractAlternatives.ref.function );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[17] );
    refalrts::reinit_close_bracket( context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[19] );
    refalrts::link_brackets( context[8], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::splice_to_freelist_open( context[19], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx t.idx t.idx e.idx
  // </0 & ExtractAlternatives\6/4 (/7 e.Found#1/5 )/8 t.Head#2/9 t.Flush#2/11 t.NextState#2/13 e.Tail#2/2 >/1
  // closed e.Found#1 as range 5
  // closed e.Tail#2 as range 2
  //DEBUG: t.Head#2: 9
  //DEBUG: t.Flush#2: 11
  //DEBUG: t.NextState#2: 13
  //DEBUG: e.Found#1: 5
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: t.NextState#2/13 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::link_brackets( context[7], context[4] );
  refalrts::link_brackets( context[8], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[14] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L6("ExtractAlternatives\\6", 452973408U, 3382509061U, func_gen_ExtractAlternatives_L6);

static refalrts::FnResult func_ExtractAlternatives(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: e.Tail#1/2 } </11 & Seq/12 & ExtractAlternatives\1/13 & ExtractAlternatives\2/14 & ExtractAlternatives\3/15 & ExtractAlternatives\4/16 & ExtractAlternatives\5/17 </18 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractAlternatives\6/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } >/19 >/20 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ref_gen_ExtractAlternatives_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_gen_ExtractAlternatives_L2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_gen_ExtractAlternatives_L3.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_gen_ExtractAlternatives_L4.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_gen_ExtractAlternatives_L5.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure );
  refalrts::update_name( context[4], ref_gen_ExtractAlternatives_L6.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternatives("ExtractAlternatives", 452973408U, 3382509061U, func_ExtractAlternatives);

static refalrts::FnResult func_ExtractAlternativesm_Head(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & ExtractAlternatives-Head/4 t.idx#0/5 e.idxV#0/2 >/1
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
    // ( # TLiteral t.idx e.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TLiteral/9 t.SrcPos#1/10 e.Content#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TLiteral, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Content#1 as range 7
    //DEBUG: t.SrcPos#1: 10
    //DEBUG: e.Content#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Head/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Chars/9 } Tile{ AsIs: e.Content#1/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], ident_Chars );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TSetName t.idx e.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TSetName/9 t.SrcPos#1/10 e.Content#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TSetName, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Content#1 as range 7
    //DEBUG: t.SrcPos#1: 10
    //DEBUG: e.Content#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Head/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Set/9 AsIs: t.SrcPos#1/10 AsIs: e.Content#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::update_ident( context[9], ident_Set );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TFlush t.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TFlush, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.SrcPos#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TFlush/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Empty );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TNamedFlush t.idx e.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TNamedFlush/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TNamedFlush, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#1 as range 7
    //DEBUG: t.SrcPos#1: 10
    //DEBUG: e.Name#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TNamedFlush/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Empty );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TErrorFlush t.idx e.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TErrorFlush/9 t.SrcPos#1/10 e.Message#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TErrorFlush, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Message#1 as range 7
    //DEBUG: t.SrcPos#1: 10
    //DEBUG: e.Message#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TErrorFlush/9 AsIs: t.SrcPos#1/10 AsIs: e.Message#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Empty );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TName t.idx e.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TName, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#1 as range 7
    //DEBUG: t.SrcPos#1: 10
    //DEBUG: e.Name#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TName/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Empty );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TAlternative t.idx e.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TAlternative/9 t.SrcPos#1/10 e.Message#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TAlternative, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Message#1 as range 7
    //DEBUG: t.SrcPos#1: 10
    //DEBUG: e.Message#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: e.Message#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Empty );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TDot t.idx )
    // </0 & ExtractAlternatives-Head/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TDot, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.SrcPos#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Empty );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & ExtractAlternatives-Head/4 t.Unexpected#1/5 e.Tail#1/2 >/1
  // closed e.Tail#1 as range 2
  //DEBUG: t.Unexpected#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 }" definition of state"/7 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[7], context[8], " definition of state", 20 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternativesm_Head("ExtractAlternatives-Head", 452973408U, 3382509061U, func_ExtractAlternativesm_Head);

static refalrts::FnResult func_ExtractAlternativesm_Flush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & ExtractAlternatives-Flush/4 t.idx#0/5 >/1
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
    // ( # TFlush t.idx )
    // </0 & ExtractAlternatives-Flush/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TFlush, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.SrcPos#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Unnamed/1 ]] }
    refalrts::reinit_ident( context[1], ident_Unnamed );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TNamedFlush t.idx e.idx )
    // </0 & ExtractAlternatives-Flush/4 (/5 # TNamedFlush/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TNamedFlush, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#1 as range 7
    //DEBUG: t.SrcPos#1: 10
    //DEBUG: e.Name#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Flush/9 } Tile{ AsIs: e.Name#1/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], ident_Flush );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TErrorFlush t.idx e.idx )
    // </0 & ExtractAlternatives-Flush/4 (/5 # TErrorFlush/9 t.SrcPos#1/10 e.Message#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TErrorFlush, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Message#1 as range 7
    //DEBUG: t.SrcPos#1: 10
    //DEBUG: e.Message#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # FlushError/9 } Tile{ AsIs: e.Message#1/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], ident_FlushError );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TName t.idx e.idx )
    // </0 & ExtractAlternatives-Flush/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TName, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#1 as range 7
    //DEBUG: t.SrcPos#1: 10
    //DEBUG: e.Name#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TName/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_None );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TAlternative t.idx )
    // </0 & ExtractAlternatives-Flush/4 (/5 # TAlternative/9 t.SrcPos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TAlternative, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.SrcPos#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_None );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TDot t.idx )
    // </0 & ExtractAlternatives-Flush/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TDot, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.SrcPos#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_None );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx
  // </0 & ExtractAlternatives-Flush/4 t.Unexpected#1/5 >/1
  //DEBUG: t.Unexpected#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 HalfReuse: 'f'/1 }"lush or next state name"/7 >/9 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[7], context[8], "lush or next state name", 23 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[1], 'f' );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternativesm_Flush("ExtractAlternatives-Flush", 452973408U, 3382509061U, func_ExtractAlternativesm_Flush);

static refalrts::FnResult func_ExtractAlternativesm_NextState(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & ExtractAlternatives-NextState/4 t.idx#0/5 >/1
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
    // ( # TName t.idx e.idx )
    // </0 & ExtractAlternatives-NextState/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TName, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#1 as range 7
    //DEBUG: t.SrcPos#1: 10
    //DEBUG: e.Name#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-NextState/4 (/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[9] );
    refalrts::link_brackets( context[9], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TAlternative t.idx )
    // </0 & ExtractAlternatives-NextState/4 (/5 # TAlternative/9 t.SrcPos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TAlternative, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.SrcPos#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Finitive/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Finitive );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TDot t.idx )
    // </0 & ExtractAlternatives-NextState/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TDot, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.SrcPos#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Finitive/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Finitive );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx
  // </0 & ExtractAlternatives-NextState/4 t.Unexpected#1/5 >/1
  //DEBUG: t.Unexpected#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 HalfReuse: 'n'/1 }"ext state name or next alternative"/7 >/9 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[7], context[8], "ext state name or next alternative", 34 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[1], 'n' );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternativesm_NextState("ExtractAlternatives-NextState", 452973408U, 3382509061U, func_ExtractAlternativesm_NextState);

static refalrts::FnResult func_UnexpectedToken(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/10 }"Unexpected "/12 </14 Tile{ HalfReuse: & DFA-TextFromToken/7 AsIs: s.Type#1/9 } Tile{ AsIs: e.Unexpected#1/5 } >/15" expected"/16 Tile{ HalfReuse: ' '/8 AsIs: e.Message#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[12], context[13], "Unexpected ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[16], context[17], " expected", 9 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ErrorAt.ref.function );
  refalrts::reinit_name( context[7], ref_DFAm_TextFromToken.ref.function );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[14] );
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

static refalrts::NativeReference nat_ref_UnexpectedToken("UnexpectedToken", 452973408U, 3382509061U, func_UnexpectedToken);


//End of file
