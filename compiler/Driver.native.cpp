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
#define str_Fetch refalrts::RefalFuncName("Fetch", 0U, 0U)
static refalrts::ExternalReference ref_Seq("Seq", 0U, 0U);
#define str_Seq refalrts::RefalFuncName("Seq", 0U, 0U)
static refalrts::ExternalReference ref_SaveFile("SaveFile", 0U, 0U);
#define str_SaveFile refalrts::RefalFuncName("SaveFile", 0U, 0U)
static refalrts::ExternalReference ref_LoadSource("LoadSource", 0U, 0U);
#define str_LoadSource refalrts::RefalFuncName("LoadSource", 0U, 0U)
static refalrts::ExternalReference ref_LexFolding("LexFolding", 0U, 0U);
#define str_LexFolding refalrts::RefalFuncName("LexFolding", 0U, 0U)
static refalrts::ExternalReference ref_ParseProgram("ParseProgram", 0U, 0U);
#define str_ParseProgram refalrts::RefalFuncName("ParseProgram", 0U, 0U)
static refalrts::ExternalReference ref_EL_Create("EL-Create", 0U, 0U);
#define str_EL_Create refalrts::RefalFuncName("EL-Create", 0U, 0U)
static refalrts::ExternalReference ref_EL_Destroy("EL-Destroy", 0U, 0U);
#define str_EL_Destroy refalrts::RefalFuncName("EL-Destroy", 0U, 0U)
static refalrts::ExternalReference ref_CheckProgram("CheckProgram", 0U, 0U);
#define str_CheckProgram refalrts::RefalFuncName("CheckProgram", 0U, 0U)
static refalrts::ExternalReference ref_Desugar("Desugar", 0U, 0U);
#define str_Desugar refalrts::RefalFuncName("Desugar", 0U, 0U)
static refalrts::ExternalReference ref_HighLevelRASL("HighLevelRASL", 0U, 0U);
#define str_HighLevelRASL refalrts::RefalFuncName("HighLevelRASL", 0U, 0U)
static refalrts::ExternalReference ref_LowLevelRASL("LowLevelRASL", 0U, 0U);
#define str_LowLevelRASL refalrts::RefalFuncName("LowLevelRASL", 0U, 0U)
static refalrts::ExternalReference ref_GenProgram_RASL("GenProgram-RASL", 0U, 0U);
#define str_GenProgram_RASL refalrts::RefalFuncName("GenProgram-RASL", 0U, 0U)
static refalrts::ExternalReference ref_GenProgram_Native("GenProgram-Native", 0U, 0U);
#define str_GenProgram_Native refalrts::RefalFuncName("GenProgram-Native", 0U, 0U)
static refalrts::ExternalReference ref_gen_CompileFile_L1L1("CompileFile\\1\\1", 3476121254U, 2149362136U);
static refalrts::ExternalReference ref_gen_CompileFile_L1("CompileFile\\1", 3476121254U, 2149362136U);
static refalrts::ExternalReference ref_CompileFile("CompileFile", 0U, 0U);
static refalrts::ExternalReference ref_gen_FrontEnd_L1("FrontEnd\\1", 3476121254U, 2149362136U);
static refalrts::ExternalReference ref_FrontEnd("FrontEnd", 3476121254U, 2149362136U);
static refalrts::ExternalReference ref_gen_BackEnd_L1("BackEnd\\1", 3476121254U, 2149362136U);
static refalrts::ExternalReference ref_BackEnd("BackEnd", 3476121254U, 2149362136U);
static refalrts::ExternalReference ref_BackEnd_RASLModule("BackEnd-RASLModule", 3476121254U, 2149362136U);
static refalrts::ExternalReference ref_BackEnd_NativeModule("BackEnd-NativeModule", 3476121254U, 2149362136U);
static refalrts::ExternalReference ref_SelectOptFlags("SelectOptFlags", 3476121254U, 2149362136U);

static refalrts::FnResult func_gen_CompileFile_L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  //FAST GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) ( e.$ ) s.$
  //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) ( e.$ ) s.$
  // </0 & CompileFile\1\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 (/14 e.idxTVVVB#0/12 )/15 (/18 e.idxTVVVTB#0/16 )/19 s.idxTVVVTT#0/20 >/1
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
  // closed e.idxTVVVB#0 as range 12
  // closed e.idxTVVVTB#0 as range 16
  if( ! refalrts::svar_left( context[20], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) s.idx s.idx s.idx ( e.idx ) ( e.idx ) # EL-NoErrors
    // </0 & CompileFile\1\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 (/14 e.SrcName#1/12 )/15 (/18 e.OutputName#1/16 )/19 # EL-NoErrors/20 >/1
    if( ! refalrts::ident_term(  ident_EL_NoErrors, context[20] ) )
      continue;
    // closed e.AST#2 as range 5
    // closed e.SrcName#1 as range 12
    // closed e.OutputName#1 as range 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.AST#2/5 } Tile{ HalfReuse: </18 } Tile{ HalfReuse: & BackEnd/8 AsIs: s.MarkupContext#1/9 AsIs: s.Opt#1/10 AsIs: s.GenMode#1/11 AsIs: (/14 AsIs: e.SrcName#1/12 AsIs: )/15 } Tile{ AsIs: e.OutputName#1/16 } Tile{ HalfReuse: >/20 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Fetch.ref.function );
    refalrts::reinit_open_call( context[18] );
    refalrts::reinit_name( context[8], ref_BackEnd.ref.function );
    refalrts::reinit_close_call( context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx s.idx s.idx ( e.idx ) ( e.idx ) # EL-HasErrors
  // </0 & CompileFile\1\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 (/14 e.SrcName#1/12 )/15 (/18 e.OutputName#1/16 )/19 # EL-HasErrors/20 >/1
  if( ! refalrts::ident_term(  ident_EL_HasErrors, context[20] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 5
  // closed e.SrcName#1 as range 12
  // closed e.OutputName#1 as range 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CompileFile\1\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 (/14 e.SrcName#1/12 )/15 (/18 e.OutputName#1/16 )/19 # EL-HasErrors/20 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident( context[1], ident_Fails );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_CompileFile_L1L1(func_gen_CompileFile_L1L1, refalrts::RefalFuncName("CompileFile\\1\\1", 3476121254U, 2149362136U));

static refalrts::FnResult func_gen_CompileFile_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & CompileFile\1/4 s.MarkupContext#1/5 s.Opt#1/6 s.GenMode#1/7 (/10 e.SrcName#1/8 )/11 (/14 e.OutputName#1/12 )/15 t.ErrorList#2/16 e.AST#2/2 >/1
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
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.SrcName#1 as range 8
  // closed e.OutputName#1 as range 12
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & Fetch/18 </19 & EL-Destroy/20 Tile{ AsIs: t.ErrorList#2/16 } >/21 </22 & @create_closure@/23 & CompileFile\1\1/24 (/25 Tile{ AsIs: e.AST#2/2 } Tile{ HalfReuse: )/4 AsIs: s.MarkupContext#1/5 AsIs: s.Opt#1/6 AsIs: s.GenMode#1/7 AsIs: (/10 AsIs: e.SrcName#1/8 AsIs: )/11 AsIs: (/14 AsIs: e.OutputName#1/12 AsIs: )/15 } >/26 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[18], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], ref_EL_Destroy.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], ref_gen_CompileFile_L1L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[22] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[25], context[4] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[4], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_CompileFile_L1(func_gen_CompileFile_L1, refalrts::RefalFuncName("CompileFile\\1", 3476121254U, 2149362136U));

static refalrts::FnResult func_CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & CompileFile/4 s.GenMode#1/9 s.Opt#1/10 s.MarkupContext#1/11 (/14 e.SrcName#1/12 )/15 e.OutputName#1/2 '.'/8 'c'/7 'p'/6 'p'/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::char_right( 'p', context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[6] = refalrts::char_right( 'p', context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::char_right( 'c', context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::char_right( '.', context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
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
  // closed e.SrcName#1 as range 12
  // closed e.OutputName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } e.SrcName#1/12/16 </18 & Seq/19 </20 & FrontEnd/21 e.SrcName#1/12/22 >/24 Tile{ HalfReuse: </8 } & @create_closure@/25 & CompileFile\1/26 Tile{ AsIs: s.MarkupContext#1/11 } Tile{ AsIs: s.Opt#1/10 } Tile{ AsIs: s.GenMode#1/9 } Tile{ AsIs: (/14 AsIs: e.SrcName#1/12 AsIs: )/15 } (/27 Tile{ AsIs: e.OutputName#1/2 } Tile{ HalfReuse: )/7 HalfReuse: >/6 HalfReuse: >/5 AsIs: >/1 ]] }
  if (! refalrts::copy_evar(context[16], context[17], context[12], context[13]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ref_FrontEnd.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[22], context[23], context[12], context[13]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], ref_gen_CompileFile_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_close_call( context[6] );
  refalrts::reinit_close_call( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[8] );
  refalrts::link_brackets( context[27], context[7] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[18], context[24] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_CompileFile(func_CompileFile, refalrts::RefalFuncName("CompileFile", 0U, 0U));

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

static refalrts::RefalNativeFunction descr_gen_FrontEnd_L1(func_gen_FrontEnd_L1, refalrts::RefalFuncName("FrontEnd\\1", 3476121254U, 2149362136U));

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

static refalrts::RefalNativeFunction descr_FrontEnd(func_FrontEnd, refalrts::RefalFuncName("FrontEnd", 3476121254U, 2149362136U));

static refalrts::FnResult func_gen_BackEnd_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
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
    context[26] = context[2];
    context[27] = context[3];
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    // closed e.OutputName#1 as range 5
    // closed e.SrcName#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.SrcName#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd-RASLModule/4 } Tile{ AsIs: t.RASLModule#2/13 } Tile{ AsIs: e.OutputName#1/5 } Tile{ HalfReuse: '.'/8 HalfReuse: 'c'/11 } Tile{ HalfReuse: 'p'/12 } Tile{ HalfReuse: 'p'/7 } >/15 Tile{ HalfReuse: # NoNative/1 ]] }
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_BackEnd_RASLModule.ref.function );
    refalrts::reinit_char( context[8], '.' );
    refalrts::reinit_char( context[11], 'c' );
    refalrts::reinit_char( context[12], 'p' );
    refalrts::reinit_char( context[7], 'p' );
    refalrts::reinit_ident( context[1], ident_NoNative );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[8], context[11] );
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd-RASLModule/4 } Tile{ AsIs: t.RASLModule#2/13 } Tile{ AsIs: e.OutputName#1/5 } Tile{ HalfReuse: '.'/7 } 'c'/17 Tile{ HalfReuse: 'p'/8 } 'p'/18 >/19 </20 & BackEnd-NativeModule/21 Tile{ AsIs: t.NativeModule#2/15 } Tile{ AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 } e.OutputName#1/5/22".native.cpp"/24 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[17], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ref_BackEnd_NativeModule.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[22], context[23], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[24], context[25], ".native.cpp", 11 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_BackEnd_RASLModule.ref.function );
  refalrts::reinit_char( context[7], '.' );
  refalrts::reinit_char( context[8], 'p' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_BackEnd_L1(func_gen_BackEnd_L1, refalrts::RefalFuncName("BackEnd\\1", 3476121254U, 2149362136U));

static refalrts::FnResult func_BackEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & BackEnd/4 s.MarkupContext#1/5 s.Opt#1/6 s.GenMode#1/7 (/10 e.SrcName#1/8 )/11 e.OutputName#1/2 >/1
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
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.SrcName#1 as range 8
  // closed e.OutputName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Seq/4 } (/12 & Desugar/13 Tile{ AsIs: s.MarkupContext#1/5 } )/14 (/15 & HighLevelRASL/16 </17 & SelectOptFlags/18 Tile{ AsIs: s.Opt#1/6 } >/19 )/20 (/21 & LowLevelRASL/22 Tile{ AsIs: s.GenMode#1/7 AsIs: (/10 AsIs: e.SrcName#1/8 AsIs: )/11 } )/23 </24 & @create_closure@/25 & BackEnd\1/26 (/27 Tile{ AsIs: e.OutputName#1/2 } )/28 (/29 e.SrcName#1/8/30 )/32 >/33 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ref_Desugar.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_HighLevelRASL.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ref_SelectOptFlags.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], ref_LowLevelRASL.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], ref_gen_BackEnd_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[30], context[31], context[8], context[9]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[33] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Seq.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[33] );
  refalrts::push_stack( context[24] );
  refalrts::link_brackets( context[29], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[21], context[23] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[15], context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[12], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[33] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[23], context[27] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[19], context[22] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_BackEnd(func_BackEnd, refalrts::RefalFuncName("BackEnd", 3476121254U, 2149362136U));

static refalrts::FnResult func_BackEnd_RASLModule(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveFile/4 } (/7 Tile{ AsIs: e.OutputName#1/2 } )/8 </9 & GenProgram-RASL/10 Tile{ AsIs: t.RASLModule#1/5 } Tile{ AsIs: >/1 } >/11 # Success/12 e.OutputName#1/2/13 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_GenProgram_RASL.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], ident_Success ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[13], context[14], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_SaveFile.ref.function );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_BackEnd_RASLModule(func_BackEnd_RASLModule, refalrts::RefalFuncName("BackEnd-RASLModule", 3476121254U, 2149362136U));

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

static refalrts::RefalNativeFunction descr_BackEnd_NativeModule(func_BackEnd_NativeModule, refalrts::RefalFuncName("BackEnd-NativeModule", 3476121254U, 2149362136U));

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

static refalrts::RefalNativeFunction descr_SelectOptFlags(func_SelectOptFlags, refalrts::RefalFuncName("SelectOptFlags", 3476121254U, 2149362136U));


//End of file
