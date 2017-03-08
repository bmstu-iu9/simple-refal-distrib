// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_Conjoint = refalrts::ident_from_static("Conjoint");
const refalrts::RefalIdentifier ident_Disjoint = refalrts::ident_from_static("Disjoint");
const refalrts::RefalIdentifier ident_EL_HasErrors = refalrts::ident_from_static("EL-HasErrors");
const refalrts::RefalIdentifier ident_EL_NoErrors = refalrts::ident_from_static("EL-NoErrors");
const refalrts::RefalIdentifier ident_Fails = refalrts::ident_from_static("Fails");
const refalrts::RefalIdentifier ident_NoNative = refalrts::ident_from_static("NoNative");
const refalrts::RefalIdentifier ident_NoOpt = refalrts::ident_from_static("NoOpt");
const refalrts::RefalIdentifier ident_OptBoth = refalrts::ident_from_static("OptBoth");
const refalrts::RefalIdentifier ident_OptNone = refalrts::ident_from_static("OptNone");
const refalrts::RefalIdentifier ident_OptPattern = refalrts::ident_from_static("OptPattern");
const refalrts::RefalIdentifier ident_OptResult = refalrts::ident_from_static("OptResult");
const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Seq("Seq", 0U, 0U);
static refalrts::ExternalReference ref_SaveFile("SaveFile", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_SaveBytes("SaveBytes", 0U, 0U);
static refalrts::ExternalReference ref_LoadSource("LoadSource", 0U, 0U);
static refalrts::ExternalReference ref_LexFolding("LexFolding", 0U, 0U);
static refalrts::ExternalReference ref_ParseProgram("ParseProgram", 0U, 0U);
static refalrts::ExternalReference ref_EL_Create("EL-Create", 0U, 0U);
static refalrts::ExternalReference ref_EL_Destroy("EL-Destroy", 0U, 0U);
static refalrts::ExternalReference ref_CheckProgram("CheckProgram", 0U, 0U);
static refalrts::ExternalReference ref_Desugar("Desugar", 0U, 0U);
static refalrts::ExternalReference ref_HighLevelRASL("HighLevelRASL", 0U, 0U);
static refalrts::ExternalReference ref_LowLevelRASL("LowLevelRASL", 0U, 0U);
static refalrts::ExternalReference ref_GenProgram_RASL("GenProgram-RASL", 0U, 0U);
static refalrts::ExternalReference ref_StrFromInt("StrFromInt", 0U, 0U);
static refalrts::ExternalReference ref_GenProgram_Native("GenProgram-Native", 0U, 0U);
static refalrts::ExternalReference ref_gen_CompileFile_L1L1("CompileFile\\1\\1", 1858771604U, 1261083110U);
static refalrts::ExternalReference ref_gen_CompileFile_L1("CompileFile\\1", 1858771604U, 1261083110U);
static refalrts::ExternalReference ref_CompileFile("CompileFile", 0U, 0U);
static refalrts::ExternalReference ref_gen_FrontEnd_L1("FrontEnd\\1", 1858771604U, 1261083110U);
static refalrts::ExternalReference ref_FrontEnd("FrontEnd", 1858771604U, 1261083110U);
static refalrts::ExternalReference ref_gen_BackEnd_L1("BackEnd\\1", 1858771604U, 1261083110U);
static refalrts::ExternalReference ref_BackEnd("BackEnd", 1858771604U, 1261083110U);
static refalrts::ExternalReference ref_gen_BackEnd_RASLModule_L1("BackEnd-RASLModule\\1", 1858771604U, 1261083110U);
static refalrts::ExternalReference ref_BackEnd_RASLModule("BackEnd-RASLModule", 1858771604U, 1261083110U);
static refalrts::ExternalReference ref_BackEnd_NativeModule("BackEnd-NativeModule", 1858771604U, 1261083110U);
static refalrts::ExternalReference ref_SelectOptFlags("SelectOptFlags", 1858771604U, 1261083110U);
static refalrts::ExternalReference ref_gen_GrammarCheck_L1L1("GrammarCheck\\1\\1", 1858771604U, 1261083110U);
static refalrts::ExternalReference ref_gen_GrammarCheck_L1("GrammarCheck\\1", 1858771604U, 1261083110U);
static refalrts::ExternalReference ref_GrammarCheck("GrammarCheck", 0U, 0U);

static refalrts::FnResult func_gen_CompileFile_L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: ( e.$ ) s.$ s.$ s.$ s.$ ( e.$ ) ( e.$ ) s.$
  //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ s.$ ( e.$ ) ( e.$ ) s.$
  // </0 & CompileFile\1\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 s.idxTVVV#0/12 (/15 e.idxTVVVVB#0/13 )/16 (/19 e.idxTVVVVTB#0/17 )/20 s.idxTVVVVTT#0/21 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.idxTVVVVB#0 as range 13
  // closed e.idxTVVVVTB#0 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) s.idx s.idx s.idx s.idx ( e.idx ) ( e.idx ) # EL-NoErrors
    // </0 & CompileFile\1\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.DebugInfo#1/10 s.Opt#1/11 s.GenMode#1/12 (/15 e.SrcName#1/13 )/16 (/19 e.OutputName#1/17 )/20 # EL-NoErrors/21 >/1
    if( ! refalrts::ident_term(  ident_EL_NoErrors, context[21] ) )
      continue;
    // closed e.AST#2 as range 5
    // closed e.SrcName#1 as range 13
    // closed e.OutputName#1 as range 17
    //DEBUG: s.MarkupContext#1: 9
    //DEBUG: s.DebugInfo#1: 10
    //DEBUG: s.Opt#1: 11
    //DEBUG: s.GenMode#1: 12
    //DEBUG: e.AST#2: 5
    //DEBUG: e.SrcName#1: 13
    //DEBUG: e.OutputName#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/20 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.AST#2/5 } Tile{ HalfReuse: </19 } Tile{ HalfReuse: & BackEnd/8 AsIs: s.MarkupContext#1/9 AsIs: s.DebugInfo#1/10 AsIs: s.Opt#1/11 AsIs: s.GenMode#1/12 AsIs: (/15 AsIs: e.SrcName#1/13 AsIs: )/16 } Tile{ AsIs: e.OutputName#1/17 } Tile{ HalfReuse: >/21 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Fetch.ref.function );
    refalrts::reinit_open_call( context[19] );
    refalrts::reinit_name( context[8], ref_BackEnd.ref.function );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[8], context[16] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx s.idx s.idx s.idx ( e.idx ) ( e.idx ) # EL-HasErrors
  // </0 & CompileFile\1\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.DebugInfo#1/10 s.Opt#1/11 s.GenMode#1/12 (/15 e.SrcName#1/13 )/16 (/19 e.OutputName#1/17 )/20 # EL-HasErrors/21 >/1
  if( ! refalrts::ident_term(  ident_EL_HasErrors, context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 5
  // closed e.SrcName#1 as range 13
  // closed e.OutputName#1 as range 17
  //DEBUG: s.MarkupContext#1: 9
  //DEBUG: s.DebugInfo#1: 10
  //DEBUG: s.Opt#1: 11
  //DEBUG: s.GenMode#1: 12
  //DEBUG: e.AST#2: 5
  //DEBUG: e.SrcName#1: 13
  //DEBUG: e.OutputName#1: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CompileFile\1\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.DebugInfo#1/10 s.Opt#1/11 s.GenMode#1/12 (/15 e.SrcName#1/13 )/16 (/19 e.OutputName#1/17 )/20 # EL-HasErrors/21 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident( context[1], ident_Fails );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CompileFile_L1L1("CompileFile\\1\\1", 1858771604U, 1261083110U, func_gen_CompileFile_L1L1);

static refalrts::FnResult func_gen_CompileFile_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & CompileFile\1/4 s.MarkupContext#1/5 s.DebugInfo#1/6 s.Opt#1/7 s.GenMode#1/8 (/11 e.SrcName#1/9 )/12 (/15 e.OutputName#1/13 )/16 t.ErrorList#2/17 e.AST#2/2 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.SrcName#1 as range 9
  // closed e.OutputName#1 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: s.DebugInfo#1: 6
  //DEBUG: s.Opt#1: 7
  //DEBUG: s.GenMode#1: 8
  //DEBUG: e.SrcName#1: 9
  //DEBUG: e.OutputName#1: 13
  //DEBUG: t.ErrorList#2: 17
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & Fetch/19 </20 & EL-Destroy/21 Tile{ AsIs: t.ErrorList#2/17 } >/22 </23 & @create_closure@/24 & CompileFile\1\1/25 (/26 Tile{ AsIs: e.AST#2/2 } Tile{ HalfReuse: )/4 AsIs: s.MarkupContext#1/5 AsIs: s.DebugInfo#1/6 AsIs: s.Opt#1/7 AsIs: s.GenMode#1/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.OutputName#1/13 AsIs: )/16 } >/27 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[19], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ref_EL_Destroy.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], ref_gen_CompileFile_L1L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[26], context[4] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[4], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CompileFile_L1("CompileFile\\1", 1858771604U, 1261083110U, func_gen_CompileFile_L1);

static refalrts::FnResult func_CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & CompileFile/4 s.GenMode#1/10 s.Opt#1/11 (/14 s.MarkupContext#1/20 s.DebugInfo#1/21 )/15 (/18 e.SrcName#1/16 )/19 e.OutputName#1/2 '.'/9 'r'/8 'a'/7 's'/6 'l'/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::char_right( 'l', context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[6] = refalrts::char_right( 's', context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::char_right( 'a', context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::char_right( 'r', context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::char_right( '.', context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  // closed e.SrcName#1 as range 16
  // closed e.OutputName#1 as range 2
  if( ! refalrts::svar_left( context[20], context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[21], context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.GenMode#1: 10
  //DEBUG: s.Opt#1: 11
  //DEBUG: e.SrcName#1: 16
  //DEBUG: e.OutputName#1: 2
  //DEBUG: s.MarkupContext#1: 20
  //DEBUG: s.DebugInfo#1: 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.GenMode#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } e.SrcName#1/16/22 </24 & Seq/25 </26 & FrontEnd/27 e.SrcName#1/16/28 >/30 Tile{ HalfReuse: </9 HalfReuse: & @create_closure@/8 } Tile{ HalfReuse: & CompileFile\1/14 AsIs: s.MarkupContext#1/20 AsIs: s.DebugInfo#1/21 } Tile{ AsIs: s.Opt#1/11 } Tile{ HalfReuse: s.GenMode1 #10/15 AsIs: (/18 AsIs: e.SrcName#1/16 AsIs: )/19 } (/31 Tile{ AsIs: e.OutputName#1/2 } Tile{ HalfReuse: )/7 HalfReuse: >/6 HalfReuse: >/5 AsIs: >/1 ]] }
  if (! refalrts::copy_evar(context[22], context[23], context[16], context[17]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], ref_FrontEnd.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[28], context[29], context[16], context[17]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[31] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::reinit_open_call( context[9] );
  refalrts::reinit_name( context[8], refalrts::create_closure );
  refalrts::reinit_name( context[14], ref_gen_CompileFile_L1.ref.function );
  refalrts::reinit_svar( context[15], context[10] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_close_call( context[6] );
  refalrts::reinit_close_call( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[31], context[7] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[26] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[14], context[21] );
  res = refalrts::splice_evar( res, context[9], context[8] );
  res = refalrts::splice_evar( res, context[24], context[30] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CompileFile("CompileFile", 0U, 0U, func_CompileFile);

static refalrts::FnResult func_gen_FrontEnd_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & FrontEnd\1/4 t.ErrorList#2/5 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2
  //DEBUG: t.ErrorList#2: 5
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckProgram/4 AsIs: t.ErrorList#2/5 AsIs: e.AST#2/2 AsIs: >/1 } e.AST#2/2/7 Tile{ ]] }
  if (! refalrts::copy_evar(context[7], context[8], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_CheckProgram.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FrontEnd_L1("FrontEnd\\1", 1858771604U, 1261083110U, func_gen_FrontEnd_L1);

static refalrts::FnResult func_FrontEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & FrontEnd/4 e.SrcName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.SrcName#1 as range 2
  //DEBUG: e.SrcName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Seq/6 & LoadSource/7 & LexFolding/8 (/9 & ParseProgram/10 Tile{ AsIs: </0 Reuse: & EL-Create/4 AsIs: e.SrcName#1/2 AsIs: >/1 } )/11 & FrontEnd\1/12 >/13 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_LoadSource.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_LexFolding.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_ParseProgram.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_gen_FrontEnd_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_EL_Create.ref.function );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FrontEnd("FrontEnd", 1858771604U, 1261083110U, func_FrontEnd);

static refalrts::FnResult func_gen_BackEnd_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & BackEnd\1/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 e.idxTTV#0/2 >/1
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
    // ( e.idx ) ( e.idx ) t.idx
    // </0 & BackEnd\1/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 t.RASLModule#2/13 >/1
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    // closed e.OutputName#1 as range 5
    // closed e.SrcName#1 as range 9
    //DEBUG: t.RASLModule#2: 13
    //DEBUG: e.OutputName#1: 5
    //DEBUG: e.SrcName#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.SrcName#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd-RASLModule/4 } Tile{ AsIs: t.RASLModule#2/13 } Tile{ AsIs: e.OutputName#1/5 } Tile{ HalfReuse: '.'/12 } Tile{ HalfReuse: 'r'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 's'/7 } 'l'/15 >/16 Tile{ HalfReuse: # NoNative/1 ]] }
    if( ! refalrts::alloc_char( context[15], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_BackEnd_RASLModule.ref.function );
    refalrts::reinit_char( context[12], '.' );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_char( context[11], 'a' );
    refalrts::reinit_char( context[7], 's' );
    refalrts::reinit_ident( context[1], ident_NoNative );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) t.idx t.idx
  // </0 & BackEnd\1/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 t.RASLModule#2/13 t.NativeModule#2/15 >/1
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.RASLModule#2: 13
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: t.NativeModule#2: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd-RASLModule/4 } Tile{ AsIs: t.RASLModule#2/13 } Tile{ AsIs: e.OutputName#1/5 } Tile{ HalfReuse: '.'/7 } 'r'/17 Tile{ HalfReuse: 'a'/8 }"sl"/18 >/20 </21 & BackEnd-NativeModule/22 Tile{ AsIs: t.NativeModule#2/15 } Tile{ AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 } e.OutputName#1/5/23".cpp"/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[17], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], "sl", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], ref_BackEnd_NativeModule.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[23], context[24], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[25], context[26], ".cpp", 4 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_BackEnd_RASLModule.ref.function );
  refalrts::reinit_char( context[7], '.' );
  refalrts::reinit_char( context[8], 'a' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[21] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_L1("BackEnd\\1", 1858771604U, 1261083110U, func_gen_BackEnd_L1);

static refalrts::FnResult func_BackEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & BackEnd/4 s.MarkupContext#1/5 s.DebugInfo#1/6 s.Opt#1/7 s.GenMode#1/8 (/11 e.SrcName#1/9 )/12 e.OutputName#1/2 >/1
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
  // closed e.SrcName#1 as range 9
  // closed e.OutputName#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: s.DebugInfo#1: 6
  //DEBUG: s.Opt#1: 7
  //DEBUG: s.GenMode#1: 8
  //DEBUG: e.SrcName#1: 9
  //DEBUG: e.OutputName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Seq/4 } (/13 & Desugar/14 Tile{ AsIs: s.MarkupContext#1/5 } )/15 (/16 & HighLevelRASL/17 </18 & SelectOptFlags/19 Tile{ AsIs: s.Opt#1/7 } >/20 )/21 (/22 & LowLevelRASL/23 Tile{ AsIs: s.GenMode#1/8 } Tile{ AsIs: s.DebugInfo#1/6 } Tile{ AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 } )/24 </25 & @create_closure@/26 & BackEnd\1/27 (/28 Tile{ AsIs: e.OutputName#1/2 } )/29 (/30 e.SrcName#1/9/31 )/33 >/34 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_Desugar.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_HighLevelRASL.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ref_SelectOptFlags.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], ref_LowLevelRASL.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], ref_gen_BackEnd_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[31], context[32], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[34] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Seq.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[25] );
  refalrts::link_brackets( context[30], context[33] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[22], context[24] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[16], context[21] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[13], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[34] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[24], context[28] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BackEnd("BackEnd", 1858771604U, 1261083110U, func_BackEnd);

static refalrts::FnResult func_gen_BackEnd_RASLModule_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & BackEnd-RASLModule\1/4 (/7 e.OutputName#1/5 )/8 e.ByteStream#2/2 >/1
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
  // closed e.OutputName#1 as range 5
  // closed e.ByteStream#2 as range 2
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.ByteStream#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveBytes/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: e.ByteStream#2/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_SaveBytes.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_RASLModule_L1("BackEnd-RASLModule\\1", 1858771604U, 1261083110U, func_gen_BackEnd_RASLModule_L1);

static refalrts::FnResult func_BackEnd_RASLModule(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & BackEnd-RASLModule/4 t.RASLModule#1/5 e.OutputName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.OutputName#1 as range 2
  //DEBUG: t.RASLModule#1: 5
  //DEBUG: e.OutputName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & GenProgram-RASL/8 Tile{ AsIs: t.RASLModule#1/5 } Tile{ AsIs: >/1 } </9 & @create_closure@/10 & BackEnd-RASLModule\1/11 (/12 Tile{ AsIs: e.OutputName#1/2 } )/13 >/14 >/15 # Success/16 e.OutputName#1/2/17 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_GenProgram_RASL.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_gen_BackEnd_RASLModule_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[16], ident_Success ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[17], context[18], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BackEnd_RASLModule("BackEnd-RASLModule", 1858771604U, 1261083110U, func_BackEnd_RASLModule);

static refalrts::FnResult func_BackEnd_NativeModule(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & BackEnd-NativeModule/4 t.NativeModule#1/5 (/9 e.SrcName#1/7 )/10 e.OutputName#1/2 >/1
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
  // closed e.SrcName#1 as range 7
  // closed e.OutputName#1 as range 2
  //DEBUG: t.NativeModule#1: 5
  //DEBUG: e.SrcName#1: 7
  //DEBUG: e.OutputName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveFile/4 } (/11 e.OutputName#1/2/12 )/14 </15 & GenProgram-Native/16 Tile{ AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 } (/17 Tile{ AsIs: e.OutputName#1/2 } )/18 Tile{ AsIs: t.NativeModule#1/5 } >/19 >/20 (/21 e.OutputName#1/2/22 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[12], context[13], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_GenProgram_Native.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[22], context[23], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_SaveFile.ref.function );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[21], context[1] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BackEnd_NativeModule("BackEnd-NativeModule", 1858771604U, 1261083110U, func_BackEnd_NativeModule);

static refalrts::FnResult func_SelectOptFlags(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & SelectOptFlags/4 s.idx#0/5 >/1
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
    // # OptNone
    // </0 & SelectOptFlags/4 # OptNone/5 >/1
    if( ! refalrts::ident_term(  ident_OptNone, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SelectOptFlags/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: # Disjoint/5 HalfReuse: # NoOpt/1 ]] }
    refalrts::update_ident( context[5], ident_Disjoint );
    refalrts::reinit_ident( context[1], ident_NoOpt );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # OptPattern
    // </0 & SelectOptFlags/4 # OptPattern/5 >/1
    if( ! refalrts::ident_term(  ident_OptPattern, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SelectOptFlags/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: # Conjoint/5 HalfReuse: # NoOpt/1 ]] }
    refalrts::update_ident( context[5], ident_Conjoint );
    refalrts::reinit_ident( context[1], ident_NoOpt );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # OptResult
    // </0 & SelectOptFlags/4 # OptResult/5 >/1
    if( ! refalrts::ident_term(  ident_OptResult, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SelectOptFlags/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: # Disjoint/5 HalfReuse: # OptResult/1 ]] }
    refalrts::update_ident( context[5], ident_Disjoint );
    refalrts::reinit_ident( context[1], ident_OptResult );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # OptBoth
  // </0 & SelectOptFlags/4 # OptBoth/5 >/1
  if( ! refalrts::ident_term(  ident_OptBoth, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SelectOptFlags/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ Reuse: # Conjoint/5 HalfReuse: # OptResult/1 ]] }
  refalrts::update_ident( context[5], ident_Conjoint );
  refalrts::reinit_ident( context[1], ident_OptResult );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[5];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SelectOptFlags("SelectOptFlags", 1858771604U, 1261083110U, func_SelectOptFlags);

static refalrts::FnResult func_gen_GrammarCheck_L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & GrammarCheck\1\1/4 s.idx#0/5 >/1
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
    // # EL-NoErrors
    // </0 & GrammarCheck\1\1/4 # EL-NoErrors/5 >/1
    if( ! refalrts::ident_term(  ident_EL_NoErrors, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & GrammarCheck\1\1/4 # EL-NoErrors/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/1 ]] }
    refalrts::reinit_ident( context[1], ident_Success );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # EL-HasErrors
  // </0 & GrammarCheck\1\1/4 # EL-HasErrors/5 >/1
  if( ! refalrts::ident_term(  ident_EL_HasErrors, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & GrammarCheck\1\1/4 # EL-HasErrors/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident( context[1], ident_Fails );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GrammarCheck_L1L1("GrammarCheck\\1\\1", 1858771604U, 1261083110U, func_gen_GrammarCheck_L1L1);

static refalrts::FnResult func_gen_GrammarCheck_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & GrammarCheck\1/4 t.ErrorList#2/5 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2
  //DEBUG: t.ErrorList#2: 5
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.AST#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & EL-Destroy/8 Tile{ AsIs: t.ErrorList#2/5 } >/9 & GrammarCheck\1\1/10 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_EL_Destroy.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_gen_GrammarCheck_L1L1.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GrammarCheck_L1("GrammarCheck\\1", 1858771604U, 1261083110U, func_gen_GrammarCheck_L1);

static refalrts::FnResult func_GrammarCheck(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & GrammarCheck/4 e.SrcName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.SrcName#1 as range 2
  //DEBUG: e.SrcName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.SrcName#1/2 HalfReuse: </1 } & Seq/5 & LoadSource/6 & LexFolding/7 (/8 & ParseProgram/9 </10 & EL-Create/11 e.SrcName#1/2/12 >/14 )/15 & GrammarCheck\1/16 >/17 >/18 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_LoadSource.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_LexFolding.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_ParseProgram.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_EL_Create.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[12], context[13], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_gen_GrammarCheck_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[8], context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GrammarCheck("GrammarCheck", 0U, 0U, func_GrammarCheck);


//End of file
