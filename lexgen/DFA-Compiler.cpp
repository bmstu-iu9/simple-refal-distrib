// This file automatically generated from 'DFA-Compiler.sref'
// Don't edit! Edit 'DFA-Compiler.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1750850198_1789610235
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
static refalrts::ExternalReference ref_Pipe("Pipe", 0U, 0U);
static refalrts::ExternalReference ref_PrepareFunctions("PrepareFunctions", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_Reduce("Reduce", 0U, 0U);
static refalrts::ExternalReference ref_ResolvingSets("ResolvingSets", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_gen_ResolvingSets_L1("ResolvingSets\\1", 1750850198U, 1789610235U);
static refalrts::ExternalReference ref_gen_ResolvingSets_L2("ResolvingSets\\2", 1750850198U, 1789610235U);
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
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & DFA-Compile\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DFA-Compile\1/4 (/7 (/11 e.new#1/9 )/12 (/15 e.new#2/13 )/16 )/8 (/19 s.new#3/21 t.new#4/22 (/26 e.new#5/24 )/27 e.new#6/17 )/20 >/1
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
  // closed e.new#1 as range 9
  // closed e.new#2 as range 13
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
  // closed e.new#5 as range 24
  // closed e.new#6 as range 17
  do {
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Elements#1/2 HalfReuse: </1 } & Pipe/5 (/6 & Reduce/7 & DFA-Compile\1/8 (/9 (/10 )/11 (/12 )/13 )/14 )/15 & DFA-Compile\2/16 & SubstituteSetsToRules/17 (/18 & Map/19 & NormalizeRule/20 )/21 & PrepareFunctions/22 >/23 >/24 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], ref_Pipe.ref.function ) )
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
  // </0 & UniqueSet/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
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

static refalrts::NativeReference nat_ref_UniqueSet("UniqueSet", 1750850198U, 1789610235U, func_UniqueSet);


static refalrts::FnResult func_gen_ResolvingSets_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ResolvingSets\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolvingSets\1/4 (/7 t.new#1/9 (/13 e.new#2/11 )/14 s.new#3/15 e.new#4/5 )/8 >/1
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
  // closed e.new#2 as range 11
  if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  do {
    // </0 & ResolvingSets\1/4 (/7 t.SrcPos#2/9 (/13 e.Name#2/11 )/14 s.Used#2/15 # Any/18 )/8 >/1
    context[16] = context[5];
    context[17] = context[6];
    context[18] = refalrts::ident_left(  ident_Any, context[16], context[17] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.Name#2 as range 11
    //DEBUG: t.SrcPos#2: 9
    //DEBUG: s.Used#2: 15
    //DEBUG: e.Name#2: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ResolvingSets\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.SrcPos#2/9 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 AsIs: s.Used#2/15 AsIs: # Any/18 AsIs: )/8 } Tile{ ]] }
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

static refalrts::NativeReference nat_ref_gen_ResolvingSets_L1("ResolvingSets\\1", 1750850198U, 1789610235U, func_gen_ResolvingSets_L1);


static refalrts::FnResult func_gen_ResolvingSets_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & ResolvingSets\2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolvingSets\2/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Sets#1/2 HalfReuse: </1 } & Pipe/5 (/6 & Map/7 & ResolvingSets\1/8 )/9 & SetCheckRecursion/10 & SetSubstitute/11 & ResolvingSets\2/12 >/13 >/14 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], ref_Pipe.ref.function ) )
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
  // </0 & NormalizeContent/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NormalizeContent/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & NormalizeContent/4 (/7 e.new#3/5 )/8 t.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
    if( ! context[12] )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & NormalizeContent/4 (/7 e.new#6/5 )/8 (/11 s.new#7/15 e.new#8/13 )/12 e.new#9/9 >/1
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
        continue;
      // closed e.new#6 as range 5
      // closed e.new#9 as range 9
      if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
        continue;
      // closed e.new#8 as range 13
      do {
        // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 (/11 # Chars/15 e.Symbols#1/13 )/12 e.Tail#1/9 >/1
        if( ! refalrts::ident_term(  ident_Chars, context[15] ) )
          continue;
        // closed e.Chars#1 as range 5
        // closed e.Symbols#1 as range 13
        // closed e.Tail#1 as range 9
        //DEBUG: e.Chars#1: 5
        //DEBUG: e.Symbols#1: 13
        //DEBUG: e.Tail#1: 9

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 } Tile{ HalfReuse: </11 HalfReuse: & UniqueSet/15 } Tile{ AsIs: e.Chars#1/5 } Tile{ AsIs: e.Symbols#1/13 } Tile{ HalfReuse: >/8 } Tile{ AsIs: )/12 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
        refalrts::reinit_open_call( context[11] );
        refalrts::reinit_name( context[15], ref_UniqueSet.ref.function );
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
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[11], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 (/11 # Set/15 t.SrcPos#1/18 e.Name#1/16 )/12 e.Tail#1/9 >/1
      context[16] = context[13];
      context[17] = context[14];
      if( ! refalrts::ident_term(  ident_Set, context[15] ) )
        continue;
      // closed e.Chars#1 as range 5
      // closed e.Tail#1 as range 9
      context[19] = refalrts::tvar_left( context[18], context[16], context[17] );
      if( ! context[19] )
        continue;
      // closed e.Name#1 as range 16
      //DEBUG: e.Chars#1: 5
      //DEBUG: e.Tail#1: 9
      //DEBUG: t.SrcPos#1: 18
      //DEBUG: e.Name#1: 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Set/15 AsIs: t.SrcPos#1/18 AsIs: e.Name#1/16 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 # Any/11 e.Tail#1/9 >/1
    if( ! refalrts::ident_term(  ident_Any, context[11] ) )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 9
    //DEBUG: e.Chars#1: 5
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 # Any/11 e.Tail#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Any/1 ]] }
    refalrts::reinit_ident( context[1], ident_Any );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

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

static refalrts::NativeReference nat_ref_NormalizeContent("NormalizeContent", 1750850198U, 1789610235U, func_NormalizeContent);


static refalrts::FnResult func_SetCheckRecursion(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & SetCheckRecursion/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
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

static refalrts::NativeReference nat_ref_SetCheckRecursion("SetCheckRecursion", 1750850198U, 1789610235U, func_SetCheckRecursion);


static refalrts::FnResult func_SetSubstitute(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  // </0 & SetSubstitute/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
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

static refalrts::NativeReference nat_ref_SetSubstitute("SetSubstitute", 1750850198U, 1789610235U, func_SetSubstitute);


static refalrts::FnResult func_SubstituteSetsToRules(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 73 elems
  refalrts::Iter context[73];
  refalrts::zeros( context, 73 );
  // </0 & SubstituteSetsToRules/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SubstituteSetsToRules/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  do {
    // </0 & SubstituteSetsToRules/4 (/7 (/17 t.new#3/19 (/23 e.new#4/21 )/24 s.new#5/25 e.new#6/15 )/18 e.new#7/13 )/8 (/11 e.new#8/9 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.new#7 as range 13
    // closed e.new#8 as range 9
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[15], context[16] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    // closed e.new#4 as range 21
    if( ! refalrts::svar_left( context[25], context[15], context[16] ) )
      continue;
    // closed e.new#6 as range 15
    do {
      // </0 & SubstituteSetsToRules/4 (/7 (/17 t.new#9/19 (/23 e.new#10/21 )/24 s.new#11/25 t.new#12/28 )/18 e.new#13/13 )/8 (/11 e.new#14/9 )/12 >/1
      context[26] = context[15];
      context[27] = context[16];
      // closed e.new#10 as range 21
      // closed e.new#13 as range 13
      // closed e.new#14 as range 9
      context[29] = refalrts::tvar_left( context[28], context[26], context[27] );
      if( ! context[29] )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      do {
        // </0 & SubstituteSetsToRules/4 (/7 (/17 t.SetNamePos#1/19 (/23 e.Name#1/21 )/24 s.Used#1/25 (/28 # Chars/34 e.Content#1/32 )/29 )/18 e.Sets#1/13 )/8 (/11 e.Rules-B#1/35 (/41 t.SentNamePos#1/43 (/47 e.RuleName#1/45 )/48 e.Alternatives-B#1/49 (/55 (/59 # Set/61 t.SrcPos#1/64 e.Name#1/62 )/60 t.Flush#1/66 t.NextState#1/68 )/56 e.Alternatives-E#1/51 )/42 e.Rules-E#1/37 )/12 >/1
        context[30] = context[9];
        context[31] = context[10];
        context[32] = 0;
        context[33] = 0;
        if( ! refalrts::brackets_term( context[32], context[33], context[28] ) )
          continue;
        context[34] = refalrts::ident_left(  ident_Chars, context[32], context[33] );
        if( ! context[34] )
          continue;
        // closed e.Name#1 as range 21
        // closed e.Content#1 as range 32
        // closed e.Sets#1 as range 13
        context[35] = 0;
        context[36] = 0;
        refalrts::start_e_loop();
        do {
          context[37] = context[30];
          context[38] = context[31];
          context[39] = 0;
          context[40] = 0;
          context[41] = refalrts::brackets_left( context[39], context[40], context[37], context[38] );
          if( ! context[41] )
            continue;
          refalrts::bracket_pointers(context[41], context[42]);
          // closed e.Rules-E#1 as range 37
          context[44] = refalrts::tvar_left( context[43], context[39], context[40] );
          if( ! context[44] )
            continue;
          context[45] = 0;
          context[46] = 0;
          context[47] = refalrts::brackets_left( context[45], context[46], context[39], context[40] );
          if( ! context[47] )
            continue;
          refalrts::bracket_pointers(context[47], context[48]);
          // closed e.RuleName#1 as range 45
          context[49] = 0;
          context[50] = 0;
          refalrts::start_e_loop();
          do {
            context[51] = context[39];
            context[52] = context[40];
            context[53] = 0;
            context[54] = 0;
            context[55] = refalrts::brackets_left( context[53], context[54], context[51], context[52] );
            if( ! context[55] )
              continue;
            refalrts::bracket_pointers(context[55], context[56]);
            context[57] = 0;
            context[58] = 0;
            context[59] = refalrts::brackets_left( context[57], context[58], context[53], context[54] );
            if( ! context[59] )
              continue;
            refalrts::bracket_pointers(context[59], context[60]);
            context[61] = refalrts::ident_left(  ident_Set, context[57], context[58] );
            if( ! context[61] )
              continue;
            if( ! refalrts::repeated_evar_right( context[62], context[63], context[21], context[22], context[57], context[58] ) )
              continue;
            // closed e.Alternatives-E#1 as range 51
            context[65] = refalrts::tvar_left( context[64], context[57], context[58] );
            if( ! context[65] )
              continue;
            if( ! refalrts::empty_seq( context[57], context[58] ) )
              continue;
            context[67] = refalrts::tvar_left( context[66], context[53], context[54] );
            if( ! context[67] )
              continue;
            context[69] = refalrts::tvar_left( context[68], context[53], context[54] );
            if( ! context[69] )
              continue;
            if( ! refalrts::empty_seq( context[53], context[54] ) )
              continue;
            //DEBUG: t.SetNamePos#1: 19
            //DEBUG: s.Used#1: 25
            //DEBUG: e.Name#1: 21
            //DEBUG: e.Content#1: 32
            //DEBUG: e.Sets#1: 13
            //DEBUG: e.Rules-B#1: 35
            //DEBUG: e.Rules-E#1: 37
            //DEBUG: t.SentNamePos#1: 43
            //DEBUG: e.RuleName#1: 45
            //DEBUG: e.Alternatives-B#1: 49
            //DEBUG: e.Alternatives-E#1: 51
            //DEBUG: t.SrcPos#1: 64
            //DEBUG: t.Flush#1: 66
            //DEBUG: t.NextState#1: 68

            refalrts::reset_allocator();
            //TRASH: {REMOVED TILE} s.Used#1/25 {REMOVED TILE} t.SrcPos#1/64 e.Name#1/62 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/17 AsIs: t.SetNamePos#1/19 AsIs: (/23 AsIs: e.Name#1/21 AsIs: )/24 } # Used/70 Tile{ AsIs: (/28 AsIs: # Chars/34 AsIs: e.Content#1/32 AsIs: )/29 AsIs: )/18 AsIs: e.Sets#1/13 AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/35 AsIs: (/41 AsIs: t.SentNamePos#1/43 AsIs: (/47 AsIs: e.RuleName#1/45 AsIs: )/48 AsIs: e.Alternatives-B#1/49 AsIs: (/55 AsIs: (/59 Reuse: # Chars/61 } e.Content#1/32/71 Tile{ AsIs: )/60 AsIs: t.Flush#1/66 AsIs: t.NextState#1/68 AsIs: )/56 AsIs: e.Alternatives-E#1/51 AsIs: )/42 AsIs: e.Rules-E#1/37 AsIs: )/12 AsIs: >/1 ]] }
            if( ! refalrts::alloc_ident( context[70], ident_Used ) )
              return refalrts::cNoMemory;
            if (! refalrts::copy_evar(context[71], context[72], context[32], context[33]))
              return refalrts::cNoMemory;
            refalrts::update_ident( context[61], ident_Chars );
            refalrts::push_stack( context[1] );
            refalrts::push_stack( context[0] );
            refalrts::link_brackets( context[11], context[12] );
            refalrts::link_brackets( context[41], context[42] );
            refalrts::link_brackets( context[55], context[56] );
            refalrts::link_brackets( context[59], context[60] );
            refalrts::link_brackets( context[47], context[48] );
            refalrts::link_brackets( context[7], context[8] );
            refalrts::link_brackets( context[17], context[18] );
            refalrts::link_brackets( context[28], context[29] );
            refalrts::link_brackets( context[23], context[24] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[60];
            res = refalrts::splice_evar( res, context[71], context[72] );
            res = refalrts::splice_evar( res, context[28], context[61] );
            res = refalrts::splice_evar( res, context[70], context[70] );
            refalrts::splice_to_freelist_open( context[24], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[49], context[50], context[39], context[40] ) );
        } while ( refalrts::open_evar_advance( context[35], context[36], context[30], context[31] ) );
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & SubstituteSetsToRules/4 (/7 (/17 t.SetNamePos#1/19 (/23 e.Name#1/21 )/24 s.Used#1/25 # Any/28 )/18 e.Sets#1/13 )/8 (/11 e.Rules-B#1/32 (/38 t.SentNamePos#1/40 (/44 e.RuleName#1/42 )/45 e.Alternatives-B#1/46 (/52 (/56 # Set/58 t.SrcPos#1/61 e.Name#1/59 )/57 t.Flush#1/63 t.NextState#1/65 )/53 e.Alternatives-E#1/48 )/39 e.Rules-E#1/34 )/12 >/1
      context[30] = context[9];
      context[31] = context[10];
      if( ! refalrts::ident_term(  ident_Any, context[28] ) )
        continue;
      // closed e.Name#1 as range 21
      // closed e.Sets#1 as range 13
      context[32] = 0;
      context[33] = 0;
      refalrts::start_e_loop();
      do {
        context[34] = context[30];
        context[35] = context[31];
        context[36] = 0;
        context[37] = 0;
        context[38] = refalrts::brackets_left( context[36], context[37], context[34], context[35] );
        if( ! context[38] )
          continue;
        refalrts::bracket_pointers(context[38], context[39]);
        // closed e.Rules-E#1 as range 34
        context[41] = refalrts::tvar_left( context[40], context[36], context[37] );
        if( ! context[41] )
          continue;
        context[42] = 0;
        context[43] = 0;
        context[44] = refalrts::brackets_left( context[42], context[43], context[36], context[37] );
        if( ! context[44] )
          continue;
        refalrts::bracket_pointers(context[44], context[45]);
        // closed e.RuleName#1 as range 42
        context[46] = 0;
        context[47] = 0;
        refalrts::start_e_loop();
        do {
          context[48] = context[36];
          context[49] = context[37];
          context[50] = 0;
          context[51] = 0;
          context[52] = refalrts::brackets_left( context[50], context[51], context[48], context[49] );
          if( ! context[52] )
            continue;
          refalrts::bracket_pointers(context[52], context[53]);
          context[54] = 0;
          context[55] = 0;
          context[56] = refalrts::brackets_left( context[54], context[55], context[50], context[51] );
          if( ! context[56] )
            continue;
          refalrts::bracket_pointers(context[56], context[57]);
          context[58] = refalrts::ident_left(  ident_Set, context[54], context[55] );
          if( ! context[58] )
            continue;
          if( ! refalrts::repeated_evar_right( context[59], context[60], context[21], context[22], context[54], context[55] ) )
            continue;
          // closed e.Alternatives-E#1 as range 48
          context[62] = refalrts::tvar_left( context[61], context[54], context[55] );
          if( ! context[62] )
            continue;
          if( ! refalrts::empty_seq( context[54], context[55] ) )
            continue;
          context[64] = refalrts::tvar_left( context[63], context[50], context[51] );
          if( ! context[64] )
            continue;
          context[66] = refalrts::tvar_left( context[65], context[50], context[51] );
          if( ! context[66] )
            continue;
          if( ! refalrts::empty_seq( context[50], context[51] ) )
            continue;
          //DEBUG: t.SetNamePos#1: 19
          //DEBUG: s.Used#1: 25
          //DEBUG: e.Name#1: 21
          //DEBUG: e.Sets#1: 13
          //DEBUG: e.Rules-B#1: 32
          //DEBUG: e.Rules-E#1: 34
          //DEBUG: t.SentNamePos#1: 40
          //DEBUG: e.RuleName#1: 42
          //DEBUG: e.Alternatives-B#1: 46
          //DEBUG: e.Alternatives-E#1: 48
          //DEBUG: t.SrcPos#1: 61
          //DEBUG: t.Flush#1: 63
          //DEBUG: t.NextState#1: 65

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE} s.Used#1/25 {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/61 e.Name#1/59 )/57 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/17 AsIs: t.SetNamePos#1/19 AsIs: (/23 AsIs: e.Name#1/21 AsIs: )/24 } Tile{ Reuse: # Used/58 } Tile{ AsIs: # Any/28 AsIs: )/18 AsIs: e.Sets#1/13 AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/32 AsIs: (/38 AsIs: t.SentNamePos#1/40 AsIs: (/44 AsIs: e.RuleName#1/42 AsIs: )/45 AsIs: e.Alternatives-B#1/46 AsIs: (/52 HalfReuse: # Any/56 } Tile{ AsIs: t.Flush#1/63 AsIs: t.NextState#1/65 AsIs: )/53 AsIs: e.Alternatives-E#1/48 AsIs: )/39 AsIs: e.Rules-E#1/34 AsIs: )/12 AsIs: >/1 ]] }
          refalrts::update_ident( context[58], ident_Used );
          refalrts::reinit_ident( context[56], ident_Any );
          refalrts::push_stack( context[1] );
          refalrts::push_stack( context[0] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[38], context[39] );
          refalrts::link_brackets( context[52], context[53] );
          refalrts::link_brackets( context[44], context[45] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[17], context[18] );
          refalrts::link_brackets( context[23], context[24] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[63];
          res = refalrts::splice_evar( res, context[28], context[56] );
          res = refalrts::splice_evar( res, context[58], context[58] );
          refalrts::splice_to_freelist_open( context[24], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[46], context[47], context[36], context[37] ) );
      } while ( refalrts::open_evar_advance( context[32], context[33], context[30], context[31] ) );
    } while ( 0 );
    refalrts::stop_sentence();

    do {
      // </0 & SubstituteSetsToRules/4 (/7 (/17 t.SetNamePos#1/19 (/23 e.Name#1/21 )/24 # NotUsed/25 e.Content#1/15 )/18 e.Sets#1/13 )/8 (/11 e.Rules#1/9 )/12 >/1
      if( ! refalrts::ident_term(  ident_NotUsed, context[25] ) )
        continue;
      // closed e.Name#1 as range 21
      // closed e.Content#1 as range 15
      // closed e.Sets#1 as range 13
      // closed e.Rules#1 as range 9
      //DEBUG: t.SetNamePos#1: 19
      //DEBUG: e.Name#1: 21
      //DEBUG: e.Content#1: 15
      //DEBUG: e.Sets#1: 13
      //DEBUG: e.Rules#1: 9

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content#1/15 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 } Tile{ AsIs: t.SetNamePos#1/19 } 'S'/26 Tile{ HalfReuse: 'e'/7 HalfReuse: 't'/17 } ' '/27 Tile{ HalfReuse: ':'/23 AsIs: e.Name#1/21 HalfReuse: ':'/24 HalfReuse: ' '/25 }"is not used"/28 >/30 </31 & SubstituteSetsToRules/32 Tile{ HalfReuse: (/18 AsIs: e.Sets#1/13 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( context[26], 'S' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[27], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[28], context[29], "is not used", 11 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[32], ref_SubstituteSetsToRules.ref.function ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_WarningAt.ref.function );
      refalrts::reinit_char( context[7], 'e' );
      refalrts::reinit_char( context[17], 't' );
      refalrts::reinit_char( context[23], ':' );
      refalrts::reinit_char( context[24], ':' );
      refalrts::reinit_char( context[25], ' ' );
      refalrts::reinit_open_bracket( context[18] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[31] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[8] );
      refalrts::push_stack( context[30] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[28], context[32] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[7], context[17] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    // </0 & SubstituteSetsToRules/4 (/7 (/17 t.SetNamePos#1/19 (/23 e.Name#1/21 )/24 # Used/25 e.Content#1/15 )/18 e.Sets#1/13 )/8 (/11 e.Rules#1/9 )/12 >/1
    if( ! refalrts::ident_term(  ident_Used, context[25] ) )
      continue;
    // closed e.Name#1 as range 21
    // closed e.Content#1 as range 15
    // closed e.Sets#1 as range 13
    // closed e.Rules#1 as range 9
    //DEBUG: t.SetNamePos#1: 19
    //DEBUG: e.Name#1: 21
    //DEBUG: e.Content#1: 15
    //DEBUG: e.Sets#1: 13
    //DEBUG: e.Rules#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 (/17 t.SetNamePos#1/19 (/23 e.Name#1/21 )/24 # Used/25 e.Content#1/15 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 } Tile{ HalfReuse: (/18 AsIs: e.Sets#1/13 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[18] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[18], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.new#3/9 )/12 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 9
  do {
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B#1/15 (/21 t.SentNamePos#1/23 (/27 e.RuleName#1/25 )/28 e.Alternatives-B#1/29 (/35 (/39 # Set/41 t.SrcPos#1/45 'A'/44 'n'/43 'y'/42 )/40 t.Flush#1/47 t.NextState#1/49 )/36 e.Alternatives-E#1/31 )/22 e.Rules-E#1/17 )/12 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[13];
      context[18] = context[14];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.Rules-E#1 as range 17
      context[24] = refalrts::tvar_left( context[23], context[19], context[20] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[19], context[20] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      // closed e.RuleName#1 as range 25
      context[29] = 0;
      context[30] = 0;
      refalrts::start_e_loop();
      do {
        context[31] = context[19];
        context[32] = context[20];
        context[33] = 0;
        context[34] = 0;
        context[35] = refalrts::brackets_left( context[33], context[34], context[31], context[32] );
        if( ! context[35] )
          continue;
        refalrts::bracket_pointers(context[35], context[36]);
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::brackets_left( context[37], context[38], context[33], context[34] );
        if( ! context[39] )
          continue;
        refalrts::bracket_pointers(context[39], context[40]);
        context[41] = refalrts::ident_left(  ident_Set, context[37], context[38] );
        if( ! context[41] )
          continue;
        context[42] = refalrts::char_right( 'y', context[37], context[38] );
        if( ! context[42] )
          continue;
        context[43] = refalrts::char_right( 'n', context[37], context[38] );
        if( ! context[43] )
          continue;
        context[44] = refalrts::char_right( 'A', context[37], context[38] );
        if( ! context[44] )
          continue;
        // closed e.Alternatives-E#1 as range 31
        context[46] = refalrts::tvar_left( context[45], context[37], context[38] );
        if( ! context[46] )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        context[48] = refalrts::tvar_left( context[47], context[33], context[34] );
        if( ! context[48] )
          continue;
        context[50] = refalrts::tvar_left( context[49], context[33], context[34] );
        if( ! context[50] )
          continue;
        if( ! refalrts::empty_seq( context[33], context[34] ) )
          continue;
        //DEBUG: e.Rules-B#1: 15
        //DEBUG: e.Rules-E#1: 17
        //DEBUG: t.SentNamePos#1: 23
        //DEBUG: e.RuleName#1: 25
        //DEBUG: e.Alternatives-B#1: 29
        //DEBUG: e.Alternatives-E#1: 31
        //DEBUG: t.SrcPos#1: 45
        //DEBUG: t.Flush#1: 47
        //DEBUG: t.NextState#1: 49

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} # Set/41 t.SrcPos#1/45 'A'/44 'n'/43 'y'/42 )/40 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/15 AsIs: (/21 AsIs: t.SentNamePos#1/23 AsIs: (/27 AsIs: e.RuleName#1/25 AsIs: )/28 AsIs: e.Alternatives-B#1/29 AsIs: (/35 HalfReuse: # Any/39 } Tile{ AsIs: t.Flush#1/47 AsIs: t.NextState#1/49 AsIs: )/36 AsIs: e.Alternatives-E#1/31 AsIs: )/22 AsIs: e.Rules-E#1/17 AsIs: )/12 AsIs: >/1 ]] }
        refalrts::reinit_ident( context[39], ident_Any );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::link_brackets( context[35], context[36] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[47];
        refalrts::splice_to_freelist_open( context[39], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[29], context[30], context[19], context[20] ) );
    } while ( refalrts::open_evar_advance( context[15], context[16], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B#1/15 (/21 t.SentNamePos#1/23 (/27 e.RuleName#1/25 )/28 e.Alternatives-B#1/29 (/35 (/39 # Set/41 t.SrcPos#1/42 e.Name#1/37 )/40 t.Flush#1/44 t.NextState#1/46 )/36 e.Alternatives-E#1/31 )/22 e.Rules-E#1/17 )/12 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[13];
      context[18] = context[14];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.Rules-E#1 as range 17
      context[24] = refalrts::tvar_left( context[23], context[19], context[20] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[19], context[20] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      // closed e.RuleName#1 as range 25
      context[29] = 0;
      context[30] = 0;
      refalrts::start_e_loop();
      do {
        context[31] = context[19];
        context[32] = context[20];
        context[33] = 0;
        context[34] = 0;
        context[35] = refalrts::brackets_left( context[33], context[34], context[31], context[32] );
        if( ! context[35] )
          continue;
        refalrts::bracket_pointers(context[35], context[36]);
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::brackets_left( context[37], context[38], context[33], context[34] );
        if( ! context[39] )
          continue;
        refalrts::bracket_pointers(context[39], context[40]);
        context[41] = refalrts::ident_left(  ident_Set, context[37], context[38] );
        if( ! context[41] )
          continue;
        // closed e.Alternatives-E#1 as range 31
        context[43] = refalrts::tvar_left( context[42], context[37], context[38] );
        if( ! context[43] )
          continue;
        // closed e.Name#1 as range 37
        context[45] = refalrts::tvar_left( context[44], context[33], context[34] );
        if( ! context[45] )
          continue;
        context[47] = refalrts::tvar_left( context[46], context[33], context[34] );
        if( ! context[47] )
          continue;
        if( ! refalrts::empty_seq( context[33], context[34] ) )
          continue;
        //DEBUG: e.Rules-B#1: 15
        //DEBUG: e.Rules-E#1: 17
        //DEBUG: t.SentNamePos#1: 23
        //DEBUG: e.RuleName#1: 25
        //DEBUG: e.Alternatives-B#1: 29
        //DEBUG: e.Alternatives-E#1: 31
        //DEBUG: t.SrcPos#1: 42
        //DEBUG: e.Name#1: 37
        //DEBUG: t.Flush#1: 44
        //DEBUG: t.NextState#1: 46

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} e.Rules-B#1/15 {REMOVED TILE} t.SentNamePos#1/23 {REMOVED TILE} e.RuleName#1/25 {REMOVED TILE} e.Alternatives-B#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Flush#1/44 t.NextState#1/46 {REMOVED TILE} e.Alternatives-E#1/31 {REMOVED TILE} e.Rules-E#1/17 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/42 } Tile{ HalfReuse: 'U'/40 } Tile{ HalfReuse: 'n'/35 HalfReuse: 'd'/39 HalfReuse: 'e'/41 } Tile{ HalfReuse: 'c'/7 HalfReuse: 'l'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 'r'/12 } Tile{ HalfReuse: 'e'/22 } Tile{ HalfReuse: 'd'/36 } Tile{ HalfReuse: ' '/28 } Tile{ HalfReuse: 's'/27 } Tile{ HalfReuse: 'e'/21 }"t "/48 Tile{ AsIs: e.Name#1/37 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[48], context[49], "t ", 2 ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_ErrorAt.ref.function );
        refalrts::reinit_char( context[40], 'U' );
        refalrts::reinit_char( context[35], 'n' );
        refalrts::reinit_char( context[39], 'd' );
        refalrts::reinit_char( context[41], 'e' );
        refalrts::reinit_char( context[7], 'c' );
        refalrts::reinit_char( context[8], 'l' );
        refalrts::reinit_char( context[11], 'a' );
        refalrts::reinit_char( context[12], 'r' );
        refalrts::reinit_char( context[22], 'e' );
        refalrts::reinit_char( context[36], 'd' );
        refalrts::reinit_char( context[28], ' ' );
        refalrts::reinit_char( context[27], 's' );
        refalrts::reinit_char( context[21], 'e' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[21], context[21] );
        res = refalrts::splice_evar( res, context[27], context[27] );
        res = refalrts::splice_evar( res, context[28], context[28] );
        res = refalrts::splice_evar( res, context[36], context[36] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[7], context[11] );
        res = refalrts::splice_evar( res, context[35], context[41] );
        res = refalrts::splice_evar( res, context[40], context[40] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        refalrts::splice_to_freelist_open( context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[29], context[30], context[19], context[20] ) );
    } while ( refalrts::open_evar_advance( context[15], context[16], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules#1/9 )/12 >/1
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

static refalrts::NativeReference nat_ref_SubstituteSetsToRules("SubstituteSetsToRules", 1750850198U, 1789610235U, func_SubstituteSetsToRules);


static refalrts::FnResult func_SetDiff(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & SetDiff/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetDiff/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  do {
    // </0 & SetDiff/4 (/7 e.Set#1/5 )/8 (/11 # Any/15 )/12 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = refalrts::ident_left(  ident_Any, context[13], context[14] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Set#1 as range 5
    //DEBUG: e.Set#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SetDiff/4 (/7 e.Set#1/5 )/8 (/11 # Any/15 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
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

static refalrts::NativeReference nat_ref_SetDiff("SetDiff", 1750850198U, 1789610235U, func_SetDiff);


static refalrts::FnResult func_NormalizeAlternative(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & NormalizeAlternative/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NormalizeAlternative/4 (/7 s.new#1/13 e.new#2/5 )/8 (/11 t.new#3/14 t.new#4/16 t.new#5/18 )/12 >/1
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
  // closed e.new#2 as range 5
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

  // </0 & NormalizeAlternative/4 (/7 s.new#6/13 e.new#7/5 )/8 (/11 s.new#8/14 t.new#9/16 t.new#10/18 )/12 >/1
  if( ! refalrts::svar_term( context[14], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 5
  do {
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

  // </0 & NormalizeAlternative/4 (/7 s.new#11/13 e.new#12/5 )/8 (/11 # Empty/14 t.new#13/16 t.new#14/18 )/12 >/1
  if( ! refalrts::ident_term(  ident_Empty, context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#12 as range 5
  do {
    // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/5 )/8 (/11 # Empty/14 t.Flush#1/16 # Finitive/18 )/12 >/1
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

  // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF#1/13 e.CatchedChars#1/5 )/8 (/11 # Empty/14 t.Flush#1/16 t.NextRule#1/18 )/12 >/1
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

static refalrts::NativeReference nat_ref_NormalizeAlternative("NormalizeAlternative", 1750850198U, 1789610235U, func_NormalizeAlternative);


static refalrts::FnResult func_SplitAlternatives(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & SplitAlternatives/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SplitAlternatives/4 t.new#1/13 (/11 e.new#2/9 )/12 (/7 t.new#3/15 t.new#4/17 t.new#5/19 )/8 >/1
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
  // closed e.new#2 as range 9
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
    // </0 & SplitAlternatives/4 t.new#6/13 (/11 e.new#7/9 )/12 (/7 s.new#8/15 t.new#9/17 t.new#10/19 )/8 >/1
    if( ! refalrts::svar_term( context[15], context[15] ) )
      continue;
    // closed e.new#7 as range 9
    do {
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

  // </0 & SplitAlternatives/4 t.new#6/13 (/11 e.new#7/9 )/12 (/7 (/15 e.new#8/21 )/16 t.new#9/17 t.new#10/19 )/8 >/1
  context[21] = 0;
  context[22] = 0;
  if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 9
  // closed e.new#8 as range 21
  do {
    // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
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

  // </0 & SplitAlternatives/4 t.new#11/13 (/11 e.new#12/9 )/12 (/7 (/15 s.new#13/23 e.new#14/21 )/16 t.new#15/17 t.new#16/19 )/8 >/1
  // closed e.new#12 as range 9
  if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#14 as range 21
  do {
    // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 s.Char#1/23 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.Name#1 as range 9
    //DEBUG: t.SentNamePos#1: 13
    //DEBUG: t.Flush#1: 17
    //DEBUG: t.Next#1: 19
    //DEBUG: s.Char#1: 23
    //DEBUG: e.Name#1: 9

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

  // </0 & SplitAlternatives/4 t.SentNamePos#1/13 (/11 e.Name#1/9 )/12 (/7 (/15 s.Char#1/23 e.Tail#1/21 )/16 t.Flush#1/17 t.Next#1/19 )/8 >/1
  // closed e.Name#1 as range 9
  // closed e.Tail#1 as range 21
  //DEBUG: t.SentNamePos#1: 13
  //DEBUG: t.Flush#1: 17
  //DEBUG: t.Next#1: 19
  //DEBUG: s.Char#1: 23
  //DEBUG: e.Name#1: 9
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
  //RESULT: Tile{ [[ } </15 & Fetch/16 Tile{ AsIs: e.Alternatives#1/5 } </17 & Pipe/18 (/19 & MapReduce/20 & NormalizeAlternative/21 (/22 # EOF-NotCatched/23 )/24 Tile{ HalfReuse: )/0 HalfReuse: [*]/4 HalfReuse: & NormalizeRule\1/7 AsIs: t.SentNamePos#1/9 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } {*}/25 (/26 & Map/27 (/28 & SplitAlternatives/29 t.SentNamePos#1/9/30 (/32 e.Name#1/11/33 )/35 )/36 )/37 [*]/38 & NormalizeRule\2/39 t.SentNamePos#1/9/40 (/42 e.Name#1/11/43 )/45 {*}/46 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ref_Pipe.ref.function ) )
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
  // </0 & WarningIfUncatched/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & WarningIfUncatched/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
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

  // </0 & WarningIfUncatched/4 t.SentNamePos#1/5 e.Name#1/7 # EOF-NotCatched/11 e.CharSet#1/9 >/1
  context[7] = 0;
  context[8] = 0;
  refalrts::start_e_loop();
  do {
    context[9] = context[2];
    context[10] = context[3];
    context[11] = refalrts::ident_left(  ident_EOFm_NotCatched, context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.CharSet#1 as range 9
    //DEBUG: t.SentNamePos#1: 5
    //DEBUG: e.Name#1: 7
    //DEBUG: e.CharSet#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CharSet#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos#1/5 } 'I'/12 Tile{ HalfReuse: 'n'/11 }" rule "/13 Tile{ AsIs: e.Name#1/7 }" some chars and EOF not catched, default alternatives added"/15 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[12], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], " rule ", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], " some chars and EOF not catched, default alternatives added", 59 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WarningAt.ref.function );
    refalrts::reinit_char( context[11], 'n' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[7], context[8], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_WarningIfUncatched("WarningIfUncatched", 1750850198U, 1789610235U, func_WarningIfUncatched);


static refalrts::FnResult func_DefaultCatchAnyChar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & DefaultCatchAnyChar/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DefaultCatchAnyChar/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
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

static refalrts::NativeReference nat_ref_DefaultCatchAnyChar("DefaultCatchAnyChar", 1750850198U, 1789610235U, func_DefaultCatchAnyChar);


static refalrts::FnResult func_DefaultCatchEOF(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & DefaultCatchEOF/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DefaultCatchEOF/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
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
  // </0 & ExtractExpected/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractExpected/4 (/7 t.new#1/9 t.new#2/11 t.new#3/13 )/8 >/1
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
  // </0 & DoPrepareFunctions$4\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoPrepareFunctions$4\1/4 (/7 t.new#1/9 t.new#2/11 t.new#3/13 )/8 >/1
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
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & DoPrepareFunctions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoPrepareFunctions/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
  // closed e.new#3 as range 2
  do {
    // </0 & DoPrepareFunctions/4 (/7 e.new#4/5 )/8 (/11 )/12 e.new#5/2 >/1
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.new#4 as range 5
    // closed e.new#5 as range 2
    do {
      // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 >/1
      if( ! refalrts::empty_seq( context[2], context[3] ) )
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

    // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 e.Rules#1/2 >/1
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

  // </0 & DoPrepareFunctions/4 (/7 e.new#4/5 )/8 (/11 (/15 t.new#5/17 e.new#6/13 )/16 e.new#7/9 )/12 e.new#8/2 >/1
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#4 as range 5
  // closed e.new#7 as range 9
  // closed e.new#8 as range 2
  context[18] = refalrts::tvar_left( context[17], context[13], context[14] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 13
  do {
    // </0 & DoPrepareFunctions/4 (/7 e.Written-B#1/21 (/27 e.Next#1/29 )/28 e.Written-E#1/23 )/8 (/11 (/15 t.SrcPos#1/17 e.Next#1/13 )/16 e.Expected#1/9 )/12 e.Rules#1/2 >/1
    context[19] = context[5];
    context[20] = context[6];
    // closed e.Next#1 as range 13
    // closed e.Expected#1 as range 9
    // closed e.Rules#1 as range 2
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[19];
      context[24] = context[20];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      if( ! refalrts::repeated_evar_left( context[29], context[30], context[13], context[14], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      // closed e.Written-E#1 as range 23
      //DEBUG: t.SrcPos#1: 17
      //DEBUG: e.Next#1: 13
      //DEBUG: e.Expected#1: 9
      //DEBUG: e.Rules#1: 2
      //DEBUG: e.Written-B#1: 21
      //DEBUG: e.Written-E#1: 23

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} (/15 t.SrcPos#1/17 e.Next#1/13 )/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoPrepareFunctions/4 AsIs: (/7 AsIs: e.Written-B#1/21 AsIs: (/27 AsIs: e.Next#1/29 AsIs: )/28 AsIs: e.Written-E#1/23 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Expected#1/9 } Tile{ AsIs: )/12 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( context[11], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[21], context[22], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 (/15 t.SrcPos#1/17 e.NextRule#1/13 )/16 e.Expected#1/9 )/12 e.Rules-B#1/21 (/27 t.SentNamePos#1/29 (/33 e.NextRule#1/35 )/34 e.Alternatives#1/25 )/28 e.Rules-E#1/23 >/1
    context[19] = context[2];
    context[20] = context[3];
    // closed e.Written#1 as range 5
    // closed e.NextRule#1 as range 13
    // closed e.Expected#1 as range 9
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[19];
      context[24] = context[20];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      // closed e.Rules-E#1 as range 23
      context[30] = refalrts::tvar_left( context[29], context[25], context[26] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[25], context[26] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      if( ! refalrts::repeated_evar_left( context[35], context[36], context[13], context[14], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      // closed e.Alternatives#1 as range 25
      //DEBUG: t.SrcPos#1: 17
      //DEBUG: e.Written#1: 5
      //DEBUG: e.NextRule#1: 13
      //DEBUG: e.Expected#1: 9
      //DEBUG: e.Rules-B#1: 21
      //DEBUG: e.Rules-E#1: 23
      //DEBUG: t.SentNamePos#1: 29
      //DEBUG: e.Alternatives#1: 25

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SentNamePos#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } Tile{ AsIs: (/33 AsIs: e.NextRule#1/35 AsIs: )/34 } Tile{ HalfReuse: </11 } & Map/37 & DoPrepareFunctions$4\1/38 Tile{ AsIs: e.Alternatives#1/25 } >/39 Tile{ HalfReuse: )/27 } Tile{ AsIs: </0 AsIs: & DoPrepareFunctions/4 AsIs: (/7 AsIs: e.Written#1/5 HalfReuse: (/8 } Tile{ AsIs: e.NextRule#1/13 } Tile{ AsIs: )/28 } )/40 Tile{ HalfReuse: (/16 AsIs: e.Expected#1/9 HalfReuse: </12 } & Map/41 & ExtractExpected/42 e.Alternatives#1/25/43 >/45 )/46 Tile{ AsIs: e.Rules-B#1/21 } Tile{ AsIs: e.Rules-E#1/23 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_name( context[37], ref_Map.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[38], ref_gen_DoPrepareFunctions_S4L1.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[41], ref_Map.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[42], ref_ExtractExpected.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[43], context[44], context[25], context[26]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_call( context[11] );
      refalrts::reinit_close_bracket( context[27] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_open_bracket( context[16] );
      refalrts::reinit_open_call( context[12] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[16], context[46] );
      refalrts::push_stack( context[45] );
      refalrts::push_stack( context[12] );
      refalrts::link_brackets( context[7], context[40] );
      refalrts::link_brackets( context[8], context[28] );
      refalrts::link_brackets( context[15], context[27] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[11] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[41], context[46] );
      res = refalrts::splice_evar( res, context[16], context[12] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[21], context[22], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // </0 & DoPrepareFunctions/4 (/7 e.Written#1/5 )/8 (/11 (/15 t.SrcPos#1/17 e.NextRule#1/13 )/16 e.Expected#1/9 )/12 e.Rules#1/2 >/1
  // closed e.Written#1 as range 5
  // closed e.NextRule#1 as range 13
  // closed e.Expected#1 as range 9
  // closed e.Rules#1 as range 2
  //DEBUG: t.SrcPos#1: 17
  //DEBUG: e.Written#1: 5
  //DEBUG: e.NextRule#1: 13
  //DEBUG: e.Expected#1: 9
  //DEBUG: e.Rules#1: 2

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

static refalrts::NativeReference nat_ref_DoPrepareFunctions("DoPrepareFunctions", 1750850198U, 1789610235U, func_DoPrepareFunctions);


//End of file
