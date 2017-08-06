// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_Any = refalrts::ident_from_static("Any");
const refalrts::RefalIdentifier ident_Changed = refalrts::ident_from_static("Changed");
const refalrts::RefalIdentifier ident_Chars = refalrts::ident_from_static("Chars");
const refalrts::RefalIdentifier ident_EOFm_Catched = refalrts::ident_from_static("EOF-Catched");
const refalrts::RefalIdentifier ident_EOFm_NotCatched = refalrts::ident_from_static("EOF-NotCatched");
const refalrts::RefalIdentifier ident_Empty = refalrts::ident_from_static("Empty");
const refalrts::RefalIdentifier ident_Finitive = refalrts::ident_from_static("Finitive");
const refalrts::RefalIdentifier ident_Flush = refalrts::ident_from_static("Flush");
const refalrts::RefalIdentifier ident_NotChanged = refalrts::ident_from_static("NotChanged");
const refalrts::RefalIdentifier ident_NotUsed = refalrts::ident_from_static("NotUsed");
const refalrts::RefalIdentifier ident_Sentence = refalrts::ident_from_static("Sentence");
const refalrts::RefalIdentifier ident_Set = refalrts::ident_from_static("Set");
const refalrts::RefalIdentifier ident_Used = refalrts::ident_from_static("Used");
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Seq("Seq", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_Reduce("Reduce", 0U, 0U);
static refalrts::ExternalReference ref_ErrorAt("ErrorAt", 0U, 0U);
static refalrts::ExternalReference ref_WarningAt("WarningAt", 0U, 0U);
static refalrts::ExternalReference ref_gen_DFAm_Compile_L1("DFA-Compile\\1", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_gen_DFAm_Compile_L2("DFA-Compile\\2", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_DFAm_Compile("DFA-Compile", 0U, 0U);
static refalrts::ExternalReference ref_UniqueSet("UniqueSet", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_gen_ResolvingSets_L1("ResolvingSets\\1", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_gen_ResolvingSets_L2("ResolvingSets\\2", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_ResolvingSets("ResolvingSets", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_NormalizeContent("NormalizeContent", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_SetCheckRecursion("SetCheckRecursion", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_SetSubstitute("SetSubstitute", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_SubstituteSetsToRules("SubstituteSetsToRules", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_SetDiff("SetDiff", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_NormalizeAlternative("NormalizeAlternative", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_SplitAlternatives("SplitAlternatives", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_gen_NormalizeRule_L1("NormalizeRule\\1", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_gen_NormalizeRule_L2("NormalizeRule\\2", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_NormalizeRule("NormalizeRule", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_WarningIfUncatched("WarningIfUncatched", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_DefaultCatchAnyChar("DefaultCatchAnyChar", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_DefaultCatchEOF("DefaultCatchEOF", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_PrepareFunctions("PrepareFunctions", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_ExtractExpected("ExtractExpected", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_gen_DoPrepareFunctions_S2L1("DoPrepareFunctions$2\\1", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_gen_DoPrepareFunctions_S4L1("DoPrepareFunctions$4\\1", 3121760693U, 3999690326U);
static refalrts::ExternalReference ref_DoPrepareFunctions("DoPrepareFunctions", 3121760693U, 3999690326U);

static refalrts::FnResult func_gen_DFAm_Compile_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  //FAST GEN: ( ( e.$ ) ( e.$ ) ) ( s.$ t.$ ( e.$ ) e.$ )
  //GLOBAL GEN: ( ( e.$ ) ( e.$ ) ) ( s.$ t.$ ( e.$ ) e.$ )
  // </0 & DFA-Compile\1/4 (/7 (/11 e.idxBB#0/9 )/12 (/15 e.idxBTB#0/13 )/16 )/8 (/19 s.idxTB#0/21 t.idxTBV#0/22 (/26 e.idxTBVVB#0/24 )/27 e.idxTBVVT#0/17 )/20 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBB#0 as range 9
  // closed e.idxBTB#0 as range 13
  if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[17], context[18] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  // closed e.idxTBVVB#0 as range 24
  // closed e.idxTBVVT#0 as range 17
  do {
    // ( ( e.idx ) ( e.idx ) ) ( # Set t.idx ( e.idx ) e.idx )
    // </0 & DFA-Compile\1/4 (/7 (/11 e.Sets#2/9 )/12 (/15 e.Rules#2/13 )/16 )/8 (/19 # Set/21 t.SrcPos#2/22 (/26 e.Name#2/24 )/27 e.Content#2/17 )/20 >/1
    if( ! refalrts::ident_term(  ident_Set, context[21] ) )
      continue;
    // closed e.Sets#2 as range 9
    // closed e.Rules#2 as range 13
    // closed e.Name#2 as range 24
    // closed e.Content#2 as range 17
    //DEBUG: t.SrcPos#2: 22
    //DEBUG: e.Sets#2: 9
    //DEBUG: e.Rules#2: 13
    //DEBUG: e.Name#2: 24
    //DEBUG: e.Content#2: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DFA-Compile\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Sets#2/9 } Tile{ HalfReuse: (/21 AsIs: t.SrcPos#2/22 AsIs: (/26 AsIs: e.Name#2/24 AsIs: )/27 } Tile{ HalfReuse: # NotUsed/19 } Tile{ AsIs: e.Content#2/17 } Tile{ AsIs: )/20 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Rules#2/13 AsIs: )/16 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[21] );
    refalrts::reinit_ident( context[19], ident_NotUsed );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[21], context[20] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[21], context[27] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( ( e.idx ) ( e.idx ) ) ( # Sentence t.idx ( e.idx ) e.idx )
  // </0 & DFA-Compile\1/4 (/7 (/11 e.Sets#2/9 )/12 (/15 e.Rules#2/13 )/16 )/8 (/19 # Sentence/21 t.SrcPos#2/22 (/26 e.Name#2/24 )/27 e.Content#2/17 )/20 >/1
  if( ! refalrts::ident_term(  ident_Sentence, context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#2 as range 9
  // closed e.Rules#2 as range 13
  // closed e.Name#2 as range 24
  // closed e.Content#2 as range 17
  //DEBUG: t.SrcPos#2: 22
  //DEBUG: e.Sets#2: 9
  //DEBUG: e.Rules#2: 13
  //DEBUG: e.Name#2: 24
  //DEBUG: e.Content#2: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DFA-Compile\1/4 {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Sets#2/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Rules#2/13 } Tile{ HalfReuse: (/21 AsIs: t.SrcPos#2/22 AsIs: (/26 AsIs: e.Name#2/24 AsIs: )/27 AsIs: e.Content#2/17 AsIs: )/20 HalfReuse: )/1 } Tile{ AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[21] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[21], context[20] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[21], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DFAm_Compile_L1("DFA-Compile\\1", 3121760693U, 3999690326U, func_gen_DFAm_Compile_L1);

static refalrts::FnResult func_gen_DFAm_Compile_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DFA-Compile\2/4 (/7 (/11 e.Sets#2/9 )/12 (/15 e.Rules#2/13 )/16 )/8 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#2 as range 9
  // closed e.Rules#2 as range 13
  //DEBUG: e.Sets#2: 9
  //DEBUG: e.Rules#2: 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & ResolvingSets/7 } Tile{ AsIs: e.Sets#2/9 } Tile{ AsIs: >/1 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Rules#2/13 AsIs: )/16 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], ref_ResolvingSets.ref.function );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[0], context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DFAm_Compile_L2("DFA-Compile\\2", 3121760693U, 3999690326U, func_gen_DFAm_Compile_L2);

static refalrts::FnResult func_DFAm_Compile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & DFA-Compile/4 e.Elements#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Elements#1 as range 2
  //DEBUG: e.Elements#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Elements#1/2 HalfReuse: </1 } & Seq/5 (/6 & Reduce/7 & DFA-Compile\1/8 (/9 (/10 )/11 (/12 )/13 )/14 )/15 & DFA-Compile\2/16 & SubstituteSetsToRules/17 (/18 & Map/19 & NormalizeRule/20 )/21 & PrepareFunctions/22 >/23 >/24 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_Reduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_gen_DFAm_Compile_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_gen_DFAm_Compile_L2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_SubstituteSetsToRules.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], ref_NormalizeRule.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], ref_PrepareFunctions.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[6], context[15] );
  refalrts::link_brackets( context[9], context[14] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DFAm_Compile("DFA-Compile", 0U, 0U, func_DFAm_Compile);

static refalrts::FnResult func_UniqueSet(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & UniqueSet/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx
    // </0 & UniqueSet/4 e.Set-B#1/5 s.Repeated#1/7 e.Set-M#1/8 s.Repeated#1/10 e.Set-E#1/2 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[13] = context[11];
      context[14] = context[12];
      if( ! refalrts::svar_left( context[7], context[13], context[14] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      refalrts::start_e_loop();
      do {
        context[15] = context[13];
        context[16] = context[14];
        if( ! refalrts::repeated_stvar_left( context[10], context[7], context[15], context[16] ) )
          continue;
        // closed e.Set-E#1 as range 15(2)
        //DEBUG: e.Set-B#1: 5
        //DEBUG: s.Repeated#1: 7
        //DEBUG: e.Set-M#1: 8
        //DEBUG: e.Set-E#1: 2

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Repeated#1/10 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Set-B#1/5 } Tile{ AsIs: </0 AsIs: & UniqueSet/4 } Tile{ AsIs: s.Repeated#1/7 } Tile{ AsIs: e.Set-M#1/8 } Tile{ AsIs: e.Set-E#1/15(2) } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[8], context[9] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[8], context[9], context[13], context[14] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & UniqueSet/4 e.Set#1/2 >/1
  // closed e.Set#1 as range 2
  //DEBUG: e.Set#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & UniqueSet/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Set#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UniqueSet("UniqueSet", 3121760693U, 3999690326U, func_UniqueSet);

static refalrts::FnResult func_gen_ResolvingSets_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: ( t.$ ( e.$ ) s.$ e.$ )
  //GLOBAL GEN: ( t.$ ( e.$ ) s.$ e.$ )
  // </0 & ResolvingSets\1/4 (/7 t.idxB#0/9 (/13 e.idxBVB#0/11 )/14 s.idxBVT#0/15 e.idxBVTV#0/5 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.idxBVB#0 as range 11
  if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBVTV#0 as range 5
  do {
    // ( t.idx ( e.idx ) s.idx # Any )
    // </0 & ResolvingSets\1/4 (/7 t.SrcPos#2/9 (/13 e.Name#2/11 )/14 s.Used#2/15 # Any/16 )/8 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[16] = refalrts::ident_left(  ident_Any, context[18], context[19] );
    if( ! context[16] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.Name#2 as range 11
    //DEBUG: t.SrcPos#2: 9
    //DEBUG: s.Used#2: 15
    //DEBUG: e.Name#2: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ResolvingSets\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.SrcPos#2/9 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 AsIs: s.Used#2/15 AsIs: # Any/16 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( t.idx ( e.idx ) s.idx e.idx )
  // </0 & ResolvingSets\1/4 (/7 t.SrcPos#2/9 (/13 e.Name#2/11 )/14 s.Used#2/15 e.Content#2/5 )/8 >/1
  // closed e.Name#2 as range 11
  // closed e.Content#2 as range 5
  //DEBUG: t.SrcPos#2: 9
  //DEBUG: s.Used#2: 15
  //DEBUG: e.Name#2: 11
  //DEBUG: e.Content#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.SrcPos#2/9 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 AsIs: s.Used#2/15 } Tile{ AsIs: </0 Reuse: & NormalizeContent/4 } (/16 )/17 Tile{ AsIs: e.Content#2/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_NormalizeContent.ref.function );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolvingSets_L1("ResolvingSets\\1", 3121760693U, 3999690326U, func_gen_ResolvingSets_L1);

static refalrts::FnResult func_gen_ResolvingSets_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & ResolvingSets\2/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # Changed e.idx
    // </0 & ResolvingSets\2/4 # Changed/5 e.Sets#2/2 >/1
    if( ! refalrts::ident_term(  ident_Changed, context[5] ) )
      continue;
    // closed e.Sets#2 as range 2
    //DEBUG: e.Sets#2: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & ResolvingSets/5 AsIs: e.Sets#2/2 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], ref_ResolvingSets.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # NotChanged e.idx
  // </0 & ResolvingSets\2/4 # NotChanged/5 e.Sets#2/2 >/1
  if( ! refalrts::ident_term(  ident_NotChanged, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#2 as range 2
  //DEBUG: e.Sets#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ResolvingSets\2/4 # NotChanged/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Sets#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolvingSets_L2("ResolvingSets\\2", 3121760693U, 3999690326U, func_gen_ResolvingSets_L2);

static refalrts::FnResult func_ResolvingSets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ResolvingSets/4 e.Sets#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Sets#1 as range 2
  //DEBUG: e.Sets#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Sets#1/2 HalfReuse: </1 } & Seq/5 (/6 & Map/7 & ResolvingSets\1/8 )/9 & SetCheckRecursion/10 & SetSubstitute/11 & ResolvingSets\2/12 >/13 >/14 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_gen_ResolvingSets_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_SetCheckRecursion.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_SetSubstitute.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_gen_ResolvingSets_L2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[6], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolvingSets("ResolvingSets", 3121760693U, 3999690326U, func_ResolvingSets);

static refalrts::FnResult func_NormalizeContent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & NormalizeContent/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) ( # Chars e.idx ) e.idx
    // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 (/11 # Chars/13 e.Symbols#1/9 )/12 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[16], context[17] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_Chars, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Symbols#1 as range 9
    // closed e.Tail#1 as range 16(2)
    //DEBUG: e.Chars#1: 5
    //DEBUG: e.Symbols#1: 9
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 } Tile{ HalfReuse: </11 HalfReuse: & UniqueSet/13 } Tile{ AsIs: e.Chars#1/5 } Tile{ AsIs: e.Symbols#1/9 } Tile{ HalfReuse: >/8 } Tile{ AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], ref_UniqueSet.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Set t.idx e.idx ) e.idx
    // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 (/11 # Set/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[16], context[17] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_Set, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 16(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Name#1 as range 9
    //DEBUG: e.Chars#1: 5
    //DEBUG: e.Tail#1: 2
    //DEBUG: t.SrcPos#1: 14
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Set/13 AsIs: t.SrcPos#1/14 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/16(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) # Any e.idx
    // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 # Any/9 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[9] = refalrts::ident_left(  ident_Any, context[16], context[17] );
    if( ! context[9] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 16(2)
    //DEBUG: e.Chars#1: 5
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 # Any/9 e.Tail#1/16(2) {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Any/1 ]] }
    refalrts::reinit_ident( context[1], ident_Any );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Chars#1 as range 5
  //DEBUG: e.Chars#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Chars/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_Chars );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NormalizeContent("NormalizeContent", 3121760693U, 3999690326U, func_NormalizeContent);

static refalrts::FnResult func_SetCheckRecursion(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & SetCheckRecursion/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx
    // </0 & SetCheckRecursion/4 e.Sets-B#1/5 (/9 t.SetNamePos#1/11 (/15 e.Name#1/13 )/16 s.Used#1/17 e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/27 e.Name#1/25 )/23 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
    context[34] = context[2];
    context[35] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[36] = context[34];
      context[37] = context[35];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[36], context[37] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      // closed e.Sets-E#1 as range 36(2)
      context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[7], context[8] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.Name#1 as range 13
      if( ! refalrts::svar_left( context[17], context[7], context[8] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop();
      do {
        context[38] = context[7];
        context[39] = context[8];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[38], context[39] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        context[24] = refalrts::ident_left(  ident_Set, context[20], context[21] );
        if( ! context[24] )
          continue;
        if( ! refalrts::repeated_evar_right( context[25], context[26], context[13], context[14], context[20], context[21] ) )
          continue;
        // closed e.Content-E#1 as range 38(7)
        context[28] = refalrts::tvar_left( context[27], context[20], context[21] );
        if( ! context[28] )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;
        //DEBUG: e.Sets-B#1: 5
        //DEBUG: e.Sets-E#1: 2
        //DEBUG: t.SetNamePos#1: 11
        //DEBUG: e.Name#1: 13
        //DEBUG: s.Used#1: 17
        //DEBUG: e.Content-B#1: 18
        //DEBUG: e.Content-E#1: 7
        //DEBUG: t.SrcPos#1: 27

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </22 HalfReuse: & WarningAt/24 AsIs: t.SrcPos#1/27 }"Recu"/29 Tile{ HalfReuse: 'r'/23 }"sive depended set "/31 Tile{ AsIs: e.Name#1/25 } >/33 Tile{ AsIs: </0 AsIs: & SetCheckRecursion/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: t.SetNamePos#1/11 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 AsIs: s.Used#1/17 } Tile{ AsIs: e.Content-B#1/18 } Tile{ AsIs: e.Content-E#1/38(7) } Tile{ AsIs: )/10 AsIs: e.Sets-E#1/36(2) AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[29], context[30], "Recu", 4 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_chars( context[31], context[32], "sive depended set ", 18 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[33] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_call( context[22] );
        refalrts::reinit_name( context[24], ref_WarningAt.ref.function );
        refalrts::reinit_char( context[23], 'r' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::push_stack( context[33] );
        refalrts::push_stack( context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[0], context[17] );
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[22], context[28] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[34], context[35] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & SetCheckRecursion/4 e.Sets#1/2 >/1
  // closed e.Sets#1 as range 2
  //DEBUG: e.Sets#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SetCheckRecursion/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Sets#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetCheckRecursion("SetCheckRecursion", 3121760693U, 3999690326U, func_SetCheckRecursion);

static refalrts::FnResult func_SetSubstitute(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & SetSubstitute/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 t.SetNamePos#1/11 (/15 e.Name#1/13 )/16 s.Used#1/17 e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/28 'A'/27 'n'/26 'y'/25 )/23 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[46] = context[44];
      context[47] = context[45];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[46], context[47] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      // closed e.Sets-E#1 as range 46(2)
      context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[7], context[8] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.Name#1 as range 13
      if( ! refalrts::svar_left( context[17], context[7], context[8] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop();
      do {
        context[48] = context[7];
        context[49] = context[8];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[48], context[49] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        context[24] = refalrts::ident_left(  ident_Set, context[20], context[21] );
        if( ! context[24] )
          continue;
        context[25] = refalrts::char_right( 'y', context[20], context[21] );
        if( ! context[25] )
          continue;
        context[26] = refalrts::char_right( 'n', context[20], context[21] );
        if( ! context[26] )
          continue;
        context[27] = refalrts::char_right( 'A', context[20], context[21] );
        if( ! context[27] )
          continue;
        // closed e.Content-E#1 as range 48(7)
        context[29] = refalrts::tvar_left( context[28], context[20], context[21] );
        if( ! context[29] )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;
        //DEBUG: e.Sets-B#1: 5
        //DEBUG: e.Sets-E#1: 2
        //DEBUG: t.SetNamePos#1: 11
        //DEBUG: e.Name#1: 13
        //DEBUG: s.Used#1: 17
        //DEBUG: e.Content-B#1: 18
        //DEBUG: e.Content-E#1: 7
        //DEBUG: t.SrcPos#1: 28

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/28 'A'/27 'n'/26 {REMOVED TILE} e.Content-E#1/48(7) )/10 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: t.SetNamePos#1/11 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 AsIs: s.Used#1/17 } Tile{ HalfReuse: # Any/25 AsIs: )/23 } Tile{ AsIs: e.Sets-E#1/46(2) } Tile{ ]] }
        refalrts::reinit_ident( context[4], ident_Changed );
        refalrts::reinit_ident( context[25], ident_Any );
        refalrts::link_brackets( context[9], context[23] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[25], context[23] );
        res = refalrts::splice_evar( res, context[4], context[17] );
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[44], context[45] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 t.SetNamePos#1/11 (/15 e.Name#1/13 )/16 s.UsedOuter#1/17 e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/25 e.IncName#1/20 )/23 e.Content-E#1/7 )/10 e.Sets-M#1/27 (/31 t.IncNamePos#1/33 (/37 e.IncName#1/39 )/38 s.UsedInner#1/41 e.IncContent#1/29 )/32 e.Sets-E#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[46] = context[44];
      context[47] = context[45];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[46], context[47] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[7], context[8] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.Name#1 as range 13
      if( ! refalrts::svar_left( context[17], context[7], context[8] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop();
      do {
        context[48] = context[7];
        context[49] = context[8];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[48], context[49] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        context[24] = refalrts::ident_left(  ident_Set, context[20], context[21] );
        if( ! context[24] )
          continue;
        // closed e.Content-E#1 as range 48(7)
        context[26] = refalrts::tvar_left( context[25], context[20], context[21] );
        if( ! context[26] )
          continue;
        // closed e.IncName#1 as range 20
        context[50] = context[46];
        context[51] = context[47];
        context[27] = 0;
        context[28] = 0;
        refalrts::start_e_loop();
        do {
          context[52] = context[50];
          context[53] = context[51];
          context[29] = 0;
          context[30] = 0;
          context[31] = refalrts::brackets_left( context[29], context[30], context[52], context[53] );
          if( ! context[31] )
            continue;
          refalrts::bracket_pointers(context[31], context[32]);
          // closed e.Sets-E#1 as range 52(2)
          context[34] = refalrts::tvar_left( context[33], context[29], context[30] );
          if( ! context[34] )
            continue;
          context[35] = 0;
          context[36] = 0;
          context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
          if( ! context[37] )
            continue;
          refalrts::bracket_pointers(context[37], context[38]);
          if( ! refalrts::repeated_evar_left( context[39], context[40], context[20], context[21], context[35], context[36] ) )
            continue;
          if( ! refalrts::empty_seq( context[35], context[36] ) )
            continue;
          if( ! refalrts::svar_left( context[41], context[29], context[30] ) )
            continue;
          // closed e.IncContent#1 as range 29
          //DEBUG: e.Sets-B#1: 5
          //DEBUG: t.SetNamePos#1: 11
          //DEBUG: e.Name#1: 13
          //DEBUG: s.UsedOuter#1: 17
          //DEBUG: e.Content-B#1: 18
          //DEBUG: e.Content-E#1: 7
          //DEBUG: t.SrcPos#1: 25
          //DEBUG: e.IncName#1: 20
          //DEBUG: e.Sets-M#1: 27
          //DEBUG: e.Sets-E#1: 2
          //DEBUG: t.IncNamePos#1: 33
          //DEBUG: s.UsedInner#1: 41
          //DEBUG: e.IncContent#1: 29

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} (/22 {REMOVED TILE} t.SrcPos#1/25 e.IncName#1/20 )/23 {REMOVED TILE} {REMOVED TILE} s.UsedInner#1/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: t.SetNamePos#1/11 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 AsIs: s.UsedOuter#1/17 } Tile{ AsIs: e.Content-B#1/18 } e.IncContent#1/29/42 Tile{ AsIs: e.Content-E#1/48(7) } Tile{ AsIs: )/10 AsIs: e.Sets-M#1/27 AsIs: (/31 AsIs: t.IncNamePos#1/33 AsIs: (/37 AsIs: e.IncName#1/39 AsIs: )/38 } Tile{ Reuse: # Used/24 } Tile{ AsIs: e.IncContent#1/29 } Tile{ AsIs: )/32 } Tile{ AsIs: e.Sets-E#1/52(2) } Tile{ ]] }
          if (! refalrts::copy_evar(context[42], context[43], context[29], context[30]))
            return refalrts::cNoMemory;
          refalrts::reinit_ident( context[4], ident_Changed );
          refalrts::update_ident( context[24], ident_Used );
          refalrts::link_brackets( context[31], context[32] );
          refalrts::link_brackets( context[37], context[38] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[52], context[53] );
          res = refalrts::splice_evar( res, context[32], context[32] );
          res = refalrts::splice_evar( res, context[29], context[30] );
          res = refalrts::splice_evar( res, context[24], context[24] );
          res = refalrts::splice_evar( res, context[10], context[38] );
          res = refalrts::splice_evar( res, context[48], context[49] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[18], context[19] );
          res = refalrts::splice_evar( res, context[4], context[17] );
          refalrts::splice_to_freelist_open( trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[27], context[28], context[50], context[51] ) );
      } while ( refalrts::open_evar_advance( context[18], context[19], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[44], context[45] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 t.IncNamePos#1/11 (/15 e.IncName#1/13 )/16 s.UsedInner#1/17 e.IncContent#1/7 )/10 e.Sets-M#1/18 (/22 t.SetNamePos#1/24 (/28 e.Name#1/26 )/29 s.UsedOuter#1/30 e.Content-B#1/31 (/35 # Set/37 t.SrcPos#1/40 e.IncName#1/38 )/36 e.Content-E#1/20 )/23 e.Sets-E#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[46] = context[44];
      context[47] = context[45];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[46], context[47] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[7], context[8] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.IncName#1 as range 13
      if( ! refalrts::svar_left( context[17], context[7], context[8] ) )
        continue;
      // closed e.IncContent#1 as range 7
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop();
      do {
        context[48] = context[46];
        context[49] = context[47];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[48], context[49] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        // closed e.Sets-E#1 as range 48(2)
        context[25] = refalrts::tvar_left( context[24], context[20], context[21] );
        if( ! context[25] )
          continue;
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[20], context[21] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        // closed e.Name#1 as range 26
        if( ! refalrts::svar_left( context[30], context[20], context[21] ) )
          continue;
        context[31] = 0;
        context[32] = 0;
        refalrts::start_e_loop();
        do {
          context[50] = context[20];
          context[51] = context[21];
          context[33] = 0;
          context[34] = 0;
          context[35] = refalrts::brackets_left( context[33], context[34], context[50], context[51] );
          if( ! context[35] )
            continue;
          refalrts::bracket_pointers(context[35], context[36]);
          context[37] = refalrts::ident_left(  ident_Set, context[33], context[34] );
          if( ! context[37] )
            continue;
          if( ! refalrts::repeated_evar_right( context[38], context[39], context[13], context[14], context[33], context[34] ) )
            continue;
          // closed e.Content-E#1 as range 50(20)
          context[41] = refalrts::tvar_left( context[40], context[33], context[34] );
          if( ! context[41] )
            continue;
          if( ! refalrts::empty_seq( context[33], context[34] ) )
            continue;
          //DEBUG: e.Sets-B#1: 5
          //DEBUG: t.IncNamePos#1: 11
          //DEBUG: e.IncName#1: 13
          //DEBUG: s.UsedInner#1: 17
          //DEBUG: e.IncContent#1: 7
          //DEBUG: e.Sets-M#1: 18
          //DEBUG: e.Sets-E#1: 2
          //DEBUG: t.SetNamePos#1: 24
          //DEBUG: e.Name#1: 26
          //DEBUG: s.UsedOuter#1: 30
          //DEBUG: e.Content-B#1: 31
          //DEBUG: e.Content-E#1: 20
          //DEBUG: t.SrcPos#1: 40

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.UsedInner#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/35 {REMOVED TILE} t.SrcPos#1/40 e.IncName#1/38 )/36 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: t.IncNamePos#1/11 AsIs: (/15 AsIs: e.IncName#1/13 AsIs: )/16 } Tile{ Reuse: # Used/37 } Tile{ AsIs: e.IncContent#1/7 } Tile{ AsIs: )/10 AsIs: e.Sets-M#1/18 AsIs: (/22 AsIs: t.SetNamePos#1/24 AsIs: (/28 AsIs: e.Name#1/26 AsIs: )/29 AsIs: s.UsedOuter#1/30 } Tile{ AsIs: e.Content-B#1/31 } e.IncContent#1/7/42 Tile{ AsIs: e.Content-E#1/50(20) } Tile{ AsIs: )/23 } Tile{ AsIs: e.Sets-E#1/48(2) } Tile{ ]] }
          if (! refalrts::copy_evar(context[42], context[43], context[7], context[8]))
            return refalrts::cNoMemory;
          refalrts::reinit_ident( context[4], ident_Changed );
          refalrts::update_ident( context[37], ident_Used );
          refalrts::link_brackets( context[22], context[23] );
          refalrts::link_brackets( context[28], context[29] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[48], context[49] );
          res = refalrts::splice_evar( res, context[23], context[23] );
          res = refalrts::splice_evar( res, context[50], context[51] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[31], context[32] );
          res = refalrts::splice_evar( res, context[10], context[30] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          res = refalrts::splice_evar( res, context[37], context[37] );
          res = refalrts::splice_evar( res, context[4], context[16] );
          refalrts::splice_to_freelist_open( trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[31], context[32], context[20], context[21] ) );
      } while ( refalrts::open_evar_advance( context[18], context[19], context[46], context[47] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[44], context[45] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 t.SetNamePos#1/11 (/15 e.Name#1/13 )/16 s.Used#1/17 e.Content-B#1/18 (/22 # Set/24 t.SrcPos#1/25 e.IncName#1/20 )/23 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
    context[44] = context[2];
    context[45] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[46] = context[44];
      context[47] = context[45];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[46], context[47] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      // closed e.Sets-E#1 as range 46(2)
      context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[7], context[8] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.Name#1 as range 13
      if( ! refalrts::svar_left( context[17], context[7], context[8] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop();
      do {
        context[48] = context[7];
        context[49] = context[8];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[48], context[49] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        context[24] = refalrts::ident_left(  ident_Set, context[20], context[21] );
        if( ! context[24] )
          continue;
        // closed e.Content-E#1 as range 48(7)
        context[26] = refalrts::tvar_left( context[25], context[20], context[21] );
        if( ! context[26] )
          continue;
        // closed e.IncName#1 as range 20
        //DEBUG: e.Sets-B#1: 5
        //DEBUG: e.Sets-E#1: 2
        //DEBUG: t.SetNamePos#1: 11
        //DEBUG: e.Name#1: 13
        //DEBUG: s.Used#1: 17
        //DEBUG: e.Content-B#1: 18
        //DEBUG: e.Content-E#1: 7
        //DEBUG: t.SrcPos#1: 25
        //DEBUG: e.IncName#1: 20

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} e.Sets-B#1/5 {REMOVED TILE} t.SetNamePos#1/11 {REMOVED TILE} e.Name#1/13 {REMOVED TILE} s.Used#1/17 e.Content-B#1/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content-E#1/48(7) {REMOVED TILE} e.Sets-E#1/46(2) {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/25 } Tile{ HalfReuse: 's'/16 } Tile{ HalfReuse: 'e'/23 } Tile{ HalfReuse: 't'/22 HalfReuse: ' '/24 } Tile{ AsIs: e.IncName#1/20 } Tile{ HalfReuse: ' '/10 } Tile{ HalfReuse: 'n'/15 } Tile{ HalfReuse: 'o'/9 }"t defined"/27 Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[27], context[28], "t defined", 9 ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_ErrorAt.ref.function );
        refalrts::reinit_char( context[16], 's' );
        refalrts::reinit_char( context[23], 'e' );
        refalrts::reinit_char( context[22], 't' );
        refalrts::reinit_char( context[24], ' ' );
        refalrts::reinit_char( context[10], ' ' );
        refalrts::reinit_char( context[15], 'n' );
        refalrts::reinit_char( context[9], 'o' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[9], context[9] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        res = refalrts::splice_evar( res, context[10], context[10] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[22], context[24] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[44], context[45] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & SetSubstitute/4 e.Sets#1/2 >/1
  // closed e.Sets#1 as range 2
  //DEBUG: e.Sets#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & SetSubstitute/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # NotChanged/0 } Tile{ AsIs: e.Sets#1/2 } Tile{ ]] }
  refalrts::reinit_ident( context[0], ident_NotChanged );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetSubstitute("SetSubstitute", 3121760693U, 3999690326U, func_SetSubstitute);

static refalrts::FnResult func_SubstituteSetsToRules(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 71 elems
  refalrts::Iter context[71];
  refalrts::zeros( context, 71 );
  //FAST GEN: ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ )
  // </0 & SubstituteSetsToRules/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  do {
    // ( ( t.idx ( e.idx ) s.idx ( # Chars e.idx ) ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 t.SetNamePos#1/22 (/26 e.Name#1/24 )/27 s.Used#1/28 (/19 # Chars/21 e.Content#1/17 )/20 )/16 e.Sets#1/5 )/8 (/11 e.Rules-B#1/29 (/33 t.SentNamePos#1/35 (/39 e.RuleName#1/37 )/40 e.Alternatives-B#1/41 (/45 (/49 # Set/51 t.SrcPos#1/54 e.Name#1/52 )/50 t.Flush#1/56 t.NextState#1/58 )/46 e.Alternatives-E#1/31 )/34 e.Rules-E#1/9 )/12 >/1
    context[63] = context[5];
    context[64] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[63], context[64] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_right( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  ident_Chars, context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.Content#1 as range 17
    // closed e.Sets#1 as range 63(5)
    context[23] = refalrts::tvar_left( context[22], context[13], context[14] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[13], context[14] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    // closed e.Name#1 as range 24
    if( ! refalrts::svar_left( context[28], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    context[65] = context[9];
    context[66] = context[10];
    context[29] = 0;
    context[30] = 0;
    refalrts::start_e_loop();
    do {
      context[67] = context[65];
      context[68] = context[66];
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[67], context[68] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      // closed e.Rules-E#1 as range 67(9)
      context[36] = refalrts::tvar_left( context[35], context[31], context[32] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[31], context[32] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      // closed e.RuleName#1 as range 37
      context[41] = 0;
      context[42] = 0;
      refalrts::start_e_loop();
      do {
        context[69] = context[31];
        context[70] = context[32];
        context[43] = 0;
        context[44] = 0;
        context[45] = refalrts::brackets_left( context[43], context[44], context[69], context[70] );
        if( ! context[45] )
          continue;
        refalrts::bracket_pointers(context[45], context[46]);
        context[47] = 0;
        context[48] = 0;
        context[49] = refalrts::brackets_left( context[47], context[48], context[43], context[44] );
        if( ! context[49] )
          continue;
        refalrts::bracket_pointers(context[49], context[50]);
        context[51] = refalrts::ident_left(  ident_Set, context[47], context[48] );
        if( ! context[51] )
          continue;
        if( ! refalrts::repeated_evar_right( context[52], context[53], context[24], context[25], context[47], context[48] ) )
          continue;
        // closed e.Alternatives-E#1 as range 69(31)
        context[55] = refalrts::tvar_left( context[54], context[47], context[48] );
        if( ! context[55] )
          continue;
        if( ! refalrts::empty_seq( context[47], context[48] ) )
          continue;
        context[57] = refalrts::tvar_left( context[56], context[43], context[44] );
        if( ! context[57] )
          continue;
        context[59] = refalrts::tvar_left( context[58], context[43], context[44] );
        if( ! context[59] )
          continue;
        if( ! refalrts::empty_seq( context[43], context[44] ) )
          continue;
        //DEBUG: e.Content#1: 17
        //DEBUG: e.Sets#1: 5
        //DEBUG: t.SetNamePos#1: 22
        //DEBUG: e.Name#1: 24
        //DEBUG: s.Used#1: 28
        //DEBUG: e.Rules-B#1: 29
        //DEBUG: e.Rules-E#1: 9
        //DEBUG: t.SentNamePos#1: 35
        //DEBUG: e.RuleName#1: 37
        //DEBUG: e.Alternatives-B#1: 41
        //DEBUG: e.Alternatives-E#1: 31
        //DEBUG: t.SrcPos#1: 54
        //DEBUG: t.Flush#1: 56
        //DEBUG: t.NextState#1: 58

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} s.Used#1/28 {REMOVED TILE} t.SrcPos#1/54 e.Name#1/52 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/15 AsIs: t.SetNamePos#1/22 AsIs: (/26 AsIs: e.Name#1/24 AsIs: )/27 } # Used/60 Tile{ AsIs: (/19 AsIs: # Chars/21 AsIs: e.Content#1/17 AsIs: )/20 AsIs: )/16 AsIs: e.Sets#1/63(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/29 AsIs: (/33 AsIs: t.SentNamePos#1/35 AsIs: (/39 AsIs: e.RuleName#1/37 AsIs: )/40 AsIs: e.Alternatives-B#1/41 AsIs: (/45 AsIs: (/49 Reuse: # Chars/51 } e.Content#1/17/61 Tile{ AsIs: )/50 AsIs: t.Flush#1/56 AsIs: t.NextState#1/58 AsIs: )/46 AsIs: e.Alternatives-E#1/69(31) AsIs: )/34 AsIs: e.Rules-E#1/67(9) AsIs: )/12 AsIs: >/1 ]] }
        if( ! refalrts::alloc_ident( context[60], ident_Used ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_evar(context[61], context[62], context[17], context[18]))
          return refalrts::cNoMemory;
        refalrts::update_ident( context[51], ident_Chars );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[33], context[34] );
        refalrts::link_brackets( context[45], context[46] );
        refalrts::link_brackets( context[49], context[50] );
        refalrts::link_brackets( context[39], context[40] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[26], context[27] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[50];
        res = refalrts::splice_evar( res, context[61], context[62] );
        res = refalrts::splice_evar( res, context[19], context[51] );
        res = refalrts::splice_evar( res, context[60], context[60] );
        refalrts::splice_to_freelist_open( context[27], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[41], context[42], context[31], context[32] ) );
    } while ( refalrts::open_evar_advance( context[29], context[30], context[65], context[66] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ( t.idx ( e.idx ) s.idx # Any ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 t.SetNamePos#1/18 (/22 e.Name#1/20 )/23 s.Used#1/24 # Any/17 )/16 e.Sets#1/5 )/8 (/11 e.Rules-B#1/25 (/29 t.SentNamePos#1/31 (/35 e.RuleName#1/33 )/36 e.Alternatives-B#1/37 (/41 (/45 # Set/47 t.SrcPos#1/50 e.Name#1/48 )/46 t.Flush#1/52 t.NextState#1/54 )/42 e.Alternatives-E#1/27 )/30 e.Rules-E#1/9 )/12 >/1
    context[63] = context[5];
    context[64] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[63], context[64] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_right(  ident_Any, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Sets#1 as range 63(5)
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[13], context[14] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Name#1 as range 20
    if( ! refalrts::svar_left( context[24], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    context[65] = context[9];
    context[66] = context[10];
    context[25] = 0;
    context[26] = 0;
    refalrts::start_e_loop();
    do {
      context[67] = context[65];
      context[68] = context[66];
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[67], context[68] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      // closed e.Rules-E#1 as range 67(9)
      context[32] = refalrts::tvar_left( context[31], context[27], context[28] );
      if( ! context[32] )
        continue;
      context[33] = 0;
      context[34] = 0;
      context[35] = refalrts::brackets_left( context[33], context[34], context[27], context[28] );
      if( ! context[35] )
        continue;
      refalrts::bracket_pointers(context[35], context[36]);
      // closed e.RuleName#1 as range 33
      context[37] = 0;
      context[38] = 0;
      refalrts::start_e_loop();
      do {
        context[69] = context[27];
        context[70] = context[28];
        context[39] = 0;
        context[40] = 0;
        context[41] = refalrts::brackets_left( context[39], context[40], context[69], context[70] );
        if( ! context[41] )
          continue;
        refalrts::bracket_pointers(context[41], context[42]);
        context[43] = 0;
        context[44] = 0;
        context[45] = refalrts::brackets_left( context[43], context[44], context[39], context[40] );
        if( ! context[45] )
          continue;
        refalrts::bracket_pointers(context[45], context[46]);
        context[47] = refalrts::ident_left(  ident_Set, context[43], context[44] );
        if( ! context[47] )
          continue;
        if( ! refalrts::repeated_evar_right( context[48], context[49], context[20], context[21], context[43], context[44] ) )
          continue;
        // closed e.Alternatives-E#1 as range 69(27)
        context[51] = refalrts::tvar_left( context[50], context[43], context[44] );
        if( ! context[51] )
          continue;
        if( ! refalrts::empty_seq( context[43], context[44] ) )
          continue;
        context[53] = refalrts::tvar_left( context[52], context[39], context[40] );
        if( ! context[53] )
          continue;
        context[55] = refalrts::tvar_left( context[54], context[39], context[40] );
        if( ! context[55] )
          continue;
        if( ! refalrts::empty_seq( context[39], context[40] ) )
          continue;
        //DEBUG: e.Sets#1: 5
        //DEBUG: t.SetNamePos#1: 18
        //DEBUG: e.Name#1: 20
        //DEBUG: s.Used#1: 24
        //DEBUG: e.Rules-B#1: 25
        //DEBUG: e.Rules-E#1: 9
        //DEBUG: t.SentNamePos#1: 31
        //DEBUG: e.RuleName#1: 33
        //DEBUG: e.Alternatives-B#1: 37
        //DEBUG: e.Alternatives-E#1: 27
        //DEBUG: t.SrcPos#1: 50
        //DEBUG: t.Flush#1: 52
        //DEBUG: t.NextState#1: 54

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} s.Used#1/24 {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/50 e.Name#1/48 )/46 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/15 AsIs: t.SetNamePos#1/18 AsIs: (/22 AsIs: e.Name#1/20 AsIs: )/23 } Tile{ Reuse: # Used/47 } Tile{ AsIs: # Any/17 AsIs: )/16 AsIs: e.Sets#1/63(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/25 AsIs: (/29 AsIs: t.SentNamePos#1/31 AsIs: (/35 AsIs: e.RuleName#1/33 AsIs: )/36 AsIs: e.Alternatives-B#1/37 AsIs: (/41 HalfReuse: # Any/45 } Tile{ AsIs: t.Flush#1/52 AsIs: t.NextState#1/54 AsIs: )/42 AsIs: e.Alternatives-E#1/69(27) AsIs: )/30 AsIs: e.Rules-E#1/67(9) AsIs: )/12 AsIs: >/1 ]] }
        refalrts::update_ident( context[47], ident_Used );
        refalrts::reinit_ident( context[45], ident_Any );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[41], context[42] );
        refalrts::link_brackets( context[35], context[36] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[52];
        res = refalrts::splice_evar( res, context[17], context[45] );
        res = refalrts::splice_evar( res, context[47], context[47] );
        refalrts::splice_to_freelist_open( context[23], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[37], context[38], context[27], context[28] ) );
    } while ( refalrts::open_evar_advance( context[25], context[26], context[65], context[66] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ( t.idx ( e.idx ) # NotUsed e.idx ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 t.SetNamePos#1/17 (/21 e.Name#1/19 )/22 # NotUsed/23 e.Content#1/13 )/16 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 >/1
    context[63] = context[5];
    context[64] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[63], context[64] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Sets#1 as range 63(5)
    // closed e.Rules#1 as range 9
    context[18] = refalrts::tvar_left( context[17], context[13], context[14] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[13], context[14] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  ident_NotUsed, context[13], context[14] );
    if( ! context[23] )
      continue;
    // closed e.Name#1 as range 19
    // closed e.Content#1 as range 13
    //DEBUG: e.Sets#1: 5
    //DEBUG: e.Rules#1: 9
    //DEBUG: t.SetNamePos#1: 17
    //DEBUG: e.Name#1: 19
    //DEBUG: e.Content#1: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content#1/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 } Tile{ AsIs: t.SetNamePos#1/17 } 'S'/24 Tile{ HalfReuse: 'e'/7 HalfReuse: 't'/15 } ' '/25 Tile{ HalfReuse: ':'/21 AsIs: e.Name#1/19 HalfReuse: ':'/22 HalfReuse: ' '/23 }"is not used"/26 >/28 </29 & SubstituteSetsToRules/30 Tile{ HalfReuse: (/16 AsIs: e.Sets#1/63(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[24], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[26], context[27], "is not used", 11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], ref_SubstituteSetsToRules.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WarningAt.ref.function );
    refalrts::reinit_char( context[7], 'e' );
    refalrts::reinit_char( context[15], 't' );
    refalrts::reinit_char( context[21], ':' );
    refalrts::reinit_char( context[22], ':' );
    refalrts::reinit_char( context[23], ' ' );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[26], context[30] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[7], context[15] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ( t.idx ( e.idx ) # Used e.idx ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 t.SetNamePos#1/17 (/21 e.Name#1/19 )/22 # Used/23 e.Content#1/13 )/16 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 >/1
    context[63] = context[5];
    context[64] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[63], context[64] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Sets#1 as range 63(5)
    // closed e.Rules#1 as range 9
    context[18] = refalrts::tvar_left( context[17], context[13], context[14] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[13], context[14] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  ident_Used, context[13], context[14] );
    if( ! context[23] )
      continue;
    // closed e.Name#1 as range 19
    // closed e.Content#1 as range 13
    //DEBUG: e.Sets#1: 5
    //DEBUG: e.Rules#1: 9
    //DEBUG: t.SetNamePos#1: 17
    //DEBUG: e.Name#1: 19
    //DEBUG: e.Content#1: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 (/15 t.SetNamePos#1/17 (/21 e.Name#1/19 )/22 # Used/23 e.Content#1/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 } Tile{ HalfReuse: (/16 AsIs: e.Sets#1/63(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B#1/13 (/17 t.SentNamePos#1/19 (/23 e.RuleName#1/21 )/24 e.Alternatives-B#1/25 (/29 (/33 # Set/35 t.SrcPos#1/39 'A'/38 'n'/37 'y'/36 )/34 t.Flush#1/41 t.NextState#1/43 )/30 e.Alternatives-E#1/15 )/18 e.Rules-E#1/9 )/12 >/1
    context[63] = context[5];
    context[64] = context[6];
    if( ! refalrts::empty_seq( context[63], context[64] ) )
      continue;
    context[65] = context[9];
    context[66] = context[10];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[67] = context[65];
      context[68] = context[66];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[67], context[68] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Rules-E#1 as range 67(9)
      context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[15], context[16] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.RuleName#1 as range 21
      context[25] = 0;
      context[26] = 0;
      refalrts::start_e_loop();
      do {
        context[69] = context[15];
        context[70] = context[16];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[69], context[70] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::brackets_left( context[31], context[32], context[27], context[28] );
        if( ! context[33] )
          continue;
        refalrts::bracket_pointers(context[33], context[34]);
        context[35] = refalrts::ident_left(  ident_Set, context[31], context[32] );
        if( ! context[35] )
          continue;
        context[36] = refalrts::char_right( 'y', context[31], context[32] );
        if( ! context[36] )
          continue;
        context[37] = refalrts::char_right( 'n', context[31], context[32] );
        if( ! context[37] )
          continue;
        context[38] = refalrts::char_right( 'A', context[31], context[32] );
        if( ! context[38] )
          continue;
        // closed e.Alternatives-E#1 as range 69(15)
        context[40] = refalrts::tvar_left( context[39], context[31], context[32] );
        if( ! context[40] )
          continue;
        if( ! refalrts::empty_seq( context[31], context[32] ) )
          continue;
        context[42] = refalrts::tvar_left( context[41], context[27], context[28] );
        if( ! context[42] )
          continue;
        context[44] = refalrts::tvar_left( context[43], context[27], context[28] );
        if( ! context[44] )
          continue;
        if( ! refalrts::empty_seq( context[27], context[28] ) )
          continue;
        //DEBUG: e.Rules-B#1: 13
        //DEBUG: e.Rules-E#1: 9
        //DEBUG: t.SentNamePos#1: 19
        //DEBUG: e.RuleName#1: 21
        //DEBUG: e.Alternatives-B#1: 25
        //DEBUG: e.Alternatives-E#1: 15
        //DEBUG: t.SrcPos#1: 39
        //DEBUG: t.Flush#1: 41
        //DEBUG: t.NextState#1: 43

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} # Set/35 t.SrcPos#1/39 'A'/38 'n'/37 'y'/36 )/34 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/13 AsIs: (/17 AsIs: t.SentNamePos#1/19 AsIs: (/23 AsIs: e.RuleName#1/21 AsIs: )/24 AsIs: e.Alternatives-B#1/25 AsIs: (/29 HalfReuse: # Any/33 } Tile{ AsIs: t.Flush#1/41 AsIs: t.NextState#1/43 AsIs: )/30 AsIs: e.Alternatives-E#1/69(15) AsIs: )/18 AsIs: e.Rules-E#1/67(9) AsIs: )/12 AsIs: >/1 ]] }
        refalrts::reinit_ident( context[33], ident_Any );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[17], context[18] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[41];
        refalrts::splice_to_freelist_open( context[33], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[25], context[26], context[15], context[16] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[65], context[66] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B#1/13 (/17 t.SentNamePos#1/19 (/23 e.RuleName#1/21 )/24 e.Alternatives-B#1/25 (/29 (/33 # Set/35 t.SrcPos#1/36 e.Name#1/31 )/34 t.Flush#1/38 t.NextState#1/40 )/30 e.Alternatives-E#1/15 )/18 e.Rules-E#1/9 )/12 >/1
    context[63] = context[5];
    context[64] = context[6];
    if( ! refalrts::empty_seq( context[63], context[64] ) )
      continue;
    context[65] = context[9];
    context[66] = context[10];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[67] = context[65];
      context[68] = context[66];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[67], context[68] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Rules-E#1 as range 67(9)
      context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[15], context[16] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.RuleName#1 as range 21
      context[25] = 0;
      context[26] = 0;
      refalrts::start_e_loop();
      do {
        context[69] = context[15];
        context[70] = context[16];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[69], context[70] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::brackets_left( context[31], context[32], context[27], context[28] );
        if( ! context[33] )
          continue;
        refalrts::bracket_pointers(context[33], context[34]);
        context[35] = refalrts::ident_left(  ident_Set, context[31], context[32] );
        if( ! context[35] )
          continue;
        // closed e.Alternatives-E#1 as range 69(15)
        context[37] = refalrts::tvar_left( context[36], context[31], context[32] );
        if( ! context[37] )
          continue;
        // closed e.Name#1 as range 31
        context[39] = refalrts::tvar_left( context[38], context[27], context[28] );
        if( ! context[39] )
          continue;
        context[41] = refalrts::tvar_left( context[40], context[27], context[28] );
        if( ! context[41] )
          continue;
        if( ! refalrts::empty_seq( context[27], context[28] ) )
          continue;
        //DEBUG: e.Rules-B#1: 13
        //DEBUG: e.Rules-E#1: 9
        //DEBUG: t.SentNamePos#1: 19
        //DEBUG: e.RuleName#1: 21
        //DEBUG: e.Alternatives-B#1: 25
        //DEBUG: e.Alternatives-E#1: 15
        //DEBUG: t.SrcPos#1: 36
        //DEBUG: e.Name#1: 31
        //DEBUG: t.Flush#1: 38
        //DEBUG: t.NextState#1: 40

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} e.Rules-B#1/13 {REMOVED TILE} t.SentNamePos#1/19 {REMOVED TILE} e.RuleName#1/21 {REMOVED TILE} e.Alternatives-B#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Flush#1/38 t.NextState#1/40 {REMOVED TILE} e.Alternatives-E#1/69(15) {REMOVED TILE} e.Rules-E#1/67(9) {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/36 } Tile{ HalfReuse: 'U'/34 } Tile{ HalfReuse: 'n'/29 HalfReuse: 'd'/33 HalfReuse: 'e'/35 } Tile{ HalfReuse: 'c'/7 HalfReuse: 'l'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 'r'/12 } Tile{ HalfReuse: 'e'/18 } Tile{ HalfReuse: 'd'/30 } Tile{ HalfReuse: ' '/24 } Tile{ HalfReuse: 's'/23 } Tile{ HalfReuse: 'e'/17 }"t "/42 Tile{ AsIs: e.Name#1/31 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[42], context[43], "t ", 2 ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_ErrorAt.ref.function );
        refalrts::reinit_char( context[34], 'U' );
        refalrts::reinit_char( context[29], 'n' );
        refalrts::reinit_char( context[33], 'd' );
        refalrts::reinit_char( context[35], 'e' );
        refalrts::reinit_char( context[7], 'c' );
        refalrts::reinit_char( context[8], 'l' );
        refalrts::reinit_char( context[11], 'a' );
        refalrts::reinit_char( context[12], 'r' );
        refalrts::reinit_char( context[18], 'e' );
        refalrts::reinit_char( context[30], 'd' );
        refalrts::reinit_char( context[24], ' ' );
        refalrts::reinit_char( context[23], 's' );
        refalrts::reinit_char( context[17], 'e' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[17], context[17] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[30], context[30] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[7], context[11] );
        res = refalrts::splice_evar( res, context[29], context[35] );
        res = refalrts::splice_evar( res, context[34], context[34] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        refalrts::splice_to_freelist_open( context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[25], context[26], context[15], context[16] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[65], context[66] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( ) ( e.idx )
  // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules#1/9 )/12 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Rules#1 as range 9
  //DEBUG: e.Rules#1: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Rules#1/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SubstituteSetsToRules("SubstituteSetsToRules", 3121760693U, 3999690326U, func_SubstituteSetsToRules);

static refalrts::FnResult func_SetDiff(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  //FAST GEN: ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ )
  // </0 & SetDiff/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  do {
    // ( e.idx ) ( # Any )
    // </0 & SetDiff/4 (/7 e.Set#1/5 )/8 (/11 # Any/13 )/12 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[13] = refalrts::ident_left(  ident_Any, context[19], context[20] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.Set#1 as range 5
    //DEBUG: e.Set#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SetDiff/4 (/7 e.Set#1/5 )/8 (/11 # Any/13 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx )
    // </0 & SetDiff/4 (/7 e.Set1-B#1/13 s.Common#1/15 e.Set1-E#1/5 )/8 (/11 e.Set2-B#1/16 s.Common#1/18 e.Set2-E#1/9 )/12 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::svar_left( context[15], context[21], context[22] ) )
        continue;
      // closed e.Set1-E#1 as range 21(5)
      context[23] = context[9];
      context[24] = context[10];
      context[16] = 0;
      context[17] = 0;
      refalrts::start_e_loop();
      do {
        context[25] = context[23];
        context[26] = context[24];
        if( ! refalrts::repeated_stvar_left( context[18], context[15], context[25], context[26] ) )
          continue;
        // closed e.Set2-E#1 as range 25(9)
        //DEBUG: e.Set1-B#1: 13
        //DEBUG: s.Common#1: 15
        //DEBUG: e.Set1-E#1: 5
        //DEBUG: e.Set2-B#1: 16
        //DEBUG: e.Set2-E#1: 9

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Common#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Common#1/18 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetDiff/4 AsIs: (/7 } Tile{ AsIs: e.Set1-B#1/13 } Tile{ AsIs: e.Set1-E#1/21(5) } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Set2-B#1/16 } Tile{ AsIs: e.Set2-E#1/25(9) } Tile{ AsIs: )/12 AsIs: >/1 ]] }
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[8], context[11] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::splice_to_freelist_open( context[7], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[16], context[17], context[23], context[24] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx )
  // </0 & SetDiff/4 (/7 e.SetDiff#1/5 )/8 (/11 e.Set2#1/9 )/12 >/1
  // closed e.SetDiff#1 as range 5
  // closed e.Set2#1 as range 9
  //DEBUG: e.SetDiff#1: 5
  //DEBUG: e.Set2#1: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SetDiff/4 (/7 {REMOVED TILE} )/8 (/11 e.Set2#1/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.SetDiff#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetDiff("SetDiff", 3121760693U, 3999690326U, func_SetDiff);

static refalrts::FnResult func_NormalizeAlternative(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  //FAST GEN: ( s.$ e.$ ) ( t.$ t.$ t.$ )
  //GLOBAL GEN: ( s.$ e.$ ) ( t.$ t.$ t.$ )
  // </0 & NormalizeAlternative/4 (/7 s.idxB#0/13 e.idxBV#0/5 )/8 (/11 t.idxTB#0/14 t.idxTBV#0/16 t.idxTBVV#0/18 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBV#0 as range 5
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[9], context[10] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::tvar_left( context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( s.idx e.idx ) ( ( # Chars e.idx ) t.idx t.idx )
    // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/5 )/8 (/11 (/14 # Chars/22 e.Alternative#1/20 )/15 t.Flush#1/16 t.Next#1/18 )/12 >/1
    context[20] = 0;
    context[21] = 0;
    if( ! refalrts::brackets_term( context[20], context[21], context[14] ) )
      continue;
    context[22] = refalrts::ident_left(  ident_Chars, context[20], context[21] );
    if( ! context[22] )
      continue;
    // closed e.CatchedChars#1 as range 5
    // closed e.Alternative#1 as range 20
    //DEBUG: t.Flush#1: 16
    //DEBUG: t.Next#1: 18
    //DEBUG: s.CatchedEOF#1: 13
    //DEBUG: e.CatchedChars#1: 5
    //DEBUG: e.Alternative#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.CatchedEOF#1/13 } Tile{ AsIs: </0 Reuse: & UniqueSet/4 } Tile{ AsIs: e.CatchedChars#1/5 } Tile{ AsIs: e.Alternative#1/20 } Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: (/14 HalfReuse: </22 } & SetDiff/23 (/24 e.Alternative#1/20/25 )/27 (/28 e.CatchedChars#1/5/29 )/31 >/32 Tile{ AsIs: )/15 AsIs: t.Flush#1/16 AsIs: t.Next#1/18 AsIs: )/12 } Tile{ ]] }
    if( ! refalrts::alloc_name( context[23], ref_SetDiff.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[20], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[29], context[30], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_UniqueSet.ref.function );
    refalrts::reinit_open_call( context[22] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[22] );
    refalrts::link_brackets( context[28], context[31] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[12] );
    res = refalrts::splice_evar( res, context[23], context[32] );
    res = refalrts::splice_evar( res, context[8], context[22] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx e.idx ) ( # Any t.idx t.idx )
    // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/5 )/8 (/11 # Any/14 t.Flush#1/16 t.Next#1/18 )/12 >/1
    if( ! refalrts::ident_term(  ident_Any, context[14] ) )
      continue;
    // closed e.CatchedChars#1 as range 5
    //DEBUG: t.Flush#1: 16
    //DEBUG: t.Next#1: 18
    //DEBUG: s.CatchedEOF#1: 13
    //DEBUG: e.CatchedChars#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NormalizeAlternative/4 {REMOVED TILE} e.CatchedChars#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.CatchedEOF#1/13 } Tile{ HalfReuse: # Any/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Any/14 AsIs: t.Flush#1/16 AsIs: t.Next#1/18 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_ident( context[1], ident_Any );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx e.idx ) ( # Empty t.idx # Finitive )
    // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/5 )/8 (/11 # Empty/14 t.Flush#1/16 # Finitive/18 )/12 >/1
    if( ! refalrts::ident_term(  ident_Empty, context[14] ) )
      continue;
    if( ! refalrts::ident_term(  ident_Finitive, context[18] ) )
      continue;
    // closed e.CatchedChars#1 as range 5
    //DEBUG: t.Flush#1: 16
    //DEBUG: s.CatchedEOF#1: 13
    //DEBUG: e.CatchedChars#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 s.CatchedEOF#1/13 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # EOF-Catched/4 } Tile{ AsIs: e.CatchedChars#1/5 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Empty/14 AsIs: t.Flush#1/16 AsIs: # Finitive/18 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_EOFm_Catched );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx e.idx ) ( # Empty t.idx t.idx )
  // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/5 )/8 (/11 # Empty/14 t.Flush#1/16 t.NextRule#1/18 )/12 >/1
  if( ! refalrts::ident_term(  ident_Empty, context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CatchedChars#1 as range 5
  //DEBUG: t.Flush#1: 16
  //DEBUG: t.NextRule#1: 18
  //DEBUG: s.CatchedEOF#1: 13
  //DEBUG: e.CatchedChars#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.CatchedEOF#1/13 e.CatchedChars#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # EOF-Catched/4 HalfReuse: # Any/7 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Empty/14 AsIs: t.Flush#1/16 AsIs: t.NextRule#1/18 AsIs: )/12 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_EOFm_Catched );
  refalrts::reinit_ident( context[7], ident_Any );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[12] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NormalizeAlternative("NormalizeAlternative", 3121760693U, 3999690326U, func_NormalizeAlternative);

static refalrts::FnResult func_SplitAlternatives(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  //FAST GEN: t.$ ( e.$ ) ( t.$ t.$ t.$ )
  //GLOBAL GEN: t.$ ( e.$ ) ( t.$ t.$ t.$ )
  // </0 & SplitAlternatives/4 t.idx#0/13 (/11 e.idxVB#0/9 )/12 (/7 t.idxVTB#0/15 t.idxVTBV#0/17 t.idxVTBVV#0/19 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxVB#0 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::tvar_left( context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::tvar_left( context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // t.idx ( e.idx ) ( # Empty t.idx t.idx )
    // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 # Empty/15 t.Flush#1/17 t.Next#1/19 )/8 >/1
    if( ! refalrts::ident_term(  ident_Empty, context[15] ) )
      continue;
    // closed e.Name#1 as range 9
    //DEBUG: t.SentNamePos#1: 13
    //DEBUG: t.Flush#1: 17
    //DEBUG: t.Next#1: 19
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Empty/15 AsIs: t.Flush#1/17 AsIs: t.Next#1/19 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx ( e.idx ) ( # Any t.idx t.idx )
    // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 # Any/15 t.Flush#1/17 t.Next#1/19 )/8 >/1
    if( ! refalrts::ident_term(  ident_Any, context[15] ) )
      continue;
    // closed e.Name#1 as range 9
    //DEBUG: t.SentNamePos#1: 13
    //DEBUG: t.Flush#1: 17
    //DEBUG: t.Next#1: 19
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Any/15 AsIs: t.Flush#1/17 AsIs: t.Next#1/19 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx ( e.idx ) ( ( ) t.idx t.idx )
    // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.Name#1 as range 9
    //DEBUG: t.SentNamePos#1: 13
    //DEBUG: t.Flush#1: 17
    //DEBUG: t.Next#1: 19
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Flush#1/17 t.Next#1/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/13 HalfReuse: 'R'/11 }"ule "/23 Tile{ AsIs: e.Name#1/9 } Tile{ HalfReuse: ' '/12 HalfReuse: 'h'/7 HalfReuse: 'a'/15 HalfReuse: 's'/16 }" unreached alternative"/25 Tile{ HalfReuse: 's'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[23], context[24], "ule ", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[25], context[26], " unreached alternative", 22 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WarningAt.ref.function );
    refalrts::reinit_char( context[11], 'R' );
    refalrts::reinit_char( context[12], ' ' );
    refalrts::reinit_char( context[7], 'h' );
    refalrts::reinit_char( context[15], 'a' );
    refalrts::reinit_char( context[16], 's' );
    refalrts::reinit_char( context[8], 's' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx ( e.idx ) ( ( s.idx ) t.idx t.idx )
    // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 s.Char#1/23 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
      continue;
    // closed e.Name#1 as range 9
    if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    //DEBUG: t.SentNamePos#1: 13
    //DEBUG: t.Flush#1: 17
    //DEBUG: t.Next#1: 19
    //DEBUG: e.Name#1: 9
    //DEBUG: s.Char#1: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 s.Char#1/23 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Char1 #23/16 AsIs: t.Flush#1/17 AsIs: t.Next#1/19 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[16], context[23] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[8] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx ( e.idx ) ( ( s.idx e.idx ) t.idx t.idx )
  // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 s.Char#1/23 e.Tail#1/21 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
  context[21] = 0;
  context[22] = 0;
  if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 9
  if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 21
  //DEBUG: t.SentNamePos#1: 13
  //DEBUG: t.Flush#1: 17
  //DEBUG: t.Next#1: 19
  //DEBUG: e.Name#1: 9
  //DEBUG: s.Char#1: 23
  //DEBUG: e.Tail#1: 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/24 Tile{ AsIs: s.Char#1/23 } t.Flush#1/17/25 t.Next#1/19/27 )/29 Tile{ AsIs: </0 AsIs: & SplitAlternatives/4 AsIs: t.SentNamePos#1/13 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 AsIs: (/7 AsIs: (/15 } Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: )/16 AsIs: t.Flush#1/17 AsIs: t.Next#1/19 AsIs: )/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[25], context[26], context[17], context[18]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[27], context[28], context[19], context[20]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[24], context[29] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[25], context[29] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SplitAlternatives("SplitAlternatives", 3121760693U, 3999690326U, func_SplitAlternatives);

static refalrts::FnResult func_gen_NormalizeRule_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & NormalizeRule\1/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 (/13 s.CatchedEOF#2/15 e.CatchedChars#2/11 )/14 e.Alternatives#2/2 >/1
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
  // closed e.Name#1 as range 7
  // closed e.Alternatives#2 as range 2
  if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CatchedChars#2 as range 11
  //DEBUG: t.SentNamePos#1: 5
  //DEBUG: e.Name#1: 7
  //DEBUG: e.Alternatives#2: 2
  //DEBUG: s.CatchedEOF#2: 15
  //DEBUG: e.CatchedChars#2: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningIfUncatched/4 AsIs: t.SentNamePos#1/5 } Tile{ AsIs: e.Name#1/7 } Tile{ AsIs: s.CatchedEOF#2/15 AsIs: e.CatchedChars#2/11 HalfReuse: >/14 AsIs: e.Alternatives#2/2 HalfReuse: </1 } Tile{ HalfReuse: & DefaultCatchAnyChar/9 } t.SentNamePos#1/5/16 e.CatchedChars#2/11/18 Tile{ HalfReuse: >/10 HalfReuse: </13 } & DefaultCatchEOF/20 s.CatchedEOF#2/15/21 >/22 Tile{ ]] }
  if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[18], context[19], context[11], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], ref_DefaultCatchEOF.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[21], context[15]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_WarningIfUncatched.ref.function );
  refalrts::reinit_close_call( context[14] );
  refalrts::reinit_open_call( context[1] );
  refalrts::reinit_name( context[9], ref_DefaultCatchAnyChar.ref.function );
  refalrts::reinit_close_call( context[10] );
  refalrts::reinit_open_call( context[13] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[15], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NormalizeRule_L1("NormalizeRule\\1", 3121760693U, 3999690326U, func_gen_NormalizeRule_L1);

static refalrts::FnResult func_gen_NormalizeRule_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & NormalizeRule\2/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 e.Alternatives#2/2 >/1
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
  // closed e.Name#1 as range 7
  // closed e.Alternatives#2 as range 2
  //DEBUG: t.SentNamePos#1: 5
  //DEBUG: e.Name#1: 7
  //DEBUG: e.Alternatives#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: t.SentNamePos#1/5 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 AsIs: e.Alternatives#2/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NormalizeRule_L2("NormalizeRule\\2", 3121760693U, 3999690326U, func_gen_NormalizeRule_L2);

static refalrts::FnResult func_NormalizeRule(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  // </0 & NormalizeRule/4 (/7 t.SentNamePos#1/9 (/13 e.Name#1/11 )/14 e.Alternatives#1/5 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Name#1 as range 11
  // closed e.Alternatives#1 as range 5
  //DEBUG: t.SentNamePos#1: 9
  //DEBUG: e.Name#1: 11
  //DEBUG: e.Alternatives#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 & Fetch/16 Tile{ AsIs: e.Alternatives#1/5 } </17 & Seq/18 (/19 & MapReduce/20 & NormalizeAlternative/21 (/22 # EOF-NotCatched/23 )/24 )/25 Tile{ AsIs: </0 Reuse: & @create_closure@/4 HalfReuse: & NormalizeRule\1/7 AsIs: t.SentNamePos#1/9 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } >/26 (/27 & Map/28 (/29 & SplitAlternatives/30 t.SentNamePos#1/9/31 (/33 e.Name#1/11/34 )/36 )/37 )/38 </39 & @create_closure@/40 & NormalizeRule\2/41 t.SentNamePos#1/9/42 (/44 e.Name#1/11/45 )/47 >/48 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ref_NormalizeAlternative.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[23], ident_EOFm_NotCatched ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[30], ref_SplitAlternatives.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[31], context[32], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[34], context[35], context[11], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[40], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[41], ref_gen_NormalizeRule_L2.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[42], context[43], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[44] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[45], context[46], context[11], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[48] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], refalrts::create_closure );
  refalrts::reinit_name( context[7], ref_gen_NormalizeRule_L1.ref.function );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[48] );
  refalrts::push_stack( context[39] );
  refalrts::link_brackets( context[44], context[47] );
  refalrts::link_brackets( context[27], context[38] );
  refalrts::link_brackets( context[29], context[37] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[19], context[25] );
  refalrts::link_brackets( context[22], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[26], context[48] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[17], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NormalizeRule("NormalizeRule", 3121760693U, 3999690326U, func_NormalizeRule);

static refalrts::FnResult func_WarningIfUncatched(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & WarningIfUncatched/4 t.idx#0/5 e.idxV#0/2 >/1
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
    // t.idx e.idx # EOF-Catched # Any
    // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/2 # EOF-Catched/8 # Any/7 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[7] = refalrts::ident_right(  ident_Any, context[15], context[16] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::ident_right(  ident_EOFm_Catched, context[15], context[16] );
    if( ! context[8] )
      continue;
    // closed e.Name#1 as range 15(2)
    //DEBUG: t.SentNamePos#1: 5
    //DEBUG: e.Name#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/15(2) # EOF-Catched/8 # Any/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx e.idx
    // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/7 # EOF-Catched/9 e.CharSet#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[15];
      context[18] = context[16];
      context[9] = refalrts::ident_left(  ident_EOFm_Catched, context[17], context[18] );
      if( ! context[9] )
        continue;
      // closed e.CharSet#1 as range 17(2)
      //DEBUG: t.SentNamePos#1: 5
      //DEBUG: e.Name#1: 7
      //DEBUG: e.CharSet#1: 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CharSet#1/17(2) {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/5 } 'I'/10 Tile{ HalfReuse: 'n'/9 }" rule "/11 Tile{ AsIs: e.Name#1/7 }" some chars not catched, default alternative added"/13 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( context[10], 'I' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[11], context[12], " rule ", 6 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[13], context[14], " some chars not catched, default alternative added", 50 ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_WarningAt.ref.function );
      refalrts::reinit_char( context[9], 'n' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[10], context[10] );
      refalrts::splice_to_freelist_open( context[6], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[15], context[16] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx e.idx # EOF-NotCatched # Any
    // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/2 # EOF-NotCatched/8 # Any/7 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[7] = refalrts::ident_right(  ident_Any, context[15], context[16] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::ident_right(  ident_EOFm_NotCatched, context[15], context[16] );
    if( ! context[8] )
      continue;
    // closed e.Name#1 as range 15(2)
    //DEBUG: t.SentNamePos#1: 5
    //DEBUG: e.Name#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/5 }"In rule "/9 Tile{ AsIs: e.Name#1/15(2) }" EOF not catched, default alternative add"/11 Tile{ HalfReuse: 'e'/8 HalfReuse: 'd'/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[9], context[10], "In rule ", 8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], " EOF not catched, default alternative add", 41 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WarningAt.ref.function );
    refalrts::reinit_char( context[8], 'e' );
    refalrts::reinit_char( context[7], 'd' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/7 # EOF-NotCatched/9 e.CharSet#1/2 >/1
  context[7] = 0;
  context[8] = 0;
  refalrts::start_e_loop();
  do {
    context[15] = context[2];
    context[16] = context[3];
    context[9] = refalrts::ident_left(  ident_EOFm_NotCatched, context[15], context[16] );
    if( ! context[9] )
      continue;
    // closed e.CharSet#1 as range 15(2)
    //DEBUG: t.SentNamePos#1: 5
    //DEBUG: e.Name#1: 7
    //DEBUG: e.CharSet#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CharSet#1/15(2) {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/5 } 'I'/10 Tile{ HalfReuse: 'n'/9 }" rule "/11 Tile{ AsIs: e.Name#1/7 }" some chars and EOF not catched, default alternatives added"/13 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], " rule ", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], " some chars and EOF not catched, default alternatives added", 59 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WarningAt.ref.function );
    refalrts::reinit_char( context[9], 'n' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[7], context[8], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_WarningIfUncatched("WarningIfUncatched", 3121760693U, 3999690326U, func_WarningIfUncatched);

static refalrts::FnResult func_DefaultCatchAnyChar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & DefaultCatchAnyChar/4 t.idx#0/5 e.idxV#0/2 >/1
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
    // t.idx # Any
    // </0 & DefaultCatchAnyChar/4 t.SentNamePos#1/5 # Any/7 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[7] = refalrts::ident_left(  ident_Any, context[16], context[17] );
    if( ! context[7] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    //DEBUG: t.SentNamePos#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DefaultCatchAnyChar/4 t.SentNamePos#1/5 # Any/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & DefaultCatchAnyChar/4 t.SentNamePos#1/5 e.CatchedChars#1/2 >/1
  // closed e.CatchedChars#1 as range 2
  //DEBUG: t.SentNamePos#1: 5
  //DEBUG: e.CatchedChars#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.CatchedChars#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Any/4 } (/7 # Flush/8"#TokenLexerInternalError-Unexpected"/9 )/11 (/12 Tile{ AsIs: t.SentNamePos#1/5 }"Root"/13 )/15 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[8], ident_Flush ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "#TokenLexerInternalError-Unexpected", 35 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], "Root", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Any );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DefaultCatchAnyChar("DefaultCatchAnyChar", 3121760693U, 3999690326U, func_DefaultCatchAnyChar);

static refalrts::FnResult func_DefaultCatchEOF(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & DefaultCatchEOF/4 s.idx#0/5 >/1
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
    // # EOF-Catched
    // </0 & DefaultCatchEOF/4 # EOF-Catched/5 >/1
    if( ! refalrts::ident_term(  ident_EOFm_Catched, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DefaultCatchEOF/4 # EOF-Catched/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # EOF-NotCatched
  // </0 & DefaultCatchEOF/4 # EOF-NotCatched/5 >/1
  if( ! refalrts::ident_term(  ident_EOFm_NotCatched, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/6 # Empty/7 (/8 # Flush/9"#TokenLexerInternalError-UnexpectedEO"/10 Tile{ HalfReuse: 'F'/0 HalfReuse: )/4 Reuse: # Finitive/5 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[7], ident_Empty ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], ident_Flush ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], "#TokenLexerInternalError-UnexpectedEO", 37 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'F' );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::update_ident( context[5], ident_Finitive );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[6], context[1] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DefaultCatchEOF("DefaultCatchEOF", 3121760693U, 3999690326U, func_DefaultCatchEOF);

static refalrts::FnResult func_PrepareFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & PrepareFunctions/4 e.Rules#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Rules#1 as range 2
  //DEBUG: e.Rules#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoPrepareFunctions/6 (/7 )/8 (/9 (/10 (/11 0/12"runtime"/13 )/15"Root"/16 Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_DoPrepareFunctions.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[12], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], "runtime", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[16], context[17], "Root", 4 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[9], context[4] );
  refalrts::link_brackets( context[10], context[0] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareFunctions("PrepareFunctions", 3121760693U, 3999690326U, func_PrepareFunctions);

static refalrts::FnResult func_ExtractExpected(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: ( t.$ t.$ t.$ )
  //GLOBAL GEN: ( t.$ t.$ t.$ )
  // </0 & ExtractExpected/4 (/7 t.idxB#0/9 t.idxBV#0/11 t.idxBVV#0/13 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( t.idx t.idx # Finitive )
    // </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 # Finitive/13 )/8 >/1
    if( ! refalrts::ident_term(  ident_Finitive, context[13] ) )
      continue;
    //DEBUG: t.Head#1: 9
    //DEBUG: t.Flush#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 # Finitive/13 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( t.idx t.idx ( t.idx e.idx ) )
  // </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 (/13 t.SrcPos#1/17 e.NextName#1/15 )/14 )/8 >/1
  context[15] = 0;
  context[16] = 0;
  if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.NextName#1 as range 15
  //DEBUG: t.Head#1: 9
  //DEBUG: t.Flush#1: 11
  //DEBUG: t.SrcPos#1: 17
  //DEBUG: e.NextName#1: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: t.SrcPos#1/17 AsIs: e.NextName#1/15 AsIs: )/14 } Tile{ ]] }
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractExpected("ExtractExpected", 3121760693U, 3999690326U, func_ExtractExpected);

static refalrts::FnResult func_gen_DoPrepareFunctions_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoPrepareFunctions$2\1/4 (/7 t.SentNamePos#2/9 (/13 e.Name#2/11 )/14 e.Content#2/5 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Name#2 as range 11
  // closed e.Content#2 as range 5
  //DEBUG: t.SentNamePos#2: 9
  //DEBUG: e.Name#2: 11
  //DEBUG: e.Content#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 } Tile{ AsIs: t.SentNamePos#2/9 HalfReuse: 'F'/13 } Tile{ HalfReuse: 'o'/14 } Tile{ HalfReuse: 'u'/7 } Tile{ HalfReuse: 'n'/8 }"d unused rule "/15 Tile{ AsIs: e.Name#2/11 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[15], context[16], "d unused rule ", 14 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_WarningAt.ref.function );
  refalrts::reinit_char( context[13], 'F' );
  refalrts::reinit_char( context[14], 'o' );
  refalrts::reinit_char( context[7], 'u' );
  refalrts::reinit_char( context[8], 'n' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoPrepareFunctions_S2L1("DoPrepareFunctions$2\\1", 3121760693U, 3999690326U, func_gen_DoPrepareFunctions_S2L1);

static refalrts::FnResult func_gen_DoPrepareFunctions_S4L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: ( t.$ t.$ t.$ )
  //GLOBAL GEN: ( t.$ t.$ t.$ )
  // </0 & DoPrepareFunctions$4\1/4 (/7 t.idxB#0/9 t.idxBV#0/11 t.idxBVV#0/13 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( t.idx t.idx # Finitive )
    // </0 & DoPrepareFunctions$4\1/4 (/7 t.Head#2/9 t.Flush#2/11 # Finitive/13 )/8 >/1
    if( ! refalrts::ident_term(  ident_Finitive, context[13] ) )
      continue;
    //DEBUG: t.Head#2: 9
    //DEBUG: t.Flush#2: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions$4\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: # Finitive/13 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( t.idx t.idx ( t.idx e.idx ) )
  // </0 & DoPrepareFunctions$4\1/4 (/7 t.Head#2/9 t.Flush#2/11 (/13 t.GotoPos#2/17 e.NextName#2/15 )/14 )/8 >/1
  context[15] = 0;
  context[16] = 0;
  if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.NextName#2 as range 15
  //DEBUG: t.Head#2: 9
  //DEBUG: t.Flush#2: 11
  //DEBUG: t.GotoPos#2: 17
  //DEBUG: e.NextName#2: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions$4\1/4 {REMOVED TILE} t.GotoPos#2/17 {REMOVED TILE} )/14 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: (/13 } Tile{ AsIs: e.NextName#2/15 } Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[13], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoPrepareFunctions_S4L1("DoPrepareFunctions$4\\1", 3121760693U, 3999690326U, func_gen_DoPrepareFunctions_S4L1);

static refalrts::FnResult func_DoPrepareFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) e.$
  // </0 & DoPrepareFunctions/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
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
    // ( e.idx ) ( )
    // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 >/1
    context[43] = context[9];
    context[44] = context[10];
    if( ! refalrts::empty_seq( context[43], context[44] ) )
      continue;
    context[45] = context[2];
    context[46] = context[3];
    if( ! refalrts::empty_seq( context[45], context[46] ) )
      continue;
    // closed e.Written#1 as range 5
    //DEBUG: e.Written#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( ) e.idx
    // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 e.Rules#1/2 >/1
    context[43] = context[9];
    context[44] = context[10];
    if( ! refalrts::empty_seq( context[43], context[44] ) )
      continue;
    // closed e.Written#1 as range 5
    // closed e.Rules#1 as range 2
    //DEBUG: e.Written#1: 5
    //DEBUG: e.Rules#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </8 HalfReuse: & Map/11 HalfReuse: & DoPrepareFunctions$2\1/12 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[11], ref_Map.ref.function );
    refalrts::reinit_name( context[12], ref_gen_DoPrepareFunctions_S2L1.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( ( t.idx e.idx ) e.idx ) e.idx
    // </0 & DoPrepareFunctions/4 (/7 e.Written-B#1/19 (/23 e.Next#1/25 )/24 e.Written-E#1/5 )/8 (/11 (/15 t.SrcPos#1/17 e.Next#1/13 )/16 e.Expected#1/9 )/12 e.Rules#1/2 >/1
    context[43] = context[9];
    context[44] = context[10];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[43], context[44] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Expected#1 as range 43(9)
    // closed e.Rules#1 as range 2
    context[18] = refalrts::tvar_left( context[17], context[13], context[14] );
    if( ! context[18] )
      continue;
    // closed e.Next#1 as range 13
    context[45] = context[5];
    context[46] = context[6];
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[47] = context[45];
      context[48] = context[46];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[47], context[48] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      if( ! refalrts::repeated_evar_left( context[25], context[26], context[13], context[14], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.Written-E#1 as range 47(5)
      //DEBUG: e.Expected#1: 9
      //DEBUG: e.Rules#1: 2
      //DEBUG: t.SrcPos#1: 17
      //DEBUG: e.Next#1: 13
      //DEBUG: e.Written-B#1: 19
      //DEBUG: e.Written-E#1: 5

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} (/15 t.SrcPos#1/17 e.Next#1/13 )/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoPrepareFunctions/4 AsIs: (/7 AsIs: e.Written-B#1/19 AsIs: (/23 AsIs: e.Next#1/25 AsIs: )/24 AsIs: e.Written-E#1/47(5) AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Expected#1/43(9) } Tile{ AsIs: )/12 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[43], context[44] );
      refalrts::splice_to_freelist_open( context[11], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[19], context[20], context[45], context[46] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( ( t.idx e.idx ) e.idx ) e.idx
    // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 (/15 t.SrcPos#1/17 e.NextRule#1/13 )/16 e.Expected#1/9 )/12 e.Rules-B#1/19 (/23 t.SentNamePos#1/25 (/29 e.NextRule#1/31 )/30 e.Alternatives#1/21 )/24 e.Rules-E#1/2 >/1
    context[43] = context[9];
    context[44] = context[10];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[43], context[44] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Written#1 as range 5
    // closed e.Expected#1 as range 43(9)
    context[18] = refalrts::tvar_left( context[17], context[13], context[14] );
    if( ! context[18] )
      continue;
    // closed e.NextRule#1 as range 13
    context[45] = context[2];
    context[46] = context[3];
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[47] = context[45];
      context[48] = context[46];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[47], context[48] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.Rules-E#1 as range 47(2)
      context[26] = refalrts::tvar_left( context[25], context[21], context[22] );
      if( ! context[26] )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      if( ! refalrts::repeated_evar_left( context[31], context[32], context[13], context[14], context[27], context[28] ) )
        continue;
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;
      // closed e.Alternatives#1 as range 21
      //DEBUG: e.Written#1: 5
      //DEBUG: e.Expected#1: 9
      //DEBUG: t.SrcPos#1: 17
      //DEBUG: e.NextRule#1: 13
      //DEBUG: e.Rules-B#1: 19
      //DEBUG: e.Rules-E#1: 2
      //DEBUG: t.SentNamePos#1: 25
      //DEBUG: e.Alternatives#1: 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SentNamePos#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } Tile{ AsIs: (/29 AsIs: e.NextRule#1/31 AsIs: )/30 } Tile{ HalfReuse: </11 } & Map/33 & DoPrepareFunctions$4\1/34 Tile{ AsIs: e.Alternatives#1/21 } >/35 Tile{ HalfReuse: )/23 } Tile{ AsIs: </0 AsIs: & DoPrepareFunctions/4 AsIs: (/7 AsIs: e.Written#1/5 HalfReuse: (/8 } Tile{ AsIs: e.NextRule#1/13 } Tile{ AsIs: )/24 } )/36 Tile{ HalfReuse: (/16 AsIs: e.Expected#1/43(9) HalfReuse: </12 } & Map/37 & ExtractExpected/38 e.Alternatives#1/21/39 >/41 )/42 Tile{ AsIs: e.Rules-B#1/19 } Tile{ AsIs: e.Rules-E#1/47(2) } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_name( context[33], ref_Map.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], ref_gen_DoPrepareFunctions_S4L1.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[37], ref_Map.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[38], ref_ExtractExpected.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[39], context[40], context[21], context[22]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_call( context[11] );
      refalrts::reinit_close_bracket( context[23] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_open_bracket( context[16] );
      refalrts::reinit_open_call( context[12] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[16], context[42] );
      refalrts::push_stack( context[41] );
      refalrts::push_stack( context[12] );
      refalrts::link_brackets( context[7], context[36] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[15], context[23] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[11] );
      refalrts::link_brackets( context[29], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[37], context[42] );
      res = refalrts::splice_evar( res, context[16], context[12] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[19], context[20], context[45], context[46] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( ( t.idx e.idx ) e.idx ) e.idx
  // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 (/15 t.SrcPos#1/17 e.NextRule#1/13 )/16 e.Expected#1/9 )/12 e.Rules#1/2 >/1
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Written#1 as range 5
  // closed e.Expected#1 as range 9
  // closed e.Rules#1 as range 2
  context[18] = refalrts::tvar_left( context[17], context[13], context[14] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.NextRule#1 as range 13
  //DEBUG: e.Written#1: 5
  //DEBUG: e.Expected#1: 9
  //DEBUG: e.Rules#1: 2
  //DEBUG: t.SrcPos#1: 17
  //DEBUG: e.NextRule#1: 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Written#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Expected#1/9 {REMOVED TILE} e.Rules#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/17 } Tile{ HalfReuse: 'R'/16 } Tile{ HalfReuse: 'u'/8 HalfReuse: 'l'/11 HalfReuse: 'e'/15 } Tile{ HalfReuse: ' '/12 } Tile{ AsIs: e.NextRule#1/13 } Tile{ HalfReuse: ' '/7 }"not found"/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[19], context[20], "not found", 9 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ErrorAt.ref.function );
  refalrts::reinit_char( context[16], 'R' );
  refalrts::reinit_char( context[8], 'u' );
  refalrts::reinit_char( context[11], 'l' );
  refalrts::reinit_char( context[15], 'e' );
  refalrts::reinit_char( context[12], ' ' );
  refalrts::reinit_char( context[7], ' ' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoPrepareFunctions("DoPrepareFunctions", 3121760693U, 3999690326U, func_DoPrepareFunctions);


//End of file
