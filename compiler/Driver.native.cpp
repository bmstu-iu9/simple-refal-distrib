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
extern refalrts::RefalFunction& Fetch_0_0;
#define Fetch_alias Fetch_0_0
#define Fetch_str "Fetch#0:0"

extern refalrts::RefalFunction& Seq_0_0;
#define Seq_alias Seq_0_0
#define Seq_str "Seq#0:0"

extern refalrts::RefalFunction& SaveFile_0_0;
#define SaveFile_alias SaveFile_0_0
#define SaveFile_str "SaveFile#0:0"

extern refalrts::RefalFunction& LoadSource_0_0;
#define LoadSource_alias LoadSource_0_0
#define LoadSource_str "LoadSource#0:0"

extern refalrts::RefalFunction& LexFolding_0_0;
#define LexFolding_alias LexFolding_0_0
#define LexFolding_str "LexFolding#0:0"

extern refalrts::RefalFunction& ParseProgram_0_0;
#define ParseProgram_alias ParseProgram_0_0
#define ParseProgram_str "ParseProgram#0:0"

extern refalrts::RefalFunction& EL_Create_0_0;
#define EL_Create_alias EL_Create_0_0
#define EL_Create_str "EL-Create#0:0"

extern refalrts::RefalFunction& EL_Destroy_0_0;
#define EL_Destroy_alias EL_Destroy_0_0
#define EL_Destroy_str "EL-Destroy#0:0"

extern refalrts::RefalFunction& CheckProgram_0_0;
#define CheckProgram_alias CheckProgram_0_0
#define CheckProgram_str "CheckProgram#0:0"

extern refalrts::RefalFunction& Desugar_0_0;
#define Desugar_alias Desugar_0_0
#define Desugar_str "Desugar#0:0"

extern refalrts::RefalFunction& HighLevelRASL_0_0;
#define HighLevelRASL_alias HighLevelRASL_0_0
#define HighLevelRASL_str "HighLevelRASL#0:0"

extern refalrts::RefalFunction& LowLevelRASL_0_0;
#define LowLevelRASL_alias LowLevelRASL_0_0
#define LowLevelRASL_str "LowLevelRASL#0:0"

extern refalrts::RefalFunction& GenProgram_RASL_0_0;
#define GenProgram_RASL_alias GenProgram_RASL_0_0
#define GenProgram_RASL_str "GenProgram-RASL#0:0"

extern refalrts::RefalFunction& GenProgram_Native_0_0;
#define GenProgram_Native_alias GenProgram_Native_0_0
#define GenProgram_Native_str "GenProgram-Native#0:0"

extern refalrts::RefalFunction& gen_CompileFile_L1_3222736457_1848565868;
#define gen_CompileFile_L1_alias gen_CompileFile_L1_3222736457_1848565868

extern refalrts::RefalFunction& gen_CompileFile_L2L1S1L1L1_3222736457_1848565868;
#define gen_CompileFile_L2L1S1L1L1_alias gen_CompileFile_L2L1S1L1L1_3222736457_1848565868

extern refalrts::RefalFunction& gen_CompileFile_L2L1S1L1_3222736457_1848565868;
#define gen_CompileFile_L2L1S1L1_alias gen_CompileFile_L2L1S1L1_3222736457_1848565868

extern refalrts::RefalFunction& gen_CompileFile_L2L1_3222736457_1848565868;
#define gen_CompileFile_L2L1_alias gen_CompileFile_L2L1_3222736457_1848565868

extern refalrts::RefalFunction& gen_CompileFile_L2_3222736457_1848565868;
#define gen_CompileFile_L2_alias gen_CompileFile_L2_3222736457_1848565868

extern refalrts::RefalFunction& CompileFile_0_0;
#define CompileFile_alias CompileFile_0_0

extern refalrts::RefalFunction& SelectOptFlags_3222736457_1848565868;
#define SelectOptFlags_alias SelectOptFlags_3222736457_1848565868


static refalrts::FnResult func_gen_CompileFile_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & CompileFile\1/4 t.ErrorList#2/5 e.AST#2/2 >/1
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
  refalrts::update_name( context[4], & CheckProgram_alias );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_CompileFile_L1(func_gen_CompileFile_L1, "CompileFile\\1#3222736457:1848565868");
refalrts::RefalFunction& gen_CompileFile_L1_3222736457_1848565868 = descr_gen_CompileFile_L1;

static refalrts::FnResult func_gen_CompileFile_L2L1S1L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ )
  // </0 & CompileFile\2\1$1\1\1/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  do {
    // ( e.idx ) ( e.idx ) ( )
    // </0 & CompileFile\2\1$1\1\1/4 (/7 e.SrcName#1/5 )/8 (/11 e.OutputName#1/9 )/12 (/15 )/16 >/1
    context[40] = context[13];
    context[41] = context[14];
    if( ! refalrts::empty_seq( context[40], context[41] ) )
      continue;
    // closed e.SrcName#1 as range 5
    // closed e.OutputName#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & CompileFile\2\1$1\1\1/4 (/7 e.SrcName#1/5 )/8 (/11 e.OutputName#1/9 )/12 (/15 )/16 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoNative/1 ]] }
    refalrts::reinit_ident( context[1], ident_NoNative );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) ( e.idx )
  // </0 & CompileFile\2\1$1\1\1/4 (/7 e.SrcName#1/5 )/8 (/11 e.OutputName#1/9 )/12 (/15 e.NativeRASL#5/13 )/16 >/1
  // closed e.SrcName#1 as range 5
  // closed e.OutputName#1 as range 9
  // closed e.NativeRASL#5 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 & Fetch/18 Tile{ AsIs: e.NativeRASL#5/13 } </19 & Seq/20 Tile{ HalfReuse: (/0 Reuse: & GenProgram-Native/4 AsIs: (/7 AsIs: e.SrcName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.OutputName#1/9 HalfReuse: '.'/12 HalfReuse: 'n'/15 }"ative.cpp"/21 )/23 )/24 (/25 & SaveFile/26 (/27 e.OutputName#1/9/28".native.cpp"/30 )/32 Tile{ AsIs: )/16 AsIs: >/1 } >/33 (/34 e.OutputName#1/9/35".native.cpp"/37 )/39 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], & Fetch_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & Seq_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[21], context[22], "ative.cpp", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], & SaveFile_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[28], context[29], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[30], context[31], ".native.cpp", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[35], context[36], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[37], context[38], ".native.cpp", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::update_name( context[4], & GenProgram_Native_alias );
  refalrts::reinit_char( context[12], '.' );
  refalrts::reinit_char( context[15], 'n' );
  refalrts::link_brackets( context[34], context[39] );
  refalrts::push_stack( context[33] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[19] );
  refalrts::link_brackets( context[25], context[16] );
  refalrts::link_brackets( context[27], context[32] );
  refalrts::link_brackets( context[0], context[24] );
  refalrts::link_brackets( context[11], context[23] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[33], context[39] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[21], context[32] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_CompileFile_L2L1S1L1L1(func_gen_CompileFile_L2L1S1L1L1, "CompileFile\\2\\1$1\\1\\1#3222736457:1848565868");
refalrts::RefalFunction& gen_CompileFile_L2L1S1L1L1_3222736457_1848565868 = descr_gen_CompileFile_L2L1S1L1L1;

static refalrts::FnResult func_gen_CompileFile_L2L1S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & CompileFile\2\1$1\1/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 e.RASL#4/2 (/15 e.NativeRASL#4/13 )/16 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  // closed e.RASL#4 as range 2
  // closed e.NativeRASL#4 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 & Fetch/18 Tile{ AsIs: e.RASL#4/2 } </19 & Seq/20 & GenProgram-RASL/21 Tile{ HalfReuse: (/0 Reuse: & SaveFile/4 AsIs: (/7 AsIs: e.OutputName#1/5 HalfReuse: '.'/8 HalfReuse: 'c'/11 }"pp"/22 Tile{ AsIs: )/12 } )/24 >/25 >/26 # Success/27 e.OutputName#1/5/28".cpp"/30 </32 & Fetch/33 Tile{ AsIs: (/15 AsIs: e.NativeRASL#4/13 AsIs: )/16 HalfReuse: </1 } & @create_closure@/34 & CompileFile\2\1$1\1\1/35 (/36 Tile{ AsIs: e.SrcName#1/9 } )/37 (/38 e.OutputName#1/5/39 )/41 >/42 >/43 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], & Fetch_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & Seq_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], & GenProgram_RASL_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[22], context[23], "pp", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[27], ident_Success ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[28], context[29], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[30], context[31], ".cpp", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], & Fetch_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[35], & gen_CompileFile_L2L1S1L1L1_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[39], context[40], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[43] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::update_name( context[4], & SaveFile_alias );
  refalrts::reinit_char( context[8], '.' );
  refalrts::reinit_char( context[11], 'c' );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[43] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[42] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[38], context[41] );
  refalrts::link_brackets( context[36], context[37] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[19] );
  refalrts::link_brackets( context[0], context[24] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[37], context[43] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[34], context[36] );
  res = refalrts::splice_evar( res, context[15], context[1] );
  res = refalrts::splice_evar( res, context[24], context[33] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_CompileFile_L2L1S1L1(func_gen_CompileFile_L2L1S1L1, "CompileFile\\2\\1$1\\1#3222736457:1848565868");
refalrts::RefalFunction& gen_CompileFile_L2L1S1L1_3222736457_1848565868 = descr_gen_CompileFile_L2L1S1L1;

static refalrts::FnResult func_gen_CompileFile_L2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  //FAST GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) ( e.$ ) s.$
  //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) ( e.$ ) s.$
  // </0 & CompileFile\2\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 (/14 e.idxTVVVB#0/12 )/15 (/18 e.idxTVVVTB#0/16 )/19 s.idxTVVVTT#0/20 >/1
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
    // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 (/14 e.SrcName#1/12 )/15 (/18 e.OutputName#1/16 )/19 # EL-NoErrors/20 >/1
    if( ! refalrts::ident_term(  ident_EL_NoErrors, context[20] ) )
      continue;
    // closed e.AST#2 as range 5
    // closed e.SrcName#1 as range 12
    // closed e.OutputName#1 as range 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & Fetch/22 Tile{ AsIs: e.AST#2/5 } Tile{ AsIs: </0 Reuse: & Seq/4 AsIs: (/7 } Tile{ HalfReuse: & Desugar/8 AsIs: s.MarkupContext#1/9 } )/23 (/24 & HighLevelRASL/25 </26 & SelectOptFlags/27 Tile{ AsIs: s.Opt#1/10 } >/28 )/29 (/30 & LowLevelRASL/31 Tile{ AsIs: s.GenMode#1/11 AsIs: (/14 AsIs: e.SrcName#1/12 AsIs: )/15 HalfReuse: )/18 } </32 & @create_closure@/33 & CompileFile\2\1$1\1/34 (/35 Tile{ AsIs: e.OutputName#1/16 } )/36 (/37 e.SrcName#1/12/38 )/40 Tile{ HalfReuse: >/19 HalfReuse: >/20 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], & Fetch_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], & HighLevelRASL_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], & SelectOptFlags_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], & LowLevelRASL_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], & refalrts::create_closure ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], & gen_CompileFile_L2L1S1L1_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[38], context[39], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Seq_alias );
    refalrts::reinit_name( context[8], & Desugar_alias );
    refalrts::reinit_close_bracket( context[18] );
    refalrts::reinit_close_call( context[19] );
    refalrts::reinit_close_call( context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[32] );
    refalrts::link_brackets( context[37], context[40] );
    refalrts::link_brackets( context[35], context[36] );
    refalrts::link_brackets( context[30], context[18] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[24], context[29] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[26] );
    refalrts::link_brackets( context[7], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[36], context[40] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[32], context[35] );
    res = refalrts::splice_evar( res, context[11], context[18] );
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[23], context[27] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx s.idx s.idx ( e.idx ) ( e.idx ) # EL-HasErrors
  // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 (/14 e.SrcName#1/12 )/15 (/18 e.OutputName#1/16 )/19 # EL-HasErrors/20 >/1
  if( ! refalrts::ident_term(  ident_EL_HasErrors, context[20] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 5
  // closed e.SrcName#1 as range 12
  // closed e.OutputName#1 as range 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 (/14 e.SrcName#1/12 )/15 (/18 e.OutputName#1/16 )/19 # EL-HasErrors/20 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident( context[1], ident_Fails );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_CompileFile_L2L1(func_gen_CompileFile_L2L1, "CompileFile\\2\\1#3222736457:1848565868");
refalrts::RefalFunction& gen_CompileFile_L2L1_3222736457_1848565868 = descr_gen_CompileFile_L2L1;

static refalrts::FnResult func_gen_CompileFile_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & CompileFile\2/4 s.MarkupContext#1/5 s.Opt#1/6 s.GenMode#1/7 (/10 e.SrcName#1/8 )/11 (/14 e.OutputName#1/12 )/15 t.ErrorList#2/16 e.AST#2/2 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 } & Fetch/18 </19 & EL-Destroy/20 Tile{ AsIs: t.ErrorList#2/16 } >/21 </22 & @create_closure@/23 & CompileFile\2\1/24 (/25 Tile{ AsIs: e.AST#2/2 } Tile{ HalfReuse: )/4 AsIs: s.MarkupContext#1/5 AsIs: s.Opt#1/6 AsIs: s.GenMode#1/7 AsIs: (/10 AsIs: e.SrcName#1/8 AsIs: )/11 AsIs: (/14 AsIs: e.OutputName#1/12 AsIs: )/15 } >/26 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[18], & Fetch_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & EL_Destroy_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], & gen_CompileFile_L2L1_alias ) )
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

static refalrts::RefalNativeFunction descr_gen_CompileFile_L2(func_gen_CompileFile_L2, "CompileFile\\2#3222736457:1848565868");
refalrts::RefalFunction& gen_CompileFile_L2_3222736457_1848565868 = descr_gen_CompileFile_L2;

static refalrts::FnResult func_CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } e.SrcName#1/12/16 Tile{ HalfReuse: </8 } & Seq/18 & LoadSource/19 & LexFolding/20 (/21 & ParseProgram/22 </23 & EL-Create/24 e.SrcName#1/12/25 >/27 )/28 & CompileFile\1/29 </30 & @create_closure@/31 & CompileFile\2/32 Tile{ AsIs: s.MarkupContext#1/11 } Tile{ AsIs: s.Opt#1/10 } Tile{ AsIs: s.GenMode#1/9 } Tile{ AsIs: (/14 AsIs: e.SrcName#1/12 AsIs: )/15 } (/33 Tile{ AsIs: e.OutputName#1/2 } Tile{ HalfReuse: )/7 HalfReuse: >/6 HalfReuse: >/5 AsIs: >/1 ]] }
  if (! refalrts::copy_evar(context[16], context[17], context[12], context[13]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], & Seq_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], & LoadSource_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & LexFolding_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], & ParseProgram_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], & EL_Create_alias ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[25], context[26], context[12], context[13]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], & gen_CompileFile_L1_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], & gen_CompileFile_L2_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch_alias );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_close_call( context[6] );
  refalrts::reinit_close_call( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[30] );
  refalrts::link_brackets( context[33], context[7] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[21], context[28] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[18], context[32] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_CompileFile(func_CompileFile, "CompileFile#0:0");
refalrts::RefalFunction& CompileFile_0_0 = descr_CompileFile;

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

static refalrts::RefalNativeFunction descr_SelectOptFlags(func_SelectOptFlags, "SelectOptFlags#3222736457:1848565868");
refalrts::RefalFunction& SelectOptFlags_3222736457_1848565868 = descr_SelectOptFlags;


//End of file
