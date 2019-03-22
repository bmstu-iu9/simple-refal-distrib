// This file automatically generated from 'ParseCmdLine.ref'
// Don't edit! Edit 'ParseCmdLine.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_461817591_3866325643

enum efunc {
  efunc_gen_Mu_C1 = 0,
  efunc_Mu = 1,
  efunc_u_u_Stepm_Start = 2,
  efunc_u_u_Mum_Aux = 3,
  efunc_u_u_Stepm_End = 4,
  efunc_gen_u_u_Mum_Aux_S13B1 = 5,
  efunc_u_u_FindMuPtr = 6,
  efunc_Add = 7,
  efunc_Div = 8,
  efunc_Mod = 9,
  efunc_Mul = 10,
  efunc_Residue = 11,
  efunc_Sub = 12,
  efunc_Type = 13,
  efunc_Up = 14,
  efunc_Evm_met = 15,
  efunc_gen_Residue_C1 = 16,
  efunc_gen_ParseCommandLine_L1 = 17,
  efunc_Configm_Create = 18,
  efunc_gen_ParseCommandLine_L2 = 19,
  efunc_Update = 20,
  efunc_Configm_SetCppCompiler = 21,
  efunc_Configm_SetCompilerFlags = 22,
  efunc_Configm_SetDebugInfo = 23,
  efunc_Configm_SetErrorFile = 24,
  efunc_Configm_SetGrammarCheck = 25,
  efunc_Configm_AddIncorporated = 26,
  efunc_Configm_SetMarkupContext = 27,
  efunc_Configm_SetOptFlags = 28,
  efunc_Configm_SetPrefix = 29,
  efunc_Configm_AddReference = 30,
  efunc_Configm_SetTargetFileName = 31,
  efunc_Configm_SetTargetMode = 32,
  efunc_Configm_SetTargetSuffix = 33,
  efunc_Configm_SetChmodXCommand = 34,
  efunc_Configm_SetPrelude = 35,
  efunc_Configm_SetR5Mode = 36,
  efunc_Configm_SetLogFile = 37,
  efunc_Configm_SetTreeOptCycles = 38,
  efunc_gen_ParseCommandLine_L3 = 39,
  efunc_Configm_SetSearchFolder = 40,
  efunc_gen_ParseCommandLine_L4S2L1 = 41,
  efunc_gen_ParseCommandLine_L4 = 42,
  efunc_Map = 43,
  efunc_ParseCommandLine = 44,
  efunc_GetOpt = 45,
  efunc_Pipe = 46,
  efunc_MapReduce = 47,
  efunc_Fetch = 48,
  efunc_gen_Update_L1 = 49,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_CppCompilerm_Exe = 6,
  ident_EXE = 7,
  ident_CppCompilerm_Lib = 8,
  ident_LIB = 9,
  ident_CppFlag = 10,
  ident_CppFlags = 11,
  ident_DebugInfo = 12,
  ident_ErrorFile = 13,
  ident_GrammarCheck = 14,
  ident_Incorporated = 15,
  ident_MarkupContext = 16,
  ident_Opt = 17,
  ident_Prefix = 18,
  ident_Reference = 19,
  ident_RuntimeFolder = 20,
  ident_SearchFolder = 21,
  ident_TargetFileName = 22,
  ident_TargetModem_Exe = 23,
  ident_TargetModem_Lib = 24,
  ident_TargetModem_R = 25,
  ident_R = 26,
  ident_TargetModem_C = 27,
  ident_CompileOnly = 28,
  ident_TargetSuffixm_Exe = 29,
  ident_TargetSuffixm_Lib = 30,
  ident_ChmodXCommand = 31,
  ident_Prelude = 32,
  ident_ClassicMode = 33,
  ident_Classic = 34,
  ident_ExtendedMode = 35,
  ident_Extended = 36,
  ident_Log = 37,
  ident_TreeOptCycles = 38,
  ident_FILE = 39,
  ident_NoRequiredParam = 40,
  ident_UnknownShortOption = 41,
  ident_UnknownLongOption = 42,
  ident_BadValuem_Opt = 43,
  ident_EmptyErrorFileName = 44,
  ident_TargetModeAlreadySet = 45,
  ident_BadValuem_MustBeNumber = 46,
  ident_Success = 47,
  ident_Fails = 48,
  ident_Required = 49,
  ident_None = 50,
};


static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Mu/4 t.Function#1/5 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Arg#1 as range 2
  //DEBUG: t.Function#1: 5
  //DEBUG: e.Arg#1: 2
  //2: e.Arg#1
  //5: t.Function#1
  //15: t.Function#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], functions[efunc_gen_Mu_C1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], functions[efunc_u_u_Stepm_Start] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], functions[efunc_u_u_Mum_Aux] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[15], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
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
    // </7 & Mu?1/11 s.Function-Ptr#2/12 >/8
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.Function#1: 5
    //DEBUG: e.Arg#1: 2
    //DEBUG: s.Function-Ptr#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Function#1/5 {REMOVED TILE} {REMOVED TILE} >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-End/4 } Tile{ HalfReuse: >/7 HalfReuse: </11 AsIs: s.Function-Ptr#2/12 } Tile{ AsIs: e.Arg#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], functions[efunc_u_u_Stepm_End] );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Mu("Mu", 461817591U, 3866325643U, func_Mu);


static refalrts::FnResult func_gen_u_u_Mum_Aux_S13B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & __Mu-Aux$13:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & __Mu-Aux$13:1/4 s.new#1/5 s.new#2/6 t.new#3/7 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & __Mu-Aux$13:1/4 s.new#4/5 s.new#5/6 s.new#6/7 >/1
    if( ! refalrts::svar_term( context[7], context[7] ) )
      continue;
    do {
      // </0 & __Mu-Aux$13:1/4 'F'/5 s.SubType#2/6 s.FnPtr#2/7 >/1
      if( ! refalrts::char_term( 'F', context[5] ) )
        continue;
      //DEBUG: s.SubType#2: 6
      //DEBUG: s.FnPtr#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux$13:1/4 'F'/5 s.SubType#2/6 s.FnPtr#2/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.FnPtr2 #7/1 ]] }
      refalrts::reinit_svar( context[1], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & __Mu-Aux$13:1/4 'W'/5 s.SubType#2/6 s.FnName#2/7 >/1
    if( ! refalrts::char_term( 'W', context[5] ) )
      continue;
    //DEBUG: s.SubType#2: 6
    //DEBUG: s.FnName#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.SubType#2/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __FindMuPtr/4 HalfReuse: <Cookie1>/5 } <Cookie2>/9 Tile{ AsIs: s.FnName#2/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_number( vm, context[9], 3866325643UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], functions[efunc_u_u_FindMuPtr] );
    refalrts::reinit_number( context[5], 461817591UL );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & __Mu-Aux$13:1/4 'B'/5 s.0#2/6 (/7 e.FnName#2/9 )/8 >/1
  context[9] = 0;
  context[10] = 0;
  if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_term( 'B', context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FnName#2 as range 9
  //DEBUG: s.0#2: 6
  //DEBUG: e.FnName#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.0#2/6 {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __FindMuPtr/4 HalfReuse: <Cookie1>/5 } Tile{ HalfReuse: <Cookie2>/7 } Tile{ AsIs: e.FnName#2/9 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], functions[efunc_u_u_FindMuPtr] );
  refalrts::reinit_number( context[5], 461817591UL );
  refalrts::reinit_number( context[7], 3866325643UL );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 461817591U, 3866325643U, func_gen_u_u_Mum_Aux_S13B1);


static refalrts::FnResult func_u_u_Mum_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & __Mu-Aux/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & __Mu-Aux/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & __Mu-Aux/4 s.new#2/5 >/1
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    do {
      // </0 & __Mu-Aux/4 '+'/5 >/1
      if( ! refalrts::char_term( '+', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '+'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Add] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '/'/5 >/1
      if( ! refalrts::char_term( '/', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '/'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Div] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '%'/5 >/1
      if( ! refalrts::char_term( '%', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '%'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Mod] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '*'/5 >/1
      if( ! refalrts::char_term( '*', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '*'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Mul] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '?'/5 >/1
      if( ! refalrts::char_term( '?', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '?'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Residue] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '-'/5 >/1
      if( ! refalrts::char_term( '-', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '-'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Sub] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # +/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k43_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # +/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Add] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # //5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k47_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # //5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Div] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # %/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k37_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # %/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Mod] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # */5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k42_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # */5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Mul] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # ?/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k63_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # ?/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Residue] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & __Mu-Aux/4 # -/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_m_], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # -/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
    refalrts::reinit_name( context[1], functions[efunc_Sub] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & __Mu-Aux/4 t.Function#1/5 >/1
  //DEBUG: t.Function#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & __Mu-Aux$13:1/8 Tile{ AsIs: </0 Reuse: & Type/4 AsIs: t.Function#1/5 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[8], functions[efunc_gen_u_u_Mum_Aux_S13B1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_Type] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 461817591U, 3866325643U, func_u_u_Mum_Aux);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Residue/4 t.Function#1/5 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Arg#1 as range 2
  //DEBUG: t.Function#1: 5
  //DEBUG: e.Arg#1: 2
  //2: e.Arg#1
  //5: t.Function#1
  //15: t.Function#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], functions[efunc_gen_Residue_C1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], functions[efunc_u_u_Stepm_Start] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], functions[efunc_u_u_Mum_Aux] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[15], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
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
    // </7 & Residue?1/11 s.Function-Ptr#2/12 >/8
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.Function#1: 5
    //DEBUG: e.Arg#1: 2
    //DEBUG: s.Function-Ptr#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Function#1/5 {REMOVED TILE} {REMOVED TILE} >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-End/4 } Tile{ HalfReuse: >/7 HalfReuse: </11 AsIs: s.Function-Ptr#2/12 } Tile{ AsIs: e.Arg#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], functions[efunc_u_u_Stepm_End] );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Residue("Residue", 461817591U, 3866325643U, func_Residue);


static refalrts::FnResult func_gen_ParseCommandLine_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ParseCommandLine\1/4 (/7 e.Errors#2/5 )/8 e.Options#2/2 >/1
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
  // closed e.Errors#2 as range 5
  // closed e.Options#2 as range 2
  //DEBUG: e.Errors#2: 5
  //DEBUG: e.Options#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & Config-Create/4 HalfReuse: >/7 AsIs: e.Errors#2/5 AsIs: )/8 } Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[1] );
  refalrts::update_name( context[4], functions[efunc_Configm_Create] );
  refalrts::reinit_close_call( context[7] );
  refalrts::link_brackets( context[1], context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L1("ParseCommandLine\\1", 461817591U, 3866325643U, func_gen_ParseCommandLine_L1);


static refalrts::FnResult func_gen_ParseCommandLine_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & ParseCommandLine\2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseCommandLine\2/4 (/7 t.new#1/9 e.new#2/5 )/8 t.new#3/11 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseCommandLine\2/4 (/7 t.new#4/9 e.new#5/5 )/8 (/11 s.new#6/15 s.new#7/16 e.new#8/13 )/12 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    // closed e.new#5 as range 5
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.new#8 as range 13
    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # CppCompiler-Exe/15 s.Num#2/16 e.CppCompiler#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_CppCompilerm_Exe], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.CppCompiler#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.CppCompiler#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetCppCompiler/15 AsIs: s.Num#2/16 } Tile{ HalfReuse: # EXE/12 } Tile{ AsIs: e.CppCompiler#2/13 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetCppCompiler] );
      refalrts::reinit_ident( context[12], identifiers[ident_EXE] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[11], context[16] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # CppCompiler-Lib/15 s.Num#2/16 e.CppCompiler#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_CppCompilerm_Lib], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.CppCompiler#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.CppCompiler#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetCppCompiler/15 AsIs: s.Num#2/16 } Tile{ HalfReuse: # LIB/12 } Tile{ AsIs: e.CppCompiler#2/13 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetCppCompiler] );
      refalrts::reinit_ident( context[12], identifiers[ident_LIB] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[11], context[16] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # CppFlag/15 s.Num#2/16 e.Flag#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_CppFlag], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.Flag#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.Flag#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num#2/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: )/8 HalfReuse: & Config-SetCompilerFlags/11 HalfReuse: s.Num2 #16/15 }" \""/17 Tile{ AsIs: e.Flag#2/13 } Tile{ HalfReuse: '\"'/12 AsIs: >/1 ]] }
      if( ! refalrts::alloc_chars( vm, context[17], context[18], " \"", 2 ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_name( context[11], functions[efunc_Configm_SetCompilerFlags] );
      refalrts::reinit_svar( context[15], context[16] );
      refalrts::reinit_char( context[12], '\"' );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[8], context[15] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # CppFlags/15 s.Num#2/16 e.Flags#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_CppFlags], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.Flags#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.Flags#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetCompilerFlags/15 AsIs: s.Num#2/16 } Tile{ HalfReuse: ' '/12 } Tile{ AsIs: e.Flags#2/13 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetCompilerFlags] );
      refalrts::reinit_char( context[12], ' ' );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[11], context[16] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # DebugInfo/15 s.Num#2/16 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_DebugInfo], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.Errors#2 as range 5
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # DebugInfo/15 s.Num#2/16 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: )/8 HalfReuse: & Config-SetDebugInfo/11 } Tile{ HalfReuse: s.Num2 #16/12 AsIs: >/1 ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_name( context[11], functions[efunc_Configm_SetDebugInfo] );
      refalrts::reinit_svar( context[12], context[16] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # ErrorFile/15 s.Num#2/16 e.FileName#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_ErrorFile], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.FileName#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.FileName#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetErrorFile/15 AsIs: s.Num#2/16 AsIs: e.FileName#2/13 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetErrorFile] );
      refalrts::reinit_close_call( context[12] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # GrammarCheck/15 s.Num#2/16 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_GrammarCheck], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.Errors#2 as range 5
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # GrammarCheck/15 s.Num#2/16 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: )/8 HalfReuse: & Config-SetGrammarCheck/11 } Tile{ HalfReuse: s.Num2 #16/12 AsIs: >/1 ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_name( context[11], functions[efunc_Configm_SetGrammarCheck] );
      refalrts::reinit_svar( context[12], context[16] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # Incorporated/15 s.Num#2/16 e.Name#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_Incorporated], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.Name#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.Name#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddIncorporated/15 AsIs: s.Num#2/16 AsIs: e.Name#2/13 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_AddIncorporated] );
      refalrts::reinit_close_call( context[12] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # MarkupContext/15 s.Num#2/16 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_MarkupContext], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.Errors#2 as range 5
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # MarkupContext/15 s.Num#2/16 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: )/8 HalfReuse: & Config-SetMarkupContext/11 } Tile{ HalfReuse: s.Num2 #16/12 AsIs: >/1 ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_name( context[11], functions[efunc_Configm_SetMarkupContext] );
      refalrts::reinit_svar( context[12], context[16] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # Opt/15 s.Num#2/16 e.Flags#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_Opt], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.Flags#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.Flags#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetOptFlags/15 AsIs: s.Num#2/16 AsIs: e.Flags#2/13 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetOptFlags] );
      refalrts::reinit_close_call( context[12] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # Prefix/15 s.Num#2/16 e.Prefix#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_Prefix], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.Prefix#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.Prefix#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetPrefix/15 AsIs: s.Num#2/16 AsIs: e.Prefix#2/13 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetPrefix] );
      refalrts::reinit_close_call( context[12] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # Reference/15 s.Num#2/16 e.Reference#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_Reference], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.Reference#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.Reference#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddReference/15 AsIs: s.Num#2/16 AsIs: e.Reference#2/13 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_AddReference] );
      refalrts::reinit_close_call( context[12] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # RuntimeFolder/15 s.Num#2/16 e.Path#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_RuntimeFolder], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.Path#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.Path#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } )/17 & Config-SetCompilerFlags/18 s.Num#2/16/19 ' '/20 Tile{ HalfReuse: '-'/1 }"I\""/21 e.Path#2/13/23 '\"'/25 Tile{ HalfReuse: >/8 AsIs: (/11 Reuse: # SearchFolder/15 AsIs: s.Num#2/16 AsIs: e.Path#2/13 AsIs: )/12 } Tile{ ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[18], functions[efunc_Configm_SetCompilerFlags] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[19], context[16]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( vm, context[20], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[21], context[22], "I\"", 2 ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(vm, context[23], context[24], context[13], context[14]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( vm, context[25], '\"' ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_char( context[1], '-' );
      refalrts::reinit_close_call( context[8] );
      refalrts::update_ident( context[15], identifiers[ident_SearchFolder] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[21], context[25] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[17], context[20] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # TargetFileName/15 s.Num#2/16 e.FileName#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_TargetFileName], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.FileName#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.FileName#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetFileName/15 AsIs: s.Num#2/16 AsIs: e.FileName#2/13 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetTargetFileName] );
      refalrts::reinit_close_call( context[12] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.new#9/9 e.new#10/5 )/8 (/11 s.new#11/15 s.new#12/16 )/12 >/1
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.new#10 as range 5
      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # TargetMode-Exe/15 s.Num#2/16 )/12 >/1
        if( ! refalrts::ident_term( identifiers[ident_TargetModem_Exe], context[15] ) )
          continue;
        // closed e.Errors#2 as range 5
        //DEBUG: t.Config#2: 9
        //DEBUG: s.Num#2: 16
        //DEBUG: e.Errors#2: 5

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetMode/15 AsIs: s.Num#2/16 HalfReuse: # EXE/12 AsIs: >/1 ]] }
        refalrts::update_name( context[4], functions[efunc_Update] );
        refalrts::reinit_close_bracket( context[11] );
        refalrts::reinit_name( context[15], functions[efunc_Configm_SetTargetMode] );
        refalrts::reinit_ident( context[12], identifiers[ident_EXE] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # TargetMode-Lib/15 s.Num#2/16 )/12 >/1
        if( ! refalrts::ident_term( identifiers[ident_TargetModem_Lib], context[15] ) )
          continue;
        // closed e.Errors#2 as range 5
        //DEBUG: t.Config#2: 9
        //DEBUG: s.Num#2: 16
        //DEBUG: e.Errors#2: 5

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetMode/15 AsIs: s.Num#2/16 HalfReuse: # LIB/12 AsIs: >/1 ]] }
        refalrts::update_name( context[4], functions[efunc_Update] );
        refalrts::reinit_close_bracket( context[11] );
        refalrts::reinit_name( context[15], functions[efunc_Configm_SetTargetMode] );
        refalrts::reinit_ident( context[12], identifiers[ident_LIB] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # TargetMode-R/15 s.Num#2/16 )/12 >/1
        if( ! refalrts::ident_term( identifiers[ident_TargetModem_R], context[15] ) )
          continue;
        // closed e.Errors#2 as range 5
        //DEBUG: t.Config#2: 9
        //DEBUG: s.Num#2: 16
        //DEBUG: e.Errors#2: 5

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetMode/15 AsIs: s.Num#2/16 HalfReuse: # R/12 AsIs: >/1 ]] }
        refalrts::update_name( context[4], functions[efunc_Update] );
        refalrts::reinit_close_bracket( context[11] );
        refalrts::reinit_name( context[15], functions[efunc_Configm_SetTargetMode] );
        refalrts::reinit_ident( context[12], identifiers[ident_R] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # TargetMode-C/15 s.Num#2/16 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_TargetModem_C], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetMode/15 AsIs: s.Num#2/16 HalfReuse: # CompileOnly/12 AsIs: >/1 ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetTargetMode] );
      refalrts::reinit_ident( context[12], identifiers[ident_CompileOnly] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # TargetSuffix-Exe/15 s.Num#2/16 e.Suffix#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_TargetSuffixm_Exe], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.Suffix#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.Suffix#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetSuffix/15 AsIs: s.Num#2/16 } Tile{ HalfReuse: # EXE/12 } Tile{ AsIs: e.Suffix#2/13 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetTargetSuffix] );
      refalrts::reinit_ident( context[12], identifiers[ident_EXE] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[11], context[16] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # TargetSuffix-Lib/15 s.Num#2/16 e.Suffix#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_TargetSuffixm_Lib], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.Suffix#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.Suffix#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetSuffix/15 AsIs: s.Num#2/16 } Tile{ HalfReuse: # LIB/12 } Tile{ AsIs: e.Suffix#2/13 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetTargetSuffix] );
      refalrts::reinit_ident( context[12], identifiers[ident_LIB] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[11], context[16] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # ChmodXCommand/15 s.Num#2/16 e.Command#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_ChmodXCommand], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.Command#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.Command#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetChmodXCommand/15 AsIs: s.Num#2/16 AsIs: e.Command#2/13 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetChmodXCommand] );
      refalrts::reinit_close_call( context[12] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # Prelude/15 s.Num#2/16 e.Prelude#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_Prelude], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.Prelude#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.Prelude#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetPrelude/15 AsIs: s.Num#2/16 AsIs: e.Prelude#2/13 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetPrelude] );
      refalrts::reinit_close_call( context[12] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.new#9/9 e.new#10/5 )/8 (/11 s.new#11/15 s.new#12/16 )/12 >/1
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.new#10 as range 5
      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # ClassicMode/15 s.Num#2/16 )/12 >/1
        if( ! refalrts::ident_term( identifiers[ident_ClassicMode], context[15] ) )
          continue;
        // closed e.Errors#2 as range 5
        //DEBUG: t.Config#2: 9
        //DEBUG: s.Num#2: 16
        //DEBUG: e.Errors#2: 5

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetR5Mode/15 AsIs: s.Num#2/16 HalfReuse: # Classic/12 AsIs: >/1 ]] }
        refalrts::update_name( context[4], functions[efunc_Update] );
        refalrts::reinit_close_bracket( context[11] );
        refalrts::reinit_name( context[15], functions[efunc_Configm_SetR5Mode] );
        refalrts::reinit_ident( context[12], identifiers[ident_Classic] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # ExtendedMode/15 s.Num#2/16 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_ExtendedMode], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetR5Mode/15 AsIs: s.Num#2/16 HalfReuse: # Extended/12 AsIs: >/1 ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetR5Mode] );
      refalrts::reinit_ident( context[12], identifiers[ident_Extended] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # Log/15 s.Num#2/16 e.LogFile#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_Log], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.LogFile#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.LogFile#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetLogFile/15 AsIs: s.Num#2/16 AsIs: e.LogFile#2/13 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetLogFile] );
      refalrts::reinit_close_call( context[12] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # TreeOptCycles/15 s.Num#2/16 e.Cycles#2/13 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_TreeOptCycles], context[15] ) )
        continue;
      // closed e.Errors#2 as range 5
      // closed e.Cycles#2 as range 13
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 16
      //DEBUG: e.Errors#2: 5
      //DEBUG: e.Cycles#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTreeOptCycles/15 AsIs: s.Num#2/16 AsIs: e.Cycles#2/13 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name( context[4], functions[efunc_Update] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_name( context[15], functions[efunc_Configm_SetTreeOptCycles] );
      refalrts::reinit_close_call( context[12] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 (/11 # Incorporated/15 s.Num#2/16 e.LibName#2/13 )/12 >/1
    if( ! refalrts::ident_term( identifiers[ident_Incorporated], context[15] ) )
      continue;
    // closed e.Errors#2 as range 5
    // closed e.LibName#2 as range 13
    //DEBUG: t.Config#2: 9
    //DEBUG: s.Num#2: 16
    //DEBUG: e.Errors#2: 5
    //DEBUG: e.LibName#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddIncorporated/15 AsIs: s.Num#2/16 AsIs: e.LibName#2/13 HalfReuse: >/12 } Tile{ ]] }
    refalrts::update_name( context[4], functions[efunc_Update] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_name( context[15], functions[efunc_Configm_AddIncorporated] );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 t.Option#2/11 >/1
  // closed e.Errors#2 as range 5
  //DEBUG: t.Config#2: 9
  //DEBUG: t.Option#2: 11
  //DEBUG: e.Errors#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseCommandLine\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Config#2/9 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: t.Option#2/11 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L2("ParseCommandLine\\2", 461817591U, 3866325643U, func_gen_ParseCommandLine_L2);


static refalrts::FnResult func_gen_ParseCommandLine_L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseCommandLine\3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseCommandLine\3/4 (/7 t.new#1/15 e.new#2/5 )/8 (/11 s.new#3/13 s.new#4/14 e.new#5/9 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 9
  context[16] = refalrts::tvar_left( context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & ParseCommandLine\3/4 (/7 t.Config#2/15 e.Errors#2/5 )/8 (/11 # SearchFolder/13 s.Num#2/14 e.Folder#2/9 )/12 >/1
    if( ! refalrts::ident_term( identifiers[ident_SearchFolder], context[13] ) )
      continue;
    // closed e.Errors#2 as range 5
    // closed e.Folder#2 as range 9
    //DEBUG: t.Config#2: 15
    //DEBUG: s.Num#2: 14
    //DEBUG: e.Errors#2: 5
    //DEBUG: e.Folder#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} s.Num#2/14 {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Config-SetSearchFolder/7 AsIs: t.Config#2/15 } Tile{ AsIs: e.Folder#2/9 } Tile{ HalfReuse: >/13 } Tile{ AsIs: e.Errors#2/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], functions[efunc_Configm_SetSearchFolder] );
    refalrts::reinit_close_call( context[13] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[16], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine\3/4 (/7 t.Config#2/15 e.Errors#2/5 )/8 (/11 # FILE/13 s.Num#2/14 e.FileName#2/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_FILE], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#2 as range 5
  // closed e.FileName#2 as range 9
  //DEBUG: t.Config#2: 15
  //DEBUG: s.Num#2: 14
  //DEBUG: e.Errors#2: 5
  //DEBUG: e.FileName#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseCommandLine\3/4 {REMOVED TILE} s.Num#2/14 {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Config#2/15 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 HalfReuse: s.Num2 #14/13 } Tile{ AsIs: e.FileName#2/9 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[13], context[14] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L3("ParseCommandLine\\3", 461817591U, 3866325643U, func_gen_ParseCommandLine_L3);


static refalrts::FnResult func_gen_ParseCommandLine_L4S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseCommandLine\4$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseCommandLine\4$2\1/4 (/7 s.new#1/9 s.new#2/10 e.new#3/5 )/8 >/1
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
  // closed e.new#3 as range 5
  do {
    // </0 & ParseCommandLine\4$2\1/4 (/7 s.Pos#3/9 # NoRequiredParam/10 e.Param#3/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_NoRequiredParam], context[10] ) )
      continue;
    // closed e.Param#3 as range 5
    //DEBUG: s.Pos#3: 9
    //DEBUG: e.Param#3: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 } Tile{ HalfReuse: 'p'/0 HalfReuse: 't'/4 }"ion "/11 Tile{ AsIs: e.Param#3/5 }" expects paramete"/13 Tile{ HalfReuse: 'r'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( vm, context[11], context[12], "ion ", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[13], context[14], " expects paramete", 17 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'o' );
    refalrts::reinit_char( context[0], 'p' );
    refalrts::reinit_char( context[4], 't' );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseCommandLine\4$2\1/4 (/7 s.Pos#3/9 # UnknownShortOption/10 s.Option#3/13 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_UnknownShortOption], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: s.Pos#3: 9
    //DEBUG: s.Option#3: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'u'/10 } 'n'/14 Tile{ HalfReuse: 'k'/1 } Tile{ HalfReuse: 'n'/0 HalfReuse: 'o'/4 }"wn option -"/15 Tile{ AsIs: s.Option#3/13 AsIs: )/8 } Tile{ ]] }
    if( ! refalrts::alloc_char( vm, context[14], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[15], context[16], "wn option -", 11 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'u' );
    refalrts::reinit_char( context[1], 'k' );
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'o' );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseCommandLine\4$2\1/4 (/7 s.Pos#3/9 # UnknownLongOption/10 e.Option#3/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_UnknownLongOption], context[10] ) )
      continue;
    // closed e.Option#3 as range 5
    //DEBUG: s.Pos#3: 9
    //DEBUG: e.Option#3: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'u'/10 }"nk"/11 Tile{ HalfReuse: 'n'/0 HalfReuse: 'o'/4 } Tile{ HalfReuse: 'w'/8 }"n option --"/13 Tile{ AsIs: e.Option#3/5 } Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( vm, context[11], context[12], "nk", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[13], context[14], "n option --", 11 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'u' );
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'o' );
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseCommandLine\4$2\1/4 (/7 s.Pos#3/9 # BadValue-Opt/10 e.BadValue#3/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_BadValuem_Opt], context[10] ) )
      continue;
    // closed e.BadValue#3 as range 5
    //DEBUG: s.Pos#3: 9
    //DEBUG: e.BadValue#3: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Pos#3/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Pos3 #9/4 HalfReuse: 'o'/7 }"ption -O expects \'d\', \'C\', \'D\', \'I\', \'P\', \'R\', \'S\', \'T\' or it\'s combination, but got "/11 Tile{ HalfReuse: '\''/10 AsIs: e.BadValue#3/5 HalfReuse: '\''/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( vm, context[11], context[12], "ption -O expects \'d\', \'C\', \'D\', \'I\', \'P\', \'R\', \'S\', \'T\' or it\'s combination, but got ", 85 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::reinit_char( context[7], 'o' );
    refalrts::reinit_char( context[10], '\'' );
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseCommandLine\4$2\1/4 (/7 s.new#4/9 s.new#5/10 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & ParseCommandLine\4$2\1/4 (/7 s.Pos#3/9 # EmptyErrorFileName/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_EmptyErrorFileName], context[10] ) )
        continue;
      //DEBUG: s.Pos#3: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 HalfReuse: 'p'/8 HalfReuse: 't'/1 } 'i'/11 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 }" --error-file expects non-empty argument"/12 )/14 Tile{ ]] }
      if( ! refalrts::alloc_char( vm, context[11], 'i' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[12], context[13], " --error-file expects non-empty argument", 40 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_char( context[10], 'o' );
      refalrts::reinit_char( context[8], 'p' );
      refalrts::reinit_char( context[1], 't' );
      refalrts::reinit_char( context[0], 'o' );
      refalrts::reinit_char( context[4], 'n' );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[12], context[14] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseCommandLine\4$2\1/4 (/7 s.Pos#3/9 # TargetModeAlreadySet/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TargetModeAlreadySet], context[10] ) )
      continue;
    //DEBUG: s.Pos#3: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 HalfReuse: 'p'/8 HalfReuse: 't'/1 } 'i'/11 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 }"s --makeexe (-x), --makelib (-l) and -R must appear one time"/12 )/14 Tile{ ]] }
    if( ! refalrts::alloc_char( vm, context[11], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[12], context[13], "s --makeexe (-x), --makelib (-l) and -R must appear one time", 60 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'o' );
    refalrts::reinit_char( context[8], 'p' );
    refalrts::reinit_char( context[1], 't' );
    refalrts::reinit_char( context[0], 'o' );
    refalrts::reinit_char( context[4], 'n' );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine\4$2\1/4 (/7 s.Pos#3/9 # BadValue-MustBeNumber/10 e.Cycles#3/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_BadValuem_MustBeNumber], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Cycles#3 as range 5
  //DEBUG: s.Pos#3: 9
  //DEBUG: e.Cycles#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Cycles#3/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 } 'p'/11 Tile{ HalfReuse: 't'/0 HalfReuse: 'i'/4 }"on --tree-opt-cycles expects number paramete"/12 Tile{ HalfReuse: 'r'/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_char( vm, context[11], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[12], context[13], "on --tree-opt-cycles expects number paramete", 44 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[10], 'o' );
  refalrts::reinit_char( context[0], 't' );
  refalrts::reinit_char( context[4], 'i' );
  refalrts::reinit_char( context[8], 'r' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L4S2L1("ParseCommandLine\\4$2\\1", 461817591U, 3866325643U, func_gen_ParseCommandLine_L4S2L1);


static refalrts::FnResult func_gen_ParseCommandLine_L4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ParseCommandLine\4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseCommandLine\4/4 (/7 t.new#1/9 e.new#2/5 )/8 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 2
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & ParseCommandLine\4/4 (/7 t.Config#2/9 )/8 e.FileNames#2/2 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.FileNames#2 as range 2
    //DEBUG: t.Config#2: 9
    //DEBUG: e.FileNames#2: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ParseCommandLine\4/4 {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/7 AsIs: t.Config#2/9 } Tile{ AsIs: e.FileNames#2/2 } Tile{ ]] }
    refalrts::reinit_ident( context[7], identifiers[ident_Success] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine\4/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 e.FileNames#2/2 >/1
  // closed e.Errors#2 as range 5
  // closed e.FileNames#2 as range 2
  //DEBUG: t.Config#2: 9
  //DEBUG: e.Errors#2: 5
  //DEBUG: e.FileNames#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.Config#2/9 {REMOVED TILE} {REMOVED TILE} e.FileNames#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: </4 HalfReuse: & Map/7 } Tile{ HalfReuse: & ParseCommandLine\4$2\1/8 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_ident( context[0], identifiers[ident_Fails] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], functions[efunc_Map] );
  refalrts::reinit_name( context[8], functions[efunc_gen_ParseCommandLine_L4S2L1] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L4("ParseCommandLine\\4", 461817591U, 3866325643U, func_gen_ParseCommandLine_L4);


static refalrts::FnResult func_ParseCommandLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 290 elems
  refalrts::Iter context[290];
  refalrts::zeros( context, 290 );
  // </0 & ParseCommandLine/4 e.Arguments#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arguments#1 as range 2
  //DEBUG: e.Arguments#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & GetOpt/6 (/7 (/8 # CppCompiler-Exe/9 # Required/10 'c'/11 (/12"cpp-command"/13 )/15 (/16"cpp-command-exe"/17 )/19 )/20 (/21 # CppCompiler-Lib/22 # Required/23 (/24"cpp-command-lib"/25 )/27 )/28 (/29 # CppFlag/30 # Required/31 'f'/32 (/33"cppflag"/34 )/36 )/37 (/38 # CppFlags/39 # Required/40 'F'/41 (/42"cppflags"/43 )/45 )/46 (/47 # DebugInfo/48 # None/49 'g'/50 (/51"debug-info"/52 )/54 )/55 (/56 # ErrorFile/57 # Required/58 'e'/59 (/60"error-file"/61 )/63 )/64 (/65 # GrammarCheck/66 # None/67 (/68"grammar-check"/69 )/71 )/72 (/73 # Incorporated/74 # Required/75 (/76"incorporated"/77 )/79 )/80 (/81 # MarkupContext/82 # None/83 (/84"markup-context"/85 )/87 )/88 (/89 # Opt/90 # Required/91 'O'/92 )/93 (/94 # Prefix/95 # Required/96 'p'/97 (/98"prefix"/99 )/101 )/102 (/103 # Reference/104 # Required/105 'r'/106 (/107"reference"/108 )/110 )/111 (/112 # RuntimeFolder/113 # Required/114 'D'/115 (/116"runtime-dir"/117 )/119 (/120"runtime-directory"/121 )/123 )/124 (/125 # SearchFolder/126 # Required/127 'd'/128 (/129"dir"/130 )/132 (/133"directory"/134 )/136 )/137 (/138 # TargetFileName/139 # Required/140 'o'/141 (/142"target-file"/143 )/145 )/146 (/147 # TargetMode-Exe/148 # None/149 'x'/150 (/151"makeexe"/152 )/154 )/155 (/156 # TargetMode-Lib/157 # None/158 'l'/159 (/160"makelib"/161 )/163 )/164 (/165 # TargetMode-R/166 # None/167 'R'/168 )/169 (/170 # TargetMode-C/171 # None/172 'C'/173 (/174"compile-only"/175 )/177 )/178 (/179 # TargetSuffix-Exe/180 # Required/181 (/182"targsuffix"/183 )/185 (/186"targetsuffix"/187 )/189 (/190"targsuf"/191 )/193 (/194"exesuffix"/195 )/197 (/198"exesuf"/199 )/201 )/202 (/203 # TargetSuffix-Lib/204 # Required/205 (/206"libsuffix"/207 )/209 (/210"libsuf"/211 )/213 )/214 (/215 # ChmodXCommand/216 # Required/217 (/218"chmod-x"/219 )/221 (/222"chmod-x-command"/223 )/225 )/226 (/227 # Prelude/228 # Required/229 (/230"prelude"/231 )/233 )/234 (/235 # ClassicMode/236 # None/237 (/238"classic"/239 )/241 )/242 (/243 # ExtendedMode/244 # None/245 (/246"extended"/247 )/249 )/250 (/251 # Log/252 # Required/253 (/254"log"/255 )/257 )/258 (/259 # TreeOptCycles/260 # Required/261 (/262"opt-tree-cycles"/263 )/265 )/266 (/267 # Incorporated/268 # Required/269 (/270"incorporated"/271 )/273 )/274 )/275 Tile{ AsIs: e.Arguments#1/2 } >/276 </277 & Pipe/278 & ParseCommandLine\1/279 (/280 & MapReduce/281 & ParseCommandLine\2/282 )/283 (/284 & MapReduce/285 & ParseCommandLine\3/286 )/287 & ParseCommandLine\4/288 >/289 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[6], functions[efunc_GetOpt] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[9], identifiers[ident_CppCompilerm_Exe] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[10], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[11], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[13], context[14], "cpp-command", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[17], context[18], "cpp-command-exe", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[22], identifiers[ident_CppCompilerm_Lib] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[23], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[25], context[26], "cpp-command-lib", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[30], identifiers[ident_CppFlag] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[31], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[32], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[34], context[35], "cppflag", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[39], identifiers[ident_CppFlags] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[40], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[41], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[43], context[44], "cppflags", 8 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[48], identifiers[ident_DebugInfo] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[49], identifiers[ident_None] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[50], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[51] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[52], context[53], "debug-info", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[54] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[55] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[56] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[57], identifiers[ident_ErrorFile] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[58], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[59], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[60] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[61], context[62], "error-file", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[63] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[64] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[65] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[66], identifiers[ident_GrammarCheck] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[67], identifiers[ident_None] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[68] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[69], context[70], "grammar-check", 13 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[71] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[72] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[73] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[74], identifiers[ident_Incorporated] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[75], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[76] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[77], context[78], "incorporated", 12 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[79] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[80] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[81] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[82], identifiers[ident_MarkupContext] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[83], identifiers[ident_None] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[84] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[85], context[86], "markup-context", 14 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[87] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[88] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[89] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[90], identifiers[ident_Opt] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[91], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[92], 'O' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[93] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[94] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[95], identifiers[ident_Prefix] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[96], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[97], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[98] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[99], context[100], "prefix", 6 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[101] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[102] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[103] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[104], identifiers[ident_Reference] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[105], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[106], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[107] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[108], context[109], "reference", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[110] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[111] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[112] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[113], identifiers[ident_RuntimeFolder] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[114], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[115], 'D' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[116] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[117], context[118], "runtime-dir", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[119] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[120] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[121], context[122], "runtime-directory", 17 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[123] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[124] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[125] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[126], identifiers[ident_SearchFolder] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[127], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[128], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[129] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[130], context[131], "dir", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[132] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[133] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[134], context[135], "directory", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[136] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[137] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[138] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[139], identifiers[ident_TargetFileName] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[140], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[141], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[142] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[143], context[144], "target-file", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[145] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[146] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[147] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[148], identifiers[ident_TargetModem_Exe] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[149], identifiers[ident_None] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[150], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[151] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[152], context[153], "makeexe", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[154] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[155] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[156] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[157], identifiers[ident_TargetModem_Lib] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[158], identifiers[ident_None] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[159], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[160] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[161], context[162], "makelib", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[163] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[164] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[165] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[166], identifiers[ident_TargetModem_R] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[167], identifiers[ident_None] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[168], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[169] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[170] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[171], identifiers[ident_TargetModem_C] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[172], identifiers[ident_None] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[173], 'C' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[174] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[175], context[176], "compile-only", 12 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[177] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[178] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[179] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[180], identifiers[ident_TargetSuffixm_Exe] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[181], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[182] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[183], context[184], "targsuffix", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[185] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[186] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[187], context[188], "targetsuffix", 12 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[189] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[190] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[191], context[192], "targsuf", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[193] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[194] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[195], context[196], "exesuffix", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[197] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[198] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[199], context[200], "exesuf", 6 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[201] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[202] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[203] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[204], identifiers[ident_TargetSuffixm_Lib] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[205], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[206] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[207], context[208], "libsuffix", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[209] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[210] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[211], context[212], "libsuf", 6 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[213] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[214] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[215] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[216], identifiers[ident_ChmodXCommand] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[217], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[218] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[219], context[220], "chmod-x", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[221] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[222] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[223], context[224], "chmod-x-command", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[225] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[226] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[227] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[228], identifiers[ident_Prelude] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[229], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[230] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[231], context[232], "prelude", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[233] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[234] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[235] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[236], identifiers[ident_ClassicMode] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[237], identifiers[ident_None] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[238] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[239], context[240], "classic", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[241] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[242] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[243] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[244], identifiers[ident_ExtendedMode] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[245], identifiers[ident_None] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[246] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[247], context[248], "extended", 8 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[249] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[250] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[251] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[252], identifiers[ident_Log] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[253], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[254] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[255], context[256], "log", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[257] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[258] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[259] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[260], identifiers[ident_TreeOptCycles] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[261], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[262] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[263], context[264], "opt-tree-cycles", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[265] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[266] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[267] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[268], identifiers[ident_Incorporated] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[269], identifiers[ident_Required] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[270] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[271], context[272], "incorporated", 12 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[273] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[274] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[275] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[276] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[277] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[278], functions[efunc_Pipe] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[279], functions[efunc_gen_ParseCommandLine_L1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[280] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[281], functions[efunc_MapReduce] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[282], functions[efunc_gen_ParseCommandLine_L2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[283] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[284] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[285], functions[efunc_MapReduce] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[286], functions[efunc_gen_ParseCommandLine_L3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[287] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[288], functions[efunc_gen_ParseCommandLine_L4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[289] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_Fetch] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[289] );
  refalrts::push_stack( vm, context[277] );
  refalrts::link_brackets( context[284], context[287] );
  refalrts::link_brackets( context[280], context[283] );
  refalrts::push_stack( vm, context[276] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[275] );
  refalrts::link_brackets( context[267], context[274] );
  refalrts::link_brackets( context[270], context[273] );
  refalrts::link_brackets( context[259], context[266] );
  refalrts::link_brackets( context[262], context[265] );
  refalrts::link_brackets( context[251], context[258] );
  refalrts::link_brackets( context[254], context[257] );
  refalrts::link_brackets( context[243], context[250] );
  refalrts::link_brackets( context[246], context[249] );
  refalrts::link_brackets( context[235], context[242] );
  refalrts::link_brackets( context[238], context[241] );
  refalrts::link_brackets( context[227], context[234] );
  refalrts::link_brackets( context[230], context[233] );
  refalrts::link_brackets( context[215], context[226] );
  refalrts::link_brackets( context[222], context[225] );
  refalrts::link_brackets( context[218], context[221] );
  refalrts::link_brackets( context[203], context[214] );
  refalrts::link_brackets( context[210], context[213] );
  refalrts::link_brackets( context[206], context[209] );
  refalrts::link_brackets( context[179], context[202] );
  refalrts::link_brackets( context[198], context[201] );
  refalrts::link_brackets( context[194], context[197] );
  refalrts::link_brackets( context[190], context[193] );
  refalrts::link_brackets( context[186], context[189] );
  refalrts::link_brackets( context[182], context[185] );
  refalrts::link_brackets( context[170], context[178] );
  refalrts::link_brackets( context[174], context[177] );
  refalrts::link_brackets( context[165], context[169] );
  refalrts::link_brackets( context[156], context[164] );
  refalrts::link_brackets( context[160], context[163] );
  refalrts::link_brackets( context[147], context[155] );
  refalrts::link_brackets( context[151], context[154] );
  refalrts::link_brackets( context[138], context[146] );
  refalrts::link_brackets( context[142], context[145] );
  refalrts::link_brackets( context[125], context[137] );
  refalrts::link_brackets( context[133], context[136] );
  refalrts::link_brackets( context[129], context[132] );
  refalrts::link_brackets( context[112], context[124] );
  refalrts::link_brackets( context[120], context[123] );
  refalrts::link_brackets( context[116], context[119] );
  refalrts::link_brackets( context[103], context[111] );
  refalrts::link_brackets( context[107], context[110] );
  refalrts::link_brackets( context[94], context[102] );
  refalrts::link_brackets( context[98], context[101] );
  refalrts::link_brackets( context[89], context[93] );
  refalrts::link_brackets( context[81], context[88] );
  refalrts::link_brackets( context[84], context[87] );
  refalrts::link_brackets( context[73], context[80] );
  refalrts::link_brackets( context[76], context[79] );
  refalrts::link_brackets( context[65], context[72] );
  refalrts::link_brackets( context[68], context[71] );
  refalrts::link_brackets( context[56], context[64] );
  refalrts::link_brackets( context[60], context[63] );
  refalrts::link_brackets( context[47], context[55] );
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
  res = refalrts::splice_evar( res, context[276], context[289] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[275] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseCommandLine("ParseCommandLine", 0U, 0U, func_ParseCommandLine);


static refalrts::FnResult func_gen_Update_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Update\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Update\1/4 (/7 e.new#1/5 )/8 t.new#2/9 s.new#3/11 s.new#4/12 e.new#5/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & Update\1/4 (/7 e.Errors#1/5 )/8 t.Config#1/9 s.LineNum#1/11 # Success/12 t.Config#2/15 >/1
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[12] ) )
      continue;
    // closed e.Errors#1 as range 5
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: t.Config#1: 9
    //DEBUG: s.LineNum#1: 11
    //DEBUG: e.Errors#1: 5
    //DEBUG: t.Config#2: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Update\1/4 (/7 {REMOVED TILE} )/8 t.Config#1/9 s.LineNum#1/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 AsIs: t.Config#2/15 } Tile{ AsIs: e.Errors#1/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Update\1/4 (/7 e.Errors#1/5 )/8 t.Config#1/9 s.LineNum#1/11 # Fails/12 e.ErrorMessage#2/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 5
  // closed e.ErrorMessage#2 as range 2
  //DEBUG: t.Config#1: 9
  //DEBUG: s.LineNum#1: 11
  //DEBUG: e.Errors#1: 5
  //DEBUG: e.ErrorMessage#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LineNum#1/11 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 AsIs: t.Config#1/9 } Tile{ AsIs: e.Errors#1/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.LineNum1 #11/12 AsIs: e.ErrorMessage#2/2 HalfReuse: )/1 } Tile{ HalfReuse: )/4 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_svar( context[12], context[11] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Update_L1("Update\\1", 461817591U, 3866325643U, func_gen_Update_L1);


static refalrts::FnResult func_Update(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Update/4 t.Config#1/5 (/9 e.Errors#1/7 )/10 s.Updater#1/11 s.LineNum#1/12 e.Option#1/2 >/1
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
  // closed e.Errors#1 as range 7
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Option#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Errors#1: 7
  //DEBUG: s.Updater#1: 11
  //DEBUG: s.LineNum#1: 12
  //DEBUG: e.Option#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </13 Tile{ AsIs: s.Updater#1/11 } Tile{ AsIs: t.Config#1/5 } Tile{ AsIs: e.Option#1/2 } >/14 [*]/15 & Update\1/16 Tile{ AsIs: (/9 AsIs: e.Errors#1/7 AsIs: )/10 } t.Config#1/5/17 Tile{ AsIs: s.LineNum#1/12 } {*}/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[16], functions[efunc_gen_Update_L1] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[19], context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_Fetch] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[19] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Update("Update", 461817591U, 3866325643U, func_Update);


//End of file
