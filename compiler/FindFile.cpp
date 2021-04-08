// This file automatically generated from '..\common\FindFile.ref'
// Don't edit! Edit '..\common\FindFile.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_4261407720_1505013884
#define COOKIE1_ 4261407720U
#define COOKIE2_ 1505013884U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_DirectorySeparator = 3,
  efunc_AnalyzeFile = 4,
  efunc_Map = 5,
  efunc_ExpandREF5RSL = 6,
  efunc_AnalyzeFilem_CheckNotFound = 7,
  efunc_gen_FindFiles_L1L1 = 8,
  efunc_gen_FindFiles_L1 = 9,
  efunc_gen_FindFiles_L1Z1 = 10,
  efunc_gen_FindFiles_L1Z2 = 11,
  efunc_gen_FindFiles_A1B1D5 = 12,
  efunc_gen_FindFiles_A1 = 13,
  efunc_SplitPath = 14,
  efunc_PathSeparator = 15,
  efunc_GetEnv = 16,
  efunc_gen_ExpandREF5RSL_S1A1 = 17,
  efunc_SplitPathm_BracketNotEmtyItem = 18,
  efunc_ExistFile = 19,
  efunc_gen_AnalyzeFile_S2B1S1B1 = 20,
  efunc_gen_AnalyzeFile_S1C1 = 21,
  efunc_gen_AnalyzeFile_S1C2 = 22,
  efunc_gen_AnalyzeFile_S1B1 = 23,
  efunc_gen_AnalyzeFile_S2B1 = 24,
  efunc_gen_AnalyzeFile_S3C1 = 25,
  efunc_SourceSuffixes = 26,
  efunc_gen_AnalyzeFile_S3C2 = 27,
  efunc_gen_ExistFilem_T_Z1 = 28,
  efunc_gen_AnalyzeFile_S4B1 = 29,
  efunc_AnalyzeInclude = 30,
  efunc_gen_AnalyzeInclude_S1B1 = 31,
  efunc_gen_FindInclude_L1Z1 = 32,
  efunc_gen_FindInclude_B1 = 33,
  efunc_gen_AnalyzeInclude_S2B1 = 34,
  efunc_gen_FindInclude_L1Z2 = 35,
  efunc_gen_AnalyzeInclude_S3B1 = 36,
  efunc_gen_FindInclude_L1 = 37,
  efunc_Mu = 38,
  efunc_Up = 39,
  efunc_Evm_met = 40,
  efunc_Residue = 41,
  efunc_u_u_Metau_Residue = 42,
  efunc_DS = 43,
  efunc_FindFiles = 44,
  efunc_ExistFilem_T = 45,
  efunc_FindInclude = 46,
  efunc_gen_FindFiles_L1L1Z1 = 47,
  efunc_gen_FindFiles_L1Z0 = 48,
  efunc_gen_FindFiles_L1L1Z2 = 49,
  efunc_gen_ExistFilem_T_Z0 = 50,
  efunc_gen_FindInclude_L1Z0 = 51,
  efunc_gen_FindFiles_L1L1Z0 = 52,
};


enum ident {
  ident_DefaultEXE = 0,
  ident_EXE = 1,
  ident_LIB = 2,
  ident_R = 3,
  ident_CompileOnly = 4,
  ident_REF5RSL = 5,
  ident_Source = 6,
  ident_Output = 7,
  ident_OutputWithNative = 8,
  ident_NotFound = 9,
  ident_SR = 10,
  ident_RSL = 11,
  ident_R5 = 12,
  ident_True = 13,
  ident_False = 14,
  ident_Success = 15,
  ident_Fails = 16,
  ident_Mu = 17,
  ident_Up = 18,
  ident_Evm_met = 19,
  ident_Residue = 20,
  ident_u_u_Metau_Residue = 21,
  ident_DS = 22,
  ident_FindFiles = 23,
  ident_ExpandREF5RSL = 24,
  ident_SplitPath = 25,
  ident_SplitPathm_BracketNotEmtyItem = 26,
  ident_AnalyzeFilem_CheckNotFound = 27,
  ident_ExistFilem_T = 28,
  ident_SourceSuffixes = 29,
  ident_AnalyzeFile = 30,
  ident_FindInclude = 31,
  ident_AnalyzeInclude = 32,
};


static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Mu/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mu("Mu", COOKIE1_, COOKIE2_, func_Mu);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Residue/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Residue("Residue", COOKIE1_, COOKIE2_, func_Residue);


static refalrts::FnResult func_u_u_Metau_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & __Meta_Residue/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Metau_Residue("__Meta_Residue", COOKIE1_, COOKIE2_, func_u_u_Metau_Residue);


static refalrts::FnResult func_DS(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & DS/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectorySeparator/4 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DirectorySeparator]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DS("DS", COOKIE1_, COOKIE2_, func_DS);


static refalrts::FnResult func_gen_FindFiles_L1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & FindFiles\1\1/4 (/7 e.Subdir/5 )/8 (/11 e.FileName/9 )/12 (/15 e.Folder/13 )/16 >/1
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
  // closed e.Subdir as range 5
  // closed e.FileName as range 9
  // closed e.Folder as range 13
  //DEBUG: e.Subdir: 5
  //DEBUG: e.FileName: 9
  //DEBUG: e.Folder: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 & AnalyzeFile/18 e.Folder/13/19 Tile{ AsIs: </0 Reuse: & DirectorySeparator/4 HalfReuse: >/7 AsIs: e.Subdir/5 HalfReuse: </8 HalfReuse: & DirectorySeparator/11 } >/21 Tile{ AsIs: e.FileName/9 } >/22 Tile{ HalfReuse: </12 HalfReuse: & AnalyzeFile/15 AsIs: e.Folder/13 HalfReuse: </16 HalfReuse: & DirectorySeparator/1 } >/23 e.FileName/9/24 >/26 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_AnalyzeFile]);
  refalrts::copy_evar(vm, context[19], context[20], context[13], context[14]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::copy_evar(vm, context[24], context[25], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_DirectorySeparator]);
  refalrts::reinit_close_call(context[7]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_DirectorySeparator]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[15], functions[efunc_AnalyzeFile]);
  refalrts::reinit_open_call(context[16]);
  refalrts::reinit_name(context[1], functions[efunc_DirectorySeparator]);
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[26] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFiles_L1L1("FindFiles\\1\\1", COOKIE1_, COOKIE2_, func_gen_FindFiles_L1L1);


static refalrts::FnResult func_gen_FindFiles_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & FindFiles\1/4 (/7 e.Subdir/5 )/8 (/11 e.Folders/9 )/12 (/15 e.FileName/13 )/16 >/1
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
  // closed e.Subdir as range 5
  // closed e.Folders as range 9
  // closed e.FileName as range 13
  //DEBUG: e.Subdir: 5
  //DEBUG: e.Folders: 9
  //DEBUG: e.FileName: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: & AnalyzeFile-CheckNotFound/12 AsIs: (/15 AsIs: e.FileName/13 AsIs: )/16 HalfReuse: </1 } & AnalyzeFile/18 e.Subdir/5/19 </21 & DirectorySeparator/22 >/23 e.FileName/13/24 >/26 </27 & AnalyzeFile/28 e.FileName/13/29 >/31 </32 & Map/33 Tile{ HalfReuse: [*]/0 Reuse: & FindFiles\1\1/4 AsIs: (/7 AsIs: e.Subdir/5 AsIs: )/8 AsIs: (/11 } e.FileName/13/34 )/36 {*}/37 </38 & ExpandREF5RSL/39 Tile{ AsIs: e.Folders/9 } >/40 >/41 >/42 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_AnalyzeFile]);
  refalrts::copy_evar(vm, context[19], context[20], context[5], context[6]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_DirectorySeparator]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::copy_evar(vm, context[24], context[25], context[13], context[14]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_AnalyzeFile]);
  refalrts::copy_evar(vm, context[29], context[30], context[13], context[14]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::alloc_open_call(vm, context[32]);
  refalrts::alloc_name(vm, context[33], functions[efunc_Map]);
  refalrts::copy_evar(vm, context[34], context[35], context[13], context[14]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_unwrapped_closure(vm, context[37], context[0]);
  refalrts::alloc_open_call(vm, context[38]);
  refalrts::alloc_name(vm, context[39], functions[efunc_ExpandREF5RSL]);
  refalrts::alloc_close_call(vm, context[40]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::alloc_close_call(vm, context[42]);
  refalrts::reinit_name(context[12], functions[efunc_AnalyzeFilem_CheckNotFound]);
  refalrts::reinit_open_call(context[1]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindFiles_L1L1]);
  refalrts::push_stack( vm, context[42] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[40] );
  refalrts::push_stack( vm, context[38] );
  refalrts::link_brackets( context[11], context[36] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[40], context[42] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[36], context[39] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[18], context[33] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[37] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFiles_L1("FindFiles\\1", COOKIE1_, COOKIE2_, func_gen_FindFiles_L1);


static refalrts::FnResult func_gen_FindFiles_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & FindFiles=1/4 (/7 e.Folders/5 )/8 (/11 e.Files/9 )/12 e.Subdir/2 >/1
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
  // closed e.Folders as range 5
  // closed e.Files as range 9
  // closed e.Subdir as range 2
  //DEBUG: e.Folders: 5
  //DEBUG: e.Files: 9
  //DEBUG: e.Subdir: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & Map/13 [*]/14 & FindFiles\1/15 Tile{ HalfReuse: (/1 } Tile{ AsIs: e.Subdir/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Folders/5 AsIs: )/8 HalfReuse: {*}/11 AsIs: e.Files/9 HalfReuse: >/12 } Tile{ ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_Map]);
  refalrts::alloc_closure_head(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_FindFiles_L1]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_unwrapped_closure(context[11], context[14]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[1], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFiles_A1("FindFiles=1", COOKIE1_, COOKIE2_, func_gen_FindFiles_A1);


static refalrts::FnResult func_FindFiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & FindFiles/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindFiles/4 s.new1/5 (/8 e.new2/6 )/9 e.new3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new2 as range 6
  // closed e.new3 as range 2
  do {
    // </0 & FindFiles/4 # DefaultEXE/5 (/8 e.Folders/10 )/9 e.Files/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_DefaultEXE], context[5] ) )
      continue;
    // closed e.Folders as range 10
    // closed e.Files as range 12
    //DEBUG: e.Folders: 10
    //DEBUG: e.Files: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Map/0 HalfReuse: [*]/4 HalfReuse: & FindFiles\1@1/5 AsIs: (/8 AsIs: e.Folders/10 AsIs: )/9 } {*}/15 Tile{ AsIs: e.Files/12 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_unwrapped_closure(vm, context[15], context[4]);
    refalrts::reinit_name(context[0], functions[efunc_Map]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_FindFiles_L1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::use( res );
    refalrts::wrap_closure( context[15] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindFiles/4 # EXE/5 (/8 e.Folders/10 )/9 e.Files/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_EXE], context[5] ) )
      continue;
    // closed e.Folders as range 10
    // closed e.Files as range 12
    //DEBUG: e.Folders: 10
    //DEBUG: e.Files: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Map/0 HalfReuse: [*]/4 HalfReuse: & FindFiles\1@1/5 AsIs: (/8 AsIs: e.Folders/10 AsIs: )/9 } {*}/15 Tile{ AsIs: e.Files/12 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_unwrapped_closure(vm, context[15], context[4]);
    refalrts::reinit_name(context[0], functions[efunc_Map]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_FindFiles_L1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::use( res );
    refalrts::wrap_closure( context[15] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindFiles/4 # LIB/5 (/8 e.Folders/10 )/9 e.Files/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_LIB], context[5] ) )
      continue;
    // closed e.Folders as range 10
    // closed e.Files as range 12
    //DEBUG: e.Folders: 10
    //DEBUG: e.Files: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Map/0 HalfReuse: [*]/4 HalfReuse: & FindFiles\1@2/5 AsIs: (/8 AsIs: e.Folders/10 AsIs: )/9 } {*}/15 Tile{ AsIs: e.Files/12 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_unwrapped_closure(vm, context[15], context[4]);
    refalrts::reinit_name(context[0], functions[efunc_Map]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_FindFiles_L1Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::use( res );
    refalrts::wrap_closure( context[15] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindFiles/4 # R/5 (/8 e.Folders/10 )/9 e.Files/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_R], context[5] ) )
      continue;
    // closed e.Folders as range 10
    // closed e.Files as range 12
    //DEBUG: e.Folders: 10
    //DEBUG: e.Files: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Map/0 HalfReuse: [*]/4 HalfReuse: & FindFiles\1@2/5 AsIs: (/8 AsIs: e.Folders/10 AsIs: )/9 } {*}/15 Tile{ AsIs: e.Files/12 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_unwrapped_closure(vm, context[15], context[4]);
    refalrts::reinit_name(context[0], functions[efunc_Map]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_FindFiles_L1Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::use( res );
    refalrts::wrap_closure( context[15] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindFiles/4 # CompileOnly/5 (/8 e.Folders/10 )/9 e.Files/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_CompileOnly], context[5] ) )
      continue;
    // closed e.Folders as range 10
    // closed e.Files as range 12
    //DEBUG: e.Folders: 10
    //DEBUG: e.Files: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Map/0 HalfReuse: [*]/4 HalfReuse: & FindFiles\1@1/5 AsIs: (/8 AsIs: e.Folders/10 AsIs: )/9 } {*}/15 Tile{ AsIs: e.Files/12 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_unwrapped_closure(vm, context[15], context[4]);
    refalrts::reinit_name(context[0], functions[efunc_Map]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_FindFiles_L1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::use( res );
    refalrts::wrap_closure( context[15] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindFiles/4 s.TargetMode/5 (/8 e.Folders/6 )/9 e.Files/2 >/1
  // closed e.Folders as range 6
  // closed e.Files as range 2
  //DEBUG: s.TargetMode: 5
  //DEBUG: e.Folders: 6
  //DEBUG: e.Files: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindFiles=1/4 } Tile{ AsIs: (/8 AsIs: e.Folders/6 AsIs: )/9 } (/10 Tile{ AsIs: e.Files/2 } )/11 </12 & FindFiles=1:1*5/13 Tile{ AsIs: s.TargetMode/5 } >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_FindFiles_A1B1D5]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_FindFiles_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindFiles("FindFiles", 0U, 0U, func_FindFiles);


static refalrts::FnResult func_gen_ExpandREF5RSL_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ExpandREF5RSL$1=1/4 (/7 e.Folders-B/5 )/8 (/11 e.Folders-E/9 )/12 e.REF5RSL/2 >/1
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
  // closed e.Folders-B as range 5
  // closed e.Folders-E as range 9
  // closed e.REF5RSL as range 2
  //DEBUG: e.Folders-B: 5
  //DEBUG: e.Folders-E: 9
  //DEBUG: e.REF5RSL: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Folders-B/5 } Tile{ AsIs: e.REF5RSL/2 } Tile{ AsIs: </0 Reuse: & ExpandREF5RSL/4 } Tile{ AsIs: e.Folders-E/9 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_ExpandREF5RSL]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExpandREF5RSL_S1A1("ExpandREF5RSL$1=1", COOKIE1_, COOKIE2_, func_gen_ExpandREF5RSL_S1A1);


static refalrts::FnResult func_ExpandREF5RSL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & ExpandREF5RSL/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & ExpandREF5RSL/4 e.Folders-B/7 # REF5RSL/11 e.Folders-E/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = refalrts::ident_left( identifiers[ident_REF5RSL], context[9], context[10] );
      if( ! context[11] )
        continue;
      // closed e.Folders-E as range 9
      //DEBUG: e.Folders-B: 7
      //DEBUG: e.Folders-E: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExpandREF5RSL$1=1/4 } Tile{ HalfReuse: (/11 } Tile{ AsIs: e.Folders-B/7 } )/12 (/13 Tile{ AsIs: e.Folders-E/9 } )/14 </15 & SplitPath/16 </17 & PathSeparator/18 >/19 </20 & GetEnv/21"REF5RSL"/22 >/24 >/25 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_bracket(vm, context[13]);
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_SplitPath]);
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_PathSeparator]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[21], functions[efunc_GetEnv]);
      refalrts::alloc_chars(vm, context[22], context[23], "REF5RSL", 7);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::update_name(context[4], functions[efunc_gen_ExpandREF5RSL_S1A1]);
      refalrts::reinit_open_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[17] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[14], context[25] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_elem( res, context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExpandREF5RSL/4 e.Folders/2 >/1
  // closed e.Folders as range 2
  //DEBUG: e.Folders: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExpandREF5RSL/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Folders/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExpandREF5RSL("ExpandREF5RSL", COOKIE1_, COOKIE2_, func_ExpandREF5RSL);


static refalrts::FnResult func_SplitPath(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & SplitPath/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & SplitPath/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & SplitPath/4 s.Sep/5 e.Path-B/8 s.Sep/12 e.Path-E/10 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[10] = context[6];
      context[11] = context[7];
      if( ! refalrts::repeated_stvar_left( vm, context[12], context[5], context[10], context[11] ) )
        continue;
      // closed e.Path-E as range 10
      //DEBUG: s.Sep: 5
      //DEBUG: e.Path-B: 8
      //DEBUG: e.Path-E: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Sep/5 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SplitPath-BracketNotEmtyItem/4 } Tile{ AsIs: e.Path-B/8 } >/13 </14 & SplitPath/15 Tile{ AsIs: s.Sep/12 AsIs: e.Path-E/10 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[13]);
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[15], functions[efunc_SplitPath]);
      refalrts::update_name(context[4], functions[efunc_SplitPathm_BracketNotEmtyItem]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[13], context[15] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[8], context[9], context[6], context[7] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SplitPath/4 s.Sep/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Sep: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SplitPath/4 s.Sep/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SplitPath/4 s.Sep/5 e.Path/2 >/1
  // closed e.Path as range 2
  //DEBUG: s.Sep: 5
  //DEBUG: e.Path: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & SplitPath/4 s.Sep/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Path/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SplitPath("SplitPath", COOKIE1_, COOKIE2_, func_SplitPath);


static refalrts::FnResult func_SplitPathm_BracketNotEmtyItem(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & SplitPath-BracketNotEmtyItem/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & SplitPath-BracketNotEmtyItem/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SplitPath-BracketNotEmtyItem/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SplitPath-BracketNotEmtyItem/4 e.PathEntry/2 >/1
  // closed e.PathEntry as range 2
  //DEBUG: e.PathEntry: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: e.PathEntry/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SplitPathm_BracketNotEmtyItem("SplitPath-BracketNotEmtyItem", COOKIE1_, COOKIE2_, func_SplitPathm_BracketNotEmtyItem);


static refalrts::FnResult func_AnalyzeFilem_CheckNotFound(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & AnalyzeFile-CheckNotFound/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.new6/9 )/8 (/15 s.new3/17 e.new4/13 )/16 e.new5/11 >/1
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
    // closed e.new6 as range 9
    // closed e.new5 as range 11
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    // closed e.new4 as range 13
    do {
      // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName/18 )/8 (/15 # Source/17 (/26 s.Dialect/28 e.Source/24 )/27 e.Output/20 )/16 e.Variants/22 >/1
      context[18] = context[9];
      context[19] = context[10];
      context[20] = context[13];
      context[21] = context[14];
      context[22] = context[11];
      context[23] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Source], context[17] ) )
        continue;
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      // closed e.FileName as range 18
      // closed e.Output as range 20
      // closed e.Variants as range 22
      if( ! refalrts::svar_left( context[28], context[24], context[25] ) )
        continue;
      // closed e.Source as range 24
      //DEBUG: e.FileName: 18
      //DEBUG: e.Output: 20
      //DEBUG: e.Variants: 22
      //DEBUG: s.Dialect: 28
      //DEBUG: e.Source: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName/18 )/8 {REMOVED TILE} e.Variants/22 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: # Source/17 AsIs: (/26 AsIs: s.Dialect/28 AsIs: e.Source/24 AsIs: )/27 AsIs: e.Output/20 AsIs: )/16 } Tile{ ]] }
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName/18 )/8 (/15 # Output/17 e.Output/20 )/16 e.Variants/22 >/1
      context[18] = context[9];
      context[19] = context[10];
      context[20] = context[13];
      context[21] = context[14];
      context[22] = context[11];
      context[23] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Output], context[17] ) )
        continue;
      // closed e.FileName as range 18
      // closed e.Output as range 20
      // closed e.Variants as range 22
      //DEBUG: e.FileName: 18
      //DEBUG: e.Output: 20
      //DEBUG: e.Variants: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName/18 )/8 {REMOVED TILE} e.Variants/22 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: # Output/17 AsIs: e.Output/20 AsIs: )/16 } Tile{ ]] }
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName/18 )/8 (/15 # OutputWithNative/17 (/26 e.Output/24 )/27 e.Native/20 )/16 e.Variants/22 >/1
      context[18] = context[9];
      context[19] = context[10];
      context[20] = context[13];
      context[21] = context[14];
      context[22] = context[11];
      context[23] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_OutputWithNative], context[17] ) )
        continue;
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      // closed e.FileName as range 18
      // closed e.Output as range 24
      // closed e.Native as range 20
      // closed e.Variants as range 22
      //DEBUG: e.FileName: 18
      //DEBUG: e.Output: 24
      //DEBUG: e.Native: 20
      //DEBUG: e.Variants: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName/18 )/8 {REMOVED TILE} e.Variants/22 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: # OutputWithNative/17 AsIs: (/26 AsIs: e.Output/24 AsIs: )/27 AsIs: e.Native/20 AsIs: )/16 } Tile{ ]] }
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName/18 )/8 (/15 # NotFound/17 e.NotFoundPath/20 )/16 e.Variants/22 >/1
    context[18] = context[9];
    context[19] = context[10];
    context[20] = context[13];
    context[21] = context[14];
    context[22] = context[11];
    context[23] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_NotFound], context[17] ) )
      continue;
    // closed e.FileName as range 18
    // closed e.NotFoundPath as range 20
    // closed e.Variants as range 22
    //DEBUG: e.FileName: 18
    //DEBUG: e.NotFoundPath: 20
    //DEBUG: e.Variants: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/15 # NotFound/17 e.NotFoundPath/20 )/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AnalyzeFile-CheckNotFound/4 AsIs: (/7 AsIs: e.FileName/18 AsIs: )/8 } Tile{ AsIs: e.Variants/22 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName as range 5
  //DEBUG: e.FileName: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # NotFound/7 AsIs: e.FileName/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_NotFound]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AnalyzeFilem_CheckNotFound("AnalyzeFile-CheckNotFound", COOKIE1_, COOKIE2_, func_AnalyzeFilem_CheckNotFound);


static refalrts::FnResult func_ExistFilem_T(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & ExistFile-T/4 e.FileName/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName as range 2
  //DEBUG: e.FileName: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName/2 AsIs: >/1 } e.FileName/2/5 Tile{ ]] }
  refalrts::copy_evar(vm, context[5], context[6], context[2], context[3]);
  refalrts::update_name(context[4], functions[efunc_ExistFile]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExistFilem_T("ExistFile-T", COOKIE1_, COOKIE2_, func_ExistFilem_T);


static refalrts::FnResult func_SourceSuffixes(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & SourceSuffixes/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # R5/4 HalfReuse: '.'/1 }"ref"/5 )/7 (/8 # SR/9".sref"/10 )/12 (/13 # RSL/14".rsl"/15 )/17 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "ref", 3);
  refalrts::alloc_close_bracket(vm, context[7]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_ident(vm, context[9], identifiers[ident_SR]);
  refalrts::alloc_chars(vm, context[10], context[11], ".sref", 5);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_RSL]);
  refalrts::alloc_chars(vm, context[15], context[16], ".rsl", 4);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_R5]);
  refalrts::reinit_char(context[1], '.');
  refalrts::link_brackets( context[13], context[17] );
  refalrts::link_brackets( context[8], context[12] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SourceSuffixes("SourceSuffixes", COOKIE1_, COOKIE2_, func_SourceSuffixes);


static refalrts::FnResult func_gen_AnalyzeFile_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & AnalyzeFile$1:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & AnalyzeFile$1:1/4 s.new1/5 (/8 e.new2/6 )/9 (/12 e.new3/10 )/13 s.new4/14 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.new2 as range 6
  // closed e.new3 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & AnalyzeFile$1:1/4 s.Dialect/5 (/8 e.FileName/15 )/9 (/12 e.UnitName/17 )/13 # True/14 >/1
    context[15] = context[6];
    context[16] = context[7];
    context[17] = context[10];
    context[18] = context[11];
    if( ! refalrts::ident_term( identifiers[ident_True], context[14] ) )
      continue;
    // closed e.FileName as range 15
    // closed e.UnitName as range 17
    //DEBUG: s.Dialect: 5
    //DEBUG: e.FileName: 15
    //DEBUG: e.UnitName: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Source/4 } Tile{ AsIs: (/8 } Tile{ AsIs: s.Dialect/5 } Tile{ AsIs: e.FileName/15 } Tile{ HalfReuse: )/12 AsIs: e.UnitName/17 HalfReuse: '.'/13 HalfReuse: 'r'/14 HalfReuse: 'a'/1 }"sl"/19 Tile{ AsIs: )/9 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[19], context[20], "sl", 2);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Source]);
    refalrts::reinit_close_bracket(context[12]);
    refalrts::reinit_char(context[13], '.');
    refalrts::reinit_char(context[14], 'r');
    refalrts::reinit_char(context[1], 'a');
    refalrts::link_brackets( context[0], context[9] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeFile$1:1/4 s.Dialect/5 (/8 e.FileName/6 )/9 (/12 e.UnitName/10 )/13 # False/14 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName as range 6
  // closed e.UnitName as range 10
  //DEBUG: s.Dialect: 5
  //DEBUG: e.FileName: 6
  //DEBUG: e.UnitName: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & AnalyzeFile$1:1/4 s.Dialect/5 {REMOVED TILE} (/12 e.UnitName/10 )/13 # False/14 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # NotFound/8 AsIs: e.FileName/6 AsIs: )/9 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[8], identifiers[ident_NotFound]);
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeFile_S1B1("AnalyzeFile$1:1", COOKIE1_, COOKIE2_, func_gen_AnalyzeFile_S1B1);


static refalrts::FnResult func_gen_AnalyzeFile_S2B1S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & AnalyzeFile$2:1$1:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & AnalyzeFile$2:1$1:1/4 (/7 e.new1/5 )/8 s.new2/9 e.new3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 2
  do {
    // </0 & AnalyzeFile$2:1$1:1/4 (/7 e.OutName/10 )/8 # True/9 e.NativeName/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.OutName as range 10
    // closed e.NativeName as range 12
    //DEBUG: e.OutName: 10
    //DEBUG: e.NativeName: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # True/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # OutputWithNative/4 AsIs: (/7 AsIs: e.OutName/10 AsIs: )/8 } Tile{ AsIs: e.NativeName/12 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_OutputWithNative]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeFile$2:1$1:1/4 (/7 e.OutName/5 )/8 # False/9 e.NativeName/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OutName as range 5
  // closed e.NativeName as range 2
  //DEBUG: e.OutName: 5
  //DEBUG: e.NativeName: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} # False/9 e.NativeName/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Output/7 AsIs: e.OutName/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_Output]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeFile_S2B1S1B1("AnalyzeFile$2:1$1:1", COOKIE1_, COOKIE2_, func_gen_AnalyzeFile_S2B1S1B1);


static refalrts::FnResult func_gen_AnalyzeFile_S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & AnalyzeFile$2:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & AnalyzeFile$2:1/4 (/7 e.new1/5 )/8 s.new2/9 e.new3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 2
  do {
    // </0 & AnalyzeFile$2:1/4 (/7 e.FileName/10 )/8 # True/9 e.OutName/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.FileName as range 10
    // closed e.OutName as range 12
    //DEBUG: e.FileName: 10
    //DEBUG: e.OutName: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile$2:1$1:1/4 AsIs: (/7 } Tile{ AsIs: e.OutName/12 } Tile{ AsIs: )/8 HalfReuse: </9 } & ExistFile/14 Tile{ AsIs: e.FileName/10 }".cpp"/15 >/17 e.FileName/10/18".cpp"/20 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[14], functions[efunc_ExistFile]);
    refalrts::alloc_chars(vm, context[15], context[16], ".cpp", 4);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::copy_evar(vm, context[18], context[19], context[10], context[11]);
    refalrts::alloc_chars(vm, context[20], context[21], ".cpp", 4);
    refalrts::update_name(context[4], functions[efunc_gen_AnalyzeFile_S2B1S1B1]);
    refalrts::reinit_open_call(context[9]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[9] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[21] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeFile$2:1/4 (/7 e.FileName/5 )/8 # False/9 e.OutName/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName as range 5
  // closed e.OutName as range 2
  //DEBUG: e.FileName: 5
  //DEBUG: e.OutName: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AnalyzeFile$2:1/4 (/7 e.FileName/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 Reuse: # NotFound/9 AsIs: e.OutName/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[8]);
  refalrts::update_ident(context[9], identifiers[ident_NotFound]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[8], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeFile_S2B1("AnalyzeFile$2:1", COOKIE1_, COOKIE2_, func_gen_AnalyzeFile_S2B1);


static refalrts::FnResult func_gen_AnalyzeFile_S4B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & AnalyzeFile$4:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & AnalyzeFile$4:1/4 (/7 s.new1/13 e.new2/5 )/8 (/11 s.new3/14 e.new4/9 )/12 >/1
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
  // closed e.new2 as range 5
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new4 as range 9
  do {
    // </0 & AnalyzeFile$4:1/4 (/7 # True/13 e.new5/15 )/8 (/11 s.new6/14 e.new7/17 )/12 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_True], context[13] ) )
      continue;
    // closed e.new5 as range 15
    // closed e.new7 as range 17
    do {
      // </0 & AnalyzeFile$4:1/4 (/7 # True/13 e.OutName/19 )/8 (/11 # True/14 e.Native/21 )/12 >/1
      context[19] = context[15];
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_True], context[14] ) )
        continue;
      // closed e.OutName as range 19
      // closed e.Native as range 21
      //DEBUG: e.OutName: 19
      //DEBUG: e.Native: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 # True/14 {REMOVED TILE} )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # OutputWithNative/7 HalfReuse: (/13 AsIs: e.OutName/19 AsIs: )/8 } Tile{ AsIs: e.Native/21 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_ident(context[7], identifiers[ident_OutputWithNative]);
      refalrts::reinit_open_bracket(context[13]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[4], context[1] );
      refalrts::link_brackets( context[13], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[4], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AnalyzeFile$4:1/4 (/7 # True/13 e.OutName/19 )/8 (/11 # False/14 e.Native/21 )/12 >/1
    context[19] = context[15];
    context[20] = context[16];
    context[21] = context[17];
    context[22] = context[18];
    if( ! refalrts::ident_term( identifiers[ident_False], context[14] ) )
      continue;
    // closed e.OutName as range 19
    // closed e.Native as range 21
    //DEBUG: e.OutName: 19
    //DEBUG: e.Native: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile$4:1/4 {REMOVED TILE} (/11 # False/14 e.Native/21 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Output/13 AsIs: e.OutName/19 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident(context[13], identifiers[ident_Output]);
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeFile$4:1/4 (/7 # False/13 e.UnitName/5 '.'/19 'r'/18 'a'/17 's'/16 'l'/15 )/8 (/11 s.Result/14 e.UnitName/24 '.'/23 'c'/22 'p'/21 'p'/20 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[13] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::char_right( 'l', context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::char_right( 's', context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::char_right( 'a', context[5], context[6] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::char_right( 'r', context[5], context[6] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::char_right( '.', context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::char_right( 'p', context[9], context[10] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  context[21] = refalrts::char_right( 'p', context[9], context[10] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  context[22] = refalrts::char_right( 'c', context[9], context[10] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::char_right( '.', context[9], context[10] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  // closed e.UnitName as range 5
  if( ! refalrts::repeated_evar_left( vm, context[24], context[25], context[5], context[6], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Result: 14
  //DEBUG: e.UnitName: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AnalyzeFile$4:1/4 {REMOVED TILE} 'r'/18 'a'/17 's'/16 'l'/15 )/8 (/11 s.Result/14 e.UnitName/24 '.'/23 'c'/22 'p'/21 'p'/20 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # NotFound/13 AsIs: e.UnitName/5 HalfReuse: )/19 } Tile{ ]] }
  refalrts::update_ident(context[13], identifiers[ident_NotFound]);
  refalrts::reinit_close_bracket(context[19]);
  refalrts::link_brackets( context[7], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[19] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeFile_S4B1("AnalyzeFile$4:1", COOKIE1_, COOKIE2_, func_gen_AnalyzeFile_S4B1);


static refalrts::FnResult func_AnalyzeFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & AnalyzeFile/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & AnalyzeFile/4 e.FileName/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.FileName as range 5
    //DEBUG: e.FileName: 5
    //5: e.FileName
    //10: e.FileName

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_AnalyzeFile_S1C1]);
    refalrts::copy_evar(vm, context[10], context[11], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </7 & AnalyzeFile$1?1/11 e.UnitName/12 e.Suffix/14 >/8
      context[9] = 0;
      context[10] = 0;
      context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
      context[12] = 0;
      context[13] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[14] = context[9];
        context[15] = context[10];
        // closed e.Suffix as range 14
        //DEBUG: e.FileName: 5
        //DEBUG: e.UnitName: 12
        //DEBUG: e.Suffix: 14
        //5: e.FileName
        //12: e.UnitName
        //14: e.Suffix

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[18], functions[efunc_gen_AnalyzeFile_S1C2]);
        refalrts::alloc_open_bracket(vm, context[19]);
        refalrts::alloc_ident(vm, context[20], identifiers[ident_R5]);
        refalrts::alloc_chars(vm, context[21], context[22], ".ref", 4);
        refalrts::alloc_close_bracket(vm, context[23]);
        refalrts::alloc_open_bracket(vm, context[24]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_SR]);
        refalrts::alloc_chars(vm, context[26], context[27], ".sref", 5);
        refalrts::alloc_close_bracket(vm, context[28]);
        refalrts::alloc_open_bracket(vm, context[29]);
        refalrts::alloc_ident(vm, context[30], identifiers[ident_RSL]);
        refalrts::alloc_chars(vm, context[31], context[32], ".rsl", 4);
        refalrts::alloc_close_bracket(vm, context[33]);
        refalrts::alloc_close_call(vm, context[17]);
        refalrts::push_stack( vm, context[17] );
        refalrts::push_stack( vm, context[16] );
        res = refalrts::splice_elem( res, context[17] );
        refalrts::link_brackets( context[29], context[33] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_elem( res, context[29] );
        refalrts::link_brackets( context[24], context[28] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_elem( res, context[24] );
        refalrts::link_brackets( context[19], context[23] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_elem( res, context[19] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_elem( res, context[16] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </16 & AnalyzeFile$1?2/20 e.Suffixes-B/21 (/27 s.Dialect/31 e.Suffix/29 )/28 e.Suffixes-E/23 >/17
          context[18] = 0;
          context[19] = 0;
          context[20] = refalrts::call_left( context[18], context[19], context[16], context[17] );
          context[21] = 0;
          context[22] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[23] = context[18];
            context[24] = context[19];
            context[25] = 0;
            context[26] = 0;
            context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
            if( ! context[27] )
              continue;
            refalrts::bracket_pointers(context[27], context[28]);
            if( ! refalrts::repeated_evar_right( vm, context[29], context[30], context[14], context[15], context[25], context[26] ) )
              continue;
            // closed e.Suffixes-E as range 23
            if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
              continue;
            if( ! refalrts::empty_seq( context[25], context[26] ) )
              continue;
            //DEBUG: e.FileName: 5
            //DEBUG: e.UnitName: 12
            //DEBUG: e.Suffix: 14
            //DEBUG: e.Suffixes-B: 21
            //DEBUG: e.Suffixes-E: 23
            //DEBUG: s.Dialect: 31

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Suffix/14 {REMOVED TILE} {REMOVED TILE} e.Suffixes-B/21 {REMOVED TILE} {REMOVED TILE} e.Suffix/29 {REMOVED TILE} e.Suffixes-E/23 >/17 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: </16 Reuse: & AnalyzeFile$1:1/20 } Tile{ AsIs: s.Dialect/31 } Tile{ AsIs: (/27 } e.FileName/5/32 Tile{ AsIs: )/28 } Tile{ HalfReuse: (/1 } Tile{ AsIs: e.UnitName/12 } Tile{ HalfReuse: )/8 } Tile{ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName/5 HalfReuse: >/7 HalfReuse: >/11 } Tile{ ]] }
            refalrts::copy_evar(vm, context[32], context[33], context[5], context[6]);
            refalrts::update_name(context[20], functions[efunc_gen_AnalyzeFile_S1B1]);
            refalrts::reinit_open_bracket(context[1]);
            refalrts::reinit_close_bracket(context[8]);
            refalrts::update_name(context[4], functions[efunc_ExistFile]);
            refalrts::reinit_close_call(context[7]);
            refalrts::reinit_close_call(context[11]);
            refalrts::push_stack( vm, context[11] );
            refalrts::push_stack( vm, context[16] );
            refalrts::push_stack( vm, context[7] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[1], context[8] );
            refalrts::link_brackets( context[27], context[28] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[0], context[11] );
            res = refalrts::splice_elem( res, context[8] );
            res = refalrts::splice_evar( res, context[12], context[13] );
            res = refalrts::splice_elem( res, context[1] );
            res = refalrts::splice_elem( res, context[28] );
            res = refalrts::splice_evar( res, context[32], context[33] );
            res = refalrts::splice_elem( res, context[27] );
            res = refalrts::splice_elem( res, context[31] );
            res = refalrts::splice_evar( res, context[16], context[20] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[21], context[22], context[18], context[19] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[16], context[17]);
        continue;
      } while ( refalrts::open_evar_advance( context[12], context[13], context[9], context[10] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[7], context[8]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AnalyzeFile/4 e.FileName/5 '.'/11 'r'/10 'a'/9 's'/8 'l'/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_right( 'l', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 's', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 'a', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( 'r', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_right( '.', context[5], context[6] );
    if( ! context[11] )
      continue;
    // closed e.FileName as range 5
    //DEBUG: e.FileName: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </12 & AnalyzeFile$2:1/13 (/14 e.FileName/5/15 )/17 Tile{ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName/5 AsIs: '.'/11 AsIs: 'r'/10 AsIs: 'a'/9 AsIs: 's'/8 AsIs: 'l'/7 AsIs: >/1 } e.FileName/5/18".rasl"/20 >/22 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_AnalyzeFile_S2B1]);
    refalrts::alloc_open_bracket(vm, context[14]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::copy_evar(vm, context[18], context[19], context[5], context[6]);
    refalrts::alloc_chars(vm, context[20], context[21], ".rasl", 5);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::update_name(context[4], functions[efunc_ExistFile]);
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[14], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[12], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AnalyzeFile/4 e.FileName/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.FileName as range 5
    //DEBUG: e.FileName: 5
    //5: e.FileName

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_AnalyzeFile_S3C1]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_SourceSuffixes]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </7 & AnalyzeFile$3?1/11 e.Suffixes-B/12 (/18 s.Dialect/20 e.Suffix/16 )/19 e.Suffixes-E/14 >/8
      context[9] = 0;
      context[10] = 0;
      context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
      context[12] = 0;
      context[13] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[14] = context[9];
        context[15] = context[10];
        context[16] = 0;
        context[17] = 0;
        context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
        if( ! context[18] )
          continue;
        refalrts::bracket_pointers(context[18], context[19]);
        // closed e.Suffixes-E as range 14
        if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
          continue;
        // closed e.Suffix as range 16
        //DEBUG: e.FileName: 5
        //DEBUG: e.Suffixes-B: 12
        //DEBUG: e.Suffixes-E: 14
        //DEBUG: s.Dialect: 20
        //DEBUG: e.Suffix: 16
        //5: e.FileName
        //12: e.Suffixes-B
        //14: e.Suffixes-E
        //16: e.Suffix
        //20: s.Dialect
        //27: e.FileName
        //30: e.Suffix

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_name(vm, context[23], functions[efunc_gen_AnalyzeFile_S3C2]);
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_gen_ExistFilem_T_Z1]);
        refalrts::alloc_open_bracket(vm, context[26]);
        refalrts::copy_evar(vm, context[27], context[28], context[5], context[6]);
        refalrts::alloc_close_bracket(vm, context[29]);
        refalrts::copy_evar(vm, context[30], context[31], context[16], context[17]);
        refalrts::alloc_close_call(vm, context[32]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[21] );
        res = refalrts::splice_elem( res, context[22] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[24] );
        res = refalrts::splice_elem( res, context[32] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        refalrts::link_brackets( context[26], context[29] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_elem( res, context[21] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </21 & AnalyzeFile$3?2/25 # True/26 e.SourceName/23 >/22
          context[23] = 0;
          context[24] = 0;
          context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
          context[26] = refalrts::ident_left( identifiers[ident_True], context[23], context[24] );
          if( ! context[26] )
            continue;
          // closed e.SourceName as range 23
          //DEBUG: e.FileName: 5
          //DEBUG: e.Suffixes-B: 12
          //DEBUG: e.Suffixes-E: 14
          //DEBUG: s.Dialect: 20
          //DEBUG: e.Suffix: 16
          //DEBUG: e.SourceName: 23

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Suffixes-B/12 (/18 s.Dialect/20 e.Suffix/16 {REMOVED TILE} e.Suffixes-E/14 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 HalfReuse: # Source/21 HalfReuse: (/25 HalfReuse: s.Dialect20 /26 AsIs: e.SourceName/23 HalfReuse: )/22 } Tile{ AsIs: e.FileName/5 } Tile{ HalfReuse: '.'/7 HalfReuse: 'r'/11 } Tile{ HalfReuse: 'a'/0 HalfReuse: 's'/4 } Tile{ HalfReuse: 'l'/19 } Tile{ HalfReuse: )/1 ]] }
          refalrts::reinit_open_bracket(context[8]);
          refalrts::reinit_ident(context[21], identifiers[ident_Source]);
          refalrts::reinit_open_bracket(context[25]);
          refalrts::reinit_svar( context[26], context[20] );
          refalrts::reinit_close_bracket(context[22]);
          refalrts::reinit_char(context[7], '.');
          refalrts::reinit_char(context[11], 'r');
          refalrts::reinit_char(context[0], 'a');
          refalrts::reinit_char(context[4], 's');
          refalrts::reinit_char(context[19], 'l');
          refalrts::reinit_close_bracket(context[1]);
          refalrts::link_brackets( context[8], context[1] );
          refalrts::link_brackets( context[25], context[22] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_elem( res, context[19] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[7], context[11] );
          res = refalrts::splice_evar( res, context[5], context[6] );
          res = refalrts::splice_evar( res, context[8], context[22] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[21], context[22]);
        continue;
      } while ( refalrts::open_evar_advance( context[12], context[13], context[9], context[10] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[7], context[8]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeFile/4 e.FileName/2 >/1
  // closed e.FileName as range 2
  //DEBUG: e.FileName: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & AnalyzeFile$4:1/6 (/7 Tile{ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName/2 HalfReuse: '.'/1 }"rasl"/8 >/10 e.FileName/2/11".rasl"/13 )/15 (/16 </17 & ExistFile/18 e.FileName/2/19".cpp"/21 >/23 e.FileName/2/24".cpp"/26 )/28 >/29 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_AnalyzeFile_S4B1]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_chars(vm, context[8], context[9], "rasl", 4);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::copy_evar(vm, context[11], context[12], context[2], context[3]);
  refalrts::alloc_chars(vm, context[13], context[14], ".rasl", 5);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_ExistFile]);
  refalrts::copy_evar(vm, context[19], context[20], context[2], context[3]);
  refalrts::alloc_chars(vm, context[21], context[22], ".cpp", 4);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::copy_evar(vm, context[24], context[25], context[2], context[3]);
  refalrts::alloc_chars(vm, context[26], context[27], ".cpp", 4);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_ExistFile]);
  refalrts::reinit_char(context[1], '.');
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[16], context[28] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[7], context[15] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[29] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AnalyzeFile("AnalyzeFile", COOKIE1_, COOKIE2_, func_AnalyzeFile);


static refalrts::FnResult func_gen_FindInclude_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & FindInclude:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & FindInclude:1/4 e.Variants-B/7 (/13 # Success/15 s.Dialect/16 e.FullPath/11 )/14 e.Variants-E/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Success], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Variants-E as range 9
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.FullPath as range 11
      //DEBUG: e.Variants-B: 7
      //DEBUG: e.Variants-E: 9
      //DEBUG: s.Dialect: 16
      //DEBUG: e.FullPath: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FindInclude:1/4 e.Variants-B/7 (/13 {REMOVED TILE} {REMOVED TILE} )/14 e.Variants-E/9 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: # Success/15 AsIs: s.Dialect/16 } Tile{ AsIs: e.FullPath/11 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindInclude:1/4 e.Variants/2 >/1
  // closed e.Variants as range 2
  //DEBUG: e.Variants: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindInclude:1/4 e.Variants/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Fails]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInclude_B1("FindInclude:1", COOKIE1_, COOKIE2_, func_gen_FindInclude_B1);


static refalrts::FnResult func_gen_FindInclude_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & FindInclude\1/4 (/7 e.FileName/5 )/8 (/11 e.Folder/9 )/12 >/1
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
  // closed e.FileName as range 5
  // closed e.Folder as range 9
  //DEBUG: e.FileName: 5
  //DEBUG: e.Folder: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </12 HalfReuse: & AnalyzeInclude/1 } Tile{ AsIs: e.Folder/9 } Tile{ AsIs: </0 Reuse: & DirectorySeparator/4 HalfReuse: >/7 AsIs: e.FileName/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[1], functions[efunc_AnalyzeInclude]);
  refalrts::update_name(context[4], functions[efunc_DirectorySeparator]);
  refalrts::reinit_close_call(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInclude_L1("FindInclude\\1", COOKIE1_, COOKIE2_, func_gen_FindInclude_L1);


static refalrts::FnResult func_FindInclude(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & FindInclude/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindInclude/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & FindInclude/4 (/7 e.new5/9 )/8 e.new3/11 s.new4/17 'r'/16 'e'/15 'f'/14 'i'/13 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_right( 'i', context[11], context[12] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_right( 'f', context[11], context[12] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_right( 'e', context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = refalrts::char_right( 'r', context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.new5 as range 9
    if( ! refalrts::svar_right( context[17], context[11], context[12] ) )
      continue;
    // closed e.new3 as range 11
    do {
      // </0 & FindInclude/4 (/7 e.Folders/18 )/8 e.3/20 '.'/17 'r'/16 'e'/15 'f'/14 'i'/13 >/1
      context[18] = context[9];
      context[19] = context[10];
      context[20] = context[11];
      context[21] = context[12];
      if( ! refalrts::char_term( '.', context[17] ) )
        continue;
      // closed e.Folders as range 18
      // closed e.3 as range 20
      //DEBUG: e.Folders: 18
      //DEBUG: e.3: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindInclude:1/4 HalfReuse: </7 } & AnalyzeInclude$1:1/22 </23 Tile{ HalfReuse: & ExistFile/8 AsIs: e.3/20 AsIs: '.'/17 AsIs: 'r'/16 AsIs: 'e'/15 AsIs: 'f'/14 AsIs: 'i'/13 AsIs: >/1 } e.3/20/24".refi"/26 >/28 </29 & Map/30 [*]/31 & FindInclude\1@1/32 (/33 e.3/20/34 )/36 {*}/37 </38 & ExpandREF5RSL/39 Tile{ AsIs: e.Folders/18 } >/40 >/41 >/42 Tile{ ]] }
      refalrts::alloc_name(vm, context[22], functions[efunc_gen_AnalyzeInclude_S1B1]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::copy_evar(vm, context[24], context[25], context[20], context[21]);
      refalrts::alloc_chars(vm, context[26], context[27], ".refi", 5);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_Map]);
      refalrts::alloc_closure_head(vm, context[31]);
      refalrts::alloc_name(vm, context[32], functions[efunc_gen_FindInclude_L1Z1]);
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::copy_evar(vm, context[34], context[35], context[20], context[21]);
      refalrts::alloc_close_bracket(vm, context[36]);
      refalrts::alloc_unwrapped_closure(vm, context[37], context[31]);
      refalrts::alloc_open_call(vm, context[38]);
      refalrts::alloc_name(vm, context[39], functions[efunc_ExpandREF5RSL]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::alloc_close_call(vm, context[41]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::update_name(context[4], functions[efunc_gen_FindInclude_B1]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[8], functions[efunc_ExistFile]);
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[38] );
      refalrts::link_brackets( context[33], context[36] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[40], context[42] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[26], context[39] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[8], context[1] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::use( res );
      refalrts::wrap_closure( context[37] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindInclude/4 (/7 e.Folders/18 )/8 e.4/20 '.'/22 's'/17 'r'/16 'e'/15 'f'/14 'i'/13 >/1
    context[18] = context[9];
    context[19] = context[10];
    context[20] = context[11];
    context[21] = context[12];
    if( ! refalrts::char_term( 's', context[17] ) )
      continue;
    context[22] = refalrts::char_right( '.', context[20], context[21] );
    if( ! context[22] )
      continue;
    // closed e.Folders as range 18
    // closed e.4 as range 20
    //DEBUG: e.Folders: 18
    //DEBUG: e.4: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindInclude:1/4 HalfReuse: </7 } & AnalyzeInclude$2:1/23 </24 Tile{ HalfReuse: & ExistFile/8 AsIs: e.4/20 AsIs: '.'/22 AsIs: 's'/17 AsIs: 'r'/16 AsIs: 'e'/15 AsIs: 'f'/14 AsIs: 'i'/13 AsIs: >/1 } e.4/20/25".srefi"/27 >/29 </30 & Map/31 [*]/32 & FindInclude\1@2/33 (/34 e.4/20/35 )/37 {*}/38 </39 & ExpandREF5RSL/40 Tile{ AsIs: e.Folders/18 } >/41 >/42 >/43 Tile{ ]] }
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_AnalyzeInclude_S2B1]);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::copy_evar(vm, context[25], context[26], context[20], context[21]);
    refalrts::alloc_chars(vm, context[27], context[28], ".srefi", 6);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_Map]);
    refalrts::alloc_closure_head(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_gen_FindInclude_L1Z2]);
    refalrts::alloc_open_bracket(vm, context[34]);
    refalrts::copy_evar(vm, context[35], context[36], context[20], context[21]);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::alloc_unwrapped_closure(vm, context[38], context[32]);
    refalrts::alloc_open_call(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_ExpandREF5RSL]);
    refalrts::alloc_close_call(vm, context[41]);
    refalrts::alloc_close_call(vm, context[42]);
    refalrts::alloc_close_call(vm, context[43]);
    refalrts::update_name(context[4], functions[efunc_gen_FindInclude_B1]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[8], functions[efunc_ExistFile]);
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[42] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[39] );
    refalrts::link_brackets( context[34], context[37] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[41], context[43] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[27], context[40] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::use( res );
    refalrts::wrap_closure( context[38] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindInclude/4 (/7 e.Folders/5 )/8 e.FileName/2 >/1
  // closed e.Folders as range 5
  // closed e.FileName as range 2
  //DEBUG: e.Folders: 5
  //DEBUG: e.FileName: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindInclude:1/4 HalfReuse: </7 } & AnalyzeInclude$3:1/9 (/10 </11 & ExistFile/12 e.FileName/2/13".refi"/15 >/17 Tile{ AsIs: e.FileName/2 }".refi"/18 Tile{ AsIs: )/8 } (/20 </21 & ExistFile/22 e.FileName/2/23".srefi"/25 >/27 e.FileName/2/28".srefi"/30 )/32 >/33 </34 & Map/35 [*]/36 & FindInclude\1/37 (/38 e.FileName/2/39 )/41 {*}/42 </43 & ExpandREF5RSL/44 Tile{ AsIs: e.Folders/5 } >/45 >/46 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_AnalyzeInclude_S3B1]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_ExistFile]);
  refalrts::copy_evar(vm, context[13], context[14], context[2], context[3]);
  refalrts::alloc_chars(vm, context[15], context[16], ".refi", 5);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_chars(vm, context[18], context[19], ".refi", 5);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_ExistFile]);
  refalrts::copy_evar(vm, context[23], context[24], context[2], context[3]);
  refalrts::alloc_chars(vm, context[25], context[26], ".srefi", 6);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::copy_evar(vm, context[28], context[29], context[2], context[3]);
  refalrts::alloc_chars(vm, context[30], context[31], ".srefi", 6);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::alloc_open_call(vm, context[34]);
  refalrts::alloc_name(vm, context[35], functions[efunc_Map]);
  refalrts::alloc_closure_head(vm, context[36]);
  refalrts::alloc_name(vm, context[37], functions[efunc_gen_FindInclude_L1]);
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::copy_evar(vm, context[39], context[40], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[41]);
  refalrts::alloc_unwrapped_closure(vm, context[42], context[36]);
  refalrts::alloc_open_call(vm, context[43]);
  refalrts::alloc_name(vm, context[44], functions[efunc_ExpandREF5RSL]);
  refalrts::alloc_close_call(vm, context[45]);
  refalrts::alloc_close_call(vm, context[46]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInclude_B1]);
  refalrts::reinit_open_call(context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[46] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[45] );
  refalrts::push_stack( vm, context[43] );
  refalrts::link_brackets( context[38], context[41] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[20], context[32] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[10], context[8] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[45], context[46] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[20], context[44] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[42] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindInclude("FindInclude", 0U, 0U, func_FindInclude);


static refalrts::FnResult func_gen_AnalyzeInclude_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & AnalyzeInclude$1:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & AnalyzeInclude$1:1/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & AnalyzeInclude$1:1/4 # True/5 e.FullPath/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_True], context[5] ) )
      continue;
    // closed e.FullPath as range 6
    //DEBUG: e.FullPath: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Success/4 Reuse: # R5/5 AsIs: e.FullPath/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::update_ident(context[5], identifiers[ident_R5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeInclude$1:1/4 # False/5 e.FullPath/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FullPath as range 2
  //DEBUG: e.FullPath: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.FullPath/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Fails/4 HalfReuse: )/5 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Fails]);
  refalrts::reinit_close_bracket(context[5]);
  refalrts::link_brackets( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeInclude_S1B1("AnalyzeInclude$1:1", COOKIE1_, COOKIE2_, func_gen_AnalyzeInclude_S1B1);


static refalrts::FnResult func_gen_AnalyzeInclude_S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & AnalyzeInclude$2:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & AnalyzeInclude$2:1/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & AnalyzeInclude$2:1/4 # True/5 e.FullPath/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_True], context[5] ) )
      continue;
    // closed e.FullPath as range 6
    //DEBUG: e.FullPath: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Success/4 Reuse: # SR/5 AsIs: e.FullPath/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::update_ident(context[5], identifiers[ident_SR]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeInclude$2:1/4 # False/5 e.FullPath/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FullPath as range 2
  //DEBUG: e.FullPath: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.FullPath/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Fails/4 HalfReuse: )/5 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Fails]);
  refalrts::reinit_close_bracket(context[5]);
  refalrts::link_brackets( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeInclude_S2B1("AnalyzeInclude$2:1", COOKIE1_, COOKIE2_, func_gen_AnalyzeInclude_S2B1);


static refalrts::FnResult func_gen_AnalyzeInclude_S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & AnalyzeInclude$3:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & AnalyzeInclude$3:1/4 (/7 s.new1/13 e.new2/5 )/8 (/11 s.new3/14 e.new4/9 )/12 >/1
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
  // closed e.new2 as range 5
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new4 as range 9
  do {
    // </0 & AnalyzeInclude$3:1/4 (/7 # True/13 e.R5-FullPath/15 )/8 (/11 s.ResSR/14 e.SR-FullPath/17 )/12 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_True], context[13] ) )
      continue;
    // closed e.R5-FullPath as range 15
    // closed e.SR-FullPath as range 17
    //DEBUG: s.ResSR: 14
    //DEBUG: e.R5-FullPath: 15
    //DEBUG: e.SR-FullPath: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 s.ResSR/14 e.SR-FullPath/17 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Success/7 Reuse: # R5/13 AsIs: e.R5-FullPath/15 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_Success]);
    refalrts::update_ident(context[13], identifiers[ident_R5]);
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeInclude$3:1/4 (/7 # False/13 e.new5/5 )/8 (/11 s.new6/14 e.new7/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new5 as range 5
  // closed e.new7 as range 9
  do {
    // </0 & AnalyzeInclude$3:1/4 (/7 # False/13 e.R5-FullPath/15 )/8 (/11 # True/14 e.SR-FullPath/17 )/12 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_True], context[14] ) )
      continue;
    // closed e.R5-FullPath as range 15
    // closed e.SR-FullPath as range 17
    //DEBUG: e.R5-FullPath: 15
    //DEBUG: e.SR-FullPath: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AnalyzeInclude$3:1/4 (/7 # False/13 e.R5-FullPath/15 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 HalfReuse: # Success/11 Reuse: # SR/14 AsIs: e.SR-FullPath/17 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_ident(context[11], identifiers[ident_Success]);
    refalrts::update_ident(context[14], identifiers[ident_SR]);
    refalrts::link_brackets( context[8], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeInclude$3:1/4 (/7 # False/13 e.R5-FullPath/5 )/8 (/11 # False/14 e.SR-FullPath/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.R5-FullPath as range 5
  // closed e.SR-FullPath as range 9
  //DEBUG: e.R5-FullPath: 5
  //DEBUG: e.SR-FullPath: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} # False/13 e.R5-FullPath/5 )/8 (/11 # False/14 e.SR-FullPath/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Fails/4 HalfReuse: )/7 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Fails]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeInclude_S3B1("AnalyzeInclude$3:1", COOKIE1_, COOKIE2_, func_gen_AnalyzeInclude_S3B1);


static refalrts::FnResult func_AnalyzeInclude(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & AnalyzeInclude/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & AnalyzeInclude/4 e.new1/5 s.new2/11 'r'/10 'e'/9 'f'/8 'i'/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_right( 'i', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 'f', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 'e', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( 'r', context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    // closed e.new1 as range 5
    do {
      // </0 & AnalyzeInclude/4 e.FileName/12 '.'/11 'r'/10 'e'/9 'f'/8 'i'/7 >/1
      context[12] = context[5];
      context[13] = context[6];
      if( ! refalrts::char_term( '.', context[11] ) )
        continue;
      // closed e.FileName as range 12
      //DEBUG: e.FileName: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </14 & AnalyzeInclude$1:1/15 Tile{ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName/12 AsIs: '.'/11 AsIs: 'r'/10 AsIs: 'e'/9 AsIs: 'f'/8 AsIs: 'i'/7 AsIs: >/1 } e.FileName/12/16".refi"/18 >/20 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[15], functions[efunc_gen_AnalyzeInclude_S1B1]);
      refalrts::copy_evar(vm, context[16], context[17], context[12], context[13]);
      refalrts::alloc_chars(vm, context[18], context[19], ".refi", 5);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::update_name(context[4], functions[efunc_ExistFile]);
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[20] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AnalyzeInclude/4 e.FileName/12 '.'/14 's'/11 'r'/10 'e'/9 'f'/8 'i'/7 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::char_term( 's', context[11] ) )
      continue;
    context[14] = refalrts::char_right( '.', context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.FileName as range 12
    //DEBUG: e.FileName: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & AnalyzeInclude$2:1/16 Tile{ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName/12 AsIs: '.'/14 AsIs: 's'/11 AsIs: 'r'/10 AsIs: 'e'/9 AsIs: 'f'/8 AsIs: 'i'/7 AsIs: >/1 } e.FileName/12/17".srefi"/19 >/21 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_AnalyzeInclude_S2B1]);
    refalrts::copy_evar(vm, context[17], context[18], context[12], context[13]);
    refalrts::alloc_chars(vm, context[19], context[20], ".srefi", 6);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_ExistFile]);
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeInclude/4 e.FileName/2 >/1
  // closed e.FileName as range 2
  //DEBUG: e.FileName: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & AnalyzeInclude$3:1/6 (/7 Tile{ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName/2 HalfReuse: '.'/1 }"refi"/8 >/10 e.FileName/2/11".refi"/13 )/15 (/16 </17 & ExistFile/18 e.FileName/2/19".srefi"/21 >/23 e.FileName/2/24".srefi"/26 )/28 >/29 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_AnalyzeInclude_S3B1]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_chars(vm, context[8], context[9], "refi", 4);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::copy_evar(vm, context[11], context[12], context[2], context[3]);
  refalrts::alloc_chars(vm, context[13], context[14], ".refi", 5);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_ExistFile]);
  refalrts::copy_evar(vm, context[19], context[20], context[2], context[3]);
  refalrts::alloc_chars(vm, context[21], context[22], ".srefi", 6);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::copy_evar(vm, context[24], context[25], context[2], context[3]);
  refalrts::alloc_chars(vm, context[26], context[27], ".srefi", 6);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_ExistFile]);
  refalrts::reinit_char(context[1], '.');
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[16], context[28] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[7], context[15] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[29] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AnalyzeInclude("AnalyzeInclude", COOKIE1_, COOKIE2_, func_AnalyzeInclude);


static refalrts::FnResult func_gen_FindFiles_L1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & FindFiles\1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindFiles\1@1/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & FindFiles\1@1/4 (/7 e.Folders0/9 )/8 (/15 e.FileName/13 )/16 >/1
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
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.Folders0 as range 9
    // closed e.FileName as range 13
    //DEBUG: e.Folders0: 9
    //DEBUG: e.FileName: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & AnalyzeFile-CheckNotFound/8 AsIs: (/15 AsIs: e.FileName/13 AsIs: )/16 HalfReuse: </1 } & AnalyzeFile/17"exe"/18 </20 & DirectorySeparator/21 >/22 e.FileName/13/23 >/25 </26 & AnalyzeFile/27 e.FileName/13/28 >/30 </31 & Map/32 [*]/33 Tile{ Reuse: & FindFiles\1\1@1/4 AsIs: (/7 } e.FileName/13/34 )/36 {*}/37 </38 & ExpandREF5RSL/39 Tile{ AsIs: e.Folders0/9 } >/40 >/41 >/42 Tile{ ]] }
    refalrts::alloc_name(vm, context[17], functions[efunc_AnalyzeFile]);
    refalrts::alloc_chars(vm, context[18], context[19], "exe", 3);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_DirectorySeparator]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::copy_evar(vm, context[23], context[24], context[13], context[14]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_AnalyzeFile]);
    refalrts::copy_evar(vm, context[28], context[29], context[13], context[14]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_Map]);
    refalrts::alloc_closure_head(vm, context[33]);
    refalrts::copy_evar(vm, context[34], context[35], context[13], context[14]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_unwrapped_closure(vm, context[37], context[33]);
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_ExpandREF5RSL]);
    refalrts::alloc_close_call(vm, context[40]);
    refalrts::alloc_close_call(vm, context[41]);
    refalrts::alloc_close_call(vm, context[42]);
    refalrts::reinit_name(context[8], functions[efunc_AnalyzeFilem_CheckNotFound]);
    refalrts::reinit_open_call(context[1]);
    refalrts::update_name(context[4], functions[efunc_gen_FindFiles_L1L1Z1]);
    refalrts::push_stack( vm, context[42] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[40] );
    refalrts::push_stack( vm, context[38] );
    refalrts::link_brackets( context[7], context[36] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[40], context[42] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[36], context[39] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[17], context[33] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    refalrts::use( res );
    refalrts::wrap_closure( context[37] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindFiles\1@1/4 (/7 e.Folders0/5 )/8 e.dyn/2 >/1
  // closed e.Folders0 as range 5
  // closed e.dyn as range 2
  //DEBUG: e.Folders0: 5
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & FindFiles\1@0/10 (/11"ex"/12 Tile{ HalfReuse: 'e'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Folders0/5 AsIs: )/8 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_FindFiles_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "ex", 2);
  refalrts::reinit_char(context[0], 'e');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFiles_L1Z1("FindFiles\\1@1", COOKIE1_, COOKIE2_, func_gen_FindFiles_L1Z1);


static refalrts::FnResult func_gen_FindFiles_L1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & FindFiles\1@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindFiles\1@2/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & FindFiles\1@2/4 (/7 e.Folders0/9 )/8 (/15 e.FileName/13 )/16 >/1
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
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.Folders0 as range 9
    // closed e.FileName as range 13
    //DEBUG: e.Folders0: 9
    //DEBUG: e.FileName: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & AnalyzeFile-CheckNotFound/8 AsIs: (/15 AsIs: e.FileName/13 AsIs: )/16 HalfReuse: </1 } & AnalyzeFile/17"lib"/18 </20 & DirectorySeparator/21 >/22 e.FileName/13/23 >/25 </26 & AnalyzeFile/27 e.FileName/13/28 >/30 </31 & Map/32 [*]/33 Tile{ Reuse: & FindFiles\1\1@2/4 AsIs: (/7 } e.FileName/13/34 )/36 {*}/37 </38 & ExpandREF5RSL/39 Tile{ AsIs: e.Folders0/9 } >/40 >/41 >/42 Tile{ ]] }
    refalrts::alloc_name(vm, context[17], functions[efunc_AnalyzeFile]);
    refalrts::alloc_chars(vm, context[18], context[19], "lib", 3);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_DirectorySeparator]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::copy_evar(vm, context[23], context[24], context[13], context[14]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_AnalyzeFile]);
    refalrts::copy_evar(vm, context[28], context[29], context[13], context[14]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_Map]);
    refalrts::alloc_closure_head(vm, context[33]);
    refalrts::copy_evar(vm, context[34], context[35], context[13], context[14]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_unwrapped_closure(vm, context[37], context[33]);
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_ExpandREF5RSL]);
    refalrts::alloc_close_call(vm, context[40]);
    refalrts::alloc_close_call(vm, context[41]);
    refalrts::alloc_close_call(vm, context[42]);
    refalrts::reinit_name(context[8], functions[efunc_AnalyzeFilem_CheckNotFound]);
    refalrts::reinit_open_call(context[1]);
    refalrts::update_name(context[4], functions[efunc_gen_FindFiles_L1L1Z2]);
    refalrts::push_stack( vm, context[42] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[40] );
    refalrts::push_stack( vm, context[38] );
    refalrts::link_brackets( context[7], context[36] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[40], context[42] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[36], context[39] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[17], context[33] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    refalrts::use( res );
    refalrts::wrap_closure( context[37] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindFiles\1@2/4 (/7 e.Folders0/5 )/8 e.dyn/2 >/1
  // closed e.Folders0 as range 5
  // closed e.dyn as range 2
  //DEBUG: e.Folders0: 5
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & FindFiles\1@0/10 (/11"li"/12 Tile{ HalfReuse: 'b'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Folders0/5 AsIs: )/8 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_FindFiles_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "li", 2);
  refalrts::reinit_char(context[0], 'b');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFiles_L1Z2("FindFiles\\1@2", COOKIE1_, COOKIE2_, func_gen_FindFiles_L1Z2);


static refalrts::FnResult func_gen_ExistFilem_T_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExistFile-T@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ExistFile-T@1/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & ExistFile-T@1/4 (/7 e.FileName0/9 )/8 e.Suffix/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.FileName0 as range 9
    // closed e.Suffix as range 11
    //DEBUG: e.FileName0: 9
    //DEBUG: e.Suffix: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExistFile/4 } Tile{ AsIs: e.FileName0/9 } Tile{ AsIs: e.Suffix/11 } Tile{ AsIs: >/1 } e.FileName0/9/13 e.Suffix/11/15 Tile{ ]] }
    refalrts::copy_evar(vm, context[13], context[14], context[9], context[10]);
    refalrts::copy_evar(vm, context[15], context[16], context[11], context[12]);
    refalrts::update_name(context[4], functions[efunc_ExistFile]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExistFile-T@1/4 (/7 e.FileName0/5 )/8 e.Suffix/2 >/1
  // closed e.FileName0 as range 5
  // closed e.Suffix as range 2
  //DEBUG: e.FileName0: 5
  //DEBUG: e.Suffix: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExistFile-T@0/4 } Tile{ AsIs: e.FileName0/5 } Tile{ AsIs: e.Suffix/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_ExistFilem_T_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExistFilem_T_Z1("ExistFile-T@1", COOKIE1_, COOKIE2_, func_gen_ExistFilem_T_Z1);


static refalrts::FnResult func_gen_FindInclude_L1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & FindInclude\1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindInclude\1@1/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & FindInclude\1@1/4 (/7 e.3/9 )/8 (/15 e.Folder/13 )/16 >/1
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
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.3 as range 9
    // closed e.Folder as range 13
    //DEBUG: e.3: 9
    //DEBUG: e.Folder: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & AnalyzeInclude/18 Tile{ AsIs: e.Folder/13 } Tile{ AsIs: </0 Reuse: & DirectorySeparator/4 HalfReuse: >/7 AsIs: e.3/9 HalfReuse: '.'/8 HalfReuse: 'r'/15 }"ef"/19 Tile{ HalfReuse: 'i'/16 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_AnalyzeInclude]);
    refalrts::alloc_chars(vm, context[19], context[20], "ef", 2);
    refalrts::update_name(context[4], functions[efunc_DirectorySeparator]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_char(context[8], '.');
    refalrts::reinit_char(context[15], 'r');
    refalrts::reinit_char(context[16], 'i');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[15] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindInclude\1@1/4 (/7 e.3/5 )/8 e.dyn/2 >/1
  // closed e.3 as range 5
  // closed e.dyn as range 2
  //DEBUG: e.3: 5
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindInclude\1@0/4 AsIs: (/7 AsIs: e.3/5 HalfReuse: '.'/8 }"refi"/9 )/11 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "refi", 4);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInclude_L1Z0]);
  refalrts::reinit_char(context[8], '.');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInclude_L1Z1("FindInclude\\1@1", COOKIE1_, COOKIE2_, func_gen_FindInclude_L1Z1);


static refalrts::FnResult func_gen_FindInclude_L1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & FindInclude\1@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindInclude\1@2/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & FindInclude\1@2/4 (/7 e.4/9 )/8 (/15 e.Folder/13 )/16 >/1
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
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.4 as range 9
    // closed e.Folder as range 13
    //DEBUG: e.4: 9
    //DEBUG: e.Folder: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & AnalyzeInclude/18 Tile{ AsIs: e.Folder/13 } Tile{ AsIs: </0 Reuse: & DirectorySeparator/4 HalfReuse: >/7 AsIs: e.4/9 HalfReuse: '.'/8 HalfReuse: 's'/15 }"ref"/19 Tile{ HalfReuse: 'i'/16 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_AnalyzeInclude]);
    refalrts::alloc_chars(vm, context[19], context[20], "ref", 3);
    refalrts::update_name(context[4], functions[efunc_DirectorySeparator]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_char(context[8], '.');
    refalrts::reinit_char(context[15], 's');
    refalrts::reinit_char(context[16], 'i');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[15] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindInclude\1@2/4 (/7 e.4/5 )/8 e.dyn/2 >/1
  // closed e.4 as range 5
  // closed e.dyn as range 2
  //DEBUG: e.4: 5
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindInclude\1@0/4 AsIs: (/7 AsIs: e.4/5 HalfReuse: '.'/8 }"srefi"/9 )/11 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "srefi", 5);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInclude_L1Z0]);
  refalrts::reinit_char(context[8], '.');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInclude_L1Z2("FindInclude\\1@2", COOKIE1_, COOKIE2_, func_gen_FindInclude_L1Z2);


static refalrts::FnResult func_gen_FindFiles_L1L1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & FindFiles\1\1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindFiles\1\1@1/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & FindFiles\1\1@1/4 (/7 e.FileName0/9 )/8 (/15 e.Folder/13 )/16 >/1
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
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.FileName0 as range 9
    // closed e.Folder as range 13
    //DEBUG: e.FileName0: 9
    //DEBUG: e.Folder: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & AnalyzeFile/18 Tile{ AsIs: e.Folder/13 } </19 & DirectorySeparator/20 Tile{ HalfReuse: >/16 }"exe"/21 Tile{ AsIs: </0 Reuse: & DirectorySeparator/4 HalfReuse: >/7 AsIs: e.FileName0/9 HalfReuse: >/8 HalfReuse: </15 } & AnalyzeFile/23 e.Folder/13/24 </26 & DirectorySeparator/27 >/28 e.FileName0/9/29 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_AnalyzeFile]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_DirectorySeparator]);
    refalrts::alloc_chars(vm, context[21], context[22], "exe", 3);
    refalrts::alloc_name(vm, context[23], functions[efunc_AnalyzeFile]);
    refalrts::copy_evar(vm, context[24], context[25], context[13], context[14]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_DirectorySeparator]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::copy_evar(vm, context[29], context[30], context[9], context[10]);
    refalrts::reinit_close_call(context[16]);
    refalrts::update_name(context[4], functions[efunc_DirectorySeparator]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_open_call(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[23], context[28] );
    res = refalrts::splice_evar( res, context[0], context[15] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindFiles\1\1@1/4 (/7 e.FileName0/5 )/8 e.dyn/2 >/1
  // closed e.FileName0 as range 5
  // closed e.dyn as range 2
  //DEBUG: e.FileName0: 5
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & FindFiles\1\1@0/10 (/11"ex"/12 Tile{ HalfReuse: 'e'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.FileName0/5 AsIs: )/8 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_FindFiles_L1L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "ex", 2);
  refalrts::reinit_char(context[0], 'e');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFiles_L1L1Z1("FindFiles\\1\\1@1", COOKIE1_, COOKIE2_, func_gen_FindFiles_L1L1Z1);


static refalrts::FnResult func_gen_FindFiles_L1L1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & FindFiles\1\1@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindFiles\1\1@2/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & FindFiles\1\1@2/4 (/7 e.FileName0/9 )/8 (/15 e.Folder/13 )/16 >/1
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
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.FileName0 as range 9
    // closed e.Folder as range 13
    //DEBUG: e.FileName0: 9
    //DEBUG: e.Folder: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & AnalyzeFile/18 Tile{ AsIs: e.Folder/13 } </19 & DirectorySeparator/20 Tile{ HalfReuse: >/16 }"lib"/21 Tile{ AsIs: </0 Reuse: & DirectorySeparator/4 HalfReuse: >/7 AsIs: e.FileName0/9 HalfReuse: >/8 HalfReuse: </15 } & AnalyzeFile/23 e.Folder/13/24 </26 & DirectorySeparator/27 >/28 e.FileName0/9/29 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_AnalyzeFile]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_DirectorySeparator]);
    refalrts::alloc_chars(vm, context[21], context[22], "lib", 3);
    refalrts::alloc_name(vm, context[23], functions[efunc_AnalyzeFile]);
    refalrts::copy_evar(vm, context[24], context[25], context[13], context[14]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_DirectorySeparator]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::copy_evar(vm, context[29], context[30], context[9], context[10]);
    refalrts::reinit_close_call(context[16]);
    refalrts::update_name(context[4], functions[efunc_DirectorySeparator]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_open_call(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[23], context[28] );
    res = refalrts::splice_evar( res, context[0], context[15] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindFiles\1\1@2/4 (/7 e.FileName0/5 )/8 e.dyn/2 >/1
  // closed e.FileName0 as range 5
  // closed e.dyn as range 2
  //DEBUG: e.FileName0: 5
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & FindFiles\1\1@0/10 (/11"li"/12 Tile{ HalfReuse: 'b'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.FileName0/5 AsIs: )/8 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_FindFiles_L1L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "li", 2);
  refalrts::reinit_char(context[0], 'b');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFiles_L1L1Z2("FindFiles\\1\\1@2", COOKIE1_, COOKIE2_, func_gen_FindFiles_L1L1Z2);


//End of file
