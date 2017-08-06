// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_BadCommandLine = refalrts::ident_from_static("BadCommandLine");
const refalrts::RefalIdentifier ident_From = refalrts::ident_from_static("From");
const refalrts::RefalIdentifier ident_InPlace = refalrts::ident_from_static("InPlace");
const refalrts::RefalIdentifier ident_TError = refalrts::ident_from_static("TError");
const refalrts::RefalIdentifier ident_To = refalrts::ident_from_static("To");
static refalrts::ExternalReference ref_ArgList("ArgList", 0U, 0U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Seq("Seq", 0U, 0U);
static refalrts::ExternalReference ref_LoadFile("LoadFile", 0U, 0U);
static refalrts::ExternalReference ref_SaveFile("SaveFile", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_ParseCommandLine("ParseCommandLine", 0U, 0U);
static refalrts::ExternalReference ref_DFAm_Tokens("DFA-Tokens", 0U, 0U);
static refalrts::ExternalReference ref_DFAm_Parse("DFA-Parse", 0U, 0U);
static refalrts::ExternalReference ref_DFAm_Compile("DFA-Compile", 0U, 0U);
static refalrts::ExternalReference ref_GenerateFromDFA("GenerateFromDFA", 0U, 0U);
static refalrts::ExternalReference ref_ErrorAt("ErrorAt", 0U, 0U);
static refalrts::ExternalReference ref_Flexm_Tokens("Flex-Tokens", 0U, 0U);
static refalrts::ExternalReference ref_Flexm_Parse("Flex-Parse", 0U, 0U);
static refalrts::ExternalReference ref_Flexm_Check("Flex-Check", 0U, 0U);
static refalrts::ExternalReference ref_Flexm_Desugar("Flex-Desugar", 0U, 0U);
static refalrts::ExternalReference ref_gen_Go_L1("Go\\1", 2384996882U, 584441409U);
static refalrts::ExternalReference ref_gen_Go_L2("Go\\2", 2384996882U, 584441409U);
static refalrts::ExternalReference ref_Go("Go", 0U, 0U);
static refalrts::ExternalReference ref_gen_Transform_L1("Transform\\1", 2384996882U, 584441409U);
static refalrts::ExternalReference ref_gen_Transform_L2("Transform\\2", 2384996882U, 584441409U);
static refalrts::ExternalReference ref_gen_Transform_L3S1L1("Transform\\3$1\\1", 2384996882U, 584441409U);
static refalrts::ExternalReference ref_gen_Transform_L3S1L2("Transform\\3$1\\2", 2384996882U, 584441409U);
static refalrts::ExternalReference ref_gen_Transform_L3S2L1("Transform\\3$2\\1", 2384996882U, 584441409U);
static refalrts::ExternalReference ref_gen_Transform_L3S2L2("Transform\\3$2\\2", 2384996882U, 584441409U);
static refalrts::ExternalReference ref_gen_Transform_L3S2L3("Transform\\3$2\\3", 2384996882U, 584441409U);
static refalrts::ExternalReference ref_gen_Transform_L3("Transform\\3", 2384996882U, 584441409U);
static refalrts::ExternalReference ref_Transform("Transform", 2384996882U, 584441409U);
static refalrts::ExternalReference ref_Flexm_Compile("Flex-Compile", 2384996882U, 584441409U);
static refalrts::ExternalReference ref_gen_Lengthm_T_L1("Length-T\\1", 2384996882U, 584441409U);
static refalrts::ExternalReference ref_Lengthm_T("Length-T", 2384996882U, 584441409U);

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

static refalrts::NativeReference nat_ref_gen_Go_L1("Go\\1", 2384996882U, 584441409U, func_gen_Go_L1);

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
    // </0 & Go\2/4 # InPlace/5 e.FileName#2/2 >/1
    if( ! refalrts::ident_term(  ident_InPlace, context[5] ) )
      continue;
    // closed e.FileName#2 as range 2
    //DEBUG: e.FileName#2: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveFile/4 HalfReuse: (/5 AsIs: e.FileName#2/2 HalfReuse: )/1 } </6 & Transform/7 (/8 e.FileName#2/2/9 )/11 </12 & LoadFile/13 e.FileName#2/2/14 >/16 >/17 >/18 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], ref_Transform.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[9], context[10], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ref_LoadFile.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[14], context[15], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SaveFile.ref.function );
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # From ( e.idx ) # To ( e.idx )
    // </0 & Go\2/4 # From/5 (/8 e.From#2/6 )/9 # To/10 (/13 e.To#2/11 )/14 >/1
    if( ! refalrts::ident_term(  ident_From, context[5] ) )
      continue;
    context[36] = context[2];
    context[37] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[36], context[37] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::ident_left(  ident_To, context[36], context[37] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[36], context[37] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    if( ! refalrts::empty_seq( context[36], context[37] ) )
      continue;
    // closed e.From#2 as range 6
    // closed e.To#2 as range 11
    //DEBUG: e.From#2: 6
    //DEBUG: e.To#2: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & SaveFile/16 (/17 Tile{ AsIs: e.To#2/11 } )/18 (/19"// Automatically generated file, don\'t edit!"/20 )/22 (/23"// Edit file \'"/24 e.From#2/6/26 '\''/28 )/29 (/30 )/31 (/32 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & Transform/5 AsIs: (/8 AsIs: e.From#2/6 AsIs: )/9 HalfReuse: </10 HalfReuse: & LoadFile/13 } e.From#2/6/33 >/35 Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ref_SaveFile.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[20], context[21], "// Automatically generated file, don\'t edit!", 44 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "// Edit file \'", 14 ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[26], context[27], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[33], context[34], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], ref_Transform.ref.function );
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[13], ref_LoadFile.ref.function );
    refalrts::reinit_close_call( context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[10] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[32], context[0] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::link_brackets( context[23], context[29] );
    refalrts::link_brackets( context[19], context[22] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[18], context[32] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # BadCommandLine
  // </0 & Go\2/4 # BadCommandLine/5 >/1
  if( ! refalrts::ident_term(  ident_BadCommandLine, context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
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

static refalrts::NativeReference nat_ref_gen_Go_L2("Go\\2", 2384996882U, 584441409U, func_gen_Go_L2);

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
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
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
    // </0 & Transform\1/4 (/7 e.Source#1/5 )/8 e.LinesBefore#2/9 (/13 '/'/15 '*'/16 'G'/17 'E'/18 'N'/19 ':'/20 e.GenMode#2/11 )/14 e.DescriptionAndTail#2/2 >/1
    // closed e.Source#1 as range 5
    context[25] = context[2];
    context[26] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[25];
      context[28] = context[26];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[27], context[28] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::char_left( '/', context[11], context[12] );
      if( ! context[15] )
        continue;
      context[16] = refalrts::char_left( '*', context[11], context[12] );
      if( ! context[16] )
        continue;
      context[17] = refalrts::char_left( 'G', context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::char_left( 'E', context[11], context[12] );
      if( ! context[18] )
        continue;
      context[19] = refalrts::char_left( 'N', context[11], context[12] );
      if( ! context[19] )
        continue;
      context[20] = refalrts::char_left( ':', context[11], context[12] );
      if( ! context[20] )
        continue;
      // closed e.GenMode#2 as range 11
      // closed e.DescriptionAndTail#2 as range 27(2)
      //DEBUG: e.Source#1: 5
      //DEBUG: e.LinesBefore#2: 9
      //DEBUG: e.GenMode#2: 11
      //DEBUG: e.DescriptionAndTail#2: 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Source#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 } Tile{ HalfReuse: & Length-T/8 AsIs: e.LinesBefore#2/9 AsIs: (/13 AsIs: '/'/15 AsIs: '*'/16 AsIs: 'G'/17 AsIs: 'E'/18 AsIs: 'N'/19 AsIs: ':'/20 AsIs: e.GenMode#2/11 AsIs: )/14 } Tile{ AsIs: >/1 } )/21 Tile{ AsIs: (/7 } e.GenMode#2/11/22 )/24 Tile{ AsIs: e.DescriptionAndTail#2/27(2) } Tile{ ]] }
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[22], context[23], context[11], context[12]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_open_call( context[4] );
      refalrts::reinit_name( context[8], ref_Lengthm_T.ref.function );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::link_brackets( context[0], context[21] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[4] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[8], context[14] );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[25], context[26] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Transform\1/4 (/7 e.Source#1/5 )/8 e.Other#2/2 >/1
  // closed e.Source#1 as range 5
  // closed e.Other#2 as range 2
  //DEBUG: e.Source#1: 5
  //DEBUG: e.Other#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Other#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } 1/9 Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/8 }"Lexer description not found"/10 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_number( context[9], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], "Lexer description not found", 27 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ErrorAt.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L1("Transform\\1", 2384996882U, 584441409U, func_gen_Transform_L1);

static refalrts::FnResult func_gen_Transform_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
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
    // </0 & Transform\2/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 e.GenMode#2/13 )/16 e.Description#2/18 (/22 'G'/24 'E'/25 'N'/26 ':'/27 'E'/28 'N'/29 'D'/30 '*'/31 '/'/32 )/23 e.Deleted#2/2 >/1
    // closed e.Source#1 as range 5
    // closed e.LinesBefore#2 as range 9
    // closed e.GenMode#2 as range 13
    context[33] = context[2];
    context[34] = context[3];
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[35] = context[33];
      context[36] = context[34];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[35], context[36] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::char_left( 'G', context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = refalrts::char_left( 'E', context[20], context[21] );
      if( ! context[25] )
        continue;
      context[26] = refalrts::char_left( 'N', context[20], context[21] );
      if( ! context[26] )
        continue;
      context[27] = refalrts::char_left( ':', context[20], context[21] );
      if( ! context[27] )
        continue;
      context[28] = refalrts::char_left( 'E', context[20], context[21] );
      if( ! context[28] )
        continue;
      context[29] = refalrts::char_left( 'N', context[20], context[21] );
      if( ! context[29] )
        continue;
      context[30] = refalrts::char_left( 'D', context[20], context[21] );
      if( ! context[30] )
        continue;
      context[31] = refalrts::char_left( '*', context[20], context[21] );
      if( ! context[31] )
        continue;
      context[32] = refalrts::char_left( '/', context[20], context[21] );
      if( ! context[32] )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      // closed e.Deleted#2 as range 35(2)
      //DEBUG: s.Length#2: 17
      //DEBUG: e.Source#1: 5
      //DEBUG: e.LinesBefore#2: 9
      //DEBUG: e.GenMode#2: 13
      //DEBUG: e.Description#2: 18
      //DEBUG: e.Deleted#2: 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & Transform\2/4 (/7 e.Source#1/5 )/8 {REMOVED TILE} {REMOVED TILE} (/22 'G'/24 'E'/25 'N'/26 ':'/27 'E'/28 'N'/29 'D'/30 '*'/31 '/'/32 )/23 e.Deleted#2/35(2) >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: s.Length#2/17 AsIs: e.LinesBefore#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.GenMode#2/13 AsIs: )/16 } Tile{ AsIs: e.Description#2/18 } Tile{ ]] }
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[11], context[16] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[18], context[19], context[33], context[34] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx
  // </0 & Transform\2/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 e.GenMode#2/13 )/16 e.Other#2/2 >/1
  // closed e.Source#1 as range 5
  // closed e.LinesBefore#2 as range 9
  // closed e.GenMode#2 as range 13
  // closed e.Other#2 as range 2
  //DEBUG: s.Length#2: 17
  //DEBUG: e.Source#1: 5
  //DEBUG: e.LinesBefore#2: 9
  //DEBUG: e.GenMode#2: 13
  //DEBUG: e.Other#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.LinesBefore#2/9 {REMOVED TILE} e.GenMode#2/13 {REMOVED TILE} e.Other#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.Length#2/17 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/8 HalfReuse: 'E'/11 } 'n'/18 Tile{ HalfReuse: 'd'/12 HalfReuse: ' '/15 } Tile{ HalfReuse: 'o'/16 }"f description not found"/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[18], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[19], context[20], "f description not found", 23 ) )
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
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L2("Transform\\2", 2384996882U, 584441409U, func_gen_Transform_L2);

static refalrts::FnResult func_gen_Transform_L3S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
    // </0 & Transform\3$1\1/4 (/7 e.Source#1/5 )/8 (/11 # TError/13 s.LineNumber#3/14 e.Text#3/9 )/12 >/1
    if( ! refalrts::ident_term(  ident_TError, context[13] ) )
      continue;
    // closed e.Source#1 as range 5
    // closed e.Text#3 as range 9
    //DEBUG: s.LineNumber#3: 14
    //DEBUG: e.Source#1: 5
    //DEBUG: e.Text#3: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 # TError/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.LineNumber#3/14 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Text#3/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ErrorAt.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( s.idx s.idx e.idx )
  // </0 & Transform\3$1\1/4 (/7 e.Source#1/5 )/8 (/11 s.TokType#3/13 s.LineNumber#3/14 e.Info#3/9 )/12 >/1
  // closed e.Source#1 as range 5
  // closed e.Info#3 as range 9
  //DEBUG: s.TokType#3: 13
  //DEBUG: s.LineNumber#3: 14
  //DEBUG: e.Source#1: 5
  //DEBUG: e.Info#3: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.TokType#3/13 s.LineNumber#3/14 {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } Tile{ HalfReuse: s.TokType3 #13/0 HalfReuse: (/4 HalfReuse: s.LineNumber3 #14/7 AsIs: e.Source#1/5 AsIs: )/8 } Tile{ AsIs: e.Info#3/9 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[0], context[13] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_svar( context[7], context[14] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3S1L1("Transform\\3$1\\1", 2384996882U, 584441409U, func_gen_Transform_L3S1L1);

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

static refalrts::NativeReference nat_ref_gen_Transform_L3S1L2("Transform\\3$1\\2", 2384996882U, 584441409U, func_gen_Transform_L3S1L2);

static refalrts::FnResult func_gen_Transform_L3S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
    // </0 & Transform\3$2\1/4 (/7 e.Source#1/5 )/8 (/9 # TError/13 s.LineNumber#3/14 e.Text#3/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  ident_TError, context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Source#1 as range 5
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    // closed e.Text#3 as range 11
    //DEBUG: e.Source#1: 5
    //DEBUG: s.LineNumber#3: 14
    //DEBUG: e.Text#3: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/9 # TError/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.LineNumber#3/14 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Text#3/11 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ErrorAt.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( s.idx s.idx e.idx )
    // </0 & Transform\3$2\1/4 (/7 e.Source#1/5 )/8 (/9 s.TokType#3/13 s.LineNumber#3/14 e.Info#3/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    // closed e.Source#1 as range 5
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    // closed e.Info#3 as range 11
    //DEBUG: e.Source#1: 5
    //DEBUG: s.TokType#3: 13
    //DEBUG: s.LineNumber#3: 14
    //DEBUG: e.Info#3: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.TokType#3/13 s.LineNumber#3/14 {REMOVED TILE} )/10 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 } Tile{ HalfReuse: s.TokType3 #13/0 HalfReuse: (/4 HalfReuse: s.LineNumber3 #14/7 AsIs: e.Source#1/5 AsIs: )/8 } Tile{ AsIs: e.Info#3/11 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_svar( context[0], context[13] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_svar( context[7], context[14] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx
  // </0 & Transform\3$2\1/4 (/7 e.Source#1/5 )/8 t.Other#3/9 >/1
  // closed e.Source#1 as range 5
  //DEBUG: t.Other#3: 9
  //DEBUG: e.Source#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Transform\3$2\1/4 (/7 e.Source#1/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#3/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3S2L1("Transform\\3$2\\1", 2384996882U, 584441409U, func_gen_Transform_L3S2L1);

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

static refalrts::NativeReference nat_ref_gen_Transform_L3S2L2("Transform\\3$2\\2", 2384996882U, 584441409U, func_gen_Transform_L3S2L2);

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

static refalrts::NativeReference nat_ref_gen_Transform_L3S2L3("Transform\\3$2\\3", 2384996882U, 584441409U, func_gen_Transform_L3S2L3);

static refalrts::FnResult func_gen_Transform_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
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
    // </0 & Transform\3/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 'T'/18 'O'/19 'K'/20 'E'/21 'N'/22 'S'/23 )/16 e.Description#2/2 >/1
    context[39] = context[13];
    context[40] = context[14];
    context[18] = refalrts::char_left( 'T', context[39], context[40] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( 'O', context[39], context[40] );
    if( ! context[19] )
      continue;
    context[20] = refalrts::char_left( 'K', context[39], context[40] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( 'E', context[39], context[40] );
    if( ! context[21] )
      continue;
    context[22] = refalrts::char_left( 'N', context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( 'S', context[39], context[40] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[39], context[40] ) )
      continue;
    // closed e.Source#1 as range 5
    // closed e.LinesBefore#2 as range 9
    // closed e.Description#2 as range 2
    //DEBUG: s.Length#2: 17
    //DEBUG: e.Source#1: 5
    //DEBUG: e.LinesBefore#2: 9
    //DEBUG: e.Description#2: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </24 & Fetch/25 Tile{ AsIs: s.Length#2/17 } e.Description#2/2/26 </28 & Seq/29 & DFA-Tokens/30 (/31 & Map/32 </33 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Transform\3$1\1/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 HalfReuse: >/11 } Tile{ AsIs: )/12 HalfReuse: & DFA-Parse/15 HalfReuse: & DFA-Compile/18 HalfReuse: & GenerateFromDFA/19 HalfReuse: </20 HalfReuse: & @create_closure@/21 HalfReuse: & Transform\3$1\2/22 HalfReuse: (/23 } Tile{ AsIs: e.LinesBefore#2/9 } Tile{ AsIs: )/16 } (/34 Tile{ AsIs: e.Description#2/2 } )/35 >/36 >/37 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[26], context[27], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], ref_Seq.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], ref_DFAm_Tokens.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], ref_Map.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], refalrts::create_closure );
    refalrts::update_name( context[4], ref_gen_Transform_L3S1L1.ref.function );
    refalrts::reinit_close_call( context[11] );
    refalrts::reinit_name( context[15], ref_DFAm_Parse.ref.function );
    refalrts::reinit_name( context[18], ref_DFAm_Compile.ref.function );
    refalrts::reinit_name( context[19], ref_GenerateFromDFA.ref.function );
    refalrts::reinit_open_call( context[20] );
    refalrts::reinit_name( context[21], refalrts::create_closure );
    refalrts::reinit_name( context[22], ref_gen_Transform_L3S1L2.ref.function );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[34], context[35] );
    refalrts::link_brackets( context[23], context[16] );
    refalrts::link_brackets( context[31], context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[33] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[35], context[37] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[23] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[28], context[33] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( s.idx e.idx ) ( 'FLEX' ) e.idx
    // </0 & Transform\3/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 'F'/18 'L'/19 'E'/20 'X'/21 )/16 e.Description#2/2 >/1
    context[39] = context[13];
    context[40] = context[14];
    context[18] = refalrts::char_left( 'F', context[39], context[40] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( 'L', context[39], context[40] );
    if( ! context[19] )
      continue;
    context[20] = refalrts::char_left( 'E', context[39], context[40] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( 'X', context[39], context[40] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[39], context[40] ) )
      continue;
    // closed e.Source#1 as range 5
    // closed e.LinesBefore#2 as range 9
    // closed e.Description#2 as range 2
    //DEBUG: s.Length#2: 17
    //DEBUG: e.Source#1: 5
    //DEBUG: e.LinesBefore#2: 9
    //DEBUG: e.Description#2: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </22 & Fetch/23 Tile{ AsIs: s.Length#2/17 } Tile{ AsIs: e.Description#2/2 } </24 & Seq/25 & Flex-Tokens/26 (/27 & Map/28 </29 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Transform\3$2\1/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 HalfReuse: >/11 } Tile{ AsIs: )/12 HalfReuse: & Flex-Parse/15 HalfReuse: & Transform\3$2\2/18 HalfReuse: & Flex-Desugar/19 HalfReuse: & Flex-Compile/20 HalfReuse: </21 HalfReuse: & @create_closure@/16 } & Transform\3$2\3/30 (/31 Tile{ AsIs: e.LinesBefore#2/9 } )/32 (/33 e.Description#2/2/34 )/36 >/37 >/38 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], ref_Seq.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], ref_Flexm_Tokens.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], ref_Map.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], ref_gen_Transform_L3S2L3.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[34], context[35], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[38] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], refalrts::create_closure );
    refalrts::update_name( context[4], ref_gen_Transform_L3S2L1.ref.function );
    refalrts::reinit_close_call( context[11] );
    refalrts::reinit_name( context[15], ref_Flexm_Parse.ref.function );
    refalrts::reinit_name( context[18], ref_gen_Transform_L3S2L2.ref.function );
    refalrts::reinit_name( context[19], ref_Flexm_Desugar.ref.function );
    refalrts::reinit_name( context[20], ref_Flexm_Compile.ref.function );
    refalrts::reinit_open_call( context[21] );
    refalrts::reinit_name( context[16], refalrts::create_closure );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[38] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[33], context[36] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::link_brackets( context[27], context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[32], context[38] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[24], context[29] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx
  // </0 & Transform\3/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 e.OtherGenMode#2/13 )/16 e.Description#2/2 >/1
  // closed e.Source#1 as range 5
  // closed e.LinesBefore#2 as range 9
  // closed e.OtherGenMode#2 as range 13
  // closed e.Description#2 as range 2
  //DEBUG: s.Length#2: 17
  //DEBUG: e.Source#1: 5
  //DEBUG: e.LinesBefore#2: 9
  //DEBUG: e.OtherGenMode#2: 13
  //DEBUG: e.Description#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.LinesBefore#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Description#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.Length#2/17 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/8 HalfReuse: 'U'/11 } Tile{ HalfReuse: 'n'/12 HalfReuse: 'k'/15 } Tile{ HalfReuse: 'n'/16 }"own generation mode "/18 Tile{ AsIs: e.OtherGenMode#2/13 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[18], context[19], "own generation mode ", 20 ) )
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
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3("Transform\\3", 2384996882U, 584441409U, func_gen_Transform_L3);

static refalrts::FnResult func_Transform(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
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
  //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: e.Lines#1/2 } </11 & Seq/12 </13 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Transform\1/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 } >/14 </15 & @create_closure@/16 & Transform\2/17 (/18 e.Source#1/5/19 )/21 >/22 </23 & @create_closure@/24 & Transform\3/25 (/26 e.Source#1/5/27 )/29 >/30 >/31 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_gen_Transform_L2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], ref_gen_Transform_L3.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[27], context[28], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure );
  refalrts::update_name( context[4], ref_gen_Transform_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[26], context[29] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[31] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Transform("Transform", 2384996882U, 584441409U, func_Transform);

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

static refalrts::NativeReference nat_ref_Flexm_Compile("Flex-Compile", 2384996882U, 584441409U, func_Flexm_Compile);

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

static refalrts::NativeReference nat_ref_gen_Lengthm_T_L1("Length-T\\1", 2384996882U, 584441409U, func_gen_Lengthm_T_L1);

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

static refalrts::NativeReference nat_ref_Lengthm_T("Length-T", 2384996882U, 584441409U, func_Lengthm_T);


//End of file
