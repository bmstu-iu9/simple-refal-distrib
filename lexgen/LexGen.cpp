// This file automatically generated from 'LexGen.sref'
// Don't edit! Edit 'LexGen.sref' and recompile it

#include "refalrts.h"

static const refalrts::RefalIdentifier ident_BadCommandLine = refalrts::ident_from_static("BadCommandLine");
static const refalrts::RefalIdentifier ident_From = refalrts::ident_from_static("From");
static const refalrts::RefalIdentifier ident_InPlace = refalrts::ident_from_static("InPlace");
static const refalrts::RefalIdentifier ident_TError = refalrts::ident_from_static("TError");
static const refalrts::RefalIdentifier ident_To = refalrts::ident_from_static("To");
static refalrts::ExternalReference ref_ArgList("ArgList", 0U, 0U);
static refalrts::ExternalReference ref_DFAm_Compile("DFA-Compile", 0U, 0U);
static refalrts::ExternalReference ref_DFAm_Parse("DFA-Parse", 0U, 0U);
static refalrts::ExternalReference ref_DFAm_Tokens("DFA-Tokens", 0U, 0U);
static refalrts::ExternalReference ref_ErrorAt("ErrorAt", 0U, 0U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Flexm_Check("Flex-Check", 0U, 0U);
static refalrts::ExternalReference ref_Flexm_Compile("Flex-Compile", 2443115455U, 4265422081U);
static refalrts::ExternalReference ref_Flexm_Desugar("Flex-Desugar", 0U, 0U);
static refalrts::ExternalReference ref_Flexm_Parse("Flex-Parse", 0U, 0U);
static refalrts::ExternalReference ref_Flexm_Tokens("Flex-Tokens", 0U, 0U);
static refalrts::ExternalReference ref_GenerateFromDFA("GenerateFromDFA", 0U, 0U);
static refalrts::ExternalReference ref_Go("Go", 0U, 0U);
static refalrts::ExternalReference ref_gen_Go_L1("Go\\1", 2443115455U, 4265422081U);
static refalrts::ExternalReference ref_gen_Go_L2("Go\\2", 2443115455U, 4265422081U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_Lengthm_T("Length-T", 2443115455U, 4265422081U);
static refalrts::ExternalReference ref_gen_Lengthm_T_L1("Length-T\\1", 2443115455U, 4265422081U);
static refalrts::ExternalReference ref_LoadFile("LoadFile", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_ParseCommandLine("ParseCommandLine", 0U, 0U);
static refalrts::ExternalReference ref_SaveFile("SaveFile", 0U, 0U);
static refalrts::ExternalReference ref_Seq("Seq", 0U, 0U);
static refalrts::ExternalReference ref_Transform("Transform", 2443115455U, 4265422081U);
static refalrts::ExternalReference ref_gen_Transform_L1("Transform\\1", 2443115455U, 4265422081U);
static refalrts::ExternalReference ref_gen_Transform_L2("Transform\\2", 2443115455U, 4265422081U);
static refalrts::ExternalReference ref_gen_Transform_L3("Transform\\3", 2443115455U, 4265422081U);
static refalrts::ExternalReference ref_gen_Transform_L3S1L1("Transform\\3$1\\1", 2443115455U, 4265422081U);
static refalrts::ExternalReference ref_gen_Transform_L3S1L2("Transform\\3$1\\2", 2443115455U, 4265422081U);
static refalrts::ExternalReference ref_gen_Transform_L3S2L1("Transform\\3$2\\1", 2443115455U, 4265422081U);
static refalrts::ExternalReference ref_gen_Transform_L3S2L2("Transform\\3$2\\2", 2443115455U, 4265422081U);
static refalrts::ExternalReference ref_gen_Transform_L3S2L3("Transform\\3$2\\3", 2443115455U, 4265422081U);

static refalrts::FnResult func_gen_Go_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Go\1/4 (/7 e.ProgName#2/5 )/8 e.Options#2/2 >/1
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
  // closed e.ProgName#2 as range 5
  // closed e.Options#2 as range 2
  //DEBUG: e.ProgName#2: 5
  //DEBUG: e.Options#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & Go\1/4 (/7 e.ProgName#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Options#2/2 AsIs: >/1 ]] }
  refalrts::reinit_name( context[8], ref_ParseCommandLine.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Go_L1("Go\\1", 2443115455U, 4265422081U, func_gen_Go_L1);


static refalrts::FnResult func_gen_Go_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & Go\2/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # InPlace e.idx
    // </0 & Go\2/4 # InPlace/5 e.FileName#2/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_InPlace, context[5] ) )
      continue;
    // closed e.FileName#2 as range 6
    //DEBUG: e.FileName#2: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveFile/4 HalfReuse: (/5 AsIs: e.FileName#2/6 HalfReuse: )/1 } </8 & Transform/9 (/10 e.FileName#2/6/11 )/13 </14 & LoadFile/15 e.FileName#2/6/16 >/18 >/19 >/20 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ref_Transform.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[11], context[12], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ref_LoadFile.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[16], context[17], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SaveFile.ref.function );
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[10], context[13] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # From ( e.idx ) # To ( e.idx )
    // </0 & Go\2/4 # From/5 (/10 e.From#2/8 )/11 # To/12 (/15 e.To#2/13 )/16 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_From, context[5] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    context[12] = refalrts::ident_left(  ident_To, context[6], context[7] );
    if( ! context[12] )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[6], context[7] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    // closed e.From#2 as range 8
    // closed e.To#2 as range 13
    //DEBUG: e.From#2: 8
    //DEBUG: e.To#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & SaveFile/18 (/19 Tile{ AsIs: e.To#2/13 } )/20 (/21"// Automatically generated file, don\'t edit!"/22 )/24 (/25"// Edit file \'"/26 e.From#2/8/28 '\''/30 )/31 (/32 )/33 (/34 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & Transform/5 AsIs: (/10 AsIs: e.From#2/8 AsIs: )/11 HalfReuse: </12 HalfReuse: & LoadFile/15 } e.From#2/8/35 >/37 Tile{ HalfReuse: >/16 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ref_SaveFile.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], "// Automatically generated file, don\'t edit!", 44 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[26], context[27], "// Edit file \'", 14 ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[28], context[29], context[8], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[35], context[36], context[8], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], ref_Transform.ref.function );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[15], ref_LoadFile.ref.function );
    refalrts::reinit_close_call( context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::link_brackets( context[34], context[0] );
    refalrts::link_brackets( context[32], context[33] );
    refalrts::link_brackets( context[25], context[31] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[0], context[15] );
    res = refalrts::splice_evar( res, context[20], context[34] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # BadCommandLine
  // </0 & Go\2/4 # BadCommandLine/5 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_BadCommandLine, context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Go\2/4 # BadCommandLine/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Go_L2("Go\\2", 2443115455U, 4265422081U, func_gen_Go_L2);


static refalrts::FnResult func_Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Go/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & ArgList/5 >/6 </7 & Seq/8 & Go\1/9 & Go\2/10 >/11 >/12 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], ref_ArgList.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_gen_Go_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_gen_Go_L2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Go("Go", 0U, 0U, func_Go);


static refalrts::FnResult func_gen_Transform_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Transform\1/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) e.idx
    // </0 & Transform\1/4 (/7 e.Source#1/9 )/8 e.LinesBefore#2/13 (/19 '/'/21 '*'/22 'G'/23 'E'/24 'N'/25 ':'/26 e.GenMode#2/17 )/20 e.DescriptionAndTail#2/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Source#1 as range 9
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::char_left( '/', context[17], context[18] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::char_left( '*', context[17], context[18] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_left( 'G', context[17], context[18] );
      if( ! context[23] )
        continue;
      context[24] = refalrts::char_left( 'E', context[17], context[18] );
      if( ! context[24] )
        continue;
      context[25] = refalrts::char_left( 'N', context[17], context[18] );
      if( ! context[25] )
        continue;
      context[26] = refalrts::char_left( ':', context[17], context[18] );
      if( ! context[26] )
        continue;
      // closed e.GenMode#2 as range 17
      // closed e.DescriptionAndTail#2 as range 15
      //DEBUG: e.Source#1: 9
      //DEBUG: e.LinesBefore#2: 13
      //DEBUG: e.GenMode#2: 17
      //DEBUG: e.DescriptionAndTail#2: 15

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Source#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 } Tile{ HalfReuse: & Length-T/8 AsIs: e.LinesBefore#2/13 AsIs: (/19 AsIs: '/'/21 AsIs: '*'/22 AsIs: 'G'/23 AsIs: 'E'/24 AsIs: 'N'/25 AsIs: ':'/26 AsIs: e.GenMode#2/17 AsIs: )/20 } Tile{ AsIs: >/1 } )/27 Tile{ AsIs: (/7 } e.GenMode#2/17/28 )/30 Tile{ AsIs: e.DescriptionAndTail#2/15 } Tile{ ]] }
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[28], context[29], context[17], context[18]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_open_call( context[4] );
      refalrts::reinit_name( context[8], ref_Lengthm_T.ref.function );
      refalrts::link_brackets( context[7], context[30] );
      refalrts::link_brackets( context[0], context[27] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[4] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[8], context[20] );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Transform\1/4 (/7 e.Source#1/9 )/8 e.Other#2/11 >/1
  context[9] = context[5];
  context[10] = context[6];
  context[11] = context[2];
  context[12] = context[3];
  // closed e.Source#1 as range 9
  // closed e.Other#2 as range 11
  //DEBUG: e.Source#1: 9
  //DEBUG: e.Other#2: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Other#2/11 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } 1/13 Tile{ AsIs: e.Source#1/9 } Tile{ AsIs: )/8 }"Lexer description not found"/14 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_number( context[13], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[14], context[15], "Lexer description not found", 27 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ErrorAt.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L1("Transform\\1", 2443115455U, 4265422081U, func_gen_Transform_L1);


static refalrts::FnResult func_gen_Transform_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  //FAST GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) e.$
  // </0 & Transform\2/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/17 e.idxTBV#0/9 )/12 (/15 e.idxTTB#0/13 )/16 e.idxTTT#0/2 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.idxB#0 as range 5
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTT#0 as range 2
  if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBV#0 as range 9
  do {
    // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx
    // </0 & Transform\2/4 (/7 e.Source#1/18 )/8 (/11 s.Length#2/17 e.LinesBefore#2/20 )/12 (/15 e.GenMode#2/22 )/16 e.Description#2/26 (/32 'G'/34 'E'/35 'N'/36 ':'/37 'E'/38 'N'/39 'D'/40 '*'/41 '/'/42 )/33 e.Deleted#2/28 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[2];
    context[25] = context[3];
    // closed e.Source#1 as range 18
    // closed e.LinesBefore#2 as range 20
    // closed e.GenMode#2 as range 22
    context[26] = 0;
    context[27] = 0;
    refalrts::start_e_loop();
    do {
      context[28] = context[24];
      context[29] = context[25];
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::char_left( 'G', context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = refalrts::char_left( 'E', context[30], context[31] );
      if( ! context[35] )
        continue;
      context[36] = refalrts::char_left( 'N', context[30], context[31] );
      if( ! context[36] )
        continue;
      context[37] = refalrts::char_left( ':', context[30], context[31] );
      if( ! context[37] )
        continue;
      context[38] = refalrts::char_left( 'E', context[30], context[31] );
      if( ! context[38] )
        continue;
      context[39] = refalrts::char_left( 'N', context[30], context[31] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::char_left( 'D', context[30], context[31] );
      if( ! context[40] )
        continue;
      context[41] = refalrts::char_left( '*', context[30], context[31] );
      if( ! context[41] )
        continue;
      context[42] = refalrts::char_left( '/', context[30], context[31] );
      if( ! context[42] )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      // closed e.Deleted#2 as range 28
      //DEBUG: s.Length#2: 17
      //DEBUG: e.Source#1: 18
      //DEBUG: e.LinesBefore#2: 20
      //DEBUG: e.GenMode#2: 22
      //DEBUG: e.Description#2: 26
      //DEBUG: e.Deleted#2: 28

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & Transform\2/4 (/7 e.Source#1/18 )/8 {REMOVED TILE} {REMOVED TILE} (/32 'G'/34 'E'/35 'N'/36 ':'/37 'E'/38 'N'/39 'D'/40 '*'/41 '/'/42 )/33 e.Deleted#2/28 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: s.Length#2/17 AsIs: e.LinesBefore#2/20 AsIs: )/12 AsIs: (/15 AsIs: e.GenMode#2/22 AsIs: )/16 } Tile{ AsIs: e.Description#2/26 } Tile{ ]] }
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[11], context[16] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[26], context[27], context[24], context[25] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx
  // </0 & Transform\2/4 (/7 e.Source#1/18 )/8 (/11 s.Length#2/17 e.LinesBefore#2/20 )/12 (/15 e.GenMode#2/22 )/16 e.Other#2/24 >/1
  context[18] = context[5];
  context[19] = context[6];
  context[20] = context[9];
  context[21] = context[10];
  context[22] = context[13];
  context[23] = context[14];
  context[24] = context[2];
  context[25] = context[3];
  // closed e.Source#1 as range 18
  // closed e.LinesBefore#2 as range 20
  // closed e.GenMode#2 as range 22
  // closed e.Other#2 as range 24
  //DEBUG: s.Length#2: 17
  //DEBUG: e.Source#1: 18
  //DEBUG: e.LinesBefore#2: 20
  //DEBUG: e.GenMode#2: 22
  //DEBUG: e.Other#2: 24

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.LinesBefore#2/20 {REMOVED TILE} e.GenMode#2/22 {REMOVED TILE} e.Other#2/24 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.Length#2/17 } Tile{ AsIs: e.Source#1/18 } Tile{ AsIs: )/8 HalfReuse: 'E'/11 } 'n'/26 Tile{ HalfReuse: 'd'/12 HalfReuse: ' '/15 } Tile{ HalfReuse: 'o'/16 }"f description not found"/27 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[26], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[27], context[28], "f description not found", 23 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ErrorAt.ref.function );
  refalrts::reinit_char( context[11], 'E' );
  refalrts::reinit_char( context[12], 'd' );
  refalrts::reinit_char( context[15], ' ' );
  refalrts::reinit_char( context[16], 'o' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L2("Transform\\2", 2443115455U, 4265422081U, func_gen_Transform_L2);


static refalrts::FnResult func_gen_Transform_L3S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: ( e.$ ) ( s.$ s.$ e.$ )
  //GLOBAL GEN: ( e.$ ) ( s.$ s.$ e.$ )
  // </0 & Transform\3$1\1/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 s.idxTBV#0/14 e.idxTBVV#0/9 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBVV#0 as range 9
  do {
    // ( e.idx ) ( # TError s.idx e.idx )
    // </0 & Transform\3$1\1/4 (/7 e.Source#1/15 )/8 (/11 # TError/13 s.LineNumber#3/14 e.Text#3/17 )/12 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::ident_term(  ident_TError, context[13] ) )
      continue;
    // closed e.Source#1 as range 15
    // closed e.Text#3 as range 17
    //DEBUG: s.LineNumber#3: 14
    //DEBUG: e.Source#1: 15
    //DEBUG: e.Text#3: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 # TError/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.LineNumber#3/14 } Tile{ AsIs: e.Source#1/15 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Text#3/17 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ErrorAt.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( s.idx s.idx e.idx )
  // </0 & Transform\3$1\1/4 (/7 e.Source#1/15 )/8 (/11 s.TokType#3/13 s.LineNumber#3/14 e.Info#3/17 )/12 >/1
  context[15] = context[5];
  context[16] = context[6];
  context[17] = context[9];
  context[18] = context[10];
  // closed e.Source#1 as range 15
  // closed e.Info#3 as range 17
  //DEBUG: s.TokType#3: 13
  //DEBUG: s.LineNumber#3: 14
  //DEBUG: e.Source#1: 15
  //DEBUG: e.Info#3: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.TokType#3/13 s.LineNumber#3/14 {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } Tile{ HalfReuse: s.TokType3 #13/0 HalfReuse: (/4 HalfReuse: s.LineNumber3 #14/7 AsIs: e.Source#1/15 AsIs: )/8 } Tile{ AsIs: e.Info#3/17 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[0], context[13] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_svar( context[7], context[14] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3S1L1("Transform\\3$1\\1", 2443115455U, 4265422081U, func_gen_Transform_L3S1L1);


static refalrts::FnResult func_gen_Transform_L3S1L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Transform\3$1\2/4 (/7 e.LinesBefore#2/5 )/8 (/11 e.Description#2/9 )/12 e.Generated#3/2 >/1
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
  // closed e.LinesBefore#2 as range 5
  // closed e.Description#2 as range 9
  // closed e.Generated#3 as range 2
  //DEBUG: e.LinesBefore#2: 5
  //DEBUG: e.Description#2: 9
  //DEBUG: e.Generated#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.LinesBefore#2/5 } Tile{ AsIs: e.Description#2/9 } Tile{ AsIs: (/11 } Tile{ HalfReuse: 'G'/0 HalfReuse: 'E'/4 HalfReuse: 'N'/7 } Tile{ HalfReuse: ':'/8 }"EN"/13 Tile{ HalfReuse: 'D'/1 }"*/"/15 Tile{ AsIs: )/12 } Tile{ AsIs: e.Generated#3/2 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[13], context[14], "EN", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "*/", 2 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'G' );
  refalrts::reinit_char( context[4], 'E' );
  refalrts::reinit_char( context[7], 'N' );
  refalrts::reinit_char( context[8], ':' );
  refalrts::reinit_char( context[1], 'D' );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3S1L2("Transform\\3$1\\2", 2443115455U, 4265422081U, func_gen_Transform_L3S1L2);


static refalrts::FnResult func_gen_Transform_L3S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: ( e.$ ) t.$
  //GLOBAL GEN: ( e.$ ) t.$
  // </0 & Transform\3$2\1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) ( # TError s.idx e.idx )
    // </0 & Transform\3$2\1/4 (/7 e.Source#1/11 )/8 (/9 # TError/15 s.LineNumber#3/16 e.Text#3/13 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_TError, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Source#1 as range 11
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.Text#3 as range 13
    //DEBUG: e.Source#1: 11
    //DEBUG: s.LineNumber#3: 16
    //DEBUG: e.Text#3: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/9 # TError/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.LineNumber#3/16 } Tile{ AsIs: e.Source#1/11 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Text#3/13 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ErrorAt.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( s.idx s.idx e.idx )
    // </0 & Transform\3$2\1/4 (/7 e.Source#1/11 )/8 (/9 s.TokType#3/15 s.LineNumber#3/16 e.Info#3/13 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    // closed e.Source#1 as range 11
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.Info#3 as range 13
    //DEBUG: e.Source#1: 11
    //DEBUG: s.TokType#3: 15
    //DEBUG: s.LineNumber#3: 16
    //DEBUG: e.Info#3: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.TokType#3/15 s.LineNumber#3/16 {REMOVED TILE} )/10 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 } Tile{ HalfReuse: s.TokType3 #15/0 HalfReuse: (/4 HalfReuse: s.LineNumber3 #16/7 AsIs: e.Source#1/11 AsIs: )/8 } Tile{ AsIs: e.Info#3/13 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_svar( context[0], context[15] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_svar( context[7], context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx
  // </0 & Transform\3$2\1/4 (/7 e.Source#1/11 )/8 t.Other#3/9 >/1
  context[11] = context[5];
  context[12] = context[6];
  // closed e.Source#1 as range 11
  //DEBUG: t.Other#3: 9
  //DEBUG: e.Source#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Transform\3$2\1/4 (/7 e.Source#1/11 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#3/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3S2L1("Transform\\3$2\\1", 2443115455U, 4265422081U, func_gen_Transform_L3S2L1);


static refalrts::FnResult func_gen_Transform_L3S2L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Transform\3$2\2/4 e.AST#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#3 as range 2
  //DEBUG: e.AST#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Flex-Check/4 AsIs: e.AST#3/2 AsIs: >/1 } e.AST#3/2/5 Tile{ ]] }
  if (! refalrts::copy_evar(context[5], context[6], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Flexm_Check.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3S2L2("Transform\\3$2\\2", 2443115455U, 4265422081U, func_gen_Transform_L3S2L2);


static refalrts::FnResult func_gen_Transform_L3S2L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Transform\3$2\3/4 (/7 e.LinesBefore#2/5 )/8 (/11 e.Description#2/9 )/12 e.Generated#3/2 >/1
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
  // closed e.LinesBefore#2 as range 5
  // closed e.Description#2 as range 9
  // closed e.Generated#3 as range 2
  //DEBUG: e.LinesBefore#2: 5
  //DEBUG: e.Description#2: 9
  //DEBUG: e.Generated#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.LinesBefore#2/5 } Tile{ AsIs: e.Description#2/9 } Tile{ AsIs: (/11 } Tile{ HalfReuse: 'G'/0 HalfReuse: 'E'/4 HalfReuse: 'N'/7 } Tile{ HalfReuse: ':'/8 }"EN"/13 Tile{ HalfReuse: 'D'/1 }"*/"/15 Tile{ AsIs: )/12 } Tile{ AsIs: e.Generated#3/2 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[13], context[14], "EN", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "*/", 2 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'G' );
  refalrts::reinit_char( context[4], 'E' );
  refalrts::reinit_char( context[7], 'N' );
  refalrts::reinit_char( context[8], ':' );
  refalrts::reinit_char( context[1], 'D' );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3S2L3("Transform\\3$2\\3", 2443115455U, 4265422081U, func_gen_Transform_L3S2L3);


static refalrts::FnResult func_gen_Transform_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  //FAST GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) ( s.$ e.$ ) ( e.$ ) e.$
  // </0 & Transform\3/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/17 e.idxTBV#0/9 )/12 (/15 e.idxTTB#0/13 )/16 e.idxTTT#0/2 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.idxB#0 as range 5
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTT#0 as range 2
  if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBV#0 as range 9
  do {
    // ( e.idx ) ( s.idx e.idx ) ( 'TOKENS' ) e.idx
    // </0 & Transform\3/4 (/7 e.Source#1/18 )/8 (/11 s.Length#2/17 e.LinesBefore#2/20 )/12 (/15 'T'/26 'O'/27 'K'/28 'E'/29 'N'/30 'S'/31 )/16 e.Description#2/24 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[2];
    context[25] = context[3];
    context[26] = refalrts::char_left( 'T', context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( 'O', context[22], context[23] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::char_left( 'K', context[22], context[23] );
    if( ! context[28] )
      continue;
    context[29] = refalrts::char_left( 'E', context[22], context[23] );
    if( ! context[29] )
      continue;
    context[30] = refalrts::char_left( 'N', context[22], context[23] );
    if( ! context[30] )
      continue;
    context[31] = refalrts::char_left( 'S', context[22], context[23] );
    if( ! context[31] )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.Source#1 as range 18
    // closed e.LinesBefore#2 as range 20
    // closed e.Description#2 as range 24
    //DEBUG: s.Length#2: 17
    //DEBUG: e.Source#1: 18
    //DEBUG: e.LinesBefore#2: 20
    //DEBUG: e.Description#2: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Length#2/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </32 Tile{ HalfReuse: & Fetch/31 HalfReuse: s.Length2 #17/16 AsIs: e.Description#2/24 HalfReuse: </1 } & Seq/33 & DFA-Tokens/34 (/35 & Map/36 Tile{ HalfReuse: [*]/0 Reuse: & Transform\3$1\1/4 AsIs: (/7 AsIs: e.Source#1/18 AsIs: )/8 HalfReuse: {*}/11 } Tile{ AsIs: )/12 HalfReuse: & DFA-Parse/15 HalfReuse: & DFA-Compile/26 HalfReuse: & GenerateFromDFA/27 HalfReuse: [*]/28 HalfReuse: & Transform\3$1\2/29 HalfReuse: (/30 } Tile{ AsIs: e.LinesBefore#2/20 } )/37 (/38 e.Description#2/24/39 )/41 {*}/42 >/43 >/44 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], ref_Seq.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], ref_DFAm_Tokens.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[36], ref_Map.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[39], context[40], context[24], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( context[42], context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[43] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[44] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[31], ref_Fetch.ref.function );
    refalrts::reinit_svar( context[16], context[17] );
    refalrts::reinit_open_call( context[1] );
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_Transform_L3S1L1.ref.function );
    refalrts::reinit_unwrapped_closure( context[11], context[0] );
    refalrts::reinit_name( context[15], ref_DFAm_Parse.ref.function );
    refalrts::reinit_name( context[26], ref_DFAm_Compile.ref.function );
    refalrts::reinit_name( context[27], ref_GenerateFromDFA.ref.function );
    refalrts::reinit_closure_head( context[28] );
    refalrts::reinit_name( context[29], ref_gen_Transform_L3S1L2.ref.function );
    refalrts::reinit_open_bracket( context[30] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[43] );
    refalrts::push_stack( context[1] );
    refalrts::link_brackets( context[38], context[41] );
    refalrts::link_brackets( context[30], context[37] );
    refalrts::link_brackets( context[35], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[37], context[44] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[12], context[30] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[33], context[36] );
    res = refalrts::splice_evar( res, context[31], context[1] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    refalrts::wrap_closure( context[11] );
    refalrts::wrap_closure( context[42] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( s.idx e.idx ) ( 'FLEX' ) e.idx
    // </0 & Transform\3/4 (/7 e.Source#1/18 )/8 (/11 s.Length#2/17 e.LinesBefore#2/20 )/12 (/15 'F'/26 'L'/27 'E'/28 'X'/29 )/16 e.Description#2/24 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[2];
    context[25] = context[3];
    context[26] = refalrts::char_left( 'F', context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( 'L', context[22], context[23] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::char_left( 'E', context[22], context[23] );
    if( ! context[28] )
      continue;
    context[29] = refalrts::char_left( 'X', context[22], context[23] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.Source#1 as range 18
    // closed e.LinesBefore#2 as range 20
    // closed e.Description#2 as range 24
    //DEBUG: s.Length#2: 17
    //DEBUG: e.Source#1: 18
    //DEBUG: e.LinesBefore#2: 20
    //DEBUG: e.Description#2: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </30 & Fetch/31 Tile{ AsIs: s.Length#2/17 } Tile{ AsIs: e.Description#2/24 } </32 & Seq/33 & Flex-Tokens/34 (/35 & Map/36 Tile{ HalfReuse: [*]/0 Reuse: & Transform\3$2\1/4 AsIs: (/7 AsIs: e.Source#1/18 AsIs: )/8 HalfReuse: {*}/11 } Tile{ AsIs: )/12 HalfReuse: & Flex-Parse/15 HalfReuse: & Transform\3$2\2/26 HalfReuse: & Flex-Desugar/27 HalfReuse: & Flex-Compile/28 HalfReuse: [*]/29 HalfReuse: & Transform\3$2\3/16 } (/37 Tile{ AsIs: e.LinesBefore#2/20 } )/38 (/39 e.Description#2/24/40 )/42 {*}/43 >/44 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], ref_Seq.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], ref_Flexm_Tokens.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[36], ref_Map.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[39] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[40], context[41], context[24], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[42] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( context[43], context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[44] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_Transform_L3S2L1.ref.function );
    refalrts::reinit_unwrapped_closure( context[11], context[0] );
    refalrts::reinit_name( context[15], ref_Flexm_Parse.ref.function );
    refalrts::reinit_name( context[26], ref_gen_Transform_L3S2L2.ref.function );
    refalrts::reinit_name( context[27], ref_Flexm_Desugar.ref.function );
    refalrts::reinit_name( context[28], ref_Flexm_Compile.ref.function );
    refalrts::reinit_closure_head( context[29] );
    refalrts::reinit_name( context[16], ref_gen_Transform_L3S2L3.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[32] );
    refalrts::link_brackets( context[39], context[42] );
    refalrts::link_brackets( context[37], context[38] );
    refalrts::link_brackets( context[35], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[38], context[44] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[32], context[36] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::use( res );
    refalrts::wrap_closure( context[11] );
    refalrts::wrap_closure( context[43] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx
  // </0 & Transform\3/4 (/7 e.Source#1/18 )/8 (/11 s.Length#2/17 e.LinesBefore#2/20 )/12 (/15 e.OtherGenMode#2/22 )/16 e.Description#2/24 >/1
  context[18] = context[5];
  context[19] = context[6];
  context[20] = context[9];
  context[21] = context[10];
  context[22] = context[13];
  context[23] = context[14];
  context[24] = context[2];
  context[25] = context[3];
  // closed e.Source#1 as range 18
  // closed e.LinesBefore#2 as range 20
  // closed e.OtherGenMode#2 as range 22
  // closed e.Description#2 as range 24
  //DEBUG: s.Length#2: 17
  //DEBUG: e.Source#1: 18
  //DEBUG: e.LinesBefore#2: 20
  //DEBUG: e.OtherGenMode#2: 22
  //DEBUG: e.Description#2: 24

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.LinesBefore#2/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Description#2/24 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.Length#2/17 } Tile{ AsIs: e.Source#1/18 } Tile{ AsIs: )/8 HalfReuse: 'U'/11 } Tile{ HalfReuse: 'n'/12 HalfReuse: 'k'/15 } Tile{ HalfReuse: 'n'/16 }"own generation mode "/26 Tile{ AsIs: e.OtherGenMode#2/22 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[26], context[27], "own generation mode ", 20 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ErrorAt.ref.function );
  refalrts::reinit_char( context[11], 'U' );
  refalrts::reinit_char( context[12], 'n' );
  refalrts::reinit_char( context[15], 'k' );
  refalrts::reinit_char( context[16], 'n' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3("Transform\\3", 2443115455U, 4265422081U, func_gen_Transform_L3);


static refalrts::FnResult func_Transform(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Transform/4 (/7 e.Source#1/5 )/8 e.Lines#1/2 >/1
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
  // closed e.Source#1 as range 5
  // closed e.Lines#1 as range 2
  //DEBUG: e.Source#1: 5
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: e.Lines#1/2 } </11 & Seq/12 Tile{ HalfReuse: [*]/0 Reuse: & Transform\1/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 } {*}/13 [*]/14 & Transform\2/15 (/16 e.Source#1/5/17 )/19 {*}/20 [*]/21 & Transform\3/22 (/23 e.Source#1/5/24 )/26 {*}/27 >/28 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[13], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_gen_Transform_L2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[20], context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], ref_gen_Transform_L3.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[24], context[25], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[27], context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_Transform_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[23], context[26] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[28] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  refalrts::wrap_closure( context[20] );
  refalrts::wrap_closure( context[27] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Transform("Transform", 2443115455U, 4265422081U, func_Transform);


static refalrts::FnResult func_Flexm_Compile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Flex-Compile/4 e.AnyInput#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AnyInput#1 as range 2
  //DEBUG: e.AnyInput#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Flex-Compile/4 e.AnyInput#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flexm_Compile("Flex-Compile", 2443115455U, 4265422081U, func_Flexm_Compile);


static refalrts::FnResult func_gen_Lengthm_T_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Length-T\1/4 s.Next#2/9 (/7 e.Line#2/5 )/8 >/1
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
  // closed e.Line#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Line#2: 5
  //DEBUG: s.Next#2: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Next#2/9 HalfReuse: >/7 } Tile{ HalfReuse: (/8 } Tile{ AsIs: e.Line#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::update_name( context[4], ref_Inc.ref.function );
  refalrts::reinit_close_call( context[7] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Lengthm_T_L1("Length-T\\1", 2443115455U, 4265422081U, func_gen_Lengthm_T_L1);


static refalrts::FnResult func_Lengthm_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Length-T/4 e.Lines#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Lines#1 as range 2
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & MapReduce/6 Tile{ HalfReuse: & Length-T\1/0 HalfReuse: 0/4 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_gen_Lengthm_T_L1.ref.function );
  refalrts::reinit_number( context[4], 0UL );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Lengthm_T("Length-T", 2443115455U, 4265422081U, func_Lengthm_T);


//End of file
