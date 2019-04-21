// This file automatically generated from 'rsl-decompiler.ref'
// Don't edit! Edit 'rsl-decompiler.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_982870901_3115847316

enum efunc {
  efunc_gen_Mu_C1 = 0,
  efunc_u_u_Stepm_Start = 1,
  efunc_u_u_Mum_Aux = 2,
  efunc_u_u_Stepm_End = 3,
  efunc_u_u_FindMuPtr = 4,
  efunc_Add = 5,
  efunc_Div = 6,
  efunc_Mod = 7,
  efunc_Mul = 8,
  efunc_Residue = 9,
  efunc_Sub = 10,
  efunc_gen_u_u_Mum_Aux_S13B1 = 11,
  efunc_Type = 12,
  efunc_gen_Residue_C1 = 13,
  efunc_ArgList = 14,
  efunc_Main = 15,
  efunc_Map = 16,
  efunc_ProcessFile = 17,
  efunc_Prout = 18,
  efunc_SaveFile = 19,
  efunc_gen_ProcessFile_A6B1 = 20,
  efunc_gen_ProcessFile_A6 = 21,
  efunc_FormatWord = 22,
  efunc_CommentLine = 23,
  efunc_gen_ProcessFile_A5L1 = 24,
  efunc_Rev = 25,
  efunc_gen_ProcessFile_A5L3 = 26,
  efunc_gen_ProcessFile_A5 = 27,
  efunc_CleanupBuiltins = 28,
  efunc_gen_ProcessFile_A5L2 = 29,
  efunc_DecompileFunction = 30,
  efunc_gen_ProcessFile_A4 = 31,
  efunc_Disassemble = 32,
  efunc_gen_ProcessFile_A3 = 33,
  efunc_DecodeStructure = 34,
  efunc_gen_ProcessFile_A2 = 35,
  efunc_LoadBytes = 36,
  efunc_gen_ProcessFile_A1 = 37,
  efunc_Explode = 38,
  efunc_gen_CleanupBuiltins_L1 = 39,
  efunc_ListOfBuiltin = 40,
  efunc_CleanupBuiltinsm_Aux = 41,
  efunc_gen_CleanupBuiltinsm_Aux_S1C1 = 42,
  efunc_gen_CleanupBuiltinsm_Aux_S1C1B1 = 43,
  efunc_ReadEntryPoints = 44,
  efunc_gen_DecodeStructure_A10 = 45,
  efunc_ReadWords = 46,
  efunc_gen_DecodeStructure_A9 = 47,
  efunc_ReadExterns = 48,
  efunc_gen_DecodeStructure_A8 = 49,
  efunc_ReadEntries = 50,
  efunc_gen_DecodeStructure_A7 = 51,
  efunc_ReadDWord = 52,
  efunc_gen_DecodeStructure_A6 = 53,
  efunc_gen_DecodeStructure_A5 = 54,
  efunc_gen_DecodeStructure_A4 = 55,
  efunc_gen_DecodeStructure_A3 = 56,
  efunc_gen_DecodeStructure_A2 = 57,
  efunc_gen_DecodeStructure_A1 = 58,
  efunc_ReadAsciiz = 59,
  efunc_Chr = 60,
  efunc_MakeDWord = 61,
  efunc_Dec = 62,
  efunc_gen_Disassemble_A7 = 63,
  efunc_ResolveFunctions = 64,
  efunc_CheckupEntries = 65,
  efunc_gen_Disassemble_A6 = 66,
  efunc_gen_Disassemble_A5 = 67,
  efunc_CheckupFunctionStarts = 68,
  efunc_MakeFunctionTable = 69,
  efunc_gen_Disassemble_A4 = 70,
  efunc_SplitByFunctions = 71,
  efunc_gen_Disassemble_A3 = 72,
  efunc_gen_Disassemble_A2 = 73,
  efunc_ResolveWords = 74,
  efunc_DecodeCommands = 75,
  efunc_gen_Disassemble_A1 = 76,
  efunc_gen_ResolveWords_A1 = 77,
  efunc_MapAccum = 78,
  efunc_gen_ResolveWords_A1L1 = 79,
  efunc_gen_SplitByFunctions_B1S1C1 = 80,
  efunc_DeclareCommand = 81,
  efunc_gen_SplitByFunctions_C1 = 82,
  efunc_gen_SplitByFunctions_B1 = 83,
  efunc_AddFunctionToTable = 84,
  efunc_gen_MakeFunctionTable_A3 = 85,
  efunc_gen_MakeFunctionTable_A2 = 86,
  efunc_gen_MakeFunctionTable_A1L1 = 87,
  efunc_gen_MakeFunctionTable_A1 = 88,
  efunc_gen_AddFunctionToTable_S2A2B1S1C1 = 89,
  efunc_IsObfuscated = 90,
  efunc_Symb = 91,
  efunc_IncName = 92,
  efunc_gen_AddFunctionToTable_S2C1 = 93,
  efunc_gen_AddFunctionToTable_S2A2 = 94,
  efunc_gen_AddFunctionToTable_S2A2B1 = 95,
  efunc_gen_AddFunctionToTable_S3A1B1 = 96,
  efunc_gen_AddFunctionToTable_S3A1 = 97,
  efunc_gen_IncName_S1C1 = 98,
  efunc_gen_IsObfuscated_S1C1 = 99,
  efunc_IsObfuscatedm_Tail = 100,
  efunc_gen_IsObfuscatedm_Tail_B1 = 101,
  efunc_ResolveFunctionsm_Body = 102,
  efunc_gen_ResolveFunctions_A1L1A1 = 103,
  efunc_gen_ResolveFunctions_A1L1 = 104,
  efunc_gen_ResolveFunctions_A1 = 105,
  efunc_Inc = 106,
  efunc_gen_DecodeCommands_S28A1 = 107,
  efunc_First = 108,
  efunc_gen_DecodeCommands_S29A1 = 109,
  efunc_gen_DecodeCommands_S30A1 = 110,
  efunc_Len = 111,
  efunc_gen_Len_A1 = 112,
  efunc_Lenw = 113,
  efunc_AllString = 114,
  efunc_Ord = 115,
  efunc_gen_DecompileFunction_S3A3 = 116,
  efunc_CollectSegments = 117,
  efunc_gen_DecompileFunction_S3A2B1 = 118,
  efunc_gen_DecompileFunction_S3A2 = 119,
  efunc_Decompilem_Patternm_Hole = 120,
  efunc_gen_DecompileFunction_S3A1 = 121,
  efunc_gen_Decompilem_Patternm_Hole_S7A2 = 122,
  efunc_gen_Decompilem_Patternm_Hole_S8A2 = 123,
  efunc_Decompilem_Patternm_NoHole = 124,
  efunc_gen_Decompilem_Patternm_Hole_S19A2 = 125,
  efunc_gen_Decompilem_Patternm_Hole_S20A2 = 126,
  efunc_gen_Decompilem_Patternm_Hole_S7A1 = 127,
  efunc_gen_Decompilem_Patternm_Hole_S8A1 = 128,
  efunc_gen_Decompilem_Patternm_Hole_S11A1 = 129,
  efunc_gen_Decompilem_Patternm_Hole_S12A1 = 130,
  efunc_gen_Decompilem_Patternm_Hole_S18A1 = 131,
  efunc_gen_Decompilem_Patternm_Hole_S19A1 = 132,
  efunc_gen_Decompilem_Patternm_Hole_S20A1 = 133,
  efunc_gen_Decompilem_Patternm_Hole_S21A1 = 134,
  efunc_gen_Decompilem_Patternm_Hole_S22A1 = 135,
  efunc_gen_Decompilem_Patternm_Hole_S25A1 = 136,
  efunc_gen_Decompilem_Patternm_Hole_S26A1 = 137,
  efunc_gen_Decompilem_Patternm_Hole_S27A1 = 138,
  efunc_Decompilem_Result = 139,
  efunc_gen_Decompilem_Result_S10C1 = 140,
  efunc_gen_Decompilem_Result_S11C1 = 141,
  efunc_gen_Decompilem_Result_S11C2 = 142,
  efunc_gen_Decompilem_Result_S12C1 = 143,
  efunc_gen_Decompilem_Result_S13C1 = 144,
  efunc_gen_Decompilem_Result_S13C2 = 145,
  efunc_DoCollectSegments = 146,
  efunc_FormatExpr = 147,
  efunc_DoFormatExpr = 148,
  efunc_LIMIT = 149,
  efunc_gen_DoFormatExpr_S6A1 = 150,
  efunc_gen_DoFormatExpr_S7A1 = 151,
  efunc_gen_DoFormatExpr_S9A1 = 152,
  efunc_EscapeChar = 153,
  efunc_gen_DoFormatExpr_S10A1 = 154,
  efunc_gen_DoFormatExpr_S12A1 = 155,
  efunc_gen_DoFormatExpr_S13A1 = 156,
  efunc_gen_DoFormatExpr_S14A1 = 157,
  efunc_gen_DoFormatExpr_S19A1 = 158,
  efunc_FormatWordm_Ident = 159,
  efunc_EscapeChars = 160,
  efunc_gen_FormatWord_B1 = 161,
  efunc_EscapeCharm_Hex = 162,
  efunc_Compare = 163,
  efunc_gen_EscapeChar_S7B1 = 164,
  efunc_gen_EscapeChar_S7A1 = 165,
  efunc_Hex = 166,
  efunc_gen_EscapeCharm_Hex_A1 = 167,
  efunc_Divmod = 168,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_ = 6,
  ident_regular = 7,
  ident_Stopk36_k36_ = 8,
  ident_Impk36_k36_ = 9,
  ident_int4fabu_1 = 10,
  ident_Ok = 11,
  ident_CSYM = 12,
  ident_CSYMR = 13,
  ident_NCS = 14,
  ident_True = 15,
  ident_E = 16,
  ident_L = 17,
  ident_False = 18,
  ident_LABEL = 19,
  ident_Local = 20,
  ident_Entry = 21,
  ident_Fail = 22,
  ident_ACT1 = 23,
  ident_SYMS = 24,
  ident_SYMSR = 25,
  ident_TEXT = 26,
  ident_ACTu_EXTRN = 27,
  ident_BL = 28,
  ident_BLR = 29,
  ident_BR = 30,
  ident_CL = 31,
  ident_SYM = 32,
  ident_SYMR = 33,
  ident_EMP = 34,
  ident_MULE = 35,
  ident_MULS = 36,
  ident_PLEN = 37,
  ident_PLENS = 38,
  ident_PLENP = 39,
  ident_PS = 40,
  ident_PSR = 41,
  ident_OEXP = 42,
  ident_OEXPR = 43,
  ident_OVSYM = 44,
  ident_OVSYMR = 45,
  ident_TERM = 46,
  ident_TERMR = 47,
  ident_RDY = 48,
  ident_SETB = 49,
  ident_LEN = 50,
  ident_LENS = 51,
  ident_LENP = 52,
  ident_NS = 53,
  ident_TPLE = 54,
  ident_TPLS = 55,
  ident_TRAN = 56,
  ident_VSYM = 57,
  ident_VSYMR = 58,
  ident_OUTEST = 59,
  ident_ECOND = 60,
  ident_POPVF = 61,
  ident_PUSHVF = 62,
  ident_STLEN = 63,
  ident_NSYM = 64,
  ident_NSYMR = 65,
  ident_NNS = 66,
  ident_BUILTu_IN = 67,
  ident_BUILTu_IN1 = 68,
  ident_RawBytes = 69,
  ident_C = 70,
  ident_t = 71,
  ident_e = 72,
  ident_LB = 73,
  ident_RB = 74,
  ident_Hole = 75,
  ident_W = 76,
  ident_N = 77,
  ident_s = 78,
  ident_Restorem_Hole = 79,
  ident_Restorem_NoHole = 80,
  ident_StartBlock = 81,
  ident_EndOfFunction = 82,
  ident_Pattern = 83,
  ident_StartCondition = 84,
  ident_Result = 85,
  ident_EndCondition = 86,
  ident_NextSentence = 87,
  ident_RK = 88,
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
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Mu_C1]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_u_u_Mum_Aux]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[8]);
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
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_open_call(context[11]);
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

static refalrts::NativeReference nat_ref_Mu("Mu", 982870901U, 3115847316U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 3115847316UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 982870901UL);
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
  refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
  refalrts::reinit_number(context[5], 982870901UL);
  refalrts::reinit_number(context[7], 3115847316UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 982870901U, 3115847316U, func_gen_u_u_Mum_Aux_S13B1);


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
      refalrts::reinit_name(context[1], functions[efunc_Add]);
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
      refalrts::reinit_name(context[1], functions[efunc_Div]);
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
      refalrts::reinit_name(context[1], functions[efunc_Mod]);
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
      refalrts::reinit_name(context[1], functions[efunc_Mul]);
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
      refalrts::reinit_name(context[1], functions[efunc_Residue]);
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
      refalrts::reinit_name(context[1], functions[efunc_Sub]);
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
      refalrts::reinit_name(context[1], functions[efunc_Add]);
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
      refalrts::reinit_name(context[1], functions[efunc_Div]);
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
      refalrts::reinit_name(context[1], functions[efunc_Mod]);
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
      refalrts::reinit_name(context[1], functions[efunc_Mul]);
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
      refalrts::reinit_name(context[1], functions[efunc_Residue]);
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
    refalrts::reinit_name(context[1], functions[efunc_Sub]);
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
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_u_u_Mum_Aux_S13B1]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Type]);
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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 982870901U, 3115847316U, func_u_u_Mum_Aux);


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
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Residue_C1]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_u_u_Mum_Aux]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[8]);
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
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_open_call(context[11]);
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

static refalrts::NativeReference nat_ref_Residue("Residue", 982870901U, 3115847316U, func_Residue);


static refalrts::FnResult func_Go(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Go/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main/4 HalfReuse: </1 } & ArgList/5 >/6 >/7 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_ArgList]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Main]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Go("Go", 0U, 0U, func_Go);


static refalrts::FnResult func_Main(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Main/4 (/7 e.ProgName#1/5 )/8 e.Sources#1/2 >/1
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
  // closed e.ProgName#1 as range 5
  // closed e.Sources#1 as range 2
  //DEBUG: e.ProgName#1: 5
  //DEBUG: e.Sources#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 e.ProgName#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } Tile{ HalfReuse: & ProcessFile/8 AsIs: e.Sources#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Map]);
  refalrts::reinit_name(context[8], functions[efunc_ProcessFile]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Main("Main", 982870901U, 3115847316U, func_Main);


static refalrts::FnResult func_gen_ProcessFile_A6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & ProcessFile=6/4 (/7 e.InputRSLFile#1/5 )/8 (/11 e.Lines#6/9 )/12 e.OutputName#7/2 >/1
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
  // closed e.InputRSLFile#1 as range 5
  // closed e.Lines#6 as range 9
  // closed e.OutputName#7 as range 2
  //DEBUG: e.InputRSLFile#1: 5
  //DEBUG: e.Lines#6: 9
  //DEBUG: e.OutputName#7: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 'D'/7 }"ecompiled \""/13 Tile{ AsIs: e.InputRSLFile#1/5 }"\" to \""/15 e.OutputName#7/2/17 '\"'/19 >/20 </21 Tile{ HalfReuse: & SaveFile/8 AsIs: (/11 } Tile{ AsIs: e.OutputName#7/2 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Lines#6/9 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[13], context[14], "ecompiled \"", 11);
  refalrts::alloc_chars(vm, context[15], context[16], "\" to \"", 6);
  refalrts::copy_evar(vm, context[17], context[18], context[2], context[3]);
  refalrts::alloc_char(vm, context[19], '\"');
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::reinit_char(context[7], 'D');
  refalrts::reinit_name(context[8], functions[efunc_SaveFile]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[15], context[21] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ProcessFile_A6("ProcessFile=6", 982870901U, 3115847316U, func_gen_ProcessFile_A6);


static refalrts::FnResult func_gen_ProcessFile_A6B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ProcessFile=6:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ProcessFile=6:1/4 e.ProperName#7/5 '.'/10 'r'/9 's'/8 'l'/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_right( 'l', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 's', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 'r', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( '.', context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.ProperName#7 as range 5
    //DEBUG: e.ProperName#7: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.ProperName#7/5 } Tile{ HalfReuse: '-'/0 HalfReuse: 'd'/4 }"ecompile"/11 Tile{ Reuse: 'd'/10 Reuse: '.'/9 Reuse: 'r'/8 Reuse: 'e'/7 HalfReuse: 'f'/1 ]] }
    refalrts::alloc_chars(vm, context[11], context[12], "ecompile", 8);
    refalrts::reinit_char(context[0], '-');
    refalrts::reinit_char(context[4], 'd');
    refalrts::update_char(context[10], 'd');
    refalrts::update_char(context[9], '.');
    refalrts::update_char(context[8], 'r');
    refalrts::update_char(context[7], 'e');
    refalrts::reinit_char(context[1], 'f');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ProcessFile=6:1/4 e.FileName#7/2 >/1
  // closed e.FileName#7 as range 2
  //DEBUG: e.FileName#7: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.FileName#7/2 } '.'/5 Tile{ HalfReuse: 'd'/0 HalfReuse: 'e'/4 }"compiled.re"/6 Tile{ HalfReuse: 'f'/1 ]] }
  refalrts::alloc_char(vm, context[5], '.');
  refalrts::alloc_chars(vm, context[6], context[7], "compiled.re", 11);
  refalrts::reinit_char(context[0], 'd');
  refalrts::reinit_char(context[4], 'e');
  refalrts::reinit_char(context[1], 'f');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ProcessFile_A6B1("ProcessFile=6:1", 982870901U, 3115847316U, func_gen_ProcessFile_A6B1);


static refalrts::FnResult func_gen_ProcessFile_A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & ProcessFile=5/4 (/7 e.InputRSLFile#1/5 )/8 e.Lines#6/2 >/1
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
  // closed e.InputRSLFile#1 as range 5
  // closed e.Lines#6 as range 2
  //DEBUG: e.InputRSLFile#1: 5
  //DEBUG: e.Lines#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: [*]/0 Reuse: & ProcessFile=6/4 AsIs: (/7 AsIs: e.InputRSLFile#1/5 AsIs: )/8 } (/10 Tile{ AsIs: e.Lines#6/2 } )/11 {*}/12 </13 & ProcessFile=6:1/14 e.InputRSLFile#1/5/15 >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[0]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_ProcessFile_A6B1]);
  refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ProcessFile_A6]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ProcessFile_A5("ProcessFile=5", 982870901U, 3115847316U, func_gen_ProcessFile_A5);


static refalrts::FnResult func_gen_ProcessFile_A5L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ProcessFile=5\1/4 (/7 e.Extern#6/5 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Extern#6 as range 5
  //DEBUG: e.Extern#6: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9"$EXTERN"/10 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & FormatWord/7 AsIs: e.Extern#6/5 HalfReuse: >/8 HalfReuse: ';'/1 } )/12 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_chars(vm, context[10], context[11], "$EXTERN", 7);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_FormatWord]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_char(context[1], ';');
  refalrts::link_brackets( context[9], context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ProcessFile_A5L1("ProcessFile=5\\1", 982870901U, 3115847316U, func_gen_ProcessFile_A5L1);


static refalrts::FnResult func_gen_ProcessFile_A5L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ProcessFile=5\2/4 (/7 e.Function#6/5 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Function#6 as range 5
  //DEBUG: e.Function#6: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ProcessFile=5\2/4 (/7 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Function#6/5 } Tile{ HalfReuse: (/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[8], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ProcessFile_A5L2("ProcessFile=5\\2", 982870901U, 3115847316U, func_gen_ProcessFile_A5L2);


static refalrts::FnResult func_gen_ProcessFile_A5L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ProcessFile=5\3/4 (/7 e.ASMLines#6/5 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ASMLines#6 as range 5
  //DEBUG: e.ASMLines#6: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & CommentLine/7 AsIs: e.ASMLines#6/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_Map]);
  refalrts::reinit_name(context[7], functions[efunc_CommentLine]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ProcessFile_A5L3("ProcessFile=5\\3", 982870901U, 3115847316U, func_gen_ProcessFile_A5L3);


static refalrts::FnResult func_gen_ProcessFile_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & ProcessFile=4/4 (/7 e.InputRSLFile#1/5 )/8 (/11 e.ModuleName#3/9 )/12 (/15 e.Externs#3/13 )/16 (/19 e.ASMFunctions#4/17 )/20 e.RefalFunctions#5/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.InputRSLFile#1 as range 5
  // closed e.ModuleName#3 as range 9
  // closed e.Externs#3 as range 13
  // closed e.ASMFunctions#4 as range 17
  // closed e.RefalFunctions#5 as range 2
  //DEBUG: e.InputRSLFile#1: 5
  //DEBUG: e.ModuleName#3: 9
  //DEBUG: e.Externs#3: 13
  //DEBUG: e.ASMFunctions#4: 17
  //DEBUG: e.RefalFunctions#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </21 Tile{ HalfReuse: [*]/0 Reuse: & ProcessFile=5/4 AsIs: (/7 AsIs: e.InputRSLFile#1/5 AsIs: )/8 HalfReuse: {*}/11 } (/22"* Module: "/23 </25 & FormatWord/26 Tile{ AsIs: e.ModuleName#3/9 } >/27 )/28 (/29 )/30 </31 & Map/32 & ProcessFile=5\1/33 </34 & Rev/35 Tile{ HalfReuse: </12 HalfReuse: & CleanupBuiltins/15 AsIs: e.Externs#3/13 HalfReuse: >/16 HalfReuse: >/19 } >/36 (/37 )/38 </39 & Map/40 Tile{ HalfReuse: & ProcessFile=5\2/20 AsIs: e.RefalFunctions#5/2 AsIs: >/1 } (/41 )/42 </43 & Map/44 & ProcessFile=5\3/45 Tile{ AsIs: e.ASMFunctions#4/17 } >/46 >/47 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_chars(vm, context[23], context[24], "* Module: ", 10);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_FormatWord]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[33], functions[efunc_gen_ProcessFile_A5L1]);
  refalrts::alloc_open_call(vm, context[34]);
  refalrts::alloc_name(vm, context[35], functions[efunc_Rev]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::alloc_open_call(vm, context[39]);
  refalrts::alloc_name(vm, context[40], functions[efunc_Map]);
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::alloc_close_bracket(vm, context[42]);
  refalrts::alloc_open_call(vm, context[43]);
  refalrts::alloc_name(vm, context[44], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[45], functions[efunc_gen_ProcessFile_A5L3]);
  refalrts::alloc_close_call(vm, context[46]);
  refalrts::alloc_close_call(vm, context[47]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ProcessFile_A5]);
  refalrts::reinit_unwrapped_closure(context[11], context[0]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[15], functions[efunc_CleanupBuiltins]);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_close_call(context[19]);
  refalrts::reinit_name(context[20], functions[efunc_gen_ProcessFile_A5L2]);
  refalrts::push_stack( vm, context[47] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[46] );
  refalrts::push_stack( vm, context[43] );
  refalrts::link_brackets( context[41], context[42] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[39] );
  refalrts::link_brackets( context[37], context[38] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[29], context[30] );
  refalrts::link_brackets( context[22], context[28] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[46], context[47] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[41], context[45] );
  res = refalrts::splice_evar( res, context[20], context[1] );
  res = refalrts::splice_evar( res, context[36], context[40] );
  res = refalrts::splice_evar( res, context[12], context[19] );
  res = refalrts::splice_evar( res, context[27], context[35] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ProcessFile_A4("ProcessFile=4", 982870901U, 3115847316U, func_gen_ProcessFile_A4);


static refalrts::FnResult func_gen_ProcessFile_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & ProcessFile=3/4 (/7 e.InputRSLFile#1/5 )/8 (/11 e.ModuleName#3/9 )/12 (/15 e.Externs#3/13 )/16 e.ASMFunctions#4/2 >/1
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
  // closed e.InputRSLFile#1 as range 5
  // closed e.ModuleName#3 as range 9
  // closed e.Externs#3 as range 13
  // closed e.ASMFunctions#4 as range 2
  //DEBUG: e.InputRSLFile#1: 5
  //DEBUG: e.ModuleName#3: 9
  //DEBUG: e.Externs#3: 13
  //DEBUG: e.ASMFunctions#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & ProcessFile=4/4 AsIs: (/7 AsIs: e.InputRSLFile#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.ModuleName#3/9 AsIs: )/12 AsIs: (/15 AsIs: e.Externs#3/13 AsIs: )/16 } (/18 Tile{ AsIs: e.ASMFunctions#4/2 } )/19 {*}/20 </21 & Map/22 & DecompileFunction/23 e.ASMFunctions#4/2/24 >/26 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_unwrapped_closure(vm, context[20], context[0]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[23], functions[efunc_DecompileFunction]);
  refalrts::copy_evar(vm, context[24], context[25], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ProcessFile_A4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ProcessFile_A3("ProcessFile=3", 982870901U, 3115847316U, func_gen_ProcessFile_A3);


static refalrts::FnResult func_gen_ProcessFile_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & ProcessFile=2/4 (/7 e.InputRSLFile#1/5 )/8 (/11 e.ModuleName#3/9 )/12 (/15 s.BytecodeSize#3/33 s.FunctionStarts#3/34 )/16 (/19 e.Entries#3/17 )/20 (/23 e.Externs#3/21 )/24 (/27 e.Words#3/25 )/28 (/31 e.FunctionStarts#3/29 )/32 e.Bytecode#3/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  // closed e.InputRSLFile#1 as range 5
  // closed e.ModuleName#3 as range 9
  // closed e.Entries#3 as range 17
  // closed e.Externs#3 as range 21
  // closed e.Words#3 as range 25
  // closed e.FunctionStarts#3 as range 29
  // closed e.Bytecode#3 as range 2
  if( ! refalrts::svar_left( context[33], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[34], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.InputRSLFile#1: 5
  //DEBUG: e.ModuleName#3: 9
  //DEBUG: e.Entries#3: 17
  //DEBUG: e.Externs#3: 21
  //DEBUG: e.Words#3: 25
  //DEBUG: e.FunctionStarts#3: 29
  //DEBUG: e.Bytecode#3: 2
  //DEBUG: s.BytecodeSize#3: 33
  //DEBUG: s.FunctionStarts#3: 34

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.BytecodeSize#3/33 s.FunctionStarts#3/34 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </35 Tile{ HalfReuse: [*]/0 Reuse: & ProcessFile=3/4 AsIs: (/7 AsIs: e.InputRSLFile#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.ModuleName#3/9 AsIs: )/12 AsIs: (/15 } e.Externs#3/21/36 Tile{ AsIs: )/32 } {*}/38 </39 & Disassemble/40 (/41 Tile{ AsIs: e.Words#3/25 } Tile{ AsIs: )/28 AsIs: (/31 } Tile{ AsIs: e.FunctionStarts#3/29 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.Entries#3/17 AsIs: )/20 AsIs: (/23 AsIs: e.Externs#3/21 AsIs: )/24 HalfReuse: s.BytecodeSize3 #33/27 } Tile{ AsIs: e.Bytecode#3/2 } >/42 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[35]);
  refalrts::copy_evar(vm, context[36], context[37], context[21], context[22]);
  refalrts::alloc_unwrapped_closure(vm, context[38], context[0]);
  refalrts::alloc_open_call(vm, context[39]);
  refalrts::alloc_name(vm, context[40], functions[efunc_Disassemble]);
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::alloc_close_call(vm, context[42]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ProcessFile_A3]);
  refalrts::reinit_svar( context[27], context[33] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[35] );
  refalrts::push_stack( vm, context[42] );
  refalrts::push_stack( vm, context[39] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[31], context[16] );
  refalrts::link_brackets( context[41], context[28] );
  refalrts::link_brackets( context[15], context[32] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[42], context[42] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[27] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[28], context[31] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[38], context[41] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[35], context[35] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[38] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ProcessFile_A2("ProcessFile=2", 982870901U, 3115847316U, func_gen_ProcessFile_A2);


static refalrts::FnResult func_gen_ProcessFile_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ProcessFile=1/4 (/7 e.InputRSLFile#1/5 )/8 e.Bytes#2/2 >/1
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
  // closed e.InputRSLFile#1 as range 5
  // closed e.Bytes#2 as range 2
  //DEBUG: e.InputRSLFile#1: 5
  //DEBUG: e.Bytes#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: [*]/0 Reuse: & ProcessFile=2/4 AsIs: (/7 AsIs: e.InputRSLFile#1/5 AsIs: )/8 } {*}/10 </11 & DecodeStructure/12 Tile{ AsIs: e.Bytes#2/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[0]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_DecodeStructure]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ProcessFile_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ProcessFile_A1("ProcessFile=1", 982870901U, 3115847316U, func_gen_ProcessFile_A1);


static refalrts::FnResult func_ProcessFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & ProcessFile/4 (/7 e.InputRSLFile#1/5 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.InputRSLFile#1 as range 5
  //DEBUG: e.InputRSLFile#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: [*]/0 Reuse: & ProcessFile=1/4 AsIs: (/7 AsIs: e.InputRSLFile#1/5 AsIs: )/8 HalfReuse: {*}/1 } </10 & LoadBytes/11 e.InputRSLFile#1/5/12 >/14 >/15 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_LoadBytes]);
  refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ProcessFile_A1]);
  refalrts::reinit_unwrapped_closure(context[1], context[0]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ProcessFile("ProcessFile", 982870901U, 3115847316U, func_ProcessFile);


static refalrts::FnResult func_CommentLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & CommentLine/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CommentLine/4 (/7 e.new#1/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & CommentLine/4 (/7 e.Line-B#1/11 '\n'/15 e.Line-E#1/13 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[13] = context[9];
      context[14] = context[10];
      context[15] = refalrts::char_left( '\n', context[13], context[14] );
      if( ! context[15] )
        continue;
      // closed e.Line-E#1 as range 13
      //DEBUG: e.Line-B#1: 11
      //DEBUG: e.Line-E#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CommentLine/4 AsIs: (/7 AsIs: e.Line-B#1/11 Reuse: '\\'/15 } 'n'/16 Tile{ AsIs: e.Line-E#1/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[16], 'n');
      refalrts::update_char(context[15], '\\');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[11], context[12], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CommentLine/4 (/7 e.Line-B#1/11 '\r'/15 e.Line-E#1/13 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[13] = context[9];
      context[14] = context[10];
      context[15] = refalrts::char_left( '\r', context[13], context[14] );
      if( ! context[15] )
        continue;
      // closed e.Line-E#1 as range 13
      //DEBUG: e.Line-B#1: 11
      //DEBUG: e.Line-E#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CommentLine/4 AsIs: (/7 AsIs: e.Line-B#1/11 Reuse: '\\'/15 } 'r'/16 Tile{ AsIs: e.Line-E#1/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[16], 'r');
      refalrts::update_char(context[15], '\\');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[11], context[12], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CommentLine/4 (/7 e.Line#1/5 )/8 >/1
  // closed e.Line#1 as range 5
  //DEBUG: e.Line#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: '*'/7 AsIs: e.Line#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_char(context[7], '*');
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CommentLine("CommentLine", 982870901U, 3115847316U, func_CommentLine);


static refalrts::FnResult func_gen_CleanupBuiltins_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & CleanupBuiltins\1/4 (/7 s.No#2/9 s.Func#2/10 s.Type#2/11 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.No#2: 9
  //DEBUG: s.Func#2: 10
  //DEBUG: s.Type#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.No#2/9 {REMOVED TILE} s.Type#2/11 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Explode/7 } Tile{ AsIs: s.Func#2/10 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_Explode]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CleanupBuiltins_L1("CleanupBuiltins\\1", 982870901U, 3115847316U, func_gen_CleanupBuiltins_L1);


static refalrts::FnResult func_CleanupBuiltins(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & CleanupBuiltins/4 e.Externs#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Externs#1 as range 2
  //DEBUG: e.Externs#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CleanupBuiltins-Aux/4 } </5 & Map/6 & CleanupBuiltins\1/7 </8 & ListOfBuiltin/9 >/10 (/11 0/12 # /13 # regular/14 )/15 (/16 0/17 # Stop$$$$/18 # regular/19 )/20 (/21 0/22 # Imp$$$$/23 # regular/24 )/25 (/26 0/27 # int4fab_1/28 # regular/29 )/30 >/31 (/32 Tile{ AsIs: e.Externs#1/2 } )/33 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_CleanupBuiltins_L1]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_ListOfBuiltin]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_number(vm, context[12], 0UL);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_]);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_number(vm, context[17], 0UL);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_Stopk36_k36_]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_number(vm, context[22], 0UL);
  refalrts::alloc_ident(vm, context[23], identifiers[ident_Impk36_k36_]);
  refalrts::alloc_ident(vm, context[24], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_number(vm, context[27], 0UL);
  refalrts::alloc_ident(vm, context[28], identifiers[ident_int4fabu_1]);
  refalrts::alloc_ident(vm, context[29], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::update_name(context[4], functions[efunc_CleanupBuiltinsm_Aux]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[26], context[30] );
  refalrts::link_brackets( context[21], context[25] );
  refalrts::link_brackets( context[16], context[20] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[32] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupBuiltins("CleanupBuiltins", 982870901U, 3115847316U, func_CleanupBuiltins);


static refalrts::FnResult func_gen_CleanupBuiltinsm_Aux_S1C1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & CleanupBuiltins-Aux$1?1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CleanupBuiltins-Aux$1?1:1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & CleanupBuiltins-Aux$1?1:1/4 (/7 e.Name#1/5 )/8 e.Builtins-B#2/11 (/17 e.Name#1/19 )/18 e.Builtins-E#2/13 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.Name#1 as range 5
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[13] = context[9];
      context[14] = context[10];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      if( ! refalrts::repeated_evar_left( vm, context[19], context[20], context[5], context[6], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.Builtins-E#2 as range 13
      //DEBUG: e.Name#1: 5
      //DEBUG: e.Builtins-B#2: 11
      //DEBUG: e.Builtins-E#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CleanupBuiltins-Aux$1?1:1/4 (/7 e.Name#1/5 )/8 e.Builtins-B#2/11 (/17 e.Name#1/19 )/18 e.Builtins-E#2/13 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[11], context[12], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CleanupBuiltins-Aux$1?1:1/4 (/7 e.Name#1/5 )/8 e.Builtins#2/2 >/1
  // closed e.Name#1 as range 5
  // closed e.Builtins#2 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.Builtins#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CleanupBuiltins-Aux$1?1:1/4 {REMOVED TILE} e.Builtins#2/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CleanupBuiltinsm_Aux_S1C1B1("CleanupBuiltins-Aux$1?1:1", 982870901U, 3115847316U, func_gen_CleanupBuiltinsm_Aux_S1C1B1);


static refalrts::FnResult func_CleanupBuiltinsm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & CleanupBuiltins-Aux/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CleanupBuiltins-Aux/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & CleanupBuiltins-Aux/4 e.Builtins#1/2 (/7 (/13 e.Name#1/11 )/14 e.Externs#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Builtins#1 as range 2
    // closed e.Name#1 as range 11
    // closed e.Externs#1 as range 9
    //DEBUG: e.Builtins#1: 2
    //DEBUG: e.Name#1: 11
    //DEBUG: e.Externs#1: 9
    //2: e.Builtins#1
    //9: e.Externs#1
    //11: e.Name#1
    //22: e.Name#1
    //26: e.Builtins#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_CleanupBuiltinsm_Aux_S1C1]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_closure_head(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_CleanupBuiltinsm_Aux_S1C1B1]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::copy_evar(vm, context[22], context[23], context[11], context[12]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_unwrapped_closure(vm, context[25], context[19]);
    refalrts::copy_evar(vm, context[26], context[27], context[2], context[3]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[21], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::wrap_closure( context[25] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </15 & CleanupBuiltins-Aux$1?1/19 e.MaybeName#2/17 >/16
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
      // closed e.MaybeName#2 as range 17
      //DEBUG: e.Builtins#1: 2
      //DEBUG: e.Name#1: 11
      //DEBUG: e.Externs#1: 9
      //DEBUG: e.MaybeName#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 e.Name#1/11 )/14 {REMOVED TILE} )/8 </15 & CleanupBuiltins-Aux$1?1/19 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.MaybeName#2/17 } Tile{ AsIs: </0 AsIs: & CleanupBuiltins-Aux/4 AsIs: e.Builtins#1/2 AsIs: (/7 } Tile{ AsIs: e.Externs#1/9 } Tile{ HalfReuse: )/16 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[15], context[16]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CleanupBuiltins-Aux/4 e.Builtins#1/2 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Builtins#1 as range 2
  //DEBUG: e.Builtins#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CleanupBuiltins-Aux/4 e.Builtins#1/2 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupBuiltinsm_Aux("CleanupBuiltins-Aux", 982870901U, 3115847316U, func_CleanupBuiltinsm_Aux);


static refalrts::FnResult func_gen_DecodeStructure_A10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DecodeStructure=10/4 (/7 e.ModuleName#2/5 )/8 s.BytecodeSize#3/13 s.FunctionStarts#7/14 (/17 e.Entries#8/15 )/18 (/21 e.Externs#9/19 )/22 (/25 e.Words#10/23 )/26 e.FunctionStarts#11/2 (/11 e.Bytes#11/9 )/12 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.ModuleName#2 as range 5
  // closed e.Bytes#11 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.Entries#8 as range 15
  // closed e.Externs#9 as range 19
  // closed e.Words#10 as range 23
  // closed e.FunctionStarts#11 as range 2
  //DEBUG: e.ModuleName#2: 5
  //DEBUG: e.Bytes#11: 9
  //DEBUG: s.BytecodeSize#3: 13
  //DEBUG: s.FunctionStarts#7: 14
  //DEBUG: e.Entries#8: 15
  //DEBUG: e.Externs#9: 19
  //DEBUG: e.Words#10: 23
  //DEBUG: e.FunctionStarts#11: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ModuleName#2/5 AsIs: )/8 } Tile{ HalfReuse: (/4 } Tile{ AsIs: s.BytecodeSize#3/13 AsIs: s.FunctionStarts#7/14 } Tile{ AsIs: )/12 } Tile{ AsIs: (/17 AsIs: e.Entries#8/15 AsIs: )/18 AsIs: (/21 AsIs: e.Externs#9/19 AsIs: )/22 AsIs: (/25 AsIs: e.Words#10/23 AsIs: )/26 } Tile{ AsIs: (/11 } Tile{ AsIs: e.FunctionStarts#11/2 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Bytes#11/9 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[17], context[26] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecodeStructure_A10("DecodeStructure=10", 982870901U, 3115847316U, func_gen_DecodeStructure_A10);


static refalrts::FnResult func_gen_DecodeStructure_A9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & DecodeStructure=9/4 (/7 e.ModuleName#2/5 )/8 s.BytecodeSize#3/13 s.FunctionStarts#7/14 (/17 e.Entries#8/15 )/18 (/21 e.Externs#9/19 )/22 e.Words#10/2 (/11 e.Bytes#10/9 )/12 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.ModuleName#2 as range 5
  // closed e.Bytes#10 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Entries#8 as range 15
  // closed e.Externs#9 as range 19
  // closed e.Words#10 as range 2
  //DEBUG: e.ModuleName#2: 5
  //DEBUG: e.Bytes#10: 9
  //DEBUG: s.BytecodeSize#3: 13
  //DEBUG: s.FunctionStarts#7: 14
  //DEBUG: e.Entries#8: 15
  //DEBUG: e.Externs#9: 19
  //DEBUG: e.Words#10: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </23 Tile{ HalfReuse: [*]/0 Reuse: & DecodeStructure=10/4 AsIs: (/7 AsIs: e.ModuleName#2/5 AsIs: )/8 AsIs: s.BytecodeSize#3/13 AsIs: s.FunctionStarts#7/14 AsIs: (/17 AsIs: e.Entries#8/15 AsIs: )/18 AsIs: (/21 AsIs: e.Externs#9/19 AsIs: )/22 } (/24 Tile{ AsIs: e.Words#10/2 } )/25 {*}/26 </27 & ReadEntryPoints/28 Tile{ HalfReuse: s.FunctionStarts7 #14/11 AsIs: e.Bytes#10/9 HalfReuse: >/12 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_unwrapped_closure(vm, context[26], context[0]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_ReadEntryPoints]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DecodeStructure_A10]);
  refalrts::reinit_svar( context[11], context[14] );
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[25], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[0], context[22] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::use( res );
  refalrts::wrap_closure( context[26] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecodeStructure_A9("DecodeStructure=9", 982870901U, 3115847316U, func_gen_DecodeStructure_A9);


static refalrts::FnResult func_gen_DecodeStructure_A8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & DecodeStructure=8/4 (/7 e.ModuleName#2/5 )/8 s.BytecodeSize#3/13 s.FunctionStarts#7/14 (/17 e.Entries#8/15 )/18 s.Words#6/19 e.Externs#9/2 (/11 e.Bytes#9/9 )/12 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.ModuleName#2 as range 5
  // closed e.Bytes#9 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.Entries#8 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Externs#9 as range 2
  //DEBUG: e.ModuleName#2: 5
  //DEBUG: e.Bytes#9: 9
  //DEBUG: s.BytecodeSize#3: 13
  //DEBUG: s.FunctionStarts#7: 14
  //DEBUG: e.Entries#8: 15
  //DEBUG: s.Words#6: 19
  //DEBUG: e.Externs#9: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Words#6/19 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </20 Tile{ HalfReuse: [*]/0 Reuse: & DecodeStructure=9/4 AsIs: (/7 AsIs: e.ModuleName#2/5 AsIs: )/8 AsIs: s.BytecodeSize#3/13 AsIs: s.FunctionStarts#7/14 AsIs: (/17 AsIs: e.Entries#8/15 AsIs: )/18 } (/21 Tile{ AsIs: e.Externs#9/2 } )/22 {*}/23 </24 & ReadWords/25 Tile{ HalfReuse: s.Words6 #19/11 AsIs: e.Bytes#9/9 HalfReuse: >/12 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_unwrapped_closure(vm, context[23], context[0]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_ReadWords]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DecodeStructure_A9]);
  refalrts::reinit_svar( context[11], context[19] );
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[0], context[18] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[23] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecodeStructure_A8("DecodeStructure=8", 982870901U, 3115847316U, func_gen_DecodeStructure_A8);


static refalrts::FnResult func_gen_DecodeStructure_A7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & DecodeStructure=7/4 (/7 e.ModuleName#2/5 )/8 s.BytecodeSize#3/13 s.FunctionStarts#7/14 s.Words#6/15 s.Externs#5/16 e.Entries#8/2 (/11 e.Bytes#8/9 )/12 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.ModuleName#2 as range 5
  // closed e.Bytes#8 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Entries#8 as range 2
  //DEBUG: e.ModuleName#2: 5
  //DEBUG: e.Bytes#8: 9
  //DEBUG: s.BytecodeSize#3: 13
  //DEBUG: s.FunctionStarts#7: 14
  //DEBUG: s.Words#6: 15
  //DEBUG: s.Externs#5: 16
  //DEBUG: e.Entries#8: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Externs#5/16 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & DecodeStructure=8/4 AsIs: (/7 AsIs: e.ModuleName#2/5 AsIs: )/8 AsIs: s.BytecodeSize#3/13 AsIs: s.FunctionStarts#7/14 } (/18 Tile{ AsIs: e.Entries#8/2 } )/19 Tile{ AsIs: s.Words#6/15 } {*}/20 </21 & ReadExterns/22 Tile{ HalfReuse: s.Externs5 #16/11 AsIs: e.Bytes#8/9 HalfReuse: >/12 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_unwrapped_closure(vm, context[20], context[0]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_ReadExterns]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DecodeStructure_A8]);
  refalrts::reinit_svar( context[11], context[16] );
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecodeStructure_A7("DecodeStructure=7", 982870901U, 3115847316U, func_gen_DecodeStructure_A7);


static refalrts::FnResult func_gen_DecodeStructure_A6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & DecodeStructure=6/4 (/7 e.ModuleName#2/5 )/8 s.BytecodeSize#3/9 s.Words#6/10 s.Externs#5/11 s.EntryCount#4/12 s.FunctionStarts#7/13 e.Bytes#7/2 >/1
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
  // closed e.ModuleName#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Bytes#7 as range 2
  //DEBUG: e.ModuleName#2: 5
  //DEBUG: s.BytecodeSize#3: 9
  //DEBUG: s.Words#6: 10
  //DEBUG: s.Externs#5: 11
  //DEBUG: s.EntryCount#4: 12
  //DEBUG: s.FunctionStarts#7: 13
  //DEBUG: e.Bytes#7: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: [*]/0 Reuse: & DecodeStructure=7/4 AsIs: (/7 AsIs: e.ModuleName#2/5 AsIs: )/8 AsIs: s.BytecodeSize#3/9 } Tile{ AsIs: s.FunctionStarts#7/13 } Tile{ AsIs: s.Words#6/10 AsIs: s.Externs#5/11 } {*}/15 </16 & ReadEntries/17 Tile{ AsIs: s.EntryCount#4/12 } Tile{ AsIs: e.Bytes#7/2 } >/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_unwrapped_closure(vm, context[15], context[0]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_ReadEntries]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DecodeStructure_A7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecodeStructure_A6("DecodeStructure=6", 982870901U, 3115847316U, func_gen_DecodeStructure_A6);


static refalrts::FnResult func_gen_DecodeStructure_A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & DecodeStructure=5/4 (/7 e.ModuleName#2/5 )/8 s.BytecodeSize#3/9 s.Externs#5/10 s.EntryCount#4/11 s.Words#6/12 e.Bytes#6/2 >/1
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
  // closed e.ModuleName#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Bytes#6 as range 2
  //DEBUG: e.ModuleName#2: 5
  //DEBUG: s.BytecodeSize#3: 9
  //DEBUG: s.Externs#5: 10
  //DEBUG: s.EntryCount#4: 11
  //DEBUG: s.Words#6: 12
  //DEBUG: e.Bytes#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: [*]/0 Reuse: & DecodeStructure=6/4 AsIs: (/7 AsIs: e.ModuleName#2/5 AsIs: )/8 AsIs: s.BytecodeSize#3/9 } Tile{ AsIs: s.Words#6/12 } Tile{ AsIs: s.Externs#5/10 AsIs: s.EntryCount#4/11 } {*}/14 </15 & ReadDWord/16 Tile{ AsIs: e.Bytes#6/2 } >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[0]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_ReadDWord]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DecodeStructure_A6]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecodeStructure_A5("DecodeStructure=5", 982870901U, 3115847316U, func_gen_DecodeStructure_A5);


static refalrts::FnResult func_gen_DecodeStructure_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DecodeStructure=4/4 (/7 e.ModuleName#2/5 )/8 s.BytecodeSize#3/9 s.EntryCount#4/10 s.Externs#5/11 e.Bytes#5/2 >/1
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
  // closed e.ModuleName#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Bytes#5 as range 2
  //DEBUG: e.ModuleName#2: 5
  //DEBUG: s.BytecodeSize#3: 9
  //DEBUG: s.EntryCount#4: 10
  //DEBUG: s.Externs#5: 11
  //DEBUG: e.Bytes#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </12 Tile{ HalfReuse: [*]/0 Reuse: & DecodeStructure=5/4 AsIs: (/7 AsIs: e.ModuleName#2/5 AsIs: )/8 AsIs: s.BytecodeSize#3/9 } Tile{ AsIs: s.Externs#5/11 } Tile{ AsIs: s.EntryCount#4/10 } {*}/13 </14 & ReadDWord/15 Tile{ AsIs: e.Bytes#5/2 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[0]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_ReadDWord]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DecodeStructure_A5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecodeStructure_A4("DecodeStructure=4", 982870901U, 3115847316U, func_gen_DecodeStructure_A4);


static refalrts::FnResult func_gen_DecodeStructure_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & DecodeStructure=3/4 (/7 e.ModuleName#2/5 )/8 s.BytecodeSize#3/9 s.EntryCount#4/10 e.Bytes#4/2 >/1
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
  // closed e.ModuleName#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Bytes#4 as range 2
  //DEBUG: e.ModuleName#2: 5
  //DEBUG: s.BytecodeSize#3: 9
  //DEBUG: s.EntryCount#4: 10
  //DEBUG: e.Bytes#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: [*]/0 Reuse: & DecodeStructure=4/4 AsIs: (/7 AsIs: e.ModuleName#2/5 AsIs: )/8 AsIs: s.BytecodeSize#3/9 AsIs: s.EntryCount#4/10 } {*}/12 </13 & ReadDWord/14 Tile{ AsIs: e.Bytes#4/2 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[0]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_ReadDWord]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DecodeStructure_A4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecodeStructure_A3("DecodeStructure=3", 982870901U, 3115847316U, func_gen_DecodeStructure_A3);


static refalrts::FnResult func_gen_DecodeStructure_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & DecodeStructure=2/4 (/7 e.ModuleName#2/5 )/8 s.BytecodeSize#3/9 e.Bytes#3/2 >/1
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
  // closed e.ModuleName#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Bytes#3 as range 2
  //DEBUG: e.ModuleName#2: 5
  //DEBUG: s.BytecodeSize#3: 9
  //DEBUG: e.Bytes#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 Tile{ HalfReuse: [*]/0 Reuse: & DecodeStructure=3/4 AsIs: (/7 AsIs: e.ModuleName#2/5 AsIs: )/8 AsIs: s.BytecodeSize#3/9 } {*}/11 </12 & ReadDWord/13 Tile{ AsIs: e.Bytes#3/2 } >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_ReadDWord]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DecodeStructure_A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecodeStructure_A2("DecodeStructure=2", 982870901U, 3115847316U, func_gen_DecodeStructure_A2);


static refalrts::FnResult func_gen_DecodeStructure_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & DecodeStructure=1/4 (/7 e.ModuleName#2/5 )/8 e.Bytes#2/2 >/1
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
  // closed e.ModuleName#2 as range 5
  // closed e.Bytes#2 as range 2
  //DEBUG: e.ModuleName#2: 5
  //DEBUG: e.Bytes#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: [*]/0 Reuse: & DecodeStructure=2/4 AsIs: (/7 AsIs: e.ModuleName#2/5 AsIs: )/8 } {*}/10 </11 & ReadDWord/12 Tile{ AsIs: e.Bytes#2/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[0]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_ReadDWord]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DecodeStructure_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecodeStructure_A1("DecodeStructure=1", 982870901U, 3115847316U, func_gen_DecodeStructure_A1);


static refalrts::FnResult func_DecodeStructure(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & DecodeStructure/4 e.Bytes#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Bytes#1 as range 2
  //DEBUG: e.Bytes#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DecodeStructure=1/6 Tile{ AsIs: </0 Reuse: & ReadAsciiz/4 AsIs: e.Bytes#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_DecodeStructure_A1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_ReadAsciiz]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DecodeStructure("DecodeStructure", 982870901U, 3115847316U, func_DecodeStructure);


static refalrts::FnResult func_ReadAsciiz(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ReadAsciiz/4 e.String#1/5 0/9 e.Tail#1/7 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[7] = context[2];
    context[8] = context[3];
    context[9] = refalrts::number_left( 0UL, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 7
    //DEBUG: e.String#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/10 Tile{ AsIs: </0 Reuse: & Chr/4 AsIs: e.String#1/5 HalfReuse: >/9 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Tail#1/7 } Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_Chr]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[10], context[1] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_ReadAsciiz("ReadAsciiz", 982870901U, 3115847316U, func_ReadAsciiz);


static refalrts::FnResult func_ReadDWord(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ReadDWord/4 s.1#1/5 s.2#1/6 s.3#1/7 s.4#1/8 e.Bytes#1/2 >/1
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
  // closed e.Bytes#1 as range 2
  //DEBUG: s.1#1: 5
  //DEBUG: s.2#1: 6
  //DEBUG: s.3#1: 7
  //DEBUG: s.4#1: 8
  //DEBUG: e.Bytes#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeDWord/4 AsIs: s.1#1/5 AsIs: s.2#1/6 AsIs: s.3#1/7 AsIs: s.4#1/8 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Bytes#1/2 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_MakeDWord]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReadDWord("ReadDWord", 982870901U, 3115847316U, func_ReadDWord);


static refalrts::FnResult func_MakeDWord(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & MakeDWord/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeDWord/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MakeDWord/4 s.LastByte#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.LastByte#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & MakeDWord/4 s.LastByte#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.LastByte1 #5/1 ]] }
    refalrts::reinit_svar( context[1], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeDWord/4 s.LastByte#1/5 e.Bytes#1/2 >/1
  // closed e.Bytes#1 as range 2
  //DEBUG: s.LastByte#1: 5
  //DEBUG: e.Bytes#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } </6 & Mul/7 </8 & MakeDWord/9 Tile{ AsIs: e.Bytes#1/2 } >/10 256/11 >/12 Tile{ AsIs: s.LastByte#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Mul]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_MakeDWord]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_number(vm, context[11], 256UL);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeDWord("MakeDWord", 982870901U, 3115847316U, func_MakeDWord);


static refalrts::FnResult func_ReadEntries(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & ReadEntries/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ReadEntries/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & ReadEntries/4 0/5 e.Bytes#1/2 >/1
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.Bytes#1 as range 2
    //DEBUG: e.Bytes#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ReadEntries/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/5 AsIs: e.Bytes#1/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ReadEntries/4 s.N#1/5 e.Name#1/6 0/10 s.1#1/11 s.2#1/12 s.3#1/13 s.4#1/14 e.Bytes#1/8 >/1
  context[6] = 0;
  context[7] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[8] = context[2];
    context[9] = context[3];
    context[10] = refalrts::number_left( 0UL, context[8], context[9] );
    if( ! context[10] )
      continue;
    if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[8], context[9] ) )
      continue;
    // closed e.Bytes#1 as range 8
    //DEBUG: s.N#1: 5
    //DEBUG: e.Name#1: 6
    //DEBUG: s.1#1: 11
    //DEBUG: s.2#1: 12
    //DEBUG: s.3#1: 13
    //DEBUG: s.4#1: 14
    //DEBUG: e.Bytes#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/15 </16 & Chr/17 Tile{ AsIs: e.Name#1/6 } >/18 </19 Tile{ HalfReuse: & MakeDWord/10 AsIs: s.1#1/11 AsIs: s.2#1/12 AsIs: s.3#1/13 AsIs: s.4#1/14 } >/20 )/21 </22 & ReadEntries/23 Tile{ AsIs: </0 Reuse: & Dec/4 AsIs: s.N#1/5 } >/24 Tile{ AsIs: e.Bytes#1/8 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_Chr]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_ReadEntries]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::reinit_name(context[10], functions[efunc_MakeDWord]);
    refalrts::update_name(context[4], functions[efunc_Dec]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[21] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_ReadEntries("ReadEntries", 982870901U, 3115847316U, func_ReadEntries);


static refalrts::FnResult func_ReadExterns(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & ReadExterns/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ReadExterns/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & ReadExterns/4 0/5 e.Bytes#1/2 >/1
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.Bytes#1 as range 2
    //DEBUG: e.Bytes#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ReadExterns/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/5 AsIs: e.Bytes#1/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ReadExterns/4 s.N#1/5 e.Name#1/6 0/10 e.Bytes#1/8 >/1
  context[6] = 0;
  context[7] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[8] = context[2];
    context[9] = context[3];
    context[10] = refalrts::number_left( 0UL, context[8], context[9] );
    if( ! context[10] )
      continue;
    // closed e.Bytes#1 as range 8
    //DEBUG: s.N#1: 5
    //DEBUG: e.Name#1: 6
    //DEBUG: e.Bytes#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/11 </12 & Chr/13 Tile{ AsIs: e.Name#1/6 } >/14 )/15 </16 & ReadExterns/17 Tile{ AsIs: </0 Reuse: & Dec/4 AsIs: s.N#1/5 } Tile{ HalfReuse: >/10 AsIs: e.Bytes#1/8 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Chr]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_ReadExterns]);
    refalrts::update_name(context[4], functions[efunc_Dec]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[15] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_ReadExterns("ReadExterns", 982870901U, 3115847316U, func_ReadExterns);


static refalrts::FnResult func_ReadWords(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & ReadWords/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ReadWords/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & ReadWords/4 0/5 e.Bytes#1/2 >/1
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.Bytes#1 as range 2
    //DEBUG: e.Bytes#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ReadWords/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/5 AsIs: e.Bytes#1/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ReadWords/4 s.N#1/5 e.Name#1/6 0/10 e.Bytes#1/8 >/1
  context[6] = 0;
  context[7] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[8] = context[2];
    context[9] = context[3];
    context[10] = refalrts::number_left( 0UL, context[8], context[9] );
    if( ! context[10] )
      continue;
    // closed e.Bytes#1 as range 8
    //DEBUG: s.N#1: 5
    //DEBUG: e.Name#1: 6
    //DEBUG: e.Bytes#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/11 Tile{ AsIs: </0 Reuse: & Dec/4 AsIs: s.N#1/5 } >/12 </13 & Chr/14 Tile{ AsIs: e.Name#1/6 } >/15 )/16 </17 & ReadWords/18 </19 & Dec/20 s.N#1/5/21 Tile{ HalfReuse: >/10 AsIs: e.Bytes#1/8 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Chr]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_ReadWords]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Dec]);
    refalrts::copy_stvar(vm, context[21], context[5]);
    refalrts::update_name(context[4], functions[efunc_Dec]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[15], context[21] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_ReadWords("ReadWords", 982870901U, 3115847316U, func_ReadWords);


static refalrts::FnResult func_ReadEntryPoints(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & ReadEntryPoints/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ReadEntryPoints/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & ReadEntryPoints/4 0/5 e.Bytes#1/2 >/1
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.Bytes#1 as range 2
    //DEBUG: e.Bytes#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ReadEntryPoints/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/5 AsIs: e.Bytes#1/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ReadEntryPoints/4 s.N#1/5 s.1#1/6 s.2#1/7 s.3#1/8 s.4#1/9 e.Bytes#1/2 >/1
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Bytes#1 as range 2
  //DEBUG: s.N#1: 5
  //DEBUG: s.1#1: 6
  //DEBUG: s.2#1: 7
  //DEBUG: s.3#1: 8
  //DEBUG: s.4#1: 9
  //DEBUG: e.Bytes#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeDWord/4 } Tile{ AsIs: s.1#1/6 AsIs: s.2#1/7 AsIs: s.3#1/8 AsIs: s.4#1/9 } >/10 </11 & ReadEntryPoints/12 </13 & Dec/14 Tile{ AsIs: s.N#1/5 } >/15 Tile{ AsIs: e.Bytes#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_ReadEntryPoints]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Dec]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_MakeDWord]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReadEntryPoints("ReadEntryPoints", 982870901U, 3115847316U, func_ReadEntryPoints);


static refalrts::FnResult func_gen_Disassemble_A7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Disassemble=7/4 e.Functions#8/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Functions#8 as range 2
  //DEBUG: e.Functions#8: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Disassemble=7/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Functions#8/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Disassemble_A7("Disassemble=7", 982870901U, 3115847316U, func_gen_Disassemble_A7);


static refalrts::FnResult func_gen_Disassemble_A6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Disassemble=6/4 (/8 e.Functions#5/6 )/9 (/12 e.FunctionTable#5/10 )/13 # Ok/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_right( identifiers[ident_Ok], context[2], context[3] );
  if( ! context[5] )
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#5 as range 6
  // closed e.FunctionTable#5 as range 10
  //DEBUG: e.Functions#5: 6
  //DEBUG: e.FunctionTable#5: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Disassemble=7/4 HalfReuse: </8 } Tile{ HalfReuse: & ResolveFunctions/9 } Tile{ AsIs: e.Functions#5/6 } Tile{ AsIs: (/12 AsIs: e.FunctionTable#5/10 AsIs: )/13 HalfReuse: >/5 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Disassemble_A7]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[9], functions[efunc_ResolveFunctions]);
  refalrts::reinit_close_call(context[5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Disassemble_A6("Disassemble=6", 982870901U, 3115847316U, func_gen_Disassemble_A6);


static refalrts::FnResult func_gen_Disassemble_A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Disassemble=5/4 (/8 e.Functions#5/6 )/9 (/12 e.FunctionTable#5/10 )/13 (/16 e.Entries#1/14 )/17 # Ok/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_right( identifiers[ident_Ok], context[2], context[3] );
  if( ! context[5] )
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#5 as range 6
  // closed e.FunctionTable#5 as range 10
  // closed e.Entries#1 as range 14
  //DEBUG: e.Functions#5: 6
  //DEBUG: e.FunctionTable#5: 10
  //DEBUG: e.Entries#1: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </18 Tile{ HalfReuse: [*]/0 Reuse: & Disassemble=6/4 AsIs: (/8 AsIs: e.Functions#5/6 AsIs: )/9 AsIs: (/12 AsIs: e.FunctionTable#5/10 AsIs: )/13 HalfReuse: {*}/16 } </19 & CheckupEntries/20 e.FunctionTable#5/10/21 (/23 Tile{ AsIs: e.Entries#1/14 } Tile{ AsIs: )/17 HalfReuse: >/5 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_CheckupEntries]);
  refalrts::copy_evar(vm, context[21], context[22], context[10], context[11]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Disassemble_A6]);
  refalrts::reinit_unwrapped_closure(context[16], context[0]);
  refalrts::reinit_close_call(context[5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[23], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[17];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Disassemble_A5("Disassemble=5", 982870901U, 3115847316U, func_gen_Disassemble_A5);


static refalrts::FnResult func_gen_Disassemble_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Disassemble=4/4 (/7 e.Entries#1/5 )/8 (/11 e.FunctionStarts#1/9 )/12 (/15 e.FunctionTable#5/13 )/16 e.Functions#5/2 >/1
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
  // closed e.Entries#1 as range 5
  // closed e.FunctionStarts#1 as range 9
  // closed e.FunctionTable#5 as range 13
  // closed e.Functions#5 as range 2
  //DEBUG: e.Entries#1: 5
  //DEBUG: e.FunctionStarts#1: 9
  //DEBUG: e.FunctionTable#5: 13
  //DEBUG: e.Functions#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Disassemble=5/17 (/18 Tile{ AsIs: e.Functions#5/2 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.FunctionTable#5/13 AsIs: )/16 } Tile{ AsIs: (/7 AsIs: e.Entries#1/5 AsIs: )/8 HalfReuse: {*}/11 } </19 & CheckupFunctionStarts/20 e.FunctionTable#5/13/21 (/23 Tile{ AsIs: e.FunctionStarts#1/9 } )/24 >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_Disassemble_A5]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_CheckupFunctionStarts]);
  refalrts::copy_evar(vm, context[21], context[22], context[13], context[14]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_unwrapped_closure(context[11], context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[18], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Disassemble_A4("Disassemble=4", 982870901U, 3115847316U, func_gen_Disassemble_A4);


static refalrts::FnResult func_gen_Disassemble_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Disassemble=3/4 (/7 e.Entries#1/5 )/8 (/11 e.FunctionStarts#1/9 )/12 (/15 e.Externs#1/13 )/16 e.Functions#4/2 >/1
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
  // closed e.Entries#1 as range 5
  // closed e.FunctionStarts#1 as range 9
  // closed e.Externs#1 as range 13
  // closed e.Functions#4 as range 2
  //DEBUG: e.Entries#1: 5
  //DEBUG: e.FunctionStarts#1: 9
  //DEBUG: e.Externs#1: 13
  //DEBUG: e.Functions#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & Disassemble=4/4 AsIs: (/7 AsIs: e.Entries#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.FunctionStarts#1/9 AsIs: )/12 HalfReuse: {*}/15 } </18 & MakeFunctionTable/19 (/20 Tile{ AsIs: e.Externs#1/13 } Tile{ AsIs: )/16 AsIs: e.Functions#4/2 AsIs: >/1 } >/21 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_MakeFunctionTable]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Disassemble_A4]);
  refalrts::reinit_unwrapped_closure(context[15], context[0]);
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[20], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Disassemble_A3("Disassemble=3", 982870901U, 3115847316U, func_gen_Disassemble_A3);


static refalrts::FnResult func_gen_Disassemble_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Disassemble=2/4 (/7 e.Entries#1/5 )/8 (/11 e.FunctionStarts#1/9 )/12 (/15 e.Externs#1/13 )/16 e.Code#3/2 >/1
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
  // closed e.Entries#1 as range 5
  // closed e.FunctionStarts#1 as range 9
  // closed e.Externs#1 as range 13
  // closed e.Code#3 as range 2
  //DEBUG: e.Entries#1: 5
  //DEBUG: e.FunctionStarts#1: 9
  //DEBUG: e.Externs#1: 13
  //DEBUG: e.Code#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & Disassemble=3/4 AsIs: (/7 AsIs: e.Entries#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.FunctionStarts#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Externs#1/13 AsIs: )/16 } {*}/18 </19 & SplitByFunctions/20 Tile{ AsIs: e.Code#3/2 } >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_unwrapped_closure(vm, context[18], context[0]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_SplitByFunctions]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Disassemble_A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Disassemble_A2("Disassemble=2", 982870901U, 3115847316U, func_gen_Disassemble_A2);


static refalrts::FnResult func_gen_Disassemble_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Disassemble=1/4 s.BytecodeSize#1/5 (/8 e.Entries#1/6 )/9 (/12 e.FunctionStarts#1/10 )/13 (/16 e.Externs#1/14 )/17 (/20 e.Words#1/18 )/21 e.Code#2/2 s.BytecodeSize#1/22 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  if( ! refalrts::repeated_stvar_right( vm, context[22], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Entries#1 as range 6
  // closed e.FunctionStarts#1 as range 10
  // closed e.Externs#1 as range 14
  // closed e.Words#1 as range 18
  // closed e.Code#2 as range 2
  //DEBUG: s.BytecodeSize#1: 5
  //DEBUG: e.Entries#1: 6
  //DEBUG: e.FunctionStarts#1: 10
  //DEBUG: e.Externs#1: 14
  //DEBUG: e.Words#1: 18
  //DEBUG: e.Code#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.BytecodeSize#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.BytecodeSize#1/22 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Disassemble=2/23 Tile{ AsIs: (/8 AsIs: e.Entries#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.FunctionStarts#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Externs#1/14 AsIs: )/17 HalfReuse: {*}/20 } </24 & ResolveWords/25 (/26 Tile{ AsIs: e.Words#1/18 } Tile{ AsIs: )/21 } Tile{ AsIs: e.Code#2/2 } >/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[23], functions[efunc_gen_Disassemble_A2]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_ResolveWords]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_unwrapped_closure(context[20], context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[26], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[8], context[20] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Disassemble_A1("Disassemble=1", 982870901U, 3115847316U, func_gen_Disassemble_A1);


static refalrts::FnResult func_Disassemble(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Disassemble/4 (/7 e.Words#1/5 )/8 (/11 e.FunctionStarts#1/9 )/12 (/15 e.Entries#1/13 )/16 (/19 e.Externs#1/17 )/20 s.BytecodeSize#1/21 e.Bytes#1/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Words#1 as range 5
  // closed e.FunctionStarts#1 as range 9
  // closed e.Entries#1 as range 13
  // closed e.Externs#1 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Bytes#1 as range 2
  //DEBUG: e.Words#1: 5
  //DEBUG: e.FunctionStarts#1: 9
  //DEBUG: e.Entries#1: 13
  //DEBUG: e.Externs#1: 17
  //DEBUG: s.BytecodeSize#1: 21
  //DEBUG: e.Bytes#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & Disassemble=1/7 } Tile{ AsIs: s.BytecodeSize#1/21 } (/22 Tile{ AsIs: e.Entries#1/13 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.FunctionStarts#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Externs#1/17 } Tile{ AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.Words#1/5 } Tile{ AsIs: )/20 } {*}/23 </24 & DecodeCommands/25 0/26 Tile{ AsIs: e.Bytes#1/2 } >/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_unwrapped_closure(vm, context[23], context[4]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_DecodeCommands]);
  refalrts::alloc_number(vm, context[26], 0UL);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Disassemble_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[22], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[23], context[26] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::use( res );
  refalrts::wrap_closure( context[23] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Disassemble("Disassemble", 982870901U, 3115847316U, func_Disassemble);


static refalrts::FnResult func_gen_ResolveWords_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ResolveWords=1/4 (/7 e.Words#2/5 )/8 e.Commands#2/2 >/1
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
  // closed e.Words#2 as range 5
  // closed e.Commands#2 as range 2
  //DEBUG: e.Words#2: 5
  //DEBUG: e.Commands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ResolveWords=1/4 (/7 e.Words#2/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolveWords_A1("ResolveWords=1", 982870901U, 3115847316U, func_gen_ResolveWords_A1);


static refalrts::FnResult func_gen_ResolveWords_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & ResolveWords=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveWords=1\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ResolveWords=1\1/4 (/7 e.new#3/5 )/8 (/9 s.new#4/13 s.new#5/14 s.new#6/15 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    do {
      // </0 & ResolveWords=1\1/4 (/7 e.Words-B#2/18 (/24 s.Id#2/26 e.Word#2/22 )/25 e.Words-E#2/20 )/8 (/9 s.Offset#2/13 # CSYM/14 s.Id#2/15 )/10 >/1
      context[16] = context[5];
      context[17] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_CSYM], context[14] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[20] = context[16];
        context[21] = context[17];
        context[22] = 0;
        context[23] = 0;
        context[24] = refalrts::brackets_left( context[22], context[23], context[20], context[21] );
        if( ! context[24] )
          continue;
        refalrts::bracket_pointers(context[24], context[25]);
        if( ! refalrts::repeated_stvar_left( vm, context[26], context[15], context[22], context[23] ) )
          continue;
        // closed e.Word#2 as range 22
        // closed e.Words-E#2 as range 20
        //DEBUG: s.Offset#2: 13
        //DEBUG: s.Id#2: 15
        //DEBUG: e.Words-B#2: 18
        //DEBUG: e.Word#2: 22
        //DEBUG: e.Words-E#2: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & ResolveWords=1\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/15 )/10 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: (/24 AsIs: s.Id#2/26 AsIs: e.Word#2/22 AsIs: )/25 } Tile{ AsIs: e.Words-B#2/18 } Tile{ AsIs: e.Words-E#2/20 } Tile{ AsIs: )/8 AsIs: (/9 AsIs: s.Offset#2/13 AsIs: # CSYM/14 } e.Word#2/22/27 Tile{ HalfReuse: )/1 ]] }
        refalrts::copy_evar(vm, context[27], context[28], context[22], context[23]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[9], context[1] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[24], context[25] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[8], context[14] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[16], context[17] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ResolveWords=1\1/4 (/7 e.Words-B#2/18 (/24 s.Id#2/26 e.Word#2/22 )/25 e.Words-E#2/20 )/8 (/9 s.Offset#2/13 # CSYMR/14 s.Id#2/15 )/10 >/1
      context[16] = context[5];
      context[17] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_CSYMR], context[14] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[20] = context[16];
        context[21] = context[17];
        context[22] = 0;
        context[23] = 0;
        context[24] = refalrts::brackets_left( context[22], context[23], context[20], context[21] );
        if( ! context[24] )
          continue;
        refalrts::bracket_pointers(context[24], context[25]);
        if( ! refalrts::repeated_stvar_left( vm, context[26], context[15], context[22], context[23] ) )
          continue;
        // closed e.Word#2 as range 22
        // closed e.Words-E#2 as range 20
        //DEBUG: s.Offset#2: 13
        //DEBUG: s.Id#2: 15
        //DEBUG: e.Words-B#2: 18
        //DEBUG: e.Word#2: 22
        //DEBUG: e.Words-E#2: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & ResolveWords=1\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/15 )/10 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: (/24 AsIs: s.Id#2/26 AsIs: e.Word#2/22 AsIs: )/25 } Tile{ AsIs: e.Words-B#2/18 } Tile{ AsIs: e.Words-E#2/20 } Tile{ AsIs: )/8 AsIs: (/9 AsIs: s.Offset#2/13 AsIs: # CSYMR/14 } e.Word#2/22/27 Tile{ HalfReuse: )/1 ]] }
        refalrts::copy_evar(vm, context[27], context[28], context[22], context[23]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[9], context[1] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[24], context[25] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[8], context[14] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[16], context[17] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveWords=1\1/4 (/7 e.Words-B#2/18 (/24 s.Id#2/26 e.Word#2/22 )/25 e.Words-E#2/20 )/8 (/9 s.Offset#2/13 # NCS/14 s.Id#2/15 )/10 >/1
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_NCS], context[14] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[20] = context[16];
      context[21] = context[17];
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[20], context[21] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::repeated_stvar_left( vm, context[26], context[15], context[22], context[23] ) )
        continue;
      // closed e.Word#2 as range 22
      // closed e.Words-E#2 as range 20
      //DEBUG: s.Offset#2: 13
      //DEBUG: s.Id#2: 15
      //DEBUG: e.Words-B#2: 18
      //DEBUG: e.Word#2: 22
      //DEBUG: e.Words-E#2: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & ResolveWords=1\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/15 )/10 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: (/24 AsIs: s.Id#2/26 AsIs: e.Word#2/22 AsIs: )/25 } Tile{ AsIs: e.Words-B#2/18 } Tile{ AsIs: e.Words-E#2/20 } Tile{ AsIs: )/8 AsIs: (/9 AsIs: s.Offset#2/13 AsIs: # NCS/14 } e.Word#2/22/27 Tile{ HalfReuse: )/1 ]] }
      refalrts::copy_evar(vm, context[27], context[28], context[22], context[23]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[1] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[8], context[14] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[18], context[19], context[16], context[17] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveWords=1\1/4 (/7 e.Words#2/5 )/8 t.Other#2/9 >/1
  // closed e.Words#2 as range 5
  //DEBUG: t.Other#2: 9
  //DEBUG: e.Words#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ResolveWords=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Words#2/5 AsIs: )/8 AsIs: t.Other#2/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolveWords_A1L1("ResolveWords=1\\1", 982870901U, 3115847316U, func_gen_ResolveWords_A1L1);


static refalrts::FnResult func_ResolveWords(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ResolveWords/4 (/7 e.Words#1/5 )/8 e.Commands#1/2 >/1
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
  // closed e.Words#1 as range 5
  // closed e.Commands#1 as range 2
  //DEBUG: e.Words#1: 5
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & ResolveWords=1/10 </11 Tile{ HalfReuse: & MapAccum/0 Reuse: & ResolveWords=1\1/4 AsIs: (/7 AsIs: e.Words#1/5 AsIs: )/8 AsIs: e.Commands#1/2 AsIs: >/1 } >/12 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_ResolveWords_A1]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::reinit_name(context[0], functions[efunc_MapAccum]);
  refalrts::update_name(context[4], functions[efunc_gen_ResolveWords_A1L1]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveWords("ResolveWords", 982870901U, 3115847316U, func_ResolveWords);


static refalrts::FnResult func_gen_SplitByFunctions_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & SplitByFunctions:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SplitByFunctions:1/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & SplitByFunctions:1/4 t.DeclareCommand#1/5 e.FuncBody#3/9 t.NextDeclareCommand#3/13 e.Code#3/11 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[11] = context[7];
      context[12] = context[8];
      context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
      if( ! context[14] )
        continue;
      // closed e.Code#3 as range 11
      //DEBUG: t.DeclareCommand#1: 5
      //DEBUG: e.FuncBody#3: 9
      //DEBUG: t.NextDeclareCommand#3: 13
      //DEBUG: e.Code#3: 11
      //5: t.DeclareCommand#1
      //9: e.FuncBody#3
      //11: e.Code#3
      //13: t.NextDeclareCommand#3
      //20: t.NextDeclareCommand#3

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[17], functions[efunc_gen_SplitByFunctions_B1S1C1]);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_DeclareCommand]);
      refalrts::copy_stvar(vm, context[20], context[13]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::alloc_close_call(vm, context[16]);
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[15] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[18] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_stvar( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </15 & SplitByFunctions:1$1?1/19 # True/20 >/16
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
        context[20] = refalrts::ident_left( identifiers[ident_True], context[17], context[18] );
        if( ! context[20] )
          continue;
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;
        //DEBUG: t.DeclareCommand#1: 5
        //DEBUG: e.FuncBody#3: 9
        //DEBUG: t.NextDeclareCommand#3: 13
        //DEBUG: e.Code#3: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & SplitByFunctions:1$1?1/19 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/16 } Tile{ AsIs: t.DeclareCommand#1/5 } Tile{ AsIs: e.FuncBody#3/9 } Tile{ HalfReuse: )/20 } Tile{ AsIs: </0 Reuse: & SplitByFunctions/4 } Tile{ AsIs: t.NextDeclareCommand#3/13 AsIs: e.Code#3/11 HalfReuse: >/15 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[16]);
        refalrts::reinit_close_bracket(context[20]);
        refalrts::update_name(context[4], functions[efunc_SplitByFunctions]);
        refalrts::reinit_close_call(context[15]);
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[16], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[13], context[15] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[20], context[20] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[16], context[16] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[15], context[16]);
      continue;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SplitByFunctions:1/4 t.DeclareCommand#1/5 e.FuncBody#3/2 >/1
  // closed e.FuncBody#3 as range 2
  //DEBUG: t.DeclareCommand#1: 5
  //DEBUG: e.FuncBody#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: t.DeclareCommand#1/5 AsIs: e.FuncBody#3/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SplitByFunctions_B1("SplitByFunctions:1", 982870901U, 3115847316U, func_gen_SplitByFunctions_B1);


static refalrts::FnResult func_SplitByFunctions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & SplitByFunctions/4 t.DeclareCommand#1/5 e.Code#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2
  //DEBUG: t.DeclareCommand#1: 5
  //DEBUG: e.Code#1: 2
  //2: e.Code#1
  //5: t.DeclareCommand#1
  //12: t.DeclareCommand#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_SplitByFunctions_C1]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_DeclareCommand]);
  refalrts::copy_stvar(vm, context[12], context[5]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[10] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[12] );
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
    // </7 & SplitByFunctions?1/11 # True/12 >/8
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
    context[12] = refalrts::ident_left( identifiers[ident_True], context[9], context[10] );
    if( ! context[12] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.DeclareCommand#1: 5
    //DEBUG: e.Code#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </7 {REMOVED TILE} {REMOVED TILE} >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ Reuse: & SplitByFunctions:1/11 } Tile{ AsIs: t.DeclareCommand#1/5 } Tile{ HalfReuse: {*}/12 } Tile{ AsIs: e.Code#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_closure_head(context[4]);
    refalrts::update_name(context[11], functions[efunc_gen_SplitByFunctions_B1]);
    refalrts::reinit_unwrapped_closure(context[12], context[4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    refalrts::wrap_closure( context[12] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_SplitByFunctions("SplitByFunctions", 982870901U, 3115847316U, func_SplitByFunctions);


static refalrts::FnResult func_DeclareCommand(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & DeclareCommand/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DeclareCommand/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DeclareCommand/4 (/5 s.new#2/9 s.new#3/10 e.new#4/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    // closed e.new#4 as range 7
    do {
      // </0 & DeclareCommand/4 (/5 s.Offset#1/9 # E/10 e.Name#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_E], context[10] ) )
        continue;
      // closed e.Name#1 as range 7
      //DEBUG: s.Offset#1: 9
      //DEBUG: e.Name#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DeclareCommand/4 (/5 s.Offset#1/9 # E/10 e.Name#1/7 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DeclareCommand/4 (/5 s.Offset#1/9 # L/10 e.Name#1/7 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_L], context[10] ) )
      continue;
    // closed e.Name#1 as range 7
    //DEBUG: s.Offset#1: 9
    //DEBUG: e.Name#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DeclareCommand/4 (/5 s.Offset#1/9 # L/10 e.Name#1/7 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DeclareCommand/4 t.Other#1/5 >/1
  //DEBUG: t.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/4 AsIs: t.Other#1/5 } Tile{ ]] }
  refalrts::reinit_ident(context[4], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DeclareCommand("DeclareCommand", 982870901U, 3115847316U, func_DeclareCommand);


static refalrts::FnResult func_gen_MakeFunctionTable_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & MakeFunctionTable=3/4 (/7 (/11 e.ForbiddenNames#4/9 )/12 e.Table#4/5 )/8 e.Functions#4/2 >/1
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
  // closed e.ForbiddenNames#4 as range 9
  // closed e.Table#4 as range 5
  // closed e.Functions#4 as range 2
  //DEBUG: e.ForbiddenNames#4: 9
  //DEBUG: e.Table#4: 5
  //DEBUG: e.Functions#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MakeFunctionTable=3/4 (/7 (/11 e.ForbiddenNames#4/9 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 AsIs: e.Table#4/5 AsIs: )/8 } Tile{ AsIs: e.Functions#4/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[12]);
  refalrts::link_brackets( context[12], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeFunctionTable_A3("MakeFunctionTable=3", 982870901U, 3115847316U, func_gen_MakeFunctionTable_A3);


static refalrts::FnResult func_gen_MakeFunctionTable_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & MakeFunctionTable=2/4 (/7 e.Functions#2/5 )/8 e.ForbiddenNames#3/2 >/1
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
  // closed e.Functions#2 as range 5
  // closed e.ForbiddenNames#3 as range 2
  //DEBUG: e.Functions#2: 5
  //DEBUG: e.ForbiddenNames#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeFunctionTable=3/4 HalfReuse: </7 } & MapAccum/9 & AddFunctionToTable/10 (/11 (/12 Tile{ AsIs: e.ForbiddenNames#3/2 } Tile{ AsIs: )/8 } )/13 Tile{ AsIs: e.Functions#2/5 } >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[9], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[10], functions[efunc_AddFunctionToTable]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_MakeFunctionTable_A3]);
  refalrts::reinit_open_call(context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[11], context[13] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeFunctionTable_A2("MakeFunctionTable=2", 982870901U, 3115847316U, func_gen_MakeFunctionTable_A2);


static refalrts::FnResult func_gen_MakeFunctionTable_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & MakeFunctionTable=1/4 (/7 e.Externs#1/5 )/8 (/11 e.Entries#2/9 )/12 e.Functions#2/2 >/1
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
  // closed e.Externs#1 as range 5
  // closed e.Entries#2 as range 9
  // closed e.Functions#2 as range 2
  //DEBUG: e.Externs#1: 5
  //DEBUG: e.Entries#2: 9
  //DEBUG: e.Functions#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & MakeFunctionTable=2/7 } Tile{ HalfReuse: (/12 } Tile{ AsIs: e.Functions#2/2 } Tile{ AsIs: )/8 HalfReuse: {*}/11 } Tile{ AsIs: e.Externs#1/5 } Tile{ AsIs: e.Entries#2/9 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_MakeFunctionTable_A2]);
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_unwrapped_closure(context[11], context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeFunctionTable_A1("MakeFunctionTable=1", 982870901U, 3115847316U, func_gen_MakeFunctionTable_A1);


static refalrts::FnResult func_gen_MakeFunctionTable_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & MakeFunctionTable=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeFunctionTable=1\1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  do {
    // </0 & MakeFunctionTable=1\1/4 (/7 e.Entries#2/5 )/8 (/11 (/17 s.Offset#2/19 # E/20 e.Name#2/15 )/18 e.Body#2/13 )/12 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Entries#2 as range 5
    // closed e.Body#2 as range 13
    if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
      continue;
    context[20] = refalrts::ident_left( identifiers[ident_E], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.Name#2 as range 15
    //DEBUG: e.Entries#2: 5
    //DEBUG: e.Body#2: 13
    //DEBUG: s.Offset#2: 19
    //DEBUG: e.Name#2: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & MakeFunctionTable=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Entries#2/5 } Tile{ AsIs: (/7 } e.Name#2/15/21 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: (/17 AsIs: s.Offset#2/19 AsIs: # E/20 AsIs: e.Name#2/15 AsIs: )/18 AsIs: e.Body#2/13 AsIs: )/12 } Tile{ ]] }
    refalrts::copy_evar(vm, context[21], context[22], context[15], context[16]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeFunctionTable=1\1/4 (/7 e.Entries#2/5 )/8 (/11 e.OtherFunction#2/9 )/12 >/1
  // closed e.Entries#2 as range 5
  // closed e.OtherFunction#2 as range 9
  //DEBUG: e.Entries#2: 5
  //DEBUG: e.OtherFunction#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MakeFunctionTable=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Entries#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.OtherFunction#2/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeFunctionTable_A1L1("MakeFunctionTable=1\\1", 982870901U, 3115847316U, func_gen_MakeFunctionTable_A1L1);


static refalrts::FnResult func_MakeFunctionTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & MakeFunctionTable/4 (/7 e.Externs#1/5 )/8 e.Functions#1/2 >/1
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
  // closed e.Externs#1 as range 5
  // closed e.Functions#1 as range 2
  //DEBUG: e.Externs#1: 5
  //DEBUG: e.Functions#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: [*]/0 Reuse: & MakeFunctionTable=1/4 AsIs: (/7 AsIs: e.Externs#1/5 AsIs: )/8 } {*}/10 </11 & MapAccum/12 & MakeFunctionTable=1\1/13 (/14 )/15 Tile{ AsIs: e.Functions#1/2 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[0]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_MakeFunctionTable_A1L1]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_MakeFunctionTable_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeFunctionTable("MakeFunctionTable", 982870901U, 3115847316U, func_MakeFunctionTable);


static refalrts::FnResult func_gen_AddFunctionToTable_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & AddFunctionToTable$2=2/4 (/7 e.ForbiddenNames#1/5 )/8 (/11 e.Table#1/9 )/12 s.NameOffset#1/13 s.CodeOffset#1/14 (/17 e.Command#1/15 )/18 (/21 e.Body#1/19 )/22 e.NewName#3/2 >/1
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
  // closed e.ForbiddenNames#1 as range 5
  // closed e.Table#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Command#1 as range 15
  // closed e.Body#1 as range 19
  // closed e.NewName#3 as range 2
  //DEBUG: e.ForbiddenNames#1: 5
  //DEBUG: e.Table#1: 9
  //DEBUG: s.NameOffset#1: 13
  //DEBUG: s.CodeOffset#1: 14
  //DEBUG: e.Command#1: 15
  //DEBUG: e.Body#1: 19
  //DEBUG: e.NewName#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AddFunctionToTable/4 AsIs: (/7 } Tile{ HalfReuse: (/8 } Tile{ AsIs: e.ForbiddenNames#1/5 } Tile{ HalfReuse: )/11 AsIs: e.Table#1/9 AsIs: )/12 } Tile{ AsIs: (/17 } (/23 Tile{ AsIs: s.NameOffset#1/13 } # L/24 Tile{ AsIs: e.NewName#3/2 } Tile{ AsIs: )/18 } (/25 Tile{ AsIs: s.CodeOffset#1/14 } Tile{ AsIs: e.Command#1/15 } Tile{ HalfReuse: )/21 AsIs: e.Body#1/19 AsIs: )/22 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_ident(vm, context[24], identifiers[ident_L]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_AddFunctionToTable]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[11]);
  refalrts::reinit_close_bracket(context[21]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[22] );
  refalrts::link_brackets( context[25], context[21] );
  refalrts::link_brackets( context[23], context[18] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddFunctionToTable_S2A2("AddFunctionToTable$2=2", 982870901U, 3115847316U, func_gen_AddFunctionToTable_S2A2);


static refalrts::FnResult func_gen_AddFunctionToTable_S2A2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & AddFunctionToTable$2=2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddFunctionToTable$2=2:1/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & AddFunctionToTable$2=2:1/4 s.CodeOffset#1/5 e.Body-B#3/8 (/14 s.Offset#3/16 # LABEL/17 e.Label#3/18 '$'/22 e.Suf#3/20 )/15 e.Body-E#3/10 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
      if( ! context[14] )
        continue;
      refalrts::bracket_pointers(context[14], context[15]);
      // closed e.Body-E#3 as range 10
      if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
        continue;
      context[17] = refalrts::ident_left( identifiers[ident_LABEL], context[12], context[13] );
      if( ! context[17] )
        continue;
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[20] = context[12];
        context[21] = context[13];
        context[22] = refalrts::char_left( '$', context[20], context[21] );
        if( ! context[22] )
          continue;
        // closed e.Suf#3 as range 20
        //DEBUG: s.CodeOffset#1: 5
        //DEBUG: e.Body-B#3: 8
        //DEBUG: e.Body-E#3: 10
        //DEBUG: s.Offset#3: 16
        //DEBUG: e.Label#3: 18
        //DEBUG: e.Suf#3: 20
        //5: s.CodeOffset#1
        //8: e.Body-B#3
        //10: e.Body-E#3
        //16: s.Offset#3
        //18: e.Label#3
        //20: e.Suf#3
        //28: e.Label#3

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[25], functions[efunc_gen_AddFunctionToTable_S2A2B1S1C1]);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_IsObfuscated]);
        refalrts::copy_evar(vm, context[28], context[29], context[18], context[19]);
        refalrts::alloc_close_call(vm, context[30]);
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[23] );
        res = refalrts::splice_elem( res, context[24] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[26] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_elem( res, context[23] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </23 & AddFunctionToTable$2=2:1$1?1/27 # False/28 >/24
          context[25] = 0;
          context[26] = 0;
          context[27] = refalrts::call_left( context[25], context[26], context[23], context[24] );
          context[28] = refalrts::ident_left( identifiers[ident_False], context[25], context[26] );
          if( ! context[28] )
            continue;
          if( ! refalrts::empty_seq( context[25], context[26] ) )
            continue;
          //DEBUG: s.CodeOffset#1: 5
          //DEBUG: e.Body-B#3: 8
          //DEBUG: e.Body-E#3: 10
          //DEBUG: s.Offset#3: 16
          //DEBUG: e.Label#3: 18
          //DEBUG: e.Suf#3: 20

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & AddFunctionToTable$2=2:1/4 s.CodeOffset#1/5 e.Body-B#3/8 (/14 s.Offset#3/16 # LABEL/17 {REMOVED TILE} '$'/22 e.Suf#3/20 )/15 e.Body-E#3/10 </23 & AddFunctionToTable$2=2:1$1?1/27 # False/28 >/24 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: e.Label#3/18 } Tile{ ]] }
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[18], context[19] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[23], context[24]);
        continue;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[12], context[13] ) );
    } while ( refalrts::open_evar_advance( context[8], context[9], context[6], context[7] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddFunctionToTable$2=2:1/4 s.CodeOffset#1/5 e.Body#3/2 >/1
  // closed e.Body#3 as range 2
  //DEBUG: s.CodeOffset#1: 5
  //DEBUG: e.Body#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Body#3/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } 'F'/6 Tile{ AsIs: </0 Reuse: & Symb/4 AsIs: s.CodeOffset#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[6], 'F');
  refalrts::update_name(context[4], functions[efunc_Symb]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddFunctionToTable_S2A2B1("AddFunctionToTable$2=2:1", 982870901U, 3115847316U, func_gen_AddFunctionToTable_S2A2B1);


static refalrts::FnResult func_gen_AddFunctionToTable_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & AddFunctionToTable$3=1/4 (/7 e.ForbiddenNames#1/5 )/8 (/11 e.Name#1/9 )/12 (/15 e.Table#1/13 )/16 s.CodeOffset#1/17 s.NameOffset#1/18 s.DeclareCommand#1/19 (/22 e.Command#1/20 )/23 (/26 e.Body#1/24 )/27 s.Type#2/28 >/1
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
  // closed e.ForbiddenNames#1 as range 5
  // closed e.Name#1 as range 9
  // closed e.Table#1 as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  // closed e.Command#1 as range 20
  // closed e.Body#1 as range 24
  if( ! refalrts::svar_left( context[28], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.ForbiddenNames#1: 5
  //DEBUG: e.Name#1: 9
  //DEBUG: e.Table#1: 13
  //DEBUG: s.CodeOffset#1: 17
  //DEBUG: s.NameOffset#1: 18
  //DEBUG: s.DeclareCommand#1: 19
  //DEBUG: e.Command#1: 20
  //DEBUG: e.Body#1: 24
  //DEBUG: s.Type#2: 28

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.ForbiddenNames#1/5 } Tile{ AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 HalfReuse: )/15 AsIs: e.Table#1/13 HalfReuse: (/16 AsIs: s.CodeOffset#1/17 } Tile{ AsIs: s.Type#2/28 } e.Name#1/9/29 Tile{ AsIs: )/23 } Tile{ AsIs: )/8 } Tile{ AsIs: (/22 } Tile{ AsIs: (/7 } Tile{ AsIs: s.NameOffset#1/18 AsIs: s.DeclareCommand#1/19 } e.Name#1/9/31 )/33 (/34 Tile{ HalfReuse: s.CodeOffset1 #17/1 } Tile{ AsIs: e.Command#1/20 } Tile{ HalfReuse: )/26 AsIs: e.Body#1/24 AsIs: )/27 } Tile{ ]] }
  refalrts::copy_evar(vm, context[29], context[30], context[9], context[10]);
  refalrts::copy_evar(vm, context[31], context[32], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::reinit_open_bracket(context[16]);
  refalrts::reinit_svar( context[1], context[17] );
  refalrts::reinit_close_bracket(context[26]);
  refalrts::link_brackets( context[22], context[27] );
  refalrts::link_brackets( context[34], context[26] );
  refalrts::link_brackets( context[7], context[33] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[16], context[23] );
  refalrts::link_brackets( context[4], context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[11], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddFunctionToTable_S3A1("AddFunctionToTable$3=1", 982870901U, 3115847316U, func_gen_AddFunctionToTable_S3A1);


static refalrts::FnResult func_gen_AddFunctionToTable_S3A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & AddFunctionToTable$3=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddFunctionToTable$3=1:1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & AddFunctionToTable$3=1:1/4 # L/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_L], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AddFunctionToTable$3=1:1/4 # L/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Local/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Local]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddFunctionToTable$3=1:1/4 # E/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_E], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AddFunctionToTable$3=1:1/4 # E/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Entry/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Entry]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddFunctionToTable_S3A1B1("AddFunctionToTable$3=1:1", 982870901U, 3115847316U, func_gen_AddFunctionToTable_S3A1B1);


static refalrts::FnResult func_AddFunctionToTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & AddFunctionToTable/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddFunctionToTable/4 (/7 (/11 e.new#1/9 )/12 e.new#2/5 )/8 (/15 (/19 s.new#3/25 s.new#4/26 e.new#5/17 )/20 (/23 s.new#6/27 e.new#7/21 )/24 e.new#8/13 )/16 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[13], context[14] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 9
  // closed e.new#2 as range 5
  // closed e.new#8 as range 13
  if( ! refalrts::svar_left( context[25], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[26], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 17
  if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 21
  do {
    // </0 & AddFunctionToTable/4 (/7 (/11 e.new#9/9 )/12 e.new#10/5 )/8 (/15 (/19 s.new#11/25 # L/26 e.new#12/17 )/20 (/23 s.new#13/27 e.new#14/21 )/24 e.new#15/13 )/16 >/1
    if( ! refalrts::ident_term( identifiers[ident_L], context[26] ) )
      continue;
    // closed e.new#9 as range 9
    // closed e.new#10 as range 5
    // closed e.new#12 as range 17
    // closed e.new#14 as range 21
    // closed e.new#15 as range 13
    do {
      // </0 & AddFunctionToTable/4 (/7 (/11 e.ForbiddenNames-B#1/30 (/36 e.Name#1/38 )/37 e.ForbiddenNames-E#1/32 )/12 e.Table#1/5 )/8 (/15 (/19 s.NameOffset#1/25 # L/26 e.Name#1/17 )/20 (/23 s.CodeOffset#1/27 e.Command#1/21 )/24 e.Body#1/13 )/16 >/1
      context[28] = context[9];
      context[29] = context[10];
      // closed e.Table#1 as range 5
      // closed e.Name#1 as range 17
      // closed e.Command#1 as range 21
      // closed e.Body#1 as range 13
      context[30] = 0;
      context[31] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[32] = context[28];
        context[33] = context[29];
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::brackets_left( context[34], context[35], context[32], context[33] );
        if( ! context[36] )
          continue;
        refalrts::bracket_pointers(context[36], context[37]);
        if( ! refalrts::repeated_evar_left( vm, context[38], context[39], context[17], context[18], context[34], context[35] ) )
          continue;
        if( ! refalrts::empty_seq( context[34], context[35] ) )
          continue;
        // closed e.ForbiddenNames-E#1 as range 32
        //DEBUG: s.NameOffset#1: 25
        //DEBUG: s.CodeOffset#1: 27
        //DEBUG: e.Table#1: 5
        //DEBUG: e.Name#1: 17
        //DEBUG: e.Command#1: 21
        //DEBUG: e.Body#1: 13
        //DEBUG: e.ForbiddenNames-B#1: 30
        //DEBUG: e.ForbiddenNames-E#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & AddFunctionToTable/4 AsIs: (/7 AsIs: (/11 AsIs: e.ForbiddenNames-B#1/30 AsIs: (/36 AsIs: e.Name#1/38 AsIs: )/37 AsIs: e.ForbiddenNames-E#1/32 AsIs: )/12 AsIs: e.Table#1/5 AsIs: )/8 AsIs: (/15 AsIs: (/19 AsIs: s.NameOffset#1/25 AsIs: # L/26 } </40 & IncName/41 Tile{ AsIs: e.Name#1/17 } >/42 Tile{ AsIs: )/20 AsIs: (/23 AsIs: s.CodeOffset#1/27 AsIs: e.Command#1/21 AsIs: )/24 AsIs: e.Body#1/13 AsIs: )/16 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[40]);
        refalrts::alloc_name(vm, context[41], functions[efunc_IncName]);
        refalrts::alloc_close_call(vm, context[42]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::push_stack( vm, context[42] );
        refalrts::push_stack( vm, context[40] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[20];
        res = refalrts::splice_evar( res, context[42], context[42] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[30], context[31], context[28], context[29] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AddFunctionToTable/4 (/7 (/11 e.ForbiddenNames#1/9 )/12 e.Table#1/5 )/8 (/15 (/19 s.NameOffset#1/25 # L/26 e.Name#1/17 )/20 (/23 s.CodeOffset#1/27 e.Command#1/21 )/24 e.Body#1/13 )/16 >/1
    // closed e.ForbiddenNames#1 as range 9
    // closed e.Table#1 as range 5
    // closed e.Name#1 as range 17
    // closed e.Command#1 as range 21
    // closed e.Body#1 as range 13
    //DEBUG: s.NameOffset#1: 25
    //DEBUG: s.CodeOffset#1: 27
    //DEBUG: e.ForbiddenNames#1: 9
    //DEBUG: e.Table#1: 5
    //DEBUG: e.Name#1: 17
    //DEBUG: e.Command#1: 21
    //DEBUG: e.Body#1: 13
    //5: e.Table#1
    //9: e.ForbiddenNames#1
    //13: e.Body#1
    //17: e.Name#1
    //21: e.Command#1
    //25: s.NameOffset#1
    //27: s.CodeOffset#1
    //33: e.Name#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_AddFunctionToTable_S2C1]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_IsObfuscated]);
    refalrts::copy_evar(vm, context[33], context[34], context[17], context[18]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[28] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[31] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </28 & AddFunctionToTable$2?1/32 # True/33 >/29
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::call_left( context[30], context[31], context[28], context[29] );
      context[33] = refalrts::ident_left( identifiers[ident_True], context[30], context[31] );
      if( ! context[33] )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      //DEBUG: s.NameOffset#1: 25
      //DEBUG: s.CodeOffset#1: 27
      //DEBUG: e.ForbiddenNames#1: 9
      //DEBUG: e.Table#1: 5
      //DEBUG: e.Name#1: 17
      //DEBUG: e.Command#1: 21
      //DEBUG: e.Body#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.NameOffset#1/25 {REMOVED TILE} e.Name#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & AddFunctionToTable$2=2/7 AsIs: (/11 AsIs: e.ForbiddenNames#1/9 AsIs: )/12 } Tile{ AsIs: (/19 } Tile{ AsIs: e.Table#1/5 } Tile{ AsIs: )/20 HalfReuse: s.NameOffset1 #25/23 AsIs: s.CodeOffset#1/27 } Tile{ AsIs: (/15 } Tile{ AsIs: e.Command#1/21 } Tile{ AsIs: )/8 } Tile{ HalfReuse: (/24 AsIs: e.Body#1/13 AsIs: )/16 HalfReuse: {*}/28 HalfReuse: </32 HalfReuse: [*]/33 HalfReuse: & AddFunctionToTable$2=2:1/29 HalfReuse: s.CodeOffset1 #27/1 } Tile{ HalfReuse: {*}/26 } e.Body#1/13/34 >/36 >/37 Tile{ ]] }
      refalrts::copy_evar(vm, context[34], context[35], context[13], context[14]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::alloc_close_call(vm, context[37]);
      refalrts::reinit_closure_head(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_gen_AddFunctionToTable_S2A2]);
      refalrts::reinit_svar( context[23], context[25] );
      refalrts::reinit_open_bracket(context[24]);
      refalrts::reinit_unwrapped_closure(context[28], context[4]);
      refalrts::reinit_open_call(context[32]);
      refalrts::reinit_closure_head(context[33]);
      refalrts::reinit_name(context[29], functions[efunc_gen_AddFunctionToTable_S2A2B1]);
      refalrts::reinit_svar( context[1], context[27] );
      refalrts::reinit_unwrapped_closure(context[26], context[33]);
      refalrts::push_stack( vm, context[37] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[24], context[16] );
      refalrts::link_brackets( context[15], context[8] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[24], context[1] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[20], context[27] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      refalrts::splice_to_freelist_open( vm, context[12], res );
      refalrts::wrap_closure( context[28] );
      refalrts::wrap_closure( context[26] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[28], context[29]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddFunctionToTable/4 (/7 (/11 e.ForbiddenNames#1/9 )/12 e.Table#1/5 )/8 (/15 (/19 s.NameOffset#1/25 s.DeclareCommand#1/26 e.Name#1/17 )/20 (/23 s.CodeOffset#1/27 e.Command#1/21 )/24 e.Body#1/13 )/16 >/1
  // closed e.ForbiddenNames#1 as range 9
  // closed e.Table#1 as range 5
  // closed e.Name#1 as range 17
  // closed e.Command#1 as range 21
  // closed e.Body#1 as range 13
  //DEBUG: s.NameOffset#1: 25
  //DEBUG: s.DeclareCommand#1: 26
  //DEBUG: s.CodeOffset#1: 27
  //DEBUG: e.ForbiddenNames#1: 9
  //DEBUG: e.Table#1: 5
  //DEBUG: e.Name#1: 17
  //DEBUG: e.Command#1: 21
  //DEBUG: e.Body#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.CodeOffset#1/27 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & AddFunctionToTable$3=1/7 AsIs: (/11 AsIs: e.ForbiddenNames#1/9 AsIs: )/12 } (/28 Tile{ AsIs: e.Name#1/17 } Tile{ AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.Table#1/5 } Tile{ HalfReuse: )/15 HalfReuse: s.CodeOffset1 #27/19 AsIs: s.NameOffset#1/25 AsIs: s.DeclareCommand#1/26 } (/29 Tile{ AsIs: e.Command#1/21 } Tile{ AsIs: )/8 } Tile{ HalfReuse: (/24 AsIs: e.Body#1/13 AsIs: )/16 HalfReuse: {*}/1 } </30 & AddFunctionToTable$3=1:1/31 s.DeclareCommand#1/26/32 >/33 >/34 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_open_call(vm, context[30]);
  refalrts::alloc_name(vm, context[31], functions[efunc_gen_AddFunctionToTable_S3A1B1]);
  refalrts::copy_stvar(vm, context[32], context[26]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_AddFunctionToTable_S3A1]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::reinit_svar( context[19], context[27] );
  refalrts::reinit_open_bracket(context[24]);
  refalrts::reinit_unwrapped_closure(context[1], context[4]);
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[30] );
  refalrts::link_brackets( context[24], context[16] );
  refalrts::link_brackets( context[29], context[8] );
  refalrts::link_brackets( context[23], context[15] );
  refalrts::link_brackets( context[28], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[30], context[34] );
  res = refalrts::splice_evar( res, context[24], context[1] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[15], context[26] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  refalrts::splice_to_freelist_open( vm, context[12], res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddFunctionToTable("AddFunctionToTable", 982870901U, 3115847316U, func_AddFunctionToTable);


static refalrts::FnResult func_IncName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & IncName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & IncName/4 e.new#1/5 s.new#2/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_right( context[7], context[5], context[6] ) )
      continue;
    // closed e.new#1 as range 5
    do {
      // </0 & IncName/4 e.Name#1/5 s.Last#1/7 >/1
      // closed e.Name#1 as range 5
      //DEBUG: s.Last#1: 7
      //DEBUG: e.Name#1: 5
      //5: e.Name#1
      //7: s.Last#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[8]);
      refalrts::alloc_name(vm, context[10], functions[efunc_gen_IncName_S1C1]);
      refalrts::alloc_chars(vm, context[11], context[12], "0123456789", 10);
      refalrts::alloc_close_call(vm, context[9]);
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[8] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_elem( res, context[8] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </8 & IncName$1?1/12 e.Digits-B#2/13 s.Last#1/17 s.Next#2/18 e.Digit-E#2/15 >/9
        context[10] = 0;
        context[11] = 0;
        context[12] = refalrts::call_left( context[10], context[11], context[8], context[9] );
        context[13] = 0;
        context[14] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[15] = context[10];
          context[16] = context[11];
          if( ! refalrts::repeated_stvar_left( vm, context[17], context[7], context[15], context[16] ) )
            continue;
          if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
            continue;
          // closed e.Digit-E#2 as range 15
          //DEBUG: s.Last#1: 7
          //DEBUG: e.Name#1: 5
          //DEBUG: e.Digits-B#2: 13
          //DEBUG: s.Next#2: 18
          //DEBUG: e.Digit-E#2: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & IncName/4 {REMOVED TILE} s.Last#1/7 </8 & IncName$1?1/12 e.Digits-B#2/13 s.Last#1/17 s.Next#2/18 e.Digit-E#2/15 >/9 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: s.Next2 #18/1 ]] }
          refalrts::reinit_svar( context[1], context[18] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[5], context[6] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[13], context[14], context[10], context[11] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[8], context[9]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IncName/4 e.Name#1/5 '9'/7 >/1
    if( ! refalrts::char_term( '9', context[7] ) )
      continue;
    // closed e.Name#1 as range 5
    //DEBUG: e.Name#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & IncName/4 AsIs: e.Name#1/5 HalfReuse: >/7 HalfReuse: '0'/1 ]] }
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_char(context[1], '0');
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IncName/4 e.Name#1/2 >/1
  // closed e.Name#1 as range 2
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IncName/4 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: '0'/1 ]] }
  refalrts::reinit_char(context[1], '0');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IncName("IncName", 982870901U, 3115847316U, func_IncName);


static refalrts::FnResult func_IsObfuscated(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & IsObfuscated/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & IsObfuscated/4 e.Name#1/2 >/1
    // closed e.Name#1 as range 2
    //DEBUG: e.Name#1: 2
    //2: e.Name#1
    //10: e.Name#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[5]);
    refalrts::alloc_name(vm, context[7], functions[efunc_gen_IsObfuscated_S1C1]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Type]);
    refalrts::copy_evar(vm, context[10], context[11], context[2], context[3]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_close_call(vm, context[6]);
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </5 & IsObfuscated$1?1/9 'L'/10 s.s#2/11 s.Init#2/12 e.Tail#2/7 >/6
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::call_left( context[7], context[8], context[5], context[6] );
      context[10] = refalrts::char_left( 'L', context[7], context[8] );
      if( ! context[10] )
        continue;
      if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
        continue;
      if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
        continue;
      // closed e.Tail#2 as range 7
      //DEBUG: e.Name#1: 2
      //DEBUG: s.s#2: 11
      //DEBUG: s.Init#2: 12
      //DEBUG: e.Tail#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Name#1/2 </5 & IsObfuscated$1?1/9 'L'/10 s.s#2/11 s.Init#2/12 {REMOVED TILE} >/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsObfuscated-Tail/4 } Tile{ AsIs: e.Tail#2/7 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_IsObfuscatedm_Tail]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[5], context[6]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsObfuscated/4 e.Name#1/2 >/1
  // closed e.Name#1 as range 2
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsObfuscated/4 e.Name#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_True]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsObfuscated("IsObfuscated", 982870901U, 3115847316U, func_IsObfuscated);


static refalrts::FnResult func_gen_IsObfuscatedm_Tail_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & IsObfuscated-Tail:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsObfuscated-Tail:1/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & IsObfuscated-Tail:1/4 s.new#4/5 s.new#5/6 s.new#6/9 e.new#7/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#7 as range 7
    do {
      // </0 & IsObfuscated-Tail:1/4 'L'/5 s.s#2/6 s.Next#2/9 e.Tail#2/7 >/1
      if( ! refalrts::char_term( 'L', context[5] ) )
        continue;
      // closed e.Tail#2 as range 7
      //DEBUG: s.s#2: 6
      //DEBUG: s.Next#2: 9
      //DEBUG: e.Tail#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} 'L'/5 s.s#2/6 s.Next#2/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsObfuscated-Tail/4 } Tile{ AsIs: e.Tail#2/7 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_IsObfuscatedm_Tail]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & IsObfuscated-Tail:1/4 'D'/5 s.s#2/6 s.Next#2/9 e.Tail#2/7 >/1
      if( ! refalrts::char_term( 'D', context[5] ) )
        continue;
      // closed e.Tail#2 as range 7
      //DEBUG: s.s#2: 6
      //DEBUG: s.Next#2: 9
      //DEBUG: e.Tail#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} 'D'/5 s.s#2/6 s.Next#2/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsObfuscated-Tail/4 } Tile{ AsIs: e.Tail#2/7 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_IsObfuscatedm_Tail]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & IsObfuscated-Tail:1/4 s.t#2/5 s.s#2/6 '-'/9 e.Tail#2/7 >/1
      if( ! refalrts::char_term( '-', context[9] ) )
        continue;
      // closed e.Tail#2 as range 7
      //DEBUG: s.t#2: 5
      //DEBUG: s.s#2: 6
      //DEBUG: e.Tail#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & IsObfuscated-Tail:1/4 s.t#2/5 s.s#2/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & IsObfuscated-Tail/9 AsIs: e.Tail#2/7 AsIs: >/1 ]] }
      refalrts::reinit_name(context[9], functions[efunc_IsObfuscatedm_Tail]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsObfuscated-Tail:1/4 s.t#2/5 s.s#2/6 '_'/9 e.Tail#2/7 >/1
    if( ! refalrts::char_term( '_', context[9] ) )
      continue;
    // closed e.Tail#2 as range 7
    //DEBUG: s.t#2: 5
    //DEBUG: s.s#2: 6
    //DEBUG: e.Tail#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & IsObfuscated-Tail:1/4 s.t#2/5 s.s#2/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & IsObfuscated-Tail/9 AsIs: e.Tail#2/7 AsIs: >/1 ]] }
    refalrts::reinit_name(context[9], functions[efunc_IsObfuscatedm_Tail]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IsObfuscated-Tail:1/4 '*'/5 s.s#2/6 >/1
    if( ! refalrts::char_term( '*', context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.s#2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsObfuscated-Tail:1/4 '*'/5 s.s#2/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_False]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsObfuscated-Tail:1/4 s.t#2/5 s.s#2/6 e.Tail#2/2 >/1
  // closed e.Tail#2 as range 2
  //DEBUG: s.t#2: 5
  //DEBUG: s.s#2: 6
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsObfuscated-Tail:1/4 s.t#2/5 s.s#2/6 e.Tail#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_True]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsObfuscatedm_Tail_B1("IsObfuscated-Tail:1", 982870901U, 3115847316U, func_gen_IsObfuscatedm_Tail_B1);


static refalrts::FnResult func_IsObfuscatedm_Tail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & IsObfuscated-Tail/4 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tail#1 as range 2
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & IsObfuscated-Tail:1/6 Tile{ AsIs: </0 Reuse: & Type/4 AsIs: e.Tail#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_IsObfuscatedm_Tail_B1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Type]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsObfuscatedm_Tail("IsObfuscated-Tail", 982870901U, 3115847316U, func_IsObfuscatedm_Tail);


static refalrts::FnResult func_CheckupFunctionStarts(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & CheckupFunctionStarts/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckupFunctionStarts/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & CheckupFunctionStarts/4 (/15 s.Offset#1/17 s.Type#1/18 e.Name#1/13 )/16 e.Table#1/9 (/7 e.Offsets-B#1/19 s.Offset#1/23 e.Offsets-E#1/21 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Table#1 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
      continue;
    // closed e.Name#1 as range 13
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[21] = context[11];
      context[22] = context[12];
      if( ! refalrts::repeated_stvar_left( vm, context[23], context[17], context[21], context[22] ) )
        continue;
      // closed e.Offsets-E#1 as range 21
      //DEBUG: e.Table#1: 9
      //DEBUG: s.Offset#1: 17
      //DEBUG: s.Type#1: 18
      //DEBUG: e.Name#1: 13
      //DEBUG: e.Offsets-B#1: 19
      //DEBUG: e.Offsets-E#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/15 s.Offset#1/17 s.Type#1/18 e.Name#1/13 )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#1/23 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckupFunctionStarts/4 } Tile{ AsIs: e.Table#1/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Offsets-B#1/19 } Tile{ AsIs: e.Offsets-E#1/21 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[19], context[20], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckupFunctionStarts/4 (/7 )/8 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckupFunctionStarts/4 (/7 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Ok/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Ok]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckupFunctionStarts/4 e.Table#1/2 (/7 e.Offsets#1/5 )/8 >/1
  // closed e.Table#1 as range 2
  // closed e.Offsets#1 as range 5
  //DEBUG: e.Table#1: 2
  //DEBUG: e.Offsets#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckupFunctionStarts/4 e.Table#1/2 (/7 e.Offsets#1/5 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fail/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Fail]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckupFunctionStarts("CheckupFunctionStarts", 982870901U, 3115847316U, func_CheckupFunctionStarts);


static refalrts::FnResult func_CheckupEntries(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & CheckupEntries/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckupEntries/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & CheckupEntries/4 (/13 s.new#4/15 s.new#5/16 e.new#6/11 )/14 e.new#7/9 (/7 e.new#3/5 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.new#7 as range 9
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
      continue;
    // closed e.new#6 as range 11
    do {
      // </0 & CheckupEntries/4 (/13 s.Offset#1/15 # Entry/16 e.Name#1/11 )/14 e.Table#1/9 (/7 e.Entries-B#1/19 (/25 e.Name#1/27 s.Offset#1/29 )/26 e.Entries-E#1/21 )/8 >/1
      context[17] = context[5];
      context[18] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_Entry], context[16] ) )
        continue;
      // closed e.Name#1 as range 11
      // closed e.Table#1 as range 9
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[17];
        context[22] = context[18];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        if( ! refalrts::repeated_evar_left( vm, context[27], context[28], context[11], context[12], context[23], context[24] ) )
          continue;
        if( ! refalrts::repeated_stvar_left( vm, context[29], context[15], context[23], context[24] ) )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        // closed e.Entries-E#1 as range 21
        //DEBUG: s.Offset#1: 15
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Table#1: 9
        //DEBUG: e.Entries-B#1: 19
        //DEBUG: e.Entries-E#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/13 s.Offset#1/15 # Entry/16 e.Name#1/11 )/14 {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} e.Name#1/27 s.Offset#1/29 )/26 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckupEntries/4 } Tile{ AsIs: e.Table#1/9 } Tile{ AsIs: (/25 } Tile{ AsIs: e.Entries-B#1/19 } Tile{ AsIs: e.Entries-E#1/21 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[25], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[25], context[25] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[17], context[18] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckupEntries/4 (/13 s.Offset#1/15 # Local/16 e.Name#1/11 )/14 e.Table#1/9 (/7 e.Entries#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Local], context[16] ) )
      continue;
    // closed e.Name#1 as range 11
    // closed e.Table#1 as range 9
    // closed e.Entries#1 as range 5
    //DEBUG: s.Offset#1: 15
    //DEBUG: e.Name#1: 11
    //DEBUG: e.Table#1: 9
    //DEBUG: e.Entries#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & CheckupEntries/4 (/13 s.Offset#1/15 # Local/16 e.Name#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & CheckupEntries/14 AsIs: e.Table#1/9 AsIs: (/7 AsIs: e.Entries#1/5 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::reinit_name(context[14], functions[efunc_CheckupEntries]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckupEntries/4 (/7 )/8 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckupEntries/4 (/7 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Ok/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Ok]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckupEntries/4 e.Table#1/2 (/7 e.Entries#1/5 )/8 >/1
  // closed e.Table#1 as range 2
  // closed e.Entries#1 as range 5
  //DEBUG: e.Table#1: 2
  //DEBUG: e.Entries#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckupEntries/4 e.Table#1/2 (/7 e.Entries#1/5 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fail/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Fail]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckupEntries("CheckupEntries", 982870901U, 3115847316U, func_CheckupEntries);


static refalrts::FnResult func_gen_ResolveFunctions_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ResolveFunctions=1/4 (/7 e.Table#2/5 )/8 e.Code#2/2 >/1
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
  // closed e.Table#2 as range 5
  // closed e.Code#2 as range 2
  //DEBUG: e.Table#2: 5
  //DEBUG: e.Code#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ResolveFunctions=1/4 (/7 e.Table#2/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Code#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolveFunctions_A1("ResolveFunctions=1", 982870901U, 3115847316U, func_gen_ResolveFunctions_A1);


static refalrts::FnResult func_gen_ResolveFunctions_A1L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ResolveFunctions=1\1=1/4 e.Function#3/2 (/7 e.Table#3/5 )/8 >/1
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
  // closed e.Function#3 as range 2
  // closed e.Table#3 as range 5
  //DEBUG: e.Function#3: 2
  //DEBUG: e.Table#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Table#3/5 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: e.Function#3/2 } Tile{ HalfReuse: )/4 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[1]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::link_brackets( context[1], context[4] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolveFunctions_A1L1A1("ResolveFunctions=1\\1=1", 982870901U, 3115847316U, func_gen_ResolveFunctions_A1L1A1);


static refalrts::FnResult func_gen_ResolveFunctions_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ResolveFunctions=1\1/4 (/7 e.Table#2/5 )/8 (/11 e.Function#2/9 )/12 >/1
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
  // closed e.Table#2 as range 5
  // closed e.Function#2 as range 9
  //DEBUG: e.Table#2: 5
  //DEBUG: e.Function#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveFunctions=1\1=1/4 } Tile{ HalfReuse: </12 } & ResolveFunctions-Body/13 Tile{ AsIs: e.Function#2/9 } Tile{ AsIs: (/7 AsIs: e.Table#2/5 AsIs: )/8 HalfReuse: >/11 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_ResolveFunctionsm_Body]);
  refalrts::update_name(context[4], functions[efunc_gen_ResolveFunctions_A1L1A1]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_close_call(context[11]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolveFunctions_A1L1("ResolveFunctions=1\\1", 982870901U, 3115847316U, func_gen_ResolveFunctions_A1L1);


static refalrts::FnResult func_ResolveFunctions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ResolveFunctions/4 e.Code#1/2 (/7 e.Table#1/5 )/8 >/1
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
  // closed e.Code#1 as range 2
  // closed e.Table#1 as range 5
  //DEBUG: e.Code#1: 2
  //DEBUG: e.Table#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveFunctions=1/4 } </9 & MapAccum/10 & ResolveFunctions=1\1/11 Tile{ AsIs: (/7 AsIs: e.Table#1/5 AsIs: )/8 } Tile{ AsIs: e.Code#1/2 } >/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_ResolveFunctions_A1L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_ResolveFunctions_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveFunctions("ResolveFunctions", 982870901U, 3115847316U, func_ResolveFunctions);


static refalrts::FnResult func_ResolveFunctionsm_Body(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & ResolveFunctions-Body/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveFunctions-Body/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & ResolveFunctions-Body/4 e.Code-B#1/13 (/21 s.Offset#1/23 # ACT1/24 s.FuncOffset#1/25 )/22 e.Code-E#1/15 (/7 e.Functions-B#1/26 (/32 s.FuncOffset#1/34 s.Type#1/35 e.Name#1/30 )/33 e.Functions-E#1/28 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.Code-E#1 as range 15
      if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
        continue;
      context[24] = refalrts::ident_left( identifiers[ident_ACT1], context[19], context[20] );
      if( ! context[24] )
        continue;
      if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      context[26] = 0;
      context[27] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[28] = context[17];
        context[29] = context[18];
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        if( ! refalrts::repeated_stvar_left( vm, context[34], context[25], context[30], context[31] ) )
          continue;
        // closed e.Functions-E#1 as range 28
        if( ! refalrts::svar_left( context[35], context[30], context[31] ) )
          continue;
        // closed e.Name#1 as range 30
        //DEBUG: e.Code-B#1: 13
        //DEBUG: e.Code-E#1: 15
        //DEBUG: s.Offset#1: 23
        //DEBUG: s.FuncOffset#1: 25
        //DEBUG: e.Functions-B#1: 26
        //DEBUG: e.Functions-E#1: 28
        //DEBUG: s.Type#1: 35
        //DEBUG: e.Name#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.FuncOffset#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Code-B#1/13 } Tile{ AsIs: (/21 AsIs: s.Offset#1/23 AsIs: # ACT1/24 } e.Name#1/30/36 Tile{ HalfReuse: )/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ResolveFunctions-Body/22 AsIs: e.Code-E#1/15 AsIs: (/7 } Tile{ AsIs: (/32 AsIs: s.FuncOffset#1/34 AsIs: s.Type#1/35 AsIs: e.Name#1/30 AsIs: )/33 } Tile{ AsIs: e.Functions-B#1/26 } Tile{ AsIs: e.Functions-E#1/28 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[36], context[37], context[30], context[31]);
        refalrts::reinit_close_bracket(context[4]);
        refalrts::reinit_name(context[22], functions[efunc_ResolveFunctionsm_Body]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[32], context[33] );
        refalrts::link_brackets( context[21], context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_evar( res, context[22], context[7] );
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[4], context[4] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[21], context[24] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[26], context[27], context[17], context[18] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveFunctions-Body/4 e.Code#1/2 (/7 e.Functions#1/5 )/8 >/1
  // closed e.Code#1 as range 2
  // closed e.Functions#1 as range 5
  //DEBUG: e.Code#1: 2
  //DEBUG: e.Functions#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ResolveFunctions-Body/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Code#1/2 } Tile{ AsIs: (/7 AsIs: e.Functions#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveFunctionsm_Body("ResolveFunctions-Body", 982870901U, 3115847316U, func_ResolveFunctionsm_Body);


static refalrts::FnResult func_gen_DecodeCommands_S28A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & DecodeCommands$28=1/4 s.Offset#1/5 s.Count#1/6 (/9 e.Chars#2/7 )/10 e.Bytes#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Chars#2 as range 7
  // closed e.Bytes#2 as range 2
  //DEBUG: s.Offset#1: 5
  //DEBUG: s.Count#1: 6
  //DEBUG: e.Chars#2: 7
  //DEBUG: e.Bytes#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/11 s.Offset#1/5/12 # SYMS/13 Tile{ AsIs: s.Count#1/6 HalfReuse: </9 } & Chr/14 Tile{ AsIs: e.Chars#2/7 } >/15 )/16 </17 & DecodeCommands/18 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } </19 & Add/20 2/21 s.Count#1/6/22 >/23 Tile{ HalfReuse: >/10 AsIs: e.Bytes#2/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::copy_stvar(vm, context[12], context[5]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_SYMS]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Chr]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_DecodeCommands]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[21], 2UL);
  refalrts::copy_stvar(vm, context[22], context[6]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::reinit_open_call(context[9]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[15], context[18] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecodeCommands_S28A1("DecodeCommands$28=1", 982870901U, 3115847316U, func_gen_DecodeCommands_S28A1);


static refalrts::FnResult func_gen_DecodeCommands_S29A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & DecodeCommands$29=1/4 s.Offset#1/5 s.Count#1/6 (/9 e.Chars#2/7 )/10 e.Bytes#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Chars#2 as range 7
  // closed e.Bytes#2 as range 2
  //DEBUG: s.Offset#1: 5
  //DEBUG: s.Count#1: 6
  //DEBUG: e.Chars#2: 7
  //DEBUG: e.Bytes#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/11 s.Offset#1/5/12 # SYMSR/13 Tile{ AsIs: s.Count#1/6 HalfReuse: </9 } & Chr/14 Tile{ AsIs: e.Chars#2/7 } >/15 )/16 </17 & DecodeCommands/18 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } </19 & Add/20 2/21 s.Count#1/6/22 >/23 Tile{ HalfReuse: >/10 AsIs: e.Bytes#2/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::copy_stvar(vm, context[12], context[5]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_SYMSR]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Chr]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_DecodeCommands]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[21], 2UL);
  refalrts::copy_stvar(vm, context[22], context[6]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::reinit_open_call(context[9]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[15], context[18] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecodeCommands_S29A1("DecodeCommands$29=1", 982870901U, 3115847316U, func_gen_DecodeCommands_S29A1);


static refalrts::FnResult func_gen_DecodeCommands_S30A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & DecodeCommands$30=1/4 s.Offset#1/5 s.Count#1/6 (/9 e.Chars#2/7 )/10 e.Bytes#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Chars#2 as range 7
  // closed e.Bytes#2 as range 2
  //DEBUG: s.Offset#1: 5
  //DEBUG: s.Count#1: 6
  //DEBUG: e.Chars#2: 7
  //DEBUG: e.Bytes#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/11 s.Offset#1/5/12 # TEXT/13 Tile{ AsIs: s.Count#1/6 HalfReuse: </9 } & Chr/14 Tile{ AsIs: e.Chars#2/7 } >/15 )/16 </17 & DecodeCommands/18 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } </19 & Add/20 2/21 s.Count#1/6/22 >/23 Tile{ HalfReuse: >/10 AsIs: e.Bytes#2/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::copy_stvar(vm, context[12], context[5]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_TEXT]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Chr]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_DecodeCommands]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[21], 2UL);
  refalrts::copy_stvar(vm, context[22], context[6]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::reinit_open_call(context[9]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[15], context[18] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecodeCommands_S30A1("DecodeCommands$30=1", 982870901U, 3115847316U, func_gen_DecodeCommands_S30A1);


static refalrts::FnResult func_DecodeCommands(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & DecodeCommands/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DecodeCommands/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DecodeCommands/4 s.new#3/5 s.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 1/8 e.Name#1/11 0/15 e.Bytes#1/13 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::number_term( 1UL, context[8] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[13] = context[9];
        context[14] = context[10];
        context[15] = refalrts::number_left( 0UL, context[13], context[14] );
        if( ! context[15] )
          continue;
        // closed e.Bytes#1 as range 13
        //DEBUG: s.Offset#1: 5
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Bytes#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/16 s.Offset#1/5/17 # ACT_EXTRN/18 </19 & Chr/20 Tile{ AsIs: e.Name#1/11 } >/21 )/22 </23 & DecodeCommands/24 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 Reuse: 5/8 } Tile{ HalfReuse: >/15 AsIs: e.Bytes#1/13 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[16]);
        refalrts::copy_stvar(vm, context[17], context[5]);
        refalrts::alloc_ident(vm, context[18], identifiers[ident_ACTu_EXTRN]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_Chr]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_DecodeCommands]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::update_number(context[8], 5UL);
        refalrts::reinit_close_call(context[15]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[16], context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[19] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[15];
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[21], context[24] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[16], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[11], context[12], context[9], context[10] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 2/8 s.1#1/11 s.2#1/12 s.3#1/13 s.4#1/14 e.Bytes#1/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::number_term( 2UL, context[8] ) )
        continue;
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
        continue;
      // closed e.Bytes#1 as range 9
      //DEBUG: s.Offset#1: 5
      //DEBUG: s.1#1: 11
      //DEBUG: s.2#1: 12
      //DEBUG: s.3#1: 13
      //DEBUG: s.4#1: 14
      //DEBUG: e.Bytes#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/15 s.Offset#1/5/16 # ACT1/17 </18 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.1#1/11 AsIs: s.2#1/12 AsIs: s.3#1/13 AsIs: s.4#1/14 } >/19 )/20 </21 & DecodeCommands/22 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 5/23 >/24 Tile{ AsIs: e.Bytes#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[15]);
      refalrts::copy_stvar(vm, context[16], context[5]);
      refalrts::alloc_ident(vm, context[17], identifiers[ident_ACT1]);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_DecodeCommands]);
      refalrts::alloc_number(vm, context[23], 5UL);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[19], context[22] );
      res = refalrts::splice_evar( res, context[8], context[14] );
      res = refalrts::splice_evar( res, context[15], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 3/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 3UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # BL/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_BL]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 4/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 4UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # BLR/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_BLR]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 5/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 5UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # BR/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_BR]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 6/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 6UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # CL/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_CL]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.new#6/5 s.new#7/8 s.new#8/11 e.new#9/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      // closed e.new#9 as range 9
      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 7/8 s.Char#1/11 e.Bytes#1/9 >/1
        if( ! refalrts::number_term( 7UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 9
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.Char#1: 11
        //DEBUG: e.Bytes#1: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/12 s.Offset#1/5/13 # SYM/14 s.Char#1/11/15 </16 & Chr/17 Tile{ AsIs: s.Char#1/11 } >/18 )/19 </20 & DecodeCommands/21 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 Reuse: 2/8 } >/22 Tile{ AsIs: e.Bytes#1/9 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[12]);
        refalrts::copy_stvar(vm, context[13], context[5]);
        refalrts::alloc_ident(vm, context[14], identifiers[ident_SYM]);
        refalrts::copy_stvar(vm, context[15], context[11]);
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[17], functions[efunc_Chr]);
        refalrts::alloc_close_call(vm, context[18]);
        refalrts::alloc_close_bracket(vm, context[19]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_DecodeCommands]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::update_number(context[8], 2UL);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[12], context[19] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[18], context[21] );
        res = refalrts::splice_evar( res, context[11], context[11] );
        res = refalrts::splice_evar( res, context[12], context[17] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DecodeCommands/4 s.Offset#1/5 8/8 s.Char#1/11 e.Bytes#1/9 >/1
      if( ! refalrts::number_term( 8UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 9
      //DEBUG: s.Offset#1: 5
      //DEBUG: s.Char#1: 11
      //DEBUG: e.Bytes#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/12 s.Offset#1/5/13 # SYMR/14 s.Char#1/11/15 </16 & Chr/17 Tile{ AsIs: s.Char#1/11 } >/18 )/19 </20 & DecodeCommands/21 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 Reuse: 2/8 } >/22 Tile{ AsIs: e.Bytes#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[12]);
      refalrts::copy_stvar(vm, context[13], context[5]);
      refalrts::alloc_ident(vm, context[14], identifiers[ident_SYMR]);
      refalrts::copy_stvar(vm, context[15], context[11]);
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[17], functions[efunc_Chr]);
      refalrts::alloc_close_call(vm, context[18]);
      refalrts::alloc_close_bracket(vm, context[19]);
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[21], functions[efunc_DecodeCommands]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::update_number(context[8], 2UL);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[12], context[19] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[18], context[21] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 10/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 10UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # EMP/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_EMP]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.new#6/5 s.new#7/8 s.new#8/11 s.new#9/12 s.new#10/13 s.new#11/14 e.new#12/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
        continue;
      // closed e.new#12 as range 9
      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 13/8 s.1#1/11 s.2#1/12 s.3#1/13 s.4#1/14 e.Bytes#1/9 >/1
        if( ! refalrts::number_term( 13UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 9
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.1#1: 11
        //DEBUG: s.2#1: 12
        //DEBUG: s.3#1: 13
        //DEBUG: s.4#1: 14
        //DEBUG: e.Bytes#1: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/15 s.Offset#1/5/16 # MULE/17 </18 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.1#1/11 AsIs: s.2#1/12 AsIs: s.3#1/13 AsIs: s.4#1/14 } >/19 )/20 </21 & DecodeCommands/22 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 5/23 >/24 Tile{ AsIs: e.Bytes#1/9 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[15]);
        refalrts::copy_stvar(vm, context[16], context[5]);
        refalrts::alloc_ident(vm, context[17], identifiers[ident_MULE]);
        refalrts::alloc_open_call(vm, context[18]);
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::alloc_close_bracket(vm, context[20]);
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_name(vm, context[22], functions[efunc_DecodeCommands]);
        refalrts::alloc_number(vm, context[23], 5UL);
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[15], context[20] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[18] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[19], context[22] );
        res = refalrts::splice_evar( res, context[8], context[14] );
        res = refalrts::splice_evar( res, context[15], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DecodeCommands/4 s.Offset#1/5 14/8 s.1#1/11 s.2#1/12 s.3#1/13 s.4#1/14 e.Bytes#1/9 >/1
      if( ! refalrts::number_term( 14UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 9
      //DEBUG: s.Offset#1: 5
      //DEBUG: s.1#1: 11
      //DEBUG: s.2#1: 12
      //DEBUG: s.3#1: 13
      //DEBUG: s.4#1: 14
      //DEBUG: e.Bytes#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/15 s.Offset#1/5/16 # MULS/17 </18 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.1#1/11 AsIs: s.2#1/12 AsIs: s.3#1/13 AsIs: s.4#1/14 } >/19 )/20 </21 & DecodeCommands/22 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 5/23 >/24 Tile{ AsIs: e.Bytes#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[15]);
      refalrts::copy_stvar(vm, context[16], context[5]);
      refalrts::alloc_ident(vm, context[17], identifiers[ident_MULS]);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_DecodeCommands]);
      refalrts::alloc_number(vm, context[23], 5UL);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[19], context[22] );
      res = refalrts::splice_evar( res, context[8], context[14] );
      res = refalrts::splice_evar( res, context[15], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 16/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 16UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # PLEN/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_PLEN]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 17/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 17UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # PLENS/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_PLENS]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 18/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 18UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # PLENP/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_PLENP]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 19/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 19UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # PS/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_PS]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 20/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 20UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # PSR/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_PSR]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.new#6/5 s.new#7/8 s.new#8/11 e.new#9/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      // closed e.new#9 as range 9
      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 23/8 s.No#1/11 e.Bytes#1/9 >/1
        if( ! refalrts::number_term( 23UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 9
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.No#1: 11
        //DEBUG: e.Bytes#1: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/12 s.Offset#1/5/13 # OEXP/14 Tile{ AsIs: s.No#1/11 } )/15 </16 & DecodeCommands/17 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 Reuse: 2/8 } >/18 Tile{ AsIs: e.Bytes#1/9 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[12]);
        refalrts::copy_stvar(vm, context[13], context[5]);
        refalrts::alloc_ident(vm, context[14], identifiers[ident_OEXP]);
        refalrts::alloc_close_bracket(vm, context[15]);
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[17], functions[efunc_DecodeCommands]);
        refalrts::alloc_close_call(vm, context[18]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::update_number(context[8], 2UL);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[12], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[15], context[17] );
        res = refalrts::splice_evar( res, context[11], context[11] );
        res = refalrts::splice_evar( res, context[12], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 24/8 s.No#1/11 e.Bytes#1/9 >/1
        if( ! refalrts::number_term( 24UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 9
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.No#1: 11
        //DEBUG: e.Bytes#1: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/12 s.Offset#1/5/13 # OEXPR/14 Tile{ AsIs: s.No#1/11 } )/15 </16 & DecodeCommands/17 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 Reuse: 2/8 } >/18 Tile{ AsIs: e.Bytes#1/9 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[12]);
        refalrts::copy_stvar(vm, context[13], context[5]);
        refalrts::alloc_ident(vm, context[14], identifiers[ident_OEXPR]);
        refalrts::alloc_close_bracket(vm, context[15]);
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[17], functions[efunc_DecodeCommands]);
        refalrts::alloc_close_call(vm, context[18]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::update_number(context[8], 2UL);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[12], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[15], context[17] );
        res = refalrts::splice_evar( res, context[11], context[11] );
        res = refalrts::splice_evar( res, context[12], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 25/8 s.No#1/11 e.Bytes#1/9 >/1
        if( ! refalrts::number_term( 25UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 9
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.No#1: 11
        //DEBUG: e.Bytes#1: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/12 s.Offset#1/5/13 # OVSYM/14 Tile{ AsIs: s.No#1/11 } )/15 </16 & DecodeCommands/17 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 Reuse: 2/8 } >/18 Tile{ AsIs: e.Bytes#1/9 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[12]);
        refalrts::copy_stvar(vm, context[13], context[5]);
        refalrts::alloc_ident(vm, context[14], identifiers[ident_OVSYM]);
        refalrts::alloc_close_bracket(vm, context[15]);
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[17], functions[efunc_DecodeCommands]);
        refalrts::alloc_close_call(vm, context[18]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::update_number(context[8], 2UL);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[12], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[15], context[17] );
        res = refalrts::splice_evar( res, context[11], context[11] );
        res = refalrts::splice_evar( res, context[12], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DecodeCommands/4 s.Offset#1/5 26/8 s.No#1/11 e.Bytes#1/9 >/1
      if( ! refalrts::number_term( 26UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 9
      //DEBUG: s.Offset#1: 5
      //DEBUG: s.No#1: 11
      //DEBUG: e.Bytes#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/12 s.Offset#1/5/13 # OVSYMR/14 Tile{ AsIs: s.No#1/11 } )/15 </16 & DecodeCommands/17 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 Reuse: 2/8 } >/18 Tile{ AsIs: e.Bytes#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[12]);
      refalrts::copy_stvar(vm, context[13], context[5]);
      refalrts::alloc_ident(vm, context[14], identifiers[ident_OVSYMR]);
      refalrts::alloc_close_bracket(vm, context[15]);
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[17], functions[efunc_DecodeCommands]);
      refalrts::alloc_close_call(vm, context[18]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::update_number(context[8], 2UL);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[12], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[15], context[17] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[12], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 27/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 27UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # TERM/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_TERM]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 28/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 28UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # TERMR/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_TERMR]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.new#6/5 s.new#7/8 s.new#8/11 e.new#9/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      // closed e.new#9 as range 9
      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 29/8 s.Number#1/11 e.Bytes#1/9 >/1
        if( ! refalrts::number_term( 29UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 9
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.Number#1: 11
        //DEBUG: e.Bytes#1: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/12 s.Offset#1/5/13 # RDY/14 Tile{ AsIs: s.Number#1/11 } )/15 </16 & DecodeCommands/17 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 Reuse: 2/8 } >/18 Tile{ AsIs: e.Bytes#1/9 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[12]);
        refalrts::copy_stvar(vm, context[13], context[5]);
        refalrts::alloc_ident(vm, context[14], identifiers[ident_RDY]);
        refalrts::alloc_close_bracket(vm, context[15]);
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[17], functions[efunc_DecodeCommands]);
        refalrts::alloc_close_call(vm, context[18]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::update_number(context[8], 2UL);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[12], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[15], context[17] );
        res = refalrts::splice_evar( res, context[11], context[11] );
        res = refalrts::splice_evar( res, context[12], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DecodeCommands/4 s.Offset#1/5 34/8 s.L1#1/11 s.L2#1/14 s.L3#1/15 s.L4#1/16 s.R1#1/17 s.R2#1/18 s.R3#1/19 s.R4#1/20 e.Bytes#1/12 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::number_term( 34UL, context[8] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[17], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[18], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[19], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[20], context[12], context[13] ) )
        continue;
      // closed e.Bytes#1 as range 12
      //DEBUG: s.Offset#1: 5
      //DEBUG: s.L1#1: 11
      //DEBUG: s.L2#1: 14
      //DEBUG: s.L3#1: 15
      //DEBUG: s.L4#1: 16
      //DEBUG: s.R1#1: 17
      //DEBUG: s.R2#1: 18
      //DEBUG: s.R3#1: 19
      //DEBUG: s.R4#1: 20
      //DEBUG: e.Bytes#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/21 s.Offset#1/5/22 # SETB/23 </24 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.L1#1/11 AsIs: s.L2#1/14 AsIs: s.L3#1/15 AsIs: s.L4#1/16 } >/25 </26 & MakeDWord/27 Tile{ AsIs: s.R1#1/17 AsIs: s.R2#1/18 AsIs: s.R3#1/19 AsIs: s.R4#1/20 } >/28 )/29 </30 & DecodeCommands/31 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 9/32 >/33 Tile{ AsIs: e.Bytes#1/12 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[21]);
      refalrts::copy_stvar(vm, context[22], context[5]);
      refalrts::alloc_ident(vm, context[23], identifiers[ident_SETB]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_MakeDWord]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_DecodeCommands]);
      refalrts::alloc_number(vm, context[32], 9UL);
      refalrts::alloc_close_call(vm, context[33]);
      refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[21], context[29] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[28], context[31] );
      res = refalrts::splice_evar( res, context[17], context[20] );
      res = refalrts::splice_evar( res, context[25], context[27] );
      res = refalrts::splice_evar( res, context[8], context[16] );
      res = refalrts::splice_evar( res, context[21], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 35/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 35UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # LEN/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_LEN]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 36/8 s.Char#1/11 e.Bytes#1/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::number_term( 36UL, context[8] ) )
        continue;
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      // closed e.Bytes#1 as range 9
      //DEBUG: s.Offset#1: 5
      //DEBUG: s.Char#1: 11
      //DEBUG: e.Bytes#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/12 s.Offset#1/5/13 # LENS/14 </15 & Chr/16 Tile{ AsIs: s.Char#1/11 } >/17 )/18 </19 & DecodeCommands/20 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 Reuse: 2/8 } >/21 Tile{ AsIs: e.Bytes#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[12]);
      refalrts::copy_stvar(vm, context[13], context[5]);
      refalrts::alloc_ident(vm, context[14], identifiers[ident_LENS]);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_Chr]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::alloc_close_bracket(vm, context[18]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_DecodeCommands]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::update_number(context[8], 2UL);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[12], context[18] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[17], context[20] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[12], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 37/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 37UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # LENP/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_LENP]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.new#6/5 s.new#7/8 s.new#8/11 e.new#9/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      // closed e.new#9 as range 9
      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 39/8 s.Count#1/11 e.Bytes#1/9 >/1
        if( ! refalrts::number_term( 39UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 9
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.Count#1: 11
        //DEBUG: e.Bytes#1: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & DecodeCommands$28=1/12 Tile{ AsIs: s.Offset#1/5 } s.Count#1/11/13 {*}/14 </15 Tile{ HalfReuse: & First/8 AsIs: s.Count#1/11 AsIs: e.Bytes#1/9 AsIs: >/1 } >/16 Tile{ ]] }
        refalrts::alloc_name(vm, context[12], functions[efunc_gen_DecodeCommands_S28A1]);
        refalrts::copy_stvar(vm, context[13], context[11]);
        refalrts::alloc_unwrapped_closure(vm, context[14], context[4]);
        refalrts::alloc_open_call(vm, context[15]);
        refalrts::alloc_close_call(vm, context[16]);
        refalrts::reinit_closure_head(context[4]);
        refalrts::reinit_name(context[8], functions[efunc_First]);
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[8], context[1] );
        res = refalrts::splice_evar( res, context[13], context[15] );
        res = refalrts::splice_evar( res, context[5], context[5] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        refalrts::use( res );
        refalrts::wrap_closure( context[14] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 40/8 s.Count#1/11 e.Bytes#1/9 >/1
        if( ! refalrts::number_term( 40UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 9
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.Count#1: 11
        //DEBUG: e.Bytes#1: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & DecodeCommands$29=1/12 Tile{ AsIs: s.Offset#1/5 } s.Count#1/11/13 {*}/14 </15 Tile{ HalfReuse: & First/8 AsIs: s.Count#1/11 AsIs: e.Bytes#1/9 AsIs: >/1 } >/16 Tile{ ]] }
        refalrts::alloc_name(vm, context[12], functions[efunc_gen_DecodeCommands_S29A1]);
        refalrts::copy_stvar(vm, context[13], context[11]);
        refalrts::alloc_unwrapped_closure(vm, context[14], context[4]);
        refalrts::alloc_open_call(vm, context[15]);
        refalrts::alloc_close_call(vm, context[16]);
        refalrts::reinit_closure_head(context[4]);
        refalrts::reinit_name(context[8], functions[efunc_First]);
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[8], context[1] );
        res = refalrts::splice_evar( res, context[13], context[15] );
        res = refalrts::splice_evar( res, context[5], context[5] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        refalrts::use( res );
        refalrts::wrap_closure( context[14] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 41/8 s.Count#1/11 e.Bytes#1/9 >/1
        if( ! refalrts::number_term( 41UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 9
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.Count#1: 11
        //DEBUG: e.Bytes#1: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & DecodeCommands$30=1/12 Tile{ AsIs: s.Offset#1/5 } s.Count#1/11/13 {*}/14 </15 Tile{ HalfReuse: & First/8 AsIs: s.Count#1/11 AsIs: e.Bytes#1/9 AsIs: >/1 } >/16 Tile{ ]] }
        refalrts::alloc_name(vm, context[12], functions[efunc_gen_DecodeCommands_S30A1]);
        refalrts::copy_stvar(vm, context[13], context[11]);
        refalrts::alloc_unwrapped_closure(vm, context[14], context[4]);
        refalrts::alloc_open_call(vm, context[15]);
        refalrts::alloc_close_call(vm, context[16]);
        refalrts::reinit_closure_head(context[4]);
        refalrts::reinit_name(context[8], functions[efunc_First]);
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[8], context[1] );
        res = refalrts::splice_evar( res, context[13], context[15] );
        res = refalrts::splice_evar( res, context[5], context[5] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        refalrts::use( res );
        refalrts::wrap_closure( context[14] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 43/8 s.Char#1/11 e.Bytes#1/9 >/1
        if( ! refalrts::number_term( 43UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 9
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.Char#1: 11
        //DEBUG: e.Bytes#1: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/12 s.Offset#1/5/13 # NS/14 s.Char#1/11/15 </16 & Chr/17 Tile{ AsIs: s.Char#1/11 } >/18 )/19 </20 & DecodeCommands/21 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 Reuse: 2/8 } >/22 Tile{ AsIs: e.Bytes#1/9 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[12]);
        refalrts::copy_stvar(vm, context[13], context[5]);
        refalrts::alloc_ident(vm, context[14], identifiers[ident_NS]);
        refalrts::copy_stvar(vm, context[15], context[11]);
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[17], functions[efunc_Chr]);
        refalrts::alloc_close_call(vm, context[18]);
        refalrts::alloc_close_bracket(vm, context[19]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_DecodeCommands]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::update_number(context[8], 2UL);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[12], context[19] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[18], context[21] );
        res = refalrts::splice_evar( res, context[11], context[11] );
        res = refalrts::splice_evar( res, context[12], context[17] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DecodeCommands/4 s.new#10/5 s.new#11/8 s.new#12/11 s.new#13/14 s.new#14/15 s.new#15/16 e.new#16/12 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
        continue;
      // closed e.new#16 as range 12
      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 45/8 s.1#1/11 s.2#1/14 s.3#1/15 s.4#1/16 e.Bytes#1/12 >/1
        if( ! refalrts::number_term( 45UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 12
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.1#1: 11
        //DEBUG: s.2#1: 14
        //DEBUG: s.3#1: 15
        //DEBUG: s.4#1: 16
        //DEBUG: e.Bytes#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/17 s.Offset#1/5/18 # TPLE/19 </20 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.1#1/11 AsIs: s.2#1/14 AsIs: s.3#1/15 AsIs: s.4#1/16 } >/21 )/22 </23 & DecodeCommands/24 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 5/25 >/26 Tile{ AsIs: e.Bytes#1/12 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[17]);
        refalrts::copy_stvar(vm, context[18], context[5]);
        refalrts::alloc_ident(vm, context[19], identifiers[ident_TPLE]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_DecodeCommands]);
        refalrts::alloc_number(vm, context[25], 5UL);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[17], context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[21], context[24] );
        res = refalrts::splice_evar( res, context[8], context[16] );
        res = refalrts::splice_evar( res, context[17], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 46/8 s.1#1/11 s.2#1/14 s.3#1/15 s.4#1/16 e.Bytes#1/12 >/1
        if( ! refalrts::number_term( 46UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 12
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.1#1: 11
        //DEBUG: s.2#1: 14
        //DEBUG: s.3#1: 15
        //DEBUG: s.4#1: 16
        //DEBUG: e.Bytes#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/17 s.Offset#1/5/18 # TPLS/19 </20 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.1#1/11 AsIs: s.2#1/14 AsIs: s.3#1/15 AsIs: s.4#1/16 } >/21 )/22 </23 & DecodeCommands/24 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 5/25 >/26 Tile{ AsIs: e.Bytes#1/12 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[17]);
        refalrts::copy_stvar(vm, context[18], context[5]);
        refalrts::alloc_ident(vm, context[19], identifiers[ident_TPLS]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_DecodeCommands]);
        refalrts::alloc_number(vm, context[25], 5UL);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[17], context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[21], context[24] );
        res = refalrts::splice_evar( res, context[8], context[16] );
        res = refalrts::splice_evar( res, context[17], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DecodeCommands/4 s.Offset#1/5 47/8 s.1#1/11 s.2#1/14 s.3#1/15 s.4#1/16 e.Bytes#1/12 >/1
      if( ! refalrts::number_term( 47UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 12
      //DEBUG: s.Offset#1: 5
      //DEBUG: s.1#1: 11
      //DEBUG: s.2#1: 14
      //DEBUG: s.3#1: 15
      //DEBUG: s.4#1: 16
      //DEBUG: e.Bytes#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/17 s.Offset#1/5/18 # TRAN/19 </20 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.1#1/11 AsIs: s.2#1/14 AsIs: s.3#1/15 AsIs: s.4#1/16 } >/21 )/22 </23 & DecodeCommands/24 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 5/25 >/26 Tile{ AsIs: e.Bytes#1/12 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[17]);
      refalrts::copy_stvar(vm, context[18], context[5]);
      refalrts::alloc_ident(vm, context[19], identifiers[ident_TRAN]);
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::alloc_close_bracket(vm, context[22]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_DecodeCommands]);
      refalrts::alloc_number(vm, context[25], 5UL);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[17], context[22] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[21], context[24] );
      res = refalrts::splice_evar( res, context[8], context[16] );
      res = refalrts::splice_evar( res, context[17], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 48/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 48UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # VSYM/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_VSYM]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 49/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 49UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # VSYMR/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_VSYMR]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 50/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 50UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # OUTEST/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_OUTEST]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 51/8 s.1#1/11 s.2#1/12 s.3#1/13 s.4#1/14 e.Bytes#1/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::number_term( 51UL, context[8] ) )
        continue;
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
        continue;
      // closed e.Bytes#1 as range 9
      //DEBUG: s.Offset#1: 5
      //DEBUG: s.1#1: 11
      //DEBUG: s.2#1: 12
      //DEBUG: s.3#1: 13
      //DEBUG: s.4#1: 14
      //DEBUG: e.Bytes#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/15 s.Offset#1/5/16 # ECOND/17 </18 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.1#1/11 AsIs: s.2#1/12 AsIs: s.3#1/13 AsIs: s.4#1/14 } >/19 )/20 </21 & DecodeCommands/22 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 5/23 >/24 Tile{ AsIs: e.Bytes#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[15]);
      refalrts::copy_stvar(vm, context[16], context[5]);
      refalrts::alloc_ident(vm, context[17], identifiers[ident_ECOND]);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_DecodeCommands]);
      refalrts::alloc_number(vm, context[23], 5UL);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[19], context[22] );
      res = refalrts::splice_evar( res, context[8], context[14] );
      res = refalrts::splice_evar( res, context[15], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 52/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 52UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # POPVF/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_POPVF]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 53/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 53UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # PUSHVF/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_PUSHVF]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.Offset#1/5 54/8 e.Bytes#1/6 >/1
      if( ! refalrts::number_term( 54UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 6
      //DEBUG: s.Offset#1: 5
      //DEBUG: e.Bytes#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/9 s.Offset#1/5/10 # STLEN/11 )/12 </13 & DecodeCommands/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Offset#1/5 HalfReuse: >/8 AsIs: e.Bytes#1/6 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[9]);
      refalrts::copy_stvar(vm, context[10], context[5]);
      refalrts::alloc_ident(vm, context[11], identifiers[ident_STLEN]);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_DecodeCommands]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DecodeCommands/4 s.new#6/5 s.new#7/8 s.new#8/11 e.new#9/9 >/1
    context[9] = context[6];
    context[10] = context[7];
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#9 as range 9
    do {
      // </0 & DecodeCommands/4 s.new#10/5 s.new#11/8 s.new#12/11 s.new#13/14 s.new#14/15 s.new#15/16 e.new#16/12 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
        continue;
      // closed e.new#16 as range 12
      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 55/8 s.1#1/11 s.2#1/14 s.3#1/15 s.4#1/16 e.Bytes#1/12 >/1
        if( ! refalrts::number_term( 55UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 12
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.1#1: 11
        //DEBUG: s.2#1: 14
        //DEBUG: s.3#1: 15
        //DEBUG: s.4#1: 16
        //DEBUG: e.Bytes#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/17 s.Offset#1/5/18 # CSYM/19 </20 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.1#1/11 AsIs: s.2#1/14 AsIs: s.3#1/15 AsIs: s.4#1/16 } >/21 )/22 </23 & DecodeCommands/24 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 5/25 >/26 Tile{ AsIs: e.Bytes#1/12 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[17]);
        refalrts::copy_stvar(vm, context[18], context[5]);
        refalrts::alloc_ident(vm, context[19], identifiers[ident_CSYM]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_DecodeCommands]);
        refalrts::alloc_number(vm, context[25], 5UL);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[17], context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[21], context[24] );
        res = refalrts::splice_evar( res, context[8], context[16] );
        res = refalrts::splice_evar( res, context[17], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 56/8 s.1#1/11 s.2#1/14 s.3#1/15 s.4#1/16 e.Bytes#1/12 >/1
        if( ! refalrts::number_term( 56UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 12
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.1#1: 11
        //DEBUG: s.2#1: 14
        //DEBUG: s.3#1: 15
        //DEBUG: s.4#1: 16
        //DEBUG: e.Bytes#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/17 s.Offset#1/5/18 # CSYMR/19 </20 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.1#1/11 AsIs: s.2#1/14 AsIs: s.3#1/15 AsIs: s.4#1/16 } >/21 )/22 </23 & DecodeCommands/24 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 5/25 >/26 Tile{ AsIs: e.Bytes#1/12 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[17]);
        refalrts::copy_stvar(vm, context[18], context[5]);
        refalrts::alloc_ident(vm, context[19], identifiers[ident_CSYMR]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_DecodeCommands]);
        refalrts::alloc_number(vm, context[25], 5UL);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[17], context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[21], context[24] );
        res = refalrts::splice_evar( res, context[8], context[16] );
        res = refalrts::splice_evar( res, context[17], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 57/8 s.1#1/11 s.2#1/14 s.3#1/15 s.4#1/16 e.Bytes#1/12 >/1
        if( ! refalrts::number_term( 57UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 12
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.1#1: 11
        //DEBUG: s.2#1: 14
        //DEBUG: s.3#1: 15
        //DEBUG: s.4#1: 16
        //DEBUG: e.Bytes#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/17 s.Offset#1/5/18 # NSYM/19 </20 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.1#1/11 AsIs: s.2#1/14 AsIs: s.3#1/15 AsIs: s.4#1/16 } >/21 )/22 </23 & DecodeCommands/24 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 5/25 >/26 Tile{ AsIs: e.Bytes#1/12 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[17]);
        refalrts::copy_stvar(vm, context[18], context[5]);
        refalrts::alloc_ident(vm, context[19], identifiers[ident_NSYM]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_DecodeCommands]);
        refalrts::alloc_number(vm, context[25], 5UL);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[17], context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[21], context[24] );
        res = refalrts::splice_evar( res, context[8], context[16] );
        res = refalrts::splice_evar( res, context[17], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 58/8 s.1#1/11 s.2#1/14 s.3#1/15 s.4#1/16 e.Bytes#1/12 >/1
        if( ! refalrts::number_term( 58UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 12
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.1#1: 11
        //DEBUG: s.2#1: 14
        //DEBUG: s.3#1: 15
        //DEBUG: s.4#1: 16
        //DEBUG: e.Bytes#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/17 s.Offset#1/5/18 # NSYMR/19 </20 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.1#1/11 AsIs: s.2#1/14 AsIs: s.3#1/15 AsIs: s.4#1/16 } >/21 )/22 </23 & DecodeCommands/24 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 5/25 >/26 Tile{ AsIs: e.Bytes#1/12 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[17]);
        refalrts::copy_stvar(vm, context[18], context[5]);
        refalrts::alloc_ident(vm, context[19], identifiers[ident_NSYMR]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_DecodeCommands]);
        refalrts::alloc_number(vm, context[25], 5UL);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[17], context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[21], context[24] );
        res = refalrts::splice_evar( res, context[8], context[16] );
        res = refalrts::splice_evar( res, context[17], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 59/8 s.1#1/11 s.2#1/14 s.3#1/15 s.4#1/16 e.Bytes#1/12 >/1
        if( ! refalrts::number_term( 59UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 12
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.1#1: 11
        //DEBUG: s.2#1: 14
        //DEBUG: s.3#1: 15
        //DEBUG: s.4#1: 16
        //DEBUG: e.Bytes#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/17 s.Offset#1/5/18 # NCS/19 </20 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.1#1/11 AsIs: s.2#1/14 AsIs: s.3#1/15 AsIs: s.4#1/16 } >/21 )/22 </23 & DecodeCommands/24 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 5/25 >/26 Tile{ AsIs: e.Bytes#1/12 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[17]);
        refalrts::copy_stvar(vm, context[18], context[5]);
        refalrts::alloc_ident(vm, context[19], identifiers[ident_NCS]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_DecodeCommands]);
        refalrts::alloc_number(vm, context[25], 5UL);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[17], context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[21], context[24] );
        res = refalrts::splice_evar( res, context[8], context[16] );
        res = refalrts::splice_evar( res, context[17], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 60/8 s.1#1/11 s.2#1/14 s.3#1/15 s.4#1/16 e.Bytes#1/12 >/1
        if( ! refalrts::number_term( 60UL, context[8] ) )
          continue;
        // closed e.Bytes#1 as range 12
        //DEBUG: s.Offset#1: 5
        //DEBUG: s.1#1: 11
        //DEBUG: s.2#1: 14
        //DEBUG: s.3#1: 15
        //DEBUG: s.4#1: 16
        //DEBUG: e.Bytes#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/17 s.Offset#1/5/18 # NNS/19 </20 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.1#1/11 AsIs: s.2#1/14 AsIs: s.3#1/15 AsIs: s.4#1/16 } >/21 )/22 </23 & DecodeCommands/24 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 5/25 >/26 Tile{ AsIs: e.Bytes#1/12 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[17]);
        refalrts::copy_stvar(vm, context[18], context[5]);
        refalrts::alloc_ident(vm, context[19], identifiers[ident_NNS]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_DecodeCommands]);
        refalrts::alloc_number(vm, context[25], 5UL);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[17], context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[21], context[24] );
        res = refalrts::splice_evar( res, context[8], context[16] );
        res = refalrts::splice_evar( res, context[17], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DecodeCommands/4 s.Offset#1/5 100/8 s.1#1/11 s.2#1/14 s.3#1/15 s.4#1/16 e.Bytes#1/12 >/1
      if( ! refalrts::number_term( 100UL, context[8] ) )
        continue;
      // closed e.Bytes#1 as range 12
      //DEBUG: s.Offset#1: 5
      //DEBUG: s.1#1: 11
      //DEBUG: s.2#1: 14
      //DEBUG: s.3#1: 15
      //DEBUG: s.4#1: 16
      //DEBUG: e.Bytes#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/17 s.Offset#1/5/18 # BUILT_IN/19 </20 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.1#1/11 AsIs: s.2#1/14 AsIs: s.3#1/15 AsIs: s.4#1/16 } >/21 )/22 </23 & DecodeCommands/24 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 5/25 >/26 Tile{ AsIs: e.Bytes#1/12 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[17]);
      refalrts::copy_stvar(vm, context[18], context[5]);
      refalrts::alloc_ident(vm, context[19], identifiers[ident_BUILTu_IN]);
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::alloc_close_bracket(vm, context[22]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_DecodeCommands]);
      refalrts::alloc_number(vm, context[25], 5UL);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[17], context[22] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[21], context[24] );
      res = refalrts::splice_evar( res, context[8], context[16] );
      res = refalrts::splice_evar( res, context[17], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DecodeCommands/4 s.new#10/5 s.new#11/8 0/11 e.new#12/9 >/1
      if( ! refalrts::number_term( 0UL, context[11] ) )
        continue;
      // closed e.new#12 as range 9
      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 102/8 0/11 e.Name#1/14 0/18 e.Bytes#1/16 >/1
        context[12] = context[9];
        context[13] = context[10];
        if( ! refalrts::number_term( 102UL, context[8] ) )
          continue;
        context[14] = 0;
        context[15] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[16] = context[12];
          context[17] = context[13];
          context[18] = refalrts::number_left( 0UL, context[16], context[17] );
          if( ! context[18] )
            continue;
          // closed e.Bytes#1 as range 16
          //DEBUG: s.Offset#1: 5
          //DEBUG: e.Name#1: 14
          //DEBUG: e.Bytes#1: 16

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/19 s.Offset#1/5/20 # L/21 </22 & Chr/23 Tile{ AsIs: e.Name#1/14 } >/24 )/25 </26 & DecodeCommands/27 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 HalfReuse: </8 HalfReuse: & Len/11 } 102/28 0/29 e.Name#1/14/30 >/32 Tile{ HalfReuse: >/18 AsIs: e.Bytes#1/16 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[19]);
          refalrts::copy_stvar(vm, context[20], context[5]);
          refalrts::alloc_ident(vm, context[21], identifiers[ident_L]);
          refalrts::alloc_open_call(vm, context[22]);
          refalrts::alloc_name(vm, context[23], functions[efunc_Chr]);
          refalrts::alloc_close_call(vm, context[24]);
          refalrts::alloc_close_bracket(vm, context[25]);
          refalrts::alloc_open_call(vm, context[26]);
          refalrts::alloc_name(vm, context[27], functions[efunc_DecodeCommands]);
          refalrts::alloc_number(vm, context[28], 102UL);
          refalrts::alloc_number(vm, context[29], 0UL);
          refalrts::copy_evar(vm, context[30], context[31], context[14], context[15]);
          refalrts::alloc_close_call(vm, context[32]);
          refalrts::update_name(context[4], functions[efunc_Add]);
          refalrts::reinit_open_call(context[8]);
          refalrts::reinit_name(context[11], functions[efunc_Len]);
          refalrts::reinit_close_call(context[18]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[18] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[8] );
          refalrts::link_brackets( context[19], context[25] );
          refalrts::push_stack( vm, context[24] );
          refalrts::push_stack( vm, context[22] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[18];
          res = refalrts::splice_evar( res, context[28], context[32] );
          res = refalrts::splice_evar( res, context[0], context[11] );
          res = refalrts::splice_evar( res, context[24], context[27] );
          res = refalrts::splice_evar( res, context[14], context[15] );
          res = refalrts::splice_evar( res, context[19], context[23] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[14], context[15], context[12], context[13] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DecodeCommands/4 s.Offset#1/5 103/8 0/11 e.Name#1/14 0/18 e.Bytes#1/16 >/1
        context[12] = context[9];
        context[13] = context[10];
        if( ! refalrts::number_term( 103UL, context[8] ) )
          continue;
        context[14] = 0;
        context[15] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[16] = context[12];
          context[17] = context[13];
          context[18] = refalrts::number_left( 0UL, context[16], context[17] );
          if( ! context[18] )
            continue;
          // closed e.Bytes#1 as range 16
          //DEBUG: s.Offset#1: 5
          //DEBUG: e.Name#1: 14
          //DEBUG: e.Bytes#1: 16

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/19 s.Offset#1/5/20 # E/21 </22 & Chr/23 Tile{ AsIs: e.Name#1/14 } >/24 )/25 </26 & DecodeCommands/27 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 HalfReuse: </8 HalfReuse: & Len/11 } 103/28 0/29 e.Name#1/14/30 >/32 Tile{ HalfReuse: >/18 AsIs: e.Bytes#1/16 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[19]);
          refalrts::copy_stvar(vm, context[20], context[5]);
          refalrts::alloc_ident(vm, context[21], identifiers[ident_E]);
          refalrts::alloc_open_call(vm, context[22]);
          refalrts::alloc_name(vm, context[23], functions[efunc_Chr]);
          refalrts::alloc_close_call(vm, context[24]);
          refalrts::alloc_close_bracket(vm, context[25]);
          refalrts::alloc_open_call(vm, context[26]);
          refalrts::alloc_name(vm, context[27], functions[efunc_DecodeCommands]);
          refalrts::alloc_number(vm, context[28], 103UL);
          refalrts::alloc_number(vm, context[29], 0UL);
          refalrts::copy_evar(vm, context[30], context[31], context[14], context[15]);
          refalrts::alloc_close_call(vm, context[32]);
          refalrts::update_name(context[4], functions[efunc_Add]);
          refalrts::reinit_open_call(context[8]);
          refalrts::reinit_name(context[11], functions[efunc_Len]);
          refalrts::reinit_close_call(context[18]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[18] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[8] );
          refalrts::link_brackets( context[19], context[25] );
          refalrts::push_stack( vm, context[24] );
          refalrts::push_stack( vm, context[22] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[18];
          res = refalrts::splice_evar( res, context[28], context[32] );
          res = refalrts::splice_evar( res, context[0], context[11] );
          res = refalrts::splice_evar( res, context[24], context[27] );
          res = refalrts::splice_evar( res, context[14], context[15] );
          res = refalrts::splice_evar( res, context[19], context[23] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[14], context[15], context[12], context[13] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DecodeCommands/4 s.Offset#1/5 104/8 0/11 e.Name#1/14 0/18 e.Bytes#1/16 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::number_term( 104UL, context[8] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[16] = context[12];
        context[17] = context[13];
        context[18] = refalrts::number_left( 0UL, context[16], context[17] );
        if( ! context[18] )
          continue;
        // closed e.Bytes#1 as range 16
        //DEBUG: s.Offset#1: 5
        //DEBUG: e.Name#1: 14
        //DEBUG: e.Bytes#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/19 s.Offset#1/5/20 # LABEL/21 </22 & Chr/23 Tile{ AsIs: e.Name#1/14 } >/24 )/25 </26 & DecodeCommands/27 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 HalfReuse: </8 HalfReuse: & Len/11 } 103/28 0/29 e.Name#1/14/30 >/32 Tile{ HalfReuse: >/18 AsIs: e.Bytes#1/16 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[19]);
        refalrts::copy_stvar(vm, context[20], context[5]);
        refalrts::alloc_ident(vm, context[21], identifiers[ident_LABEL]);
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::alloc_name(vm, context[23], functions[efunc_Chr]);
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::alloc_close_bracket(vm, context[25]);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_DecodeCommands]);
        refalrts::alloc_number(vm, context[28], 103UL);
        refalrts::alloc_number(vm, context[29], 0UL);
        refalrts::copy_evar(vm, context[30], context[31], context[14], context[15]);
        refalrts::alloc_close_call(vm, context[32]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::reinit_open_call(context[8]);
        refalrts::reinit_name(context[11], functions[efunc_Len]);
        refalrts::reinit_close_call(context[18]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[8] );
        refalrts::link_brackets( context[19], context[25] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[18];
        res = refalrts::splice_evar( res, context[28], context[32] );
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[24], context[27] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[19], context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[14], context[15], context[12], context[13] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DecodeCommands/4 s.Offset#1/5 105/8 s.L1#1/11 s.L2#1/14 s.L3#1/15 s.L4#1/16 s.R1#1/17 s.R2#1/18 s.R3#1/19 s.R4#1/20 e.Bytes#1/12 >/1
    context[12] = context[9];
    context[13] = context[10];
    if( ! refalrts::number_term( 105UL, context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[12], context[13] ) )
      continue;
    // closed e.Bytes#1 as range 12
    //DEBUG: s.Offset#1: 5
    //DEBUG: s.L1#1: 11
    //DEBUG: s.L2#1: 14
    //DEBUG: s.L3#1: 15
    //DEBUG: s.L4#1: 16
    //DEBUG: s.R1#1: 17
    //DEBUG: s.R2#1: 18
    //DEBUG: s.R3#1: 19
    //DEBUG: s.R4#1: 20
    //DEBUG: e.Bytes#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/21 s.Offset#1/5/22 # BUILT_IN1/23 </24 Tile{ HalfReuse: & MakeDWord/8 AsIs: s.L1#1/11 AsIs: s.L2#1/14 AsIs: s.L3#1/15 AsIs: s.L4#1/16 } >/25 </26 & MakeDWord/27 Tile{ AsIs: s.R1#1/17 AsIs: s.R2#1/18 AsIs: s.R3#1/19 AsIs: s.R4#1/20 } >/28 )/29 </30 & DecodeCommands/31 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Offset#1/5 } 9/32 >/33 Tile{ AsIs: e.Bytes#1/12 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::copy_stvar(vm, context[22], context[5]);
    refalrts::alloc_ident(vm, context[23], identifiers[ident_BUILTu_IN1]);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_MakeDWord]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_DecodeCommands]);
    refalrts::alloc_number(vm, context[32], 9UL);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::reinit_name(context[8], functions[efunc_MakeDWord]);
    refalrts::update_name(context[4], functions[efunc_Add]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[21], context[29] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[8], context[16] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DecodeCommands/4 s.Offset#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Offset#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DecodeCommands/4 s.Offset#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #5/1 ]] }
    refalrts::reinit_svar( context[1], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DecodeCommands/4 s.Offset#1/5 e.Bytes#1/2 >/1
  // closed e.Bytes#1 as range 2
  //DEBUG: s.Offset#1: 5
  //DEBUG: e.Bytes#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Offset#1/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Offset1 #5/4 } # RawBytes/6 Tile{ AsIs: e.Bytes#1/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[6], identifiers[ident_RawBytes]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_svar( context[4], context[5] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DecodeCommands("DecodeCommands", 982870901U, 3115847316U, func_DecodeCommands);


static refalrts::FnResult func_gen_Len_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Len=1/4 s.Len#2/5 e.String#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.String#2 as range 2
  //DEBUG: s.Len#2: 5
  //DEBUG: e.String#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Len=1/4 s.Len#2/5 e.String#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Len2 #5/1 ]] }
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Len_A1("Len=1", 982870901U, 3115847316U, func_gen_Len_A1);


static refalrts::FnResult func_Len(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Len/4 e.String#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Len=1/6 Tile{ AsIs: </0 Reuse: & Lenw/4 AsIs: e.String#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Len_A1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Lenw]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Len("Len", 982870901U, 3115847316U, func_Len);


static refalrts::FnResult func_DEBUG(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & DEBUG/4 e.Bytes#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Bytes#1 as range 2
  //DEBUG: e.Bytes#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Prout/6"all bytes\n"/7 e.Bytes#1/2/9 >/11 </12 & Prout/13 Tile{ AsIs: </0 Reuse: & Chr/4 AsIs: e.Bytes#1/2 AsIs: >/1 } >/14 </15 & Prout/16"all strings"/17 >/19 </20 & AllString/21 </22 & Chr/23 e.Bytes#1/2/24 >/26 >/27 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[7], context[8], "all bytes\n", 10);
  refalrts::copy_evar(vm, context[9], context[10], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Prout]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[17], context[18], "all strings", 11);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_AllString]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Chr]);
  refalrts::copy_evar(vm, context[24], context[25], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_Chr]);
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[27] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DEBUG("DEBUG", 982870901U, 3115847316U, func_DEBUG);


static refalrts::FnResult func_AllString(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & AllString/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & AllString/4 e.String#1/7 '\000'/11 e.Tail#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = refalrts::char_left( '\000', context[9], context[10] );
      if( ! context[11] )
        continue;
      // closed e.Tail#1 as range 9
      //DEBUG: e.String#1: 7
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 AsIs: e.String#1/7 HalfReuse: >/11 } </12 & Prout/13 </14 & Ord/15 e.String#1/7/16 >/18 0/19 >/20 </21 & AllString/22 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[12]);
      refalrts::alloc_name(vm, context[13], functions[efunc_Prout]);
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[15], functions[efunc_Ord]);
      refalrts::copy_evar(vm, context[16], context[17], context[7], context[8]);
      refalrts::alloc_close_call(vm, context[18]);
      refalrts::alloc_number(vm, context[19], 0UL);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_AllString]);
      refalrts::update_name(context[4], functions[efunc_Prout]);
      refalrts::reinit_close_call(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[12], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AllString/4 e.String#1/2 >/1
  // closed e.String#1 as range 2
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 AsIs: e.String#1/2 AsIs: >/1 } </5 & Prout/6 </7 & Ord/8 e.String#1/2/9 >/11 >/12 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Prout]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Ord]);
  refalrts::copy_evar(vm, context[9], context[10], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AllString("AllString", 982870901U, 3115847316U, func_AllString);


static refalrts::FnResult func_gen_DecompileFunction_S3A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & DecompileFunction$3=3/4 (/7 e.MaybeEntry#3/5 )/8 (/11 e.Name#1/9 )/12 e.Lines#4/2 >/1
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
  // closed e.MaybeEntry#3 as range 5
  // closed e.Name#1 as range 9
  // closed e.Lines#4 as range 2
  //DEBUG: e.MaybeEntry#3: 5
  //DEBUG: e.Name#1: 9
  //DEBUG: e.Lines#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.MaybeEntry#3/5 HalfReuse: </8 HalfReuse: & FormatWord/11 AsIs: e.Name#1/9 HalfReuse: >/12 } Tile{ HalfReuse: ' '/0 } '{'/13 )/14 Tile{ AsIs: e.Lines#4/2 } (/15 '}'/16 )/17 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_char(vm, context[13], '{');
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_char(vm, context[16], '}');
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_FormatWord]);
  refalrts::reinit_close_call(context[12]);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[15], context[17] );
  refalrts::link_brackets( context[7], context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecompileFunction_S3A3("DecompileFunction$3=3", 982870901U, 3115847316U, func_gen_DecompileFunction_S3A3);


static refalrts::FnResult func_gen_DecompileFunction_S3A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & DecompileFunction$3=2/4 (/7 e.Name#1/5 )/8 (/11 e.Segments#2/9 )/12 e.MaybeEntry#3/2 >/1
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
  // closed e.Name#1 as range 5
  // closed e.Segments#2 as range 9
  // closed e.MaybeEntry#3 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.Segments#2: 9
  //DEBUG: e.MaybeEntry#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } [*]/13 & DecompileFunction$3=3/14 Tile{ HalfReuse: (/12 } Tile{ AsIs: e.MaybeEntry#3/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 HalfReuse: {*}/11 } </15 & CollectSegments/16 Tile{ AsIs: e.Segments#2/9 } >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_DecompileFunction_S3A3]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_CollectSegments]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_unwrapped_closure(context[11], context[13]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[12], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[4], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecompileFunction_S3A2("DecompileFunction$3=2", 982870901U, 3115847316U, func_gen_DecompileFunction_S3A2);


static refalrts::FnResult func_gen_DecompileFunction_S3A2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & DecompileFunction$3=2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DecompileFunction$3=2:1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DecompileFunction$3=2:1/4 # L/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_L], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DecompileFunction$3=2:1/4 # L/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DecompileFunction$3=2:1/4 # E/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_E], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'E'/4 HalfReuse: 'N'/5 HalfReuse: 'T'/1 }"RY "/6 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "RY ", 3);
  refalrts::reinit_char(context[0], '$');
  refalrts::reinit_char(context[4], 'E');
  refalrts::reinit_char(context[5], 'N');
  refalrts::reinit_char(context[1], 'T');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecompileFunction_S3A2B1("DecompileFunction$3=2:1", 982870901U, 3115847316U, func_gen_DecompileFunction_S3A2B1);


static refalrts::FnResult func_gen_DecompileFunction_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DecompileFunction$3=1/4 (/7 e.Name#1/5 )/8 s.DeclCommand#1/9 e.Segments#2/2 >/1
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
  // closed e.Name#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Segments#2 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: s.DeclCommand#1: 9
  //DEBUG: e.Segments#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 Tile{ HalfReuse: [*]/0 Reuse: & DecompileFunction$3=2/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 } (/11 Tile{ AsIs: e.Segments#2/2 } )/12 {*}/13 </14 & DecompileFunction$3=2:1/15 Tile{ AsIs: s.DeclCommand#1/9 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[0]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_DecompileFunction_S3A2B1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DecompileFunction_S3A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DecompileFunction_S3A1("DecompileFunction$3=1", 982870901U, 3115847316U, func_gen_DecompileFunction_S3A1);


static refalrts::FnResult func_DecompileFunction(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & DecompileFunction/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DecompileFunction/4 (/7 t.new#1/9 e.new#2/5 )/8 >/1
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
  // closed e.new#2 as range 5
  do {
    // </0 & DecompileFunction/4 (/7 t.new#3/9 (/15 e.new#4/13 s.new#5/19 s.new#6/18 s.new#7/17 )/16 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_right( context[17], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_right( context[18], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_right( context[19], context[13], context[14] ) )
      continue;
    // closed e.new#4 as range 13
    do {
      // </0 & DecompileFunction/4 (/7 t.FuncName#1/9 (/15 s.Offset#1/19 # BUILT_IN/18 s.No#1/17 )/16 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_BUILTu_IN], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      //DEBUG: t.FuncName#1: 9
      //DEBUG: s.Offset#1: 19
      //DEBUG: s.No#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DecompileFunction/4 (/7 t.FuncName#1/9 (/15 s.Offset#1/19 # BUILT_IN/18 s.No#1/17 )/16 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DecompileFunction/4 (/7 t.FuncName#1/9 (/15 s.Offset#1/22 # BUILT_IN1/19 s.No1#1/18 s.No2#1/17 )/16 )/8 >/1
    context[20] = context[13];
    context[21] = context[14];
    if( ! refalrts::ident_term( identifiers[ident_BUILTu_IN1], context[19] ) )
      continue;
    if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    //DEBUG: t.FuncName#1: 9
    //DEBUG: s.No1#1: 18
    //DEBUG: s.No2#1: 17
    //DEBUG: s.Offset#1: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DecompileFunction/4 (/7 t.FuncName#1/9 (/15 s.Offset#1/22 # BUILT_IN1/19 s.No1#1/18 s.No2#1/17 )/16 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DecompileFunction/4 (/7 (/9 s.Offset#1/13 s.DeclCommand#1/14 e.Name#1/11 )/10 e.Commands#1/5 )/8 >/1
  context[11] = 0;
  context[12] = 0;
  if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#1 as range 5
  if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 11
  //DEBUG: e.Commands#1: 5
  //DEBUG: s.Offset#1: 13
  //DEBUG: s.DeclCommand#1: 14
  //DEBUG: e.Name#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Offset#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & DecompileFunction$3=1/7 AsIs: (/9 } Tile{ AsIs: e.Name#1/11 } )/15 Tile{ AsIs: s.DeclCommand#1/14 } {*}/16 </17 & Decompile-Pattern-Hole/18 0/19 3/20 (/21 1/22 )/23 (/24 2/25 )/26 (/27 Tile{ AsIs: )/10 AsIs: e.Commands#1/5 HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_unwrapped_closure(vm, context[16], context[4]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_Decompilem_Patternm_Hole]);
  refalrts::alloc_number(vm, context[19], 0UL);
  refalrts::alloc_number(vm, context[20], 3UL);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_number(vm, context[22], 1UL);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_number(vm, context[25], 2UL);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_DecompileFunction_S3A1]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[27], context[10] );
  refalrts::link_brackets( context[24], context[26] );
  refalrts::link_brackets( context[21], context[23] );
  refalrts::link_brackets( context[9], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[16], context[27] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, context[9], res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DecompileFunction("DecompileFunction", 982870901U, 3115847316U, func_DecompileFunction);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S7A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Decompile-Pattern-Hole$7=2/4 s.Level#1/5 s.Top#2/6 (/9 e.Pattern-L#1/7 )/10 (/13 e.Chars#1/11 )/14 (/17 e.Pattern-R#1/15 )/18 (/21 e.Vars#1/19 )/22 (/25 e.Commands#1/23 )/26 s.L#3/27 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.Pattern-L#1 as range 7
  // closed e.Chars#1 as range 11
  // closed e.Pattern-R#1 as range 15
  // closed e.Vars#1 as range 19
  // closed e.Commands#1 as range 23
  if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#2: 6
  //DEBUG: e.Pattern-L#1: 7
  //DEBUG: e.Chars#1: 11
  //DEBUG: e.Pattern-R#1: 15
  //DEBUG: e.Vars#1: 19
  //DEBUG: e.Commands#1: 23
  //DEBUG: s.L#3: 27

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.L#3/27 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 AsIs: s.Top#2/6 AsIs: (/9 AsIs: e.Pattern-L#1/7 HalfReuse: (/10 HalfReuse: # C/13 AsIs: e.Chars#1/11 AsIs: )/14 HalfReuse: s.L3 #27/17 } Tile{ AsIs: )/26 } Tile{ AsIs: (/25 } Tile{ AsIs: e.Pattern-R#1/15 } Tile{ AsIs: )/18 AsIs: (/21 AsIs: e.Vars#1/19 AsIs: )/22 } Tile{ AsIs: e.Commands#1/23 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_Hole]);
  refalrts::reinit_open_bracket(context[10]);
  refalrts::reinit_ident(context[13], identifiers[ident_C]);
  refalrts::reinit_svar( context[17], context[27] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[25], context[18] );
  refalrts::link_brackets( context[9], context[26] );
  refalrts::link_brackets( context[10], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  refalrts::splice_to_freelist_open( vm, context[17], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S7A2("Decompile-Pattern-Hole$7=2", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S7A2);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S7A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & Decompile-Pattern-Hole$7=1/4 s.Level#1/5 (/8 e.Pattern-L#1/6 )/9 (/12 e.Chars#1/10 )/13 (/16 e.Pattern-R#1/14 )/17 (/20 e.Vars#1/18 )/21 (/24 e.Commands#1/22 )/25 s.Top#2/26 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.Pattern-L#1 as range 6
  // closed e.Chars#1 as range 10
  // closed e.Pattern-R#1 as range 14
  // closed e.Vars#1 as range 18
  // closed e.Commands#1 as range 22
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Level#1: 5
  //DEBUG: e.Pattern-L#1: 6
  //DEBUG: e.Chars#1: 10
  //DEBUG: e.Pattern-R#1: 14
  //DEBUG: e.Vars#1: 18
  //DEBUG: e.Commands#1: 22
  //DEBUG: s.Top#2: 26

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Decompile-Pattern-Hole$7=2/27 Tile{ AsIs: s.Level#1/5 } Tile{ AsIs: s.Top#2/26 } Tile{ AsIs: (/8 AsIs: e.Pattern-L#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Chars#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Pattern-R#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Vars#1/18 AsIs: )/21 AsIs: (/24 AsIs: e.Commands#1/22 AsIs: )/25 } {*}/28 </29 & Sub/30 s.Top#2/26/31 1/32 >/33 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[27], functions[efunc_gen_Decompilem_Patternm_Hole_S7A2]);
  refalrts::alloc_unwrapped_closure(vm, context[28], context[4]);
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_name(vm, context[30], functions[efunc_Sub]);
  refalrts::copy_stvar(vm, context[31], context[26]);
  refalrts::alloc_number(vm, context[32], 1UL);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[33] );
  res = refalrts::splice_evar( res, context[8], context[25] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  refalrts::use( res );
  refalrts::wrap_closure( context[28] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S7A1("Decompile-Pattern-Hole$7=1", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S7A1);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S8A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Decompile-Pattern-Hole$8=2/4 s.Level#1/5 s.Top#2/6 (/9 e.Pattern-L#1/7 )/10 (/13 e.Chars#1/11 )/14 (/17 e.Pattern-R#1/15 )/18 (/21 e.Vars#1/19 )/22 (/25 e.Commands#1/23 )/26 s.R#3/27 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.Pattern-L#1 as range 7
  // closed e.Chars#1 as range 11
  // closed e.Pattern-R#1 as range 15
  // closed e.Vars#1 as range 19
  // closed e.Commands#1 as range 23
  if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#2: 6
  //DEBUG: e.Pattern-L#1: 7
  //DEBUG: e.Chars#1: 11
  //DEBUG: e.Pattern-R#1: 15
  //DEBUG: e.Vars#1: 19
  //DEBUG: e.Commands#1: 23
  //DEBUG: s.R#3: 27

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 AsIs: s.Top#2/6 AsIs: (/9 AsIs: e.Pattern-L#1/7 AsIs: )/10 AsIs: (/13 } Tile{ AsIs: s.R#3/27 } Tile{ AsIs: (/25 } Tile{ HalfReuse: # C/26 } </28 & Rev/29 Tile{ AsIs: e.Chars#1/11 } Tile{ HalfReuse: >/14 HalfReuse: )/17 AsIs: e.Pattern-R#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.Vars#1/19 AsIs: )/22 } Tile{ AsIs: e.Commands#1/23 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_Rev]);
  refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_Hole]);
  refalrts::reinit_ident(context[26], identifiers[ident_C]);
  refalrts::reinit_close_call(context[14]);
  refalrts::reinit_close_bracket(context[17]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[13], context[18] );
  refalrts::link_brackets( context[25], context[17] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[14], context[22] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S8A2("Decompile-Pattern-Hole$8=2", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S8A2);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S8A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & Decompile-Pattern-Hole$8=1/4 s.Level#1/5 (/8 e.Pattern-L#1/6 )/9 (/12 e.Chars#1/10 )/13 (/16 e.Pattern-R#1/14 )/17 (/20 e.Vars#1/18 )/21 (/24 e.Commands#1/22 )/25 s.Top#2/26 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.Pattern-L#1 as range 6
  // closed e.Chars#1 as range 10
  // closed e.Pattern-R#1 as range 14
  // closed e.Vars#1 as range 18
  // closed e.Commands#1 as range 22
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Level#1: 5
  //DEBUG: e.Pattern-L#1: 6
  //DEBUG: e.Chars#1: 10
  //DEBUG: e.Pattern-R#1: 14
  //DEBUG: e.Vars#1: 18
  //DEBUG: e.Commands#1: 22
  //DEBUG: s.Top#2: 26

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Decompile-Pattern-Hole$8=2/27 Tile{ AsIs: s.Level#1/5 } Tile{ AsIs: s.Top#2/26 } Tile{ AsIs: (/8 AsIs: e.Pattern-L#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Chars#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Pattern-R#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Vars#1/18 AsIs: )/21 AsIs: (/24 AsIs: e.Commands#1/22 AsIs: )/25 } {*}/28 </29 & Sub/30 s.Top#2/26/31 1/32 >/33 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[27], functions[efunc_gen_Decompilem_Patternm_Hole_S8A2]);
  refalrts::alloc_unwrapped_closure(vm, context[28], context[4]);
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_name(vm, context[30], functions[efunc_Sub]);
  refalrts::copy_stvar(vm, context[31], context[26]);
  refalrts::alloc_number(vm, context[32], 1UL);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[33] );
  res = refalrts::splice_evar( res, context[8], context[25] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  refalrts::use( res );
  refalrts::wrap_closure( context[28] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S8A1("Decompile-Pattern-Hole$8=1", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S8A1);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S11A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & Decompile-Pattern-Hole$11=1/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/21 e.Commands#1/19 )/22 s.VL#2/23 s.VR#2/24 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Pattern-L#1 as range 7
  // closed e.Pattern-R#1 as range 11
  // closed e.Vars#1 as range 15
  // closed e.Commands#1 as range 19
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#1: 6
  //DEBUG: e.Pattern-L#1: 7
  //DEBUG: e.Pattern-R#1: 11
  //DEBUG: e.Vars#1: 15
  //DEBUG: e.Commands#1: 19
  //DEBUG: s.VL#2: 23
  //DEBUG: s.VR#2: 24

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </25 & Add/26 Tile{ AsIs: s.Top#1/6 HalfReuse: 2/9 } >/27 (/28 Tile{ AsIs: e.Pattern-L#1/7 } (/29 Tile{ HalfReuse: # t/22 AsIs: s.VL#2/23 AsIs: s.VR#2/24 HalfReuse: '='/1 } s.VL#2/23/30 s.VR#2/24/31 )/32 s.VR#2/24/33 Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 HalfReuse: (/18 HalfReuse: # t/21 } s.VL#2/23/34 s.VR#2/24/35 '='/36 s.VL#2/23/37 s.VR#2/24/38 )/39 )/40 Tile{ AsIs: e.Commands#1/19 } >/41 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_Add]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::copy_stvar(vm, context[30], context[23]);
  refalrts::copy_stvar(vm, context[31], context[24]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::copy_stvar(vm, context[33], context[24]);
  refalrts::copy_stvar(vm, context[34], context[23]);
  refalrts::copy_stvar(vm, context[35], context[24]);
  refalrts::alloc_char(vm, context[36], '=');
  refalrts::copy_stvar(vm, context[37], context[23]);
  refalrts::copy_stvar(vm, context[38], context[24]);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_Hole]);
  refalrts::reinit_number(context[9], 2UL);
  refalrts::reinit_ident(context[22], identifiers[ident_t]);
  refalrts::reinit_char(context[1], '=');
  refalrts::reinit_open_bracket(context[18]);
  refalrts::reinit_ident(context[21], identifiers[ident_t]);
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[40] );
  refalrts::link_brackets( context[18], context[39] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[28], context[10] );
  refalrts::link_brackets( context[29], context[32] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[41], context[41] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[34], context[40] );
  res = refalrts::splice_evar( res, context[10], context[21] );
  res = refalrts::splice_evar( res, context[30], context[33] );
  res = refalrts::splice_evar( res, context[22], context[1] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S11A1("Decompile-Pattern-Hole$11=1", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S11A1);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S12A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & Decompile-Pattern-Hole$12=1/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/21 e.Commands#1/19 )/22 s.VL#2/23 s.VR#2/24 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Pattern-L#1 as range 7
  // closed e.Pattern-R#1 as range 11
  // closed e.Vars#1 as range 15
  // closed e.Commands#1 as range 19
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#1: 6
  //DEBUG: e.Pattern-L#1: 7
  //DEBUG: e.Pattern-R#1: 11
  //DEBUG: e.Vars#1: 15
  //DEBUG: e.Commands#1: 19
  //DEBUG: s.VL#2: 23
  //DEBUG: s.VR#2: 24

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </25 & Add/26 Tile{ AsIs: s.Top#1/6 HalfReuse: 2/9 } >/27 (/28 Tile{ AsIs: e.Pattern-L#1/7 } )/29 (/30 s.VL#2/23/31 (/32 Tile{ HalfReuse: # t/22 AsIs: s.VL#2/23 AsIs: s.VR#2/24 HalfReuse: '='/1 } s.VL#2/23/33 Tile{ HalfReuse: s.VR2 #24/10 HalfReuse: )/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 HalfReuse: (/18 HalfReuse: # t/21 } s.VL#2/23/34 s.VR#2/24/35 '='/36 s.VL#2/23/37 s.VR#2/24/38 )/39 )/40 Tile{ AsIs: e.Commands#1/19 } >/41 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_Add]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::copy_stvar(vm, context[31], context[23]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::copy_stvar(vm, context[33], context[23]);
  refalrts::copy_stvar(vm, context[34], context[23]);
  refalrts::copy_stvar(vm, context[35], context[24]);
  refalrts::alloc_char(vm, context[36], '=');
  refalrts::copy_stvar(vm, context[37], context[23]);
  refalrts::copy_stvar(vm, context[38], context[24]);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_Hole]);
  refalrts::reinit_number(context[9], 2UL);
  refalrts::reinit_ident(context[22], identifiers[ident_t]);
  refalrts::reinit_char(context[1], '=');
  refalrts::reinit_svar( context[10], context[24] );
  refalrts::reinit_close_bracket(context[13]);
  refalrts::reinit_open_bracket(context[18]);
  refalrts::reinit_ident(context[21], identifiers[ident_t]);
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[40] );
  refalrts::link_brackets( context[18], context[39] );
  refalrts::link_brackets( context[30], context[14] );
  refalrts::link_brackets( context[32], context[13] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[41], context[41] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[34], context[40] );
  res = refalrts::splice_evar( res, context[10], context[21] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[22], context[1] );
  res = refalrts::splice_evar( res, context[29], context[32] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S12A1("Decompile-Pattern-Hole$12=1", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S12A1);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S18A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & Decompile-Pattern-Hole$18=1/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/21 e.Commands#1/19 )/22 s.VL#2/23 s.VR#2/24 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Pattern-L#1 as range 7
  // closed e.Pattern-R#1 as range 11
  // closed e.Vars#1 as range 15
  // closed e.Commands#1 as range 19
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#1: 6
  //DEBUG: e.Pattern-L#1: 7
  //DEBUG: e.Pattern-R#1: 11
  //DEBUG: e.Vars#1: 15
  //DEBUG: e.Commands#1: 19
  //DEBUG: s.VL#2: 23
  //DEBUG: s.VR#2: 24

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-NoHole/4 AsIs: s.Level#1/5 } </25 & Add/26 Tile{ AsIs: s.Top#1/6 HalfReuse: 2/9 } >/27 (/28 Tile{ AsIs: e.Pattern-L#1/7 } (/29 Tile{ HalfReuse: # e/22 AsIs: s.VL#2/23 AsIs: s.VR#2/24 HalfReuse: '='/1 } s.VL#2/23/30 Tile{ HalfReuse: s.VR2 #24/10 HalfReuse: )/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 HalfReuse: (/18 HalfReuse: # e/21 } s.VL#2/23/31 s.VR#2/24/32 '='/33 s.VL#2/23/34 s.VR#2/24/35 )/36 )/37 Tile{ AsIs: e.Commands#1/19 } >/38 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_Add]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::copy_stvar(vm, context[30], context[23]);
  refalrts::copy_stvar(vm, context[31], context[23]);
  refalrts::copy_stvar(vm, context[32], context[24]);
  refalrts::alloc_char(vm, context[33], '=');
  refalrts::copy_stvar(vm, context[34], context[23]);
  refalrts::copy_stvar(vm, context[35], context[24]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_NoHole]);
  refalrts::reinit_number(context[9], 2UL);
  refalrts::reinit_ident(context[22], identifiers[ident_e]);
  refalrts::reinit_char(context[1], '=');
  refalrts::reinit_svar( context[10], context[24] );
  refalrts::reinit_close_bracket(context[13]);
  refalrts::reinit_open_bracket(context[18]);
  refalrts::reinit_ident(context[21], identifiers[ident_e]);
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[37] );
  refalrts::link_brackets( context[18], context[36] );
  refalrts::link_brackets( context[28], context[14] );
  refalrts::link_brackets( context[29], context[13] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[31], context[37] );
  res = refalrts::splice_evar( res, context[10], context[21] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[22], context[1] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S18A1("Decompile-Pattern-Hole$18=1", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S18A1);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S19A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & Decompile-Pattern-Hole$19=2/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 s.Type#2/11 s.IdL#2/12 s.IdR#1/13 (/16 e.Pattern-R#1/14 )/17 (/20 e.Vars#1/18 )/21 (/24 e.Commands#1/22 )/25 s.VL#3/26 s.VR#3/27 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Pattern-L#1 as range 7
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.Pattern-R#1 as range 14
  // closed e.Vars#1 as range 18
  // closed e.Commands#1 as range 22
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#1: 6
  //DEBUG: e.Pattern-L#1: 7
  //DEBUG: s.Type#2: 11
  //DEBUG: s.IdL#2: 12
  //DEBUG: s.IdR#1: 13
  //DEBUG: e.Pattern-R#1: 14
  //DEBUG: e.Vars#1: 18
  //DEBUG: e.Commands#1: 22
  //DEBUG: s.VL#3: 26
  //DEBUG: s.VR#3: 27

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </28 & Add/29 Tile{ AsIs: s.Top#1/6 } 2/30 >/31 Tile{ AsIs: (/9 AsIs: e.Pattern-L#1/7 HalfReuse: (/10 AsIs: s.Type#2/11 AsIs: s.IdL#2/12 AsIs: s.IdR#1/13 HalfReuse: '='/16 } s.VL#3/26/32 s.VR#3/27/33 )/34 s.VR#3/27/35 )/36 (/37 Tile{ AsIs: e.Pattern-R#1/14 } Tile{ AsIs: )/17 AsIs: (/20 AsIs: e.Vars#1/18 HalfReuse: (/21 HalfReuse: s.Type2 #11/24 } s.IdL#2/12/38 s.IdR#1/13/39 Tile{ HalfReuse: '='/25 AsIs: s.VL#3/26 AsIs: s.VR#3/27 HalfReuse: )/1 } )/40 Tile{ AsIs: e.Commands#1/22 } >/41 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[30], 2UL);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::copy_stvar(vm, context[32], context[26]);
  refalrts::copy_stvar(vm, context[33], context[27]);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::copy_stvar(vm, context[35], context[27]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::copy_stvar(vm, context[38], context[12]);
  refalrts::copy_stvar(vm, context[39], context[13]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_Hole]);
  refalrts::reinit_open_bracket(context[10]);
  refalrts::reinit_char(context[16], '=');
  refalrts::reinit_open_bracket(context[21]);
  refalrts::reinit_svar( context[24], context[11] );
  refalrts::reinit_char(context[25], '=');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[20], context[40] );
  refalrts::link_brackets( context[21], context[1] );
  refalrts::link_brackets( context[37], context[17] );
  refalrts::link_brackets( context[9], context[36] );
  refalrts::link_brackets( context[10], context[34] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[28] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[41], context[41] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[40], context[40] );
  res = refalrts::splice_evar( res, context[25], context[1] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[17], context[24] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[32], context[37] );
  res = refalrts::splice_evar( res, context[9], context[16] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S19A2("Decompile-Pattern-Hole$19=2", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S19A2);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S19A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & Decompile-Pattern-Hole$19=1/4 s.IdR#1/5 s.Level#1/6 s.Top#1/7 (/10 e.Pattern-L#1/8 )/11 (/14 e.Pattern-R#1/12 )/15 (/18 e.Vars#1/16 )/19 (/22 e.Commands#1/20 )/23 e.Vars-B#2/24 (/30 s.Type#2/32 s.IdL#2/33 s.IdR#1/34 '='/35 s.VarNoL#2/36 s.VarNoR#2/37 )/31 e.Vars-E#2/26 >/1
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
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.Pattern-L#1 as range 8
  // closed e.Pattern-R#1 as range 12
  // closed e.Vars#1 as range 16
  // closed e.Commands#1 as range 20
  context[24] = 0;
  context[25] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[26] = context[2];
    context[27] = context[3];
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.Vars-E#2 as range 26
    if( ! refalrts::svar_left( context[32], context[28], context[29] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[28], context[29] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( vm, context[34], context[5], context[28], context[29] ) )
      continue;
    context[35] = refalrts::char_left( '=', context[28], context[29] );
    if( ! context[35] )
      continue;
    if( ! refalrts::svar_left( context[36], context[28], context[29] ) )
      continue;
    if( ! refalrts::svar_left( context[37], context[28], context[29] ) )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    //DEBUG: s.IdR#1: 5
    //DEBUG: s.Level#1: 6
    //DEBUG: s.Top#1: 7
    //DEBUG: e.Pattern-L#1: 8
    //DEBUG: e.Pattern-R#1: 12
    //DEBUG: e.Vars#1: 16
    //DEBUG: e.Commands#1: 20
    //DEBUG: e.Vars-B#2: 24
    //DEBUG: e.Vars-E#2: 26
    //DEBUG: s.Type#2: 32
    //DEBUG: s.IdL#2: 33
    //DEBUG: s.VarNoL#2: 36
    //DEBUG: s.VarNoR#2: 37

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.IdR#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Vars-B#2/24 {REMOVED TILE} s.IdR#1/34 {REMOVED TILE} s.VarNoL#2/36 s.VarNoR#2/37 {REMOVED TILE} e.Vars-E#2/26 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Decompile-Pattern-Hole$19=2/38 Tile{ AsIs: s.Level#1/6 AsIs: s.Top#1/7 AsIs: (/10 } Tile{ AsIs: e.Pattern-L#1/8 } Tile{ HalfReuse: )/30 AsIs: s.Type#2/32 AsIs: s.IdL#2/33 } Tile{ HalfReuse: s.IdR1 #34/11 AsIs: (/14 AsIs: e.Pattern-R#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.Vars#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Commands#1/20 AsIs: )/23 } Tile{ HalfReuse: {*}/31 } Tile{ HalfReuse: s.Top1 #7/35 } </39 & Add/40 s.Top#1/7/41 1/42 >/43 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[38], functions[efunc_gen_Decompilem_Patternm_Hole_S19A2]);
    refalrts::alloc_open_call(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_Add]);
    refalrts::copy_stvar(vm, context[41], context[7]);
    refalrts::alloc_number(vm, context[42], 1UL);
    refalrts::alloc_close_call(vm, context[43]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_close_bracket(context[30]);
    refalrts::reinit_svar( context[11], context[34] );
    refalrts::reinit_unwrapped_closure(context[31], context[4]);
    refalrts::reinit_svar( context[35], context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[39] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[10], context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[39], context[43] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[11], context[23] );
    res = refalrts::splice_evar( res, context[30], context[33] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[6], context[10] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    refalrts::wrap_closure( context[31] );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[24], context[25], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S19A1("Decompile-Pattern-Hole$19=1", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S19A1);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S20A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & Decompile-Pattern-Hole$20=2/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 s.Type#2/11 s.IdL#2/12 s.IdR#1/13 (/16 e.Pattern-R#1/14 )/17 (/20 e.Vars#1/18 )/21 (/24 e.Commands#1/22 )/25 s.VL#3/26 s.VR#3/27 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Pattern-L#1 as range 7
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.Pattern-R#1 as range 14
  // closed e.Vars#1 as range 18
  // closed e.Commands#1 as range 22
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#1: 6
  //DEBUG: e.Pattern-L#1: 7
  //DEBUG: s.Type#2: 11
  //DEBUG: s.IdL#2: 12
  //DEBUG: s.IdR#1: 13
  //DEBUG: e.Pattern-R#1: 14
  //DEBUG: e.Vars#1: 18
  //DEBUG: e.Commands#1: 22
  //DEBUG: s.VL#3: 26
  //DEBUG: s.VR#3: 27

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </28 & Add/29 Tile{ AsIs: s.Top#1/6 HalfReuse: 2/9 } >/30 (/31 Tile{ AsIs: e.Pattern-L#1/7 } )/32 (/33 s.VL#3/26/34 Tile{ HalfReuse: (/10 AsIs: s.Type#2/11 AsIs: s.IdL#2/12 AsIs: s.IdR#1/13 } '='/35 s.VL#3/26/36 s.VR#3/27/37 Tile{ HalfReuse: )/16 AsIs: e.Pattern-R#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Vars#1/18 HalfReuse: (/21 HalfReuse: s.Type2 #11/24 } s.IdL#2/12/38 s.IdR#1/13/39 Tile{ HalfReuse: '='/25 AsIs: s.VL#3/26 AsIs: s.VR#3/27 HalfReuse: )/1 } )/40 Tile{ AsIs: e.Commands#1/22 } >/41 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_Add]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::copy_stvar(vm, context[34], context[26]);
  refalrts::alloc_char(vm, context[35], '=');
  refalrts::copy_stvar(vm, context[36], context[26]);
  refalrts::copy_stvar(vm, context[37], context[27]);
  refalrts::copy_stvar(vm, context[38], context[12]);
  refalrts::copy_stvar(vm, context[39], context[13]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_Hole]);
  refalrts::reinit_number(context[9], 2UL);
  refalrts::reinit_open_bracket(context[10]);
  refalrts::reinit_close_bracket(context[16]);
  refalrts::reinit_open_bracket(context[21]);
  refalrts::reinit_svar( context[24], context[11] );
  refalrts::reinit_char(context[25], '=');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[20], context[40] );
  refalrts::link_brackets( context[21], context[1] );
  refalrts::link_brackets( context[33], context[17] );
  refalrts::link_brackets( context[10], context[16] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[28] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[41], context[41] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[40], context[40] );
  res = refalrts::splice_evar( res, context[25], context[1] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[16], context[24] );
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[32], context[34] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S20A2("Decompile-Pattern-Hole$20=2", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S20A2);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S20A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & Decompile-Pattern-Hole$20=1/4 s.IdR#1/5 s.Level#1/6 s.Top#1/7 (/10 e.Pattern-L#1/8 )/11 (/14 e.Pattern-R#1/12 )/15 (/18 e.Vars#1/16 )/19 (/22 e.Commands#1/20 )/23 e.Vars-B#2/24 (/30 s.Type#2/32 s.IdL#2/33 s.IdR#1/34 '='/35 s.VarNoL#2/36 s.VarNoR#2/37 )/31 e.Vars-E#2/26 >/1
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
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.Pattern-L#1 as range 8
  // closed e.Pattern-R#1 as range 12
  // closed e.Vars#1 as range 16
  // closed e.Commands#1 as range 20
  context[24] = 0;
  context[25] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[26] = context[2];
    context[27] = context[3];
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.Vars-E#2 as range 26
    if( ! refalrts::svar_left( context[32], context[28], context[29] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[28], context[29] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( vm, context[34], context[5], context[28], context[29] ) )
      continue;
    context[35] = refalrts::char_left( '=', context[28], context[29] );
    if( ! context[35] )
      continue;
    if( ! refalrts::svar_left( context[36], context[28], context[29] ) )
      continue;
    if( ! refalrts::svar_left( context[37], context[28], context[29] ) )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    //DEBUG: s.IdR#1: 5
    //DEBUG: s.Level#1: 6
    //DEBUG: s.Top#1: 7
    //DEBUG: e.Pattern-L#1: 8
    //DEBUG: e.Pattern-R#1: 12
    //DEBUG: e.Vars#1: 16
    //DEBUG: e.Commands#1: 20
    //DEBUG: e.Vars-B#2: 24
    //DEBUG: e.Vars-E#2: 26
    //DEBUG: s.Type#2: 32
    //DEBUG: s.IdL#2: 33
    //DEBUG: s.VarNoL#2: 36
    //DEBUG: s.VarNoR#2: 37

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.IdR#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Vars-B#2/24 {REMOVED TILE} s.IdR#1/34 {REMOVED TILE} s.VarNoL#2/36 s.VarNoR#2/37 {REMOVED TILE} e.Vars-E#2/26 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Decompile-Pattern-Hole$20=2/38 Tile{ AsIs: s.Level#1/6 AsIs: s.Top#1/7 AsIs: (/10 } Tile{ AsIs: e.Pattern-L#1/8 } Tile{ HalfReuse: )/30 AsIs: s.Type#2/32 AsIs: s.IdL#2/33 } Tile{ HalfReuse: s.IdR1 #34/11 AsIs: (/14 AsIs: e.Pattern-R#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.Vars#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Commands#1/20 AsIs: )/23 } Tile{ HalfReuse: {*}/31 } Tile{ HalfReuse: s.Top1 #7/35 } </39 & Add/40 s.Top#1/7/41 1/42 >/43 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[38], functions[efunc_gen_Decompilem_Patternm_Hole_S20A2]);
    refalrts::alloc_open_call(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_Add]);
    refalrts::copy_stvar(vm, context[41], context[7]);
    refalrts::alloc_number(vm, context[42], 1UL);
    refalrts::alloc_close_call(vm, context[43]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_close_bracket(context[30]);
    refalrts::reinit_svar( context[11], context[34] );
    refalrts::reinit_unwrapped_closure(context[31], context[4]);
    refalrts::reinit_svar( context[35], context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[39] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[10], context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[39], context[43] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[11], context[23] );
    res = refalrts::splice_evar( res, context[30], context[33] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[6], context[10] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    refalrts::wrap_closure( context[31] );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[24], context[25], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S20A1("Decompile-Pattern-Hole$20=1", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S20A1);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S21A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & Decompile-Pattern-Hole$21=1/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 s.R#1/11 (/14 e.Pattern-R#1/12 )/15 (/18 e.Vars#1/16 )/19 (/22 e.Commands#1/20 )/23 s.LB#2/24 s.RB#2/25 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Pattern-L#1 as range 7
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
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.Pattern-R#1 as range 12
  // closed e.Vars#1 as range 16
  // closed e.Commands#1 as range 20
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#1: 6
  //DEBUG: e.Pattern-L#1: 7
  //DEBUG: s.R#1: 11
  //DEBUG: e.Pattern-R#1: 12
  //DEBUG: e.Vars#1: 16
  //DEBUG: e.Commands#1: 20
  //DEBUG: s.LB#2: 24
  //DEBUG: s.RB#2: 25

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </26 & Add/27 Tile{ AsIs: s.Top#1/6 HalfReuse: 2/9 } >/28 (/29 Tile{ AsIs: e.Pattern-L#1/7 } (/30 # LB/31 Tile{ AsIs: )/23 AsIs: s.LB#2/24 } )/32 Tile{ AsIs: (/22 } Tile{ AsIs: s.RB#2/25 } (/33 # RB/34 )/35 (/36 # Hole/37 Tile{ HalfReuse: s.RB2 #25/10 AsIs: s.R#1/11 HalfReuse: )/14 AsIs: e.Pattern-R#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.Vars#1/16 AsIs: )/19 } Tile{ AsIs: e.Commands#1/20 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_Add]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_ident(vm, context[31], identifiers[ident_LB]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::alloc_ident(vm, context[34], identifiers[ident_RB]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_open_bracket(vm, context[36]);
  refalrts::alloc_ident(vm, context[37], identifiers[ident_Hole]);
  refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_Hole]);
  refalrts::reinit_number(context[9], 2UL);
  refalrts::reinit_svar( context[10], context[25] );
  refalrts::reinit_close_bracket(context[14]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[22], context[15] );
  refalrts::link_brackets( context[36], context[14] );
  refalrts::link_brackets( context[33], context[35] );
  refalrts::link_brackets( context[29], context[32] );
  refalrts::link_brackets( context[30], context[23] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[26] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[10], context[19] );
  res = refalrts::splice_evar( res, context[33], context[37] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S21A1("Decompile-Pattern-Hole$21=1", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S21A1);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S22A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & Decompile-Pattern-Hole$22=1/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/21 e.Commands#1/19 )/22 s.LB#2/23 s.RB#2/24 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Pattern-L#1 as range 7
  // closed e.Pattern-R#1 as range 11
  // closed e.Vars#1 as range 15
  // closed e.Commands#1 as range 19
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#1: 6
  //DEBUG: e.Pattern-L#1: 7
  //DEBUG: e.Pattern-R#1: 11
  //DEBUG: e.Vars#1: 15
  //DEBUG: e.Commands#1: 19
  //DEBUG: s.LB#2: 23
  //DEBUG: s.RB#2: 24

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </25 & Add/26 Tile{ AsIs: s.Top#1/6 HalfReuse: 2/9 } >/27 (/28 Tile{ AsIs: e.Pattern-L#1/7 } )/29 Tile{ AsIs: (/21 } s.LB#2/23/30 (/31 # LB/32 )/33 (/34 Tile{ HalfReuse: # Hole/22 AsIs: s.LB#2/23 AsIs: s.RB#2/24 HalfReuse: )/1 } (/35 Tile{ HalfReuse: # RB/10 HalfReuse: )/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 } Tile{ AsIs: e.Commands#1/19 } >/36 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_Add]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::copy_stvar(vm, context[30], context[23]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_ident(vm, context[32], identifiers[ident_LB]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_Hole]);
  refalrts::reinit_number(context[9], 2UL);
  refalrts::reinit_ident(context[22], identifiers[ident_Hole]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_ident(context[10], identifiers[ident_RB]);
  refalrts::reinit_close_bracket(context[13]);
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[21], context[14] );
  refalrts::link_brackets( context[35], context[13] );
  refalrts::link_brackets( context[34], context[1] );
  refalrts::link_brackets( context[31], context[33] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[10], context[18] );
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[22], context[1] );
  res = refalrts::splice_evar( res, context[30], context[34] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S22A1("Decompile-Pattern-Hole$22=1", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S22A1);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S25A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & Decompile-Pattern-Hole$25=1/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/21 e.Commands#1/19 )/22 s.VL#2/23 s.VR#2/24 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Pattern-L#1 as range 7
  // closed e.Pattern-R#1 as range 11
  // closed e.Vars#1 as range 15
  // closed e.Commands#1 as range 19
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#1: 6
  //DEBUG: e.Pattern-L#1: 7
  //DEBUG: e.Pattern-R#1: 11
  //DEBUG: e.Vars#1: 15
  //DEBUG: e.Commands#1: 19
  //DEBUG: s.VL#2: 23
  //DEBUG: s.VR#2: 24

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </25 & Add/26 Tile{ AsIs: s.Top#1/6 HalfReuse: 2/9 } >/27 (/28 Tile{ AsIs: e.Pattern-L#1/7 } (/29 Tile{ HalfReuse: # e/22 AsIs: s.VL#2/23 AsIs: s.VR#2/24 HalfReuse: '='/1 } s.VL#2/23/30 s.VR#2/24/31 )/32 s.VR#2/24/33 Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 HalfReuse: (/18 HalfReuse: # e/21 } s.VL#2/23/34 s.VR#2/24/35 '='/36 s.VL#2/23/37 s.VR#2/24/38 )/39 )/40 Tile{ AsIs: e.Commands#1/19 } >/41 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_Add]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::copy_stvar(vm, context[30], context[23]);
  refalrts::copy_stvar(vm, context[31], context[24]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::copy_stvar(vm, context[33], context[24]);
  refalrts::copy_stvar(vm, context[34], context[23]);
  refalrts::copy_stvar(vm, context[35], context[24]);
  refalrts::alloc_char(vm, context[36], '=');
  refalrts::copy_stvar(vm, context[37], context[23]);
  refalrts::copy_stvar(vm, context[38], context[24]);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_Hole]);
  refalrts::reinit_number(context[9], 2UL);
  refalrts::reinit_ident(context[22], identifiers[ident_e]);
  refalrts::reinit_char(context[1], '=');
  refalrts::reinit_open_bracket(context[18]);
  refalrts::reinit_ident(context[21], identifiers[ident_e]);
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[40] );
  refalrts::link_brackets( context[18], context[39] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[28], context[10] );
  refalrts::link_brackets( context[29], context[32] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[41], context[41] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[34], context[40] );
  res = refalrts::splice_evar( res, context[10], context[21] );
  res = refalrts::splice_evar( res, context[30], context[33] );
  res = refalrts::splice_evar( res, context[22], context[1] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S25A1("Decompile-Pattern-Hole$25=1", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S25A1);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S26A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & Decompile-Pattern-Hole$26=1/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 s.Char#1/11 (/14 e.Pattern-R#1/12 )/15 (/18 e.Vars#1/16 )/19 (/22 e.Commands#1/20 )/23 s.VL#2/24 s.VR#2/25 s.CharPos#2/26 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Pattern-L#1 as range 7
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
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.Pattern-R#1 as range 12
  // closed e.Vars#1 as range 16
  // closed e.Commands#1 as range 20
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#1: 6
  //DEBUG: e.Pattern-L#1: 7
  //DEBUG: s.Char#1: 11
  //DEBUG: e.Pattern-R#1: 12
  //DEBUG: e.Vars#1: 16
  //DEBUG: e.Commands#1: 20
  //DEBUG: s.VL#2: 24
  //DEBUG: s.VR#2: 25
  //DEBUG: s.CharPos#2: 26

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </27 & Add/28 Tile{ AsIs: s.Top#1/6 } 3/29 >/30 Tile{ AsIs: (/9 AsIs: e.Pattern-L#1/7 HalfReuse: (/10 } Tile{ HalfReuse: # e/23 AsIs: s.VL#2/24 AsIs: s.VR#2/25 } '='/31 s.VL#2/24/32 s.VR#2/25/33 )/34 (/35 # C/36 Tile{ AsIs: s.Char#1/11 } )/37 Tile{ AsIs: s.CharPos#2/26 } )/38 Tile{ AsIs: (/14 AsIs: e.Pattern-R#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.Vars#1/16 HalfReuse: (/19 HalfReuse: # e/22 } s.VL#2/24/39 s.VR#2/25/40 '='/41 s.VL#2/24/42 s.VR#2/25/43 )/44 )/45 Tile{ AsIs: e.Commands#1/20 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[29], 3UL);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::alloc_char(vm, context[31], '=');
  refalrts::copy_stvar(vm, context[32], context[24]);
  refalrts::copy_stvar(vm, context[33], context[25]);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::alloc_ident(vm, context[36], identifiers[ident_C]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::copy_stvar(vm, context[39], context[24]);
  refalrts::copy_stvar(vm, context[40], context[25]);
  refalrts::alloc_char(vm, context[41], '=');
  refalrts::copy_stvar(vm, context[42], context[24]);
  refalrts::copy_stvar(vm, context[43], context[25]);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::alloc_close_bracket(vm, context[45]);
  refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_Hole]);
  refalrts::reinit_open_bracket(context[10]);
  refalrts::reinit_ident(context[23], identifiers[ident_e]);
  refalrts::reinit_open_bracket(context[19]);
  refalrts::reinit_ident(context[22], identifiers[ident_e]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[18], context[45] );
  refalrts::link_brackets( context[19], context[44] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[9], context[38] );
  refalrts::link_brackets( context[35], context[37] );
  refalrts::link_brackets( context[10], context[34] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[27] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[39], context[45] );
  res = refalrts::splice_evar( res, context[14], context[22] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[31], context[36] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S26A1("Decompile-Pattern-Hole$26=1", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S26A1);


static refalrts::FnResult func_gen_Decompilem_Patternm_Hole_S27A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  // </0 & Decompile-Pattern-Hole$27=1/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 s.R#1/11 (/14 e.Pattern-R#1/12 )/15 (/18 e.Vars#1/16 )/19 (/22 e.Commands#1/20 )/23 s.VL#2/24 s.VR#2/25 s.LB#2/26 s.RB#2/27 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Pattern-L#1 as range 7
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
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.Pattern-R#1 as range 12
  // closed e.Vars#1 as range 16
  // closed e.Commands#1 as range 20
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#1: 6
  //DEBUG: e.Pattern-L#1: 7
  //DEBUG: s.R#1: 11
  //DEBUG: e.Pattern-R#1: 12
  //DEBUG: e.Vars#1: 16
  //DEBUG: e.Commands#1: 20
  //DEBUG: s.VL#2: 24
  //DEBUG: s.VR#2: 25
  //DEBUG: s.LB#2: 26
  //DEBUG: s.RB#2: 27

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </28 & Add/29 Tile{ AsIs: s.Top#1/6 HalfReuse: 4/9 } >/30 (/31 Tile{ AsIs: e.Pattern-L#1/7 } (/32 Tile{ HalfReuse: # e/23 AsIs: s.VL#2/24 AsIs: s.VR#2/25 } '='/33 s.VL#2/24/34 s.VR#2/25/35 )/36 (/37 # LB/38 )/39 Tile{ AsIs: s.LB#2/26 } )/40 (/41 Tile{ AsIs: s.RB#2/27 } (/42 # RB/43 )/44 (/45 # Hole/46 Tile{ HalfReuse: s.RB2 #27/10 AsIs: s.R#1/11 HalfReuse: )/14 AsIs: e.Pattern-R#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.Vars#1/16 HalfReuse: (/19 HalfReuse: # e/22 } s.VL#2/24/47 s.VR#2/25/48 '='/49 s.VL#2/24/50 s.VR#2/25/51 )/52 )/53 Tile{ AsIs: e.Commands#1/20 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_Add]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_char(vm, context[33], '=');
  refalrts::copy_stvar(vm, context[34], context[24]);
  refalrts::copy_stvar(vm, context[35], context[25]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_ident(vm, context[38], identifiers[ident_LB]);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::alloc_open_bracket(vm, context[42]);
  refalrts::alloc_ident(vm, context[43], identifiers[ident_RB]);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::alloc_open_bracket(vm, context[45]);
  refalrts::alloc_ident(vm, context[46], identifiers[ident_Hole]);
  refalrts::copy_stvar(vm, context[47], context[24]);
  refalrts::copy_stvar(vm, context[48], context[25]);
  refalrts::alloc_char(vm, context[49], '=');
  refalrts::copy_stvar(vm, context[50], context[24]);
  refalrts::copy_stvar(vm, context[51], context[25]);
  refalrts::alloc_close_bracket(vm, context[52]);
  refalrts::alloc_close_bracket(vm, context[53]);
  refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_Hole]);
  refalrts::reinit_number(context[9], 4UL);
  refalrts::reinit_ident(context[23], identifiers[ident_e]);
  refalrts::reinit_svar( context[10], context[27] );
  refalrts::reinit_close_bracket(context[14]);
  refalrts::reinit_open_bracket(context[19]);
  refalrts::reinit_ident(context[22], identifiers[ident_e]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[18], context[53] );
  refalrts::link_brackets( context[19], context[52] );
  refalrts::link_brackets( context[41], context[15] );
  refalrts::link_brackets( context[45], context[14] );
  refalrts::link_brackets( context[42], context[44] );
  refalrts::link_brackets( context[31], context[40] );
  refalrts::link_brackets( context[37], context[39] );
  refalrts::link_brackets( context[32], context[36] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[28] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[47], context[53] );
  res = refalrts::splice_evar( res, context[10], context[22] );
  res = refalrts::splice_evar( res, context[42], context[46] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[40], context[41] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[33], context[39] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Decompilem_Patternm_Hole_S27A1("Decompile-Pattern-Hole$27=1", 982870901U, 3115847316U, func_gen_Decompilem_Patternm_Hole_S27A1);


static refalrts::FnResult func_Decompilem_Patternm_Hole(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 56 elems
  refalrts::Iter context[56];
  refalrts::zeros( context, 56 );
  // </0 & Decompile-Pattern-Hole/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Decompile-Pattern-Hole/4 s.new#1/5 s.new#2/6 (/9 e.new#3/7 )/10 (/13 e.new#4/11 )/14 (/17 e.new#5/15 )/18 e.new#6/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.new#3 as range 7
  // closed e.new#4 as range 11
  // closed e.new#5 as range 15
  // closed e.new#6 as range 2
  do {
    // </0 & Decompile-Pattern-Hole/4 s.new#7/5 s.new#8/6 (/9 e.new#9/7 )/10 (/13 e.new#10/11 )/14 (/17 e.new#11/15 )/18 (/23 s.new#12/25 s.new#13/26 e.new#14/21 )/24 e.new#15/19 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    // closed e.new#9 as range 7
    // closed e.new#10 as range 11
    // closed e.new#11 as range 15
    // closed e.new#15 as range 19
    if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
      continue;
    // closed e.new#14 as range 21
    do {
      // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/27 s.L#1/29 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # CSYM/26 e.Word#1/21 )/24 e.Commands#1/19 >/1
      context[27] = context[7];
      context[28] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_CSYM], context[26] ) )
        continue;
      // closed e.Pattern-R#1 as range 11
      // closed e.Vars#1 as range 15
      // closed e.Word#1 as range 21
      // closed e.Commands#1 as range 19
      if( ! refalrts::svar_right( context[29], context[27], context[28] ) )
        continue;
      // closed e.Pattern-L#1 as range 27
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset#1: 25
      //DEBUG: e.Pattern-R#1: 11
      //DEBUG: e.Vars#1: 15
      //DEBUG: e.Word#1: 21
      //DEBUG: e.Commands#1: 19
      //DEBUG: s.L#1: 29
      //DEBUG: e.Pattern-L#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.L#1/29 {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </30 & Inc/31 Tile{ AsIs: s.Top#1/6 HalfReuse: >/9 } (/32 Tile{ AsIs: e.Pattern-L#1/27 } Tile{ AsIs: (/23 } Tile{ Reuse: # W/26 AsIs: e.Word#1/21 AsIs: )/24 } s.Top#1/6/33 Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_Inc]);
      refalrts::alloc_open_bracket(vm, context[32]);
      refalrts::copy_stvar(vm, context[33], context[6]);
      refalrts::reinit_close_call(context[9]);
      refalrts::update_ident(context[26], identifiers[ident_W]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[32], context[10] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[10], context[18] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[26], context[24] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[6], context[9] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 s.R#1/29 e.Pattern-R#1/27 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # CSYMR/26 e.Word#1/21 )/24 e.Commands#1/19 >/1
      context[27] = context[11];
      context[28] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_CSYMR], context[26] ) )
        continue;
      // closed e.Pattern-L#1 as range 7
      // closed e.Vars#1 as range 15
      // closed e.Word#1 as range 21
      // closed e.Commands#1 as range 19
      if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
        continue;
      // closed e.Pattern-R#1 as range 27
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset#1: 25
      //DEBUG: e.Pattern-L#1: 7
      //DEBUG: e.Vars#1: 15
      //DEBUG: e.Word#1: 21
      //DEBUG: e.Commands#1: 19
      //DEBUG: s.R#1: 29
      //DEBUG: e.Pattern-R#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.R#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </30 & Inc/31 Tile{ AsIs: s.Top#1/6 } >/32 Tile{ AsIs: (/9 AsIs: e.Pattern-L#1/7 AsIs: )/10 AsIs: (/13 } Tile{ HalfReuse: s.Top1 #6/14 AsIs: (/17 } Tile{ Reuse: # W/26 } Tile{ AsIs: e.Word#1/21 } )/33 Tile{ AsIs: e.Pattern-R#1/27 } Tile{ AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Vars#1/15 } Tile{ AsIs: )/24 AsIs: e.Commands#1/19 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_Inc]);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::alloc_close_bracket(vm, context[33]);
      refalrts::reinit_svar( context[14], context[6] );
      refalrts::update_ident(context[26], identifiers[ident_W]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[13], context[18] );
      refalrts::link_brackets( context[17], context[33] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[18], context[23] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[14], context[17] );
      res = refalrts::splice_evar( res, context[9], context[13] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[6], context[6] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/27 s.L#1/32 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # NSYM/26 s.Number#1/31 )/24 e.Commands#1/19 >/1
      context[27] = context[7];
      context[28] = context[8];
      context[29] = context[21];
      context[30] = context[22];
      if( ! refalrts::ident_term( identifiers[ident_NSYM], context[26] ) )
        continue;
      // closed e.Pattern-R#1 as range 11
      // closed e.Vars#1 as range 15
      // closed e.Commands#1 as range 19
      if( ! refalrts::svar_left( context[31], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      if( ! refalrts::svar_right( context[32], context[27], context[28] ) )
        continue;
      // closed e.Pattern-L#1 as range 27
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset#1: 25
      //DEBUG: e.Pattern-R#1: 11
      //DEBUG: e.Vars#1: 15
      //DEBUG: e.Commands#1: 19
      //DEBUG: s.Number#1: 31
      //DEBUG: s.L#1: 32
      //DEBUG: e.Pattern-L#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.L#1/32 {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </33 & Inc/34 Tile{ AsIs: s.Top#1/6 HalfReuse: >/9 } (/35 Tile{ AsIs: e.Pattern-L#1/27 } Tile{ AsIs: (/23 } Tile{ Reuse: # N/26 AsIs: s.Number#1/31 AsIs: )/24 } s.Top#1/6/36 Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_Inc]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::copy_stvar(vm, context[36], context[6]);
      refalrts::reinit_close_call(context[9]);
      refalrts::update_ident(context[26], identifiers[ident_N]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[35], context[10] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[10], context[18] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[26], context[24] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[6], context[9] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 s.R#1/29 e.Pattern-R#1/27 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # NSYMR/26 e.Number#1/21 )/24 e.Commands#1/19 >/1
      context[27] = context[11];
      context[28] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_NSYMR], context[26] ) )
        continue;
      // closed e.Pattern-L#1 as range 7
      // closed e.Vars#1 as range 15
      // closed e.Number#1 as range 21
      // closed e.Commands#1 as range 19
      if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
        continue;
      // closed e.Pattern-R#1 as range 27
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset#1: 25
      //DEBUG: e.Pattern-L#1: 7
      //DEBUG: e.Vars#1: 15
      //DEBUG: e.Number#1: 21
      //DEBUG: e.Commands#1: 19
      //DEBUG: s.R#1: 29
      //DEBUG: e.Pattern-R#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.R#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </30 & Inc/31 Tile{ AsIs: s.Top#1/6 } >/32 Tile{ AsIs: (/9 AsIs: e.Pattern-L#1/7 AsIs: )/10 AsIs: (/13 } Tile{ HalfReuse: s.Top1 #6/14 AsIs: (/17 } Tile{ Reuse: # N/26 } Tile{ AsIs: e.Number#1/21 } )/33 Tile{ AsIs: e.Pattern-R#1/27 } Tile{ AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Vars#1/15 } Tile{ AsIs: )/24 AsIs: e.Commands#1/19 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_Inc]);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::alloc_close_bracket(vm, context[33]);
      refalrts::reinit_svar( context[14], context[6] );
      refalrts::update_ident(context[26], identifiers[ident_N]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[13], context[18] );
      refalrts::link_brackets( context[17], context[33] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[18], context[23] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[14], context[17] );
      res = refalrts::splice_evar( res, context[9], context[13] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[6], context[6] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Pattern-Hole/4 s.new#16/5 s.new#17/6 (/9 e.new#18/7 )/10 (/13 e.new#19/11 )/14 (/17 e.new#20/15 )/18 (/23 s.new#21/25 s.new#22/26 s.new#23/29 e.new#24/27 )/24 e.new#25/19 >/1
      context[27] = context[21];
      context[28] = context[22];
      // closed e.new#18 as range 7
      // closed e.new#19 as range 11
      // closed e.new#20 as range 15
      // closed e.new#25 as range 19
      if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
        continue;
      // closed e.new#24 as range 27
      do {
        // </0 & Decompile-Pattern-Hole/4 s.new#26/5 s.new#27/6 (/9 e.new#28/7 )/10 (/13 e.new#29/11 )/14 (/17 e.new#30/15 )/18 (/23 s.new#31/25 s.new#32/26 s.new#33/29 s.new#34/32 )/24 e.new#35/19 >/1
        context[30] = context[27];
        context[31] = context[28];
        // closed e.new#28 as range 7
        // closed e.new#29 as range 11
        // closed e.new#30 as range 15
        // closed e.new#35 as range 19
        if( ! refalrts::svar_left( context[32], context[30], context[31] ) )
          continue;
        if( ! refalrts::empty_seq( context[30], context[31] ) )
          continue;
        do {
          // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/33 s.L#1/35 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # SYM/26 s.Code#1/29 s.Char#1/32 )/24 e.Commands#1/19 >/1
          context[33] = context[7];
          context[34] = context[8];
          if( ! refalrts::ident_term( identifiers[ident_SYM], context[26] ) )
            continue;
          // closed e.Pattern-R#1 as range 11
          // closed e.Vars#1 as range 15
          // closed e.Commands#1 as range 19
          if( ! refalrts::svar_right( context[35], context[33], context[34] ) )
            continue;
          // closed e.Pattern-L#1 as range 33
          //DEBUG: s.Level#1: 5
          //DEBUG: s.Top#1: 6
          //DEBUG: s.Offset#1: 25
          //DEBUG: s.Code#1: 29
          //DEBUG: s.Char#1: 32
          //DEBUG: e.Pattern-R#1: 11
          //DEBUG: e.Vars#1: 15
          //DEBUG: e.Commands#1: 19
          //DEBUG: s.L#1: 35
          //DEBUG: e.Pattern-L#1: 33

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.L#1/35 {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} s.Code#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </36 & Inc/37 Tile{ AsIs: s.Top#1/6 HalfReuse: >/9 } Tile{ AsIs: (/23 } Tile{ AsIs: e.Pattern-L#1/33 } (/38 Tile{ Reuse: # C/26 } Tile{ AsIs: s.Char#1/32 AsIs: )/24 } s.Top#1/6/39 Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[36]);
          refalrts::alloc_name(vm, context[37], functions[efunc_Inc]);
          refalrts::alloc_open_bracket(vm, context[38]);
          refalrts::copy_stvar(vm, context[39], context[6]);
          refalrts::reinit_close_call(context[9]);
          refalrts::update_ident(context[26], identifiers[ident_C]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[17], context[18] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[23], context[10] );
          refalrts::link_brackets( context[38], context[24] );
          refalrts::push_stack( vm, context[9] );
          refalrts::push_stack( vm, context[36] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[10], context[18] );
          res = refalrts::splice_evar( res, context[39], context[39] );
          res = refalrts::splice_evar( res, context[32], context[24] );
          res = refalrts::splice_evar( res, context[26], context[26] );
          res = refalrts::splice_evar( res, context[38], context[38] );
          res = refalrts::splice_evar( res, context[33], context[34] );
          res = refalrts::splice_evar( res, context[23], context[23] );
          res = refalrts::splice_evar( res, context[6], context[9] );
          res = refalrts::splice_evar( res, context[36], context[37] );
          refalrts::splice_to_freelist_open( vm, context[5], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 s.R#1/35 e.Pattern-R#1/33 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # SYMR/26 s.Code#1/29 s.Char#1/32 )/24 e.Commands#1/19 >/1
        context[33] = context[11];
        context[34] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_SYMR], context[26] ) )
          continue;
        // closed e.Pattern-L#1 as range 7
        // closed e.Vars#1 as range 15
        // closed e.Commands#1 as range 19
        if( ! refalrts::svar_left( context[35], context[33], context[34] ) )
          continue;
        // closed e.Pattern-R#1 as range 33
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 25
        //DEBUG: s.Code#1: 29
        //DEBUG: s.Char#1: 32
        //DEBUG: e.Pattern-L#1: 7
        //DEBUG: e.Vars#1: 15
        //DEBUG: e.Commands#1: 19
        //DEBUG: s.R#1: 35
        //DEBUG: e.Pattern-R#1: 33

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.R#1/35 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} s.Code#1/29 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </36 & Inc/37 Tile{ AsIs: s.Top#1/6 } >/38 Tile{ AsIs: (/9 AsIs: e.Pattern-L#1/7 AsIs: )/10 AsIs: (/13 } Tile{ HalfReuse: s.Top1 #6/14 AsIs: (/17 } Tile{ Reuse: # C/26 } Tile{ AsIs: s.Char#1/32 } )/39 Tile{ AsIs: e.Pattern-R#1/33 } Tile{ AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Vars#1/15 } Tile{ AsIs: )/24 AsIs: e.Commands#1/19 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::alloc_name(vm, context[37], functions[efunc_Inc]);
        refalrts::alloc_close_call(vm, context[38]);
        refalrts::alloc_close_bracket(vm, context[39]);
        refalrts::reinit_svar( context[14], context[6] );
        refalrts::update_ident(context[26], identifiers[ident_C]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[13], context[18] );
        refalrts::link_brackets( context[17], context[39] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::push_stack( vm, context[38] );
        refalrts::push_stack( vm, context[36] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[24];
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[18], context[23] );
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_evar( res, context[39], context[39] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        res = refalrts::splice_evar( res, context[14], context[17] );
        res = refalrts::splice_evar( res, context[9], context[13] );
        res = refalrts::splice_evar( res, context[38], context[38] );
        res = refalrts::splice_evar( res, context[6], context[6] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/30 s.L#1/32 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # SYMS/26 s.Len#1/29 e.Chars#1/27 )/24 e.Commands#1/19 >/1
        context[30] = context[7];
        context[31] = context[8];
        if( ! refalrts::ident_term( identifiers[ident_SYMS], context[26] ) )
          continue;
        // closed e.Pattern-R#1 as range 11
        // closed e.Vars#1 as range 15
        // closed e.Chars#1 as range 27
        // closed e.Commands#1 as range 19
        if( ! refalrts::svar_right( context[32], context[30], context[31] ) )
          continue;
        // closed e.Pattern-L#1 as range 30
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 25
        //DEBUG: s.Len#1: 29
        //DEBUG: e.Pattern-R#1: 11
        //DEBUG: e.Vars#1: 15
        //DEBUG: e.Chars#1: 27
        //DEBUG: e.Commands#1: 19
        //DEBUG: s.L#1: 32
        //DEBUG: e.Pattern-L#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.L#1/32 {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Decompile-Pattern-Hole$7=1/33 Tile{ AsIs: s.Level#1/5 } (/34 Tile{ AsIs: e.Pattern-L#1/30 } Tile{ AsIs: )/24 } (/35 Tile{ AsIs: e.Chars#1/27 } Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Commands#1/19 } )/36 {*}/37 </38 Tile{ HalfReuse: & Add/26 AsIs: s.Len#1/29 } Tile{ AsIs: s.Top#1/6 HalfReuse: >/9 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[33], functions[efunc_gen_Decompilem_Patternm_Hole_S7A1]);
        refalrts::alloc_open_bracket(vm, context[34]);
        refalrts::alloc_open_bracket(vm, context[35]);
        refalrts::alloc_close_bracket(vm, context[36]);
        refalrts::alloc_unwrapped_closure(vm, context[37], context[4]);
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::reinit_closure_head(context[4]);
        refalrts::reinit_name(context[26], functions[efunc_Add]);
        refalrts::reinit_close_call(context[9]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[9] );
        refalrts::push_stack( vm, context[38] );
        refalrts::link_brackets( context[23], context[36] );
        refalrts::link_brackets( context[17], context[18] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[35], context[10] );
        refalrts::link_brackets( context[34], context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[6], context[9] );
        res = refalrts::splice_evar( res, context[26], context[29] );
        res = refalrts::splice_evar( res, context[36], context[38] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[10], context[23] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[35], context[35] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[34], context[34] );
        res = refalrts::splice_evar( res, context[5], context[5] );
        res = refalrts::splice_evar( res, context[33], context[33] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        refalrts::wrap_closure( context[37] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 s.R#1/32 e.Pattern-R#1/30 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # SYMSR/26 s.Len#1/29 e.Chars#1/27 )/24 e.Commands#1/19 >/1
      context[30] = context[11];
      context[31] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_SYMSR], context[26] ) )
        continue;
      // closed e.Pattern-L#1 as range 7
      // closed e.Vars#1 as range 15
      // closed e.Chars#1 as range 27
      // closed e.Commands#1 as range 19
      if( ! refalrts::svar_left( context[32], context[30], context[31] ) )
        continue;
      // closed e.Pattern-R#1 as range 30
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset#1: 25
      //DEBUG: s.Len#1: 29
      //DEBUG: e.Pattern-L#1: 7
      //DEBUG: e.Vars#1: 15
      //DEBUG: e.Chars#1: 27
      //DEBUG: e.Commands#1: 19
      //DEBUG: s.R#1: 32
      //DEBUG: e.Pattern-R#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.R#1/32 {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Decompile-Pattern-Hole$8=1/33 Tile{ AsIs: s.Level#1/5 } Tile{ AsIs: (/9 AsIs: e.Pattern-L#1/7 AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Chars#1/27 } )/34 (/35 Tile{ AsIs: e.Pattern-R#1/30 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: )/24 } {*}/36 </37 Tile{ HalfReuse: & Add/26 AsIs: s.Len#1/29 } Tile{ AsIs: s.Top#1/6 } >/38 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[33], functions[efunc_gen_Decompilem_Patternm_Hole_S8A1]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::alloc_unwrapped_closure(vm, context[36], context[4]);
      refalrts::alloc_open_call(vm, context[37]);
      refalrts::alloc_close_call(vm, context[38]);
      refalrts::reinit_closure_head(context[4]);
      refalrts::reinit_name(context[26], functions[efunc_Add]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[37] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[35], context[14] );
      refalrts::link_brackets( context[13], context[34] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[6], context[6] );
      res = refalrts::splice_evar( res, context[26], context[29] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[23] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[9], context[13] );
      res = refalrts::splice_evar( res, context[5], context[5] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      refalrts::wrap_closure( context[36] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Pattern-Hole/4 s.new#16/5 s.new#17/6 (/9 e.new#18/7 )/10 (/13 e.new#19/11 )/14 (/17 e.new#20/15 )/18 (/23 s.new#21/25 s.new#22/26 )/24 e.new#23/19 >/1
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.new#18 as range 7
      // closed e.new#19 as range 11
      // closed e.new#20 as range 15
      // closed e.new#23 as range 19
      do {
        // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/27 s.L#1/29 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # VSYM/26 )/24 e.Commands#1/19 >/1
        context[27] = context[7];
        context[28] = context[8];
        if( ! refalrts::ident_term( identifiers[ident_VSYM], context[26] ) )
          continue;
        // closed e.Pattern-R#1 as range 11
        // closed e.Vars#1 as range 15
        // closed e.Commands#1 as range 19
        if( ! refalrts::svar_right( context[29], context[27], context[28] ) )
          continue;
        // closed e.Pattern-L#1 as range 27
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 25
        //DEBUG: e.Pattern-R#1: 11
        //DEBUG: e.Vars#1: 15
        //DEBUG: e.Commands#1: 19
        //DEBUG: s.L#1: 29
        //DEBUG: e.Pattern-L#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.L#1/29 {REMOVED TILE} s.Offset#1/25 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </30 & Inc/31 s.Top#1/6/32 >/33 (/34 Tile{ AsIs: e.Pattern-L#1/27 } (/35 # s/36 Tile{ AsIs: s.Top#1/6 HalfReuse: '='/9 } s.Top#1/6/37 )/38 s.Top#1/6/39 Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 HalfReuse: (/18 HalfReuse: # s/23 } s.Top#1/6/40 '='/41 s.Top#1/6/42 Tile{ HalfReuse: )/26 AsIs: )/24 AsIs: e.Commands#1/19 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_Inc]);
        refalrts::copy_stvar(vm, context[32], context[6]);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::alloc_open_bracket(vm, context[34]);
        refalrts::alloc_open_bracket(vm, context[35]);
        refalrts::alloc_ident(vm, context[36], identifiers[ident_s]);
        refalrts::copy_stvar(vm, context[37], context[6]);
        refalrts::alloc_close_bracket(vm, context[38]);
        refalrts::copy_stvar(vm, context[39], context[6]);
        refalrts::copy_stvar(vm, context[40], context[6]);
        refalrts::alloc_char(vm, context[41], '=');
        refalrts::copy_stvar(vm, context[42], context[6]);
        refalrts::reinit_char(context[9], '=');
        refalrts::reinit_open_bracket(context[18]);
        refalrts::reinit_ident(context[23], identifiers[ident_s]);
        refalrts::reinit_close_bracket(context[26]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[17], context[24] );
        refalrts::link_brackets( context[18], context[26] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[34], context[10] );
        refalrts::link_brackets( context[35], context[38] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[30] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[26];
        res = refalrts::splice_evar( res, context[40], context[42] );
        res = refalrts::splice_evar( res, context[10], context[23] );
        res = refalrts::splice_evar( res, context[37], context[39] );
        res = refalrts::splice_evar( res, context[6], context[9] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[30], context[34] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 s.R#1/29 e.Pattern-R#1/27 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # VSYMR/26 )/24 e.Commands#1/19 >/1
        context[27] = context[11];
        context[28] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_VSYMR], context[26] ) )
          continue;
        // closed e.Pattern-L#1 as range 7
        // closed e.Vars#1 as range 15
        // closed e.Commands#1 as range 19
        if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
          continue;
        // closed e.Pattern-R#1 as range 27
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 25
        //DEBUG: e.Pattern-L#1: 7
        //DEBUG: e.Vars#1: 15
        //DEBUG: e.Commands#1: 19
        //DEBUG: s.R#1: 29
        //DEBUG: e.Pattern-R#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.R#1/29 {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </30 & Inc/31 Tile{ AsIs: s.Top#1/6 } >/32 Tile{ AsIs: (/9 AsIs: e.Pattern-L#1/7 AsIs: )/10 AsIs: (/13 } s.Top#1/6/33 (/34 # s/35 s.Top#1/6/36 '='/37 s.Top#1/6/38 )/39 Tile{ AsIs: e.Pattern-R#1/27 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 HalfReuse: (/18 HalfReuse: # s/23 } s.Top#1/6/40 '='/41 s.Top#1/6/42 Tile{ HalfReuse: )/26 AsIs: )/24 AsIs: e.Commands#1/19 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_Inc]);
        refalrts::alloc_close_call(vm, context[32]);
        refalrts::copy_stvar(vm, context[33], context[6]);
        refalrts::alloc_open_bracket(vm, context[34]);
        refalrts::alloc_ident(vm, context[35], identifiers[ident_s]);
        refalrts::copy_stvar(vm, context[36], context[6]);
        refalrts::alloc_char(vm, context[37], '=');
        refalrts::copy_stvar(vm, context[38], context[6]);
        refalrts::alloc_close_bracket(vm, context[39]);
        refalrts::copy_stvar(vm, context[40], context[6]);
        refalrts::alloc_char(vm, context[41], '=');
        refalrts::copy_stvar(vm, context[42], context[6]);
        refalrts::reinit_open_bracket(context[18]);
        refalrts::reinit_ident(context[23], identifiers[ident_s]);
        refalrts::reinit_close_bracket(context[26]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[17], context[24] );
        refalrts::link_brackets( context[18], context[26] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[34], context[39] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[30] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[26];
        res = refalrts::splice_evar( res, context[40], context[42] );
        res = refalrts::splice_evar( res, context[14], context[23] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[33], context[39] );
        res = refalrts::splice_evar( res, context[9], context[13] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        res = refalrts::splice_evar( res, context[6], context[6] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/27 s.L#1/29 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # TERM/26 )/24 e.Commands#1/19 >/1
        context[27] = context[7];
        context[28] = context[8];
        if( ! refalrts::ident_term( identifiers[ident_TERM], context[26] ) )
          continue;
        // closed e.Pattern-R#1 as range 11
        // closed e.Vars#1 as range 15
        // closed e.Commands#1 as range 19
        if( ! refalrts::svar_right( context[29], context[27], context[28] ) )
          continue;
        // closed e.Pattern-L#1 as range 27
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 25
        //DEBUG: e.Pattern-R#1: 11
        //DEBUG: e.Vars#1: 15
        //DEBUG: e.Commands#1: 19
        //DEBUG: s.L#1: 29
        //DEBUG: e.Pattern-L#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.L#1/29 {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </26 } Tile{ HalfReuse: [*]/0 Reuse: & Decompile-Pattern-Hole$11=1/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 } Tile{ AsIs: e.Pattern-L#1/27 } Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: )/24 } {*}/30 s.Top#1/6/31 </32 & Add/33 1/34 s.Top#1/6/35 >/36 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_unwrapped_closure(vm, context[30], context[0]);
        refalrts::copy_stvar(vm, context[31], context[6]);
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[33], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[34], 1UL);
        refalrts::copy_stvar(vm, context[35], context[6]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::reinit_open_call(context[26]);
        refalrts::reinit_closure_head(context[0]);
        refalrts::update_name(context[4], functions[efunc_gen_Decompilem_Patternm_Hole_S11A1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[32] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[17], context[18] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[30], context[36] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[10], context[23] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        refalrts::wrap_closure( context[30] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 s.R#1/29 e.Pattern-R#1/27 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # TERMR/26 )/24 e.Commands#1/19 >/1
      context[27] = context[11];
      context[28] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_TERMR], context[26] ) )
        continue;
      // closed e.Pattern-L#1 as range 7
      // closed e.Vars#1 as range 15
      // closed e.Commands#1 as range 19
      if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
        continue;
      // closed e.Pattern-R#1 as range 27
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset#1: 25
      //DEBUG: e.Pattern-L#1: 7
      //DEBUG: e.Vars#1: 15
      //DEBUG: e.Commands#1: 19
      //DEBUG: s.R#1: 29
      //DEBUG: e.Pattern-R#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.R#1/29 {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </30 Tile{ HalfReuse: [*]/0 Reuse: & Decompile-Pattern-Hole$12=1/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Pattern-L#1/7 AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Pattern-R#1/27 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: )/24 } Tile{ HalfReuse: {*}/26 } s.Top#1/6/31 </32 & Add/33 1/34 s.Top#1/6/35 >/36 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::copy_stvar(vm, context[31], context[6]);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[34], 1UL);
      refalrts::copy_stvar(vm, context[35], context[6]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::reinit_closure_head(context[0]);
      refalrts::update_name(context[4], functions[efunc_gen_Decompilem_Patternm_Hole_S12A1]);
      refalrts::reinit_unwrapped_closure(context[26], context[0]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[31], context[36] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[23] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[0], context[13] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      refalrts::wrap_closure( context[26] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Pattern-Hole/4 s.new#16/5 s.new#17/6 (/9 e.new#18/7 )/10 (/13 e.new#19/11 )/14 (/17 e.new#20/15 )/18 (/23 s.new#21/25 s.new#22/26 s.new#23/29 e.new#24/27 )/24 e.new#25/19 >/1
      context[27] = context[21];
      context[28] = context[22];
      // closed e.new#18 as range 7
      // closed e.new#19 as range 11
      // closed e.new#20 as range 15
      // closed e.new#25 as range 19
      if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
        continue;
      // closed e.new#24 as range 27
      do {
        // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # TRAN/26 s.Jump#1/29 )/24 e.Commands-B#1/32 (/38 s.Jump#1/40 e.Command#1/36 )/39 e.Commands-E#1/34 >/1
        context[30] = context[19];
        context[31] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_TRAN], context[26] ) )
          continue;
        if( ! refalrts::empty_seq( context[27], context[28] ) )
          continue;
        // closed e.Pattern-L#1 as range 7
        // closed e.Pattern-R#1 as range 11
        // closed e.Vars#1 as range 15
        context[32] = 0;
        context[33] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[34] = context[30];
          context[35] = context[31];
          context[36] = 0;
          context[37] = 0;
          context[38] = refalrts::brackets_left( context[36], context[37], context[34], context[35] );
          if( ! context[38] )
            continue;
          refalrts::bracket_pointers(context[38], context[39]);
          if( ! refalrts::repeated_stvar_left( vm, context[40], context[29], context[36], context[37] ) )
            continue;
          // closed e.Command#1 as range 36
          // closed e.Commands-E#1 as range 34
          //DEBUG: s.Level#1: 5
          //DEBUG: s.Top#1: 6
          //DEBUG: s.Offset#1: 25
          //DEBUG: s.Jump#1: 29
          //DEBUG: e.Pattern-L#1: 7
          //DEBUG: e.Pattern-R#1: 11
          //DEBUG: e.Vars#1: 15
          //DEBUG: e.Commands-B#1: 32
          //DEBUG: e.Command#1: 36
          //DEBUG: e.Commands-E#1: 34

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} s.Jump#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Pattern-L#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 } Tile{ AsIs: e.Commands-B#1/32 } Tile{ AsIs: (/23 } '@'/41 Tile{ Reuse: # Restore-Hole/26 } s.Level#1/5/42 s.Top#1/6/43 (/44 e.Pattern-L#1/7/45 Tile{ AsIs: )/24 } (/47 e.Pattern-R#1/11/48 )/50 (/51 e.Vars#1/15/52 )/54 )/55 Tile{ AsIs: (/38 AsIs: s.Jump#1/40 AsIs: e.Command#1/36 AsIs: )/39 AsIs: e.Commands-E#1/34 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[41], '@');
          refalrts::copy_stvar(vm, context[42], context[5]);
          refalrts::copy_stvar(vm, context[43], context[6]);
          refalrts::alloc_open_bracket(vm, context[44]);
          refalrts::copy_evar(vm, context[45], context[46], context[7], context[8]);
          refalrts::alloc_open_bracket(vm, context[47]);
          refalrts::copy_evar(vm, context[48], context[49], context[11], context[12]);
          refalrts::alloc_close_bracket(vm, context[50]);
          refalrts::alloc_open_bracket(vm, context[51]);
          refalrts::copy_evar(vm, context[52], context[53], context[15], context[16]);
          refalrts::alloc_close_bracket(vm, context[54]);
          refalrts::alloc_close_bracket(vm, context[55]);
          refalrts::update_ident(context[26], identifiers[ident_Restorem_Hole]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[38], context[39] );
          refalrts::link_brackets( context[23], context[55] );
          refalrts::link_brackets( context[51], context[54] );
          refalrts::link_brackets( context[47], context[50] );
          refalrts::link_brackets( context[44], context[24] );
          refalrts::link_brackets( context[17], context[18] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[38];
          res = refalrts::splice_evar( res, context[47], context[55] );
          res = refalrts::splice_evar( res, context[24], context[24] );
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_evar( res, context[42], context[44] );
          res = refalrts::splice_evar( res, context[26], context[26] );
          res = refalrts::splice_evar( res, context[41], context[41] );
          res = refalrts::splice_evar( res, context[23], context[23] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          refalrts::splice_to_freelist_open( vm, context[18], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[32], context[33], context[30], context[31] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Decompile-Pattern-Hole/4 s.new#26/5 s.new#27/6 (/9 e.new#28/7 )/10 (/13 e.new#29/11 )/14 (/17 e.new#30/15 )/18 (/23 '@'/25 s.new#31/26 s.new#32/29 s.new#33/40 e.new#34/30 (/38 e.new#35/36 )/39 (/34 e.new#36/32 )/35 )/24 e.new#37/19 >/1
        context[30] = context[27];
        context[31] = context[28];
        if( ! refalrts::char_term( '@', context[25] ) )
          continue;
        context[32] = 0;
        context[33] = 0;
        context[34] = refalrts::brackets_right( context[32], context[33], context[30], context[31] );
        if( ! context[34] )
          continue;
        refalrts::bracket_pointers(context[34], context[35]);
        context[36] = 0;
        context[37] = 0;
        context[38] = refalrts::brackets_right( context[36], context[37], context[30], context[31] );
        if( ! context[38] )
          continue;
        refalrts::bracket_pointers(context[38], context[39]);
        // closed e.new#28 as range 7
        // closed e.new#29 as range 11
        // closed e.new#30 as range 15
        // closed e.new#35 as range 36
        // closed e.new#36 as range 32
        // closed e.new#37 as range 19
        if( ! refalrts::svar_left( context[40], context[30], context[31] ) )
          continue;
        // closed e.new#34 as range 30
        do {
          // </0 & Decompile-Pattern-Hole/4 s.Level1#1/5 s.Top1#1/6 (/9 e.Pattern-L1#1/7 )/10 (/13 e.Pattern-R1#1/11 )/14 (/17 e.Vars1#1/15 )/18 (/23 '@'/25 # Restore-Hole/26 s.Level2#1/29 s.Top2#1/40 (/45 e.Pattern-L2#1/43 )/46 (/38 e.Pattern-R2#1/36 )/39 (/34 e.Vars2#1/32 )/35 )/24 e.Commands#1/19 >/1
          context[41] = context[30];
          context[42] = context[31];
          if( ! refalrts::ident_term( identifiers[ident_Restorem_Hole], context[26] ) )
            continue;
          context[43] = 0;
          context[44] = 0;
          context[45] = refalrts::brackets_left( context[43], context[44], context[41], context[42] );
          if( ! context[45] )
            continue;
          refalrts::bracket_pointers(context[45], context[46]);
          if( ! refalrts::empty_seq( context[41], context[42] ) )
            continue;
          // closed e.Pattern-L1#1 as range 7
          // closed e.Pattern-R1#1 as range 11
          // closed e.Vars1#1 as range 15
          // closed e.Pattern-L2#1 as range 43
          // closed e.Pattern-R2#1 as range 36
          // closed e.Vars2#1 as range 32
          // closed e.Commands#1 as range 19
          //DEBUG: s.Level1#1: 5
          //DEBUG: s.Top1#1: 6
          //DEBUG: s.Level2#1: 29
          //DEBUG: s.Top2#1: 40
          //DEBUG: e.Pattern-L1#1: 7
          //DEBUG: e.Pattern-R1#1: 11
          //DEBUG: e.Vars1#1: 15
          //DEBUG: e.Pattern-L2#1: 43
          //DEBUG: e.Pattern-R2#1: 36
          //DEBUG: e.Vars2#1: 32
          //DEBUG: e.Commands#1: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & Decompile-Pattern-Hole/4 s.Level1#1/5 s.Top1#1/6 (/9 e.Pattern-L1#1/7 )/10 (/13 e.Pattern-R1#1/11 )/14 (/17 e.Vars1#1/15 )/18 (/23 {REMOVED TILE} )/24 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </25 HalfReuse: & Decompile-Pattern-Hole/26 AsIs: s.Level2#1/29 AsIs: s.Top2#1/40 AsIs: (/45 AsIs: e.Pattern-L2#1/43 AsIs: )/46 AsIs: (/38 AsIs: e.Pattern-R2#1/36 AsIs: )/39 AsIs: (/34 AsIs: e.Vars2#1/32 AsIs: )/35 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: >/1 ]] }
          refalrts::reinit_open_call(context[25]);
          refalrts::reinit_name(context[26], functions[efunc_Decompilem_Patternm_Hole]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[25] );
          refalrts::link_brackets( context[34], context[35] );
          refalrts::link_brackets( context[38], context[39] );
          refalrts::link_brackets( context[45], context[46] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[25], context[35] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Decompile-Pattern-Hole/4 s.Level1#1/5 s.Top1#1/6 (/9 e.Pattern-L1#1/7 )/10 (/13 e.Pattern-R1#1/11 )/14 (/17 e.Vars1#1/15 )/18 (/23 '@'/25 # Restore-NoHole/26 s.Level2#1/29 s.Top2#1/40 (/38 e.Pattern2#1/36 )/39 (/34 e.Vars2#1/32 )/35 )/24 e.Commands#1/19 >/1
        if( ! refalrts::ident_term( identifiers[ident_Restorem_NoHole], context[26] ) )
          continue;
        if( ! refalrts::empty_seq( context[30], context[31] ) )
          continue;
        // closed e.Pattern-L1#1 as range 7
        // closed e.Pattern-R1#1 as range 11
        // closed e.Vars1#1 as range 15
        // closed e.Pattern2#1 as range 36
        // closed e.Vars2#1 as range 32
        // closed e.Commands#1 as range 19
        //DEBUG: s.Level1#1: 5
        //DEBUG: s.Top1#1: 6
        //DEBUG: s.Level2#1: 29
        //DEBUG: s.Top2#1: 40
        //DEBUG: e.Pattern-L1#1: 7
        //DEBUG: e.Pattern-R1#1: 11
        //DEBUG: e.Vars1#1: 15
        //DEBUG: e.Pattern2#1: 36
        //DEBUG: e.Vars2#1: 32
        //DEBUG: e.Commands#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Decompile-Pattern-Hole/4 s.Level1#1/5 s.Top1#1/6 (/9 e.Pattern-L1#1/7 )/10 (/13 e.Pattern-R1#1/11 )/14 (/17 e.Vars1#1/15 )/18 (/23 {REMOVED TILE} )/24 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </25 HalfReuse: & Decompile-Pattern-NoHole/26 AsIs: s.Level2#1/29 AsIs: s.Top2#1/40 AsIs: (/38 AsIs: e.Pattern2#1/36 AsIs: )/39 AsIs: (/34 AsIs: e.Vars2#1/32 AsIs: )/35 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[25]);
        refalrts::reinit_name(context[26], functions[efunc_Decompilem_Patternm_NoHole]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[25] );
        refalrts::link_brackets( context[34], context[35] );
        refalrts::link_brackets( context[38], context[39] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[25], context[35] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Pattern-Hole/4 s.new#26/5 s.new#27/6 (/9 e.new#28/7 )/10 (/13 e.new#29/11 )/14 (/17 e.new#30/15 )/18 (/23 s.new#31/25 s.new#32/26 s.new#33/29 )/24 e.new#34/19 >/1
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;
      // closed e.new#28 as range 7
      // closed e.new#29 as range 11
      // closed e.new#30 as range 15
      // closed e.new#34 as range 19
      do {
        // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/30 s.L#1/32 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # OVSYM/26 s.VarNo#1/29 )/24 e.Commands#1/19 >/1
        context[30] = context[7];
        context[31] = context[8];
        if( ! refalrts::ident_term( identifiers[ident_OVSYM], context[26] ) )
          continue;
        // closed e.Pattern-R#1 as range 11
        // closed e.Vars#1 as range 15
        // closed e.Commands#1 as range 19
        if( ! refalrts::svar_right( context[32], context[30], context[31] ) )
          continue;
        // closed e.Pattern-L#1 as range 30
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 25
        //DEBUG: s.VarNo#1: 29
        //DEBUG: e.Pattern-R#1: 11
        //DEBUG: e.Vars#1: 15
        //DEBUG: e.Commands#1: 19
        //DEBUG: s.L#1: 32
        //DEBUG: e.Pattern-L#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.L#1/32 {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </33 & Inc/34 s.Top#1/6/35 >/36 (/37 Tile{ AsIs: e.Pattern-L#1/30 } (/38 Tile{ Reuse: # s/26 AsIs: s.VarNo#1/29 } '='/39 Tile{ AsIs: s.Top#1/6 HalfReuse: )/9 } s.Top#1/6/40 Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 HalfReuse: (/18 HalfReuse: # s/23 } s.VarNo#1/29/41 '='/42 s.Top#1/6/43 )/44 Tile{ AsIs: )/24 AsIs: e.Commands#1/19 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[33]);
        refalrts::alloc_name(vm, context[34], functions[efunc_Inc]);
        refalrts::copy_stvar(vm, context[35], context[6]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::alloc_open_bracket(vm, context[37]);
        refalrts::alloc_open_bracket(vm, context[38]);
        refalrts::alloc_char(vm, context[39], '=');
        refalrts::copy_stvar(vm, context[40], context[6]);
        refalrts::copy_stvar(vm, context[41], context[29]);
        refalrts::alloc_char(vm, context[42], '=');
        refalrts::copy_stvar(vm, context[43], context[6]);
        refalrts::alloc_close_bracket(vm, context[44]);
        refalrts::update_ident(context[26], identifiers[ident_s]);
        refalrts::reinit_close_bracket(context[9]);
        refalrts::reinit_open_bracket(context[18]);
        refalrts::reinit_ident(context[23], identifiers[ident_s]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[17], context[24] );
        refalrts::link_brackets( context[18], context[44] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[37], context[10] );
        refalrts::link_brackets( context[38], context[9] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[33] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[24];
        res = refalrts::splice_evar( res, context[41], context[44] );
        res = refalrts::splice_evar( res, context[10], context[23] );
        res = refalrts::splice_evar( res, context[40], context[40] );
        res = refalrts::splice_evar( res, context[6], context[9] );
        res = refalrts::splice_evar( res, context[39], context[39] );
        res = refalrts::splice_evar( res, context[26], context[29] );
        res = refalrts::splice_evar( res, context[38], context[38] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[33], context[37] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 s.R#1/32 e.Pattern-R#1/30 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # OVSYMR/26 s.VarNo#1/29 )/24 e.Commands#1/19 >/1
      context[30] = context[11];
      context[31] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_OVSYMR], context[26] ) )
        continue;
      // closed e.Pattern-L#1 as range 7
      // closed e.Vars#1 as range 15
      // closed e.Commands#1 as range 19
      if( ! refalrts::svar_left( context[32], context[30], context[31] ) )
        continue;
      // closed e.Pattern-R#1 as range 30
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset#1: 25
      //DEBUG: s.VarNo#1: 29
      //DEBUG: e.Pattern-L#1: 7
      //DEBUG: e.Vars#1: 15
      //DEBUG: e.Commands#1: 19
      //DEBUG: s.R#1: 32
      //DEBUG: e.Pattern-R#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.R#1/32 {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } </33 & Inc/34 s.Top#1/6/35 >/36 Tile{ AsIs: (/9 AsIs: e.Pattern-L#1/7 AsIs: )/10 AsIs: (/13 } Tile{ AsIs: s.Top#1/6 } (/37 Tile{ Reuse: # s/26 AsIs: s.VarNo#1/29 } '='/38 s.Top#1/6/39 )/40 Tile{ AsIs: e.Pattern-R#1/30 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 HalfReuse: (/18 HalfReuse: # s/23 } s.VarNo#1/29/41 '='/42 s.Top#1/6/43 )/44 Tile{ AsIs: )/24 AsIs: e.Commands#1/19 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_Inc]);
      refalrts::copy_stvar(vm, context[35], context[6]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::alloc_char(vm, context[38], '=');
      refalrts::copy_stvar(vm, context[39], context[6]);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::copy_stvar(vm, context[41], context[29]);
      refalrts::alloc_char(vm, context[42], '=');
      refalrts::copy_stvar(vm, context[43], context[6]);
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::update_ident(context[26], identifiers[ident_s]);
      refalrts::reinit_open_bracket(context[18]);
      refalrts::reinit_ident(context[23], identifiers[ident_s]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[17], context[24] );
      refalrts::link_brackets( context[18], context[44] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[37], context[40] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[41], context[44] );
      res = refalrts::splice_evar( res, context[14], context[23] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[38], context[40] );
      res = refalrts::splice_evar( res, context[26], context[29] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[6], context[6] );
      res = refalrts::splice_evar( res, context[9], context[13] );
      res = refalrts::splice_evar( res, context[33], context[36] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Pattern-Hole/4 s.new#16/5 s.new#17/6 (/9 e.new#18/27 s.new#19/29 )/10 (/13 e.new#20/11 )/14 (/17 e.new#21/15 )/18 (/23 s.new#22/25 s.new#23/26 e.new#24/21 )/24 e.new#25/19 >/1
      context[27] = context[7];
      context[28] = context[8];
      // closed e.new#20 as range 11
      // closed e.new#21 as range 15
      // closed e.new#24 as range 21
      // closed e.new#25 as range 19
      if( ! refalrts::svar_right( context[29], context[27], context[28] ) )
        continue;
      // closed e.new#18 as range 27
      do {
        // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/27 s.L#1/29 )/10 (/13 s.R#1/32 e.Pattern-R#1/30 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # CL/26 )/24 e.Commands#1/19 >/1
        context[30] = context[11];
        context[31] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_CL], context[26] ) )
          continue;
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        // closed e.Pattern-L#1 as range 27
        // closed e.Vars#1 as range 15
        // closed e.Commands#1 as range 19
        if( ! refalrts::svar_left( context[32], context[30], context[31] ) )
          continue;
        // closed e.Pattern-R#1 as range 30
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.L#1: 29
        //DEBUG: s.Offset#1: 25
        //DEBUG: e.Pattern-L#1: 27
        //DEBUG: e.Vars#1: 15
        //DEBUG: e.Commands#1: 19
        //DEBUG: s.R#1: 32
        //DEBUG: e.Pattern-R#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.L#1/29 {REMOVED TILE} s.R#1/32 {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </26 } Tile{ HalfReuse: [*]/0 Reuse: & Decompile-Pattern-Hole$18=1/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 } Tile{ AsIs: e.Pattern-L#1/27 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Pattern-R#1/30 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: )/24 } {*}/33 s.Top#1/6/34 </35 & Add/36 s.Top#1/6/37 1/38 >/39 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_unwrapped_closure(vm, context[33], context[0]);
        refalrts::copy_stvar(vm, context[34], context[6]);
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::alloc_name(vm, context[36], functions[efunc_Add]);
        refalrts::copy_stvar(vm, context[37], context[6]);
        refalrts::alloc_number(vm, context[38], 1UL);
        refalrts::alloc_close_call(vm, context[39]);
        refalrts::reinit_open_call(context[26]);
        refalrts::reinit_closure_head(context[0]);
        refalrts::update_name(context[4], functions[efunc_gen_Decompilem_Patternm_Hole_S18A1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[35] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[17], context[18] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[33], context[39] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[14], context[23] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[10], context[13] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        refalrts::wrap_closure( context[33] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/27 s.L#1/29 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # OEXP/26 s.IdR#1/32 )/24 e.Commands#1/19 >/1
      context[30] = context[21];
      context[31] = context[22];
      if( ! refalrts::ident_term( identifiers[ident_OEXP], context[26] ) )
        continue;
      // closed e.Pattern-L#1 as range 27
      // closed e.Pattern-R#1 as range 11
      // closed e.Vars#1 as range 15
      // closed e.Commands#1 as range 19
      if( ! refalrts::svar_left( context[32], context[30], context[31] ) )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.L#1: 29
      //DEBUG: s.Offset#1: 25
      //DEBUG: e.Pattern-L#1: 27
      //DEBUG: e.Pattern-R#1: 11
      //DEBUG: e.Vars#1: 15
      //DEBUG: e.Commands#1: 19
      //DEBUG: s.IdR#1: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.L#1/29 {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} s.IdR#1/32 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </33 Tile{ HalfReuse: [*]/26 } Tile{ HalfReuse: & Decompile-Pattern-Hole$19=1/0 HalfReuse: s.IdR1 #32/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 } Tile{ AsIs: e.Pattern-L#1/27 } Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: )/24 } {*}/34 e.Vars#1/15/35 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_unwrapped_closure(vm, context[34], context[26]);
      refalrts::copy_evar(vm, context[35], context[36], context[15], context[16]);
      refalrts::reinit_closure_head(context[26]);
      refalrts::reinit_name(context[0], functions[efunc_gen_Decompilem_Patternm_Hole_S19A1]);
      refalrts::reinit_svar( context[4], context[32] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[33] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[10], context[23] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      refalrts::wrap_closure( context[34] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Pattern-Hole/4 s.new#16/5 s.new#17/6 (/9 e.new#18/7 )/10 (/13 s.new#19/29 e.new#20/27 )/14 (/17 e.new#21/15 )/18 (/23 s.new#22/25 s.new#23/26 e.new#24/21 )/24 e.new#25/19 >/1
      context[27] = context[11];
      context[28] = context[12];
      // closed e.new#18 as range 7
      // closed e.new#21 as range 15
      // closed e.new#24 as range 21
      // closed e.new#25 as range 19
      if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
        continue;
      // closed e.new#20 as range 27
      do {
        // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 s.R#1/29 e.Pattern-R#1/27 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # OEXPR/26 s.IdR#1/32 )/24 e.Commands#1/19 >/1
        context[30] = context[21];
        context[31] = context[22];
        if( ! refalrts::ident_term( identifiers[ident_OEXPR], context[26] ) )
          continue;
        // closed e.Pattern-L#1 as range 7
        // closed e.Pattern-R#1 as range 27
        // closed e.Vars#1 as range 15
        // closed e.Commands#1 as range 19
        if( ! refalrts::svar_left( context[32], context[30], context[31] ) )
          continue;
        if( ! refalrts::empty_seq( context[30], context[31] ) )
          continue;
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.R#1: 29
        //DEBUG: s.Offset#1: 25
        //DEBUG: e.Pattern-L#1: 7
        //DEBUG: e.Pattern-R#1: 27
        //DEBUG: e.Vars#1: 15
        //DEBUG: e.Commands#1: 19
        //DEBUG: s.IdR#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.R#1/29 {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} s.IdR#1/32 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </33 Tile{ HalfReuse: [*]/26 } Tile{ HalfReuse: & Decompile-Pattern-Hole$20=1/0 HalfReuse: s.IdR1 #32/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Pattern-L#1/7 AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Pattern-R#1/27 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: )/24 } {*}/34 e.Vars#1/15/35 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[33]);
        refalrts::alloc_unwrapped_closure(vm, context[34], context[26]);
        refalrts::copy_evar(vm, context[35], context[36], context[15], context[16]);
        refalrts::reinit_closure_head(context[26]);
        refalrts::reinit_name(context[0], functions[efunc_gen_Decompilem_Patternm_Hole_S20A1]);
        refalrts::reinit_svar( context[4], context[32] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[33] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[17], context[18] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[34], context[34] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[14], context[23] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        res = refalrts::splice_evar( res, context[33], context[33] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        refalrts::wrap_closure( context[34] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Decompile-Pattern-Hole/4 s.new#26/5 s.new#27/6 (/9 e.new#28/7 )/10 (/13 s.new#29/29 e.new#30/27 )/14 (/17 e.new#31/15 )/18 (/23 s.new#32/25 s.new#33/26 )/24 e.new#34/19 >/1
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        // closed e.new#28 as range 7
        // closed e.new#30 as range 27
        // closed e.new#31 as range 15
        // closed e.new#34 as range 19
        do {
          // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/30 s.L#1/32 )/10 (/13 s.R#1/29 e.Pattern-R#1/27 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # PS/26 )/24 e.Commands#1/19 >/1
          context[30] = context[7];
          context[31] = context[8];
          if( ! refalrts::ident_term( identifiers[ident_PS], context[26] ) )
            continue;
          // closed e.Pattern-R#1 as range 27
          // closed e.Vars#1 as range 15
          // closed e.Commands#1 as range 19
          if( ! refalrts::svar_right( context[32], context[30], context[31] ) )
            continue;
          // closed e.Pattern-L#1 as range 30
          //DEBUG: s.Level#1: 5
          //DEBUG: s.Top#1: 6
          //DEBUG: s.R#1: 29
          //DEBUG: s.Offset#1: 25
          //DEBUG: e.Pattern-R#1: 27
          //DEBUG: e.Vars#1: 15
          //DEBUG: e.Commands#1: 19
          //DEBUG: s.L#1: 32
          //DEBUG: e.Pattern-L#1: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.L#1/32 {REMOVED TILE} s.R#1/29 {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </26 } Tile{ HalfReuse: [*]/0 Reuse: & Decompile-Pattern-Hole$21=1/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 } Tile{ AsIs: e.Pattern-L#1/30 } Tile{ AsIs: )/10 HalfReuse: s.R1 #29/13 } (/33 Tile{ AsIs: e.Pattern-R#1/27 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: )/24 } {*}/34 s.Top#1/6/35 </36 & Add/37 s.Top#1/6/38 1/39 >/40 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[33]);
          refalrts::alloc_unwrapped_closure(vm, context[34], context[0]);
          refalrts::copy_stvar(vm, context[35], context[6]);
          refalrts::alloc_open_call(vm, context[36]);
          refalrts::alloc_name(vm, context[37], functions[efunc_Add]);
          refalrts::copy_stvar(vm, context[38], context[6]);
          refalrts::alloc_number(vm, context[39], 1UL);
          refalrts::alloc_close_call(vm, context[40]);
          refalrts::reinit_open_call(context[26]);
          refalrts::reinit_closure_head(context[0]);
          refalrts::update_name(context[4], functions[efunc_gen_Decompilem_Patternm_Hole_S21A1]);
          refalrts::reinit_svar( context[13], context[29] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[40] );
          refalrts::push_stack( vm, context[36] );
          refalrts::link_brackets( context[23], context[24] );
          refalrts::link_brackets( context[17], context[18] );
          refalrts::link_brackets( context[33], context[14] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[34], context[40] );
          res = refalrts::splice_evar( res, context[24], context[24] );
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[14], context[23] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          res = refalrts::splice_evar( res, context[33], context[33] );
          res = refalrts::splice_evar( res, context[10], context[13] );
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[0], context[9] );
          res = refalrts::splice_evar( res, context[26], context[26] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          refalrts::wrap_closure( context[34] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 s.R#1/29 e.Pattern-R#1/27 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # PSR/26 )/24 e.Commands#1/19 >/1
        if( ! refalrts::ident_term( identifiers[ident_PSR], context[26] ) )
          continue;
        // closed e.Pattern-L#1 as range 7
        // closed e.Pattern-R#1 as range 27
        // closed e.Vars#1 as range 15
        // closed e.Commands#1 as range 19
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.R#1: 29
        //DEBUG: s.Offset#1: 25
        //DEBUG: e.Pattern-L#1: 7
        //DEBUG: e.Pattern-R#1: 27
        //DEBUG: e.Vars#1: 15
        //DEBUG: e.Commands#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.R#1/29 {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </30 Tile{ HalfReuse: [*]/0 Reuse: & Decompile-Pattern-Hole$22=1/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Pattern-L#1/7 AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Pattern-R#1/27 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: )/24 } Tile{ HalfReuse: {*}/26 } s.Top#1/6/31 </32 & Add/33 s.Top#1/6/34 1/35 >/36 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::copy_stvar(vm, context[31], context[6]);
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[33], functions[efunc_Add]);
        refalrts::copy_stvar(vm, context[34], context[6]);
        refalrts::alloc_number(vm, context[35], 1UL);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::reinit_closure_head(context[0]);
        refalrts::update_name(context[4], functions[efunc_gen_Decompilem_Patternm_Hole_S22A1]);
        refalrts::reinit_unwrapped_closure(context[26], context[0]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[32] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[17], context[18] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[31], context[36] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[14], context[23] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[30], context[30] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        refalrts::wrap_closure( context[26] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Pattern-Hole/4 s.new#26/5 s.new#27/6 (/9 e.new#28/30 s.new#29/32 )/10 (/13 s.new#30/29 e.new#31/27 )/14 (/17 e.new#32/15 )/18 (/23 s.new#33/25 s.new#34/26 e.new#35/21 )/24 e.new#36/19 >/1
      context[30] = context[7];
      context[31] = context[8];
      // closed e.new#31 as range 27
      // closed e.new#32 as range 15
      // closed e.new#35 as range 21
      // closed e.new#36 as range 19
      if( ! refalrts::svar_right( context[32], context[30], context[31] ) )
        continue;
      // closed e.new#28 as range 30
      do {
        // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/30 s.L#1/32 )/10 (/13 s.R#1/29 e.Pattern-R#1/27 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # SETB/26 s.NewL#1/35 s.NewR#1/36 )/24 e.Commands#1/19 >/1
        context[33] = context[21];
        context[34] = context[22];
        if( ! refalrts::ident_term( identifiers[ident_SETB], context[26] ) )
          continue;
        // closed e.Pattern-L#1 as range 30
        // closed e.Pattern-R#1 as range 27
        // closed e.Vars#1 as range 15
        // closed e.Commands#1 as range 19
        if( ! refalrts::svar_left( context[35], context[33], context[34] ) )
          continue;
        if( ! refalrts::svar_left( context[36], context[33], context[34] ) )
          continue;
        if( ! refalrts::empty_seq( context[33], context[34] ) )
          continue;
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.L#1: 32
        //DEBUG: s.R#1: 29
        //DEBUG: s.Offset#1: 25
        //DEBUG: e.Pattern-L#1: 30
        //DEBUG: e.Pattern-R#1: 27
        //DEBUG: e.Vars#1: 15
        //DEBUG: e.Commands#1: 19
        //DEBUG: s.NewL#1: 35
        //DEBUG: s.NewR#1: 36

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.L#1/32 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-NoHole/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 } Tile{ AsIs: e.Pattern-L#1/30 } (/37 Tile{ HalfReuse: # Hole/10 HalfReuse: s.L1 #32/13 AsIs: s.R#1/29 } )/38 Tile{ AsIs: e.Pattern-R#1/27 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 AsIs: (/23 AsIs: s.Offset#1/25 AsIs: # SETB/26 AsIs: s.NewL#1/35 AsIs: s.NewR#1/36 AsIs: )/24 AsIs: e.Commands#1/19 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[37]);
        refalrts::alloc_close_bracket(vm, context[38]);
        refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_NoHole]);
        refalrts::reinit_ident(context[10], identifiers[ident_Hole]);
        refalrts::reinit_svar( context[13], context[32] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[17], context[18] );
        refalrts::link_brackets( context[9], context[14] );
        refalrts::link_brackets( context[37], context[38] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[14];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[38], context[38] );
        res = refalrts::splice_evar( res, context[10], context[29] );
        res = refalrts::splice_evar( res, context[37], context[37] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/30 s.L#1/32 )/10 (/13 s.R#1/29 e.Pattern-R#1/27 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # EMP/26 )/24 e.Commands#1/19 >/1
      if( ! refalrts::ident_term( identifiers[ident_EMP], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.Pattern-L#1 as range 30
      // closed e.Pattern-R#1 as range 27
      // closed e.Vars#1 as range 15
      // closed e.Commands#1 as range 19
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.L#1: 32
      //DEBUG: s.R#1: 29
      //DEBUG: s.Offset#1: 25
      //DEBUG: e.Pattern-L#1: 30
      //DEBUG: e.Pattern-R#1: 27
      //DEBUG: e.Vars#1: 15
      //DEBUG: e.Commands#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.L#1/32 )/10 (/13 s.R#1/29 {REMOVED TILE} {REMOVED TILE} (/23 s.Offset#1/25 # EMP/26 )/24 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-NoHole/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 } Tile{ AsIs: e.Pattern-L#1/30 } Tile{ AsIs: e.Pattern-R#1/27 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_NoHole]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[9], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[18] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Pattern-Hole/4 s.new#16/5 s.new#17/6 (/9 e.new#18/7 )/10 (/13 e.new#19/11 )/14 (/17 e.new#20/15 )/18 (/23 s.new#21/25 s.new#22/26 )/24 e.new#23/19 >/1
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.new#18 as range 7
      // closed e.new#19 as range 11
      // closed e.new#20 as range 15
      // closed e.new#23 as range 19
      do {
        // </0 & Decompile-Pattern-Hole/4 s.new#24/5 s.new#25/6 (/9 e.new#26/27 s.new#27/35 )/10 (/13 e.new#28/11 )/14 (/17 e.new#29/15 )/18 (/23 s.new#30/25 s.new#31/26 )/24 (/33 e.new#32/31 s.new#33/37 s.new#34/36 )/34 e.new#35/29 >/1
        context[27] = context[7];
        context[28] = context[8];
        context[29] = context[19];
        context[30] = context[20];
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
        if( ! context[33] )
          continue;
        refalrts::bracket_pointers(context[33], context[34]);
        // closed e.new#28 as range 11
        // closed e.new#29 as range 15
        // closed e.new#35 as range 29
        if( ! refalrts::svar_right( context[35], context[27], context[28] ) )
          continue;
        // closed e.new#26 as range 27
        if( ! refalrts::svar_right( context[36], context[31], context[32] ) )
          continue;
        if( ! refalrts::svar_right( context[37], context[31], context[32] ) )
          continue;
        // closed e.new#32 as range 31
        do {
          // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/27 s.L#1/35 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset1#1/25 # PLEN/26 )/24 (/33 s.Offset2#1/37 # LEN/36 )/34 e.Commands#1/29 >/1
          if( ! refalrts::ident_term( identifiers[ident_PLEN], context[26] ) )
            continue;
          if( ! refalrts::ident_term( identifiers[ident_LEN], context[36] ) )
            continue;
          if( ! refalrts::empty_seq( context[31], context[32] ) )
            continue;
          // closed e.Pattern-L#1 as range 27
          // closed e.Pattern-R#1 as range 11
          // closed e.Vars#1 as range 15
          // closed e.Commands#1 as range 29
          //DEBUG: s.Level#1: 5
          //DEBUG: s.Top#1: 6
          //DEBUG: s.L#1: 35
          //DEBUG: s.Offset1#1: 25
          //DEBUG: s.Offset2#1: 37
          //DEBUG: e.Pattern-L#1: 27
          //DEBUG: e.Pattern-R#1: 11
          //DEBUG: e.Vars#1: 15
          //DEBUG: e.Commands#1: 29

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.L#1/35 {REMOVED TILE} s.Offset1#1/25 {REMOVED TILE} {REMOVED TILE} s.Offset2#1/37 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </26 } Tile{ HalfReuse: [*]/0 Reuse: & Decompile-Pattern-Hole$25=1/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 } Tile{ AsIs: e.Pattern-L#1/27 } Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Commands#1/29 } Tile{ AsIs: )/24 HalfReuse: {*}/33 } s.Top#1/6/38 </39 Tile{ HalfReuse: & Add/36 HalfReuse: s.Top1 #6/34 } 1/40 >/41 Tile{ AsIs: >/1 ]] }
          refalrts::copy_stvar(vm, context[38], context[6]);
          refalrts::alloc_open_call(vm, context[39]);
          refalrts::alloc_number(vm, context[40], 1UL);
          refalrts::alloc_close_call(vm, context[41]);
          refalrts::reinit_open_call(context[26]);
          refalrts::reinit_closure_head(context[0]);
          refalrts::update_name(context[4], functions[efunc_gen_Decompilem_Patternm_Hole_S25A1]);
          refalrts::reinit_unwrapped_closure(context[33], context[0]);
          refalrts::reinit_name(context[36], functions[efunc_Add]);
          refalrts::reinit_svar( context[34], context[6] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[41] );
          refalrts::push_stack( vm, context[39] );
          refalrts::link_brackets( context[23], context[24] );
          refalrts::link_brackets( context[17], context[18] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[40], context[41] );
          res = refalrts::splice_evar( res, context[36], context[34] );
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[24], context[33] );
          res = refalrts::splice_evar( res, context[29], context[30] );
          res = refalrts::splice_evar( res, context[10], context[23] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          res = refalrts::splice_evar( res, context[0], context[9] );
          res = refalrts::splice_evar( res, context[26], context[26] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          refalrts::wrap_closure( context[33] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/27 s.L#1/35 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset1#1/25 # PLENS/26 )/24 (/33 s.Offset2#1/40 # LENS/37 s.Char#1/36 )/34 e.Commands#1/29 >/1
          context[38] = context[31];
          context[39] = context[32];
          if( ! refalrts::ident_term( identifiers[ident_PLENS], context[26] ) )
            continue;
          if( ! refalrts::ident_term( identifiers[ident_LENS], context[37] ) )
            continue;
          // closed e.Pattern-L#1 as range 27
          // closed e.Pattern-R#1 as range 11
          // closed e.Vars#1 as range 15
          // closed e.Commands#1 as range 29
          if( ! refalrts::svar_left( context[40], context[38], context[39] ) )
            continue;
          if( ! refalrts::empty_seq( context[38], context[39] ) )
            continue;
          //DEBUG: s.Level#1: 5
          //DEBUG: s.Top#1: 6
          //DEBUG: s.L#1: 35
          //DEBUG: s.Offset1#1: 25
          //DEBUG: s.Char#1: 36
          //DEBUG: e.Pattern-L#1: 27
          //DEBUG: e.Pattern-R#1: 11
          //DEBUG: e.Vars#1: 15
          //DEBUG: e.Commands#1: 29
          //DEBUG: s.Offset2#1: 40

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.L#1/35 {REMOVED TILE} s.Offset1#1/25 {REMOVED TILE} {REMOVED TILE} s.Offset2#1/40 {REMOVED TILE} s.Char#1/36 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </26 } Tile{ HalfReuse: [*]/0 Reuse: & Decompile-Pattern-Hole$26=1/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 } Tile{ AsIs: e.Pattern-L#1/27 } Tile{ AsIs: )/34 } Tile{ HalfReuse: s.Char1 #36/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Commands#1/29 } Tile{ AsIs: )/24 HalfReuse: {*}/33 } s.Top#1/6/41 Tile{ HalfReuse: </37 } & Add/42 s.Top#1/6/43 1/44 >/45 </46 & Add/47 s.Top#1/6/48 2/49 >/50 Tile{ AsIs: >/1 ]] }
          refalrts::copy_stvar(vm, context[41], context[6]);
          refalrts::alloc_name(vm, context[42], functions[efunc_Add]);
          refalrts::copy_stvar(vm, context[43], context[6]);
          refalrts::alloc_number(vm, context[44], 1UL);
          refalrts::alloc_close_call(vm, context[45]);
          refalrts::alloc_open_call(vm, context[46]);
          refalrts::alloc_name(vm, context[47], functions[efunc_Add]);
          refalrts::copy_stvar(vm, context[48], context[6]);
          refalrts::alloc_number(vm, context[49], 2UL);
          refalrts::alloc_close_call(vm, context[50]);
          refalrts::reinit_open_call(context[26]);
          refalrts::reinit_closure_head(context[0]);
          refalrts::update_name(context[4], functions[efunc_gen_Decompilem_Patternm_Hole_S26A1]);
          refalrts::reinit_svar( context[10], context[36] );
          refalrts::reinit_unwrapped_closure(context[33], context[0]);
          refalrts::reinit_open_call(context[37]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[50] );
          refalrts::push_stack( vm, context[46] );
          refalrts::push_stack( vm, context[45] );
          refalrts::push_stack( vm, context[37] );
          refalrts::link_brackets( context[23], context[24] );
          refalrts::link_brackets( context[17], context[18] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[9], context[34] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[42], context[50] );
          res = refalrts::splice_evar( res, context[37], context[37] );
          res = refalrts::splice_evar( res, context[41], context[41] );
          res = refalrts::splice_evar( res, context[24], context[33] );
          res = refalrts::splice_evar( res, context[29], context[30] );
          res = refalrts::splice_evar( res, context[10], context[23] );
          res = refalrts::splice_evar( res, context[34], context[34] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          res = refalrts::splice_evar( res, context[0], context[9] );
          res = refalrts::splice_evar( res, context[26], context[26] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          refalrts::wrap_closure( context[33] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/27 s.L#1/35 )/10 (/13 s.R#1/40 e.Pattern-R#1/38 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset1#1/25 # PLENP/26 )/24 (/33 s.Offset2#1/37 # LENP/36 )/34 e.Commands#1/29 >/1
        context[38] = context[11];
        context[39] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_PLENP], context[26] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_LENP], context[36] ) )
          continue;
        if( ! refalrts::empty_seq( context[31], context[32] ) )
          continue;
        // closed e.Pattern-L#1 as range 27
        // closed e.Vars#1 as range 15
        // closed e.Commands#1 as range 29
        if( ! refalrts::svar_left( context[40], context[38], context[39] ) )
          continue;
        // closed e.Pattern-R#1 as range 38
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.L#1: 35
        //DEBUG: s.Offset1#1: 25
        //DEBUG: s.Offset2#1: 37
        //DEBUG: e.Pattern-L#1: 27
        //DEBUG: e.Vars#1: 15
        //DEBUG: e.Commands#1: 29
        //DEBUG: s.R#1: 40
        //DEBUG: e.Pattern-R#1: 38

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.L#1/35 {REMOVED TILE} s.R#1/40 {REMOVED TILE} {REMOVED TILE} s.Offset1#1/25 {REMOVED TILE} s.Offset2#1/37 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </41 Tile{ HalfReuse: [*]/0 Reuse: & Decompile-Pattern-Hole$27=1/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 } Tile{ AsIs: e.Pattern-L#1/27 } Tile{ HalfReuse: )/26 HalfReuse: s.R1 #40/24 AsIs: (/33 } Tile{ AsIs: e.Pattern-R#1/38 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 AsIs: (/23 } Tile{ AsIs: e.Commands#1/29 } Tile{ AsIs: )/10 HalfReuse: {*}/13 } s.Top#1/6/42 Tile{ HalfReuse: </36 HalfReuse: & Add/34 } s.Top#1/6/43 1/44 >/45 </46 & Add/47 s.Top#1/6/48 2/49 >/50 </51 & Add/52 s.Top#1/6/53 3/54 >/55 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[41]);
        refalrts::copy_stvar(vm, context[42], context[6]);
        refalrts::copy_stvar(vm, context[43], context[6]);
        refalrts::alloc_number(vm, context[44], 1UL);
        refalrts::alloc_close_call(vm, context[45]);
        refalrts::alloc_open_call(vm, context[46]);
        refalrts::alloc_name(vm, context[47], functions[efunc_Add]);
        refalrts::copy_stvar(vm, context[48], context[6]);
        refalrts::alloc_number(vm, context[49], 2UL);
        refalrts::alloc_close_call(vm, context[50]);
        refalrts::alloc_open_call(vm, context[51]);
        refalrts::alloc_name(vm, context[52], functions[efunc_Add]);
        refalrts::copy_stvar(vm, context[53], context[6]);
        refalrts::alloc_number(vm, context[54], 3UL);
        refalrts::alloc_close_call(vm, context[55]);
        refalrts::reinit_closure_head(context[0]);
        refalrts::update_name(context[4], functions[efunc_gen_Decompilem_Patternm_Hole_S27A1]);
        refalrts::reinit_close_bracket(context[26]);
        refalrts::reinit_svar( context[24], context[40] );
        refalrts::reinit_unwrapped_closure(context[13], context[0]);
        refalrts::reinit_open_call(context[36]);
        refalrts::reinit_name(context[34], functions[efunc_Add]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[55] );
        refalrts::push_stack( vm, context[51] );
        refalrts::push_stack( vm, context[50] );
        refalrts::push_stack( vm, context[46] );
        refalrts::push_stack( vm, context[45] );
        refalrts::push_stack( vm, context[36] );
        refalrts::link_brackets( context[23], context[10] );
        refalrts::link_brackets( context[17], context[18] );
        refalrts::link_brackets( context[33], context[14] );
        refalrts::link_brackets( context[9], context[26] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[43], context[55] );
        res = refalrts::splice_evar( res, context[36], context[34] );
        res = refalrts::splice_evar( res, context[42], context[42] );
        res = refalrts::splice_evar( res, context[10], context[13] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[14], context[23] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[26], context[33] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[41], context[41] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        refalrts::wrap_closure( context[13] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # STLEN/26 )/24 e.Commands#1/19 >/1
      if( ! refalrts::ident_term( identifiers[ident_STLEN], context[26] ) )
        continue;
      // closed e.Pattern-L#1 as range 7
      // closed e.Pattern-R#1 as range 11
      // closed e.Vars#1 as range 15
      // closed e.Commands#1 as range 19
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset#1: 25
      //DEBUG: e.Pattern-L#1: 7
      //DEBUG: e.Pattern-R#1: 11
      //DEBUG: e.Vars#1: 15
      //DEBUG: e.Commands#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/23 } Tile{ Reuse: # StartBlock/26 AsIs: )/24 } </27 & Decompile-Pattern-Hole/28 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Level#1/5 } >/29 Tile{ AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Pattern-L#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_Decompilem_Patternm_Hole]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::update_ident(context[26], identifiers[ident_StartBlock]);
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[6], context[18] );
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[26], context[24] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 (/23 s.Offset#1/25 # LABEL/26 e.BlockName#1/21 )/24 e.Commands#1/19 >/1
    if( ! refalrts::ident_term( identifiers[ident_LABEL], context[26] ) )
      continue;
    // closed e.Pattern-L#1 as range 7
    // closed e.Pattern-R#1 as range 11
    // closed e.Vars#1 as range 15
    // closed e.BlockName#1 as range 21
    // closed e.Commands#1 as range 19
    //DEBUG: s.Level#1: 5
    //DEBUG: s.Top#1: 6
    //DEBUG: s.Offset#1: 25
    //DEBUG: e.Pattern-L#1: 7
    //DEBUG: e.Pattern-R#1: 11
    //DEBUG: e.Vars#1: 15
    //DEBUG: e.BlockName#1: 21
    //DEBUG: e.Commands#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/23 s.Offset#1/25 # LABEL/26 e.BlockName#1/21 )/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Pattern-L#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 } Tile{ AsIs: e.Commands#1/19 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[18], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 s.L#1/23 )/10 (/13 s.R#1/24 )/14 (/17 )/18 >/1
    context[19] = context[7];
    context[20] = context[8];
    context[21] = context[11];
    context[22] = context[12];
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[24], context[21], context[22] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    //DEBUG: s.Level#1: 5
    //DEBUG: s.Top#1: 6
    //DEBUG: s.L#1: 23
    //DEBUG: s.R#1: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 s.L#1/23 )/10 (/13 s.R#1/24 )/14 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/17 HalfReuse: # EndOfFunction/18 HalfReuse: )/1 ]] }
    refalrts::reinit_ident(context[18], identifiers[ident_EndOfFunction]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[17], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Decompile-Pattern-Hole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/7 )/10 (/13 e.Pattern-R#1/11 )/14 (/17 e.Vars#1/15 )/18 e.Commands#1/2 >/1
  // closed e.Pattern-L#1 as range 7
  // closed e.Pattern-R#1 as range 11
  // closed e.Vars#1 as range 15
  // closed e.Commands#1 as range 2
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#1: 6
  //DEBUG: e.Pattern-L#1: 7
  //DEBUG: e.Pattern-R#1: 11
  //DEBUG: e.Vars#1: 15
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/19 '='/20 Tile{ HalfReuse: 'A'/0 HalfReuse: ' '/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Pattern-L#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Pattern-R#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Vars#1/15 AsIs: )/18 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Commands#1/2 } Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_char(vm, context[20], '=');
  refalrts::reinit_char(context[0], 'A');
  refalrts::reinit_char(context[4], ' ');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[19], context[1] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[0], context[18] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Decompilem_Patternm_Hole("Decompile-Pattern-Hole", 982870901U, 3115847316U, func_Decompilem_Patternm_Hole);


static refalrts::FnResult func_Rev(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Rev/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Rev/4 t.First#1/7 e.Middle#1/5 t.Last#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    context[10] = refalrts::tvar_right( context[9], context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Middle#1 as range 5
    //DEBUG: t.First#1: 7
    //DEBUG: t.Last#1: 9
    //DEBUG: e.Middle#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Last#1/9 } Tile{ AsIs: </0 AsIs: & Rev/4 } Tile{ AsIs: e.Middle#1/5 } Tile{ AsIs: >/1 } Tile{ AsIs: t.First#1/7 } Tile{ ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Rev/4 e.ZeroOrOne#1/2 >/1
  // closed e.ZeroOrOne#1 as range 2
  //DEBUG: e.ZeroOrOne#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Rev/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ZeroOrOne#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Rev("Rev", 982870901U, 3115847316U, func_Rev);


static refalrts::FnResult func_Decompilem_Patternm_NoHole(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & Decompile-Pattern-NoHole/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Decompile-Pattern-NoHole/4 s.new#1/5 s.new#2/6 (/9 e.new#3/7 )/10 (/13 e.new#4/11 )/14 e.new#5/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new#3 as range 7
  // closed e.new#4 as range 11
  // closed e.new#5 as range 2
  do {
    // </0 & Decompile-Pattern-NoHole/4 s.new#6/5 s.new#7/6 (/9 e.new#8/7 )/10 (/13 e.new#9/11 )/14 (/19 s.new#10/21 s.new#11/22 e.new#12/17 )/20 e.new#13/15 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.new#8 as range 7
    // closed e.new#9 as range 11
    // closed e.new#13 as range 15
    if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    // closed e.new#12 as range 17
    do {
      // </0 & Decompile-Pattern-NoHole/4 s.new#14/5 s.new#15/6 (/9 e.new#16/7 )/10 (/13 e.new#17/11 )/14 (/19 s.new#18/21 s.new#19/22 e.new#20/23 s.new#21/25 )/20 e.new#22/15 >/1
      context[23] = context[17];
      context[24] = context[18];
      // closed e.new#16 as range 7
      // closed e.new#17 as range 11
      // closed e.new#22 as range 15
      if( ! refalrts::svar_right( context[25], context[23], context[24] ) )
        continue;
      // closed e.new#20 as range 23
      do {
        // </0 & Decompile-Pattern-NoHole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern-L#1/31 (/37 # Hole/39 s.L#1/40 s.R#1/41 )/38 e.Pattern-R#1/33 )/10 (/13 e.Vars#1/11 )/14 (/19 s.Offset#1/21 # SETB/22 s.L#1/30 s.R#1/25 )/20 e.Commands#1/15 >/1
        context[26] = context[7];
        context[27] = context[8];
        context[28] = context[23];
        context[29] = context[24];
        if( ! refalrts::ident_term( identifiers[ident_SETB], context[22] ) )
          continue;
        // closed e.Vars#1 as range 11
        // closed e.Commands#1 as range 15
        if( ! refalrts::svar_left( context[30], context[28], context[29] ) )
          continue;
        if( ! refalrts::empty_seq( context[28], context[29] ) )
          continue;
        context[31] = 0;
        context[32] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[33] = context[26];
          context[34] = context[27];
          context[35] = 0;
          context[36] = 0;
          context[37] = refalrts::brackets_left( context[35], context[36], context[33], context[34] );
          if( ! context[37] )
            continue;
          refalrts::bracket_pointers(context[37], context[38]);
          context[39] = refalrts::ident_left( identifiers[ident_Hole], context[35], context[36] );
          if( ! context[39] )
            continue;
          if( ! refalrts::repeated_stvar_left( vm, context[40], context[30], context[35], context[36] ) )
            continue;
          if( ! refalrts::repeated_stvar_left( vm, context[41], context[25], context[35], context[36] ) )
            continue;
          if( ! refalrts::empty_seq( context[35], context[36] ) )
            continue;
          // closed e.Pattern-R#1 as range 33
          //DEBUG: s.Level#1: 5
          //DEBUG: s.Top#1: 6
          //DEBUG: s.Offset#1: 21
          //DEBUG: s.R#1: 25
          //DEBUG: e.Vars#1: 11
          //DEBUG: e.Commands#1: 15
          //DEBUG: s.L#1: 30
          //DEBUG: e.Pattern-L#1: 31
          //DEBUG: e.Pattern-R#1: 33

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.L#1/40 s.R#1/41 {REMOVED TILE} {REMOVED TILE} s.Offset#1/21 # SETB/22 s.L#1/30 s.R#1/25 )/20 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Pattern-L#1/31 HalfReuse: s.L1 #40/37 HalfReuse: )/39 } Tile{ AsIs: (/19 } Tile{ HalfReuse: s.R1 #41/38 AsIs: e.Pattern-R#1/33 AsIs: )/10 AsIs: (/13 AsIs: e.Vars#1/11 AsIs: )/14 } Tile{ AsIs: e.Commands#1/15 } Tile{ AsIs: >/1 ]] }
          refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_Hole]);
          refalrts::reinit_svar( context[37], context[40] );
          refalrts::reinit_close_bracket(context[39]);
          refalrts::reinit_svar( context[38], context[41] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[19], context[10] );
          refalrts::link_brackets( context[9], context[39] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[15], context[16] );
          res = refalrts::splice_evar( res, context[38], context[14] );
          res = refalrts::splice_evar( res, context[19], context[19] );
          refalrts::splice_to_freelist_open( vm, context[39], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[31], context[32], context[26], context[27] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Pattern-NoHole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern#1/7 )/10 (/13 e.Vars#1/11 )/14 (/19 s.Offset#1/21 # RDY/22 0/25 )/20 e.Commands#1/15 >/1
      if( ! refalrts::ident_term( identifiers[ident_RDY], context[22] ) )
        continue;
      if( ! refalrts::number_term( 0UL, context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[23], context[24] ) )
        continue;
      // closed e.Pattern#1 as range 7
      // closed e.Vars#1 as range 11
      // closed e.Commands#1 as range 15
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset#1: 21
      //DEBUG: e.Pattern#1: 7
      //DEBUG: e.Vars#1: 11
      //DEBUG: e.Commands#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#1/21 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } Tile{ HalfReuse: # Pattern/19 } s.Level#1/5/26 Tile{ AsIs: e.Pattern#1/7 } Tile{ AsIs: )/14 } Tile{ AsIs: </0 Reuse: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 } Tile{ AsIs: e.Vars#1/11 } Tile{ AsIs: )/10 } Tile{ HalfReuse: (/22 HalfReuse: '$'/25 AsIs: )/20 AsIs: e.Commands#1/15 AsIs: >/1 ]] }
      refalrts::copy_stvar(vm, context[26], context[5]);
      refalrts::reinit_ident(context[19], identifiers[ident_Pattern]);
      refalrts::update_name(context[4], functions[efunc_Decompilem_Result]);
      refalrts::reinit_open_bracket(context[22]);
      refalrts::reinit_char(context[25], '$');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[22], context[20] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[22];
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Pattern-NoHole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern#1/7 )/10 (/13 e.Vars#1/11 )/14 (/19 s.Offset#1/21 # PUSHVF/22 )/20 e.Commands#1/15 >/1
      if( ! refalrts::ident_term( identifiers[ident_PUSHVF], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.Pattern#1 as range 7
      // closed e.Vars#1 as range 11
      // closed e.Commands#1 as range 15
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset#1: 21
      //DEBUG: e.Pattern#1: 7
      //DEBUG: e.Vars#1: 11
      //DEBUG: e.Commands#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#1/21 {REMOVED TILE}
      //RESULT: Tile{ [[ } (/23 # Pattern/24 s.Level#1/5/25 Tile{ AsIs: e.Pattern#1/7 } Tile{ AsIs: )/10 AsIs: (/13 } # StartCondition/26 )/27 Tile{ AsIs: </0 Reuse: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 } Tile{ AsIs: e.Vars#1/11 } Tile{ AsIs: )/14 AsIs: (/19 } Tile{ HalfReuse: '$'/22 AsIs: )/20 AsIs: e.Commands#1/15 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[23]);
      refalrts::alloc_ident(vm, context[24], identifiers[ident_Pattern]);
      refalrts::copy_stvar(vm, context[25], context[5]);
      refalrts::alloc_ident(vm, context[26], identifiers[ident_StartCondition]);
      refalrts::alloc_close_bracket(vm, context[27]);
      refalrts::update_name(context[4], functions[efunc_Decompilem_Result]);
      refalrts::reinit_char(context[22], '$');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[9], context[14] );
      refalrts::link_brackets( context[13], context[27] );
      refalrts::link_brackets( context[23], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[22];
      res = refalrts::splice_evar( res, context[14], context[19] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[10], context[13] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Pattern-NoHole/4 s.new#14/5 s.new#15/6 (/9 e.new#16/7 )/10 (/13 e.new#17/11 )/14 (/19 s.new#18/21 s.new#19/22 s.new#20/25 e.new#21/23 )/20 e.new#22/15 >/1
      context[23] = context[17];
      context[24] = context[18];
      // closed e.new#16 as range 7
      // closed e.new#17 as range 11
      // closed e.new#22 as range 15
      if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
        continue;
      // closed e.new#21 as range 23
      do {
        // </0 & Decompile-Pattern-NoHole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern#1/7 )/10 (/13 e.Vars#1/11 )/14 (/19 s.Offset#1/21 # TRAN/22 s.Jump#1/25 )/20 e.Commands-B#1/28 (/34 s.Jump#1/36 e.Command#1/32 )/35 e.Commands-E#1/30 >/1
        context[26] = context[15];
        context[27] = context[16];
        if( ! refalrts::ident_term( identifiers[ident_TRAN], context[22] ) )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        // closed e.Pattern#1 as range 7
        // closed e.Vars#1 as range 11
        context[28] = 0;
        context[29] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[30] = context[26];
          context[31] = context[27];
          context[32] = 0;
          context[33] = 0;
          context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
          if( ! context[34] )
            continue;
          refalrts::bracket_pointers(context[34], context[35]);
          if( ! refalrts::repeated_stvar_left( vm, context[36], context[25], context[32], context[33] ) )
            continue;
          // closed e.Command#1 as range 32
          // closed e.Commands-E#1 as range 30
          //DEBUG: s.Level#1: 5
          //DEBUG: s.Top#1: 6
          //DEBUG: s.Offset#1: 21
          //DEBUG: s.Jump#1: 25
          //DEBUG: e.Pattern#1: 7
          //DEBUG: e.Vars#1: 11
          //DEBUG: e.Commands-B#1: 28
          //DEBUG: e.Command#1: 32
          //DEBUG: e.Commands-E#1: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#1/21 {REMOVED TILE} s.Jump#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Pattern-NoHole/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Pattern#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Vars#1/11 AsIs: )/14 } Tile{ AsIs: e.Commands-B#1/28 } Tile{ AsIs: (/19 } '@'/37 Tile{ Reuse: # Restore-NoHole/22 } s.Level#1/5/38 s.Top#1/6/39 (/40 e.Pattern#1/7/41 Tile{ AsIs: )/20 } (/43 e.Vars#1/11/44 )/46 )/47 Tile{ AsIs: (/34 AsIs: s.Jump#1/36 AsIs: e.Command#1/32 AsIs: )/35 AsIs: e.Commands-E#1/30 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[37], '@');
          refalrts::copy_stvar(vm, context[38], context[5]);
          refalrts::copy_stvar(vm, context[39], context[6]);
          refalrts::alloc_open_bracket(vm, context[40]);
          refalrts::copy_evar(vm, context[41], context[42], context[7], context[8]);
          refalrts::alloc_open_bracket(vm, context[43]);
          refalrts::copy_evar(vm, context[44], context[45], context[11], context[12]);
          refalrts::alloc_close_bracket(vm, context[46]);
          refalrts::alloc_close_bracket(vm, context[47]);
          refalrts::update_ident(context[22], identifiers[ident_Restorem_NoHole]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[34], context[35] );
          refalrts::link_brackets( context[19], context[47] );
          refalrts::link_brackets( context[43], context[46] );
          refalrts::link_brackets( context[40], context[20] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[34];
          res = refalrts::splice_evar( res, context[43], context[47] );
          res = refalrts::splice_evar( res, context[20], context[20] );
          res = refalrts::splice_evar( res, context[41], context[42] );
          res = refalrts::splice_evar( res, context[38], context[40] );
          res = refalrts::splice_evar( res, context[22], context[22] );
          res = refalrts::splice_evar( res, context[37], context[37] );
          res = refalrts::splice_evar( res, context[19], context[19] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          refalrts::splice_to_freelist_open( vm, context[14], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[28], context[29], context[26], context[27] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Pattern-NoHole/4 s.new#23/5 s.new#24/6 (/9 e.new#25/7 )/10 (/13 e.new#26/11 )/14 (/19 '@'/21 s.new#27/22 s.new#28/25 s.new#29/36 e.new#30/26 (/34 e.new#31/32 )/35 (/30 e.new#32/28 )/31 )/20 e.new#33/15 >/1
      context[26] = context[23];
      context[27] = context[24];
      if( ! refalrts::char_term( '@', context[21] ) )
        continue;
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_right( context[28], context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_right( context[32], context[33], context[26], context[27] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      // closed e.new#25 as range 7
      // closed e.new#26 as range 11
      // closed e.new#31 as range 32
      // closed e.new#32 as range 28
      // closed e.new#33 as range 15
      if( ! refalrts::svar_left( context[36], context[26], context[27] ) )
        continue;
      // closed e.new#30 as range 26
      do {
        // </0 & Decompile-Pattern-NoHole/4 s.Level1#1/5 s.Top1#1/6 (/9 e.Pattern1#1/7 )/10 (/13 e.Vars1#1/11 )/14 (/19 '@'/21 # Restore-Hole/22 s.Level2#1/25 s.Top2#1/36 (/41 e.Pattern-L2#1/39 )/42 (/34 e.Pattern-R2#1/32 )/35 (/30 e.Vars2#1/28 )/31 )/20 e.Commands#1/15 >/1
        context[37] = context[26];
        context[38] = context[27];
        if( ! refalrts::ident_term( identifiers[ident_Restorem_Hole], context[22] ) )
          continue;
        context[39] = 0;
        context[40] = 0;
        context[41] = refalrts::brackets_left( context[39], context[40], context[37], context[38] );
        if( ! context[41] )
          continue;
        refalrts::bracket_pointers(context[41], context[42]);
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        // closed e.Pattern1#1 as range 7
        // closed e.Vars1#1 as range 11
        // closed e.Pattern-L2#1 as range 39
        // closed e.Pattern-R2#1 as range 32
        // closed e.Vars2#1 as range 28
        // closed e.Commands#1 as range 15
        //DEBUG: s.Level1#1: 5
        //DEBUG: s.Top1#1: 6
        //DEBUG: s.Level2#1: 25
        //DEBUG: s.Top2#1: 36
        //DEBUG: e.Pattern1#1: 7
        //DEBUG: e.Vars1#1: 11
        //DEBUG: e.Pattern-L2#1: 39
        //DEBUG: e.Pattern-R2#1: 32
        //DEBUG: e.Vars2#1: 28
        //DEBUG: e.Commands#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Decompile-Pattern-NoHole/4 s.Level1#1/5 s.Top1#1/6 (/9 e.Pattern1#1/7 )/10 (/13 e.Vars1#1/11 )/14 (/19 {REMOVED TILE} )/20 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </21 HalfReuse: & Decompile-Pattern-Hole/22 AsIs: s.Level2#1/25 AsIs: s.Top2#1/36 AsIs: (/41 AsIs: e.Pattern-L2#1/39 AsIs: )/42 AsIs: (/34 AsIs: e.Pattern-R2#1/32 AsIs: )/35 AsIs: (/30 AsIs: e.Vars2#1/28 AsIs: )/31 } Tile{ AsIs: e.Commands#1/15 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[21]);
        refalrts::reinit_name(context[22], functions[efunc_Decompilem_Patternm_Hole]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[21] );
        refalrts::link_brackets( context[30], context[31] );
        refalrts::link_brackets( context[34], context[35] );
        refalrts::link_brackets( context[41], context[42] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[21], context[31] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Pattern-NoHole/4 s.Level1#1/5 s.Top1#1/6 (/9 e.Pattern1#1/7 )/10 (/13 e.Vars1#1/11 )/14 (/19 '@'/21 # Restore-NoHole/22 s.Level2#1/25 s.Top2#1/36 (/34 e.Pattern2#1/32 )/35 (/30 e.Vars2#1/28 )/31 )/20 e.Commands#1/15 >/1
      if( ! refalrts::ident_term( identifiers[ident_Restorem_NoHole], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      // closed e.Pattern1#1 as range 7
      // closed e.Vars1#1 as range 11
      // closed e.Pattern2#1 as range 32
      // closed e.Vars2#1 as range 28
      // closed e.Commands#1 as range 15
      //DEBUG: s.Level1#1: 5
      //DEBUG: s.Top1#1: 6
      //DEBUG: s.Level2#1: 25
      //DEBUG: s.Top2#1: 36
      //DEBUG: e.Pattern1#1: 7
      //DEBUG: e.Vars1#1: 11
      //DEBUG: e.Pattern2#1: 32
      //DEBUG: e.Vars2#1: 28
      //DEBUG: e.Commands#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Decompile-Pattern-NoHole/4 s.Level1#1/5 s.Top1#1/6 (/9 e.Pattern1#1/7 )/10 (/13 e.Vars1#1/11 )/14 (/19 {REMOVED TILE} )/20 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </21 HalfReuse: & Decompile-Pattern-NoHole/22 AsIs: s.Level2#1/25 AsIs: s.Top2#1/36 AsIs: (/34 AsIs: e.Pattern2#1/32 AsIs: )/35 AsIs: (/30 AsIs: e.Vars2#1/28 AsIs: )/31 } Tile{ AsIs: e.Commands#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[21]);
      refalrts::reinit_name(context[22], functions[efunc_Decompilem_Patternm_NoHole]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::link_brackets( context[34], context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[21], context[31] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Decompile-Pattern-NoHole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern#1/7 )/10 (/13 e.Vars#1/11 )/14 (/19 s.Offset#1/21 # LABEL/22 e.BlockName#1/17 )/20 e.Commands#1/15 >/1
    if( ! refalrts::ident_term( identifiers[ident_LABEL], context[22] ) )
      continue;
    // closed e.Pattern#1 as range 7
    // closed e.Vars#1 as range 11
    // closed e.BlockName#1 as range 17
    // closed e.Commands#1 as range 15
    //DEBUG: s.Level#1: 5
    //DEBUG: s.Top#1: 6
    //DEBUG: s.Offset#1: 21
    //DEBUG: e.Pattern#1: 7
    //DEBUG: e.Vars#1: 11
    //DEBUG: e.BlockName#1: 17
    //DEBUG: e.Commands#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/19 s.Offset#1/21 # LABEL/22 e.BlockName#1/17 )/20 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Pattern-NoHole/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Pattern#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Vars#1/11 AsIs: )/14 } Tile{ AsIs: e.Commands#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Decompile-Pattern-NoHole/4 s.Level#1/5 s.Top#1/6 (/9 )/10 (/13 )/14 >/1
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Level#1: 5
    //DEBUG: s.Top#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Decompile-Pattern-NoHole/4 s.Level#1/5 s.Top#1/6 (/9 )/10 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/13 HalfReuse: # EndOfFunction/14 HalfReuse: )/1 ]] }
    refalrts::reinit_ident(context[14], identifiers[ident_EndOfFunction]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[13], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Decompile-Pattern-NoHole/4 s.Level#1/5 s.Top#1/6 (/9 e.Pattern#1/7 )/10 (/13 e.Vars#1/11 )/14 e.Commands#1/2 >/1
  // closed e.Pattern#1 as range 7
  // closed e.Vars#1 as range 11
  // closed e.Commands#1 as range 2
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#1: 6
  //DEBUG: e.Pattern#1: 7
  //DEBUG: e.Vars#1: 11
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/15 Tile{ HalfReuse: '='/1 } Tile{ HalfReuse: 'B'/0 HalfReuse: ' '/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Pattern#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Vars#1/11 AsIs: )/14 } )/16 Tile{ AsIs: e.Commands#1/2 } Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::reinit_char(context[1], '=');
  refalrts::reinit_char(context[0], 'B');
  refalrts::reinit_char(context[4], ' ');
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Decompilem_Patternm_NoHole("Decompile-Pattern-NoHole", 982870901U, 3115847316U, func_Decompilem_Patternm_NoHole);


static refalrts::FnResult func_Decompilem_Result(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 57 elems
  refalrts::Iter context[57];
  refalrts::zeros( context, 57 );
  // </0 & Decompile-Result/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Decompile-Result/4 s.new#1/5 s.new#2/6 (/9 e.new#3/7 )/10 (/13 t.new#4/15 e.new#5/11 )/14 e.new#6/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new#3 as range 7
  // closed e.new#6 as range 2
  context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 11
  do {
    // </0 & Decompile-Result/4 s.new#7/5 s.new#8/6 (/9 e.new#9/7 )/10 (/13 t.new#10/15 e.new#11/11 )/14 (/21 s.new#12/23 s.new#13/24 e.new#14/19 )/22 e.new#15/17 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.new#9 as range 7
    // closed e.new#11 as range 11
    // closed e.new#15 as range 17
    if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    // closed e.new#14 as range 19
    do {
      // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 t.MB#1/15 e.Result#1/11 )/14 (/21 s.Offset#1/23 # NCS/24 e.Word#1/19 )/22 e.Commands#1/17 >/1
      if( ! refalrts::ident_term( identifiers[ident_NCS], context[24] ) )
        continue;
      // closed e.Vars#1 as range 7
      // closed e.Result#1 as range 11
      // closed e.Word#1 as range 19
      // closed e.Commands#1 as range 17
      //DEBUG: t.MB#1: 15
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset#1: 23
      //DEBUG: e.Vars#1: 7
      //DEBUG: e.Result#1: 11
      //DEBUG: e.Word#1: 19
      //DEBUG: e.Commands#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Offset#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Vars#1/7 AsIs: )/10 AsIs: (/13 AsIs: t.MB#1/15 AsIs: e.Result#1/11 HalfReuse: (/14 HalfReuse: # W/21 } Tile{ AsIs: e.Word#1/19 } Tile{ HalfReuse: )/24 } Tile{ AsIs: )/22 AsIs: e.Commands#1/17 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_ident(context[21], identifiers[ident_W]);
      refalrts::reinit_close_bracket(context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[22] );
      refalrts::link_brackets( context[14], context[24] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[22];
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, context[21], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Result/4 s.new#16/5 s.new#17/6 (/9 e.new#18/7 )/10 (/13 t.new#19/15 e.new#20/11 )/14 (/21 s.new#21/23 s.new#22/24 s.new#23/27 e.new#24/25 )/22 e.new#25/17 >/1
      context[25] = context[19];
      context[26] = context[20];
      // closed e.new#18 as range 7
      // closed e.new#20 as range 11
      // closed e.new#25 as range 17
      if( ! refalrts::svar_left( context[27], context[25], context[26] ) )
        continue;
      // closed e.new#24 as range 25
      do {
        // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 t.MB#1/15 e.Result#1/11 )/14 (/21 s.Offset#1/23 # NNS/24 s.Number#1/27 )/22 e.Commands#1/17 >/1
        if( ! refalrts::ident_term( identifiers[ident_NNS], context[24] ) )
          continue;
        if( ! refalrts::empty_seq( context[25], context[26] ) )
          continue;
        // closed e.Vars#1 as range 7
        // closed e.Result#1 as range 11
        // closed e.Commands#1 as range 17
        //DEBUG: t.MB#1: 15
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 23
        //DEBUG: s.Number#1: 27
        //DEBUG: e.Vars#1: 7
        //DEBUG: e.Result#1: 11
        //DEBUG: e.Commands#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Offset#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Vars#1/7 AsIs: )/10 AsIs: (/13 AsIs: t.MB#1/15 AsIs: e.Result#1/11 HalfReuse: (/14 HalfReuse: # N/21 } Tile{ AsIs: s.Number#1/27 } Tile{ HalfReuse: )/24 } Tile{ AsIs: )/22 AsIs: e.Commands#1/17 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[14]);
        refalrts::reinit_ident(context[21], identifiers[ident_N]);
        refalrts::reinit_close_bracket(context[24]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[22] );
        refalrts::link_brackets( context[14], context[24] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[22];
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[27], context[27] );
        refalrts::splice_to_freelist_open( vm, context[21], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 t.MB#1/15 e.Result#1/11 )/14 (/21 s.Offset#1/23 # NS/24 s.Code#1/27 s.Char#1/30 )/22 e.Commands#1/17 >/1
        context[28] = context[25];
        context[29] = context[26];
        if( ! refalrts::ident_term( identifiers[ident_NS], context[24] ) )
          continue;
        // closed e.Vars#1 as range 7
        // closed e.Result#1 as range 11
        // closed e.Commands#1 as range 17
        if( ! refalrts::svar_left( context[30], context[28], context[29] ) )
          continue;
        if( ! refalrts::empty_seq( context[28], context[29] ) )
          continue;
        //DEBUG: t.MB#1: 15
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 23
        //DEBUG: s.Code#1: 27
        //DEBUG: e.Vars#1: 7
        //DEBUG: e.Result#1: 11
        //DEBUG: e.Commands#1: 17
        //DEBUG: s.Char#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Offset#1/23 {REMOVED TILE} s.Code#1/27 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Vars#1/7 AsIs: )/10 AsIs: (/13 AsIs: t.MB#1/15 AsIs: e.Result#1/11 HalfReuse: (/14 HalfReuse: # C/21 } Tile{ AsIs: s.Char#1/30 } Tile{ HalfReuse: )/24 } Tile{ AsIs: )/22 AsIs: e.Commands#1/17 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[14]);
        refalrts::reinit_ident(context[21], identifiers[ident_C]);
        refalrts::reinit_close_bracket(context[24]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[22] );
        refalrts::link_brackets( context[14], context[24] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[22];
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[30], context[30] );
        refalrts::splice_to_freelist_open( vm, context[21], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 t.MB#1/15 e.Result#1/11 )/14 (/21 s.Offset#1/23 # TEXT/24 s.Count#1/27 e.Chars#1/25 )/22 e.Commands#1/17 >/1
      if( ! refalrts::ident_term( identifiers[ident_TEXT], context[24] ) )
        continue;
      // closed e.Vars#1 as range 7
      // closed e.Result#1 as range 11
      // closed e.Chars#1 as range 25
      // closed e.Commands#1 as range 17
      //DEBUG: t.MB#1: 15
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset#1: 23
      //DEBUG: s.Count#1: 27
      //DEBUG: e.Vars#1: 7
      //DEBUG: e.Result#1: 11
      //DEBUG: e.Chars#1: 25
      //DEBUG: e.Commands#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Offset#1/23 {REMOVED TILE} s.Count#1/27 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Vars#1/7 AsIs: )/10 AsIs: (/13 AsIs: t.MB#1/15 AsIs: e.Result#1/11 HalfReuse: (/14 HalfReuse: # C/21 } Tile{ AsIs: e.Chars#1/25 } Tile{ HalfReuse: )/24 } Tile{ AsIs: )/22 AsIs: e.Commands#1/17 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_ident(context[21], identifiers[ident_C]);
      refalrts::reinit_close_bracket(context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[22] );
      refalrts::link_brackets( context[14], context[24] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[22];
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::splice_to_freelist_open( vm, context[21], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Result/4 s.new#16/5 s.new#17/6 (/9 e.new#18/7 )/10 (/13 t.new#19/15 e.new#20/11 )/14 (/21 s.new#21/23 s.new#22/24 )/22 e.new#23/17 >/1
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.new#18 as range 7
      // closed e.new#20 as range 11
      // closed e.new#23 as range 17
      do {
        // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 t.MB#1/15 e.Result#1/11 )/14 (/21 s.Offset#1/23 # BL/24 )/22 e.Commands#1/17 >/1
        if( ! refalrts::ident_term( identifiers[ident_BL], context[24] ) )
          continue;
        // closed e.Vars#1 as range 7
        // closed e.Result#1 as range 11
        // closed e.Commands#1 as range 17
        //DEBUG: t.MB#1: 15
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 23
        //DEBUG: e.Vars#1: 7
        //DEBUG: e.Result#1: 11
        //DEBUG: e.Commands#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/14 {REMOVED TILE} s.Offset#1/23 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Vars#1/7 AsIs: )/10 AsIs: (/13 } Tile{ AsIs: (/21 } Tile{ AsIs: t.MB#1/15 } Tile{ AsIs: e.Result#1/11 } Tile{ HalfReuse: )/24 AsIs: )/22 AsIs: e.Commands#1/17 AsIs: >/1 ]] }
        refalrts::reinit_close_bracket(context[24]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[22] );
        refalrts::link_brackets( context[21], context[24] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[24];
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[21], context[21] );
        refalrts::splice_to_freelist_open( vm, context[13], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 (/15 t.MB#1/27 e.Result#1/25 )/16 e.Nested#1/11 )/14 (/21 s.Offset#1/23 # BR/24 )/22 e.Commands#1/17 >/1
        context[25] = 0;
        context[26] = 0;
        if( ! refalrts::brackets_term( context[25], context[26], context[15] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_BR], context[24] ) )
          continue;
        // closed e.Vars#1 as range 7
        // closed e.Nested#1 as range 11
        // closed e.Commands#1 as range 17
        context[28] = refalrts::tvar_left( context[27], context[25], context[26] );
        if( ! context[28] )
          continue;
        // closed e.Result#1 as range 25
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 23
        //DEBUG: e.Vars#1: 7
        //DEBUG: e.Nested#1: 11
        //DEBUG: e.Commands#1: 17
        //DEBUG: t.MB#1: 27
        //DEBUG: e.Result#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/15 {REMOVED TILE} {REMOVED TILE} )/14 {REMOVED TILE} s.Offset#1/23 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Vars#1/7 AsIs: )/10 AsIs: (/13 } Tile{ AsIs: t.MB#1/27 AsIs: e.Result#1/25 HalfReuse: (/16 } Tile{ HalfReuse: '*'/21 } Tile{ AsIs: e.Nested#1/11 } Tile{ HalfReuse: )/24 AsIs: )/22 AsIs: e.Commands#1/17 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[16]);
        refalrts::reinit_char(context[21], '*');
        refalrts::reinit_close_bracket(context[24]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[22] );
        refalrts::link_brackets( context[16], context[24] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[24];
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[21], context[21] );
        res = refalrts::splice_evar( res, context[27], context[16] );
        refalrts::splice_to_freelist_open( vm, context[13], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 t.MB#1/15 e.Result#1/11 )/14 (/21 s.Offset#1/23 # BLR/24 )/22 e.Commands#1/17 >/1
      if( ! refalrts::ident_term( identifiers[ident_BLR], context[24] ) )
        continue;
      // closed e.Vars#1 as range 7
      // closed e.Result#1 as range 11
      // closed e.Commands#1 as range 17
      //DEBUG: t.MB#1: 15
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset#1: 23
      //DEBUG: e.Vars#1: 7
      //DEBUG: e.Result#1: 11
      //DEBUG: e.Commands#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Offset#1/23 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Vars#1/7 AsIs: )/10 AsIs: (/13 AsIs: t.MB#1/15 AsIs: e.Result#1/11 HalfReuse: (/14 HalfReuse: '*'/21 } Tile{ HalfReuse: )/24 AsIs: )/22 AsIs: e.Commands#1/17 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_char(context[21], '*');
      refalrts::reinit_close_bracket(context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[22] );
      refalrts::link_brackets( context[14], context[24] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      refalrts::splice_to_freelist_open( vm, context[21], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Result/4 s.new#16/5 s.new#17/6 (/9 e.new#18/7 )/10 (/13 t.new#19/15 e.new#20/25 (/29 '*'/31 e.new#21/27 )/30 )/14 (/21 s.new#22/23 s.new#23/24 e.new#24/19 )/22 e.new#25/17 >/1
      context[25] = context[11];
      context[26] = context[12];
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_right( context[27], context[28], context[25], context[26] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::char_left( '*', context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.new#18 as range 7
      // closed e.new#20 as range 25
      // closed e.new#21 as range 27
      // closed e.new#24 as range 19
      // closed e.new#25 as range 17
      do {
        // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 t.MB#1/15 e.Result#1/25 (/29 '*'/31 e.Inner#1/27 )/30 )/14 (/21 s.Offset#1/23 # ACT1/24 e.Name#1/19 )/22 e.Commands#1/17 >/1
        if( ! refalrts::ident_term( identifiers[ident_ACT1], context[24] ) )
          continue;
        // closed e.Vars#1 as range 7
        // closed e.Result#1 as range 25
        // closed e.Inner#1 as range 27
        // closed e.Name#1 as range 19
        // closed e.Commands#1 as range 17
        //DEBUG: t.MB#1: 15
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 23
        //DEBUG: e.Vars#1: 7
        //DEBUG: e.Result#1: 25
        //DEBUG: e.Inner#1: 27
        //DEBUG: e.Name#1: 19
        //DEBUG: e.Commands#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#1/23 # ACT1/24 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Vars#1/7 AsIs: )/10 AsIs: (/13 AsIs: t.MB#1/15 AsIs: e.Result#1/25 AsIs: (/29 Reuse: '!'/31 } Tile{ AsIs: (/21 } Tile{ AsIs: e.Name#1/19 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Inner#1/27 } Tile{ AsIs: )/30 } Tile{ AsIs: )/22 AsIs: e.Commands#1/17 AsIs: >/1 ]] }
        refalrts::update_char(context[31], '!');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[22] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[21], context[14] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[22];
        res = refalrts::splice_evar( res, context[30], context[30] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[14], context[14] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[21], context[21] );
        refalrts::splice_to_freelist_open( vm, context[31], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 t.MB#1/15 e.Result#1/25 (/29 '*'/31 e.Inner#1/27 )/30 )/14 (/21 s.Offset#1/23 # ACT_EXTRN/24 e.Name#1/19 )/22 e.Commands#1/17 >/1
      if( ! refalrts::ident_term( identifiers[ident_ACTu_EXTRN], context[24] ) )
        continue;
      // closed e.Vars#1 as range 7
      // closed e.Result#1 as range 25
      // closed e.Inner#1 as range 27
      // closed e.Name#1 as range 19
      // closed e.Commands#1 as range 17
      //DEBUG: t.MB#1: 15
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset#1: 23
      //DEBUG: e.Vars#1: 7
      //DEBUG: e.Result#1: 25
      //DEBUG: e.Inner#1: 27
      //DEBUG: e.Name#1: 19
      //DEBUG: e.Commands#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#1/23 # ACT_EXTRN/24 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Vars#1/7 AsIs: )/10 AsIs: (/13 AsIs: t.MB#1/15 AsIs: e.Result#1/25 AsIs: (/29 Reuse: '!'/31 } Tile{ AsIs: (/21 } Tile{ AsIs: e.Name#1/19 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Inner#1/27 } Tile{ AsIs: )/30 } Tile{ AsIs: )/22 AsIs: e.Commands#1/17 AsIs: >/1 ]] }
      refalrts::update_char(context[31], '!');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[22] );
      refalrts::link_brackets( context[29], context[30] );
      refalrts::link_brackets( context[21], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[22];
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      refalrts::splice_to_freelist_open( vm, context[31], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Decompile-Result/4 s.new#16/5 s.new#17/6 (/9 e.new#18/7 )/10 (/13 t.new#19/15 e.new#20/11 )/14 (/21 s.new#21/23 s.new#22/24 s.new#23/27 )/22 e.new#24/17 >/1
      context[25] = context[19];
      context[26] = context[20];
      // closed e.new#18 as range 7
      // closed e.new#20 as range 11
      // closed e.new#24 as range 17
      if( ! refalrts::svar_left( context[27], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      do {
        // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 t.MB#1/15 e.Result#1/11 )/14 (/21 s.Offset#1/23 # TPLS/24 s.Copy#1/27 )/22 e.Commands#1/17 >/1
        if( ! refalrts::ident_term( identifiers[ident_TPLS], context[24] ) )
          continue;
        // closed e.Vars#1 as range 7
        // closed e.Result#1 as range 11
        // closed e.Commands#1 as range 17
        //DEBUG: t.MB#1: 15
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 23
        //DEBUG: s.Copy#1: 27
        //DEBUG: e.Vars#1: 7
        //DEBUG: e.Result#1: 11
        //DEBUG: e.Commands#1: 17
        //5: s.Level#1
        //6: s.Top#1
        //7: e.Vars#1
        //11: e.Result#1
        //15: t.MB#1
        //17: e.Commands#1
        //23: s.Offset#1
        //27: s.Copy#1
        //31: e.Vars#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[28]);
        refalrts::alloc_name(vm, context[30], functions[efunc_gen_Decompilem_Result_S10C1]);
        refalrts::copy_evar(vm, context[31], context[32], context[7], context[8]);
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[28] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_elem( res, context[28] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </28 & Decompile-Result$10?1/32 e.Vars-B#2/33 (/39 # s/41 s.Id#2/44 '='/43 s.Copy#1/42 )/40 e.Vars-E#2/35 >/29
          context[30] = 0;
          context[31] = 0;
          context[32] = refalrts::call_left( context[30], context[31], context[28], context[29] );
          context[33] = 0;
          context[34] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[35] = context[30];
            context[36] = context[31];
            context[37] = 0;
            context[38] = 0;
            context[39] = refalrts::brackets_left( context[37], context[38], context[35], context[36] );
            if( ! context[39] )
              continue;
            refalrts::bracket_pointers(context[39], context[40]);
            context[41] = refalrts::ident_left( identifiers[ident_s], context[37], context[38] );
            if( ! context[41] )
              continue;
            if( ! refalrts::repeated_stvar_right( vm, context[42], context[27], context[37], context[38] ) )
              continue;
            context[43] = refalrts::char_right( '=', context[37], context[38] );
            if( ! context[43] )
              continue;
            // closed e.Vars-E#2 as range 35
            if( ! refalrts::svar_left( context[44], context[37], context[38] ) )
              continue;
            if( ! refalrts::empty_seq( context[37], context[38] ) )
              continue;
            //DEBUG: t.MB#1: 15
            //DEBUG: s.Level#1: 5
            //DEBUG: s.Top#1: 6
            //DEBUG: s.Offset#1: 23
            //DEBUG: s.Copy#1: 27
            //DEBUG: e.Vars#1: 7
            //DEBUG: e.Result#1: 11
            //DEBUG: e.Commands#1: 17
            //DEBUG: e.Vars-B#2: 33
            //DEBUG: e.Vars-E#2: 35
            //DEBUG: s.Id#2: 44

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.Offset#1/23 # TPLS/24 s.Copy#1/27 {REMOVED TILE} & Decompile-Result$10?1/32 e.Vars-B#2/33 (/39 # s/41 {REMOVED TILE} e.Vars-E#2/35 >/29 >/1 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Vars#1/7 AsIs: )/10 AsIs: (/13 AsIs: t.MB#1/15 AsIs: e.Result#1/11 HalfReuse: (/14 HalfReuse: # s/21 } Tile{ AsIs: s.Id#2/44 AsIs: '='/43 AsIs: s.Copy#1/42 AsIs: )/40 } Tile{ AsIs: )/22 AsIs: e.Commands#1/17 HalfReuse: >/28 } Tile{ ]] }
            refalrts::reinit_open_bracket(context[14]);
            refalrts::reinit_ident(context[21], identifiers[ident_s]);
            refalrts::reinit_close_call(context[28]);
            refalrts::push_stack( vm, context[28] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[13], context[22] );
            refalrts::link_brackets( context[14], context[40] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[22], context[28] );
            res = refalrts::splice_evar( res, context[44], context[40] );
            refalrts::splice_to_freelist_open( vm, context[21], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[33], context[34], context[30], context[31] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[28], context[29]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 t.MB#1/15 e.Result#1/11 )/14 (/21 s.Offset#1/23 # TPLE/24 s.CopyR#1/27 )/22 e.Commands#1/17 >/1
        if( ! refalrts::ident_term( identifiers[ident_TPLE], context[24] ) )
          continue;
        // closed e.Vars#1 as range 7
        // closed e.Result#1 as range 11
        // closed e.Commands#1 as range 17
        //DEBUG: t.MB#1: 15
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 23
        //DEBUG: s.CopyR#1: 27
        //DEBUG: e.Vars#1: 7
        //DEBUG: e.Result#1: 11
        //DEBUG: e.Commands#1: 17
        //5: s.Level#1
        //6: s.Top#1
        //7: e.Vars#1
        //11: e.Result#1
        //15: t.MB#1
        //17: e.Commands#1
        //23: s.Offset#1
        //27: s.CopyR#1
        //31: e.Vars#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[28]);
        refalrts::alloc_name(vm, context[30], functions[efunc_gen_Decompilem_Result_S11C1]);
        refalrts::copy_evar(vm, context[31], context[32], context[7], context[8]);
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[28] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_elem( res, context[28] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </28 & Decompile-Result$11?1/32 e.Vars-B#2/33 (/39 s.Type#2/42 s.IdL#2/43 s.IdR#2/44 '='/45 s.CopyL#2/46 s.CopyR#1/41 )/40 e.Vars-E#2/35 >/29
          context[30] = 0;
          context[31] = 0;
          context[32] = refalrts::call_left( context[30], context[31], context[28], context[29] );
          context[33] = 0;
          context[34] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[35] = context[30];
            context[36] = context[31];
            context[37] = 0;
            context[38] = 0;
            context[39] = refalrts::brackets_left( context[37], context[38], context[35], context[36] );
            if( ! context[39] )
              continue;
            refalrts::bracket_pointers(context[39], context[40]);
            if( ! refalrts::repeated_stvar_right( vm, context[41], context[27], context[37], context[38] ) )
              continue;
            // closed e.Vars-E#2 as range 35
            if( ! refalrts::svar_left( context[42], context[37], context[38] ) )
              continue;
            if( ! refalrts::svar_left( context[43], context[37], context[38] ) )
              continue;
            if( ! refalrts::svar_left( context[44], context[37], context[38] ) )
              continue;
            context[45] = refalrts::char_left( '=', context[37], context[38] );
            if( ! context[45] )
              continue;
            if( ! refalrts::svar_left( context[46], context[37], context[38] ) )
              continue;
            if( ! refalrts::empty_seq( context[37], context[38] ) )
              continue;
            //DEBUG: t.MB#1: 15
            //DEBUG: s.Level#1: 5
            //DEBUG: s.Top#1: 6
            //DEBUG: s.Offset#1: 23
            //DEBUG: s.CopyR#1: 27
            //DEBUG: e.Vars#1: 7
            //DEBUG: e.Result#1: 11
            //DEBUG: e.Commands#1: 17
            //DEBUG: e.Vars-B#2: 33
            //DEBUG: e.Vars-E#2: 35
            //DEBUG: s.Type#2: 42
            //DEBUG: s.IdL#2: 43
            //DEBUG: s.IdR#2: 44
            //DEBUG: s.CopyL#2: 46
            //5: s.Level#1
            //6: s.Top#1
            //7: e.Vars#1
            //11: e.Result#1
            //15: t.MB#1
            //17: e.Commands#1
            //23: s.Offset#1
            //27: s.CopyR#1
            //33: e.Vars-B#2
            //35: e.Vars-E#2
            //41: s.CopyR#1
            //42: s.Type#2
            //43: s.IdL#2
            //44: s.IdR#2
            //46: s.CopyL#2

            refalrts::reset_allocator(vm);
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            refalrts::alloc_open_call(vm, context[47]);
            refalrts::alloc_name(vm, context[49], functions[efunc_gen_Decompilem_Result_S11C2]);
            refalrts::alloc_ident(vm, context[50], identifiers[ident_t]);
            refalrts::alloc_ident(vm, context[51], identifiers[ident_e]);
            refalrts::alloc_close_call(vm, context[48]);
            refalrts::push_stack( vm, context[48] );
            refalrts::push_stack( vm, context[47] );
            res = refalrts::splice_elem( res, context[48] );
            res = refalrts::splice_elem( res, context[51] );
            res = refalrts::splice_elem( res, context[50] );
            res = refalrts::splice_elem( res, context[49] );
            res = refalrts::splice_elem( res, context[47] );
            refalrts::use( res );
            refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
            if (rec_res != refalrts::cSuccess)
              return rec_res;
            refalrts::this_is_generated_function(vm);
            do {
              // </47 & Decompile-Result$11?2/51 e.B#3/52 s.Type#2/56 e.E#3/54 >/48
              context[49] = 0;
              context[50] = 0;
              context[51] = refalrts::call_left( context[49], context[50], context[47], context[48] );
              context[52] = 0;
              context[53] = 0;
              refalrts::start_e_loop(vm);
              do {
                context[54] = context[49];
                context[55] = context[50];
                if( ! refalrts::repeated_stvar_left( vm, context[56], context[42], context[54], context[55] ) )
                  continue;
                // closed e.E#3 as range 54
                //DEBUG: t.MB#1: 15
                //DEBUG: s.Level#1: 5
                //DEBUG: s.Top#1: 6
                //DEBUG: s.Offset#1: 23
                //DEBUG: s.CopyR#1: 27
                //DEBUG: e.Vars#1: 7
                //DEBUG: e.Result#1: 11
                //DEBUG: e.Commands#1: 17
                //DEBUG: e.Vars-B#2: 33
                //DEBUG: e.Vars-E#2: 35
                //DEBUG: s.Type#2: 42
                //DEBUG: s.IdL#2: 43
                //DEBUG: s.IdR#2: 44
                //DEBUG: s.CopyL#2: 46
                //DEBUG: e.B#3: 52
                //DEBUG: e.E#3: 54

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} s.Offset#1/23 # TPLE/24 s.CopyR#1/27 {REMOVED TILE} & Decompile-Result$11?1/32 e.Vars-B#2/33 (/39 s.Type#2/42 {REMOVED TILE} e.Vars-E#2/35 >/29 </47 & Decompile-Result$11?2/51 e.B#3/52 s.Type#2/56 e.E#3/54 >/48 >/1 {REMOVED TILE}
                //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Vars#1/7 AsIs: )/10 AsIs: (/13 AsIs: t.MB#1/15 AsIs: e.Result#1/11 HalfReuse: (/14 HalfReuse: s.Type2 #56/21 } Tile{ AsIs: s.IdL#2/43 AsIs: s.IdR#2/44 AsIs: '='/45 AsIs: s.CopyL#2/46 AsIs: s.CopyR#1/41 AsIs: )/40 } Tile{ AsIs: )/22 AsIs: e.Commands#1/17 HalfReuse: >/28 } Tile{ ]] }
                refalrts::reinit_open_bracket(context[14]);
                refalrts::reinit_svar( context[21], context[56] );
                refalrts::reinit_close_call(context[28]);
                refalrts::push_stack( vm, context[28] );
                refalrts::push_stack( vm, context[0] );
                refalrts::link_brackets( context[13], context[22] );
                refalrts::link_brackets( context[14], context[40] );
                refalrts::link_brackets( context[9], context[10] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = arg_end->next;
                res = refalrts::splice_evar( res, context[22], context[28] );
                res = refalrts::splice_evar( res, context[43], context[40] );
                refalrts::splice_to_freelist_open( vm, context[21], res );
                return refalrts::cSuccess;
              } while ( refalrts::open_evar_advance( context[52], context[53], context[49], context[50] ) );
            } while ( 0 );
            refalrts::stop_sentence(vm);

            refalrts::splice_to_freelist(vm, context[47], context[48]);
            continue;
          } while ( refalrts::open_evar_advance( context[33], context[34], context[30], context[31] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[28], context[29]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 t.MB#1/15 e.Result#1/11 )/14 (/21 s.Offset#1/23 # MULS/24 s.Copy#1/27 )/22 e.Commands#1/17 >/1
        if( ! refalrts::ident_term( identifiers[ident_MULS], context[24] ) )
          continue;
        // closed e.Vars#1 as range 7
        // closed e.Result#1 as range 11
        // closed e.Commands#1 as range 17
        //DEBUG: t.MB#1: 15
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 23
        //DEBUG: s.Copy#1: 27
        //DEBUG: e.Vars#1: 7
        //DEBUG: e.Result#1: 11
        //DEBUG: e.Commands#1: 17
        //5: s.Level#1
        //6: s.Top#1
        //7: e.Vars#1
        //11: e.Result#1
        //15: t.MB#1
        //17: e.Commands#1
        //23: s.Offset#1
        //27: s.Copy#1
        //31: e.Vars#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[28]);
        refalrts::alloc_name(vm, context[30], functions[efunc_gen_Decompilem_Result_S12C1]);
        refalrts::copy_evar(vm, context[31], context[32], context[7], context[8]);
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[28] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_elem( res, context[28] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </28 & Decompile-Result$12?1/32 e.Vars-B#2/33 (/39 # s/41 s.Id#2/44 '='/43 s.Copy#1/42 )/40 e.Vars-E#2/35 >/29
          context[30] = 0;
          context[31] = 0;
          context[32] = refalrts::call_left( context[30], context[31], context[28], context[29] );
          context[33] = 0;
          context[34] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[35] = context[30];
            context[36] = context[31];
            context[37] = 0;
            context[38] = 0;
            context[39] = refalrts::brackets_left( context[37], context[38], context[35], context[36] );
            if( ! context[39] )
              continue;
            refalrts::bracket_pointers(context[39], context[40]);
            context[41] = refalrts::ident_left( identifiers[ident_s], context[37], context[38] );
            if( ! context[41] )
              continue;
            if( ! refalrts::repeated_stvar_right( vm, context[42], context[27], context[37], context[38] ) )
              continue;
            context[43] = refalrts::char_right( '=', context[37], context[38] );
            if( ! context[43] )
              continue;
            // closed e.Vars-E#2 as range 35
            if( ! refalrts::svar_left( context[44], context[37], context[38] ) )
              continue;
            if( ! refalrts::empty_seq( context[37], context[38] ) )
              continue;
            //DEBUG: t.MB#1: 15
            //DEBUG: s.Level#1: 5
            //DEBUG: s.Top#1: 6
            //DEBUG: s.Offset#1: 23
            //DEBUG: s.Copy#1: 27
            //DEBUG: e.Vars#1: 7
            //DEBUG: e.Result#1: 11
            //DEBUG: e.Commands#1: 17
            //DEBUG: e.Vars-B#2: 33
            //DEBUG: e.Vars-E#2: 35
            //DEBUG: s.Id#2: 44

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.Offset#1/23 # MULS/24 s.Copy#1/27 {REMOVED TILE} & Decompile-Result$12?1/32 e.Vars-B#2/33 (/39 # s/41 {REMOVED TILE} e.Vars-E#2/35 >/29 >/1 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Vars#1/7 AsIs: )/10 AsIs: (/13 AsIs: t.MB#1/15 AsIs: e.Result#1/11 HalfReuse: (/14 HalfReuse: # s/21 } Tile{ AsIs: s.Id#2/44 AsIs: '='/43 AsIs: s.Copy#1/42 AsIs: )/40 } Tile{ AsIs: )/22 AsIs: e.Commands#1/17 HalfReuse: >/28 } Tile{ ]] }
            refalrts::reinit_open_bracket(context[14]);
            refalrts::reinit_ident(context[21], identifiers[ident_s]);
            refalrts::reinit_close_call(context[28]);
            refalrts::push_stack( vm, context[28] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[13], context[22] );
            refalrts::link_brackets( context[14], context[40] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[22], context[28] );
            res = refalrts::splice_evar( res, context[44], context[40] );
            refalrts::splice_to_freelist_open( vm, context[21], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[33], context[34], context[30], context[31] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[28], context[29]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 t.MB#1/15 e.Result#1/11 )/14 (/21 s.Offset#1/23 # MULE/24 s.CopyR#1/27 )/22 e.Commands#1/17 >/1
        if( ! refalrts::ident_term( identifiers[ident_MULE], context[24] ) )
          continue;
        // closed e.Vars#1 as range 7
        // closed e.Result#1 as range 11
        // closed e.Commands#1 as range 17
        //DEBUG: t.MB#1: 15
        //DEBUG: s.Level#1: 5
        //DEBUG: s.Top#1: 6
        //DEBUG: s.Offset#1: 23
        //DEBUG: s.CopyR#1: 27
        //DEBUG: e.Vars#1: 7
        //DEBUG: e.Result#1: 11
        //DEBUG: e.Commands#1: 17
        //5: s.Level#1
        //6: s.Top#1
        //7: e.Vars#1
        //11: e.Result#1
        //15: t.MB#1
        //17: e.Commands#1
        //23: s.Offset#1
        //27: s.CopyR#1
        //31: e.Vars#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[28]);
        refalrts::alloc_name(vm, context[30], functions[efunc_gen_Decompilem_Result_S13C1]);
        refalrts::copy_evar(vm, context[31], context[32], context[7], context[8]);
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[28] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_elem( res, context[28] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </28 & Decompile-Result$13?1/32 e.Vars-B#2/33 (/39 s.Type#2/42 s.IdL#2/43 s.IdR#2/44 '='/45 s.CopyL#2/46 s.CopyR#1/41 )/40 e.Vars-E#2/35 >/29
          context[30] = 0;
          context[31] = 0;
          context[32] = refalrts::call_left( context[30], context[31], context[28], context[29] );
          context[33] = 0;
          context[34] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[35] = context[30];
            context[36] = context[31];
            context[37] = 0;
            context[38] = 0;
            context[39] = refalrts::brackets_left( context[37], context[38], context[35], context[36] );
            if( ! context[39] )
              continue;
            refalrts::bracket_pointers(context[39], context[40]);
            if( ! refalrts::repeated_stvar_right( vm, context[41], context[27], context[37], context[38] ) )
              continue;
            // closed e.Vars-E#2 as range 35
            if( ! refalrts::svar_left( context[42], context[37], context[38] ) )
              continue;
            if( ! refalrts::svar_left( context[43], context[37], context[38] ) )
              continue;
            if( ! refalrts::svar_left( context[44], context[37], context[38] ) )
              continue;
            context[45] = refalrts::char_left( '=', context[37], context[38] );
            if( ! context[45] )
              continue;
            if( ! refalrts::svar_left( context[46], context[37], context[38] ) )
              continue;
            if( ! refalrts::empty_seq( context[37], context[38] ) )
              continue;
            //DEBUG: t.MB#1: 15
            //DEBUG: s.Level#1: 5
            //DEBUG: s.Top#1: 6
            //DEBUG: s.Offset#1: 23
            //DEBUG: s.CopyR#1: 27
            //DEBUG: e.Vars#1: 7
            //DEBUG: e.Result#1: 11
            //DEBUG: e.Commands#1: 17
            //DEBUG: e.Vars-B#2: 33
            //DEBUG: e.Vars-E#2: 35
            //DEBUG: s.Type#2: 42
            //DEBUG: s.IdL#2: 43
            //DEBUG: s.IdR#2: 44
            //DEBUG: s.CopyL#2: 46
            //5: s.Level#1
            //6: s.Top#1
            //7: e.Vars#1
            //11: e.Result#1
            //15: t.MB#1
            //17: e.Commands#1
            //23: s.Offset#1
            //27: s.CopyR#1
            //33: e.Vars-B#2
            //35: e.Vars-E#2
            //41: s.CopyR#1
            //42: s.Type#2
            //43: s.IdL#2
            //44: s.IdR#2
            //46: s.CopyL#2

            refalrts::reset_allocator(vm);
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            refalrts::alloc_open_call(vm, context[47]);
            refalrts::alloc_name(vm, context[49], functions[efunc_gen_Decompilem_Result_S13C2]);
            refalrts::alloc_ident(vm, context[50], identifiers[ident_t]);
            refalrts::alloc_ident(vm, context[51], identifiers[ident_e]);
            refalrts::alloc_close_call(vm, context[48]);
            refalrts::push_stack( vm, context[48] );
            refalrts::push_stack( vm, context[47] );
            res = refalrts::splice_elem( res, context[48] );
            res = refalrts::splice_elem( res, context[51] );
            res = refalrts::splice_elem( res, context[50] );
            res = refalrts::splice_elem( res, context[49] );
            res = refalrts::splice_elem( res, context[47] );
            refalrts::use( res );
            refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
            if (rec_res != refalrts::cSuccess)
              return rec_res;
            refalrts::this_is_generated_function(vm);
            do {
              // </47 & Decompile-Result$13?2/51 e.B#3/52 s.Type#2/56 e.E#3/54 >/48
              context[49] = 0;
              context[50] = 0;
              context[51] = refalrts::call_left( context[49], context[50], context[47], context[48] );
              context[52] = 0;
              context[53] = 0;
              refalrts::start_e_loop(vm);
              do {
                context[54] = context[49];
                context[55] = context[50];
                if( ! refalrts::repeated_stvar_left( vm, context[56], context[42], context[54], context[55] ) )
                  continue;
                // closed e.E#3 as range 54
                //DEBUG: t.MB#1: 15
                //DEBUG: s.Level#1: 5
                //DEBUG: s.Top#1: 6
                //DEBUG: s.Offset#1: 23
                //DEBUG: s.CopyR#1: 27
                //DEBUG: e.Vars#1: 7
                //DEBUG: e.Result#1: 11
                //DEBUG: e.Commands#1: 17
                //DEBUG: e.Vars-B#2: 33
                //DEBUG: e.Vars-E#2: 35
                //DEBUG: s.Type#2: 42
                //DEBUG: s.IdL#2: 43
                //DEBUG: s.IdR#2: 44
                //DEBUG: s.CopyL#2: 46
                //DEBUG: e.B#3: 52
                //DEBUG: e.E#3: 54

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} s.Offset#1/23 # MULE/24 s.CopyR#1/27 {REMOVED TILE} & Decompile-Result$13?1/32 e.Vars-B#2/33 (/39 s.Type#2/42 {REMOVED TILE} e.Vars-E#2/35 >/29 </47 & Decompile-Result$13?2/51 e.B#3/52 s.Type#2/56 e.E#3/54 >/48 >/1 {REMOVED TILE}
                //RESULT: Tile{ [[ AsIs: </0 AsIs: & Decompile-Result/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Vars#1/7 AsIs: )/10 AsIs: (/13 AsIs: t.MB#1/15 AsIs: e.Result#1/11 HalfReuse: (/14 HalfReuse: s.Type2 #56/21 } Tile{ AsIs: s.IdL#2/43 AsIs: s.IdR#2/44 AsIs: '='/45 AsIs: s.CopyL#2/46 AsIs: s.CopyR#1/41 AsIs: )/40 } Tile{ AsIs: )/22 AsIs: e.Commands#1/17 HalfReuse: >/28 } Tile{ ]] }
                refalrts::reinit_open_bracket(context[14]);
                refalrts::reinit_svar( context[21], context[56] );
                refalrts::reinit_close_call(context[28]);
                refalrts::push_stack( vm, context[28] );
                refalrts::push_stack( vm, context[0] );
                refalrts::link_brackets( context[13], context[22] );
                refalrts::link_brackets( context[14], context[40] );
                refalrts::link_brackets( context[9], context[10] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = arg_end->next;
                res = refalrts::splice_evar( res, context[22], context[28] );
                res = refalrts::splice_evar( res, context[43], context[40] );
                refalrts::splice_to_freelist_open( vm, context[21], res );
                return refalrts::cSuccess;
              } while ( refalrts::open_evar_advance( context[52], context[53], context[49], context[50] ) );
            } while ( 0 );
            refalrts::stop_sentence(vm);

            refalrts::splice_to_freelist(vm, context[47], context[48]);
            continue;
          } while ( refalrts::open_evar_advance( context[33], context[34], context[30], context[31] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[28], context[29]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 '$'/15 e.Result#1/11 )/14 (/21 s.Offset1#1/23 # ECOND/24 s.Offset3#1/27 )/22 (/32 s.Offset2#1/40 # LABEL/41 e.Name#1/30 )/33 (/36 s.Offset3#1/39 # POPVF/38 )/37 e.Commands#1/28 >/1
      context[28] = context[17];
      context[29] = context[18];
      if( ! refalrts::char_term( '$', context[15] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_ECOND], context[24] ) )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[28], context[29] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_right( identifiers[ident_POPVF], context[34], context[35] );
      if( ! context[38] )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[39], context[27], context[34], context[35] ) )
        continue;
      if( ! refalrts::empty_seq( context[34], context[35] ) )
        continue;
      // closed e.Vars#1 as range 7
      // closed e.Result#1 as range 11
      // closed e.Commands#1 as range 28
      if( ! refalrts::svar_left( context[40], context[30], context[31] ) )
        continue;
      context[41] = refalrts::ident_left( identifiers[ident_LABEL], context[30], context[31] );
      if( ! context[41] )
        continue;
      // closed e.Name#1 as range 30
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset1#1: 23
      //DEBUG: s.Offset3#1: 27
      //DEBUG: e.Vars#1: 7
      //DEBUG: e.Result#1: 11
      //DEBUG: e.Commands#1: 28
      //DEBUG: s.Offset2#1: 40
      //DEBUG: e.Name#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset1#1/23 {REMOVED TILE} s.Offset3#1/27 {REMOVED TILE} s.Offset2#1/40 {REMOVED TILE} s.Offset3#1/39 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 HalfReuse: # Result/15 AsIs: e.Result#1/11 AsIs: )/14 AsIs: (/21 } Tile{ Reuse: # EndCondition/41 AsIs: e.Name#1/30 AsIs: )/33 HalfReuse: </36 } Tile{ Reuse: & Decompile-Pattern-Hole/4 AsIs: s.Level#1/5 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Add/24 } Tile{ AsIs: s.Top#1/6 HalfReuse: 3/9 } >/42 (/43 </44 Tile{ HalfReuse: & Add/38 } s.Top#1/6/45 1/46 >/47 Tile{ AsIs: )/22 AsIs: (/32 } </48 & Add/49 s.Top#1/6/50 2/51 >/52 Tile{ AsIs: )/10 } (/53 Tile{ AsIs: e.Vars#1/7 } Tile{ AsIs: )/37 AsIs: e.Commands#1/28 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::alloc_open_bracket(vm, context[43]);
      refalrts::alloc_open_call(vm, context[44]);
      refalrts::copy_stvar(vm, context[45], context[6]);
      refalrts::alloc_number(vm, context[46], 1UL);
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::alloc_open_call(vm, context[48]);
      refalrts::alloc_name(vm, context[49], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[50], context[6]);
      refalrts::alloc_number(vm, context[51], 2UL);
      refalrts::alloc_close_call(vm, context[52]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::reinit_ident(context[15], identifiers[ident_Result]);
      refalrts::update_ident(context[41], identifiers[ident_EndCondition]);
      refalrts::reinit_open_call(context[36]);
      refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_Hole]);
      refalrts::reinit_name(context[24], functions[efunc_Add]);
      refalrts::reinit_number(context[9], 3UL);
      refalrts::reinit_name(context[38], functions[efunc_Add]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[36] );
      refalrts::link_brackets( context[53], context[37] );
      refalrts::link_brackets( context[32], context[10] );
      refalrts::push_stack( vm, context[52] );
      refalrts::push_stack( vm, context[48] );
      refalrts::link_brackets( context[43], context[22] );
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[21], context[33] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[37];
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[53], context[53] );
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[48], context[52] );
      res = refalrts::splice_evar( res, context[22], context[32] );
      res = refalrts::splice_evar( res, context[45], context[47] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[42], context[44] );
      res = refalrts::splice_evar( res, context[6], context[9] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_evar( res, context[41], context[36] );
      res = refalrts::splice_evar( res, context[13], context[21] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Decompile-Result/4 s.new#16/5 s.new#17/6 (/9 e.new#18/7 )/10 (/13 '$'/15 e.new#19/11 )/14 (/21 s.new#20/23 # OUTEST/24 )/22 e.new#21/17 >/1
    if( ! refalrts::char_term( '$', context[15] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_OUTEST], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.new#18 as range 7
    // closed e.new#19 as range 11
    // closed e.new#21 as range 17
    do {
      // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 '$'/15 e.Result#1/11 )/14 (/21 s.Offset1#1/23 # OUTEST/24 )/22 (/29 s.Offset2#1/32 # OUTEST/31 )/30 e.Commands#1/25 >/1
      context[25] = context[17];
      context[26] = context[18];
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_right( identifiers[ident_OUTEST], context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Vars#1 as range 7
      // closed e.Result#1 as range 11
      // closed e.Commands#1 as range 25
      if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
        continue;
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;
      //DEBUG: s.Level#1: 5
      //DEBUG: s.Top#1: 6
      //DEBUG: s.Offset1#1: 23
      //DEBUG: e.Vars#1: 7
      //DEBUG: e.Result#1: 11
      //DEBUG: e.Commands#1: 25
      //DEBUG: s.Offset2#1: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Top#1/6 {REMOVED TILE} e.Vars#1/7 {REMOVED TILE} {REMOVED TILE} s.Offset1#1/23 {REMOVED TILE} s.Offset2#1/32 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 HalfReuse: # Result/15 AsIs: e.Result#1/11 AsIs: )/14 AsIs: (/21 } Tile{ Reuse: # NextSentence/24 AsIs: )/22 AsIs: (/29 } # NextSentence/33 Tile{ AsIs: )/10 } Tile{ AsIs: </0 Reuse: & Decompile-Pattern-NoHole/4 AsIs: s.Level#1/5 } '*'/34 Tile{ AsIs: (/9 } )/35 Tile{ HalfReuse: (/31 AsIs: )/30 AsIs: e.Commands#1/25 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[33], identifiers[ident_NextSentence]);
      refalrts::alloc_char(vm, context[34], '*');
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::reinit_ident(context[15], identifiers[ident_Result]);
      refalrts::update_ident(context[24], identifiers[ident_NextSentence]);
      refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_NoHole]);
      refalrts::reinit_open_bracket(context[31]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[31], context[30] );
      refalrts::link_brackets( context[9], context[35] );
      refalrts::link_brackets( context[29], context[10] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[31];
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[24], context[29] );
      res = refalrts::splice_evar( res, context[13], context[21] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 '$'/15 e.Result#1/11 )/14 (/21 s.Offset#1/23 # OUTEST/24 )/22 e.Commands#1/17 >/1
    // closed e.Vars#1 as range 7
    // closed e.Result#1 as range 11
    // closed e.Commands#1 as range 17
    //DEBUG: s.Level#1: 5
    //DEBUG: s.Top#1: 6
    //DEBUG: s.Offset#1: 23
    //DEBUG: e.Vars#1: 7
    //DEBUG: e.Result#1: 11
    //DEBUG: e.Commands#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Top#1/6 {REMOVED TILE} e.Vars#1/7 {REMOVED TILE} {REMOVED TILE} s.Offset#1/23 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/13 HalfReuse: # Result/15 AsIs: e.Result#1/11 AsIs: )/14 AsIs: (/21 } # NextSentence/25 Tile{ AsIs: )/10 } Tile{ AsIs: </0 Reuse: & Decompile-Pattern-NoHole/4 AsIs: s.Level#1/5 } '*'/26 Tile{ AsIs: (/9 } )/27 Tile{ HalfReuse: (/24 AsIs: )/22 AsIs: e.Commands#1/17 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[25], identifiers[ident_NextSentence]);
    refalrts::alloc_char(vm, context[26], '*');
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::reinit_ident(context[15], identifiers[ident_Result]);
    refalrts::update_name(context[4], functions[efunc_Decompilem_Patternm_NoHole]);
    refalrts::reinit_open_bracket(context[24]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[24], context[22] );
    refalrts::link_brackets( context[9], context[27] );
    refalrts::link_brackets( context[21], context[10] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[13], context[21] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Decompile-Result/4 s.Level#1/5 s.Top#1/6 (/9 e.Vars#1/7 )/10 (/13 t.MB#1/15 e.Result#1/11 )/14 e.Commands#1/2 >/1
  // closed e.Vars#1 as range 7
  // closed e.Result#1 as range 11
  // closed e.Commands#1 as range 2
  //DEBUG: t.MB#1: 15
  //DEBUG: s.Level#1: 5
  //DEBUG: s.Top#1: 6
  //DEBUG: e.Vars#1: 7
  //DEBUG: e.Result#1: 11
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/17 Tile{ HalfReuse: '='/1 } Tile{ HalfReuse: 'C'/0 HalfReuse: ' '/4 AsIs: s.Level#1/5 AsIs: s.Top#1/6 AsIs: (/9 AsIs: e.Vars#1/7 AsIs: )/10 AsIs: (/13 AsIs: t.MB#1/15 AsIs: e.Result#1/11 AsIs: )/14 } )/18 Tile{ AsIs: e.Commands#1/2 } Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::reinit_char(context[1], '=');
  refalrts::reinit_char(context[0], 'C');
  refalrts::reinit_char(context[4], ' ');
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Decompilem_Result("Decompile-Result", 982870901U, 3115847316U, func_Decompilem_Result);


static refalrts::FnResult func_CollectSegments(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CollectSegments/4 e.Segments#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Segments#1 as range 2
  //DEBUG: e.Segments#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoCollectSegments/6 0/7 (/8 ' '/9 Tile{ HalfReuse: ' '/0 HalfReuse: )/4 AsIs: e.Segments#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_DoCollectSegments]);
  refalrts::alloc_number(vm, context[7], 0UL);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_char(vm, context[9], ' ');
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CollectSegments("CollectSegments", 982870901U, 3115847316U, func_CollectSegments);


static refalrts::FnResult func_DoCollectSegments(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 70 elems
  refalrts::Iter context[70];
  refalrts::zeros( context, 70 );
  // </0 & DoCollectSegments/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoCollectSegments/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  // closed e.new#3 as range 2
  do {
    // </0 & DoCollectSegments/4 s.new#4/5 (/8 e.new#5/6 )/9 (/14 s.new#6/16 e.new#7/12 )/15 e.new#8/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.new#5 as range 6
    // closed e.new#8 as range 10
    if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & DoCollectSegments/4 s.Level#1/5 (/8 e.Indent#1/6 )/9 (/14 # Pattern/16 s.Level#1/19 e.Pattern#1/17 )/15 e.Segments#1/10 >/1
      context[17] = context[12];
      context[18] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_Pattern], context[16] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[19], context[5], context[17], context[18] ) )
        continue;
      // closed e.Indent#1 as range 6
      // closed e.Pattern#1 as range 17
      // closed e.Segments#1 as range 10
      //DEBUG: s.Level#1: 5
      //DEBUG: e.Indent#1: 6
      //DEBUG: e.Pattern#1: 17
      //DEBUG: e.Segments#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Level#1/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </20 Tile{ HalfReuse: & FormatExpr/16 } Tile{ AsIs: (/14 } e.Indent#1/6/21 )/23 (/24 e.Indent#1/6/25 Tile{ AsIs: )/15 } Tile{ AsIs: e.Pattern#1/17 } >/27 Tile{ AsIs: </0 AsIs: & DoCollectSegments/4 AsIs: s.Level#1/5 AsIs: (/8 AsIs: e.Indent#1/6 AsIs: )/9 } Tile{ AsIs: e.Segments#1/10 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::copy_evar(vm, context[21], context[22], context[6], context[7]);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::copy_evar(vm, context[25], context[26], context[6], context[7]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::reinit_name(context[16], functions[efunc_FormatExpr]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[20] );
      refalrts::link_brackets( context[24], context[15] );
      refalrts::link_brackets( context[14], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoCollectSegments/4 s.new#9/5 (/8 e.new#10/6 )/9 (/14 s.new#11/16 e.new#12/12 )/15 (/21 s.new#13/23 e.new#14/19 )/22 e.new#15/17 >/1
      context[17] = context[10];
      context[18] = context[11];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.new#10 as range 6
      // closed e.new#12 as range 12
      // closed e.new#15 as range 17
      if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
        continue;
      // closed e.new#14 as range 19
      do {
        // </0 & DoCollectSegments/4 s.new#16/5 (/8 e.new#17/6 )/9 (/14 # StartCondition/16 )/15 (/21 # Result/23 e.new#18/19 )/22 (/28 # EndCondition/30 e.new#19/26 )/29 (/33 s.new#20/35 e.new#21/31 )/34 e.new#22/24 >/1
        context[24] = context[17];
        context[25] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_StartCondition], context[16] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_Result], context[23] ) )
          continue;
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = refalrts::ident_left( identifiers[ident_EndCondition], context[26], context[27] );
        if( ! context[30] )
          continue;
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::brackets_left( context[31], context[32], context[24], context[25] );
        if( ! context[33] )
          continue;
        refalrts::bracket_pointers(context[33], context[34]);
        if( ! refalrts::empty_seq( context[12], context[13] ) )
          continue;
        // closed e.new#17 as range 6
        // closed e.new#18 as range 19
        // closed e.new#19 as range 26
        // closed e.new#22 as range 24
        if( ! refalrts::svar_left( context[35], context[31], context[32] ) )
          continue;
        // closed e.new#21 as range 31
        do {
          // </0 & DoCollectSegments/4 s.Level#1/5 (/8 e.Indent#1/6 )/9 (/14 # StartCondition/16 )/15 (/21 # Result/23 e.Result#1/19 )/22 (/28 # EndCondition/30 e.Name#1/26 )/29 (/33 # Pattern/35 s.Level#1/38 e.Pattern#1/36 )/34 e.Segments#1/24 >/1
          context[36] = context[31];
          context[37] = context[32];
          if( ! refalrts::ident_term( identifiers[ident_Pattern], context[35] ) )
            continue;
          if( ! refalrts::repeated_stvar_left( vm, context[38], context[5], context[36], context[37] ) )
            continue;
          // closed e.Indent#1 as range 6
          // closed e.Result#1 as range 19
          // closed e.Name#1 as range 26
          // closed e.Pattern#1 as range 36
          // closed e.Segments#1 as range 24
          //DEBUG: s.Level#1: 5
          //DEBUG: e.Indent#1: 6
          //DEBUG: e.Result#1: 19
          //DEBUG: e.Name#1: 26
          //DEBUG: e.Pattern#1: 36
          //DEBUG: e.Segments#1: 24

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Level#1/38 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/39 '*'/40 e.Indent#1/6/41"  "/43 Tile{ HalfReuse: ' '/35 } </45 & FormatWord/46 Tile{ AsIs: e.Name#1/26 } >/47 )/48 </49 & FormatExpr/50 (/51 e.Indent#1/6/52"  , "/54 Tile{ AsIs: )/29 AsIs: (/33 } e.Indent#1/6/56 Tile{ HalfReuse: ' '/14 HalfReuse: ' '/16 HalfReuse: ' '/15 HalfReuse: ' '/21 HalfReuse: )/23 AsIs: e.Result#1/19 HalfReuse: >/22 HalfReuse: </28 HalfReuse: & FormatExpr/30 } (/58 e.Indent#1/6/59"  : "/61 Tile{ AsIs: )/34 } (/63 e.Indent#1/6/64"    "/66 )/68 Tile{ AsIs: e.Pattern#1/36 } >/69 Tile{ AsIs: </0 AsIs: & DoCollectSegments/4 AsIs: s.Level#1/5 AsIs: (/8 AsIs: e.Indent#1/6 AsIs: )/9 } Tile{ AsIs: e.Segments#1/24 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[39]);
          refalrts::alloc_char(vm, context[40], '*');
          refalrts::copy_evar(vm, context[41], context[42], context[6], context[7]);
          refalrts::alloc_chars(vm, context[43], context[44], "  ", 2);
          refalrts::alloc_open_call(vm, context[45]);
          refalrts::alloc_name(vm, context[46], functions[efunc_FormatWord]);
          refalrts::alloc_close_call(vm, context[47]);
          refalrts::alloc_close_bracket(vm, context[48]);
          refalrts::alloc_open_call(vm, context[49]);
          refalrts::alloc_name(vm, context[50], functions[efunc_FormatExpr]);
          refalrts::alloc_open_bracket(vm, context[51]);
          refalrts::copy_evar(vm, context[52], context[53], context[6], context[7]);
          refalrts::alloc_chars(vm, context[54], context[55], "  , ", 4);
          refalrts::copy_evar(vm, context[56], context[57], context[6], context[7]);
          refalrts::alloc_open_bracket(vm, context[58]);
          refalrts::copy_evar(vm, context[59], context[60], context[6], context[7]);
          refalrts::alloc_chars(vm, context[61], context[62], "  : ", 4);
          refalrts::alloc_open_bracket(vm, context[63]);
          refalrts::copy_evar(vm, context[64], context[65], context[6], context[7]);
          refalrts::alloc_chars(vm, context[66], context[67], "    ", 4);
          refalrts::alloc_close_bracket(vm, context[68]);
          refalrts::alloc_close_call(vm, context[69]);
          refalrts::reinit_char(context[35], ' ');
          refalrts::reinit_char(context[14], ' ');
          refalrts::reinit_char(context[16], ' ');
          refalrts::reinit_char(context[15], ' ');
          refalrts::reinit_char(context[21], ' ');
          refalrts::reinit_close_bracket(context[23]);
          refalrts::reinit_close_call(context[22]);
          refalrts::reinit_open_call(context[28]);
          refalrts::reinit_name(context[30], functions[efunc_FormatExpr]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[8], context[9] );
          refalrts::push_stack( vm, context[69] );
          refalrts::push_stack( vm, context[28] );
          refalrts::link_brackets( context[63], context[68] );
          refalrts::link_brackets( context[58], context[34] );
          refalrts::push_stack( vm, context[22] );
          refalrts::push_stack( vm, context[49] );
          refalrts::link_brackets( context[33], context[23] );
          refalrts::link_brackets( context[51], context[29] );
          refalrts::link_brackets( context[39], context[48] );
          refalrts::push_stack( vm, context[47] );
          refalrts::push_stack( vm, context[45] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[0], context[9] );
          res = refalrts::splice_evar( res, context[69], context[69] );
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_evar( res, context[63], context[68] );
          res = refalrts::splice_evar( res, context[34], context[34] );
          res = refalrts::splice_evar( res, context[58], context[62] );
          res = refalrts::splice_evar( res, context[14], context[30] );
          res = refalrts::splice_evar( res, context[56], context[57] );
          res = refalrts::splice_evar( res, context[29], context[33] );
          res = refalrts::splice_evar( res, context[47], context[55] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_evar( res, context[35], context[35] );
          res = refalrts::splice_evar( res, context[39], context[44] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoCollectSegments/4 s.Level#1/5 (/8 e.Indent#1/6 )/9 (/14 # StartCondition/16 )/15 (/21 # Result/23 e.Result#1/19 )/22 (/28 # EndCondition/30 e.Name#1/26 )/29 (/33 # StartBlock/35 )/34 e.Segments#1/24 >/1
        if( ! refalrts::ident_term( identifiers[ident_StartBlock], context[35] ) )
          continue;
        if( ! refalrts::empty_seq( context[31], context[32] ) )
          continue;
        // closed e.Indent#1 as range 6
        // closed e.Result#1 as range 19
        // closed e.Name#1 as range 26
        // closed e.Segments#1 as range 24
        //DEBUG: s.Level#1: 5
        //DEBUG: e.Indent#1: 6
        //DEBUG: e.Result#1: 19
        //DEBUG: e.Name#1: 26
        //DEBUG: e.Segments#1: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/36 '*'/37 Tile{ AsIs: e.Indent#1/6 }"   "/38 </40 & FormatWord/41 Tile{ AsIs: e.Name#1/26 } Tile{ HalfReuse: >/30 } Tile{ AsIs: )/9 } </42 & FormatExpr/43 (/44 e.Indent#1/6/45"  , "/47 )/49 (/50 e.Indent#1/6/51 Tile{ HalfReuse: ' '/14 HalfReuse: ' '/16 HalfReuse: ' '/15 HalfReuse: ' '/21 HalfReuse: )/23 AsIs: e.Result#1/19 HalfReuse: >/22 AsIs: (/28 } e.Indent#1/6/53"  : {"/55 )/57 </58 & DoCollectSegments/59 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Level#1/5 HalfReuse: >/8 } (/60 e.Indent#1/6/61"   "/63 Tile{ HalfReuse: ' '/29 HalfReuse: ' '/33 HalfReuse: ' '/35 AsIs: )/34 AsIs: e.Segments#1/24 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[36]);
        refalrts::alloc_char(vm, context[37], '*');
        refalrts::alloc_chars(vm, context[38], context[39], "   ", 3);
        refalrts::alloc_open_call(vm, context[40]);
        refalrts::alloc_name(vm, context[41], functions[efunc_FormatWord]);
        refalrts::alloc_open_call(vm, context[42]);
        refalrts::alloc_name(vm, context[43], functions[efunc_FormatExpr]);
        refalrts::alloc_open_bracket(vm, context[44]);
        refalrts::copy_evar(vm, context[45], context[46], context[6], context[7]);
        refalrts::alloc_chars(vm, context[47], context[48], "  , ", 4);
        refalrts::alloc_close_bracket(vm, context[49]);
        refalrts::alloc_open_bracket(vm, context[50]);
        refalrts::copy_evar(vm, context[51], context[52], context[6], context[7]);
        refalrts::copy_evar(vm, context[53], context[54], context[6], context[7]);
        refalrts::alloc_chars(vm, context[55], context[56], "  : {", 5);
        refalrts::alloc_close_bracket(vm, context[57]);
        refalrts::alloc_open_call(vm, context[58]);
        refalrts::alloc_name(vm, context[59], functions[efunc_DoCollectSegments]);
        refalrts::alloc_open_bracket(vm, context[60]);
        refalrts::copy_evar(vm, context[61], context[62], context[6], context[7]);
        refalrts::alloc_chars(vm, context[63], context[64], "   ", 3);
        refalrts::reinit_close_call(context[30]);
        refalrts::reinit_char(context[14], ' ');
        refalrts::reinit_char(context[16], ' ');
        refalrts::reinit_char(context[15], ' ');
        refalrts::reinit_char(context[21], ' ');
        refalrts::reinit_close_bracket(context[23]);
        refalrts::reinit_close_call(context[22]);
        refalrts::update_name(context[4], functions[efunc_Inc]);
        refalrts::reinit_close_call(context[8]);
        refalrts::reinit_char(context[29], ' ');
        refalrts::reinit_char(context[33], ' ');
        refalrts::reinit_char(context[35], ' ');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[58] );
        refalrts::link_brackets( context[60], context[34] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[28], context[57] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[42] );
        refalrts::link_brackets( context[50], context[23] );
        refalrts::link_brackets( context[44], context[49] );
        refalrts::link_brackets( context[36], context[9] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[40] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[29];
        res = refalrts::splice_evar( res, context[60], context[64] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[55], context[59] );
        res = refalrts::splice_evar( res, context[53], context[54] );
        res = refalrts::splice_evar( res, context[14], context[28] );
        res = refalrts::splice_evar( res, context[51], context[52] );
        res = refalrts::splice_evar( res, context[42], context[50] );
        res = refalrts::splice_evar( res, context[9], context[9] );
        res = refalrts::splice_evar( res, context[30], context[30] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[38], context[41] );
        res = refalrts::splice_evar( res, context[6], context[7] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoCollectSegments/4 s.Level#1/5 (/8 e.Indent#1/6 )/9 (/14 # Result/16 e.Result#1/12 )/15 (/21 # NextSentence/23 )/22 e.Segments#1/17 >/1
      if( ! refalrts::ident_term( identifiers[ident_Result], context[16] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_NextSentence], context[23] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.Indent#1 as range 6
      // closed e.Result#1 as range 12
      // closed e.Segments#1 as range 17
      //DEBUG: s.Level#1: 5
      //DEBUG: e.Indent#1: 6
      //DEBUG: e.Result#1: 12
      //DEBUG: e.Segments#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </24 & FormatExpr/25 (/26 e.Indent#1/6/27"  = "/29 )/31 (/32 e.Indent#1/6/33"   "/35 Tile{ HalfReuse: ' '/14 HalfReuse: )/16 AsIs: e.Result#1/12 HalfReuse: ';'/15 HalfReuse: >/21 HalfReuse: (/23 AsIs: )/22 } Tile{ AsIs: </0 AsIs: & DoCollectSegments/4 AsIs: s.Level#1/5 AsIs: (/8 AsIs: e.Indent#1/6 AsIs: )/9 } Tile{ AsIs: e.Segments#1/17 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_FormatExpr]);
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::copy_evar(vm, context[27], context[28], context[6], context[7]);
      refalrts::alloc_chars(vm, context[29], context[30], "  = ", 4);
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::alloc_open_bracket(vm, context[32]);
      refalrts::copy_evar(vm, context[33], context[34], context[6], context[7]);
      refalrts::alloc_chars(vm, context[35], context[36], "   ", 3);
      refalrts::reinit_char(context[14], ' ');
      refalrts::reinit_close_bracket(context[16]);
      refalrts::reinit_char(context[15], ';');
      refalrts::reinit_close_call(context[21]);
      refalrts::reinit_open_bracket(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[23], context[22] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[32], context[16] );
      refalrts::link_brackets( context[26], context[31] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[14], context[22] );
      res = refalrts::splice_evar( res, context[24], context[36] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoCollectSegments/4 s.new#9/5 (/8 e.new#10/17 ' '/20 ' '/19 )/9 (/14 s.new#11/16 e.new#12/12 )/15 e.new#13/10 >/1
      context[17] = context[6];
      context[18] = context[7];
      context[19] = refalrts::char_right( ' ', context[17], context[18] );
      if( ! context[19] )
        continue;
      context[20] = refalrts::char_right( ' ', context[17], context[18] );
      if( ! context[20] )
        continue;
      // closed e.new#10 as range 17
      // closed e.new#12 as range 12
      // closed e.new#13 as range 10
      do {
        // </0 & DoCollectSegments/4 s.Level#1/5 (/8 e.Indent#1/21 ' '/28 ' '/27 ' '/26 ' '/25 ' '/20 ' '/19 )/9 (/14 # Pattern/16 s.PatternLevel#1/29 e.Pattern#1/23 )/15 e.Segments#1/10 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[12];
        context[24] = context[13];
        if( ! refalrts::ident_term( identifiers[ident_Pattern], context[16] ) )
          continue;
        context[25] = refalrts::char_right( ' ', context[21], context[22] );
        if( ! context[25] )
          continue;
        context[26] = refalrts::char_right( ' ', context[21], context[22] );
        if( ! context[26] )
          continue;
        context[27] = refalrts::char_right( ' ', context[21], context[22] );
        if( ! context[27] )
          continue;
        context[28] = refalrts::char_right( ' ', context[21], context[22] );
        if( ! context[28] )
          continue;
        // closed e.Indent#1 as range 21
        // closed e.Segments#1 as range 10
        if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
          continue;
        // closed e.Pattern#1 as range 23
        //DEBUG: s.Level#1: 5
        //DEBUG: e.Indent#1: 21
        //DEBUG: e.Segments#1: 10
        //DEBUG: s.PatternLevel#1: 29
        //DEBUG: e.Pattern#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Indent#1/21 AsIs: ' '/28 AsIs: ' '/27 AsIs: ' '/26 AsIs: ' '/25 Reuse: '}'/20 Reuse: ';'/19 AsIs: )/9 AsIs: (/14 HalfReuse: )/16 } </30 & DoCollectSegments/31 Tile{ AsIs: </0 Reuse: & Dec/4 AsIs: s.Level#1/5 } >/32 (/33 e.Indent#1/21/34 )/36 (/37 # Pattern/38 Tile{ AsIs: s.PatternLevel#1/29 AsIs: e.Pattern#1/23 AsIs: )/15 AsIs: e.Segments#1/10 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_DoCollectSegments]);
        refalrts::alloc_close_call(vm, context[32]);
        refalrts::alloc_open_bracket(vm, context[33]);
        refalrts::copy_evar(vm, context[34], context[35], context[21], context[22]);
        refalrts::alloc_close_bracket(vm, context[36]);
        refalrts::alloc_open_bracket(vm, context[37]);
        refalrts::alloc_ident(vm, context[38], identifiers[ident_Pattern]);
        refalrts::update_char(context[20], '}');
        refalrts::update_char(context[19], ';');
        refalrts::reinit_close_bracket(context[16]);
        refalrts::update_name(context[4], functions[efunc_Dec]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[30] );
        refalrts::link_brackets( context[37], context[15] );
        refalrts::link_brackets( context[33], context[36] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[14], context[16] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[29];
        res = refalrts::splice_evar( res, context[32], context[38] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[8], context[16] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoCollectSegments/4 s.new#14/5 (/8 e.new#15/17 ' '/20 ' '/19 )/9 (/14 # EndOfFunction/16 )/15 >/1
      if( ! refalrts::ident_term( identifiers[ident_EndOfFunction], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      // closed e.new#15 as range 17
      do {
        // </0 & DoCollectSegments/4 0/5 (/8 ' '/20 ' '/19 )/9 (/14 # EndOfFunction/16 )/15 >/1
        if( ! refalrts::number_term( 0UL, context[5] ) )
          continue;
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & DoCollectSegments/4 0/5 (/8 ' '/20 ' '/19 )/9 (/14 # EndOfFunction/16 )/15 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ ]] }
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoCollectSegments/4 s.Level#1/5 (/8 e.Indent#1/21 ' '/26 ' '/25 ' '/24 ' '/23 ' '/20 ' '/19 )/9 (/14 # EndOfFunction/16 )/15 >/1
      context[21] = context[17];
      context[22] = context[18];
      context[23] = refalrts::char_right( ' ', context[21], context[22] );
      if( ! context[23] )
        continue;
      context[24] = refalrts::char_right( ' ', context[21], context[22] );
      if( ! context[24] )
        continue;
      context[25] = refalrts::char_right( ' ', context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = refalrts::char_right( ' ', context[21], context[22] );
      if( ! context[26] )
        continue;
      // closed e.Indent#1 as range 21
      //DEBUG: s.Level#1: 5
      //DEBUG: e.Indent#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Indent#1/21 AsIs: ' '/26 AsIs: ' '/25 AsIs: ' '/24 AsIs: ' '/23 Reuse: '}'/20 Reuse: ';'/19 AsIs: )/9 HalfReuse: </14 HalfReuse: & DoCollectSegments/16 HalfReuse: </15 HalfReuse: & Dec/1 } Tile{ AsIs: s.Level#1/5 } Tile{ HalfReuse: >/0 HalfReuse: (/4 } e.Indent#1/21/27 )/29 (/30 # EndOfFunction/31 )/32 >/33 Tile{ ]] }
      refalrts::copy_evar(vm, context[27], context[28], context[21], context[22]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_ident(vm, context[31], identifiers[ident_EndOfFunction]);
      refalrts::alloc_close_bracket(vm, context[32]);
      refalrts::alloc_close_call(vm, context[33]);
      refalrts::update_char(context[20], '}');
      refalrts::update_char(context[19], ';');
      refalrts::reinit_open_call(context[14]);
      refalrts::reinit_name(context[16], functions[efunc_DoCollectSegments]);
      refalrts::reinit_open_call(context[15]);
      refalrts::reinit_name(context[1], functions[efunc_Dec]);
      refalrts::reinit_close_call(context[0]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[14] );
      refalrts::link_brackets( context[30], context[32] );
      refalrts::link_brackets( context[4], context[29] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[15] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[33] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[5], context[5] );
      res = refalrts::splice_evar( res, context[8], context[1] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoCollectSegments/4 s.Level#1/5 (/8 e.Indent#1/6 )/9 (/14 # NextSentence/16 )/15 e.Segments#1/10 >/1
    if( ! refalrts::ident_term( identifiers[ident_NextSentence], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    // closed e.Indent#1 as range 6
    // closed e.Segments#1 as range 10
    //DEBUG: s.Level#1: 5
    //DEBUG: e.Indent#1: 6
    //DEBUG: e.Segments#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/17"* unexpected OUTEST comma"/18 Tile{ HalfReuse: 'n'/14 HalfReuse: 'd'/16 AsIs: )/15 } Tile{ AsIs: </0 AsIs: & DoCollectSegments/4 AsIs: s.Level#1/5 AsIs: (/8 AsIs: e.Indent#1/6 AsIs: )/9 } Tile{ AsIs: e.Segments#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_chars(vm, context[18], context[19], "* unexpected OUTEST comma", 25);
    refalrts::reinit_char(context[14], 'n');
    refalrts::reinit_char(context[16], 'd');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[17], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[17], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCollectSegments/4 s.Level#1/5 (/8 e.Indent#1/6 )/9 e.Segments#1/2 >/1
  // closed e.Indent#1 as range 6
  // closed e.Segments#1 as range 2
  //DEBUG: s.Level#1: 5
  //DEBUG: e.Indent#1: 6
  //DEBUG: e.Segments#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Level#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: '*'/4 }" WT"/10 Tile{ HalfReuse: 'F'/1 }"!!!!"/12 )/14 (/15 Tile{ HalfReuse: '\"'/8 AsIs: e.Indent#1/6 HalfReuse: '\"'/9 } )/16 Tile{ AsIs: e.Segments#1/2 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[10], context[11], " WT", 3);
  refalrts::alloc_chars(vm, context[12], context[13], "!!!!", 4);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_char(context[4], '*');
  refalrts::reinit_char(context[1], 'F');
  refalrts::reinit_char(context[8], '\"');
  refalrts::reinit_char(context[9], '\"');
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[0], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoCollectSegments("DoCollectSegments", 982870901U, 3115847316U, func_DoCollectSegments);


static refalrts::FnResult func_FormatExpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & FormatExpr/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FormatExpr/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 2
  do {
    // </0 & FormatExpr/4 (/7 e.Prefix#1/5 )/8 (/11 e.Indent#1/9 )/12 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Prefix#1 as range 5
    // closed e.Indent#1 as range 9
    //DEBUG: e.Prefix#1: 5
    //DEBUG: e.Indent#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Indent#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Prefix#1/5 HalfReuse: '/'/8 HalfReuse: '*'/11 } Tile{ HalfReuse: 'e'/0 HalfReuse: 'm'/4 }"pty*"/13 Tile{ HalfReuse: '/'/12 HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[13], context[14], "pty*", 4);
    refalrts::reinit_char(context[8], '/');
    refalrts::reinit_char(context[11], '*');
    refalrts::reinit_char(context[0], 'e');
    refalrts::reinit_char(context[4], 'm');
    refalrts::reinit_char(context[12], '/');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FormatExpr/4 (/7 e.Prefix#1/5 )/8 (/11 e.Indent#1/9 )/12 ';'/15 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = refalrts::char_left( ';', context[13], context[14] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Prefix#1 as range 5
    // closed e.Indent#1 as range 9
    //DEBUG: e.Prefix#1: 5
    //DEBUG: e.Indent#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Indent#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Prefix#1/5 HalfReuse: '/'/8 HalfReuse: '*'/11 } Tile{ HalfReuse: 'e'/0 HalfReuse: 'm'/4 }"pty*"/16 Tile{ HalfReuse: '/'/12 AsIs: ';'/15 HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[16], context[17], "pty*", 4);
    refalrts::reinit_char(context[8], '/');
    refalrts::reinit_char(context[11], '*');
    refalrts::reinit_char(context[0], 'e');
    refalrts::reinit_char(context[4], 'm');
    refalrts::reinit_char(context[12], '/');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FormatExpr/4 (/7 e.Prefix#1/5 )/8 (/11 e.Indent#1/9 )/12 e.Expr#1/2 >/1
  // closed e.Prefix#1 as range 5
  // closed e.Indent#1 as range 9
  // closed e.Expr#1 as range 2
  //DEBUG: e.Prefix#1: 5
  //DEBUG: e.Indent#1: 9
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & DoFormatExpr/14 (/15 </16 & LIMIT/17 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Prefix#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Indent#1/9 AsIs: )/12 } (/18 )/19 Tile{ AsIs: e.Expr#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_DoFormatExpr]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_LIMIT]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::reinit_close_call(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[4] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FormatExpr("FormatExpr", 982870901U, 3115847316U, func_FormatExpr);


static refalrts::FnResult func_LIMIT(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & LIMIT/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & LIMIT/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 60/1 ]] }
  refalrts::reinit_number(context[1], 60UL);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LIMIT("LIMIT", 982870901U, 3115847316U, func_LIMIT);


static refalrts::FnResult func_gen_DoFormatExpr_S6A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoFormatExpr$6=1/4 s.Limit#1/5 (/8 e.Prefix#1/6 )/9 (/12 e.Indent#1/10 )/13 (/16 e.Result#1/14 )/17 (/20 e.Tail#1/18 )/21 s.Len#2/22 e.WordRep#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.Prefix#1 as range 6
  // closed e.Indent#1 as range 10
  // closed e.Result#1 as range 14
  // closed e.Tail#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.WordRep#2 as range 2
  //DEBUG: s.Limit#1: 5
  //DEBUG: e.Prefix#1: 6
  //DEBUG: e.Indent#1: 10
  //DEBUG: e.Result#1: 14
  //DEBUG: e.Tail#1: 18
  //DEBUG: s.Len#2: 22
  //DEBUG: e.WordRep#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Limit#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFormatExpr/4 } Tile{ AsIs: (/20 } </23 & Sub/24 Tile{ HalfReuse: s.Limit1 #5/21 AsIs: s.Len#2/22 } >/25 Tile{ AsIs: )/17 } Tile{ AsIs: (/8 AsIs: e.Prefix#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Indent#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Result#1/14 } Tile{ AsIs: e.WordRep#2/2 } )/26 Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_Sub]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_DoFormatExpr]);
  refalrts::reinit_svar( context[21], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[16], context[26] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[20], context[17] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFormatExpr_S6A1("DoFormatExpr$6=1", 982870901U, 3115847316U, func_gen_DoFormatExpr_S6A1);


static refalrts::FnResult func_gen_DoFormatExpr_S7A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoFormatExpr$7=1/4 s.Limit#1/5 (/8 e.Prefix#1/6 )/9 (/12 e.Indent#1/10 )/13 (/16 e.Result#1/14 )/17 (/20 e.Tail#1/18 )/21 s.Len#2/22 e.NumberRep#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.Prefix#1 as range 6
  // closed e.Indent#1 as range 10
  // closed e.Result#1 as range 14
  // closed e.Tail#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NumberRep#2 as range 2
  //DEBUG: s.Limit#1: 5
  //DEBUG: e.Prefix#1: 6
  //DEBUG: e.Indent#1: 10
  //DEBUG: e.Result#1: 14
  //DEBUG: e.Tail#1: 18
  //DEBUG: s.Len#2: 22
  //DEBUG: e.NumberRep#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Limit#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFormatExpr/4 } Tile{ AsIs: (/20 } </23 & Sub/24 Tile{ HalfReuse: s.Limit1 #5/21 AsIs: s.Len#2/22 } >/25 Tile{ AsIs: )/17 } Tile{ AsIs: (/8 AsIs: e.Prefix#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Indent#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Result#1/14 } Tile{ AsIs: e.NumberRep#2/2 } )/26 Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_Sub]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_DoFormatExpr]);
  refalrts::reinit_svar( context[21], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[16], context[26] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[20], context[17] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFormatExpr_S7A1("DoFormatExpr$7=1", 982870901U, 3115847316U, func_gen_DoFormatExpr_S7A1);


static refalrts::FnResult func_gen_DoFormatExpr_S9A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & DoFormatExpr$9=1/4 s.Limit#1/5 (/8 e.Prefix#1/6 )/9 (/12 e.Indent#1/10 )/13 (/16 e.Result#1/14 )/17 (/20 e.Chars#1/18 )/21 (/24 e.Tail#1/22 )/25 s.Len#2/26 e.CharRep#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.Prefix#1 as range 6
  // closed e.Indent#1 as range 10
  // closed e.Result#1 as range 14
  // closed e.Chars#1 as range 18
  // closed e.Tail#1 as range 22
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CharRep#2 as range 2
  //DEBUG: s.Limit#1: 5
  //DEBUG: e.Prefix#1: 6
  //DEBUG: e.Indent#1: 10
  //DEBUG: e.Result#1: 14
  //DEBUG: e.Chars#1: 18
  //DEBUG: e.Tail#1: 22
  //DEBUG: s.Len#2: 26
  //DEBUG: e.CharRep#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Limit#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFormatExpr/4 } Tile{ AsIs: (/24 } </27 & Sub/28 Tile{ HalfReuse: s.Limit1 #5/25 AsIs: s.Len#2/26 } >/29 )/30 Tile{ AsIs: (/8 AsIs: e.Prefix#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Indent#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Result#1/14 } Tile{ AsIs: e.CharRep#2/2 } '\''/31 )/32 Tile{ HalfReuse: (/17 HalfReuse: # C/20 AsIs: e.Chars#1/18 AsIs: )/21 } Tile{ AsIs: e.Tail#1/22 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_Sub]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_char(vm, context[31], '\'');
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::update_name(context[4], functions[efunc_DoFormatExpr]);
  refalrts::reinit_svar( context[25], context[5] );
  refalrts::reinit_open_bracket(context[17]);
  refalrts::reinit_ident(context[20], identifiers[ident_C]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[21] );
  refalrts::link_brackets( context[16], context[32] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[24], context[30] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[27] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFormatExpr_S9A1("DoFormatExpr$9=1", 982870901U, 3115847316U, func_gen_DoFormatExpr_S9A1);


static refalrts::FnResult func_gen_DoFormatExpr_S10A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & DoFormatExpr$10=1/4 s.Limit#1/5 (/8 e.Prefix#1/6 )/9 (/12 e.Indent#1/10 )/13 (/16 e.Result#1/14 )/17 (/20 e.Chars#1/18 )/21 (/24 e.Tail#1/22 )/25 s.Len#2/26 e.CharRep#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.Prefix#1 as range 6
  // closed e.Indent#1 as range 10
  // closed e.Result#1 as range 14
  // closed e.Chars#1 as range 18
  // closed e.Tail#1 as range 22
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CharRep#2 as range 2
  //DEBUG: s.Limit#1: 5
  //DEBUG: e.Prefix#1: 6
  //DEBUG: e.Indent#1: 10
  //DEBUG: e.Result#1: 14
  //DEBUG: e.Chars#1: 18
  //DEBUG: e.Tail#1: 22
  //DEBUG: s.Len#2: 26
  //DEBUG: e.CharRep#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Limit#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFormatExpr/4 } Tile{ AsIs: (/24 } </27 & Sub/28 Tile{ HalfReuse: s.Limit1 #5/25 AsIs: s.Len#2/26 } >/29 )/30 Tile{ AsIs: (/8 AsIs: e.Prefix#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Indent#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Result#1/14 } Tile{ AsIs: e.CharRep#2/2 } )/31 Tile{ HalfReuse: (/17 HalfReuse: # C/20 AsIs: e.Chars#1/18 AsIs: )/21 } Tile{ AsIs: e.Tail#1/22 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_Sub]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::update_name(context[4], functions[efunc_DoFormatExpr]);
  refalrts::reinit_svar( context[25], context[5] );
  refalrts::reinit_open_bracket(context[17]);
  refalrts::reinit_ident(context[20], identifiers[ident_C]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[21] );
  refalrts::link_brackets( context[16], context[31] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[24], context[30] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[27] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFormatExpr_S10A1("DoFormatExpr$10=1", 982870901U, 3115847316U, func_gen_DoFormatExpr_S10A1);


static refalrts::FnResult func_gen_DoFormatExpr_S12A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoFormatExpr$12=1/4 s.Limit#1/5 (/8 e.Prefix#1/6 )/9 (/12 e.Indent#1/10 )/13 (/16 e.Result#1/14 )/17 (/20 e.Tail#1/18 )/21 s.Len#2/22 e.VarRep#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.Prefix#1 as range 6
  // closed e.Indent#1 as range 10
  // closed e.Result#1 as range 14
  // closed e.Tail#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.VarRep#2 as range 2
  //DEBUG: s.Limit#1: 5
  //DEBUG: e.Prefix#1: 6
  //DEBUG: e.Indent#1: 10
  //DEBUG: e.Result#1: 14
  //DEBUG: e.Tail#1: 18
  //DEBUG: s.Len#2: 22
  //DEBUG: e.VarRep#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Limit#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFormatExpr/4 } Tile{ AsIs: (/20 } </23 & Sub/24 Tile{ HalfReuse: s.Limit1 #5/21 AsIs: s.Len#2/22 } >/25 Tile{ AsIs: )/17 } Tile{ AsIs: (/8 AsIs: e.Prefix#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Indent#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Result#1/14 } Tile{ AsIs: e.VarRep#2/2 } )/26 Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_Sub]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_DoFormatExpr]);
  refalrts::reinit_svar( context[21], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[16], context[26] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[20], context[17] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFormatExpr_S12A1("DoFormatExpr$12=1", 982870901U, 3115847316U, func_gen_DoFormatExpr_S12A1);


static refalrts::FnResult func_gen_DoFormatExpr_S13A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoFormatExpr$13=1/4 s.Limit#1/5 (/8 e.Prefix#1/6 )/9 (/12 e.Indent#1/10 )/13 (/16 e.Result#1/14 )/17 (/20 e.Tail#1/18 )/21 s.Len#2/22 e.VarRep#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.Prefix#1 as range 6
  // closed e.Indent#1 as range 10
  // closed e.Result#1 as range 14
  // closed e.Tail#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.VarRep#2 as range 2
  //DEBUG: s.Limit#1: 5
  //DEBUG: e.Prefix#1: 6
  //DEBUG: e.Indent#1: 10
  //DEBUG: e.Result#1: 14
  //DEBUG: e.Tail#1: 18
  //DEBUG: s.Len#2: 22
  //DEBUG: e.VarRep#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Limit#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFormatExpr/4 } Tile{ AsIs: (/20 } </23 & Sub/24 Tile{ HalfReuse: s.Limit1 #5/21 AsIs: s.Len#2/22 } >/25 Tile{ AsIs: )/17 } Tile{ AsIs: (/8 AsIs: e.Prefix#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Indent#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Result#1/14 } Tile{ AsIs: e.VarRep#2/2 } )/26 Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_Sub]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_DoFormatExpr]);
  refalrts::reinit_svar( context[21], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[16], context[26] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[20], context[17] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFormatExpr_S13A1("DoFormatExpr$13=1", 982870901U, 3115847316U, func_gen_DoFormatExpr_S13A1);


static refalrts::FnResult func_gen_DoFormatExpr_S14A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoFormatExpr$14=1/4 s.Limit#1/5 (/8 e.Prefix#1/6 )/9 (/12 e.Indent#1/10 )/13 (/16 e.Result#1/14 )/17 (/20 e.Tail#1/18 )/21 s.Len#2/22 e.VarRep#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.Prefix#1 as range 6
  // closed e.Indent#1 as range 10
  // closed e.Result#1 as range 14
  // closed e.Tail#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.VarRep#2 as range 2
  //DEBUG: s.Limit#1: 5
  //DEBUG: e.Prefix#1: 6
  //DEBUG: e.Indent#1: 10
  //DEBUG: e.Result#1: 14
  //DEBUG: e.Tail#1: 18
  //DEBUG: s.Len#2: 22
  //DEBUG: e.VarRep#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Limit#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFormatExpr/4 } Tile{ AsIs: (/20 } </23 & Sub/24 Tile{ HalfReuse: s.Limit1 #5/21 AsIs: s.Len#2/22 } >/25 Tile{ AsIs: )/17 } Tile{ AsIs: (/8 AsIs: e.Prefix#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Indent#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Result#1/14 } Tile{ AsIs: e.VarRep#2/2 } )/26 Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_Sub]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_DoFormatExpr]);
  refalrts::reinit_svar( context[21], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[16], context[26] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[20], context[17] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFormatExpr_S14A1("DoFormatExpr$14=1", 982870901U, 3115847316U, func_gen_DoFormatExpr_S14A1);


static refalrts::FnResult func_gen_DoFormatExpr_S19A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & DoFormatExpr$19=1/4 s.Limit#1/5 (/8 e.Prefix#1/6 )/9 (/12 e.Indent#1/10 )/13 (/16 e.Result#1/14 )/17 (/20 e.Inner#1/18 )/21 (/24 e.Tail#1/22 )/25 s.Len#2/26 e.CallRep#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.Prefix#1 as range 6
  // closed e.Indent#1 as range 10
  // closed e.Result#1 as range 14
  // closed e.Inner#1 as range 18
  // closed e.Tail#1 as range 22
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CallRep#2 as range 2
  //DEBUG: s.Limit#1: 5
  //DEBUG: e.Prefix#1: 6
  //DEBUG: e.Indent#1: 10
  //DEBUG: e.Result#1: 14
  //DEBUG: e.Inner#1: 18
  //DEBUG: e.Tail#1: 22
  //DEBUG: s.Len#2: 26
  //DEBUG: e.CallRep#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Limit#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFormatExpr/4 } (/27 </28 & Sub/29 Tile{ HalfReuse: s.Limit1 #5/25 AsIs: s.Len#2/26 } >/30 Tile{ AsIs: )/17 } Tile{ AsIs: (/8 AsIs: e.Prefix#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Indent#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Result#1/14 } Tile{ AsIs: e.CallRep#2/2 } Tile{ HalfReuse: )/20 AsIs: e.Inner#1/18 HalfReuse: (/21 HalfReuse: # RK/24 } )/31 Tile{ AsIs: e.Tail#1/22 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_Sub]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::update_name(context[4], functions[efunc_DoFormatExpr]);
  refalrts::reinit_svar( context[25], context[5] );
  refalrts::reinit_close_bracket(context[20]);
  refalrts::reinit_open_bracket(context[21]);
  refalrts::reinit_ident(context[24], identifiers[ident_RK]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[21], context[31] );
  refalrts::link_brackets( context[16], context[20] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[27], context[17] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[28] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[27], context[29] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFormatExpr_S19A1("DoFormatExpr$19=1", 982870901U, 3115847316U, func_gen_DoFormatExpr_S19A1);


static refalrts::FnResult func_DoFormatExpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & DoFormatExpr/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoFormatExpr/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 e.new#5/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#4 as range 17
  // closed e.new#5 as range 2
  do {
    // </0 & DoFormatExpr/4 (/7 e.new#6/5 )/8 (/11 e.new#7/9 )/12 (/15 e.new#8/13 )/16 (/19 e.new#9/17 )/20 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.new#6 as range 5
    // closed e.new#7 as range 9
    // closed e.new#8 as range 13
    // closed e.new#9 as range 17
    do {
      // </0 & DoFormatExpr/4 (/7 e.Limit#1/5 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/21 ' '/23 )/20 >/1
      context[21] = context[17];
      context[22] = context[18];
      context[23] = refalrts::char_right( ' ', context[21], context[22] );
      if( ! context[23] )
        continue;
      // closed e.Limit#1 as range 5
      // closed e.Prefix#1 as range 9
      // closed e.Indent#1 as range 13
      // closed e.Result#1 as range 21
      //DEBUG: e.Limit#1: 5
      //DEBUG: e.Prefix#1: 9
      //DEBUG: e.Indent#1: 13
      //DEBUG: e.Result#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & DoFormatExpr/4 (/7 e.Limit#1/5 )/8 (/11 {REMOVED TILE} )/12 (/15 e.Indent#1/13 )/16 (/19 {REMOVED TILE} ' '/23 )/20 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Prefix#1/9 } Tile{ AsIs: e.Result#1/21 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoFormatExpr/4 (/7 e.Limit#1/5 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 >/1
    // closed e.Limit#1 as range 5
    // closed e.Prefix#1 as range 9
    // closed e.Indent#1 as range 13
    // closed e.Result#1 as range 17
    //DEBUG: e.Limit#1: 5
    //DEBUG: e.Prefix#1: 9
    //DEBUG: e.Indent#1: 13
    //DEBUG: e.Result#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & DoFormatExpr/4 (/7 e.Limit#1/5 )/8 (/11 {REMOVED TILE} )/12 (/15 e.Indent#1/13 )/16 (/19 {REMOVED TILE} )/20 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Prefix#1/9 } Tile{ AsIs: e.Result#1/17 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoFormatExpr/4 (/7 e.new#6/5 )/8 (/11 e.new#7/9 )/12 (/15 e.new#8/13 )/16 (/19 e.new#9/17 )/20 ';'/23 >/1
    context[21] = context[2];
    context[22] = context[3];
    context[23] = refalrts::char_left( ';', context[21], context[22] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.new#6 as range 5
    // closed e.new#7 as range 9
    // closed e.new#8 as range 13
    // closed e.new#9 as range 17
    do {
      // </0 & DoFormatExpr/4 (/7 e.Limit#1/5 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/24 ' '/26 )/20 ';'/23 >/1
      context[24] = context[17];
      context[25] = context[18];
      context[26] = refalrts::char_right( ' ', context[24], context[25] );
      if( ! context[26] )
        continue;
      // closed e.Limit#1 as range 5
      // closed e.Prefix#1 as range 9
      // closed e.Indent#1 as range 13
      // closed e.Result#1 as range 24
      //DEBUG: e.Limit#1: 5
      //DEBUG: e.Prefix#1: 9
      //DEBUG: e.Indent#1: 13
      //DEBUG: e.Result#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & DoFormatExpr/4 (/7 e.Limit#1/5 )/8 (/11 {REMOVED TILE} )/12 (/15 e.Indent#1/13 )/16 (/19 {REMOVED TILE} ' '/26 )/20 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Prefix#1/9 } Tile{ AsIs: e.Result#1/24 } Tile{ AsIs: ';'/23 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoFormatExpr/4 (/7 e.Limit#1/5 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 ';'/23 >/1
    // closed e.Limit#1 as range 5
    // closed e.Prefix#1 as range 9
    // closed e.Indent#1 as range 13
    // closed e.Result#1 as range 17
    //DEBUG: e.Limit#1: 5
    //DEBUG: e.Prefix#1: 9
    //DEBUG: e.Indent#1: 13
    //DEBUG: e.Result#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & DoFormatExpr/4 (/7 e.Limit#1/5 )/8 (/11 {REMOVED TILE} )/12 (/15 e.Indent#1/13 )/16 (/19 {REMOVED TILE} )/20 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Prefix#1/9 } Tile{ AsIs: e.Result#1/17 } Tile{ AsIs: ';'/23 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[23];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFormatExpr/4 (/7 e.new#6/5 s.new#7/21 )/8 (/11 e.new#8/9 )/12 (/15 e.new#9/13 )/16 (/19 e.new#10/17 )/20 e.new#11/2 >/1
  // closed e.new#8 as range 9
  // closed e.new#9 as range 13
  // closed e.new#10 as range 17
  // closed e.new#11 as range 2
  if( ! refalrts::svar_right( context[21], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 5
  do {
    // </0 & DoFormatExpr/4 (/7 '-'/24 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 e.Tail#1/2 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[24] = refalrts::char_left( '-', context[22], context[23] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.Prefix#1 as range 9
    // closed e.Indent#1 as range 13
    // closed e.Result#1 as range 17
    // closed e.Tail#1 as range 2
    //DEBUG: s.Limit#1: 21
    //DEBUG: e.Prefix#1: 9
    //DEBUG: e.Indent#1: 13
    //DEBUG: e.Result#1: 17
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Limit#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/25 Tile{ AsIs: e.Prefix#1/9 } Tile{ AsIs: e.Result#1/17 } )/26 Tile{ AsIs: </0 AsIs: & DoFormatExpr/4 AsIs: (/7 HalfReuse: </24 } & LIMIT/27 >/28 Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 } e.Indent#1/13/29 Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: )/20 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_LIMIT]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::copy_evar(vm, context[29], context[30], context[13], context[14]);
    refalrts::reinit_open_call(context[24]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[20] );
    refalrts::link_brackets( context[19], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[24] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[0], context[24] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFormatExpr/4 (/7 s.new#12/21 )/8 (/11 e.new#13/9 )/12 (/15 e.new#14/13 )/16 (/19 e.new#15/17 )/20 (/24 s.new#16/26 e.new#17/22 )/25 e.new#18/2 >/1
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#13 as range 9
  // closed e.new#14 as range 13
  // closed e.new#15 as range 17
  // closed e.new#18 as range 2
  if( ! refalrts::svar_left( context[26], context[22], context[23] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#17 as range 22
  do {
    // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 (/24 # W/26 e.Word#1/22 )/25 e.Tail#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_W], context[26] ) )
      continue;
    // closed e.Prefix#1 as range 9
    // closed e.Indent#1 as range 13
    // closed e.Result#1 as range 17
    // closed e.Word#1 as range 22
    // closed e.Tail#1 as range 2
    //DEBUG: s.Limit#1: 21
    //DEBUG: e.Prefix#1: 9
    //DEBUG: e.Indent#1: 13
    //DEBUG: e.Result#1: 17
    //DEBUG: e.Word#1: 22
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Limit#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & DoFormatExpr$6=1/7 } Tile{ HalfReuse: s.Limit1 #21/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/24 } Tile{ AsIs: e.Tail#1/2 } )/27 {*}/28 </29 & Lenw/30 </31 Tile{ HalfReuse: & FormatWord/26 AsIs: e.Word#1/22 HalfReuse: >/25 } ' '/32 >/33 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::alloc_unwrapped_closure(vm, context[28], context[4]);
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_Lenw]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_char(vm, context[32], ' ');
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_DoFormatExpr_S6A1]);
    refalrts::reinit_svar( context[8], context[21] );
    refalrts::reinit_name(context[26], functions[efunc_FormatWord]);
    refalrts::reinit_close_call(context[25]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[31] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[26], context[25] );
    res = refalrts::splice_evar( res, context[27], context[31] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[24] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    refalrts::wrap_closure( context[28] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 (/24 # N/26 s.Number#1/29 )/25 e.Tail#1/2 >/1
    context[27] = context[22];
    context[28] = context[23];
    if( ! refalrts::ident_term( identifiers[ident_N], context[26] ) )
      continue;
    // closed e.Prefix#1 as range 9
    // closed e.Indent#1 as range 13
    // closed e.Result#1 as range 17
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    //DEBUG: s.Limit#1: 21
    //DEBUG: e.Prefix#1: 9
    //DEBUG: e.Indent#1: 13
    //DEBUG: e.Result#1: 17
    //DEBUG: e.Tail#1: 2
    //DEBUG: s.Number#1: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Limit#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & DoFormatExpr$7=1/7 } Tile{ HalfReuse: s.Limit1 #21/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/24 } Tile{ AsIs: e.Tail#1/2 } )/30 {*}/31 </32 & Lenw/33 </34 Tile{ HalfReuse: & Symb/26 AsIs: s.Number#1/29 HalfReuse: >/25 } ' '/35 >/36 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::alloc_unwrapped_closure(vm, context[31], context[4]);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_Lenw]);
    refalrts::alloc_open_call(vm, context[34]);
    refalrts::alloc_char(vm, context[35], ' ');
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_DoFormatExpr_S7A1]);
    refalrts::reinit_svar( context[8], context[21] );
    refalrts::reinit_name(context[26], functions[efunc_Symb]);
    refalrts::reinit_close_call(context[25]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[34] );
    refalrts::link_brackets( context[24], context[30] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[26], context[25] );
    res = refalrts::splice_evar( res, context[30], context[34] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[24] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    refalrts::wrap_closure( context[31] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoFormatExpr/4 (/7 s.new#19/21 )/8 (/11 e.new#20/9 )/12 (/15 e.new#21/13 )/16 (/19 e.new#22/17 )/20 (/24 # C/26 e.new#23/22 )/25 e.new#24/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_C], context[26] ) )
      continue;
    // closed e.new#20 as range 9
    // closed e.new#21 as range 13
    // closed e.new#22 as range 17
    // closed e.new#23 as range 22
    // closed e.new#24 as range 2
    do {
      // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 (/24 # C/26 e.Chars1#1/22 )/25 (/31 # C/33 e.Chars2#1/29 )/32 e.Tail#1/27 >/1
      context[27] = context[2];
      context[28] = context[3];
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_C], context[29], context[30] );
      if( ! context[33] )
        continue;
      // closed e.Prefix#1 as range 9
      // closed e.Indent#1 as range 13
      // closed e.Result#1 as range 17
      // closed e.Chars1#1 as range 22
      // closed e.Chars2#1 as range 29
      // closed e.Tail#1 as range 27
      //DEBUG: s.Limit#1: 21
      //DEBUG: e.Prefix#1: 9
      //DEBUG: e.Indent#1: 13
      //DEBUG: e.Result#1: 17
      //DEBUG: e.Chars1#1: 22
      //DEBUG: e.Chars2#1: 29
      //DEBUG: e.Tail#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/25 (/31 # C/33 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFormatExpr/4 AsIs: (/7 AsIs: s.Limit#1/21 AsIs: )/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/24 AsIs: # C/26 } Tile{ AsIs: e.Chars1#1/22 } Tile{ AsIs: e.Chars2#1/29 } Tile{ AsIs: )/32 AsIs: e.Tail#1/27 AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[24], context[32] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[32];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::splice_to_freelist_open( vm, context[26], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoFormatExpr/4 (/7 s.new#25/21 )/8 (/11 e.new#26/9 )/12 (/15 e.new#27/13 )/16 (/19 e.new#28/17 )/20 (/24 # C/26 s.new#29/29 e.new#30/27 )/25 e.new#31/2 >/1
      context[27] = context[22];
      context[28] = context[23];
      // closed e.new#26 as range 9
      // closed e.new#27 as range 13
      // closed e.new#28 as range 17
      // closed e.new#31 as range 2
      if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
        continue;
      // closed e.new#30 as range 27
      do {
        // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/30 '\''/32 )/20 (/24 # C/26 s.Char#1/29 e.Chars#1/27 )/25 e.Tail#1/2 >/1
        context[30] = context[17];
        context[31] = context[18];
        context[32] = refalrts::char_right( '\'', context[30], context[31] );
        if( ! context[32] )
          continue;
        // closed e.Prefix#1 as range 9
        // closed e.Indent#1 as range 13
        // closed e.Result#1 as range 30
        // closed e.Chars#1 as range 27
        // closed e.Tail#1 as range 2
        //DEBUG: s.Limit#1: 21
        //DEBUG: s.Char#1: 29
        //DEBUG: e.Prefix#1: 9
        //DEBUG: e.Indent#1: 13
        //DEBUG: e.Result#1: 30
        //DEBUG: e.Chars#1: 27
        //DEBUG: e.Tail#1: 2

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Limit#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & DoFormatExpr$9=1/7 } Tile{ HalfReuse: s.Limit1 #21/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/30 HalfReuse: )/32 HalfReuse: (/20 } Tile{ AsIs: e.Chars#1/27 } )/33 (/34 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: )/25 } {*}/35 </36 & Lenw/37 Tile{ HalfReuse: </24 HalfReuse: & EscapeChar/26 AsIs: s.Char#1/29 } >/38 >/39 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[33]);
        refalrts::alloc_open_bracket(vm, context[34]);
        refalrts::alloc_unwrapped_closure(vm, context[35], context[4]);
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::alloc_name(vm, context[37], functions[efunc_Lenw]);
        refalrts::alloc_close_call(vm, context[38]);
        refalrts::alloc_close_call(vm, context[39]);
        refalrts::reinit_closure_head(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_gen_DoFormatExpr_S9A1]);
        refalrts::reinit_svar( context[8], context[21] );
        refalrts::reinit_close_bracket(context[32]);
        refalrts::reinit_open_bracket(context[20]);
        refalrts::reinit_open_call(context[24]);
        refalrts::reinit_name(context[26], functions[efunc_EscapeChar]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[38] );
        refalrts::push_stack( vm, context[24] );
        refalrts::link_brackets( context[34], context[25] );
        refalrts::link_brackets( context[20], context[33] );
        refalrts::link_brackets( context[19], context[32] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[24], context[29] );
        res = refalrts::splice_evar( res, context[35], context[37] );
        res = refalrts::splice_evar( res, context[25], context[25] );
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[8], context[20] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        refalrts::wrap_closure( context[35] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 (/24 # C/26 s.Char#1/29 e.Chars#1/27 )/25 e.Tail#1/2 >/1
      // closed e.Prefix#1 as range 9
      // closed e.Indent#1 as range 13
      // closed e.Result#1 as range 17
      // closed e.Chars#1 as range 27
      // closed e.Tail#1 as range 2
      //DEBUG: s.Limit#1: 21
      //DEBUG: s.Char#1: 29
      //DEBUG: e.Prefix#1: 9
      //DEBUG: e.Indent#1: 13
      //DEBUG: e.Result#1: 17
      //DEBUG: e.Chars#1: 27
      //DEBUG: e.Tail#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Limit#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & DoFormatExpr$10=1/7 } Tile{ HalfReuse: s.Limit1 #21/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/24 } Tile{ AsIs: e.Chars#1/27 } Tile{ AsIs: )/25 } (/30 Tile{ AsIs: e.Tail#1/2 } )/31 {*}/32 </33 & Lenw/34 '\''/35 </36 Tile{ HalfReuse: & EscapeChar/26 AsIs: s.Char#1/29 } >/37 '\''/38 >/39 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::alloc_unwrapped_closure(vm, context[32], context[4]);
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_Lenw]);
      refalrts::alloc_char(vm, context[35], '\'');
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_close_call(vm, context[37]);
      refalrts::alloc_char(vm, context[38], '\'');
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::reinit_closure_head(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_gen_DoFormatExpr_S10A1]);
      refalrts::reinit_svar( context[8], context[21] );
      refalrts::reinit_name(context[26], functions[efunc_EscapeChar]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[37] );
      refalrts::push_stack( vm, context[36] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[26], context[29] );
      res = refalrts::splice_evar( res, context[31], context[36] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[8], context[24] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      refalrts::wrap_closure( context[32] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 (/24 # C/26 )/25 e.Tail#1/2 >/1
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.Prefix#1 as range 9
    // closed e.Indent#1 as range 13
    // closed e.Result#1 as range 17
    // closed e.Tail#1 as range 2
    //DEBUG: s.Limit#1: 21
    //DEBUG: e.Prefix#1: 9
    //DEBUG: e.Indent#1: 13
    //DEBUG: e.Result#1: 17
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFormatExpr/4 AsIs: (/7 } Tile{ HalfReuse: </26 HalfReuse: & Dec/25 } Tile{ AsIs: s.Limit#1/21 } >/27 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/17 HalfReuse: ' '/20 HalfReuse: )/24 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::reinit_open_call(context[26]);
    refalrts::reinit_name(context[25], functions[efunc_Dec]);
    refalrts::reinit_char(context[20], ' ');
    refalrts::reinit_close_bracket(context[24]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[24] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[24] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[26], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoFormatExpr/4 (/7 s.new#19/21 )/8 (/11 e.new#20/9 )/12 (/15 e.new#21/13 )/16 (/19 e.new#22/17 )/20 (/24 s.new#23/26 e.new#24/27 s.new#25/31 s.new#26/30 s.new#27/29 )/25 e.new#28/2 >/1
    context[27] = context[22];
    context[28] = context[23];
    // closed e.new#20 as range 9
    // closed e.new#21 as range 13
    // closed e.new#22 as range 17
    // closed e.new#28 as range 2
    if( ! refalrts::svar_right( context[29], context[27], context[28] ) )
      continue;
    if( ! refalrts::svar_right( context[30], context[27], context[28] ) )
      continue;
    if( ! refalrts::svar_right( context[31], context[27], context[28] ) )
      continue;
    // closed e.new#24 as range 27
    do {
      // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 (/24 # s/26 s.Id#1/31 '='/30 s.Copy#1/29 )/25 e.Tail#1/2 >/1
      if( ! refalrts::char_term( '=', context[30] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_s], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;
      // closed e.Prefix#1 as range 9
      // closed e.Indent#1 as range 13
      // closed e.Result#1 as range 17
      // closed e.Tail#1 as range 2
      //DEBUG: s.Limit#1: 21
      //DEBUG: s.Id#1: 31
      //DEBUG: s.Copy#1: 29
      //DEBUG: e.Prefix#1: 9
      //DEBUG: e.Indent#1: 13
      //DEBUG: e.Result#1: 17
      //DEBUG: e.Tail#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Limit#1/21 {REMOVED TILE} {REMOVED TILE} s.Copy#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & DoFormatExpr$12=1/7 } Tile{ HalfReuse: s.Limit1 #21/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/24 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: )/25 } {*}/32 </33 & Lenw/34"s."/35 </37 Tile{ HalfReuse: & Symb/26 AsIs: s.Id#1/31 HalfReuse: >/30 } ' '/38 >/39 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_unwrapped_closure(vm, context[32], context[4]);
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_Lenw]);
      refalrts::alloc_chars(vm, context[35], context[36], "s.", 2);
      refalrts::alloc_open_call(vm, context[37]);
      refalrts::alloc_char(vm, context[38], ' ');
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::reinit_closure_head(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_gen_DoFormatExpr_S12A1]);
      refalrts::reinit_svar( context[8], context[21] );
      refalrts::reinit_name(context[26], functions[efunc_Symb]);
      refalrts::reinit_close_call(context[30]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[37] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[26], context[30] );
      res = refalrts::splice_evar( res, context[32], context[37] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[8], context[24] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      refalrts::wrap_closure( context[32] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoFormatExpr/4 (/7 s.new#29/21 )/8 (/11 e.new#30/9 )/12 (/15 e.new#31/13 )/16 (/19 e.new#32/17 )/20 (/24 s.new#33/26 s.new#36/34 s.new#37/35 '='/31 s.new#35/30 s.new#34/29 )/25 e.new#38/2 >/1
    context[32] = context[27];
    context[33] = context[28];
    if( ! refalrts::char_term( '=', context[31] ) )
      continue;
    // closed e.new#30 as range 9
    // closed e.new#31 as range 13
    // closed e.new#32 as range 17
    // closed e.new#38 as range 2
    if( ! refalrts::svar_left( context[34], context[32], context[33] ) )
      continue;
    if( ! refalrts::svar_left( context[35], context[32], context[33] ) )
      continue;
    if( ! refalrts::empty_seq( context[32], context[33] ) )
      continue;
    do {
      // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 (/24 # t/26 s.IdL#1/34 s.IdR#1/35 '='/31 s.CopyL#1/30 s.CopyR#1/29 )/25 e.Tail#1/2 >/1
      if( ! refalrts::ident_term( identifiers[ident_t], context[26] ) )
        continue;
      // closed e.Prefix#1 as range 9
      // closed e.Indent#1 as range 13
      // closed e.Result#1 as range 17
      // closed e.Tail#1 as range 2
      //DEBUG: s.Limit#1: 21
      //DEBUG: s.IdL#1: 34
      //DEBUG: s.IdR#1: 35
      //DEBUG: s.CopyL#1: 30
      //DEBUG: s.CopyR#1: 29
      //DEBUG: e.Prefix#1: 9
      //DEBUG: e.Indent#1: 13
      //DEBUG: e.Result#1: 17
      //DEBUG: e.Tail#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Limit#1/21 {REMOVED TILE} {REMOVED TILE} s.IdR#1/35 {REMOVED TILE} s.CopyL#1/30 s.CopyR#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & DoFormatExpr$13=1/7 } Tile{ HalfReuse: s.Limit1 #21/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/24 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: )/25 } {*}/36 </37 & Lenw/38 Tile{ Reuse: 't'/31 } '.'/39 </40 Tile{ HalfReuse: & Symb/26 AsIs: s.IdL#1/34 } >/41 ' '/42 >/43 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_unwrapped_closure(vm, context[36], context[4]);
      refalrts::alloc_open_call(vm, context[37]);
      refalrts::alloc_name(vm, context[38], functions[efunc_Lenw]);
      refalrts::alloc_char(vm, context[39], '.');
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_close_call(vm, context[41]);
      refalrts::alloc_char(vm, context[42], ' ');
      refalrts::alloc_close_call(vm, context[43]);
      refalrts::reinit_closure_head(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_gen_DoFormatExpr_S13A1]);
      refalrts::reinit_svar( context[8], context[21] );
      refalrts::update_char(context[31], 't');
      refalrts::reinit_name(context[26], functions[efunc_Symb]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[43] );
      refalrts::push_stack( vm, context[37] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[40] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[41], context[43] );
      res = refalrts::splice_evar( res, context[26], context[34] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[8], context[24] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      refalrts::wrap_closure( context[36] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 (/24 # e/26 s.IdL#1/34 s.IdR#1/35 '='/31 s.CopyL#1/30 s.CopyR#1/29 )/25 e.Tail#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_e], context[26] ) )
      continue;
    // closed e.Prefix#1 as range 9
    // closed e.Indent#1 as range 13
    // closed e.Result#1 as range 17
    // closed e.Tail#1 as range 2
    //DEBUG: s.Limit#1: 21
    //DEBUG: s.IdL#1: 34
    //DEBUG: s.IdR#1: 35
    //DEBUG: s.CopyL#1: 30
    //DEBUG: s.CopyR#1: 29
    //DEBUG: e.Prefix#1: 9
    //DEBUG: e.Indent#1: 13
    //DEBUG: e.Result#1: 17
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Limit#1/21 {REMOVED TILE} {REMOVED TILE} s.IdR#1/35 {REMOVED TILE} s.CopyL#1/30 s.CopyR#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & DoFormatExpr$14=1/7 } Tile{ HalfReuse: s.Limit1 #21/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/24 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: )/25 } {*}/36 </37 & Lenw/38 Tile{ Reuse: 'e'/31 } '.'/39 </40 Tile{ HalfReuse: & Symb/26 AsIs: s.IdL#1/34 } >/41 ' '/42 >/43 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_unwrapped_closure(vm, context[36], context[4]);
    refalrts::alloc_open_call(vm, context[37]);
    refalrts::alloc_name(vm, context[38], functions[efunc_Lenw]);
    refalrts::alloc_char(vm, context[39], '.');
    refalrts::alloc_open_call(vm, context[40]);
    refalrts::alloc_close_call(vm, context[41]);
    refalrts::alloc_char(vm, context[42], ' ');
    refalrts::alloc_close_call(vm, context[43]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_DoFormatExpr_S14A1]);
    refalrts::reinit_svar( context[8], context[21] );
    refalrts::update_char(context[31], 'e');
    refalrts::reinit_name(context[26], functions[efunc_Symb]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[40] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[43] );
    res = refalrts::splice_evar( res, context[26], context[34] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[36], context[38] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[24] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    refalrts::wrap_closure( context[36] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoFormatExpr/4 (/7 s.new#19/21 )/8 (/11 e.new#20/9 )/12 (/15 e.new#21/13 )/16 (/19 e.new#22/17 )/20 (/24 s.new#23/26 )/25 e.new#24/2 >/1
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.new#20 as range 9
    // closed e.new#21 as range 13
    // closed e.new#22 as range 17
    // closed e.new#24 as range 2
    do {
      // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 (/24 # LB/26 )/25 e.Tail#1/2 >/1
      if( ! refalrts::ident_term( identifiers[ident_LB], context[26] ) )
        continue;
      // closed e.Prefix#1 as range 9
      // closed e.Indent#1 as range 13
      // closed e.Result#1 as range 17
      // closed e.Tail#1 as range 2
      //DEBUG: s.Limit#1: 21
      //DEBUG: e.Prefix#1: 9
      //DEBUG: e.Indent#1: 13
      //DEBUG: e.Result#1: 17
      //DEBUG: e.Tail#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFormatExpr/4 AsIs: (/7 } Tile{ HalfReuse: </26 HalfReuse: & Dec/25 } Tile{ AsIs: s.Limit#1/21 } >/27 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/17 HalfReuse: '('/20 HalfReuse: )/24 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::reinit_open_call(context[26]);
      refalrts::reinit_name(context[25], functions[efunc_Dec]);
      refalrts::reinit_char(context[20], '(');
      refalrts::reinit_close_bracket(context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[19], context[24] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[26] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[8], context[24] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[26], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoFormatExpr/4 (/7 s.new#25/21 )/8 (/11 e.new#26/9 )/12 (/15 e.new#27/13 )/16 (/19 e.new#28/17 )/20 (/24 # RB/26 )/25 e.new#29/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_RB], context[26] ) )
      continue;
    // closed e.new#26 as range 9
    // closed e.new#27 as range 13
    // closed e.new#28 as range 17
    // closed e.new#29 as range 2
    do {
      // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/27 ' '/29 )/20 (/24 # RB/26 )/25 e.Tail#1/2 >/1
      context[27] = context[17];
      context[28] = context[18];
      context[29] = refalrts::char_right( ' ', context[27], context[28] );
      if( ! context[29] )
        continue;
      // closed e.Prefix#1 as range 9
      // closed e.Indent#1 as range 13
      // closed e.Result#1 as range 27
      // closed e.Tail#1 as range 2
      //DEBUG: s.Limit#1: 21
      //DEBUG: e.Prefix#1: 9
      //DEBUG: e.Indent#1: 13
      //DEBUG: e.Result#1: 27
      //DEBUG: e.Tail#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFormatExpr/4 AsIs: (/7 } </30 Tile{ HalfReuse: & Inc/25 } Tile{ AsIs: s.Limit#1/21 } >/31 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/27 HalfReuse: )/29 HalfReuse: (/20 HalfReuse: # RB/24 HalfReuse: )/26 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::reinit_name(context[25], functions[efunc_Inc]);
      refalrts::reinit_close_bracket(context[29]);
      refalrts::reinit_open_bracket(context[20]);
      refalrts::reinit_ident(context[24], identifiers[ident_RB]);
      refalrts::reinit_close_bracket(context[26]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[20], context[26] );
      refalrts::link_brackets( context[19], context[29] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[8], context[26] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 (/24 # RB/26 )/25 e.Tail#1/2 >/1
    // closed e.Prefix#1 as range 9
    // closed e.Indent#1 as range 13
    // closed e.Result#1 as range 17
    // closed e.Tail#1 as range 2
    //DEBUG: s.Limit#1: 21
    //DEBUG: e.Prefix#1: 9
    //DEBUG: e.Indent#1: 13
    //DEBUG: e.Result#1: 17
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFormatExpr/4 AsIs: (/7 } </27 & Sub/28 Tile{ AsIs: s.Limit#1/21 } 2/29 Tile{ HalfReuse: >/25 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/17 HalfReuse: ')'/20 HalfReuse: ' '/24 HalfReuse: )/26 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_Sub]);
    refalrts::alloc_number(vm, context[29], 2UL);
    refalrts::reinit_close_call(context[25]);
    refalrts::reinit_char(context[20], ')');
    refalrts::reinit_char(context[24], ' ');
    refalrts::reinit_close_bracket(context[26]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[26] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[26] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 (/24 '*'/26 e.Inner#1/22 )/25 e.Tail#1/2 >/1
    if( ! refalrts::char_term( '*', context[26] ) )
      continue;
    // closed e.Prefix#1 as range 9
    // closed e.Indent#1 as range 13
    // closed e.Result#1 as range 17
    // closed e.Inner#1 as range 22
    // closed e.Tail#1 as range 2
    //DEBUG: s.Limit#1: 21
    //DEBUG: e.Prefix#1: 9
    //DEBUG: e.Indent#1: 13
    //DEBUG: e.Result#1: 17
    //DEBUG: e.Inner#1: 22
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFormatExpr/4 AsIs: (/7 AsIs: s.Limit#1/21 AsIs: )/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/24 HalfReuse: # LB/26 } )/27 Tile{ AsIs: e.Inner#1/22 } (/28 # RB/29 Tile{ AsIs: )/25 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::alloc_ident(vm, context[29], identifiers[ident_RB]);
    refalrts::reinit_ident(context[26], identifiers[ident_LB]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[28], context[25] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[25];
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 (/24 '!'/26 (/31 e.Name#1/29 )/32 e.Inner#1/27 )/25 e.Tail#1/2 >/1
    context[27] = context[22];
    context[28] = context[23];
    if( ! refalrts::char_term( '!', context[26] ) )
      continue;
    context[29] = 0;
    context[30] = 0;
    context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
    if( ! context[31] )
      continue;
    refalrts::bracket_pointers(context[31], context[32]);
    // closed e.Prefix#1 as range 9
    // closed e.Indent#1 as range 13
    // closed e.Result#1 as range 17
    // closed e.Name#1 as range 29
    // closed e.Inner#1 as range 27
    // closed e.Tail#1 as range 2
    //DEBUG: s.Limit#1: 21
    //DEBUG: e.Prefix#1: 9
    //DEBUG: e.Indent#1: 13
    //DEBUG: e.Result#1: 17
    //DEBUG: e.Name#1: 29
    //DEBUG: e.Inner#1: 27
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Limit#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & DoFormatExpr$19=1/7 } Tile{ HalfReuse: s.Limit1 #21/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/24 } Tile{ AsIs: e.Inner#1/27 } Tile{ AsIs: )/25 } (/33 Tile{ AsIs: e.Tail#1/2 } )/34 {*}/35 </36 & Lenw/37 '<'/38 Tile{ HalfReuse: </26 HalfReuse: & FormatWord/31 AsIs: e.Name#1/29 HalfReuse: >/32 } ' '/39 >/40 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_unwrapped_closure(vm, context[35], context[4]);
    refalrts::alloc_open_call(vm, context[36]);
    refalrts::alloc_name(vm, context[37], functions[efunc_Lenw]);
    refalrts::alloc_char(vm, context[38], '<');
    refalrts::alloc_char(vm, context[39], ' ');
    refalrts::alloc_close_call(vm, context[40]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_DoFormatExpr_S19A1]);
    refalrts::reinit_svar( context[8], context[21] );
    refalrts::reinit_open_call(context[26]);
    refalrts::reinit_name(context[31], functions[efunc_FormatWord]);
    refalrts::reinit_close_call(context[32]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[40] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[26] );
    refalrts::link_brackets( context[33], context[34] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[26], context[32] );
    res = refalrts::splice_evar( res, context[34], context[38] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[8], context[24] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    refalrts::wrap_closure( context[35] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFormatExpr/4 (/7 s.new#19/21 )/8 (/11 e.new#20/9 )/12 (/15 e.new#21/13 )/16 (/19 e.new#22/17 )/20 (/24 # RK/26 )/25 e.new#23/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_RK], context[26] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[22], context[23] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#20 as range 9
  // closed e.new#21 as range 13
  // closed e.new#22 as range 17
  // closed e.new#23 as range 2
  do {
    // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/27 ' '/29 )/20 (/24 # RK/26 )/25 e.Tail#1/2 >/1
    context[27] = context[17];
    context[28] = context[18];
    context[29] = refalrts::char_right( ' ', context[27], context[28] );
    if( ! context[29] )
      continue;
    // closed e.Prefix#1 as range 9
    // closed e.Indent#1 as range 13
    // closed e.Result#1 as range 27
    // closed e.Tail#1 as range 2
    //DEBUG: s.Limit#1: 21
    //DEBUG: e.Prefix#1: 9
    //DEBUG: e.Indent#1: 13
    //DEBUG: e.Result#1: 27
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFormatExpr/4 AsIs: (/7 } </30 Tile{ HalfReuse: & Inc/25 } Tile{ AsIs: s.Limit#1/21 } >/31 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/27 HalfReuse: )/29 HalfReuse: (/20 HalfReuse: # RK/24 HalfReuse: )/26 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::reinit_name(context[25], functions[efunc_Inc]);
    refalrts::reinit_close_bracket(context[29]);
    refalrts::reinit_open_bracket(context[20]);
    refalrts::reinit_ident(context[24], identifiers[ident_RK]);
    refalrts::reinit_close_bracket(context[26]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[20], context[26] );
    refalrts::link_brackets( context[19], context[29] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[26] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFormatExpr/4 (/7 s.Limit#1/21 )/8 (/11 e.Prefix#1/9 )/12 (/15 e.Indent#1/13 )/16 (/19 e.Result#1/17 )/20 (/24 # RK/26 )/25 e.Tail#1/2 >/1
  // closed e.Prefix#1 as range 9
  // closed e.Indent#1 as range 13
  // closed e.Result#1 as range 17
  // closed e.Tail#1 as range 2
  //DEBUG: s.Limit#1: 21
  //DEBUG: e.Prefix#1: 9
  //DEBUG: e.Indent#1: 13
  //DEBUG: e.Result#1: 17
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFormatExpr/4 AsIs: (/7 } </27 & Sub/28 Tile{ AsIs: s.Limit#1/21 } 2/29 Tile{ HalfReuse: >/25 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Prefix#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Indent#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#1/17 HalfReuse: '>'/20 HalfReuse: ' '/24 HalfReuse: )/26 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_Sub]);
  refalrts::alloc_number(vm, context[29], 2UL);
  refalrts::reinit_close_call(context[25]);
  refalrts::reinit_char(context[20], '>');
  refalrts::reinit_char(context[24], ' ');
  refalrts::reinit_close_bracket(context[26]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[19], context[26] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[27] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[26] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoFormatExpr("DoFormatExpr", 982870901U, 3115847316U, func_DoFormatExpr);


static refalrts::FnResult func_gen_FormatWord_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & FormatWord:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FormatWord:1/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & FormatWord:1/4 'L'/5 s._#2/6 s.First#2/9 e.Tail#2/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::char_term( 'L', context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.Tail#2 as range 7
    //DEBUG: s._#2: 6
    //DEBUG: s.First#2: 9
    //DEBUG: e.Tail#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s._#2/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatWord-Ident/4 HalfReuse: (/5 } Tile{ AsIs: s.First#2/9 } )/10 </11 & Type/12 Tile{ AsIs: e.Tail#2/7 } >/13 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Type]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::update_name(context[4], functions[efunc_FormatWordm_Ident]);
    refalrts::reinit_open_bracket(context[5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[5], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FormatWord:1/4 s.Type#2/5 s.SubType#2/6 e.Word#2/2 >/1
  // closed e.Word#2 as range 2
  //DEBUG: s.Type#2: 5
  //DEBUG: s.SubType#2: 6
  //DEBUG: e.Word#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Type#2/5 s.SubType#2/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: </4 } & EscapeChars/7 Tile{ AsIs: e.Word#2/2 } >/8 Tile{ HalfReuse: '\"'/1 ]] }
  refalrts::alloc_name(vm, context[7], functions[efunc_EscapeChars]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::reinit_char(context[0], '\"');
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_char(context[1], '\"');
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FormatWord_B1("FormatWord:1", 982870901U, 3115847316U, func_gen_FormatWord_B1);


static refalrts::FnResult func_FormatWord(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & FormatWord/4 e.Word#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Word#1 as range 2
  //DEBUG: e.Word#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & FormatWord:1/6 Tile{ AsIs: </0 Reuse: & Type/4 AsIs: e.Word#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_FormatWord_B1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Type]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FormatWord("FormatWord", 982870901U, 3115847316U, func_FormatWord);


static refalrts::FnResult func_FormatWordm_Ident(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & FormatWord-Ident/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FormatWord-Ident/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 e.new#4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & FormatWord-Ident/4 (/7 e.Ident#1/5 )/8 '*'/9 s._#1/10 >/1
    if( ! refalrts::char_term( '*', context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Ident#1 as range 5
    //DEBUG: s._#1: 10
    //DEBUG: e.Ident#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FormatWord-Ident/4 (/7 {REMOVED TILE} )/8 '*'/9 s._#1/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Ident#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FormatWord-Ident/4 (/7 e.new#5/5 )/8 s.new#6/9 s.new#7/10 s.new#8/13 e.new#9/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 5
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#9 as range 11
    do {
      // </0 & FormatWord-Ident/4 (/7 e.Prefix#1/5 )/8 'L'/9 s._#1/10 s.Next#1/13 e.Tail#1/11 >/1
      if( ! refalrts::char_term( 'L', context[9] ) )
        continue;
      // closed e.Prefix#1 as range 5
      // closed e.Tail#1 as range 11
      //DEBUG: s._#1: 10
      //DEBUG: s.Next#1: 13
      //DEBUG: e.Prefix#1: 5
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s._#1/10 s.Next#1/13 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FormatWord-Ident/4 AsIs: (/7 AsIs: e.Prefix#1/5 HalfReuse: s.Next1 #13/8 HalfReuse: )/9 } </14 & Type/15 Tile{ AsIs: e.Tail#1/11 } >/16 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[15], functions[efunc_Type]);
      refalrts::alloc_close_call(vm, context[16]);
      refalrts::reinit_svar( context[8], context[13] );
      refalrts::reinit_close_bracket(context[9]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[14] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FormatWord-Ident/4 (/7 e.Prefix#1/5 )/8 'D'/9 s._#1/10 s.Next#1/13 e.Tail#1/11 >/1
      if( ! refalrts::char_term( 'D', context[9] ) )
        continue;
      // closed e.Prefix#1 as range 5
      // closed e.Tail#1 as range 11
      //DEBUG: s._#1: 10
      //DEBUG: s.Next#1: 13
      //DEBUG: e.Prefix#1: 5
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s._#1/10 s.Next#1/13 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FormatWord-Ident/4 AsIs: (/7 AsIs: e.Prefix#1/5 HalfReuse: s.Next1 #13/8 HalfReuse: )/9 } </14 & Type/15 Tile{ AsIs: e.Tail#1/11 } >/16 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[15], functions[efunc_Type]);
      refalrts::alloc_close_call(vm, context[16]);
      refalrts::reinit_svar( context[8], context[13] );
      refalrts::reinit_close_bracket(context[9]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[14] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FormatWord-Ident/4 (/7 e.Prefix#1/5 )/8 s.Type#1/9 s.SubType#1/10 '-'/13 e.Tail#1/11 >/1
      if( ! refalrts::char_term( '-', context[13] ) )
        continue;
      // closed e.Prefix#1 as range 5
      // closed e.Tail#1 as range 11
      //DEBUG: s.Type#1: 9
      //DEBUG: s.SubType#1: 10
      //DEBUG: e.Prefix#1: 5
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Type#1/9 s.SubType#1/10 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FormatWord-Ident/4 AsIs: (/7 AsIs: e.Prefix#1/5 HalfReuse: '-'/8 } )/14 </15 Tile{ HalfReuse: & Type/13 AsIs: e.Tail#1/11 AsIs: >/1 } >/16 Tile{ ]] }
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_close_call(vm, context[16]);
      refalrts::reinit_char(context[8], '-');
      refalrts::reinit_name(context[13], functions[efunc_Type]);
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[15] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[13], context[1] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FormatWord-Ident/4 (/7 e.Prefix#1/5 )/8 s.Type#1/9 s.SubType#1/10 '_'/13 e.Tail#1/11 >/1
    if( ! refalrts::char_term( '_', context[13] ) )
      continue;
    // closed e.Prefix#1 as range 5
    // closed e.Tail#1 as range 11
    //DEBUG: s.Type#1: 9
    //DEBUG: s.SubType#1: 10
    //DEBUG: e.Prefix#1: 5
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Type#1/9 s.SubType#1/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FormatWord-Ident/4 AsIs: (/7 AsIs: e.Prefix#1/5 HalfReuse: '_'/8 } )/14 </15 Tile{ HalfReuse: & Type/13 AsIs: e.Tail#1/11 AsIs: >/1 } >/16 Tile{ ]] }
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::reinit_char(context[8], '_');
    refalrts::reinit_name(context[13], functions[efunc_Type]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FormatWord-Ident/4 (/7 e.Prefix#1/5 )/8 s.Type#1/9 s.SubType#1/10 e.Suffix#1/2 >/1
  // closed e.Prefix#1 as range 5
  // closed e.Suffix#1 as range 2
  //DEBUG: s.Type#1: 9
  //DEBUG: s.SubType#1: 10
  //DEBUG: e.Prefix#1: 5
  //DEBUG: e.Suffix#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#1/9 s.SubType#1/10 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: </4 HalfReuse: & EscapeChars/7 } Tile{ AsIs: e.Prefix#1/5 } Tile{ AsIs: e.Suffix#1/2 } Tile{ HalfReuse: >/8 } Tile{ HalfReuse: '\"'/1 ]] }
  refalrts::reinit_char(context[0], '\"');
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_EscapeChars]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_char(context[1], '\"');
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FormatWordm_Ident("FormatWord-Ident", 982870901U, 3115847316U, func_FormatWordm_Ident);


static refalrts::FnResult func_EscapeChars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & EscapeChars/4 e.Chars#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Chars#1 as range 2
  //DEBUG: e.Chars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & EscapeChar/4 AsIs: e.Chars#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_EscapeChar]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscapeChars("EscapeChars", 982870901U, 3115847316U, func_EscapeChars);


static refalrts::FnResult func_gen_EscapeChar_S7B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & EscapeChar$7:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EscapeChar$7:1/4 s.new#1/5 s.new#2/6 s.new#3/7 s.new#4/8 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & EscapeChar$7:1/4 s.Char#1/5 s.Code#2/6 '-'/7 '-'/8 >/1
    if( ! refalrts::char_term( '-', context[7] ) )
      continue;
    if( ! refalrts::char_term( '-', context[8] ) )
      continue;
    //DEBUG: s.Char#1: 5
    //DEBUG: s.Code#2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar$7:1/4 s.Char#1/5 s.Code#2/6 '-'/7 '-'/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Char1 #5/1 ]] }
    refalrts::reinit_svar( context[1], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EscapeChar$7:1/4 s.Char#1/5 s.Code#2/6 s.Cmp1#3/7 s.Cmp2#3/8 >/1
  //DEBUG: s.Char#1: 5
  //DEBUG: s.Code#2: 6
  //DEBUG: s.Cmp1#3: 7
  //DEBUG: s.Cmp2#3: 8

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Char#1/5 {REMOVED TILE} s.Cmp1#3/7 s.Cmp2#3/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscapeChar-Hex/4 } Tile{ AsIs: s.Code#2/6 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_EscapeCharm_Hex]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EscapeChar_S7B1("EscapeChar$7:1", 982870901U, 3115847316U, func_gen_EscapeChar_S7B1);


static refalrts::FnResult func_gen_EscapeChar_S7A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & EscapeChar$7=1/4 s.Char#1/5 s.Code#2/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Char#1: 5
  //DEBUG: s.Code#2: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: [*]/0 Reuse: & EscapeChar$7:1/4 AsIs: s.Char#1/5 AsIs: s.Code#2/6 HalfReuse: {*}/1 } </8 & Compare/9 31/10 s.Code#2/6/11 >/12 </13 & Compare/14 s.Code#2/6/15 127/16 >/17 >/18 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Compare]);
  refalrts::alloc_number(vm, context[10], 31UL);
  refalrts::copy_stvar(vm, context[11], context[6]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Compare]);
  refalrts::copy_stvar(vm, context[15], context[6]);
  refalrts::alloc_number(vm, context[16], 127UL);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_EscapeChar_S7B1]);
  refalrts::reinit_unwrapped_closure(context[1], context[0]);
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[18] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EscapeChar_S7A1("EscapeChar$7=1", 982870901U, 3115847316U, func_gen_EscapeChar_S7A1);


static refalrts::FnResult func_EscapeChar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & EscapeChar/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EscapeChar/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & EscapeChar/4 '\\'/5 >/1
    if( ! refalrts::char_term( '\\', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: '\\'/5 HalfReuse: '\\'/1 ]] }
    refalrts::reinit_char(context[1], '\\');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\''/5 >/1
    if( ! refalrts::char_term( '\'', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: '\''/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\"'/5 >/1
    if( ! refalrts::char_term( '\"', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: '\"'/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\n'/5 >/1
    if( ! refalrts::char_term( '\n', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 'n'/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], 'n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\t'/5 >/1
    if( ! refalrts::char_term( '\t', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 't'/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], 't');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\r'/5 >/1
    if( ! refalrts::char_term( '\r', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 'r'/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], 'r');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EscapeChar/4 s.Char#1/5 >/1
  //DEBUG: s.Char#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 [*]/7 & EscapeChar$7=1/8 s.Char#1/5/9 {*}/10 Tile{ AsIs: </0 Reuse: & Ord/4 AsIs: s.Char#1/5 AsIs: >/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_closure_head(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_EscapeChar_S7A1]);
  refalrts::copy_stvar(vm, context[9], context[5]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[7]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Ord]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscapeChar("EscapeChar", 982870901U, 3115847316U, func_EscapeChar);


static refalrts::FnResult func_gen_EscapeCharm_Hex_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & EscapeChar-Hex=1/4 (/7 s.Hi#2/9 )/8 s.Lo#2/10 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Hi#2: 9
  //DEBUG: s.Lo#2: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '\\'/0 HalfReuse: 'x'/4 HalfReuse: </7 } & Hex/11 Tile{ AsIs: s.Hi#2/9 } >/12 </13 Tile{ HalfReuse: & Hex/8 AsIs: s.Lo#2/10 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_Hex]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_char(context[0], '\\');
  refalrts::reinit_char(context[4], 'x');
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_Hex]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EscapeCharm_Hex_A1("EscapeChar-Hex=1", 982870901U, 3115847316U, func_gen_EscapeCharm_Hex_A1);


static refalrts::FnResult func_EscapeCharm_Hex(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & EscapeChar-Hex/4 s.Code#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Code#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & EscapeChar-Hex=1/7 Tile{ AsIs: </0 Reuse: & Divmod/4 AsIs: s.Code#1/5 HalfReuse: 16/1 } >/8 >/9 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_EscapeCharm_Hex_A1]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Divmod]);
  refalrts::reinit_number(context[1], 16UL);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscapeCharm_Hex("EscapeChar-Hex", 982870901U, 3115847316U, func_EscapeCharm_Hex);


static refalrts::FnResult func_Hex(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Hex/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Hex/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Hex/4 0/5 >/1
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 0/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '0'/1 ]] }
    refalrts::reinit_char(context[1], '0');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 1/5 >/1
    if( ! refalrts::number_term( 1UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '1'/1 ]] }
    refalrts::reinit_char(context[1], '1');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 2/5 >/1
    if( ! refalrts::number_term( 2UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 2/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '2'/1 ]] }
    refalrts::reinit_char(context[1], '2');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 3/5 >/1
    if( ! refalrts::number_term( 3UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 3/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '3'/1 ]] }
    refalrts::reinit_char(context[1], '3');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 4/5 >/1
    if( ! refalrts::number_term( 4UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 4/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '4'/1 ]] }
    refalrts::reinit_char(context[1], '4');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 5/5 >/1
    if( ! refalrts::number_term( 5UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 5/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '5'/1 ]] }
    refalrts::reinit_char(context[1], '5');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 6/5 >/1
    if( ! refalrts::number_term( 6UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 6/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '6'/1 ]] }
    refalrts::reinit_char(context[1], '6');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 7/5 >/1
    if( ! refalrts::number_term( 7UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 7/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '7'/1 ]] }
    refalrts::reinit_char(context[1], '7');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 8/5 >/1
    if( ! refalrts::number_term( 8UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 8/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '8'/1 ]] }
    refalrts::reinit_char(context[1], '8');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 9/5 >/1
    if( ! refalrts::number_term( 9UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 9/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '9'/1 ]] }
    refalrts::reinit_char(context[1], '9');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 10/5 >/1
    if( ! refalrts::number_term( 10UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 10/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'A'/1 ]] }
    refalrts::reinit_char(context[1], 'A');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 11/5 >/1
    if( ! refalrts::number_term( 11UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 11/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'B'/1 ]] }
    refalrts::reinit_char(context[1], 'B');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 12/5 >/1
    if( ! refalrts::number_term( 12UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 12/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'C'/1 ]] }
    refalrts::reinit_char(context[1], 'C');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 13/5 >/1
    if( ! refalrts::number_term( 13UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 13/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'D'/1 ]] }
    refalrts::reinit_char(context[1], 'D');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 14/5 >/1
    if( ! refalrts::number_term( 14UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 14/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'E'/1 ]] }
    refalrts::reinit_char(context[1], 'E');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Hex/4 15/5 >/1
  if( ! refalrts::number_term( 15UL, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Hex/4 15/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 'F'/1 ]] }
  refalrts::reinit_char(context[1], 'F');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Hex("Hex", 982870901U, 3115847316U, func_Hex);


//End of file
