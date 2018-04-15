// This file automatically generated from 'HighLevelRASL.sref'
// Don't edit! Edit 'HighLevelRASL.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3260011162_259521105
static const refalrts::RefalIdentifier ident_CmdConditionFunc = refalrts::ident_from_static("CmdConditionFunc");
static const refalrts::RefalIdentifier ident_CmdDeclaration = refalrts::ident_from_static("CmdDeclaration");
static const refalrts::RefalIdentifier ident_CmdDefineIdent = refalrts::ident_from_static("CmdDefineIdent");
static const refalrts::RefalIdentifier ident_CmdEmitNativeCode = refalrts::ident_from_static("CmdEmitNativeCode");
static const refalrts::RefalIdentifier ident_CmdEnum = refalrts::ident_from_static("CmdEnum");
static const refalrts::RefalIdentifier ident_CmdNativeFunction = refalrts::ident_from_static("CmdNativeFunction");
static const refalrts::RefalIdentifier ident_CmdSwap = refalrts::ident_from_static("CmdSwap");
static const refalrts::RefalIdentifier ident_Condition = refalrts::ident_from_static("Condition");
static const refalrts::RefalIdentifier ident_Conjoint = refalrts::ident_from_static("Conjoint");
static const refalrts::RefalIdentifier ident_Declaration = refalrts::ident_from_static("Declaration");
static const refalrts::RefalIdentifier ident_Disjoint = refalrts::ident_from_static("Disjoint");
static const refalrts::RefalIdentifier ident_Enum = refalrts::ident_from_static("Enum");
static const refalrts::RefalIdentifier ident_Function = refalrts::ident_from_static("Function");
static const refalrts::RefalIdentifier ident_GNm_Local = refalrts::ident_from_static("GN-Local");
static const refalrts::RefalIdentifier ident_Ident = refalrts::ident_from_static("Ident");
static const refalrts::RefalIdentifier ident_NativeBlock = refalrts::ident_from_static("NativeBlock");
static const refalrts::RefalIdentifier ident_NativeBody = refalrts::ident_from_static("NativeBody");
static const refalrts::RefalIdentifier ident_NoOpt = refalrts::ident_from_static("NoOpt");
static const refalrts::RefalIdentifier ident_OptResult = refalrts::ident_from_static("OptResult");
static const refalrts::RefalIdentifier ident_Sentences = refalrts::ident_from_static("Sentences");
static const refalrts::RefalIdentifier ident_Swap = refalrts::ident_from_static("Swap");
static refalrts::ExternalReference ref_GenResultm_Opt("GenResult-Opt", 0U, 0U);
static refalrts::ExternalReference ref_GenResultm_Simple("GenResult-Simple", 0U, 0U);
static refalrts::ExternalReference ref_GenResultFuncs("GenResultFuncs", 3260011162U, 259521105U);
static refalrts::ExternalReference ref_GenSentenceFunc("GenSentenceFunc", 3260011162U, 259521105U);
static refalrts::ExternalReference ref_GenSubstm_Save("GenSubst-Save", 0U, 0U);
static refalrts::ExternalReference ref_GenSubstm_Simple("GenSubst-Simple", 0U, 0U);
static refalrts::ExternalReference ref_HighLevelRASL("HighLevelRASL", 0U, 0U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_L1("HighLevelRASL\\1", 3260011162U, 259521105U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_L1S1L1("HighLevelRASL\\1$1\\1", 3260011162U, 259521105U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_L1S1L1L1("HighLevelRASL\\1$1\\1\\1", 3260011162U, 259521105U);
static refalrts::ExternalReference ref_HighLevelRASLm_Function("HighLevelRASL-Function", 3260011162U, 259521105U);
static refalrts::ExternalReference ref_HighLevelRASLm_Functionm_Conjoint("HighLevelRASL-Function-Conjoint", 0U, 0U);
static refalrts::ExternalReference ref_HighLevelRASLm_Functionm_Disjoint("HighLevelRASL-Function-Disjoint", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);

static refalrts::FnResult func_gen_HighLevelRASL_L1S1L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & HighLevelRASL\1$1\1\1/4 (/7 # Condition/9 (/12 e.Name#4/10 )/13 (/16 e.Result#4/14 )/17 (/20 e.Pattern#4/18 )/21 )/8 >/1
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
  context[9] = refalrts::ident_left(  ident_Condition, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#4 as range 10
  // closed e.Result#4 as range 14
  // closed e.Pattern#4 as range 18
  //DEBUG: e.Name#4: 10
  //DEBUG: e.Result#4: 14
  //DEBUG: e.Pattern#4: 18

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1$1\1\1/4 {REMOVED TILE} (/16 e.Result#4/14 )/17 (/20 e.Pattern#4/18 )/21 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdConditionFunc/9 HalfReuse: # GN-Local/12 AsIs: e.Name#4/10 AsIs: )/13 } Tile{ ]] }
  refalrts::update_ident( context[9], ident_CmdConditionFunc );
  refalrts::reinit_ident( context[12], ident_GNm_Local );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_L1S1L1L1("HighLevelRASL\\1$1\\1\\1", 3260011162U, 259521105U, func_gen_HighLevelRASL_L1S1L1L1);


static refalrts::FnResult func_gen_HighLevelRASL_L1S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & HighLevelRASL\1$1\1/4 (/7 (/11 e.Pattern#3/9 )/12 e.Conditions#3/5 (/15 e.Result#3/13 )/16 )/8 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#3 as range 9
  // closed e.Conditions#3 as range 5
  // closed e.Result#3 as range 13
  //DEBUG: e.Pattern#3: 9
  //DEBUG: e.Conditions#3: 5
  //DEBUG: e.Result#3: 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/11 e.Pattern#3/9 )/12 {REMOVED TILE} (/15 e.Result#3/13 )/16 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & HighLevelRASL\1$1\1\1/7 } Tile{ AsIs: e.Conditions#3/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_Map.ref.function );
  refalrts::reinit_name( context[7], ref_gen_HighLevelRASL_L1S1L1L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_L1S1L1("HighLevelRASL\\1$1\\1", 3260011162U, 259521105U, func_gen_HighLevelRASL_L1S1L1);


static refalrts::FnResult func_gen_HighLevelRASL_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: s.$ s.$ ( s.$ e.$ )
  //GLOBAL GEN: s.$ s.$ ( s.$ e.$ )
  // </0 & HighLevelRASL\1/4 s.idx#0/9 s.idxV#0/10 (/7 s.idxVVB#0/11 e.idxVVBV#0/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVBV#0 as range 5
  do {
    // s.idx s.idx ( # Function s.idx ( e.idx ) # Sentences e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Function/11 s.ScopeClass#2/14 (/17 e.Name#2/15 )/18 # Sentences/19 e.Sentences#2/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_Function, context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left(  ident_Sentences, context[12], context[13] );
    if( ! context[19] )
      continue;
    // closed e.Name#2 as range 15
    // closed e.Sentences#2 as range 12
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: s.ScopeClass#2: 14
    //DEBUG: e.Name#2: 15
    //DEBUG: e.Sentences#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.OptResult#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </20 & Map/21 Tile{ HalfReuse: & HighLevelRASL\1$1\1/19 AsIs: e.Sentences#2/12 HalfReuse: >/8 HalfReuse: </1 } & HighLevelRASL-Function/22 Tile{ AsIs: </0 Reuse: & GenSentenceFunc/4 AsIs: s.Joint#1/9 } >/23 </24 & GenResultFuncs/25 Tile{ HalfReuse: s.OptResult1 #10/7 HalfReuse: >/11 AsIs: s.ScopeClass#2/14 AsIs: (/17 AsIs: e.Name#2/15 AsIs: )/18 } e.Sentences#2/12/26 >/28 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], ref_Map.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ref_HighLevelRASLm_Function.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], ref_GenResultFuncs.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[26], context[27], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[19], ref_gen_HighLevelRASL_L1S1L1.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_open_call( context[1] );
    refalrts::update_name( context[4], ref_GenSentenceFunc.ref.function );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_close_call( context[11] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[1] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[7], context[18] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[19], context[1] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( # Function s.idx ( e.idx ) # NativeBody t.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Function/11 s.ScopeClass#2/14 (/17 e.Name#2/15 )/18 # NativeBody/19 t.SrcPos#2/20 e.Code#2/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_Function, context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left(  ident_NativeBody, context[12], context[13] );
    if( ! context[19] )
      continue;
    // closed e.Name#2 as range 15
    context[21] = refalrts::tvar_left( context[20], context[12], context[13] );
    if( ! context[21] )
      continue;
    // closed e.Code#2 as range 12
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: s.ScopeClass#2: 14
    //DEBUG: e.Name#2: 15
    //DEBUG: t.SrcPos#2: 20
    //DEBUG: e.Code#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} # NativeBody/19 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdNativeFunction/11 AsIs: s.ScopeClass#2/14 AsIs: (/17 AsIs: e.Name#2/15 AsIs: )/18 } Tile{ AsIs: t.SrcPos#2/20 AsIs: e.Code#2/12 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[11], ident_CmdNativeFunction );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[8] );
    res = refalrts::splice_evar( res, context[7], context[18] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( # Enum s.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Enum/11 s.ScopeClass#2/14 e.Name#2/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_Enum, context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.Name#2 as range 12
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: s.ScopeClass#2: 14
    //DEBUG: e.Name#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdEnum/11 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/12 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[11], ident_CmdEnum );
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
    // s.idx s.idx ( # Swap s.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Swap/11 s.ScopeClass#2/14 e.Name#2/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_Swap, context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.Name#2 as range 12
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: s.ScopeClass#2: 14
    //DEBUG: e.Name#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdSwap/11 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/12 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[11], ident_CmdSwap );
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
    // s.idx s.idx ( # Declaration s.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Declaration/11 s.ScopeClass#2/14 e.Name#2/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_Declaration, context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.Name#2 as range 12
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: s.ScopeClass#2: 14
    //DEBUG: e.Name#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDeclaration/11 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/12 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[11], ident_CmdDeclaration );
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
    // s.idx s.idx ( # Ident e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Ident/11 e.Name#2/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_Ident, context[11] ) )
      continue;
    // closed e.Name#2 as range 12
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: e.Name#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDefineIdent/11 AsIs: e.Name#2/12 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[11], ident_CmdDefineIdent );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx ( # NativeBlock t.idx e.idx )
  // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # NativeBlock/11 t.SrcPos#2/14 e.Code#2/12 )/8 >/1
  context[12] = context[5];
  context[13] = context[6];
  if( ! refalrts::ident_term(  ident_NativeBlock, context[11] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#2 as range 12
  //DEBUG: s.Joint#1: 9
  //DEBUG: s.OptResult#1: 10
  //DEBUG: t.SrcPos#2: 14
  //DEBUG: e.Code#2: 12

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdEmitNativeCode/11 AsIs: t.SrcPos#2/14 AsIs: e.Code#2/12 AsIs: )/8 } Tile{ ]] }
  refalrts::update_ident( context[11], ident_CmdEmitNativeCode );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_L1("HighLevelRASL\\1", 3260011162U, 259521105U, func_gen_HighLevelRASL_L1);


static refalrts::FnResult func_HighLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & HighLevelRASL/4 s.Joint#1/5 s.OptResult#1/6 e.ProgramElements#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ProgramElements#1 as range 2
  //DEBUG: s.Joint#1: 5
  //DEBUG: s.OptResult#1: 6
  //DEBUG: e.ProgramElements#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map/8 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL\1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 } {*}/9 Tile{ AsIs: e.ProgramElements#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[9], context[0] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_HighLevelRASL_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[9] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASL("HighLevelRASL", 0U, 0U, func_HighLevelRASL);


static refalrts::FnResult func_HighLevelRASLm_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ s.$ s.$ s.$ ( e.$ ) e.$
  // </0 & HighLevelRASL-Function/4 s.idx#0/5 s.idxV#0/6 s.idxVV#0/7 s.idxVVV#0/8 (/11 e.idxVVVVB#0/9 )/12 e.idxVVVVT#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxVVVVB#0 as range 9
  // closed e.idxVVVVT#0 as range 2
  do {
    // s.idx s.idx s.idx s.idx ( e.idx )
    // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/13 )/12 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Name#1 as range 13
    //DEBUG: s.FnGenFunction#1: 5
    //DEBUG: s.FnGenSubst#1: 6
    //DEBUG: s.FnGenResult#1: 7
    //DEBUG: s.ScopeClass#1: 8
    //DEBUG: e.Name#1: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.FnGenFunction#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdEnum/4 } Tile{ HalfReuse: s.ScopeClass1 #8/11 AsIs: e.Name#1/13 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdEnum );
    refalrts::reinit_svar( context[11], context[8] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx s.idx s.idx ( e.idx ) t.idx
    // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/13 )/12 t.OneSentence#1/17 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.Name#1 as range 13
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: s.FnGenFunction#1: 5
    //DEBUG: s.FnGenSubst#1: 6
    //DEBUG: s.FnGenResult#1: 7
    //DEBUG: s.ScopeClass#1: 8
    //DEBUG: e.Name#1: 13
    //DEBUG: t.OneSentence#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.FnGenFunction#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function-Disjoint/4 } Tile{ AsIs: s.FnGenSubst#1/6 AsIs: s.FnGenResult#1/7 AsIs: s.ScopeClass#1/8 AsIs: (/11 AsIs: e.Name#1/13 AsIs: )/12 AsIs: t.OneSentence#1/17 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_HighLevelRASLm_Functionm_Disjoint.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx s.idx s.idx ( e.idx ) e.idx
  // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/13 )/12 e.Sentences#1/15 >/1
  context[13] = context[9];
  context[14] = context[10];
  context[15] = context[2];
  context[16] = context[3];
  // closed e.Name#1 as range 13
  // closed e.Sentences#1 as range 15
  //DEBUG: s.FnGenFunction#1: 5
  //DEBUG: s.FnGenSubst#1: 6
  //DEBUG: s.FnGenResult#1: 7
  //DEBUG: s.ScopeClass#1: 8
  //DEBUG: e.Name#1: 13
  //DEBUG: e.Sentences#1: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.FnGenFunction#1/5 AsIs: s.FnGenSubst#1/6 AsIs: s.FnGenResult#1/7 AsIs: s.ScopeClass#1/8 AsIs: (/11 AsIs: e.Name#1/13 AsIs: )/12 AsIs: e.Sentences#1/15 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASLm_Function("HighLevelRASL-Function", 3260011162U, 259521105U, func_HighLevelRASLm_Function);


static refalrts::FnResult func_GenSentenceFunc(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & GenSentenceFunc/4 s.idx#0/5 >/1
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
    // # Conjoint
    // </0 & GenSentenceFunc/4 # Conjoint/5 >/1
    if( ! refalrts::ident_term(  ident_Conjoint, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & GenSentenceFunc/4 # Conjoint/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & HighLevelRASL-Function-Conjoint/1 ]] }
    refalrts::reinit_name( context[1], ref_HighLevelRASLm_Functionm_Conjoint.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Disjoint
  // </0 & GenSentenceFunc/4 # Disjoint/5 >/1
  if( ! refalrts::ident_term(  ident_Disjoint, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & GenSentenceFunc/4 # Disjoint/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: & HighLevelRASL-Function-Disjoint/1 ]] }
  refalrts::reinit_name( context[1], ref_HighLevelRASLm_Functionm_Disjoint.ref.function );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenSentenceFunc("GenSentenceFunc", 3260011162U, 259521105U, func_GenSentenceFunc);


static refalrts::FnResult func_GenResultFuncs(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & GenResultFuncs/4 s.idx#0/5 >/1
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
    // # NoOpt
    // </0 & GenResultFuncs/4 # NoOpt/5 >/1
    if( ! refalrts::ident_term(  ident_NoOpt, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # NoOpt/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: & GenSubst-Simple/0 Reuse: & GenResult-Simple/4 } Tile{ ]] }
    refalrts::reinit_name( context[0], ref_GenSubstm_Simple.ref.function );
    refalrts::update_name( context[4], ref_GenResultm_Simple.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # OptResult
  // </0 & GenResultFuncs/4 # OptResult/5 >/1
  if( ! refalrts::ident_term(  ident_OptResult, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} # OptResult/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: & GenSubst-Save/0 Reuse: & GenResult-Opt/4 } Tile{ ]] }
  refalrts::reinit_name( context[0], ref_GenSubstm_Save.ref.function );
  refalrts::update_name( context[4], ref_GenResultm_Opt.ref.function );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultFuncs("GenResultFuncs", 3260011162U, 259521105U, func_GenResultFuncs);


//End of file
