// This file automatically generated from 'ParseCmdLine.ref'
// Don't edit! Edit 'ParseCmdLine.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_636557647_1305345239
#define COOKIE1_ 636557647U
#define COOKIE2_ 1305345239U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Configm_Create = 3,
  efunc_gen_Update_B1 = 4,
  efunc_Configm_SetCppCompilerExe = 5,
  efunc_Configm_SetCppCompilerLib = 6,
  efunc_Configm_SetPrefix = 7,
  efunc_Configm_AddReference = 8,
  efunc_Configm_AddFolder = 9,
  efunc_Configm_SetRLCompiler = 10,
  efunc_Configm_AddRLCompilerFlag = 11,
  efunc_Configm_SetTargetFileName = 12,
  efunc_Configm_SetTargetMode = 13,
  efunc_Configm_SetPrelude = 14,
  efunc_Configm_AddRuntimeFile = 15,
  efunc_Configm_AddIncorporated = 16,
  efunc_Configm_SetSourceFile = 17,
  efunc_Prout = 18,
  efunc_PrintVersion = 19,
  efunc_Configm_SetKeepRasls = 20,
  efunc_Configm_SetTempDir = 21,
  efunc_Configm_SetOverwriteExistRasls = 22,
  efunc_Configm_SetCppCompilerExeSuf = 23,
  efunc_Configm_SetCppCompilerLibSuf = 24,
  efunc_Map = 25,
  efunc_gen_ParseCommandLine_L3S2L1 = 26,
  efunc_GetOpt = 27,
  efunc_Pipe = 28,
  efunc_CheckRequiredOptions = 29,
  efunc_gen_ParseCommandLine_L1 = 30,
  efunc_MapAccum = 31,
  efunc_gen_ParseCommandLine_L2 = 32,
  efunc_gen_ParseCommandLine_L3 = 33,
  efunc_Fetch = 34,
  efunc_Mu = 35,
  efunc_Up = 36,
  efunc_Evm_met = 37,
  efunc_Residue = 38,
  efunc_u_u_Metau_Residue = 39,
  efunc_ParseCommandLine = 40,
  efunc_Update = 41,
  efunc_PrintHelp = 42,
};


enum ident {
  ident_CppCompilerExe = 0,
  ident_CppCompilerLib = 1,
  ident_Prefix = 2,
  ident_Reference = 3,
  ident_RuntimeFolder = 4,
  ident_Runtime = 5,
  ident_SearchFolder = 6,
  ident_Search = 7,
  ident_RLCompiler = 8,
  ident_RLCompilerOption = 9,
  ident_TargetFileName = 10,
  ident_TargetModem_Exe = 11,
  ident_EXE = 12,
  ident_TargetModem_Lib = 13,
  ident_LIB = 14,
  ident_TargetModem_R = 15,
  ident_R = 16,
  ident_TargetModem_C = 17,
  ident_CompileOnly = 18,
  ident_Prelude = 19,
  ident_Incorporated = 20,
  ident_FILE = 21,
  ident_Help = 22,
  ident_Version = 23,
  ident_KeepRasls = 24,
  ident_True = 25,
  ident_DontKeepRasls = 26,
  ident_False = 27,
  ident_TempDir = 28,
  ident_REF5RSLm_Env = 29,
  ident_REF5RSL = 30,
  ident_OverwriteExistRasls = 31,
  ident_DontOverwriteExistRasls = 32,
  ident_CppCompilerExeSuf = 33,
  ident_CppCompilerLibSuf = 34,
  ident_NoRequiredParam = 35,
  ident_UnknownShortOption = 36,
  ident_UnknownLongOption = 37,
  ident_ManySourceFiles = 38,
  ident_No = 39,
  ident_TargetModeAlreadySet = 40,
  ident_Success = 41,
  ident_Fails = 42,
  ident_Required = 43,
  ident_None = 44,
  ident_Mu = 45,
  ident_Up = 46,
  ident_Evm_met = 47,
  ident_Residue = 48,
  ident_u_u_Metau_Residue = 49,
  ident_ParseCommandLine = 50,
  ident_CheckRequiredOptions = 51,
  ident_Update = 52,
  ident_PrintHelp = 53,
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


static refalrts::FnResult func_gen_ParseCommandLine_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ParseCommandLine\1/4 (/7 e.Errors/5 )/8 e.Options/2 >/1
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
  // closed e.Errors as range 5
  // closed e.Options as range 2
  //DEBUG: e.Errors: 5
  //DEBUG: e.Options: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & Config-Create/4 HalfReuse: >/7 AsIs: e.Errors/5 AsIs: )/8 } Tile{ AsIs: e.Options/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[1]);
  refalrts::update_name(context[4], functions[efunc_Configm_Create]);
  refalrts::reinit_close_call(context[7]);
  refalrts::link_brackets( context[1], context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_elem( res, context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L1("ParseCommandLine\\1", COOKIE1_, COOKIE2_, func_gen_ParseCommandLine_L1);


static refalrts::FnResult func_gen_ParseCommandLine_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & ParseCommandLine\2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ParseCommandLine\2/4 (/7 t.new1/9 e.new2/5 )/8 t.new3/11 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 5
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseCommandLine\2/4 (/7 t.new7/9 e.new8/13 )/8 (/11 s.new4/17 s.new5/18 e.new6/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[11] ) )
      continue;
    // closed e.new8 as range 13
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
      continue;
    // closed e.new6 as range 15
    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # CppCompilerExe/17 s.Num/18 e.CppCompilerExe/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CppCompilerExe], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.CppCompilerExe as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.CppCompilerExe: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetCppCompilerExe/17 } t.Config/9/23 Tile{ AsIs: e.CppCompilerExe/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompilerExe]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # CppCompilerLib/17 s.Num/18 e.CppCompilerLib/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CppCompilerLib], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.CppCompilerLib as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.CppCompilerLib: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetCppCompilerLib/17 } t.Config/9/23 Tile{ AsIs: e.CppCompilerLib/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompilerLib]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # Prefix/17 s.Num/18 e.Prefix/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Prefix], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.Prefix as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.Prefix: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetPrefix/17 } t.Config/9/23 Tile{ AsIs: e.Prefix/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetPrefix]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # Reference/17 s.Num/18 e.Reference/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Reference], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.Reference as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.Reference: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-AddReference/17 } t.Config/9/23 Tile{ AsIs: e.Reference/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_AddReference]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # RuntimeFolder/17 s.Num/18 e.Folder/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_RuntimeFolder], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.Folder as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.Folder: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-AddFolder/17 } t.Config/9/23 # Runtime/25 Tile{ AsIs: e.Folder/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_Runtime]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_AddFolder]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # SearchFolder/17 s.Num/18 e.Folder/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_SearchFolder], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.Folder as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.Folder: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-AddFolder/17 } t.Config/9/23 # Search/25 Tile{ AsIs: e.Folder/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_Search]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_AddFolder]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # RLCompiler/17 s.Num/18 e.RLCompiler/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_RLCompiler], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.RLCompiler as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.RLCompiler: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetRLCompiler/17 } t.Config/9/23 Tile{ AsIs: e.RLCompiler/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetRLCompiler]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # RLCompilerOption/17 s.Num/18 e.Flag/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_RLCompilerOption], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.Flag as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.Flag: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-AddRLCompilerFlag/17 } t.Config/9/23 Tile{ AsIs: e.Flag/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_AddRLCompilerFlag]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # TargetFileName/17 s.Num/18 e.TargetFile/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_TargetFileName], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.TargetFile as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.TargetFile: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetTargetFileName/17 } t.Config/9/23 Tile{ AsIs: e.TargetFile/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetFileName]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.new11/9 e.new12/19 )/8 (/11 s.new9/17 s.new10/18 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.new12 as range 19
      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/21 )/8 (/11 # TargetMode-Exe/17 s.Num/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_TargetModem_Exe], context[17] ) )
          continue;
        // closed e.Errors as range 21
        //DEBUG: t.Config: 9
        //DEBUG: s.Num: 18
        //DEBUG: e.Errors: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetTargetMode/17 } t.Config/9/23 # EXE/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_EXE]);
        refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetMode]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/21 )/8 (/11 # TargetMode-Lib/17 s.Num/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_TargetModem_Lib], context[17] ) )
          continue;
        // closed e.Errors as range 21
        //DEBUG: t.Config: 9
        //DEBUG: s.Num: 18
        //DEBUG: e.Errors: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetTargetMode/17 } t.Config/9/23 # LIB/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_LIB]);
        refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetMode]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/21 )/8 (/11 # TargetMode-R/17 s.Num/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_TargetModem_R], context[17] ) )
          continue;
        // closed e.Errors as range 21
        //DEBUG: t.Config: 9
        //DEBUG: s.Num: 18
        //DEBUG: e.Errors: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetTargetMode/17 } t.Config/9/23 # R/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_R]);
        refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetMode]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/21 )/8 (/11 # TargetMode-C/17 s.Num/18 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TargetModem_C], context[17] ) )
        continue;
      // closed e.Errors as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetTargetMode/17 } t.Config/9/23 # CompileOnly/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_CompileOnly]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetMode]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # Prelude/17 s.Num/18 e.Prelude/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Prelude], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.Prelude as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.Prelude: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetPrelude/17 } t.Config/9/23 Tile{ AsIs: e.Prelude/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetPrelude]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # Runtime/17 s.Num/18 e.File/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Runtime], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.File as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.File: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-AddRuntimeFile/17 } t.Config/9/23 Tile{ AsIs: e.File/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_AddRuntimeFile]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # Incorporated/17 s.Num/18 e.LibName/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Incorporated], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.LibName as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.LibName: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-AddIncorporated/17 } t.Config/9/23 Tile{ AsIs: e.LibName/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_AddIncorporated]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # FILE/17 s.Num/18 e.SourceFile/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_FILE], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.SourceFile as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.SourceFile: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetSourceFile/17 } t.Config/9/23 Tile{ AsIs: e.SourceFile/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetSourceFile]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.new11/9 e.new12/19 )/8 (/11 s.new9/17 s.new10/18 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.new12 as range 19
      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/21 )/8 (/11 # Help/17 s.Num/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_Help], context[17] ) )
          continue;
        // closed e.Errors as range 21
        //DEBUG: t.Config: 9
        //DEBUG: s.Num: 18
        //DEBUG: e.Errors: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num/18 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </11 HalfReuse: & Prout/17 } ' '/23 Tile{ HalfReuse: ' '/12 HalfReuse: 'r'/1 }"lmake flags... MainFileName[.ref]\n\nflags:\n-c, --cpp-command, --cpp-command-exe command-line\n        C++ command line prefix for building executable module\n--cpp-command-lib command-line\n        C++ command line prefix for building library module\n-p, --prefix prefix-name\n        set prefix file name\n-r, --reference reference-name\n        Compiled module depends from the reference\n-D, --runtime-dir, --runtime-directory dir\n        Add the directory to search list and include list for C++ compiler\n-d, --dir, --directory dir\n        Add the directory to search list\n--rlc-command command-line\n        rlc command line prefix for run Refal-5-Lambda compiler\n-X, --thru, --through rlc-command\n        Additional flags for rlc compiler, don\'t quoted in command line\n-o, --target-file target-file-name\n        Name of target file\n-x, --makeexe\n        Compile to executable file\n-l, --makelib\n        Compile to library file (with or w/o native code)\n-R      Compile to library RASL module (w/o native code)\n-C, --compile-only\n        Compile sources w/o linking\n--prelude filename.refi\n        Prelude file with builtin functions declarations\n--runtime filename.ref\n        Auxiliary files -- search roots\n--incorporated filename\n        Marks that a module with the name is statically linked to this module\n--help  Print this help\n--version\n        Print version\n--keep-rasl, --keep-rasls, --dont-keep-rasl, --dont-keep-rasls\n        Save or don\'t save temporary .rasl after compilation\n--tmp-dir, --temp-dir directory\n        Directory for intermediate .rasl files, current is default\n--ref5rsl\n        Use environment variable REF5RSL as search path\n--overwrite-exist-rasls, --dont-overwrite-exist-rasls,\n--overwrite-exist-rasl, --dont-overwrite-exist-rasl\n        If tmp-dir already contain file with name that being produced\n        new file use new name"/24 Tile{ HalfReuse: '\n'/0 HalfReuse: >/4 AsIs: (/7 AsIs: t.Config/9 AsIs: e.Errors/21 AsIs: )/8 } Tile{ ]] }
        refalrts::alloc_char(vm, context[23], ' ');
        refalrts::alloc_chars(vm, context[24], context[25], "lmake flags... MainFileName[.ref]\n\nflags:\n-c, --cpp-command, --cpp-command-exe command-line\n        C++ command line prefix for building executable module\n--cpp-command-lib command-line\n        C++ command line prefix for building library module\n-p, --prefix prefix-name\n        set prefix file name\n-r, --reference reference-name\n        Compiled module depends from the reference\n-D, --runtime-dir, --runtime-directory dir\n        Add the directory to search list and include list for C++ compiler\n-d, --dir, --directory dir\n        Add the directory to search list\n--rlc-command command-line\n        rlc command line prefix for run Refal-5-Lambda compiler\n-X, --thru, --through rlc-command\n        Additional flags for rlc compiler, don\'t quoted in command line\n-o, --target-file target-file-name\n        Name of target file\n-x, --makeexe\n        Compile to executable file\n-l, --makelib\n        Compile to library file (with or w/o native code)\n-R      Compile to library RASL module (w/o native code)\n-C, --compile-only\n        Compile sources w/o linking\n--prelude filename.refi\n        Prelude file with builtin functions declarations\n--runtime filename.ref\n        Auxiliary files -- search roots\n--incorporated filename\n        Marks that a module with the name is statically linked to this module\n--help  Print this help\n--version\n        Print version\n--keep-rasl, --keep-rasls, --dont-keep-rasl, --dont-keep-rasls\n        Save or don\'t save temporary .rasl after compilation\n--tmp-dir, --temp-dir directory\n        Directory for intermediate .rasl files, current is default\n--ref5rsl\n        Use environment variable REF5RSL as search path\n--overwrite-exist-rasls, --dont-overwrite-exist-rasls,\n--overwrite-exist-rasl, --dont-overwrite-exist-rasl\n        If tmp-dir already contain file with name that being produced\n        new file use new name", 1858);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Prout]);
        refalrts::reinit_char(context[12], ' ');
        refalrts::reinit_char(context[1], 'r');
        refalrts::reinit_char(context[0], '\n');
        refalrts::reinit_close_call(context[4]);
        refalrts::link_brackets( context[7], context[8] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/21 )/8 (/11 # Version/17 s.Num/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_Version], context[17] ) )
          continue;
        // closed e.Errors as range 21
        //DEBUG: t.Config: 9
        //DEBUG: s.Num: 18
        //DEBUG: e.Errors: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num/18 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </11 HalfReuse: & PrintVersion/17 } 'r'/23 Tile{ HalfReuse: 'l'/12 HalfReuse: 'm'/1 }"ak"/24 Tile{ HalfReuse: 'e'/0 HalfReuse: >/4 AsIs: (/7 AsIs: t.Config/9 AsIs: e.Errors/21 AsIs: )/8 } Tile{ ]] }
        refalrts::alloc_char(vm, context[23], 'r');
        refalrts::alloc_chars(vm, context[24], context[25], "ak", 2);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_PrintVersion]);
        refalrts::reinit_char(context[12], 'l');
        refalrts::reinit_char(context[1], 'm');
        refalrts::reinit_char(context[0], 'e');
        refalrts::reinit_close_call(context[4]);
        refalrts::link_brackets( context[7], context[8] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/21 )/8 (/11 # KeepRasls/17 s.Num/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_KeepRasls], context[17] ) )
          continue;
        // closed e.Errors as range 21
        //DEBUG: t.Config: 9
        //DEBUG: s.Num: 18
        //DEBUG: e.Errors: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetKeepRasls/17 } t.Config/9/23 # True/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_True]);
        refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetKeepRasls]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/21 )/8 (/11 # DontKeepRasls/17 s.Num/18 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_DontKeepRasls], context[17] ) )
        continue;
      // closed e.Errors as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetKeepRasls/17 } t.Config/9/23 # False/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_False]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetKeepRasls]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # TempDir/17 s.Num/18 e.Name/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_TempDir], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.Name as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.Name: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetTempDir/17 } t.Config/9/23 Tile{ AsIs: e.Name/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTempDir]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.new11/9 e.new12/19 )/8 (/11 s.new9/17 s.new10/18 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.new12 as range 19
      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/21 )/8 (/11 # REF5RSL-Env/17 s.Num/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_REF5RSLm_Env], context[17] ) )
          continue;
        // closed e.Errors as range 21
        //DEBUG: t.Config: 9
        //DEBUG: s.Num: 18
        //DEBUG: e.Errors: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-AddFolder/17 } t.Config/9/23 # REF5RSL/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_REF5RSL]);
        refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_AddFolder]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/21 )/8 (/11 # OverwriteExistRasls/17 s.Num/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_OverwriteExistRasls], context[17] ) )
          continue;
        // closed e.Errors as range 21
        //DEBUG: t.Config: 9
        //DEBUG: s.Num: 18
        //DEBUG: e.Errors: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetOverwriteExistRasls/17 } t.Config/9/23 # True/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_True]);
        refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetOverwriteExistRasls]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/21 )/8 (/11 # DontOverwriteExistRasls/17 s.Num/18 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_DontOverwriteExistRasls], context[17] ) )
        continue;
      // closed e.Errors as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetOverwriteExistRasls/17 } t.Config/9/23 # False/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_False]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetOverwriteExistRasls]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # CppCompilerExeSuf/17 s.Num/18 e.CppCompilerExeSuf/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CppCompilerExeSuf], context[17] ) )
        continue;
      // closed e.Errors as range 19
      // closed e.CppCompilerExeSuf as range 21
      //DEBUG: t.Config: 9
      //DEBUG: s.Num: 18
      //DEBUG: e.Errors: 19
      //DEBUG: e.CppCompilerExeSuf: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetCppCompilerExeSuf/17 } t.Config/9/23 Tile{ AsIs: e.CppCompilerExeSuf/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompilerExeSuf]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/19 )/8 (/11 # CppCompilerLibSuf/17 s.Num/18 e.CppCompilerLibSuf/21 )/12 >/1
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[15];
    context[22] = context[16];
    if( ! refalrts::ident_term( identifiers[ident_CppCompilerLibSuf], context[17] ) )
      continue;
    // closed e.Errors as range 19
    // closed e.CppCompilerLibSuf as range 21
    //DEBUG: t.Config: 9
    //DEBUG: s.Num: 18
    //DEBUG: e.Errors: 19
    //DEBUG: e.CppCompilerLibSuf: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config/9 } Tile{ AsIs: s.Num/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetCppCompilerLibSuf/17 } t.Config/9/23 Tile{ AsIs: e.CppCompilerLibSuf/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
    refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
    refalrts::reinit_open_call(context[11]);
    refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompilerLibSuf]);
    refalrts::reinit_close_call(context[12]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[11], context[17] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine\2/4 (/7 t.Config/9 e.Errors/5 )/8 t.Option/11 >/1
  // closed e.Errors as range 5
  //DEBUG: t.Config: 9
  //DEBUG: t.Option: 11
  //DEBUG: e.Errors: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseCommandLine\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Config/9 AsIs: e.Errors/5 AsIs: )/8 AsIs: t.Option/11 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L2("ParseCommandLine\\2", COOKIE1_, COOKIE2_, func_gen_ParseCommandLine_L2);


static refalrts::FnResult func_gen_ParseCommandLine_L3S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & ParseCommandLine\3$2\1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ParseCommandLine\3$2\1/4 (/7 s.new1/9 s.new2/10 e.new3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 5
  do {
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos/9 # NoRequiredParam/10 e.Param/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_NoRequiredParam], context[10] ) )
      continue;
    // closed e.Param as range 11
    //DEBUG: s.Pos: 9
    //DEBUG: e.Param: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos/9 HalfReuse: 'o'/10 } Tile{ HalfReuse: 'p'/0 HalfReuse: 't'/4 }"ion "/13 Tile{ AsIs: e.Param/11 }" expects paramete"/15 Tile{ HalfReuse: 'r'/8 HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[13], context[14], "ion ", 4);
    refalrts::alloc_chars(vm, context[15], context[16], " expects paramete", 17);
    refalrts::reinit_char(context[10], 'o');
    refalrts::reinit_char(context[0], 'p');
    refalrts::reinit_char(context[4], 't');
    refalrts::reinit_char(context[8], 'r');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos/9 # UnknownShortOption/10 s.Option/13 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_UnknownShortOption], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: s.Pos: 9
    //DEBUG: s.Option: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos/9 HalfReuse: 'u'/10 } 'n'/14 Tile{ HalfReuse: 'k'/1 } Tile{ HalfReuse: 'n'/0 HalfReuse: 'o'/4 }"wn option -"/15 Tile{ AsIs: s.Option/13 AsIs: )/8 } Tile{ ]] }
    refalrts::alloc_char(vm, context[14], 'n');
    refalrts::alloc_chars(vm, context[15], context[16], "wn option -", 11);
    refalrts::reinit_char(context[10], 'u');
    refalrts::reinit_char(context[1], 'k');
    refalrts::reinit_char(context[0], 'n');
    refalrts::reinit_char(context[4], 'o');
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos/9 # UnknownLongOption/10 e.Option/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_UnknownLongOption], context[10] ) )
      continue;
    // closed e.Option as range 11
    //DEBUG: s.Pos: 9
    //DEBUG: e.Option: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos/9 HalfReuse: 'u'/10 }"nk"/13 Tile{ HalfReuse: 'n'/0 HalfReuse: 'o'/4 } Tile{ HalfReuse: 'w'/8 }"n option --"/15 Tile{ AsIs: e.Option/11 } Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[13], context[14], "nk", 2);
    refalrts::alloc_chars(vm, context[15], context[16], "n option --", 11);
    refalrts::reinit_char(context[10], 'u');
    refalrts::reinit_char(context[0], 'n');
    refalrts::reinit_char(context[4], 'o');
    refalrts::reinit_char(context[8], 'w');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos/9 # ManySourceFiles/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_ManySourceFiles], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.Pos: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos/9 HalfReuse: 'm'/10 HalfReuse: 'a'/8 HalfReuse: 'n'/1 } 'y'/11 Tile{ HalfReuse: ' '/0 HalfReuse: 's'/4 }"ource files in command line"/12 )/14 Tile{ ]] }
    refalrts::alloc_char(vm, context[11], 'y');
    refalrts::alloc_chars(vm, context[12], context[13], "ource files in command line", 27);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::reinit_char(context[10], 'm');
    refalrts::reinit_char(context[8], 'a');
    refalrts::reinit_char(context[1], 'n');
    refalrts::reinit_char(context[0], ' ');
    refalrts::reinit_char(context[4], 's');
    refalrts::link_brackets( context[7], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos/9 # No/10 # FILE/13 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_No], context[10] ) )
      continue;
    context[13] = refalrts::ident_left( identifiers[ident_FILE], context[11], context[12] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: s.Pos: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos/9 HalfReuse: 'e'/10 HalfReuse: 'x'/13 HalfReuse: 'p'/8 HalfReuse: 'e'/1 } 'c'/14 Tile{ HalfReuse: 't'/0 HalfReuse: 'e'/4 }"d source filename in command line"/15 )/17 Tile{ ]] }
    refalrts::alloc_char(vm, context[14], 'c');
    refalrts::alloc_chars(vm, context[15], context[16], "d source filename in command line", 33);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::reinit_char(context[10], 'e');
    refalrts::reinit_char(context[13], 'x');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[1], 'e');
    refalrts::reinit_char(context[0], 't');
    refalrts::reinit_char(context[4], 'e');
    refalrts::link_brackets( context[7], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos/9 # TargetModeAlreadySet/10 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_TargetModeAlreadySet], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Pos: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos/9 HalfReuse: 'o'/10 HalfReuse: 'p'/8 HalfReuse: 't'/1 } 'i'/11 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 }"s --makeexe (-x), --makelib (-l) and -R must appear one time"/12 )/14 Tile{ ]] }
  refalrts::alloc_char(vm, context[11], 'i');
  refalrts::alloc_chars(vm, context[12], context[13], "s --makeexe (-x), --makelib (-l) and -R must appear one time", 60);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::reinit_char(context[10], 'o');
  refalrts::reinit_char(context[8], 'p');
  refalrts::reinit_char(context[1], 't');
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 'n');
  refalrts::link_brackets( context[7], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L3S2L1("ParseCommandLine\\3$2\\1", COOKIE1_, COOKIE2_, func_gen_ParseCommandLine_L3S2L1);


static refalrts::FnResult func_gen_ParseCommandLine_L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ParseCommandLine\3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ParseCommandLine\3/4 (/7 t.new1/9 e.new2/5 )/8 >/1
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
  // closed e.new2 as range 5
  do {
    // </0 & ParseCommandLine\3/4 (/7 t.Config/9 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: t.Config: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ParseCommandLine\3/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/7 AsIs: t.Config/9 } Tile{ ]] }
    refalrts::reinit_ident(context[7], identifiers[ident_Success]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine\3/4 (/7 t.Config/9 e.Errors/5 )/8 >/1
  // closed e.Errors as range 5
  //DEBUG: t.Config: 9
  //DEBUG: e.Errors: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.Config/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: </4 HalfReuse: & Map/7 } Tile{ HalfReuse: & ParseCommandLine\3$2\1/8 } Tile{ AsIs: e.Errors/5 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Fails]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_Map]);
  refalrts::reinit_name(context[8], functions[efunc_gen_ParseCommandLine_L3S2L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L3("ParseCommandLine\\3", COOKIE1_, COOKIE2_, func_gen_ParseCommandLine_L3);


static refalrts::FnResult func_ParseCommandLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 279 elems
  refalrts::Iter context[279];
  refalrts::zeros( context, 279 );
  // </0 & ParseCommandLine/4 e.Arguments/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arguments as range 2
  //DEBUG: e.Arguments: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & GetOpt/6 (/7 (/8 # CppCompilerExe/9 # Required/10 'c'/11 (/12"cpp-command"/13 )/15 (/16"cpp-command-exe"/17 )/19 )/20 (/21 # CppCompilerLib/22 # Required/23 (/24"cpp-command-lib"/25 )/27 )/28 (/29 # Prefix/30 # Required/31 'p'/32 (/33"prefix"/34 )/36 )/37 (/38 # Reference/39 # Required/40 'r'/41 (/42"reference"/43 )/45 )/46 (/47 # RuntimeFolder/48 # Required/49 'D'/50 (/51"runtime-dir"/52 )/54 (/55"runtime-directory"/56 )/58 )/59 (/60 # SearchFolder/61 # Required/62 'd'/63 (/64"dir"/65 )/67 (/68"directory"/69 )/71 )/72 (/73 # RLCompiler/74 # Required/75 (/76"rlc-command"/77 )/79 )/80 (/81 # RLCompilerOption/82 # Required/83 'X'/84 (/85"thru"/86 )/88 (/89"through"/90 )/92 )/93 (/94 # TargetFileName/95 # Required/96 'o'/97 (/98"target-file"/99 )/101 )/102 (/103 # TargetMode-Exe/104 # None/105 'x'/106 (/107"makeexe"/108 )/110 )/111 (/112 # TargetMode-Lib/113 # None/114 'l'/115 (/116"makelib"/117 )/119 )/120 (/121 # TargetMode-R/122 # None/123 'R'/124 )/125 (/126 # TargetMode-C/127 # None/128 'C'/129 (/130"compile-only"/131 )/133 )/134 (/135 # Prelude/136 # Required/137 (/138"prelude"/139 )/141 )/142 (/143 # Runtime/144 # Required/145 (/146"runtime"/147 )/149 )/150 (/151 # Incorporated/152 # Required/153 (/154"incorporated"/155 )/157 )/158 (/159 # Help/160 # None/161"h?"/162 (/164"help"/165 )/167 )/168 (/169 # Version/170 # None/171 'v'/172 (/173"version"/174 )/176 )/177 (/178 # KeepRasls/179 # None/180 (/181"keep-rasl"/182 )/184 (/185"keep-rasls"/186 )/188 )/189 (/190 # DontKeepRasls/191 # None/192 (/193"dont-keep-rasl"/194 )/196 (/197"dont-keep-rasls"/198 )/200 )/201 (/202 # TempDir/203 # Required/204 (/205"tmp-dir"/206 )/208 (/209"temp-dir"/210 )/212 )/213 (/214 # REF5RSL-Env/215 # None/216 (/217"ref5rsl"/218 )/220 )/221 (/222 # OverwriteExistRasls/223 # None/224 (/225"overwrite-exist-rasls"/226 )/228 (/229"overwrite-exist-rasl"/230 )/232 )/233 (/234 # DontOverwriteExistRasls/235 # None/236 (/237"dont-overwrite-exist-rasls"/238 )/240 (/241"dont-overwrite-exist-rasl"/242 )/244 )/245 (/246 # CppCompilerExeSuf/247 # Required/248 (/249"cpp-command-exe-suf"/250 )/252 )/253 (/254 # CppCompilerLibSuf/255 # Required/256 (/257"cpp-command-lib-suf"/258 )/260 )/261 )/262 Tile{ AsIs: e.Arguments/2 } >/263 </264 & Pipe/265 (/266 & CheckRequiredOptions/267 (/268 # FILE/269 )/270 )/271 & ParseCommandLine\1/272 (/273 & MapAccum/274 & ParseCommandLine\2/275 )/276 & ParseCommandLine\3/277 >/278 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_GetOpt]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_ident(vm, context[9], identifiers[ident_CppCompilerExe]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[11], 'c');
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_chars(vm, context[13], context[14], "cpp-command", 11);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_chars(vm, context[17], context[18], "cpp-command-exe", 15);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_CppCompilerLib]);
  refalrts::alloc_ident(vm, context[23], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_chars(vm, context[25], context[26], "cpp-command-lib", 15);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_ident(vm, context[30], identifiers[ident_Prefix]);
  refalrts::alloc_ident(vm, context[31], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[32], 'p');
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::alloc_chars(vm, context[34], context[35], "prefix", 6);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_ident(vm, context[39], identifiers[ident_Reference]);
  refalrts::alloc_ident(vm, context[40], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[41], 'r');
  refalrts::alloc_open_bracket(vm, context[42]);
  refalrts::alloc_chars(vm, context[43], context[44], "reference", 9);
  refalrts::alloc_close_bracket(vm, context[45]);
  refalrts::alloc_close_bracket(vm, context[46]);
  refalrts::alloc_open_bracket(vm, context[47]);
  refalrts::alloc_ident(vm, context[48], identifiers[ident_RuntimeFolder]);
  refalrts::alloc_ident(vm, context[49], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[50], 'D');
  refalrts::alloc_open_bracket(vm, context[51]);
  refalrts::alloc_chars(vm, context[52], context[53], "runtime-dir", 11);
  refalrts::alloc_close_bracket(vm, context[54]);
  refalrts::alloc_open_bracket(vm, context[55]);
  refalrts::alloc_chars(vm, context[56], context[57], "runtime-directory", 17);
  refalrts::alloc_close_bracket(vm, context[58]);
  refalrts::alloc_close_bracket(vm, context[59]);
  refalrts::alloc_open_bracket(vm, context[60]);
  refalrts::alloc_ident(vm, context[61], identifiers[ident_SearchFolder]);
  refalrts::alloc_ident(vm, context[62], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[63], 'd');
  refalrts::alloc_open_bracket(vm, context[64]);
  refalrts::alloc_chars(vm, context[65], context[66], "dir", 3);
  refalrts::alloc_close_bracket(vm, context[67]);
  refalrts::alloc_open_bracket(vm, context[68]);
  refalrts::alloc_chars(vm, context[69], context[70], "directory", 9);
  refalrts::alloc_close_bracket(vm, context[71]);
  refalrts::alloc_close_bracket(vm, context[72]);
  refalrts::alloc_open_bracket(vm, context[73]);
  refalrts::alloc_ident(vm, context[74], identifiers[ident_RLCompiler]);
  refalrts::alloc_ident(vm, context[75], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[76]);
  refalrts::alloc_chars(vm, context[77], context[78], "rlc-command", 11);
  refalrts::alloc_close_bracket(vm, context[79]);
  refalrts::alloc_close_bracket(vm, context[80]);
  refalrts::alloc_open_bracket(vm, context[81]);
  refalrts::alloc_ident(vm, context[82], identifiers[ident_RLCompilerOption]);
  refalrts::alloc_ident(vm, context[83], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[84], 'X');
  refalrts::alloc_open_bracket(vm, context[85]);
  refalrts::alloc_chars(vm, context[86], context[87], "thru", 4);
  refalrts::alloc_close_bracket(vm, context[88]);
  refalrts::alloc_open_bracket(vm, context[89]);
  refalrts::alloc_chars(vm, context[90], context[91], "through", 7);
  refalrts::alloc_close_bracket(vm, context[92]);
  refalrts::alloc_close_bracket(vm, context[93]);
  refalrts::alloc_open_bracket(vm, context[94]);
  refalrts::alloc_ident(vm, context[95], identifiers[ident_TargetFileName]);
  refalrts::alloc_ident(vm, context[96], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[97], 'o');
  refalrts::alloc_open_bracket(vm, context[98]);
  refalrts::alloc_chars(vm, context[99], context[100], "target-file", 11);
  refalrts::alloc_close_bracket(vm, context[101]);
  refalrts::alloc_close_bracket(vm, context[102]);
  refalrts::alloc_open_bracket(vm, context[103]);
  refalrts::alloc_ident(vm, context[104], identifiers[ident_TargetModem_Exe]);
  refalrts::alloc_ident(vm, context[105], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[106], 'x');
  refalrts::alloc_open_bracket(vm, context[107]);
  refalrts::alloc_chars(vm, context[108], context[109], "makeexe", 7);
  refalrts::alloc_close_bracket(vm, context[110]);
  refalrts::alloc_close_bracket(vm, context[111]);
  refalrts::alloc_open_bracket(vm, context[112]);
  refalrts::alloc_ident(vm, context[113], identifiers[ident_TargetModem_Lib]);
  refalrts::alloc_ident(vm, context[114], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[115], 'l');
  refalrts::alloc_open_bracket(vm, context[116]);
  refalrts::alloc_chars(vm, context[117], context[118], "makelib", 7);
  refalrts::alloc_close_bracket(vm, context[119]);
  refalrts::alloc_close_bracket(vm, context[120]);
  refalrts::alloc_open_bracket(vm, context[121]);
  refalrts::alloc_ident(vm, context[122], identifiers[ident_TargetModem_R]);
  refalrts::alloc_ident(vm, context[123], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[124], 'R');
  refalrts::alloc_close_bracket(vm, context[125]);
  refalrts::alloc_open_bracket(vm, context[126]);
  refalrts::alloc_ident(vm, context[127], identifiers[ident_TargetModem_C]);
  refalrts::alloc_ident(vm, context[128], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[129], 'C');
  refalrts::alloc_open_bracket(vm, context[130]);
  refalrts::alloc_chars(vm, context[131], context[132], "compile-only", 12);
  refalrts::alloc_close_bracket(vm, context[133]);
  refalrts::alloc_close_bracket(vm, context[134]);
  refalrts::alloc_open_bracket(vm, context[135]);
  refalrts::alloc_ident(vm, context[136], identifiers[ident_Prelude]);
  refalrts::alloc_ident(vm, context[137], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[138]);
  refalrts::alloc_chars(vm, context[139], context[140], "prelude", 7);
  refalrts::alloc_close_bracket(vm, context[141]);
  refalrts::alloc_close_bracket(vm, context[142]);
  refalrts::alloc_open_bracket(vm, context[143]);
  refalrts::alloc_ident(vm, context[144], identifiers[ident_Runtime]);
  refalrts::alloc_ident(vm, context[145], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[146]);
  refalrts::alloc_chars(vm, context[147], context[148], "runtime", 7);
  refalrts::alloc_close_bracket(vm, context[149]);
  refalrts::alloc_close_bracket(vm, context[150]);
  refalrts::alloc_open_bracket(vm, context[151]);
  refalrts::alloc_ident(vm, context[152], identifiers[ident_Incorporated]);
  refalrts::alloc_ident(vm, context[153], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[154]);
  refalrts::alloc_chars(vm, context[155], context[156], "incorporated", 12);
  refalrts::alloc_close_bracket(vm, context[157]);
  refalrts::alloc_close_bracket(vm, context[158]);
  refalrts::alloc_open_bracket(vm, context[159]);
  refalrts::alloc_ident(vm, context[160], identifiers[ident_Help]);
  refalrts::alloc_ident(vm, context[161], identifiers[ident_None]);
  refalrts::alloc_chars(vm, context[162], context[163], "h?", 2);
  refalrts::alloc_open_bracket(vm, context[164]);
  refalrts::alloc_chars(vm, context[165], context[166], "help", 4);
  refalrts::alloc_close_bracket(vm, context[167]);
  refalrts::alloc_close_bracket(vm, context[168]);
  refalrts::alloc_open_bracket(vm, context[169]);
  refalrts::alloc_ident(vm, context[170], identifiers[ident_Version]);
  refalrts::alloc_ident(vm, context[171], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[172], 'v');
  refalrts::alloc_open_bracket(vm, context[173]);
  refalrts::alloc_chars(vm, context[174], context[175], "version", 7);
  refalrts::alloc_close_bracket(vm, context[176]);
  refalrts::alloc_close_bracket(vm, context[177]);
  refalrts::alloc_open_bracket(vm, context[178]);
  refalrts::alloc_ident(vm, context[179], identifiers[ident_KeepRasls]);
  refalrts::alloc_ident(vm, context[180], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[181]);
  refalrts::alloc_chars(vm, context[182], context[183], "keep-rasl", 9);
  refalrts::alloc_close_bracket(vm, context[184]);
  refalrts::alloc_open_bracket(vm, context[185]);
  refalrts::alloc_chars(vm, context[186], context[187], "keep-rasls", 10);
  refalrts::alloc_close_bracket(vm, context[188]);
  refalrts::alloc_close_bracket(vm, context[189]);
  refalrts::alloc_open_bracket(vm, context[190]);
  refalrts::alloc_ident(vm, context[191], identifiers[ident_DontKeepRasls]);
  refalrts::alloc_ident(vm, context[192], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[193]);
  refalrts::alloc_chars(vm, context[194], context[195], "dont-keep-rasl", 14);
  refalrts::alloc_close_bracket(vm, context[196]);
  refalrts::alloc_open_bracket(vm, context[197]);
  refalrts::alloc_chars(vm, context[198], context[199], "dont-keep-rasls", 15);
  refalrts::alloc_close_bracket(vm, context[200]);
  refalrts::alloc_close_bracket(vm, context[201]);
  refalrts::alloc_open_bracket(vm, context[202]);
  refalrts::alloc_ident(vm, context[203], identifiers[ident_TempDir]);
  refalrts::alloc_ident(vm, context[204], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[205]);
  refalrts::alloc_chars(vm, context[206], context[207], "tmp-dir", 7);
  refalrts::alloc_close_bracket(vm, context[208]);
  refalrts::alloc_open_bracket(vm, context[209]);
  refalrts::alloc_chars(vm, context[210], context[211], "temp-dir", 8);
  refalrts::alloc_close_bracket(vm, context[212]);
  refalrts::alloc_close_bracket(vm, context[213]);
  refalrts::alloc_open_bracket(vm, context[214]);
  refalrts::alloc_ident(vm, context[215], identifiers[ident_REF5RSLm_Env]);
  refalrts::alloc_ident(vm, context[216], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[217]);
  refalrts::alloc_chars(vm, context[218], context[219], "ref5rsl", 7);
  refalrts::alloc_close_bracket(vm, context[220]);
  refalrts::alloc_close_bracket(vm, context[221]);
  refalrts::alloc_open_bracket(vm, context[222]);
  refalrts::alloc_ident(vm, context[223], identifiers[ident_OverwriteExistRasls]);
  refalrts::alloc_ident(vm, context[224], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[225]);
  refalrts::alloc_chars(vm, context[226], context[227], "overwrite-exist-rasls", 21);
  refalrts::alloc_close_bracket(vm, context[228]);
  refalrts::alloc_open_bracket(vm, context[229]);
  refalrts::alloc_chars(vm, context[230], context[231], "overwrite-exist-rasl", 20);
  refalrts::alloc_close_bracket(vm, context[232]);
  refalrts::alloc_close_bracket(vm, context[233]);
  refalrts::alloc_open_bracket(vm, context[234]);
  refalrts::alloc_ident(vm, context[235], identifiers[ident_DontOverwriteExistRasls]);
  refalrts::alloc_ident(vm, context[236], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[237]);
  refalrts::alloc_chars(vm, context[238], context[239], "dont-overwrite-exist-rasls", 26);
  refalrts::alloc_close_bracket(vm, context[240]);
  refalrts::alloc_open_bracket(vm, context[241]);
  refalrts::alloc_chars(vm, context[242], context[243], "dont-overwrite-exist-rasl", 25);
  refalrts::alloc_close_bracket(vm, context[244]);
  refalrts::alloc_close_bracket(vm, context[245]);
  refalrts::alloc_open_bracket(vm, context[246]);
  refalrts::alloc_ident(vm, context[247], identifiers[ident_CppCompilerExeSuf]);
  refalrts::alloc_ident(vm, context[248], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[249]);
  refalrts::alloc_chars(vm, context[250], context[251], "cpp-command-exe-suf", 19);
  refalrts::alloc_close_bracket(vm, context[252]);
  refalrts::alloc_close_bracket(vm, context[253]);
  refalrts::alloc_open_bracket(vm, context[254]);
  refalrts::alloc_ident(vm, context[255], identifiers[ident_CppCompilerLibSuf]);
  refalrts::alloc_ident(vm, context[256], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[257]);
  refalrts::alloc_chars(vm, context[258], context[259], "cpp-command-lib-suf", 19);
  refalrts::alloc_close_bracket(vm, context[260]);
  refalrts::alloc_close_bracket(vm, context[261]);
  refalrts::alloc_close_bracket(vm, context[262]);
  refalrts::alloc_close_call(vm, context[263]);
  refalrts::alloc_open_call(vm, context[264]);
  refalrts::alloc_name(vm, context[265], functions[efunc_Pipe]);
  refalrts::alloc_open_bracket(vm, context[266]);
  refalrts::alloc_name(vm, context[267], functions[efunc_CheckRequiredOptions]);
  refalrts::alloc_open_bracket(vm, context[268]);
  refalrts::alloc_ident(vm, context[269], identifiers[ident_FILE]);
  refalrts::alloc_close_bracket(vm, context[270]);
  refalrts::alloc_close_bracket(vm, context[271]);
  refalrts::alloc_name(vm, context[272], functions[efunc_gen_ParseCommandLine_L1]);
  refalrts::alloc_open_bracket(vm, context[273]);
  refalrts::alloc_name(vm, context[274], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[275], functions[efunc_gen_ParseCommandLine_L2]);
  refalrts::alloc_close_bracket(vm, context[276]);
  refalrts::alloc_name(vm, context[277], functions[efunc_gen_ParseCommandLine_L3]);
  refalrts::alloc_close_call(vm, context[278]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[278] );
  refalrts::push_stack( vm, context[264] );
  refalrts::link_brackets( context[273], context[276] );
  refalrts::link_brackets( context[266], context[271] );
  refalrts::link_brackets( context[268], context[270] );
  refalrts::push_stack( vm, context[263] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[262] );
  refalrts::link_brackets( context[254], context[261] );
  refalrts::link_brackets( context[257], context[260] );
  refalrts::link_brackets( context[246], context[253] );
  refalrts::link_brackets( context[249], context[252] );
  refalrts::link_brackets( context[234], context[245] );
  refalrts::link_brackets( context[241], context[244] );
  refalrts::link_brackets( context[237], context[240] );
  refalrts::link_brackets( context[222], context[233] );
  refalrts::link_brackets( context[229], context[232] );
  refalrts::link_brackets( context[225], context[228] );
  refalrts::link_brackets( context[214], context[221] );
  refalrts::link_brackets( context[217], context[220] );
  refalrts::link_brackets( context[202], context[213] );
  refalrts::link_brackets( context[209], context[212] );
  refalrts::link_brackets( context[205], context[208] );
  refalrts::link_brackets( context[190], context[201] );
  refalrts::link_brackets( context[197], context[200] );
  refalrts::link_brackets( context[193], context[196] );
  refalrts::link_brackets( context[178], context[189] );
  refalrts::link_brackets( context[185], context[188] );
  refalrts::link_brackets( context[181], context[184] );
  refalrts::link_brackets( context[169], context[177] );
  refalrts::link_brackets( context[173], context[176] );
  refalrts::link_brackets( context[159], context[168] );
  refalrts::link_brackets( context[164], context[167] );
  refalrts::link_brackets( context[151], context[158] );
  refalrts::link_brackets( context[154], context[157] );
  refalrts::link_brackets( context[143], context[150] );
  refalrts::link_brackets( context[146], context[149] );
  refalrts::link_brackets( context[135], context[142] );
  refalrts::link_brackets( context[138], context[141] );
  refalrts::link_brackets( context[126], context[134] );
  refalrts::link_brackets( context[130], context[133] );
  refalrts::link_brackets( context[121], context[125] );
  refalrts::link_brackets( context[112], context[120] );
  refalrts::link_brackets( context[116], context[119] );
  refalrts::link_brackets( context[103], context[111] );
  refalrts::link_brackets( context[107], context[110] );
  refalrts::link_brackets( context[94], context[102] );
  refalrts::link_brackets( context[98], context[101] );
  refalrts::link_brackets( context[81], context[93] );
  refalrts::link_brackets( context[89], context[92] );
  refalrts::link_brackets( context[85], context[88] );
  refalrts::link_brackets( context[73], context[80] );
  refalrts::link_brackets( context[76], context[79] );
  refalrts::link_brackets( context[60], context[72] );
  refalrts::link_brackets( context[68], context[71] );
  refalrts::link_brackets( context[64], context[67] );
  refalrts::link_brackets( context[47], context[59] );
  refalrts::link_brackets( context[55], context[58] );
  refalrts::link_brackets( context[51], context[54] );
  refalrts::link_brackets( context[38], context[46] );
  refalrts::link_brackets( context[42], context[45] );
  refalrts::link_brackets( context[29], context[37] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::link_brackets( context[21], context[28] );
  refalrts::link_brackets( context[24], context[27] );
  refalrts::link_brackets( context[8], context[20] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[263], context[278] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[262] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseCommandLine("ParseCommandLine", 0U, 0U, func_ParseCommandLine);


static refalrts::FnResult func_CheckRequiredOptions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & CheckRequiredOptions/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CheckRequiredOptions/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 2
  do {
    // </0 & CheckRequiredOptions/4 (/7 s.new5/19 e.new6/13 )/8 (/11 e.new7/15 )/12 e.new4/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.new7 as range 15
    // closed e.new4 as range 17
    if( ! refalrts::svar_left( context[19], context[13], context[14] ) )
      continue;
    // closed e.new6 as range 13
    do {
      // </0 & CheckRequiredOptions/4 (/7 s.Flag/19 e.Required/20 )/8 (/11 e.Errors/22 )/12 e.Options-B/26 (/32 s.Flag/34 s.Num/35 e.Value/30 )/33 e.Options-E/28 >/1
      context[20] = context[13];
      context[21] = context[14];
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      // closed e.Required as range 20
      // closed e.Errors as range 22
      context[26] = 0;
      context[27] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[28] = context[24];
        context[29] = context[25];
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        if( ! refalrts::repeated_stvar_left( vm, context[34], context[19], context[30], context[31] ) )
          continue;
        // closed e.Options-E as range 28
        if( ! refalrts::svar_left( context[35], context[30], context[31] ) )
          continue;
        // closed e.Value as range 30
        //DEBUG: s.Flag: 19
        //DEBUG: e.Required: 20
        //DEBUG: e.Errors: 22
        //DEBUG: e.Options-B: 26
        //DEBUG: e.Options-E: 28
        //DEBUG: s.Num: 35
        //DEBUG: e.Value: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Flag/19 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckRequiredOptions/4 AsIs: (/7 } Tile{ AsIs: e.Required/20 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Errors/22 AsIs: )/12 AsIs: e.Options-B/26 AsIs: (/32 AsIs: s.Flag/34 AsIs: s.Num/35 AsIs: e.Value/30 AsIs: )/33 AsIs: e.Options-E/28 AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[32], context[33] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[20], context[21] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[26], context[27], context[24], context[25] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckRequiredOptions/4 (/7 s.Flag/19 e.Required/20 )/8 (/11 e.Errors/22 )/12 e.Options/24 >/1
    context[20] = context[13];
    context[21] = context[14];
    context[22] = context[15];
    context[23] = context[16];
    context[24] = context[17];
    context[25] = context[18];
    // closed e.Required as range 20
    // closed e.Errors as range 22
    // closed e.Options as range 24
    //DEBUG: s.Flag: 19
    //DEBUG: e.Required: 20
    //DEBUG: e.Errors: 22
    //DEBUG: e.Options: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckRequiredOptions/4 AsIs: (/7 } Tile{ AsIs: e.Required/20 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Errors/22 } (/26 1/27 # No/28 Tile{ AsIs: s.Flag/19 } )/29 Tile{ AsIs: )/12 AsIs: e.Options/24 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::alloc_number(vm, context[27], 1UL);
    refalrts::alloc_ident(vm, context[28], identifiers[ident_No]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[26], context[29] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckRequiredOptions/4 (/7 )/8 (/11 e.Errors/9 )/12 e.Options/2 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors as range 9
  // closed e.Options as range 2
  //DEBUG: e.Errors: 9
  //DEBUG: e.Options: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckRequiredOptions/4 (/7 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.Errors/9 AsIs: )/12 } Tile{ AsIs: e.Options/2 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckRequiredOptions("CheckRequiredOptions", COOKIE1_, COOKIE2_, func_CheckRequiredOptions);


static refalrts::FnResult func_gen_Update_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Update:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Update:1/4 (/7 e.new1/5 )/8 t.new2/9 s.new3/11 s.new4/12 e.new5/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new5 as range 2
  do {
    // </0 & Update:1/4 (/7 e.Errors/13 )/8 t.Config/9 s.LineNum/11 # Success/12 t.Config$a/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[12] ) )
      continue;
    // closed e.Errors as range 13
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: t.Config: 9
    //DEBUG: s.LineNum: 11
    //DEBUG: e.Errors: 13
    //DEBUG: t.Config$a: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Update:1/4 (/7 {REMOVED TILE} )/8 t.Config/9 s.LineNum/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 AsIs: t.Config$a/17 } Tile{ AsIs: e.Errors/13 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[12]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[12], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[12], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Update:1/4 (/7 e.Errors/5 )/8 t.Config/9 s.LineNum/11 # Fails/12 e.ErrorMessage/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors as range 5
  // closed e.ErrorMessage as range 2
  //DEBUG: t.Config: 9
  //DEBUG: s.LineNum: 11
  //DEBUG: e.Errors: 5
  //DEBUG: e.ErrorMessage: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LineNum/11 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 AsIs: t.Config/9 } Tile{ AsIs: e.Errors/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.LineNum11 /12 AsIs: e.ErrorMessage/2 HalfReuse: )/1 } Tile{ HalfReuse: )/4 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_svar( context[12], context[11] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::link_brackets( context[8], context[4] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Update_B1("Update:1", COOKIE1_, COOKIE2_, func_gen_Update_B1);


static refalrts::FnResult func_Update(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Update/4 t.Config/5 (/9 e.Errors/7 )/10 s.Updater/11 s.LineNum/12 e.Option/2 >/1
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
  // closed e.Errors as range 7
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Option as range 2
  //DEBUG: t.Config: 5
  //DEBUG: e.Errors: 7
  //DEBUG: s.Updater: 11
  //DEBUG: s.LineNum: 12
  //DEBUG: e.Option: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 } Tile{ AsIs: (/9 AsIs: e.Errors/7 AsIs: )/10 } Tile{ AsIs: t.Config/5 } Tile{ AsIs: s.LineNum/12 } </13 Tile{ AsIs: s.Updater/11 } t.Config/5/14 Tile{ AsIs: e.Option/2 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Update("Update", COOKIE1_, COOKIE2_, func_Update);


static refalrts::FnResult func_PrintHelp(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & PrintHelp/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: ' '/1 }" rlmake flags... MainFileName[.ref]\n\nflags:\n-c, --cpp-command, --cpp-command-exe command-line\n        C++ command line prefix for building executable module\n--cpp-command-lib command-line\n        C++ command line prefix for building library module\n-p, --prefix prefix-name\n        set prefix file name\n-r, --reference reference-name\n        Compiled module depends from the reference\n-D, --runtime-dir, --runtime-directory dir\n        Add the directory to search list and include list for C++ compiler\n-d, --dir, --directory dir\n        Add the directory to search list\n--rlc-command command-line\n        rlc command line prefix for run Refal-5-Lambda compiler\n-X, --thru, --through rlc-command\n        Additional flags for rlc compiler, don\'t quoted in command line\n-o, --target-file target-file-name\n        Name of target file\n-x, --makeexe\n        Compile to executable file\n-l, --makelib\n        Compile to library file (with or w/o native code)\n-R      Compile to library RASL module (w/o native code)\n-C, --compile-only\n        Compile sources w/o linking\n--prelude filename.refi\n        Prelude file with builtin functions declarations\n--runtime filename.ref\n        Auxiliary files -- search roots\n--incorporated filename\n        Marks that a module with the name is statically linked to this module\n--help  Print this help\n--version\n        Print version\n--keep-rasl, --keep-rasls, --dont-keep-rasl, --dont-keep-rasls\n        Save or don\'t save temporary .rasl after compilation\n--tmp-dir, --temp-dir directory\n        Directory for intermediate .rasl files, current is default\n--ref5rsl\n        Use environment variable REF5RSL as search path\n--overwrite-exist-rasls, --dont-overwrite-exist-rasls,\n--overwrite-exist-rasl, --dont-overwrite-exist-rasl\n        If tmp-dir already contain file with name that being produced\n        new file use new name\n"/5 >/7 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], " rlmake flags... MainFileName[.ref]\n\nflags:\n-c, --cpp-command, --cpp-command-exe command-line\n        C++ command line prefix for building executable module\n--cpp-command-lib command-line\n        C++ command line prefix for building library module\n-p, --prefix prefix-name\n        set prefix file name\n-r, --reference reference-name\n        Compiled module depends from the reference\n-D, --runtime-dir, --runtime-directory dir\n        Add the directory to search list and include list for C++ compiler\n-d, --dir, --directory dir\n        Add the directory to search list\n--rlc-command command-line\n        rlc command line prefix for run Refal-5-Lambda compiler\n-X, --thru, --through rlc-command\n        Additional flags for rlc compiler, don\'t quoted in command line\n-o, --target-file target-file-name\n        Name of target file\n-x, --makeexe\n        Compile to executable file\n-l, --makelib\n        Compile to library file (with or w/o native code)\n-R      Compile to library RASL module (w/o native code)\n-C, --compile-only\n        Compile sources w/o linking\n--prelude filename.refi\n        Prelude file with builtin functions declarations\n--runtime filename.ref\n        Auxiliary files -- search roots\n--incorporated filename\n        Marks that a module with the name is statically linked to this module\n--help  Print this help\n--version\n        Print version\n--keep-rasl, --keep-rasls, --dont-keep-rasl, --dont-keep-rasls\n        Save or don\'t save temporary .rasl after compilation\n--tmp-dir, --temp-dir directory\n        Directory for intermediate .rasl files, current is default\n--ref5rsl\n        Use environment variable REF5RSL as search path\n--overwrite-exist-rasls, --dont-overwrite-exist-rasls,\n--overwrite-exist-rasl, --dont-overwrite-exist-rasl\n        If tmp-dir already contain file with name that being produced\n        new file use new name\n", 1861);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::reinit_char(context[1], ' ');
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintHelp("PrintHelp", 0U, 0U, func_PrintHelp);


//End of file
