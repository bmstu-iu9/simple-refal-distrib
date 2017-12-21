// This file automatically generated from 'DFA-Compiler.sref'
// Don't edit! Edit 'DFA-Compiler.sref' and recompile it

#include "refalrts.h"

static const refalrts::RefalIdentifier ident_Any = refalrts::ident_from_static("Any");
static const refalrts::RefalIdentifier ident_Changed = refalrts::ident_from_static("Changed");
static const refalrts::RefalIdentifier ident_Chars = refalrts::ident_from_static("Chars");
static const refalrts::RefalIdentifier ident_EOFm_Catched = refalrts::ident_from_static("EOF-Catched");
static const refalrts::RefalIdentifier ident_EOFm_NotCatched = refalrts::ident_from_static("EOF-NotCatched");
static const refalrts::RefalIdentifier ident_Empty = refalrts::ident_from_static("Empty");
static const refalrts::RefalIdentifier ident_Finitive = refalrts::ident_from_static("Finitive");
static const refalrts::RefalIdentifier ident_Flush = refalrts::ident_from_static("Flush");
static const refalrts::RefalIdentifier ident_NotChanged = refalrts::ident_from_static("NotChanged");
static const refalrts::RefalIdentifier ident_NotUsed = refalrts::ident_from_static("NotUsed");
static const refalrts::RefalIdentifier ident_Sentence = refalrts::ident_from_static("Sentence");
static const refalrts::RefalIdentifier ident_Set = refalrts::ident_from_static("Set");
static const refalrts::RefalIdentifier ident_Used = refalrts::ident_from_static("Used");
static refalrts::ExternalReference ref_DFAm_Compile("DFA-Compile", 0U, 0U);
static refalrts::ExternalReference ref_gen_DFAm_Compile_L1("DFA-Compile\\1", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_gen_DFAm_Compile_L2("DFA-Compile\\2", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_DefaultCatchAnyChar("DefaultCatchAnyChar", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_DefaultCatchEOF("DefaultCatchEOF", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_DoPrepareFunctions("DoPrepareFunctions", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_gen_DoPrepareFunctions_S2L1("DoPrepareFunctions$2\\1", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_gen_DoPrepareFunctions_S4L1("DoPrepareFunctions$4\\1", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_ErrorAt("ErrorAt", 0U, 0U);
static refalrts::ExternalReference ref_ExtractExpected("ExtractExpected", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_NormalizeAlternative("NormalizeAlternative", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_NormalizeContent("NormalizeContent", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_NormalizeRule("NormalizeRule", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_gen_NormalizeRule_L1("NormalizeRule\\1", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_gen_NormalizeRule_L2("NormalizeRule\\2", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_PrepareFunctions("PrepareFunctions", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_Reduce("Reduce", 0U, 0U);
static refalrts::ExternalReference ref_ResolvingSets("ResolvingSets", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_gen_ResolvingSets_L1("ResolvingSets\\1", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_gen_ResolvingSets_L2("ResolvingSets\\2", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_Seq("Seq", 0U, 0U);
static refalrts::ExternalReference ref_SetCheckRecursion("SetCheckRecursion", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_SetDiff("SetDiff", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_SetSubstitute("SetSubstitute", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_SplitAlternatives("SplitAlternatives", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_SubstituteSetsToRules("SubstituteSetsToRules", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_UniqueSet("UniqueSet", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_WarningAt("WarningAt", 0U, 0U);
static refalrts::ExternalReference ref_WarningIfUncatched("WarningIfUncatched", 1750850198U, 1789610235U);

static refalrts::FnResult func_gen_DFAm_Compile_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
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
    // </0 & DFA-Compile\1/4 (/7 (/11 e.Sets#2/28 )/12 (/15 e.Rules#2/30 )/16 )/8 (/19 # Set/21 t.SrcPos#2/22 (/26 e.Name#2/32 )/27 e.Content#2/34 )/20 >/1
    context[28] = context[9];
    context[29] = context[10];
    context[30] = context[13];
    context[31] = context[14];
    context[32] = context[24];
    context[33] = context[25];
    context[34] = context[17];
    context[35] = context[18];
    if( ! refalrts::ident_term(  ident_Set, context[21] ) )
      continue;
    // closed e.Sets#2 as range 28
    // closed e.Rules#2 as range 30
    // closed e.Name#2 as range 32
    // closed e.Content#2 as range 34
    //DEBUG: t.SrcPos#2: 22
    //DEBUG: e.Sets#2: 28
    //DEBUG: e.Rules#2: 30
    //DEBUG: e.Name#2: 32
    //DEBUG: e.Content#2: 34

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DFA-Compile\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Sets#2/28 } Tile{ HalfReuse: (/21 AsIs: t.SrcPos#2/22 AsIs: (/26 AsIs: e.Name#2/32 AsIs: )/27 } Tile{ HalfReuse: # NotUsed/19 } Tile{ AsIs: e.Content#2/34 } Tile{ AsIs: )/20 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Rules#2/30 AsIs: )/16 AsIs: )/8 } Tile{ ]] }
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
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[21], context[27] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( ( e.idx ) ( e.idx ) ) ( # Sentence t.idx ( e.idx ) e.idx )
  // </0 & DFA-Compile\1/4 (/7 (/11 e.Sets#2/28 )/12 (/15 e.Rules#2/30 )/16 )/8 (/19 # Sentence/21 t.SrcPos#2/22 (/26 e.Name#2/32 )/27 e.Content#2/34 )/20 >/1
  context[28] = context[9];
  context[29] = context[10];
  context[30] = context[13];
  context[31] = context[14];
  context[32] = context[24];
  context[33] = context[25];
  context[34] = context[17];
  context[35] = context[18];
  if( ! refalrts::ident_term(  ident_Sentence, context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#2 as range 28
  // closed e.Rules#2 as range 30
  // closed e.Name#2 as range 32
  // closed e.Content#2 as range 34
  //DEBUG: t.SrcPos#2: 22
  //DEBUG: e.Sets#2: 28
  //DEBUG: e.Rules#2: 30
  //DEBUG: e.Name#2: 32
  //DEBUG: e.Content#2: 34

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DFA-Compile\1/4 {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Sets#2/28 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Rules#2/30 } Tile{ HalfReuse: (/21 AsIs: t.SrcPos#2/22 AsIs: (/26 AsIs: e.Name#2/32 AsIs: )/27 AsIs: e.Content#2/34 AsIs: )/20 HalfReuse: )/1 } Tile{ AsIs: )/8 } Tile{ ]] }
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
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DFAm_Compile_L1("DFA-Compile\\1", 1750850198U, 1789610235U, func_gen_DFAm_Compile_L1);


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

static refalrts::NativeReference nat_ref_gen_DFAm_Compile_L2("DFA-Compile\\2", 1750850198U, 1789610235U, func_gen_DFAm_Compile_L2);


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
    // </0 & UniqueSet/4 e.Set-B#1/7 s.Repeated#1/11 e.Set-M#1/12 s.Repeated#1/16 e.Set-E#1/14 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[5];
      context[10] = context[6];
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      context[12] = 0;
      context[13] = 0;
      refalrts::start_e_loop();
      do {
        context[14] = context[9];
        context[15] = context[10];
        if( ! refalrts::repeated_stvar_left( context[16], context[11], context[14], context[15] ) )
          continue;
        // closed e.Set-E#1 as range 14
        //DEBUG: e.Set-B#1: 7
        //DEBUG: s.Repeated#1: 11
        //DEBUG: e.Set-M#1: 12
        //DEBUG: e.Set-E#1: 14

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Repeated#1/16 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Set-B#1/7 } Tile{ AsIs: </0 AsIs: & UniqueSet/4 } Tile{ AsIs: s.Repeated#1/11 } Tile{ AsIs: e.Set-M#1/12 } Tile{ AsIs: e.Set-E#1/14 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[11], context[11] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[12], context[13], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & UniqueSet/4 e.Set#1/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Set#1 as range 5
  //DEBUG: e.Set#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & UniqueSet/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Set#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UniqueSet("UniqueSet", 1750850198U, 1789610235U, func_UniqueSet);


static refalrts::FnResult func_gen_ResolvingSets_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
    // </0 & ResolvingSets\1/4 (/7 t.SrcPos#2/9 (/13 e.Name#2/16 )/14 s.Used#2/15 # Any/20 )/8 >/1
    context[16] = context[11];
    context[17] = context[12];
    context[18] = context[5];
    context[19] = context[6];
    context[20] = refalrts::ident_left(  ident_Any, context[18], context[19] );
    if( ! context[20] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.Name#2 as range 16
    //DEBUG: t.SrcPos#2: 9
    //DEBUG: s.Used#2: 15
    //DEBUG: e.Name#2: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ResolvingSets\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.SrcPos#2/9 AsIs: (/13 AsIs: e.Name#2/16 AsIs: )/14 AsIs: s.Used#2/15 AsIs: # Any/20 AsIs: )/8 } Tile{ ]] }
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
  // </0 & ResolvingSets\1/4 (/7 t.SrcPos#2/9 (/13 e.Name#2/16 )/14 s.Used#2/15 e.Content#2/18 )/8 >/1
  context[16] = context[11];
  context[17] = context[12];
  context[18] = context[5];
  context[19] = context[6];
  // closed e.Name#2 as range 16
  // closed e.Content#2 as range 18
  //DEBUG: t.SrcPos#2: 9
  //DEBUG: s.Used#2: 15
  //DEBUG: e.Name#2: 16
  //DEBUG: e.Content#2: 18

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.SrcPos#2/9 AsIs: (/13 AsIs: e.Name#2/16 AsIs: )/14 AsIs: s.Used#2/15 } Tile{ AsIs: </0 Reuse: & NormalizeContent/4 } (/20 )/21 Tile{ AsIs: e.Content#2/18 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_NormalizeContent.ref.function );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolvingSets_L1("ResolvingSets\\1", 1750850198U, 1789610235U, func_gen_ResolvingSets_L1);


static refalrts::FnResult func_gen_ResolvingSets_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
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
    // </0 & ResolvingSets\2/4 # Changed/5 e.Sets#2/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Changed, context[5] ) )
      continue;
    // closed e.Sets#2 as range 6
    //DEBUG: e.Sets#2: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & ResolvingSets/5 AsIs: e.Sets#2/6 AsIs: >/1 ]] }
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
  // </0 & ResolvingSets\2/4 # NotChanged/5 e.Sets#2/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_NotChanged, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#2 as range 6
  //DEBUG: e.Sets#2: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ResolvingSets\2/4 # NotChanged/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Sets#2/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolvingSets_L2("ResolvingSets\\2", 1750850198U, 1789610235U, func_gen_ResolvingSets_L2);


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

static refalrts::NativeReference nat_ref_ResolvingSets("ResolvingSets", 1750850198U, 1789610235U, func_ResolvingSets);


static refalrts::FnResult func_NormalizeContent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
    // </0 & NormalizeContent/4 (/7 e.Chars#1/9 )/8 (/15 # Chars/17 e.Symbols#1/13 )/16 e.Tail#1/11 >/1
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
    context[17] = refalrts::ident_left(  ident_Chars, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Chars#1 as range 9
    // closed e.Symbols#1 as range 13
    // closed e.Tail#1 as range 11
    //DEBUG: e.Chars#1: 9
    //DEBUG: e.Symbols#1: 13
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 } Tile{ HalfReuse: </15 HalfReuse: & UniqueSet/17 } Tile{ AsIs: e.Chars#1/9 } Tile{ AsIs: e.Symbols#1/13 } Tile{ HalfReuse: >/8 } Tile{ AsIs: )/16 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[15] );
    refalrts::reinit_name( context[17], ref_UniqueSet.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Set t.idx e.idx ) e.idx
    // </0 & NormalizeContent/4 (/7 e.Chars#1/9 )/8 (/15 # Set/17 t.SrcPos#1/18 e.Name#1/13 )/16 e.Tail#1/11 >/1
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
    context[17] = refalrts::ident_left(  ident_Set, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Chars#1 as range 9
    // closed e.Tail#1 as range 11
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 13
    //DEBUG: e.Chars#1: 9
    //DEBUG: e.Tail#1: 11
    //DEBUG: t.SrcPos#1: 18
    //DEBUG: e.Name#1: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: # Set/17 AsIs: t.SrcPos#1/18 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 AsIs: e.Chars#1/9 AsIs: )/8 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) # Any e.idx
    // </0 & NormalizeContent/4 (/7 e.Chars#1/9 )/8 # Any/13 e.Tail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::ident_left(  ident_Any, context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Chars#1 as range 9
    // closed e.Tail#1 as range 11
    //DEBUG: e.Chars#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NormalizeContent/4 (/7 e.Chars#1/9 )/8 # Any/13 e.Tail#1/11 {REMOVED TILE}
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
  // </0 & NormalizeContent/4 (/7 e.Chars#1/9 )/8 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  if( ! refalrts::empty_seq( context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Chars#1 as range 9
  //DEBUG: e.Chars#1: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Chars/7 AsIs: e.Chars#1/9 AsIs: )/8 } Tile{ ]] }
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

static refalrts::NativeReference nat_ref_NormalizeContent("NormalizeContent", 1750850198U, 1789610235U, func_NormalizeContent);


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
    // </0 & SetCheckRecursion/4 e.Sets-B#1/7 (/13 t.SetNamePos#1/15 (/19 e.Name#1/17 )/20 s.Used#1/21 e.Content-B#1/22 (/28 # Set/30 t.SrcPos#1/33 e.Name#1/31 )/29 e.Content-E#1/24 )/14 e.Sets-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      // closed e.Sets-E#1 as range 9
      context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Name#1 as range 17
      if( ! refalrts::svar_left( context[21], context[11], context[12] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop();
      do {
        context[24] = context[11];
        context[25] = context[12];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = refalrts::ident_left(  ident_Set, context[26], context[27] );
        if( ! context[30] )
          continue;
        if( ! refalrts::repeated_evar_right( context[31], context[32], context[17], context[18], context[26], context[27] ) )
          continue;
        // closed e.Content-E#1 as range 24
        context[34] = refalrts::tvar_left( context[33], context[26], context[27] );
        if( ! context[34] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        //DEBUG: e.Sets-B#1: 7
        //DEBUG: e.Sets-E#1: 9
        //DEBUG: t.SetNamePos#1: 15
        //DEBUG: e.Name#1: 17
        //DEBUG: s.Used#1: 21
        //DEBUG: e.Content-B#1: 22
        //DEBUG: e.Content-E#1: 24
        //DEBUG: t.SrcPos#1: 33

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </28 HalfReuse: & WarningAt/30 AsIs: t.SrcPos#1/33 }"Recu"/35 Tile{ HalfReuse: 'r'/29 }"sive depended set "/37 Tile{ AsIs: e.Name#1/31 } >/39 Tile{ AsIs: </0 AsIs: & SetCheckRecursion/4 AsIs: e.Sets-B#1/7 AsIs: (/13 AsIs: t.SetNamePos#1/15 AsIs: (/19 AsIs: e.Name#1/17 AsIs: )/20 AsIs: s.Used#1/21 } Tile{ AsIs: e.Content-B#1/22 } Tile{ AsIs: e.Content-E#1/24 } Tile{ AsIs: )/14 AsIs: e.Sets-E#1/9 AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[35], context[36], "Recu", 4 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_chars( context[37], context[38], "sive depended set ", 18 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[39] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_call( context[28] );
        refalrts::reinit_name( context[30], ref_WarningAt.ref.function );
        refalrts::reinit_char( context[29], 'r' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::push_stack( context[39] );
        refalrts::push_stack( context[28] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[14];
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[0], context[21] );
        res = refalrts::splice_evar( res, context[39], context[39] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[29], context[29] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[28], context[34] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[22], context[23], context[11], context[12] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & SetCheckRecursion/4 e.Sets#1/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Sets#1 as range 5
  //DEBUG: e.Sets#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SetCheckRecursion/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Sets#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetCheckRecursion("SetCheckRecursion", 1750850198U, 1789610235U, func_SetCheckRecursion);


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
    // </0 & SetSubstitute/4 e.Sets-B#1/7 (/13 t.SetNamePos#1/15 (/19 e.Name#1/17 )/20 s.Used#1/21 e.Content-B#1/22 (/28 # Set/30 t.SrcPos#1/34 'A'/33 'n'/32 'y'/31 )/29 e.Content-E#1/24 )/14 e.Sets-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      // closed e.Sets-E#1 as range 9
      context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Name#1 as range 17
      if( ! refalrts::svar_left( context[21], context[11], context[12] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop();
      do {
        context[24] = context[11];
        context[25] = context[12];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = refalrts::ident_left(  ident_Set, context[26], context[27] );
        if( ! context[30] )
          continue;
        context[31] = refalrts::char_right( 'y', context[26], context[27] );
        if( ! context[31] )
          continue;
        context[32] = refalrts::char_right( 'n', context[26], context[27] );
        if( ! context[32] )
          continue;
        context[33] = refalrts::char_right( 'A', context[26], context[27] );
        if( ! context[33] )
          continue;
        // closed e.Content-E#1 as range 24
        context[35] = refalrts::tvar_left( context[34], context[26], context[27] );
        if( ! context[35] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        //DEBUG: e.Sets-B#1: 7
        //DEBUG: e.Sets-E#1: 9
        //DEBUG: t.SetNamePos#1: 15
        //DEBUG: e.Name#1: 17
        //DEBUG: s.Used#1: 21
        //DEBUG: e.Content-B#1: 22
        //DEBUG: e.Content-E#1: 24
        //DEBUG: t.SrcPos#1: 34

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.Content-B#1/22 (/28 # Set/30 t.SrcPos#1/34 'A'/33 'n'/32 {REMOVED TILE} e.Content-E#1/24 )/14 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B#1/7 AsIs: (/13 AsIs: t.SetNamePos#1/15 AsIs: (/19 AsIs: e.Name#1/17 AsIs: )/20 AsIs: s.Used#1/21 } Tile{ HalfReuse: # Any/31 AsIs: )/29 } Tile{ AsIs: e.Sets-E#1/9 } Tile{ ]] }
        refalrts::reinit_ident( context[4], ident_Changed );
        refalrts::reinit_ident( context[31], ident_Any );
        refalrts::link_brackets( context[13], context[29] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[31], context[29] );
        res = refalrts::splice_evar( res, context[4], context[21] );
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[22], context[23], context[11], context[12] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/7 (/13 t.SetNamePos#1/15 (/19 e.Name#1/17 )/20 s.UsedOuter#1/21 e.Content-B#1/22 (/30 # Set/32 t.SrcPos#1/33 e.IncName#1/28 )/31 e.Content-E#1/24 )/14 e.Sets-M#1/35 (/41 t.IncNamePos#1/43 (/47 e.IncName#1/49 )/48 s.UsedInner#1/51 e.IncContent#1/39 )/42 e.Sets-E#1/37 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Name#1 as range 17
      if( ! refalrts::svar_left( context[21], context[11], context[12] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop();
      do {
        context[24] = context[11];
        context[25] = context[12];
        context[26] = context[9];
        context[27] = context[10];
        context[28] = 0;
        context[29] = 0;
        context[30] = refalrts::brackets_left( context[28], context[29], context[24], context[25] );
        if( ! context[30] )
          continue;
        refalrts::bracket_pointers(context[30], context[31]);
        context[32] = refalrts::ident_left(  ident_Set, context[28], context[29] );
        if( ! context[32] )
          continue;
        // closed e.Content-E#1 as range 24
        context[34] = refalrts::tvar_left( context[33], context[28], context[29] );
        if( ! context[34] )
          continue;
        // closed e.IncName#1 as range 28
        context[35] = 0;
        context[36] = 0;
        refalrts::start_e_loop();
        do {
          context[37] = context[26];
          context[38] = context[27];
          context[39] = 0;
          context[40] = 0;
          context[41] = refalrts::brackets_left( context[39], context[40], context[37], context[38] );
          if( ! context[41] )
            continue;
          refalrts::bracket_pointers(context[41], context[42]);
          // closed e.Sets-E#1 as range 37
          context[44] = refalrts::tvar_left( context[43], context[39], context[40] );
          if( ! context[44] )
            continue;
          context[45] = 0;
          context[46] = 0;
          context[47] = refalrts::brackets_left( context[45], context[46], context[39], context[40] );
          if( ! context[47] )
            continue;
          refalrts::bracket_pointers(context[47], context[48]);
          if( ! refalrts::repeated_evar_left( context[49], context[50], context[28], context[29], context[45], context[46] ) )
            continue;
          if( ! refalrts::empty_seq( context[45], context[46] ) )
            continue;
          if( ! refalrts::svar_left( context[51], context[39], context[40] ) )
            continue;
          // closed e.IncContent#1 as range 39
          //DEBUG: e.Sets-B#1: 7
          //DEBUG: t.SetNamePos#1: 15
          //DEBUG: e.Name#1: 17
          //DEBUG: s.UsedOuter#1: 21
          //DEBUG: e.Content-B#1: 22
          //DEBUG: e.Content-E#1: 24
          //DEBUG: t.SrcPos#1: 33
          //DEBUG: e.IncName#1: 28
          //DEBUG: e.Sets-M#1: 35
          //DEBUG: e.Sets-E#1: 37
          //DEBUG: t.IncNamePos#1: 43
          //DEBUG: s.UsedInner#1: 51
          //DEBUG: e.IncContent#1: 39

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} (/30 {REMOVED TILE} t.SrcPos#1/33 e.IncName#1/28 )/31 {REMOVED TILE} {REMOVED TILE} s.UsedInner#1/51 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B#1/7 AsIs: (/13 AsIs: t.SetNamePos#1/15 AsIs: (/19 AsIs: e.Name#1/17 AsIs: )/20 AsIs: s.UsedOuter#1/21 } Tile{ AsIs: e.Content-B#1/22 } e.IncContent#1/39/52 Tile{ AsIs: e.Content-E#1/24 } Tile{ AsIs: )/14 AsIs: e.Sets-M#1/35 AsIs: (/41 AsIs: t.IncNamePos#1/43 AsIs: (/47 AsIs: e.IncName#1/49 AsIs: )/48 } Tile{ Reuse: # Used/32 } Tile{ AsIs: e.IncContent#1/39 } Tile{ AsIs: )/42 } Tile{ AsIs: e.Sets-E#1/37 } Tile{ ]] }
          if (! refalrts::copy_evar(context[52], context[53], context[39], context[40]))
            return refalrts::cNoMemory;
          refalrts::reinit_ident( context[4], ident_Changed );
          refalrts::update_ident( context[32], ident_Used );
          refalrts::link_brackets( context[41], context[42] );
          refalrts::link_brackets( context[47], context[48] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[19], context[20] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[37], context[38] );
          res = refalrts::splice_evar( res, context[42], context[42] );
          res = refalrts::splice_evar( res, context[39], context[40] );
          res = refalrts::splice_evar( res, context[32], context[32] );
          res = refalrts::splice_evar( res, context[14], context[48] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[52], context[53] );
          res = refalrts::splice_evar( res, context[22], context[23] );
          res = refalrts::splice_evar( res, context[4], context[21] );
          refalrts::splice_to_freelist_open( trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[35], context[36], context[26], context[27] ) );
      } while ( refalrts::open_evar_advance( context[22], context[23], context[11], context[12] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/7 (/13 t.IncNamePos#1/15 (/19 e.IncName#1/17 )/20 s.UsedInner#1/21 e.IncContent#1/11 )/14 e.Sets-M#1/22 (/28 t.SetNamePos#1/30 (/34 e.Name#1/32 )/35 s.UsedOuter#1/36 e.Content-B#1/37 (/43 # Set/45 t.SrcPos#1/48 e.IncName#1/46 )/44 e.Content-E#1/39 )/29 e.Sets-E#1/24 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.IncName#1 as range 17
      if( ! refalrts::svar_left( context[21], context[11], context[12] ) )
        continue;
      // closed e.IncContent#1 as range 11
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop();
      do {
        context[24] = context[9];
        context[25] = context[10];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        // closed e.Sets-E#1 as range 24
        context[31] = refalrts::tvar_left( context[30], context[26], context[27] );
        if( ! context[31] )
          continue;
        context[32] = 0;
        context[33] = 0;
        context[34] = refalrts::brackets_left( context[32], context[33], context[26], context[27] );
        if( ! context[34] )
          continue;
        refalrts::bracket_pointers(context[34], context[35]);
        // closed e.Name#1 as range 32
        if( ! refalrts::svar_left( context[36], context[26], context[27] ) )
          continue;
        context[37] = 0;
        context[38] = 0;
        refalrts::start_e_loop();
        do {
          context[39] = context[26];
          context[40] = context[27];
          context[41] = 0;
          context[42] = 0;
          context[43] = refalrts::brackets_left( context[41], context[42], context[39], context[40] );
          if( ! context[43] )
            continue;
          refalrts::bracket_pointers(context[43], context[44]);
          context[45] = refalrts::ident_left(  ident_Set, context[41], context[42] );
          if( ! context[45] )
            continue;
          if( ! refalrts::repeated_evar_right( context[46], context[47], context[17], context[18], context[41], context[42] ) )
            continue;
          // closed e.Content-E#1 as range 39
          context[49] = refalrts::tvar_left( context[48], context[41], context[42] );
          if( ! context[49] )
            continue;
          if( ! refalrts::empty_seq( context[41], context[42] ) )
            continue;
          //DEBUG: e.Sets-B#1: 7
          //DEBUG: t.IncNamePos#1: 15
          //DEBUG: e.IncName#1: 17
          //DEBUG: s.UsedInner#1: 21
          //DEBUG: e.IncContent#1: 11
          //DEBUG: e.Sets-M#1: 22
          //DEBUG: e.Sets-E#1: 24
          //DEBUG: t.SetNamePos#1: 30
          //DEBUG: e.Name#1: 32
          //DEBUG: s.UsedOuter#1: 36
          //DEBUG: e.Content-B#1: 37
          //DEBUG: e.Content-E#1: 39
          //DEBUG: t.SrcPos#1: 48

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.UsedInner#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/43 {REMOVED TILE} t.SrcPos#1/48 e.IncName#1/46 )/44 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B#1/7 AsIs: (/13 AsIs: t.IncNamePos#1/15 AsIs: (/19 AsIs: e.IncName#1/17 AsIs: )/20 } Tile{ Reuse: # Used/45 } Tile{ AsIs: e.IncContent#1/11 } Tile{ AsIs: )/14 AsIs: e.Sets-M#1/22 AsIs: (/28 AsIs: t.SetNamePos#1/30 AsIs: (/34 AsIs: e.Name#1/32 AsIs: )/35 AsIs: s.UsedOuter#1/36 } Tile{ AsIs: e.Content-B#1/37 } e.IncContent#1/11/50 Tile{ AsIs: e.Content-E#1/39 } Tile{ AsIs: )/29 } Tile{ AsIs: e.Sets-E#1/24 } Tile{ ]] }
          if (! refalrts::copy_evar(context[50], context[51], context[11], context[12]))
            return refalrts::cNoMemory;
          refalrts::reinit_ident( context[4], ident_Changed );
          refalrts::update_ident( context[45], ident_Used );
          refalrts::link_brackets( context[28], context[29] );
          refalrts::link_brackets( context[34], context[35] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[19], context[20] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[29], context[29] );
          res = refalrts::splice_evar( res, context[39], context[40] );
          res = refalrts::splice_evar( res, context[50], context[51] );
          res = refalrts::splice_evar( res, context[37], context[38] );
          res = refalrts::splice_evar( res, context[14], context[36] );
          res = refalrts::splice_evar( res, context[11], context[12] );
          res = refalrts::splice_evar( res, context[45], context[45] );
          res = refalrts::splice_evar( res, context[4], context[20] );
          refalrts::splice_to_freelist_open( trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[37], context[38], context[26], context[27] ) );
      } while ( refalrts::open_evar_advance( context[22], context[23], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/7 (/13 t.SetNamePos#1/15 (/19 e.Name#1/17 )/20 s.Used#1/21 e.Content-B#1/22 (/28 # Set/30 t.SrcPos#1/31 e.IncName#1/26 )/29 e.Content-E#1/24 )/14 e.Sets-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      // closed e.Sets-E#1 as range 9
      context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Name#1 as range 17
      if( ! refalrts::svar_left( context[21], context[11], context[12] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop();
      do {
        context[24] = context[11];
        context[25] = context[12];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = refalrts::ident_left(  ident_Set, context[26], context[27] );
        if( ! context[30] )
          continue;
        // closed e.Content-E#1 as range 24
        context[32] = refalrts::tvar_left( context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        // closed e.IncName#1 as range 26
        //DEBUG: e.Sets-B#1: 7
        //DEBUG: e.Sets-E#1: 9
        //DEBUG: t.SetNamePos#1: 15
        //DEBUG: e.Name#1: 17
        //DEBUG: s.Used#1: 21
        //DEBUG: e.Content-B#1: 22
        //DEBUG: e.Content-E#1: 24
        //DEBUG: t.SrcPos#1: 31
        //DEBUG: e.IncName#1: 26

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} e.Sets-B#1/7 {REMOVED TILE} t.SetNamePos#1/15 {REMOVED TILE} e.Name#1/17 {REMOVED TILE} s.Used#1/21 e.Content-B#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content-E#1/24 {REMOVED TILE} e.Sets-E#1/9 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/31 } Tile{ HalfReuse: 's'/20 } Tile{ HalfReuse: 'e'/29 } Tile{ HalfReuse: 't'/28 HalfReuse: ' '/30 } Tile{ AsIs: e.IncName#1/26 } Tile{ HalfReuse: ' '/14 } Tile{ HalfReuse: 'n'/19 } Tile{ HalfReuse: 'o'/13 }"t defined"/33 Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[33], context[34], "t defined", 9 ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_ErrorAt.ref.function );
        refalrts::reinit_char( context[20], 's' );
        refalrts::reinit_char( context[29], 'e' );
        refalrts::reinit_char( context[28], 't' );
        refalrts::reinit_char( context[30], ' ' );
        refalrts::reinit_char( context[14], ' ' );
        refalrts::reinit_char( context[19], 'n' );
        refalrts::reinit_char( context[13], 'o' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[14], context[14] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[28], context[30] );
        res = refalrts::splice_evar( res, context[29], context[29] );
        res = refalrts::splice_evar( res, context[20], context[20] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        refalrts::splice_to_freelist_open( context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[22], context[23], context[11], context[12] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & SetSubstitute/4 e.Sets#1/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Sets#1 as range 5
  //DEBUG: e.Sets#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & SetSubstitute/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # NotChanged/0 } Tile{ AsIs: e.Sets#1/5 } Tile{ ]] }
  refalrts::reinit_ident( context[0], ident_NotChanged );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetSubstitute("SetSubstitute", 1750850198U, 1789610235U, func_SetSubstitute);


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
    // </0 & SubstituteSetsToRules/4 (/7 (/19 t.SetNamePos#1/26 (/30 e.Name#1/28 )/31 s.Used#1/32 (/23 # Chars/25 e.Content#1/21 )/24 )/20 e.Sets#1/13 )/8 (/11 e.Rules-B#1/33 (/39 t.SentNamePos#1/41 (/45 e.RuleName#1/43 )/46 e.Alternatives-B#1/47 (/53 (/57 # Set/59 t.SrcPos#1/62 e.Name#1/60 )/58 t.Flush#1/64 t.NextState#1/66 )/54 e.Alternatives-E#1/49 )/40 e.Rules-E#1/35 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[17], context[18] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  ident_Chars, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Content#1 as range 21
    // closed e.Sets#1 as range 13
    context[27] = refalrts::tvar_left( context[26], context[17], context[18] );
    if( ! context[27] )
      continue;
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[17], context[18] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.Name#1 as range 28
    if( ! refalrts::svar_left( context[32], context[17], context[18] ) )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    context[33] = 0;
    context[34] = 0;
    refalrts::start_e_loop();
    do {
      context[35] = context[15];
      context[36] = context[16];
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[35], context[36] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      // closed e.Rules-E#1 as range 35
      context[42] = refalrts::tvar_left( context[41], context[37], context[38] );
      if( ! context[42] )
        continue;
      context[43] = 0;
      context[44] = 0;
      context[45] = refalrts::brackets_left( context[43], context[44], context[37], context[38] );
      if( ! context[45] )
        continue;
      refalrts::bracket_pointers(context[45], context[46]);
      // closed e.RuleName#1 as range 43
      context[47] = 0;
      context[48] = 0;
      refalrts::start_e_loop();
      do {
        context[49] = context[37];
        context[50] = context[38];
        context[51] = 0;
        context[52] = 0;
        context[53] = refalrts::brackets_left( context[51], context[52], context[49], context[50] );
        if( ! context[53] )
          continue;
        refalrts::bracket_pointers(context[53], context[54]);
        context[55] = 0;
        context[56] = 0;
        context[57] = refalrts::brackets_left( context[55], context[56], context[51], context[52] );
        if( ! context[57] )
          continue;
        refalrts::bracket_pointers(context[57], context[58]);
        context[59] = refalrts::ident_left(  ident_Set, context[55], context[56] );
        if( ! context[59] )
          continue;
        if( ! refalrts::repeated_evar_right( context[60], context[61], context[28], context[29], context[55], context[56] ) )
          continue;
        // closed e.Alternatives-E#1 as range 49
        context[63] = refalrts::tvar_left( context[62], context[55], context[56] );
        if( ! context[63] )
          continue;
        if( ! refalrts::empty_seq( context[55], context[56] ) )
          continue;
        context[65] = refalrts::tvar_left( context[64], context[51], context[52] );
        if( ! context[65] )
          continue;
        context[67] = refalrts::tvar_left( context[66], context[51], context[52] );
        if( ! context[67] )
          continue;
        if( ! refalrts::empty_seq( context[51], context[52] ) )
          continue;
        //DEBUG: e.Content#1: 21
        //DEBUG: e.Sets#1: 13
        //DEBUG: t.SetNamePos#1: 26
        //DEBUG: e.Name#1: 28
        //DEBUG: s.Used#1: 32
        //DEBUG: e.Rules-B#1: 33
        //DEBUG: e.Rules-E#1: 35
        //DEBUG: t.SentNamePos#1: 41
        //DEBUG: e.RuleName#1: 43
        //DEBUG: e.Alternatives-B#1: 47
        //DEBUG: e.Alternatives-E#1: 49
        //DEBUG: t.SrcPos#1: 62
        //DEBUG: t.Flush#1: 64
        //DEBUG: t.NextState#1: 66

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} s.Used#1/32 {REMOVED TILE} t.SrcPos#1/62 e.Name#1/60 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/19 AsIs: t.SetNamePos#1/26 AsIs: (/30 AsIs: e.Name#1/28 AsIs: )/31 } # Used/68 Tile{ AsIs: (/23 AsIs: # Chars/25 AsIs: e.Content#1/21 AsIs: )/24 AsIs: )/20 AsIs: e.Sets#1/13 AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/33 AsIs: (/39 AsIs: t.SentNamePos#1/41 AsIs: (/45 AsIs: e.RuleName#1/43 AsIs: )/46 AsIs: e.Alternatives-B#1/47 AsIs: (/53 AsIs: (/57 Reuse: # Chars/59 } e.Content#1/21/69 Tile{ AsIs: )/58 AsIs: t.Flush#1/64 AsIs: t.NextState#1/66 AsIs: )/54 AsIs: e.Alternatives-E#1/49 AsIs: )/40 AsIs: e.Rules-E#1/35 AsIs: )/12 AsIs: >/1 ]] }
        if( ! refalrts::alloc_ident( context[68], ident_Used ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_evar(context[69], context[70], context[21], context[22]))
          return refalrts::cNoMemory;
        refalrts::update_ident( context[59], ident_Chars );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[39], context[40] );
        refalrts::link_brackets( context[53], context[54] );
        refalrts::link_brackets( context[57], context[58] );
        refalrts::link_brackets( context[45], context[46] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[30], context[31] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[58];
        res = refalrts::splice_evar( res, context[69], context[70] );
        res = refalrts::splice_evar( res, context[23], context[59] );
        res = refalrts::splice_evar( res, context[68], context[68] );
        refalrts::splice_to_freelist_open( context[31], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[47], context[48], context[37], context[38] ) );
    } while ( refalrts::open_evar_advance( context[33], context[34], context[15], context[16] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ( t.idx ( e.idx ) s.idx # Any ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/19 t.SetNamePos#1/22 (/26 e.Name#1/24 )/27 s.Used#1/28 # Any/21 )/20 e.Sets#1/13 )/8 (/11 e.Rules-B#1/29 (/35 t.SentNamePos#1/37 (/41 e.RuleName#1/39 )/42 e.Alternatives-B#1/43 (/49 (/53 # Set/55 t.SrcPos#1/58 e.Name#1/56 )/54 t.Flush#1/60 t.NextState#1/62 )/50 e.Alternatives-E#1/45 )/36 e.Rules-E#1/31 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_right(  ident_Any, context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.Sets#1 as range 13
    context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[17], context[18] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    // closed e.Name#1 as range 24
    if( ! refalrts::svar_left( context[28], context[17], context[18] ) )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    context[29] = 0;
    context[30] = 0;
    refalrts::start_e_loop();
    do {
      context[31] = context[15];
      context[32] = context[16];
      context[33] = 0;
      context[34] = 0;
      context[35] = refalrts::brackets_left( context[33], context[34], context[31], context[32] );
      if( ! context[35] )
        continue;
      refalrts::bracket_pointers(context[35], context[36]);
      // closed e.Rules-E#1 as range 31
      context[38] = refalrts::tvar_left( context[37], context[33], context[34] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_left( context[39], context[40], context[33], context[34] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      // closed e.RuleName#1 as range 39
      context[43] = 0;
      context[44] = 0;
      refalrts::start_e_loop();
      do {
        context[45] = context[33];
        context[46] = context[34];
        context[47] = 0;
        context[48] = 0;
        context[49] = refalrts::brackets_left( context[47], context[48], context[45], context[46] );
        if( ! context[49] )
          continue;
        refalrts::bracket_pointers(context[49], context[50]);
        context[51] = 0;
        context[52] = 0;
        context[53] = refalrts::brackets_left( context[51], context[52], context[47], context[48] );
        if( ! context[53] )
          continue;
        refalrts::bracket_pointers(context[53], context[54]);
        context[55] = refalrts::ident_left(  ident_Set, context[51], context[52] );
        if( ! context[55] )
          continue;
        if( ! refalrts::repeated_evar_right( context[56], context[57], context[24], context[25], context[51], context[52] ) )
          continue;
        // closed e.Alternatives-E#1 as range 45
        context[59] = refalrts::tvar_left( context[58], context[51], context[52] );
        if( ! context[59] )
          continue;
        if( ! refalrts::empty_seq( context[51], context[52] ) )
          continue;
        context[61] = refalrts::tvar_left( context[60], context[47], context[48] );
        if( ! context[61] )
          continue;
        context[63] = refalrts::tvar_left( context[62], context[47], context[48] );
        if( ! context[63] )
          continue;
        if( ! refalrts::empty_seq( context[47], context[48] ) )
          continue;
        //DEBUG: e.Sets#1: 13
        //DEBUG: t.SetNamePos#1: 22
        //DEBUG: e.Name#1: 24
        //DEBUG: s.Used#1: 28
        //DEBUG: e.Rules-B#1: 29
        //DEBUG: e.Rules-E#1: 31
        //DEBUG: t.SentNamePos#1: 37
        //DEBUG: e.RuleName#1: 39
        //DEBUG: e.Alternatives-B#1: 43
        //DEBUG: e.Alternatives-E#1: 45
        //DEBUG: t.SrcPos#1: 58
        //DEBUG: t.Flush#1: 60
        //DEBUG: t.NextState#1: 62

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} s.Used#1/28 {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/58 e.Name#1/56 )/54 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/19 AsIs: t.SetNamePos#1/22 AsIs: (/26 AsIs: e.Name#1/24 AsIs: )/27 } Tile{ Reuse: # Used/55 } Tile{ AsIs: # Any/21 AsIs: )/20 AsIs: e.Sets#1/13 AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/29 AsIs: (/35 AsIs: t.SentNamePos#1/37 AsIs: (/41 AsIs: e.RuleName#1/39 AsIs: )/42 AsIs: e.Alternatives-B#1/43 AsIs: (/49 HalfReuse: # Any/53 } Tile{ AsIs: t.Flush#1/60 AsIs: t.NextState#1/62 AsIs: )/50 AsIs: e.Alternatives-E#1/45 AsIs: )/36 AsIs: e.Rules-E#1/31 AsIs: )/12 AsIs: >/1 ]] }
        refalrts::update_ident( context[55], ident_Used );
        refalrts::reinit_ident( context[53], ident_Any );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[35], context[36] );
        refalrts::link_brackets( context[49], context[50] );
        refalrts::link_brackets( context[41], context[42] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[26], context[27] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[60];
        res = refalrts::splice_evar( res, context[21], context[53] );
        res = refalrts::splice_evar( res, context[55], context[55] );
        refalrts::splice_to_freelist_open( context[27], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[43], context[44], context[33], context[34] ) );
    } while ( refalrts::open_evar_advance( context[29], context[30], context[15], context[16] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ( t.idx ( e.idx ) # NotUsed e.idx ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/19 t.SetNamePos#1/21 (/25 e.Name#1/23 )/26 # NotUsed/27 e.Content#1/17 )/20 e.Sets#1/13 )/8 (/11 e.Rules#1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.Sets#1 as range 13
    // closed e.Rules#1 as range 15
    context[22] = refalrts::tvar_left( context[21], context[17], context[18] );
    if( ! context[22] )
      continue;
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[17], context[18] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  ident_NotUsed, context[17], context[18] );
    if( ! context[27] )
      continue;
    // closed e.Name#1 as range 23
    // closed e.Content#1 as range 17
    //DEBUG: e.Sets#1: 13
    //DEBUG: e.Rules#1: 15
    //DEBUG: t.SetNamePos#1: 21
    //DEBUG: e.Name#1: 23
    //DEBUG: e.Content#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content#1/17 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 } Tile{ AsIs: t.SetNamePos#1/21 } 'S'/28 Tile{ HalfReuse: 'e'/7 HalfReuse: 't'/19 } ' '/29 Tile{ HalfReuse: ':'/25 AsIs: e.Name#1/23 HalfReuse: ':'/26 HalfReuse: ' '/27 }"is not used"/30 >/32 </33 & SubstituteSetsToRules/34 Tile{ HalfReuse: (/20 AsIs: e.Sets#1/13 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/15 AsIs: )/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[28], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[30], context[31], "is not used", 11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], ref_SubstituteSetsToRules.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WarningAt.ref.function );
    refalrts::reinit_char( context[7], 'e' );
    refalrts::reinit_char( context[19], 't' );
    refalrts::reinit_char( context[25], ':' );
    refalrts::reinit_char( context[26], ':' );
    refalrts::reinit_char( context[27], ' ' );
    refalrts::reinit_open_bracket( context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[33] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[20], context[8] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[30], context[34] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[7], context[19] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ( t.idx ( e.idx ) # Used e.idx ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/19 t.SetNamePos#1/21 (/25 e.Name#1/23 )/26 # Used/27 e.Content#1/17 )/20 e.Sets#1/13 )/8 (/11 e.Rules#1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.Sets#1 as range 13
    // closed e.Rules#1 as range 15
    context[22] = refalrts::tvar_left( context[21], context[17], context[18] );
    if( ! context[22] )
      continue;
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[17], context[18] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  ident_Used, context[17], context[18] );
    if( ! context[27] )
      continue;
    // closed e.Name#1 as range 23
    // closed e.Content#1 as range 17
    //DEBUG: e.Sets#1: 13
    //DEBUG: e.Rules#1: 15
    //DEBUG: t.SetNamePos#1: 21
    //DEBUG: e.Name#1: 23
    //DEBUG: e.Content#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 (/19 t.SetNamePos#1/21 (/25 e.Name#1/23 )/26 # Used/27 e.Content#1/17 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 } Tile{ HalfReuse: (/20 AsIs: e.Sets#1/13 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/15 AsIs: )/12 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[20], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B#1/17 (/23 t.SentNamePos#1/25 (/29 e.RuleName#1/27 )/30 e.Alternatives-B#1/31 (/37 (/41 # Set/43 t.SrcPos#1/47 'A'/46 'n'/45 'y'/44 )/42 t.Flush#1/49 t.NextState#1/51 )/38 e.Alternatives-E#1/33 )/24 e.Rules-E#1/19 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop();
    do {
      context[19] = context[15];
      context[20] = context[16];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.Rules-E#1 as range 19
      context[26] = refalrts::tvar_left( context[25], context[21], context[22] );
      if( ! context[26] )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      // closed e.RuleName#1 as range 27
      context[31] = 0;
      context[32] = 0;
      refalrts::start_e_loop();
      do {
        context[33] = context[21];
        context[34] = context[22];
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[33], context[34] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        context[39] = 0;
        context[40] = 0;
        context[41] = refalrts::brackets_left( context[39], context[40], context[35], context[36] );
        if( ! context[41] )
          continue;
        refalrts::bracket_pointers(context[41], context[42]);
        context[43] = refalrts::ident_left(  ident_Set, context[39], context[40] );
        if( ! context[43] )
          continue;
        context[44] = refalrts::char_right( 'y', context[39], context[40] );
        if( ! context[44] )
          continue;
        context[45] = refalrts::char_right( 'n', context[39], context[40] );
        if( ! context[45] )
          continue;
        context[46] = refalrts::char_right( 'A', context[39], context[40] );
        if( ! context[46] )
          continue;
        // closed e.Alternatives-E#1 as range 33
        context[48] = refalrts::tvar_left( context[47], context[39], context[40] );
        if( ! context[48] )
          continue;
        if( ! refalrts::empty_seq( context[39], context[40] ) )
          continue;
        context[50] = refalrts::tvar_left( context[49], context[35], context[36] );
        if( ! context[50] )
          continue;
        context[52] = refalrts::tvar_left( context[51], context[35], context[36] );
        if( ! context[52] )
          continue;
        if( ! refalrts::empty_seq( context[35], context[36] ) )
          continue;
        //DEBUG: e.Rules-B#1: 17
        //DEBUG: e.Rules-E#1: 19
        //DEBUG: t.SentNamePos#1: 25
        //DEBUG: e.RuleName#1: 27
        //DEBUG: e.Alternatives-B#1: 31
        //DEBUG: e.Alternatives-E#1: 33
        //DEBUG: t.SrcPos#1: 47
        //DEBUG: t.Flush#1: 49
        //DEBUG: t.NextState#1: 51

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} # Set/43 t.SrcPos#1/47 'A'/46 'n'/45 'y'/44 )/42 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/17 AsIs: (/23 AsIs: t.SentNamePos#1/25 AsIs: (/29 AsIs: e.RuleName#1/27 AsIs: )/30 AsIs: e.Alternatives-B#1/31 AsIs: (/37 HalfReuse: # Any/41 } Tile{ AsIs: t.Flush#1/49 AsIs: t.NextState#1/51 AsIs: )/38 AsIs: e.Alternatives-E#1/33 AsIs: )/24 AsIs: e.Rules-E#1/19 AsIs: )/12 AsIs: >/1 ]] }
        refalrts::reinit_ident( context[41], ident_Any );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[37], context[38] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[49];
        refalrts::splice_to_freelist_open( context[41], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[31], context[32], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[17], context[18], context[15], context[16] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B#1/17 (/23 t.SentNamePos#1/25 (/29 e.RuleName#1/27 )/30 e.Alternatives-B#1/31 (/37 (/41 # Set/43 t.SrcPos#1/44 e.Name#1/39 )/42 t.Flush#1/46 t.NextState#1/48 )/38 e.Alternatives-E#1/33 )/24 e.Rules-E#1/19 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop();
    do {
      context[19] = context[15];
      context[20] = context[16];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.Rules-E#1 as range 19
      context[26] = refalrts::tvar_left( context[25], context[21], context[22] );
      if( ! context[26] )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      // closed e.RuleName#1 as range 27
      context[31] = 0;
      context[32] = 0;
      refalrts::start_e_loop();
      do {
        context[33] = context[21];
        context[34] = context[22];
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[33], context[34] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        context[39] = 0;
        context[40] = 0;
        context[41] = refalrts::brackets_left( context[39], context[40], context[35], context[36] );
        if( ! context[41] )
          continue;
        refalrts::bracket_pointers(context[41], context[42]);
        context[43] = refalrts::ident_left(  ident_Set, context[39], context[40] );
        if( ! context[43] )
          continue;
        // closed e.Alternatives-E#1 as range 33
        context[45] = refalrts::tvar_left( context[44], context[39], context[40] );
        if( ! context[45] )
          continue;
        // closed e.Name#1 as range 39
        context[47] = refalrts::tvar_left( context[46], context[35], context[36] );
        if( ! context[47] )
          continue;
        context[49] = refalrts::tvar_left( context[48], context[35], context[36] );
        if( ! context[49] )
          continue;
        if( ! refalrts::empty_seq( context[35], context[36] ) )
          continue;
        //DEBUG: e.Rules-B#1: 17
        //DEBUG: e.Rules-E#1: 19
        //DEBUG: t.SentNamePos#1: 25
        //DEBUG: e.RuleName#1: 27
        //DEBUG: e.Alternatives-B#1: 31
        //DEBUG: e.Alternatives-E#1: 33
        //DEBUG: t.SrcPos#1: 44
        //DEBUG: e.Name#1: 39
        //DEBUG: t.Flush#1: 46
        //DEBUG: t.NextState#1: 48

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} e.Rules-B#1/17 {REMOVED TILE} t.SentNamePos#1/25 {REMOVED TILE} e.RuleName#1/27 {REMOVED TILE} e.Alternatives-B#1/31 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Flush#1/46 t.NextState#1/48 {REMOVED TILE} e.Alternatives-E#1/33 {REMOVED TILE} e.Rules-E#1/19 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/44 } Tile{ HalfReuse: 'U'/42 } Tile{ HalfReuse: 'n'/37 HalfReuse: 'd'/41 HalfReuse: 'e'/43 } Tile{ HalfReuse: 'c'/7 HalfReuse: 'l'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 'r'/12 } Tile{ HalfReuse: 'e'/24 } Tile{ HalfReuse: 'd'/38 } Tile{ HalfReuse: ' '/30 } Tile{ HalfReuse: 's'/29 } Tile{ HalfReuse: 'e'/23 }"t "/50 Tile{ AsIs: e.Name#1/39 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[50], context[51], "t ", 2 ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_ErrorAt.ref.function );
        refalrts::reinit_char( context[42], 'U' );
        refalrts::reinit_char( context[37], 'n' );
        refalrts::reinit_char( context[41], 'd' );
        refalrts::reinit_char( context[43], 'e' );
        refalrts::reinit_char( context[7], 'c' );
        refalrts::reinit_char( context[8], 'l' );
        refalrts::reinit_char( context[11], 'a' );
        refalrts::reinit_char( context[12], 'r' );
        refalrts::reinit_char( context[24], 'e' );
        refalrts::reinit_char( context[38], 'd' );
        refalrts::reinit_char( context[30], ' ' );
        refalrts::reinit_char( context[29], 's' );
        refalrts::reinit_char( context[23], 'e' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[39], context[40] );
        res = refalrts::splice_evar( res, context[50], context[51] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[29], context[29] );
        res = refalrts::splice_evar( res, context[30], context[30] );
        res = refalrts::splice_evar( res, context[38], context[38] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[7], context[11] );
        res = refalrts::splice_evar( res, context[37], context[43] );
        res = refalrts::splice_evar( res, context[42], context[42] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        refalrts::splice_to_freelist_open( context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[31], context[32], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[17], context[18], context[15], context[16] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( ) ( e.idx )
  // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules#1/15 )/12 >/1
  context[13] = context[5];
  context[14] = context[6];
  context[15] = context[9];
  context[16] = context[10];
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Rules#1 as range 15
  //DEBUG: e.Rules#1: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Rules#1/15 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SubstituteSetsToRules("SubstituteSetsToRules", 1750850198U, 1789610235U, func_SubstituteSetsToRules);


static refalrts::FnResult func_SetDiff(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
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
    // </0 & SetDiff/4 (/7 e.Set#1/13 )/8 (/11 # Any/17 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = refalrts::ident_left(  ident_Any, context[15], context[16] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Set#1 as range 13
    //DEBUG: e.Set#1: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SetDiff/4 (/7 e.Set#1/13 )/8 (/11 # Any/17 )/12 >/1 {REMOVED TILE}
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
    // </0 & SetDiff/4 (/7 e.Set1-B#1/17 s.Common#1/23 e.Set1-E#1/19 )/8 (/11 e.Set2-B#1/24 s.Common#1/28 e.Set2-E#1/26 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop();
    do {
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
        continue;
      // closed e.Set1-E#1 as range 19
      context[24] = 0;
      context[25] = 0;
      refalrts::start_e_loop();
      do {
        context[26] = context[21];
        context[27] = context[22];
        if( ! refalrts::repeated_stvar_left( context[28], context[23], context[26], context[27] ) )
          continue;
        // closed e.Set2-E#1 as range 26
        //DEBUG: e.Set1-B#1: 17
        //DEBUG: s.Common#1: 23
        //DEBUG: e.Set1-E#1: 19
        //DEBUG: e.Set2-B#1: 24
        //DEBUG: e.Set2-E#1: 26

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Common#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Common#1/28 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetDiff/4 AsIs: (/7 } Tile{ AsIs: e.Set1-B#1/17 } Tile{ AsIs: e.Set1-E#1/19 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Set2-B#1/24 } Tile{ AsIs: e.Set2-E#1/26 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[8], context[11] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        refalrts::splice_to_freelist_open( context[7], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[24], context[25], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[17], context[18], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx )
  // </0 & SetDiff/4 (/7 e.SetDiff#1/13 )/8 (/11 e.Set2#1/15 )/12 >/1
  context[13] = context[5];
  context[14] = context[6];
  context[15] = context[9];
  context[16] = context[10];
  // closed e.SetDiff#1 as range 13
  // closed e.Set2#1 as range 15
  //DEBUG: e.SetDiff#1: 13
  //DEBUG: e.Set2#1: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SetDiff/4 (/7 {REMOVED TILE} )/8 (/11 e.Set2#1/15 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.SetDiff#1/13 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetDiff("SetDiff", 1750850198U, 1789610235U, func_SetDiff);


static refalrts::FnResult func_NormalizeAlternative(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
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
    // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/20 )/8 (/11 (/14 # Chars/24 e.Alternative#1/22 )/15 t.Flush#1/16 t.Next#1/18 )/12 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[22] = 0;
    context[23] = 0;
    if( ! refalrts::brackets_term( context[22], context[23], context[14] ) )
      continue;
    context[24] = refalrts::ident_left(  ident_Chars, context[22], context[23] );
    if( ! context[24] )
      continue;
    // closed e.CatchedChars#1 as range 20
    // closed e.Alternative#1 as range 22
    //DEBUG: t.Flush#1: 16
    //DEBUG: t.Next#1: 18
    //DEBUG: s.CatchedEOF#1: 13
    //DEBUG: e.CatchedChars#1: 20
    //DEBUG: e.Alternative#1: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.CatchedEOF#1/13 } Tile{ AsIs: </0 Reuse: & UniqueSet/4 } Tile{ AsIs: e.CatchedChars#1/20 } Tile{ AsIs: e.Alternative#1/22 } Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: (/14 HalfReuse: </24 } & SetDiff/25 (/26 e.Alternative#1/22/27 )/29 (/30 e.CatchedChars#1/20/31 )/33 >/34 Tile{ AsIs: )/15 AsIs: t.Flush#1/16 AsIs: t.Next#1/18 AsIs: )/12 } Tile{ ]] }
    if( ! refalrts::alloc_name( context[25], ref_SetDiff.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[27], context[28], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[31], context[32], context[20], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_UniqueSet.ref.function );
    refalrts::reinit_open_call( context[24] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[30], context[33] );
    refalrts::link_brackets( context[26], context[29] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[12] );
    res = refalrts::splice_evar( res, context[25], context[34] );
    res = refalrts::splice_evar( res, context[8], context[24] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx e.idx ) ( # Any t.idx t.idx )
    // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/20 )/8 (/11 # Any/14 t.Flush#1/16 t.Next#1/18 )/12 >/1
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::ident_term(  ident_Any, context[14] ) )
      continue;
    // closed e.CatchedChars#1 as range 20
    //DEBUG: t.Flush#1: 16
    //DEBUG: t.Next#1: 18
    //DEBUG: s.CatchedEOF#1: 13
    //DEBUG: e.CatchedChars#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NormalizeAlternative/4 {REMOVED TILE} e.CatchedChars#1/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
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
    // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/20 )/8 (/11 # Empty/14 t.Flush#1/16 # Finitive/18 )/12 >/1
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::ident_term(  ident_Empty, context[14] ) )
      continue;
    if( ! refalrts::ident_term(  ident_Finitive, context[18] ) )
      continue;
    // closed e.CatchedChars#1 as range 20
    //DEBUG: t.Flush#1: 16
    //DEBUG: s.CatchedEOF#1: 13
    //DEBUG: e.CatchedChars#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 s.CatchedEOF#1/13 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # EOF-Catched/4 } Tile{ AsIs: e.CatchedChars#1/20 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Empty/14 AsIs: t.Flush#1/16 AsIs: # Finitive/18 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_EOFm_Catched );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx e.idx ) ( # Empty t.idx t.idx )
  // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/20 )/8 (/11 # Empty/14 t.Flush#1/16 t.NextRule#1/18 )/12 >/1
  context[20] = context[5];
  context[21] = context[6];
  if( ! refalrts::ident_term(  ident_Empty, context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CatchedChars#1 as range 20
  //DEBUG: t.Flush#1: 16
  //DEBUG: t.NextRule#1: 18
  //DEBUG: s.CatchedEOF#1: 13
  //DEBUG: e.CatchedChars#1: 20

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.CatchedEOF#1/13 e.CatchedChars#1/20 {REMOVED TILE} >/1 {REMOVED TILE}
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

static refalrts::NativeReference nat_ref_NormalizeAlternative("NormalizeAlternative", 1750850198U, 1789610235U, func_NormalizeAlternative);


static refalrts::FnResult func_SplitAlternatives(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
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
    // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/21 )/12 (/7 # Empty/15 t.Flush#1/17 t.Next#1/19 )/8 >/1
    context[21] = context[9];
    context[22] = context[10];
    if( ! refalrts::ident_term(  ident_Empty, context[15] ) )
      continue;
    // closed e.Name#1 as range 21
    //DEBUG: t.SentNamePos#1: 13
    //DEBUG: t.Flush#1: 17
    //DEBUG: t.Next#1: 19
    //DEBUG: e.Name#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/21 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
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
    // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/21 )/12 (/7 # Any/15 t.Flush#1/17 t.Next#1/19 )/8 >/1
    context[21] = context[9];
    context[22] = context[10];
    if( ! refalrts::ident_term(  ident_Any, context[15] ) )
      continue;
    // closed e.Name#1 as range 21
    //DEBUG: t.SentNamePos#1: 13
    //DEBUG: t.Flush#1: 17
    //DEBUG: t.Next#1: 19
    //DEBUG: e.Name#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/21 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
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
    // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/21 )/12 (/7 (/15 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
    context[21] = context[9];
    context[22] = context[10];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.Name#1 as range 21
    //DEBUG: t.SentNamePos#1: 13
    //DEBUG: t.Flush#1: 17
    //DEBUG: t.Next#1: 19
    //DEBUG: e.Name#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Flush#1/17 t.Next#1/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/13 HalfReuse: 'R'/11 }"ule "/25 Tile{ AsIs: e.Name#1/21 } Tile{ HalfReuse: ' '/12 HalfReuse: 'h'/7 HalfReuse: 'a'/15 HalfReuse: 's'/16 }" unreached alternative"/27 Tile{ HalfReuse: 's'/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[25], context[26], "ule ", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[27], context[28], " unreached alternative", 22 ) )
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
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx ( e.idx ) ( ( s.idx ) t.idx t.idx )
    // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/21 )/12 (/7 (/15 s.Char#1/25 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
    context[21] = context[9];
    context[22] = context[10];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[15] ) )
      continue;
    // closed e.Name#1 as range 21
    if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: t.SentNamePos#1: 13
    //DEBUG: t.Flush#1: 17
    //DEBUG: t.Next#1: 19
    //DEBUG: e.Name#1: 21
    //DEBUG: s.Char#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/21 )/12 (/7 (/15 s.Char#1/25 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Char1 #25/16 AsIs: t.Flush#1/17 AsIs: t.Next#1/19 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[16], context[25] );
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
  // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/21 )/12 (/7 (/15 s.Char#1/25 e.Tail#1/23 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
  context[21] = context[9];
  context[22] = context[10];
  context[23] = 0;
  context[24] = 0;
  if( ! refalrts::brackets_term( context[23], context[24], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 21
  if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 23
  //DEBUG: t.SentNamePos#1: 13
  //DEBUG: t.Flush#1: 17
  //DEBUG: t.Next#1: 19
  //DEBUG: e.Name#1: 21
  //DEBUG: s.Char#1: 25
  //DEBUG: e.Tail#1: 23

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/26 Tile{ AsIs: s.Char#1/25 } t.Flush#1/17/27 t.Next#1/19/29 )/31 Tile{ AsIs: </0 AsIs: & SplitAlternatives/4 AsIs: t.SentNamePos#1/13 AsIs: (/11 AsIs: e.Name#1/21 AsIs: )/12 AsIs: (/7 AsIs: (/15 } Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: )/16 AsIs: t.Flush#1/17 AsIs: t.Next#1/19 AsIs: )/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[27], context[28], context[17], context[18]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[29], context[30], context[19], context[20]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[26], context[31] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[27], context[31] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SplitAlternatives("SplitAlternatives", 1750850198U, 1789610235U, func_SplitAlternatives);


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

static refalrts::NativeReference nat_ref_gen_NormalizeRule_L1("NormalizeRule\\1", 1750850198U, 1789610235U, func_gen_NormalizeRule_L1);


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

static refalrts::NativeReference nat_ref_gen_NormalizeRule_L2("NormalizeRule\\2", 1750850198U, 1789610235U, func_gen_NormalizeRule_L2);


static refalrts::FnResult func_NormalizeRule(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
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
  //RESULT: Tile{ [[ } </15 & Fetch/16 Tile{ AsIs: e.Alternatives#1/5 } </17 & Seq/18 (/19 & MapReduce/20 & NormalizeAlternative/21 (/22 # EOF-NotCatched/23 )/24 Tile{ HalfReuse: )/0 HalfReuse: [*]/4 HalfReuse: & NormalizeRule\1/7 AsIs: t.SentNamePos#1/9 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } {*}/25 (/26 & Map/27 (/28 & SplitAlternatives/29 t.SentNamePos#1/9/30 (/32 e.Name#1/11/33 )/35 )/36 )/37 [*]/38 & NormalizeRule\2/39 t.SentNamePos#1/9/40 (/42 e.Name#1/11/43 )/45 {*}/46 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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
  if( ! refalrts::alloc_unwrapped_closure( context[25], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], ref_SplitAlternatives.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[30], context[31], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[33], context[34], context[11], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[39], ref_gen_NormalizeRule_L2.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[40], context[41], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[42] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[43], context[44], context[11], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[46], context[38] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_NormalizeRule_L1.ref.function );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[42], context[45] );
  refalrts::link_brackets( context[26], context[37] );
  refalrts::link_brackets( context[28], context[36] );
  refalrts::link_brackets( context[32], context[35] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[19], context[0] );
  refalrts::link_brackets( context[22], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[25], context[46] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[17], context[24] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[25] );
  refalrts::wrap_closure( context[46] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NormalizeRule("NormalizeRule", 1750850198U, 1789610235U, func_NormalizeRule);


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
    // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/7 # EOF-Catched/10 # Any/9 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = refalrts::ident_right(  ident_Any, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_right(  ident_EOFm_Catched, context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Name#1 as range 7
    //DEBUG: t.SentNamePos#1: 5
    //DEBUG: e.Name#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/7 # EOF-Catched/10 # Any/9 >/1 {REMOVED TILE}
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
    // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/9 # EOF-Catched/13 e.CharSet#1/11 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[11] = context[7];
      context[12] = context[8];
      context[13] = refalrts::ident_left(  ident_EOFm_Catched, context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.CharSet#1 as range 11
      //DEBUG: t.SentNamePos#1: 5
      //DEBUG: e.Name#1: 9
      //DEBUG: e.CharSet#1: 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CharSet#1/11 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/5 } 'I'/14 Tile{ HalfReuse: 'n'/13 }" rule "/15 Tile{ AsIs: e.Name#1/9 }" some chars not catched, default alternative added"/17 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( context[14], 'I' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[15], context[16], " rule ", 6 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[17], context[18], " some chars not catched, default alternative added", 50 ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_WarningAt.ref.function );
      refalrts::reinit_char( context[13], 'n' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      refalrts::splice_to_freelist_open( context[6], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx e.idx # EOF-NotCatched # Any
    // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/7 # EOF-NotCatched/10 # Any/9 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = refalrts::ident_right(  ident_Any, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_right(  ident_EOFm_NotCatched, context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Name#1 as range 7
    //DEBUG: t.SentNamePos#1: 5
    //DEBUG: e.Name#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/5 }"In rule "/11 Tile{ AsIs: e.Name#1/7 }" EOF not catched, default alternative add"/13 Tile{ HalfReuse: 'e'/10 HalfReuse: 'd'/9 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[11], context[12], "In rule ", 8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], " EOF not catched, default alternative add", 41 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WarningAt.ref.function );
    refalrts::reinit_char( context[10], 'e' );
    refalrts::reinit_char( context[9], 'd' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/9 # EOF-NotCatched/13 e.CharSet#1/11 >/1
  context[7] = context[2];
  context[8] = context[3];
  context[9] = 0;
  context[10] = 0;
  refalrts::start_e_loop();
  do {
    context[11] = context[7];
    context[12] = context[8];
    context[13] = refalrts::ident_left(  ident_EOFm_NotCatched, context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.CharSet#1 as range 11
    //DEBUG: t.SentNamePos#1: 5
    //DEBUG: e.Name#1: 9
    //DEBUG: e.CharSet#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CharSet#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/5 } 'I'/14 Tile{ HalfReuse: 'n'/13 }" rule "/15 Tile{ AsIs: e.Name#1/9 }" some chars and EOF not catched, default alternatives added"/17 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[14], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], " rule ", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[17], context[18], " some chars and EOF not catched, default alternatives added", 59 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WarningAt.ref.function );
    refalrts::reinit_char( context[13], 'n' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_WarningIfUncatched("WarningIfUncatched", 1750850198U, 1789610235U, func_WarningIfUncatched);


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
    // </0 & DefaultCatchAnyChar/4 t.SentNamePos#1/5 # Any/9 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = refalrts::ident_left(  ident_Any, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.SentNamePos#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DefaultCatchAnyChar/4 t.SentNamePos#1/5 # Any/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & DefaultCatchAnyChar/4 t.SentNamePos#1/5 e.CatchedChars#1/7 >/1
  context[7] = context[2];
  context[8] = context[3];
  // closed e.CatchedChars#1 as range 7
  //DEBUG: t.SentNamePos#1: 5
  //DEBUG: e.CatchedChars#1: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.CatchedChars#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Any/4 } (/9 # Flush/10"#TokenLexerInternalError-Unexpected"/11 )/13 (/14 Tile{ AsIs: t.SentNamePos#1/5 }"Root"/15 )/17 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], ident_Flush ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "#TokenLexerInternalError-Unexpected", 35 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "Root", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Any );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DefaultCatchAnyChar("DefaultCatchAnyChar", 1750850198U, 1789610235U, func_DefaultCatchAnyChar);


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

static refalrts::NativeReference nat_ref_DefaultCatchEOF("DefaultCatchEOF", 1750850198U, 1789610235U, func_DefaultCatchEOF);


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

static refalrts::NativeReference nat_ref_PrepareFunctions("PrepareFunctions", 1750850198U, 1789610235U, func_PrepareFunctions);


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

static refalrts::NativeReference nat_ref_ExtractExpected("ExtractExpected", 1750850198U, 1789610235U, func_ExtractExpected);


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

static refalrts::NativeReference nat_ref_gen_DoPrepareFunctions_S2L1("DoPrepareFunctions$2\\1", 1750850198U, 1789610235U, func_gen_DoPrepareFunctions_S2L1);


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

static refalrts::NativeReference nat_ref_gen_DoPrepareFunctions_S4L1("DoPrepareFunctions$4\\1", 1750850198U, 1789610235U, func_gen_DoPrepareFunctions_S4L1);


static refalrts::FnResult func_DoPrepareFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
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
    // </0 & DoPrepareFunctions/4 (/7 e.Written#1/13 )/8 (/11 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    // closed e.Written#1 as range 13
    //DEBUG: e.Written#1: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions/4 (/7 e.Written#1/13 )/8 (/11 )/12 >/1 {REMOVED TILE}
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
    // </0 & DoPrepareFunctions/4 (/7 e.Written#1/13 )/8 (/11 )/12 e.Rules#1/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Written#1 as range 13
    // closed e.Rules#1 as range 17
    //DEBUG: e.Written#1: 13
    //DEBUG: e.Rules#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions/4 (/7 e.Written#1/13 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </8 HalfReuse: & Map/11 HalfReuse: & DoPrepareFunctions$2\1/12 AsIs: e.Rules#1/17 AsIs: >/1 ]] }
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
    // </0 & DoPrepareFunctions/4 (/7 e.Written-B#1/25 (/31 e.Next#1/33 )/32 e.Written-E#1/27 )/8 (/11 (/21 t.SrcPos#1/23 e.Next#1/19 )/22 e.Expected#1/15 )/12 e.Rules#1/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Expected#1 as range 15
    // closed e.Rules#1 as range 17
    context[24] = refalrts::tvar_left( context[23], context[19], context[20] );
    if( ! context[24] )
      continue;
    // closed e.Next#1 as range 19
    context[25] = 0;
    context[26] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[13];
      context[28] = context[14];
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      if( ! refalrts::repeated_evar_left( context[33], context[34], context[19], context[20], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      // closed e.Written-E#1 as range 27
      //DEBUG: e.Expected#1: 15
      //DEBUG: e.Rules#1: 17
      //DEBUG: t.SrcPos#1: 23
      //DEBUG: e.Next#1: 19
      //DEBUG: e.Written-B#1: 25
      //DEBUG: e.Written-E#1: 27

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} (/21 t.SrcPos#1/23 e.Next#1/19 )/22 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoPrepareFunctions/4 AsIs: (/7 AsIs: e.Written-B#1/25 AsIs: (/31 AsIs: e.Next#1/33 AsIs: )/32 AsIs: e.Written-E#1/27 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Expected#1/15 } Tile{ AsIs: )/12 AsIs: e.Rules#1/17 AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[31], context[32] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( context[11], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[25], context[26], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( ( t.idx e.idx ) e.idx ) e.idx
    // </0 & DoPrepareFunctions/4 (/7 e.Written#1/13 )/8 (/11 (/21 t.SrcPos#1/23 e.NextRule#1/19 )/22 e.Expected#1/15 )/12 e.Rules-B#1/25 (/31 t.SentNamePos#1/33 (/37 e.NextRule#1/39 )/38 e.Alternatives#1/29 )/32 e.Rules-E#1/27 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Written#1 as range 13
    // closed e.Expected#1 as range 15
    context[24] = refalrts::tvar_left( context[23], context[19], context[20] );
    if( ! context[24] )
      continue;
    // closed e.NextRule#1 as range 19
    context[25] = 0;
    context[26] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[17];
      context[28] = context[18];
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      // closed e.Rules-E#1 as range 27
      context[34] = refalrts::tvar_left( context[33], context[29], context[30] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      if( ! refalrts::repeated_evar_left( context[39], context[40], context[19], context[20], context[35], context[36] ) )
        continue;
      if( ! refalrts::empty_seq( context[35], context[36] ) )
        continue;
      // closed e.Alternatives#1 as range 29
      //DEBUG: e.Written#1: 13
      //DEBUG: e.Expected#1: 15
      //DEBUG: t.SrcPos#1: 23
      //DEBUG: e.NextRule#1: 19
      //DEBUG: e.Rules-B#1: 25
      //DEBUG: e.Rules-E#1: 27
      //DEBUG: t.SentNamePos#1: 33
      //DEBUG: e.Alternatives#1: 29

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SentNamePos#1/33 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/21 } Tile{ AsIs: (/37 AsIs: e.NextRule#1/39 AsIs: )/38 } Tile{ HalfReuse: </11 } & Map/41 & DoPrepareFunctions$4\1/42 Tile{ AsIs: e.Alternatives#1/29 } >/43 Tile{ HalfReuse: )/31 } Tile{ AsIs: </0 AsIs: & DoPrepareFunctions/4 AsIs: (/7 AsIs: e.Written#1/13 HalfReuse: (/8 } Tile{ AsIs: e.NextRule#1/19 } Tile{ AsIs: )/32 } )/44 Tile{ HalfReuse: (/22 AsIs: e.Expected#1/15 HalfReuse: </12 } & Map/45 & ExtractExpected/46 e.Alternatives#1/29/47 >/49 )/50 Tile{ AsIs: e.Rules-B#1/25 } Tile{ AsIs: e.Rules-E#1/27 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_name( context[41], ref_Map.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[42], ref_gen_DoPrepareFunctions_S4L1.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[45], ref_Map.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[46], ref_ExtractExpected.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[47], context[48], context[29], context[30]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[50] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_call( context[11] );
      refalrts::reinit_close_bracket( context[31] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_open_bracket( context[22] );
      refalrts::reinit_open_call( context[12] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[22], context[50] );
      refalrts::push_stack( context[49] );
      refalrts::push_stack( context[12] );
      refalrts::link_brackets( context[7], context[44] );
      refalrts::link_brackets( context[8], context[32] );
      refalrts::link_brackets( context[21], context[31] );
      refalrts::push_stack( context[43] );
      refalrts::push_stack( context[11] );
      refalrts::link_brackets( context[37], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[45], context[50] );
      res = refalrts::splice_evar( res, context[22], context[12] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[25], context[26], context[17], context[18] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( ( t.idx e.idx ) e.idx ) e.idx
  // </0 & DoPrepareFunctions/4 (/7 e.Written#1/13 )/8 (/11 (/21 t.SrcPos#1/23 e.NextRule#1/19 )/22 e.Expected#1/15 )/12 e.Rules#1/17 >/1
  context[13] = context[5];
  context[14] = context[6];
  context[15] = context[9];
  context[16] = context[10];
  context[17] = context[2];
  context[18] = context[3];
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Written#1 as range 13
  // closed e.Expected#1 as range 15
  // closed e.Rules#1 as range 17
  context[24] = refalrts::tvar_left( context[23], context[19], context[20] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  // closed e.NextRule#1 as range 19
  //DEBUG: e.Written#1: 13
  //DEBUG: e.Expected#1: 15
  //DEBUG: e.Rules#1: 17
  //DEBUG: t.SrcPos#1: 23
  //DEBUG: e.NextRule#1: 19

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Written#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Expected#1/15 {REMOVED TILE} e.Rules#1/17 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/23 } Tile{ HalfReuse: 'R'/22 } Tile{ HalfReuse: 'u'/8 HalfReuse: 'l'/11 HalfReuse: 'e'/21 } Tile{ HalfReuse: ' '/12 } Tile{ AsIs: e.NextRule#1/19 } Tile{ HalfReuse: ' '/7 }"not found"/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[25], context[26], "not found", 9 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ErrorAt.ref.function );
  refalrts::reinit_char( context[22], 'R' );
  refalrts::reinit_char( context[8], 'u' );
  refalrts::reinit_char( context[11], 'l' );
  refalrts::reinit_char( context[21], 'e' );
  refalrts::reinit_char( context[12], ' ' );
  refalrts::reinit_char( context[7], ' ' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[21] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoPrepareFunctions("DoPrepareFunctions", 1750850198U, 1789610235U, func_DoPrepareFunctions);


//End of file
