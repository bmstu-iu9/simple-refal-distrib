// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_CmdDeclaration = refalrts::ident_from_static("CmdDeclaration");
const refalrts::RefalIdentifier ident_CmdDefineIdent = refalrts::ident_from_static("CmdDefineIdent");
const refalrts::RefalIdentifier ident_CmdEmitNativeCode = refalrts::ident_from_static("CmdEmitNativeCode");
const refalrts::RefalIdentifier ident_CmdEnum = refalrts::ident_from_static("CmdEnum");
const refalrts::RefalIdentifier ident_CmdNativeFunction = refalrts::ident_from_static("CmdNativeFunction");
const refalrts::RefalIdentifier ident_CmdSwap = refalrts::ident_from_static("CmdSwap");
const refalrts::RefalIdentifier ident_Conjoint = refalrts::ident_from_static("Conjoint");
const refalrts::RefalIdentifier ident_Declaration = refalrts::ident_from_static("Declaration");
const refalrts::RefalIdentifier ident_Disjoint = refalrts::ident_from_static("Disjoint");
const refalrts::RefalIdentifier ident_Enum = refalrts::ident_from_static("Enum");
const refalrts::RefalIdentifier ident_Function = refalrts::ident_from_static("Function");
const refalrts::RefalIdentifier ident_Ident = refalrts::ident_from_static("Ident");
const refalrts::RefalIdentifier ident_NativeBlock = refalrts::ident_from_static("NativeBlock");
const refalrts::RefalIdentifier ident_NativeBody = refalrts::ident_from_static("NativeBody");
const refalrts::RefalIdentifier ident_NoOpt = refalrts::ident_from_static("NoOpt");
const refalrts::RefalIdentifier ident_OptResult = refalrts::ident_from_static("OptResult");
const refalrts::RefalIdentifier ident_Sentences = refalrts::ident_from_static("Sentences");
const refalrts::RefalIdentifier ident_Swap = refalrts::ident_from_static("Swap");
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_HighLevelRASL_Function_Disjoint("HighLevelRASL-Function-Disjoint", 0U, 0U);
static refalrts::ExternalReference ref_HighLevelRASL_Function_Conjoint("HighLevelRASL-Function-Conjoint", 0U, 0U);
static refalrts::ExternalReference ref_GenInitSubst_Simple("GenInitSubst-Simple", 0U, 0U);
static refalrts::ExternalReference ref_GenSubst_Simple("GenSubst-Simple", 0U, 0U);
static refalrts::ExternalReference ref_GenResult_Simple("GenResult-Simple", 0U, 0U);
static refalrts::ExternalReference ref_GenInitSubst_Save("GenInitSubst-Save", 0U, 0U);
static refalrts::ExternalReference ref_GenSubst_Save("GenSubst-Save", 0U, 0U);
static refalrts::ExternalReference ref_GenResult_Opt("GenResult-Opt", 0U, 0U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_L1("HighLevelRASL\\1", 656936134U, 33269278U);
static refalrts::ExternalReference ref_HighLevelRASL("HighLevelRASL", 0U, 0U);
static refalrts::ExternalReference ref_HighLevelRASL_Function("HighLevelRASL-Function", 656936134U, 33269278U);
static refalrts::ExternalReference ref_GenSentenceFunc("GenSentenceFunc", 656936134U, 33269278U);
static refalrts::ExternalReference ref_GenResultFuncs("GenResultFuncs", 656936134U, 33269278U);

static refalrts::FnResult func_gen_HighLevelRASL_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
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
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Function/11 s.ScopeClass#2/12 (/15 e.Name#2/13 )/16 # Sentences/17 e.Sentences#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Function, context[11] ) )
      continue;
    context[21] = context[5];
    context[22] = context[6];
    if( ! refalrts::svar_left( context[12], context[21], context[22] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[21], context[22] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  ident_Sentences, context[21], context[22] );
    if( ! context[17] )
      continue;
    // closed e.Name#2 as range 13
    // closed e.Sentences#2 as range 21(5)
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: s.ScopeClass#2: 12
    //DEBUG: e.Name#2: 13
    //DEBUG: e.Sentences#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.OptResult#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </18 & HighLevelRASL-Function/19 Tile{ AsIs: </0 Reuse: & GenSentenceFunc/4 AsIs: s.Joint#1/9 } Tile{ HalfReuse: >/8 } Tile{ HalfReuse: </17 } & GenResultFuncs/20 Tile{ HalfReuse: s.OptResult1 #10/7 HalfReuse: >/11 AsIs: s.ScopeClass#2/12 AsIs: (/15 AsIs: e.Name#2/13 AsIs: )/16 } Tile{ AsIs: e.Sentences#2/21(5) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], ref_HighLevelRASL_Function.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], ref_GenResultFuncs.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_GenSentenceFunc.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_open_call( context[17] );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_close_call( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( # Function s.idx ( e.idx ) # NativeBody t.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Function/11 s.ScopeClass#2/12 (/15 e.Name#2/13 )/16 # NativeBody/17 t.SrcPos#2/18 e.Code#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Function, context[11] ) )
      continue;
    context[21] = context[5];
    context[22] = context[6];
    if( ! refalrts::svar_left( context[12], context[21], context[22] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[21], context[22] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  ident_NativeBody, context[21], context[22] );
    if( ! context[17] )
      continue;
    // closed e.Name#2 as range 13
    context[19] = refalrts::tvar_left( context[18], context[21], context[22] );
    if( ! context[19] )
      continue;
    // closed e.Code#2 as range 21(5)
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: s.ScopeClass#2: 12
    //DEBUG: e.Name#2: 13
    //DEBUG: t.SrcPos#2: 18
    //DEBUG: e.Code#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} # NativeBody/17 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdNativeFunction/11 AsIs: s.ScopeClass#2/12 AsIs: (/15 AsIs: e.Name#2/13 AsIs: )/16 } Tile{ AsIs: t.SrcPos#2/18 AsIs: e.Code#2/21(5) AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[11], ident_CmdNativeFunction );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[8] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( # Enum s.idx e.idx )
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Enum/11 s.ScopeClass#2/12 e.Name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Enum, context[11] ) )
      continue;
    context[21] = context[5];
    context[22] = context[6];
    if( ! refalrts::svar_left( context[12], context[21], context[22] ) )
      continue;
    // closed e.Name#2 as range 21(5)
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: s.ScopeClass#2: 12
    //DEBUG: e.Name#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdEnum/11 AsIs: s.ScopeClass#2/12 AsIs: e.Name#2/21(5) AsIs: )/8 } Tile{ ]] }
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
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Swap/11 s.ScopeClass#2/12 e.Name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Swap, context[11] ) )
      continue;
    context[21] = context[5];
    context[22] = context[6];
    if( ! refalrts::svar_left( context[12], context[21], context[22] ) )
      continue;
    // closed e.Name#2 as range 21(5)
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: s.ScopeClass#2: 12
    //DEBUG: e.Name#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdSwap/11 AsIs: s.ScopeClass#2/12 AsIs: e.Name#2/21(5) AsIs: )/8 } Tile{ ]] }
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
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Declaration/11 s.ScopeClass#2/12 e.Name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Declaration, context[11] ) )
      continue;
    context[21] = context[5];
    context[22] = context[6];
    if( ! refalrts::svar_left( context[12], context[21], context[22] ) )
      continue;
    // closed e.Name#2 as range 21(5)
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: s.ScopeClass#2: 12
    //DEBUG: e.Name#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDeclaration/11 AsIs: s.ScopeClass#2/12 AsIs: e.Name#2/21(5) AsIs: )/8 } Tile{ ]] }
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
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Ident/11 e.Name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Ident, context[11] ) )
      continue;
    // closed e.Name#2 as range 5
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: e.Name#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDefineIdent/11 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
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
  // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # NativeBlock/11 t.SrcPos#2/12 e.Code#2/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_NativeBlock, context[11] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#2 as range 5
  //DEBUG: s.Joint#1: 9
  //DEBUG: s.OptResult#1: 10
  //DEBUG: t.SrcPos#2: 12
  //DEBUG: e.Code#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdEmitNativeCode/11 AsIs: t.SrcPos#2/12 AsIs: e.Code#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::update_ident( context[11], ident_CmdEmitNativeCode );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_L1("HighLevelRASL\\1", 656936134U, 33269278U, func_gen_HighLevelRASL_L1);

static refalrts::FnResult func_HighLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
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
  //RESULT: Tile{ [[ } </7 & Map/8 </9 Tile{ HalfReuse: & @create_closure@/0 Reuse: & HighLevelRASL\1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 } >/10 Tile{ AsIs: e.ProgramElements#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure );
  refalrts::update_name( context[4], ref_gen_HighLevelRASL_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASL("HighLevelRASL", 0U, 0U, func_HighLevelRASL);

static refalrts::FnResult func_HighLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ s.$ s.$ s.$ s.$ ( e.$ ) e.$
  // </0 & HighLevelRASL-Function/4 s.idx#0/5 s.idxV#0/6 s.idxVV#0/7 s.idxVVV#0/8 s.idxVVVV#0/9 (/12 e.idxVVVVVB#0/10 )/13 e.idxVVVVVT#0/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.idxVVVVVB#0 as range 10
  // closed e.idxVVVVVT#0 as range 2
  do {
    // s.idx s.idx s.idx s.idx s.idx ( e.idx )
    // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenInitSubst#1/6 s.FnGenSubst#1/7 s.FnGenResult#1/8 s.ScopeClass#1/9 (/12 e.Name#1/10 )/13 >/1
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.Name#1 as range 10
    //DEBUG: s.FnGenFunction#1: 5
    //DEBUG: s.FnGenInitSubst#1: 6
    //DEBUG: s.FnGenSubst#1: 7
    //DEBUG: s.FnGenResult#1: 8
    //DEBUG: s.ScopeClass#1: 9
    //DEBUG: e.Name#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.FnGenFunction#1/5 s.FnGenInitSubst#1/6 s.FnGenSubst#1/7 s.FnGenResult#1/8 s.ScopeClass#1/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdEnum/4 } Tile{ HalfReuse: s.ScopeClass1 #9/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdEnum );
    refalrts::reinit_svar( context[12], context[9] );
    refalrts::link_brackets( context[0], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx s.idx s.idx s.idx ( e.idx ) t.idx
    // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenInitSubst#1/6 s.FnGenSubst#1/7 s.FnGenResult#1/8 s.ScopeClass#1/9 (/12 e.Name#1/10 )/13 t.OneSentence#1/14 >/1
    // closed e.Name#1 as range 10
    context[16] = context[2];
    context[17] = context[3];
    context[15] = refalrts::tvar_left( context[14], context[16], context[17] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    //DEBUG: s.FnGenFunction#1: 5
    //DEBUG: s.FnGenInitSubst#1: 6
    //DEBUG: s.FnGenSubst#1: 7
    //DEBUG: s.FnGenResult#1: 8
    //DEBUG: s.ScopeClass#1: 9
    //DEBUG: e.Name#1: 10
    //DEBUG: t.OneSentence#1: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.FnGenFunction#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function-Disjoint/4 } Tile{ AsIs: s.FnGenInitSubst#1/6 AsIs: s.FnGenSubst#1/7 AsIs: s.FnGenResult#1/8 AsIs: s.ScopeClass#1/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 AsIs: t.OneSentence#1/14 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_HighLevelRASL_Function_Disjoint.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx s.idx s.idx s.idx ( e.idx ) e.idx
  // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenInitSubst#1/6 s.FnGenSubst#1/7 s.FnGenResult#1/8 s.ScopeClass#1/9 (/12 e.Name#1/10 )/13 e.Sentences#1/2 >/1
  // closed e.Name#1 as range 10
  // closed e.Sentences#1 as range 2
  //DEBUG: s.FnGenFunction#1: 5
  //DEBUG: s.FnGenInitSubst#1: 6
  //DEBUG: s.FnGenSubst#1: 7
  //DEBUG: s.FnGenResult#1: 8
  //DEBUG: s.ScopeClass#1: 9
  //DEBUG: e.Name#1: 10
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.FnGenFunction#1/5 AsIs: s.FnGenInitSubst#1/6 AsIs: s.FnGenSubst#1/7 AsIs: s.FnGenResult#1/8 AsIs: s.ScopeClass#1/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASL_Function("HighLevelRASL-Function", 656936134U, 33269278U, func_HighLevelRASL_Function);

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
    refalrts::reinit_name( context[1], ref_HighLevelRASL_Function_Conjoint.ref.function );
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
  refalrts::reinit_name( context[1], ref_HighLevelRASL_Function_Disjoint.ref.function );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenSentenceFunc("GenSentenceFunc", 656936134U, 33269278U, func_GenSentenceFunc);

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
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: & GenInitSubst-Simple/4 HalfReuse: & GenSubst-Simple/5 HalfReuse: & GenResult-Simple/1 ]] }
    refalrts::update_name( context[4], ref_GenInitSubst_Simple.ref.function );
    refalrts::reinit_name( context[5], ref_GenSubst_Simple.ref.function );
    refalrts::reinit_name( context[1], ref_GenResult_Simple.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # OptResult
  // </0 & GenResultFuncs/4 # OptResult/5 >/1
  if( ! refalrts::ident_term(  ident_OptResult, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ Reuse: & GenInitSubst-Save/4 HalfReuse: & GenSubst-Save/5 HalfReuse: & GenResult-Opt/1 ]] }
  refalrts::update_name( context[4], ref_GenInitSubst_Save.ref.function );
  refalrts::reinit_name( context[5], ref_GenSubst_Save.ref.function );
  refalrts::reinit_name( context[1], ref_GenResult_Opt.ref.function );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultFuncs("GenResultFuncs", 656936134U, 33269278U, func_GenResultFuncs);


//End of file
