// This file automatically generated from 'Desugaring.ref'
// Don't edit! Edit 'Desugaring.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1553530317_1510362769
#define COOKIE1_ 1553530317U
#define COOKIE2_ 1510362769U

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
  efunc_Map = 14,
  efunc_Apply = 15,
  efunc_Reduce = 16,
  efunc_DoMapAccum = 17,
  efunc_DoMapAccumm_Aux = 18,
  efunc_Fetch = 19,
  efunc_Pipe = 20,
  efunc_gen_Pipe_S2L1 = 21,
  efunc_gen_Pipe_S3L1 = 22,
  efunc_Passm_UnCondition = 23,
  efunc_Passm_AttachEntries = 24,
  efunc_Passm_RemoveRedundantDriveInline = 25,
  efunc_Passm_EnumerateVariables = 26,
  efunc_Passm_NameNestedFuncs = 27,
  efunc_Passm_RemoveBlocksAndAssigns = 28,
  efunc_Passm_FlatNestedFuncs = 29,
  efunc_Passm_CleanupRedudandExterns = 30,
  efunc_Passm_FoldEnums = 31,
  efunc_Passm_RemovePos = 32,
  efunc_gen_Desugar_L1D2 = 33,
  efunc_RemovePosm_Body = 34,
  efunc_RemovePosm_Expr = 35,
  efunc_gen_Map_Z1 = 36,
  efunc_RemovePosm_Blocks = 37,
  efunc_gen_RemovePosm_Body_S1L1L1A1 = 38,
  efunc_AssignOrCondition = 39,
  efunc_gen_Map_Z2 = 40,
  efunc_gen_Map_Z3 = 41,
  efunc_gen_Map_Z4 = 42,
  efunc_gen_Map_Z5 = 43,
  efunc_gen_Passm_AttachEntries_S2C1 = 44,
  efunc_OneOf = 45,
  efunc_gen_Passm_AttachEntries_S5C1 = 46,
  efunc_gen_Passm_AttachEntries_S6C1 = 47,
  efunc_gen_Passm_AttachEntries_S7C1 = 48,
  efunc_gen_Passm_RemoveRedundantDriveInline_S1C1 = 49,
  efunc_EnumerateVarsm_Expr = 50,
  efunc_gen_Passm_EnumerateVariables_L1S1A1 = 51,
  efunc_EnumerateVarsm_Body = 52,
  efunc_gen_Map_Z6 = 53,
  efunc_EnumerateVarsm_Blocks = 54,
  efunc_gen_EnumerateVarsm_Body_S1L1A4 = 55,
  efunc_gen_EnumerateVarsm_Body_S1L1A3 = 56,
  efunc_gen_EnumerateVarsm_Body_S1L1A2 = 57,
  efunc_EnumerateVarsm_Assignments = 58,
  efunc_gen_EnumerateVarsm_Body_S1L1A1 = 59,
  efunc_gen_Map_Z7 = 60,
  efunc_gen_Map_Z8 = 61,
  efunc_gen_EnumerateVarsm_Assignments_S2A5 = 62,
  efunc_gen_EnumerateVarsm_Assignments_S2A4 = 63,
  efunc_gen_EnumerateVarsm_Assignments_S2A3 = 64,
  efunc_gen_EnumerateVarsm_Assignments_S2A2 = 65,
  efunc_gen_EnumerateVarsm_Assignments_S2A1 = 66,
  efunc_gen_EnumerateVarsm_Expr_L1S4L1 = 67,
  efunc_gen_EnumerateVarsm_Expr_L1S5L1 = 68,
  efunc_gen_EnumerateVarsm_Expr_L1S6L1 = 69,
  efunc_gen_EnumerateVarsm_Expr_L1S7L1 = 70,
  efunc_gen_MapAccum_Z1 = 71,
  efunc_NameNestedBody = 72,
  efunc_gen_Map_Z9 = 73,
  efunc_NameNestedAssigns = 74,
  efunc_NameNestedResult = 75,
  efunc_NameNestedBlocks = 76,
  efunc_DelAccumulator = 77,
  efunc_MapAccum = 78,
  efunc_gen_NameNestedBody_S2L1 = 79,
  efunc_gen_NameNestedBlocks_A1 = 80,
  efunc_gen_NameNestedBlocks_A1L1 = 81,
  efunc_ChainTypeMarker = 82,
  efunc_gen_NameNestedAssigns_L1A1 = 83,
  efunc_gen_NameNestedAssigns_L1 = 84,
  efunc_NameNestedResultRec = 85,
  efunc_gen_MapAccum_Z2 = 86,
  efunc_gen_NameNestedResultRecm_Term_S1A1 = 87,
  efunc_gen_NameNestedResultRecm_Term_S2A1 = 88,
  efunc_gen_NameNestedResultRecm_Term_S3A1 = 89,
  efunc_RemoveAssignsm_Sentences = 90,
  efunc_gen_Map_Z10 = 91,
  efunc_gen_Map_Z11 = 92,
  efunc_RemoveAssignsm_Result = 93,
  efunc_gen_RemoveAssignsm_Sentence_S2A3 = 94,
  efunc_RemoveAssignsm_WindBlocks = 95,
  efunc_gen_RemoveAssignsm_Sentence_S2A2 = 96,
  efunc_gen_RemoveAssignsm_Sentence_S2A1 = 97,
  efunc_RemoveAssignsm_Conditions = 98,
  efunc_gen_RemoveAssignsm_Conditions_L1A1 = 99,
  efunc_gen_Map_Z12 = 100,
  efunc_gen_Reduce_Z1 = 101,
  efunc_gen_Map_Z13 = 102,
  efunc_gen_Passm_FlatNestedFuncs_L1S1L1C1 = 103,
  efunc_gen_Map_Z14 = 104,
  efunc_gen_Passm_FlatNestedFuncs_L1S1A1 = 105,
  efunc_ExtractNested = 106,
  efunc_gen_Map_Z15 = 107,
  efunc_ExtractNestedRec = 108,
  efunc_gen_ExtractNested_A1 = 109,
  efunc_ExtractNestedm_Sentence = 110,
  efunc_gen_ExtractNestedRec_S1A1 = 111,
  efunc_ExtractNestedm_Result = 112,
  efunc_gen_ExtractNestedm_Sentence_A3 = 113,
  efunc_ExtractNestedm_Conditions = 114,
  efunc_gen_ExtractNestedm_Sentence_A2 = 115,
  efunc_gen_ExtractNestedm_Sentence_A1 = 116,
  efunc_ExtractNestedm_Pattern = 117,
  efunc_gen_ExtractNestedm_Conditions_S1A4 = 118,
  efunc_gen_ExtractNestedm_Conditions_S1A3 = 119,
  efunc_Uniq = 120,
  efunc_gen_ExtractNestedm_Conditions_S1A2 = 121,
  efunc_gen_ExtractNestedm_Conditions_S1A1 = 122,
  efunc_ExtractAllVars = 123,
  efunc_gen_MapAccum_Z3 = 124,
  efunc_ExtractNestedm_Resultm_Term = 125,
  efunc_gen_ExtractNestedm_Result_A1 = 126,
  efunc_gen_Map_Z16 = 127,
  efunc_gen_Reduce_Z2 = 128,
  efunc_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1 = 129,
  efunc_CreateContext = 130,
  efunc_gen_ExtractNestedm_Resultm_Term_S5A2 = 131,
  efunc_gen_ExtractNestedm_Resultm_Term_S5A2L1D2 = 132,
  efunc_CheckBorrowed = 133,
  efunc_gen_ExtractNestedm_Resultm_Term_S2A1 = 134,
  efunc_gen_ExtractNestedm_Resultm_Term_S3A1 = 135,
  efunc_gen_ExtractNestedm_Resultm_Term_S4A1 = 136,
  efunc_gen_ExtractNestedm_Resultm_Term_S5A1 = 137,
  efunc_gen_Map_Z17 = 138,
  efunc_gen_Map_Z18 = 139,
  efunc_gen_Map_Z19 = 140,
  efunc_gen_Passm_CleanupRedudandExterns_A1L1 = 141,
  efunc_gen_Passm_CleanupRedudandExterns_A1 = 142,
  efunc_gen_Map_Z20 = 143,
  efunc_gen_Passm_RemovePos_L1D5 = 144,
  efunc_gen_RemovePosm_Body_S1L1L1D1 = 145,
  efunc_gen_RemovePosm_Body_S1L1D1 = 146,
  efunc_gen_RemovePosm_Blocks_L1D1 = 147,
  efunc_gen_EnumerateVarsm_Body_S1L1D1 = 148,
  efunc_gen_EnumerateVarsm_Blocks_L1D1 = 149,
  efunc_gen_DoMapAccum_Z1 = 150,
  efunc_gen_DoMapAccum_Z2 = 151,
  efunc_RemoveAssignsm_Sentence = 152,
  efunc_gen_RemoveAssignsm_Conditions_L1D1 = 153,
  efunc_gen_RemoveAssignsm_WindBlocks_L1D1 = 154,
  efunc_gen_Passm_FlatNestedFuncs_L1S1L1 = 155,
  efunc_gen_DoMapAccum_Z3 = 156,
  efunc_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1D1 = 157,
  efunc_gen_CreateContext_S1L1D2 = 158,
  efunc_gen_CreateContext_S2L1D2 = 159,
  efunc_FilterDeclarations = 160,
  efunc_gen_DoMapAccumm_Aux_Z1 = 161,
  efunc_gen_EnumerateVarsm_Expr_L1 = 162,
  efunc_gen_DoMapAccumm_Aux_Z2 = 163,
  efunc_NameNestedResultRecm_Term = 164,
  efunc_gen_DoMapAccumm_Aux_Z3 = 165,
  efunc_UpdateBorrowedVars = 166,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_Conditionsm_Native = 6,
  ident_Conditionsm_Transform = 7,
  ident_Function = 8,
  ident_Ident = 9,
  ident_NativeBlock = 10,
  ident_Spec = 11,
  ident_Sentences = 12,
  ident_NativeBody = 13,
  ident_Assign = 14,
  ident_Condition = 15,
  ident_TkVariable = 16,
  ident_TkNewVariable = 17,
  ident_Name = 18,
  ident_Symbol = 19,
  ident_Brackets = 20,
  ident_ADTm_Brackets = 21,
  ident_CallBrackets = 22,
  ident_Closure = 23,
  ident_Entry = 24,
  ident_GNm_Entry = 25,
  ident_Enum = 26,
  ident_Swap = 27,
  ident_Declaration = 28,
  ident_True = 29,
  ident_Inline = 30,
  ident_Drive = 31,
  ident_SUF = 32,
  ident_ClosureBrackets = 33,
  ident_GNm_Local = 34,
  ident_Identifier = 35,
  ident_VAR = 36,
  ident_MarkupContext = 37,
  ident_NoMarkupContext = 38,
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

static refalrts::NativeReference nat_ref_Mu("Mu", COOKIE1_, COOKIE2_, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 1510362769UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 1553530317UL);
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
  refalrts::reinit_number(context[5], 1553530317UL);
  refalrts::reinit_number(context[7], 1510362769UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", COOKIE1_, COOKIE2_, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", COOKIE1_, COOKIE2_, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", COOKIE1_, COOKIE2_, func_Residue);


static refalrts::FnResult func_Apply(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Apply/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply/4 s.Fn#1/5 e.Argument#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.Argument#1 as range 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.Argument#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.Fn#1/5 AsIs: e.Argument#1/7 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply/4 (/5 t.Closure#1/9 e.Bounded#1/7 )/6 e.Argument#1/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument#1 as range 2
  context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Bounded#1 as range 7
  //DEBUG: e.Argument#1: 2
  //DEBUG: t.Closure#1: 9
  //DEBUG: e.Bounded#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply/4 } Tile{ AsIs: t.Closure#1/9 } Tile{ AsIs: e.Bounded#1/7 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Apply("Apply", COOKIE1_, COOKIE2_, func_Apply);


static refalrts::FnResult func_Map(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Map/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map/4 t.Fn#1/5 t.Next#1/9 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 7
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Next#1/9 } >/11 </12 & Map/13 t.Fn#1/5/14 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Map]);
    refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map/4 t.Fn#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map/4 t.Fn#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Map("Map", COOKIE1_, COOKIE2_, func_Map);


static refalrts::FnResult func_Reduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Reduce/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 t.Next#1/11 e.Tail#1/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
    if( ! context[12] )
      continue;
    // closed e.Tail#1 as range 9
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 11
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce/14 t.Fn#1/5/15 Tile{ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/17 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Reduce]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[13], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce/4 t.Fn#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Reduce("Reduce", COOKIE1_, COOKIE2_, func_Reduce);


static refalrts::FnResult func_Fetch(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Fetch/4 e.Argument#1/2 t.Function#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument#1 as range 2
  //DEBUG: t.Function#1: 5
  //DEBUG: e.Argument#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 } Tile{ AsIs: t.Function#1/5 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Apply]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Fetch("Fetch", COOKIE1_, COOKIE2_, func_Fetch);


static refalrts::FnResult func_MapAccum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum/4 t.Fn#1/5 t.Acc#1/7 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 } (/9 )/10 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MapAccum("MapAccum", COOKIE1_, COOKIE2_, func_MapAccum);


static refalrts::FnResult func_DoMapAccum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & DoMapAccum/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum/4 t.new#1/5 t.new#2/7 (/11 e.new#3/9 )/12 e.new#4/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#3 as range 9
  // closed e.new#4 as range 2
  do {
    // </0 & DoMapAccum/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/13 )/12 t.Next#1/17 e.Tail#1/15 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.Scanned#1 as range 13
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 15
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Acc#1: 7
    //DEBUG: e.Scanned#1: 13
    //DEBUG: t.Next#1: 17
    //DEBUG: e.Tail#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 </20 & Apply/21 t.Fn#1/5/22 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/24 )/25 Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Apply]);
    refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_DoMapAccumm_Aux]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/9 )/12 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 9
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: e.Scanned#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum/4 t.Fn#1/5 {REMOVED TILE} (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoMapAccum("DoMapAccum", COOKIE1_, COOKIE2_, func_DoMapAccum);


static refalrts::FnResult func_DoMapAccumm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoMapAccum-Aux/4 t.Fn#1/5 (/9 e.Scanned#1/7 )/10 (/13 t.Acc#1/15 e.StepScanned#1/11 )/14 e.Tail#1/2 >/1
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
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Scanned#1 as range 7
  // closed e.Tail#1 as range 2
  context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 11
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Scanned#1: 7
  //DEBUG: e.Tail#1: 2
  //DEBUG: t.Acc#1: 15
  //DEBUG: e.StepScanned#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#1/15 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Scanned#1/7 } Tile{ AsIs: e.StepScanned#1/11 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoMapAccumm_Aux("DoMapAccum-Aux", COOKIE1_, COOKIE2_, func_DoMapAccumm_Aux);


static refalrts::FnResult func_UnBracket(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & UnBracket/4 (/7 e.Expr#1/5 )/8 >/1
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
  // closed e.Expr#1 as range 5
  //DEBUG: e.Expr#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UnBracket/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Expr#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnBracket("UnBracket", COOKIE1_, COOKIE2_, func_UnBracket);


static refalrts::FnResult func_DelAccumulator(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & DelAccumulator/4 t.Acc#1/5 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2
  //DEBUG: t.Acc#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DelAccumulator/4 t.Acc#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DelAccumulator("DelAccumulator", COOKIE1_, COOKIE2_, func_DelAccumulator);


static refalrts::FnResult func_Inc(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Inc/4 e.Num#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Num#1 as range 2
  //DEBUG: e.Num#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: e.Num#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Add]);
  refalrts::reinit_number(context[4], 1UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Inc("Inc", COOKIE1_, COOKIE2_, func_Inc);


static refalrts::FnResult func_Dec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Dec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Dec/4 s.Num#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.Num#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 AsIs: s.Num#1/7 HalfReuse: 1/1 } >/8 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::update_name(context[4], functions[efunc_Sub]);
    refalrts::reinit_number(context[1], 1UL);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Dec/4 e.Num#1/2 >/1
  // closed e.Num#1 as range 2
  //DEBUG: e.Num#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 } (/5 Tile{ AsIs: e.Num#1/2 } )/6 1/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[5]);
  refalrts::alloc_close_bracket(vm, context[6]);
  refalrts::alloc_number(vm, context[7], 1UL);
  refalrts::update_name(context[4], functions[efunc_Sub]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Dec("Dec", COOKIE1_, COOKIE2_, func_Dec);


static refalrts::FnResult func_gen_Pipe_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Pipe$2\1/4 t.Func#1/5 (/9 e.Funcs#1/7 )/10 e.Arg#2/2 >/1
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
  // closed e.Funcs#1 as range 7
  // closed e.Arg#2 as range 2
  //DEBUG: t.Func#1: 5
  //DEBUG: e.Funcs#1: 7
  //DEBUG: e.Arg#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & Apply/12 Tile{ AsIs: t.Func#1/5 } Tile{ AsIs: e.Arg#2/2 } >/13 </14 Tile{ HalfReuse: & Pipe/9 AsIs: e.Funcs#1/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Apply]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_name(context[9], functions[efunc_Pipe]);
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Pipe_S2L1("Pipe$2\\1", COOKIE1_, COOKIE2_, func_gen_Pipe_S2L1);


static refalrts::FnResult func_gen_Pipe_S3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pipe$3\1/4 e.Arg#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#2 as range 2
  //DEBUG: e.Arg#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pipe$3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Arg#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Pipe_S3L1("Pipe$3\\1", COOKIE1_, COOKIE2_, func_gen_Pipe_S3L1);


static refalrts::FnResult func_Pipe(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Pipe/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Pipe/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Pipe/4 t.Func#1/7 >/1
      if( ! refalrts::empty_seq( context[5], context[6] ) )
        continue;
      //DEBUG: t.Func#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Pipe/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Func#1/7 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Pipe/4 t.Func#1/7 e.Funcs#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Funcs#1 as range 9
    //DEBUG: t.Func#1: 7
    //DEBUG: e.Funcs#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: [*]/0 Reuse: & Pipe$2\1/4 AsIs: t.Func#1/7 } (/11 Tile{ AsIs: e.Funcs#1/9 } )/12 Tile{ HalfReuse: {*}/1 ]] }
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_Pipe_S2L1]);
    refalrts::reinit_unwrapped_closure(context[1], context[0]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    refalrts::wrap_closure( context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pipe/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pipe/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: & Pipe$3\1/1 ]] }
  refalrts::reinit_name(context[1], functions[efunc_gen_Pipe_S3L1]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Pipe("Pipe", COOKIE1_, COOKIE2_, func_Pipe);


static refalrts::FnResult func_gen_Desugar_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Desugar\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Desugar\1/4 s.new#1/5 s.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Desugar\1/4 s.MarkupContext#1/5 # Conditions-Native/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_Conditionsm_Native], context[6] ) )
      continue;
    //DEBUG: s.MarkupContext#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Desugar\1/4 s.MarkupContext#1/5 # Conditions-Native/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Desugar\1/4 s.MarkupContext#1/5 # Conditions-Transform/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_Conditionsm_Transform], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.MarkupContext#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 Reuse: & Pass-UnCondition/4 AsIs: s.MarkupContext#1/5 HalfReuse: )/6 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::update_name(context[4], functions[efunc_Passm_UnCondition]);
  refalrts::reinit_close_bracket(context[6]);
  refalrts::link_brackets( context[0], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Desugar_L1("Desugar\\1", COOKIE1_, COOKIE2_, func_gen_Desugar_L1);


static refalrts::FnResult func_Desugar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Desugar/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Desugar/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Desugar/4 s.MarkupContext#1/5 # Conditions-Native/6 e.AST#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Conditionsm_Native], context[6] ) )
      continue;
    // closed e.AST#1 as range 7
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.AST#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </9 Tile{ HalfReuse: & Pass-RemovePos/6 AsIs: e.AST#1/7 AsIs: >/1 } [*]/10 & Pipe$2\1/11 & Pass-AttachEntries/12 (/13 & Pass-RemoveRedundantDriveInline/14 & Pass-EnumerateVariables/15 & Pass-NameNestedFuncs/16 & Pass-RemoveBlocksAndAssigns/17 (/18 & Pass-FlatNestedFuncs/19 Tile{ AsIs: s.MarkupContext#1/5 } )/20 & Pass-CleanupRedudandExterns/21 & Pass-FoldEnums/22 )/23 {*}/24 >/25 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_closure_head(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Pipe_S2L1]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Passm_AttachEntries]);
    refalrts::alloc_open_bracket(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Passm_RemoveRedundantDriveInline]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Passm_EnumerateVariables]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Passm_NameNestedFuncs]);
    refalrts::alloc_name(vm, context[17], functions[efunc_Passm_RemoveBlocksAndAssigns]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_Passm_FlatNestedFuncs]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Passm_CleanupRedudandExterns]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Passm_FoldEnums]);
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::alloc_unwrapped_closure(vm, context[24], context[10]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_name(context[6], functions[efunc_Passm_RemovePos]);
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[23] );
    refalrts::link_brackets( context[18], context[20] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[25] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[10], context[19] );
    res = refalrts::splice_evar( res, context[6], context[1] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    refalrts::wrap_closure( context[24] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Desugar/4 s.MarkupContext#1/5 # Conditions-Transform/6 e.AST#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Conditionsm_Transform], context[6] ) )
      continue;
    // closed e.AST#1 as range 7
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.AST#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </9 Tile{ HalfReuse: & Pass-RemovePos/6 AsIs: e.AST#1/7 AsIs: >/1 } [*]/10 & Pipe$2\1/11 & Pass-AttachEntries/12 (/13 & Pass-RemoveRedundantDriveInline/14 & Pass-EnumerateVariables/15 & Pass-NameNestedFuncs/16 & Pass-RemoveBlocksAndAssigns/17 (/18 & Pass-FlatNestedFuncs/19 Tile{ AsIs: s.MarkupContext#1/5 } )/20 (/21 & Pass-UnCondition/22 s.MarkupContext#1/5/23 )/24 & Pass-CleanupRedudandExterns/25 & Pass-FoldEnums/26 )/27 {*}/28 >/29 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_closure_head(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Pipe_S2L1]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Passm_AttachEntries]);
    refalrts::alloc_open_bracket(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Passm_RemoveRedundantDriveInline]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Passm_EnumerateVariables]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Passm_NameNestedFuncs]);
    refalrts::alloc_name(vm, context[17], functions[efunc_Passm_RemoveBlocksAndAssigns]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_Passm_FlatNestedFuncs]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Passm_UnCondition]);
    refalrts::copy_stvar(vm, context[23], context[5]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_Passm_CleanupRedudandExterns]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Passm_FoldEnums]);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::alloc_unwrapped_closure(vm, context[28], context[10]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_name(context[6], functions[efunc_Passm_RemovePos]);
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[27] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::link_brackets( context[18], context[20] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[29] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[10], context[19] );
    res = refalrts::splice_evar( res, context[6], context[1] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    refalrts::wrap_closure( context[28] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Desugar/4 s.MarkupContext#1/5 s.ConditionsMode#1/6 e.AST#1/2 >/1
  // closed e.AST#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: s.ConditionsMode#1: 6
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Fetch/8 Tile{ AsIs: e.AST#1/2 } </9 & Pipe/10 & Pass-RemovePos/11 & Pass-AttachEntries/12 & Pass-RemoveRedundantDriveInline/13 & Pass-EnumerateVariables/14 & Pass-NameNestedFuncs/15 & Pass-RemoveBlocksAndAssigns/16 (/17 & Pass-FlatNestedFuncs/18 s.MarkupContext#1/5/19 )/20 Tile{ AsIs: </0 Reuse: & Desugar\1*2/4 AsIs: s.MarkupContext#1/5 AsIs: s.ConditionsMode#1/6 } >/21 & Pass-CleanupRedudandExterns/22 & Pass-FoldEnums/23 >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Pipe]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Passm_RemovePos]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Passm_AttachEntries]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Passm_RemoveRedundantDriveInline]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Passm_EnumerateVariables]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Passm_NameNestedFuncs]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Passm_RemoveBlocksAndAssigns]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_Passm_FlatNestedFuncs]);
  refalrts::copy_stvar(vm, context[19], context[5]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_Passm_CleanupRedudandExterns]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Passm_FoldEnums]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_gen_Desugar_L1D2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[24] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[9], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Desugar("Desugar", 0U, 0U, func_Desugar);


static refalrts::FnResult func_gen_Passm_RemovePos_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Pass-RemovePos\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pass-RemovePos\1/4 (/7 s.new#1/9 t.new#2/10 e.new#3/5 )/8 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & Pass-RemovePos\1/4 (/7 # Function/9 t.SrcPos#2/10 s.ScopeClass#2/14 (/17 e.Name#2/15 )/18 e.Body#2/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Function], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Name#2 as range 15
    // closed e.Body#2 as range 12
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: s.ScopeClass#2: 14
    //DEBUG: e.Name#2: 15
    //DEBUG: e.Body#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/9 } Tile{ AsIs: s.ScopeClass#2/14 AsIs: (/17 AsIs: e.Name#2/15 AsIs: )/18 } Tile{ AsIs: </0 Reuse: & RemovePos-Body/4 } Tile{ AsIs: e.Body#2/12 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_RemovePosm_Body]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[14], context[18] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Pass-RemovePos\1/4 (/7 # Ident/9 t.SrcPos#2/10 e.Name#2/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Ident], context[9] ) )
      continue;
    // closed e.Name#2 as range 12
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Name#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Ident/9 } Tile{ AsIs: e.Name#2/12 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Pass-RemovePos\1/4 (/7 # NativeBlock/9 t.SrcPos#2/10 e.Code#2/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[9] ) )
      continue;
    // closed e.Code#2 as range 12
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Code#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # NativeBlock/9 AsIs: t.SrcPos#2/10 AsIs: e.Code#2/12 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-RemovePos\1/4 (/7 s.new#4/9 t.new#5/10 t.new#6/12 e.new#7/5 )/8 >/1
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 5
  do {
    // </0 & Pass-RemovePos\1/4 (/7 # Spec/9 t.SrcPos#2/10 (/12 e.Name#2/16 )/13 e.Pattern#2/14 )/8 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = 0;
    context[17] = 0;
    if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Spec], context[9] ) )
      continue;
    // closed e.Name#2 as range 16
    // closed e.Pattern#2 as range 14
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Name#2: 16
    //DEBUG: e.Pattern#2: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Spec/9 } Tile{ AsIs: (/12 AsIs: e.Name#2/16 AsIs: )/13 } Tile{ AsIs: </0 Reuse: & RemovePos-Expr/4 } Tile{ AsIs: e.Pattern#2/14 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_RemovePosm_Expr]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-RemovePos\1/4 (/7 s.EnumSwapDeclaration#2/9 t.SrcPos#2/10 s.ScopeClass#2/12 e.Name#2/5 )/8 >/1
  if( ! refalrts::svar_term( context[12], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 5
  //DEBUG: t.SrcPos#2: 10
  //DEBUG: s.ScopeClass#2: 12
  //DEBUG: s.EnumSwapDeclaration#2: 9
  //DEBUG: e.Name#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.EnumSwapDeclaration#2/9 } Tile{ AsIs: s.ScopeClass#2/12 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[8] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_RemovePos_L1("Pass-RemovePos\\1", COOKIE1_, COOKIE2_, func_gen_Passm_RemovePos_L1);


static refalrts::FnResult func_Passm_RemovePos(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pass-RemovePos/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_RemovePos("Pass-RemovePos", COOKIE1_, COOKIE2_, func_Passm_RemovePos);


static refalrts::FnResult func_gen_RemovePosm_Body_S1L1L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & RemovePos-Body$1\1\1=1/4 s.ChainType#3/17 (/15 e.Result#3/13 )/16 (/11 e.Blocks#3/9 )/12 (/7 e.Pattern#3/5 )/8 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Result#3 as range 13
  // closed e.Blocks#3 as range 9
  // closed e.Pattern#3 as range 5
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Result#3: 13
  //DEBUG: e.Blocks#3: 9
  //DEBUG: e.Pattern#3: 5
  //DEBUG: s.ChainType#3: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: s.ChainType#3/17 AsIs: (/15 } Tile{ AsIs: </0 } & RemovePos-Expr/18 Tile{ AsIs: e.Result#3/13 } >/19 )/20 (/21 Tile{ HalfReuse: </16 HalfReuse: & RemovePos-Blocks/11 AsIs: e.Blocks#3/9 HalfReuse: >/12 HalfReuse: )/7 } (/22 </23 & RemovePos-Expr/24 Tile{ AsIs: e.Pattern#3/5 } >/25 Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::alloc_name(vm, context[18], functions[efunc_RemovePosm_Expr]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_RemovePosm_Expr]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_call(context[16]);
  refalrts::reinit_name(context[11], functions[efunc_RemovePosm_Blocks]);
  refalrts::reinit_close_call(context[12]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[22], context[8] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[21], context[7] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[15], context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[16], context[7] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Body_S1L1L1A1("RemovePos-Body$1\\1\\1=1", COOKIE1_, COOKIE2_, func_gen_RemovePosm_Body_S1L1L1A1);


static refalrts::FnResult func_gen_RemovePosm_Body_S1L1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & RemovePos-Body$1\1\1/4 (/7 s.ChainType#3/21 (/19 e.Result#3/17 )/20 (/15 e.Blocks#3/13 )/16 (/11 e.Pattern#3/9 )/12 )/8 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#3 as range 17
  // closed e.Blocks#3 as range 13
  // closed e.Pattern#3 as range 9
  if( ! refalrts::svar_left( context[21], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Result#3: 17
  //DEBUG: e.Blocks#3: 13
  //DEBUG: e.Pattern#3: 9
  //DEBUG: s.ChainType#3: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & RemovePos-Body$1\1\1=1/7 AsIs: s.ChainType#3/21 AsIs: (/19 AsIs: e.Result#3/17 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#3/13 AsIs: )/16 AsIs: (/11 AsIs: e.Pattern#3/9 AsIs: )/12 HalfReuse: </8 HalfReuse: & AssignOrCondition/1 } Tile{ HalfReuse: s.ChainType3 #21/0 } >/22 >/23 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_RemovePosm_Body_S1L1L1A1]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[1], functions[efunc_AssignOrCondition]);
  refalrts::reinit_svar( context[0], context[21] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Body_S1L1L1("RemovePos-Body$1\\1\\1", COOKIE1_, COOKIE2_, func_gen_RemovePosm_Body_S1L1L1);


static refalrts::FnResult func_gen_RemovePosm_Body_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & RemovePos-Body$1\1/4 (/7 (/11 e.Pattern#2/9 )/12 e.Assigns#2/5 (/19 e.Result#2/17 )/20 (/15 e.Blocks#2/13 )/16 )/8 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#2 as range 9
  // closed e.Assigns#2 as range 5
  // closed e.Result#2 as range 17
  // closed e.Blocks#2 as range 13
  //DEBUG: e.Pattern#2: 9
  //DEBUG: e.Assigns#2: 5
  //DEBUG: e.Result#2: 17
  //DEBUG: e.Blocks#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: </7 HalfReuse: & RemovePos-Expr/11 AsIs: e.Pattern#2/9 HalfReuse: >/12 } )/21 </22 & Map@2/23 Tile{ AsIs: e.Assigns#2/5 } >/24 Tile{ AsIs: (/19 } </25 & RemovePos-Expr/26 Tile{ AsIs: e.Result#2/17 } >/27 )/28 (/29 Tile{ HalfReuse: </20 HalfReuse: & RemovePos-Blocks/15 AsIs: e.Blocks#2/13 HalfReuse: >/16 AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_gen_Map_Z2]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_RemovePosm_Expr]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[11], functions[efunc_RemovePosm_Expr]);
  refalrts::reinit_close_call(context[12]);
  refalrts::reinit_open_call(context[20]);
  refalrts::reinit_name(context[15], functions[efunc_RemovePosm_Blocks]);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[29], context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[19], context[28] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[4], context[21] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[27], context[29] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[21], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Body_S1L1("RemovePos-Body$1\\1", COOKIE1_, COOKIE2_, func_gen_RemovePosm_Body_S1L1);


static refalrts::FnResult func_RemovePosm_Body(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & RemovePos-Body/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RemovePos-Body/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & RemovePos-Body/4 # Sentences/5 e.Sentences#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[5] ) )
      continue;
    // closed e.Sentences#1 as range 6
    //DEBUG: e.Sentences#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Sentences/0 HalfReuse: </4 HalfReuse: & Map@3/5 AsIs: e.Sentences#1/6 AsIs: >/1 ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Sentences]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_Map_Z3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemovePos-Body/4 # NativeBody/5 t.SrcPos#1/6 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2
  //DEBUG: t.SrcPos#1: 6
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RemovePos-Body/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/5 AsIs: t.SrcPos#1/6 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemovePosm_Body("RemovePos-Body", COOKIE1_, COOKIE2_, func_RemovePosm_Body);


static refalrts::FnResult func_AssignOrCondition(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & AssignOrCondition/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AssignOrCondition/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & AssignOrCondition/4 # Assign/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Assign], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AssignOrCondition/4 # Assign/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AssignOrCondition/4 # Condition/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Condition], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AssignOrCondition/4 # Condition/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AssignOrCondition("AssignOrCondition", COOKIE1_, COOKIE2_, func_AssignOrCondition);


static refalrts::FnResult func_gen_RemovePosm_Blocks_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & RemovePos-Blocks\1/4 (/7 e.Body#2/5 )/8 >/1
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
  // closed e.Body#2 as range 5
  //DEBUG: e.Body#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & RemovePos-Body/7 AsIs: e.Body#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_RemovePosm_Body]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Blocks_L1("RemovePos-Blocks\\1", COOKIE1_, COOKIE2_, func_gen_RemovePosm_Blocks_L1);


static refalrts::FnResult func_RemovePosm_Blocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & RemovePos-Blocks/4 e.Blocks#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Blocks#1 as range 2
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 AsIs: e.Blocks#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemovePosm_Blocks("RemovePos-Blocks", COOKIE1_, COOKIE2_, func_RemovePosm_Blocks);


static refalrts::FnResult func_gen_RemovePosm_Expr_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & RemovePos-Expr\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RemovePos-Expr\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & RemovePos-Expr\1/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & RemovePos-Expr\1/4 (/5 s.new#4/9 t.new#5/12 t.new#6/14 e.new#7/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
      if( ! context[13] )
        continue;
      context[15] = refalrts::tvar_left( context[14], context[10], context[11] );
      if( ! context[15] )
        continue;
      // closed e.new#7 as range 10
      do {
        // </0 & RemovePos-Expr\1/4 (/5 s.new#8/9 t.new#9/12 s.new#10/14 e.new#11/16 )/6 >/1
        context[16] = context[10];
        context[17] = context[11];
        if( ! refalrts::svar_term( context[14], context[14] ) )
          continue;
        // closed e.new#11 as range 16
        do {
          // </0 & RemovePos-Expr\1/4 (/5 # TkVariable/9 t.SrcPos#2/12 s.Mode#2/14 e.Index#2/18 )/6 >/1
          context[18] = context[16];
          context[19] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
            continue;
          // closed e.Index#2 as range 18
          //DEBUG: t.SrcPos#2: 12
          //DEBUG: s.Mode#2: 14
          //DEBUG: e.Index#2: 18

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/12 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkVariable/9 } Tile{ AsIs: s.Mode#2/14 AsIs: e.Index#2/18 AsIs: )/6 } Tile{ ]] }
          refalrts::link_brackets( context[5], context[6] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[14], context[6] );
          res = refalrts::splice_evar( res, context[5], context[9] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & RemovePos-Expr\1/4 (/5 # TkNewVariable/9 t.SrcPos#2/12 s.Mode#2/14 e.Index#2/18 )/6 >/1
        context[18] = context[16];
        context[19] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_TkNewVariable], context[9] ) )
          continue;
        // closed e.Index#2 as range 18
        //DEBUG: t.SrcPos#2: 12
        //DEBUG: s.Mode#2: 14
        //DEBUG: e.Index#2: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/12 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkNewVariable/9 } Tile{ AsIs: s.Mode#2/14 AsIs: e.Index#2/18 AsIs: )/6 } Tile{ ]] }
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[14], context[6] );
        res = refalrts::splice_evar( res, context[5], context[9] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & RemovePos-Expr\1/4 (/5 # Symbol/9 # Name/12 t.SrcPos#2/14 e.Name#2/16 )/6 >/1
      context[16] = context[10];
      context[17] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_Name], context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
        continue;
      // closed e.Name#2 as range 16
      //DEBUG: t.SrcPos#2: 14
      //DEBUG: e.Name#2: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/14 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Symbol/9 AsIs: # Name/12 } Tile{ AsIs: e.Name#2/16 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[5], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & RemovePos-Expr\1/4 (/5 # Brackets/9 e.InBrackets#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 10
      //DEBUG: e.InBrackets#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </5 HalfReuse: & RemovePos-Expr/9 AsIs: e.InBrackets#2/10 HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_RemovePosm_Expr]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & RemovePos-Expr\1/4 (/5 # ADT-Brackets/9 t.SrcPos#2/12 (/16 e.Name#2/14 )/17 e.InBrackets#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
        continue;
      context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
      if( ! context[13] )
        continue;
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[10], context[11] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      // closed e.Name#2 as range 14
      // closed e.InBrackets#2 as range 10
      //DEBUG: t.SrcPos#2: 12
      //DEBUG: e.Name#2: 14
      //DEBUG: e.InBrackets#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # ADT-Brackets/9 } Tile{ AsIs: (/16 AsIs: e.Name#2/14 AsIs: )/17 } Tile{ AsIs: </0 Reuse: & RemovePos-Expr/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::update_name(context[4], functions[efunc_RemovePosm_Expr]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & RemovePos-Expr\1/4 (/5 # CallBrackets/9 e.InBrackets#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 10
      //DEBUG: e.InBrackets#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </5 HalfReuse: & RemovePos-Expr/9 AsIs: e.InBrackets#2/10 HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_RemovePosm_Expr]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & RemovePos-Expr\1/4 (/5 # Closure/9 e.Sentences#2/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[9] ) )
      continue;
    // closed e.Sentences#2 as range 10
    //DEBUG: e.Sentences#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Closure/4 HalfReuse: </5 HalfReuse: & RemovePos-Body/9 AsIs: e.Sentences#2/10 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Closure]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[9], functions[efunc_RemovePosm_Body]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemovePos-Expr\1/4 t.OtherTerm#2/5 >/1
  //DEBUG: t.OtherTerm#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Expr_L1("RemovePos-Expr\\1", COOKIE1_, COOKIE2_, func_gen_RemovePosm_Expr_L1);


static refalrts::FnResult func_RemovePosm_Expr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & RemovePos-Expr/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@5/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemovePosm_Expr("RemovePos-Expr", 0U, 0U, func_RemovePosm_Expr);


static refalrts::FnResult func_Passm_AttachEntries(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & Pass-AttachEntries/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Pass-AttachEntries/4 (/9 s.new#1/11 e.new#2/7 )/10 e.new#3/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    // closed e.new#2 as range 7
    do {
      // </0 & Pass-AttachEntries/4 (/9 s.new#5/11 s.new#6/16 e.new#7/12 )/10 e.new#4/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      // closed e.new#4 as range 14
      if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
        continue;
      // closed e.new#7 as range 12
      do {
        // </0 & Pass-AttachEntries/4 (/9 # Entry/11 # GN-Entry/16 e.new#9/17 )/10 e.new#8/19 >/1
        context[17] = context[12];
        context[18] = context[13];
        context[19] = context[14];
        context[20] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_Entry], context[11] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[16] ) )
          continue;
        // closed e.new#9 as range 17
        // closed e.new#8 as range 19
        do {
          // </0 & Pass-AttachEntries/4 (/9 # Entry/11 # GN-Entry/16 e.Name#1/21 )/10 e.Items-B#1/25 (/31 # Function/33 s.ScopeClass#1/34 (/37 e.Name#1/39 )/38 e.Body#1/29 )/32 e.Items-E#1/27 >/1
          context[21] = context[17];
          context[22] = context[18];
          context[23] = context[19];
          context[24] = context[20];
          // closed e.Name#1 as range 21
          context[25] = 0;
          context[26] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[27] = context[23];
            context[28] = context[24];
            context[29] = 0;
            context[30] = 0;
            context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
            if( ! context[31] )
              continue;
            refalrts::bracket_pointers(context[31], context[32]);
            context[33] = refalrts::ident_left( identifiers[ident_Function], context[29], context[30] );
            if( ! context[33] )
              continue;
            // closed e.Items-E#1 as range 27
            if( ! refalrts::svar_left( context[34], context[29], context[30] ) )
              continue;
            context[35] = 0;
            context[36] = 0;
            context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
            if( ! context[37] )
              continue;
            refalrts::bracket_pointers(context[37], context[38]);
            if( ! refalrts::repeated_evar_left( vm, context[39], context[40], context[21], context[22], context[35], context[36] ) )
              continue;
            if( ! refalrts::empty_seq( context[35], context[36] ) )
              continue;
            // closed e.Body#1 as range 29
            //DEBUG: e.Name#1: 21
            //DEBUG: e.Items-B#1: 25
            //DEBUG: e.Items-E#1: 27
            //DEBUG: s.ScopeClass#1: 34
            //DEBUG: e.Body#1: 29

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} & Pass-AttachEntries/4 (/9 # Entry/11 {REMOVED TILE} e.Name#1/21 {REMOVED TILE} s.ScopeClass#1/34 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Pass-AttachEntries/10 AsIs: e.Items-B#1/25 AsIs: (/31 AsIs: # Function/33 } Tile{ AsIs: # GN-Entry/16 } Tile{ AsIs: (/37 AsIs: e.Name#1/39 AsIs: )/38 AsIs: e.Body#1/29 AsIs: )/32 AsIs: e.Items-E#1/27 AsIs: >/1 ]] }
            refalrts::reinit_name(context[10], functions[efunc_Passm_AttachEntries]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[31], context[32] );
            refalrts::link_brackets( context[37], context[38] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[37];
            res = refalrts::splice_evar( res, context[16], context[16] );
            res = refalrts::splice_evar( res, context[10], context[33] );
            refalrts::splice_to_freelist_open( vm, context[0], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[25], context[26], context[23], context[24] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Pass-AttachEntries/4 (/9 # Entry/11 # GN-Entry/16 e.Name#1/21 )/10 e.Items-B#1/25 (/31 s.EnumSwapDeclaration#1/35 s.ScopeClass#1/36 e.Name#1/33 )/32 e.Items-E#1/27 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        // closed e.Name#1 as range 21
        context[25] = 0;
        context[26] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[27] = context[23];
          context[28] = context[24];
          context[29] = 0;
          context[30] = 0;
          context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
          if( ! context[31] )
            continue;
          refalrts::bracket_pointers(context[31], context[32]);
          if( ! refalrts::repeated_evar_right( vm, context[33], context[34], context[21], context[22], context[29], context[30] ) )
            continue;
          // closed e.Items-E#1 as range 27
          if( ! refalrts::svar_left( context[35], context[29], context[30] ) )
            continue;
          if( ! refalrts::svar_left( context[36], context[29], context[30] ) )
            continue;
          if( ! refalrts::empty_seq( context[29], context[30] ) )
            continue;
          //DEBUG: e.Name#1: 21
          //DEBUG: e.Items-B#1: 25
          //DEBUG: e.Items-E#1: 27
          //DEBUG: s.EnumSwapDeclaration#1: 35
          //DEBUG: s.ScopeClass#1: 36
          //21: e.Name#1
          //25: e.Items-B#1
          //27: e.Items-E#1
          //33: e.Name#1
          //35: s.EnumSwapDeclaration#1
          //36: s.ScopeClass#1
          //42: s.EnumSwapDeclaration#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[37]);
          refalrts::alloc_name(vm, context[39], functions[efunc_gen_Passm_AttachEntries_S2C1]);
          refalrts::alloc_open_call(vm, context[40]);
          refalrts::alloc_name(vm, context[41], functions[efunc_OneOf]);
          refalrts::copy_stvar(vm, context[42], context[35]);
          refalrts::alloc_ident(vm, context[43], identifiers[ident_Enum]);
          refalrts::alloc_ident(vm, context[44], identifiers[ident_Swap]);
          refalrts::alloc_ident(vm, context[45], identifiers[ident_Declaration]);
          refalrts::alloc_close_call(vm, context[46]);
          refalrts::alloc_close_call(vm, context[38]);
          refalrts::push_stack( vm, context[38] );
          refalrts::push_stack( vm, context[37] );
          res = refalrts::splice_elem( res, context[38] );
          refalrts::push_stack( vm, context[46] );
          refalrts::push_stack( vm, context[40] );
          res = refalrts::splice_elem( res, context[46] );
          res = refalrts::splice_elem( res, context[45] );
          res = refalrts::splice_elem( res, context[44] );
          res = refalrts::splice_elem( res, context[43] );
          res = refalrts::splice_stvar( res, context[42] );
          res = refalrts::splice_elem( res, context[41] );
          res = refalrts::splice_elem( res, context[40] );
          res = refalrts::splice_elem( res, context[39] );
          res = refalrts::splice_elem( res, context[37] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </37 & Pass-AttachEntries$2?1/41 # True/42 >/38
            context[39] = 0;
            context[40] = 0;
            context[41] = refalrts::call_left( context[39], context[40], context[37], context[38] );
            context[42] = refalrts::ident_left( identifiers[ident_True], context[39], context[40] );
            if( ! context[42] )
              continue;
            if( ! refalrts::empty_seq( context[39], context[40] ) )
              continue;
            //DEBUG: e.Name#1: 21
            //DEBUG: e.Items-B#1: 25
            //DEBUG: e.Items-E#1: 27
            //DEBUG: s.EnumSwapDeclaration#1: 35
            //DEBUG: s.ScopeClass#1: 36

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/31 s.EnumSwapDeclaration#1/35 s.ScopeClass#1/36 e.Name#1/33 )/32 {REMOVED TILE} </37 & Pass-AttachEntries$2?1/41 # True/42 >/38 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Pass-AttachEntries/4 } Tile{ AsIs: e.Items-B#1/25 } Tile{ AsIs: (/9 HalfReuse: s.EnumSwapDeclaration1 #35/11 AsIs: # GN-Entry/16 AsIs: e.Name#1/21 AsIs: )/10 } Tile{ AsIs: e.Items-E#1/27 } Tile{ AsIs: >/1 ]] }
            refalrts::reinit_svar( context[11], context[35] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[27], context[28] );
            res = refalrts::splice_evar( res, context[9], context[10] );
            res = refalrts::splice_evar( res, context[25], context[26] );
            refalrts::splice_to_freelist_open( vm, context[4], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[37], context[38]);
          continue;
        } while ( refalrts::open_evar_advance( context[25], context[26], context[23], context[24] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Pass-AttachEntries/4 (/9 # Function/11 s.new#9/16 (/23 e.new#10/21 )/24 e.new#11/17 )/10 e.new#8/19 >/1
        context[17] = context[12];
        context[18] = context[13];
        context[19] = context[14];
        context[20] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_Function], context[11] ) )
          continue;
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::brackets_left( context[21], context[22], context[17], context[18] );
        if( ! context[23] )
          continue;
        refalrts::bracket_pointers(context[23], context[24]);
        // closed e.new#10 as range 21
        // closed e.new#11 as range 17
        // closed e.new#8 as range 19
        do {
          // </0 & Pass-AttachEntries/4 (/9 # Function/11 s.ScopeClass#1/16 (/23 e.Name#1/25 )/24 e.Body#1/27 )/10 e.Items-B#1/31 (/37 # Entry/39 # GN-Entry/40 e.Name#1/41 )/38 e.Items-E#1/33 >/1
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[17];
          context[28] = context[18];
          context[29] = context[19];
          context[30] = context[20];
          // closed e.Name#1 as range 25
          // closed e.Body#1 as range 27
          context[31] = 0;
          context[32] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[33] = context[29];
            context[34] = context[30];
            context[35] = 0;
            context[36] = 0;
            context[37] = refalrts::brackets_left( context[35], context[36], context[33], context[34] );
            if( ! context[37] )
              continue;
            refalrts::bracket_pointers(context[37], context[38]);
            context[39] = refalrts::ident_left( identifiers[ident_Entry], context[35], context[36] );
            if( ! context[39] )
              continue;
            context[40] = refalrts::ident_left( identifiers[ident_GNm_Entry], context[35], context[36] );
            if( ! context[40] )
              continue;
            if( ! refalrts::repeated_evar_left( vm, context[41], context[42], context[25], context[26], context[35], context[36] ) )
              continue;
            if( ! refalrts::empty_seq( context[35], context[36] ) )
              continue;
            // closed e.Items-E#1 as range 33
            //DEBUG: s.ScopeClass#1: 16
            //DEBUG: e.Name#1: 25
            //DEBUG: e.Body#1: 27
            //DEBUG: e.Items-B#1: 31
            //DEBUG: e.Items-E#1: 33

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.ScopeClass#1/16 {REMOVED TILE} {REMOVED TILE} (/37 # Entry/39 {REMOVED TILE} e.Name#1/41 )/38 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Pass-AttachEntries/4 AsIs: (/9 AsIs: # Function/11 } Tile{ AsIs: # GN-Entry/40 } Tile{ AsIs: (/23 AsIs: e.Name#1/25 AsIs: )/24 AsIs: e.Body#1/27 AsIs: )/10 } Tile{ AsIs: e.Items-B#1/31 } Tile{ AsIs: e.Items-E#1/33 } Tile{ AsIs: >/1 ]] }
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::link_brackets( context[23], context[24] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[33], context[34] );
            res = refalrts::splice_evar( res, context[31], context[32] );
            res = refalrts::splice_evar( res, context[23], context[10] );
            res = refalrts::splice_evar( res, context[40], context[40] );
            refalrts::splice_to_freelist_open( vm, context[11], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[31], context[32], context[29], context[30] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Pass-AttachEntries/4 (/9 # Function/11 s.ScopeClass#1/16 (/23 e.Name#1/25 )/24 e.Body#1/27 )/10 e.Items#1/29 >/1
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[17];
        context[28] = context[18];
        context[29] = context[19];
        context[30] = context[20];
        // closed e.Name#1 as range 25
        // closed e.Body#1 as range 27
        // closed e.Items#1 as range 29
        //DEBUG: s.ScopeClass#1: 16
        //DEBUG: e.Name#1: 25
        //DEBUG: e.Body#1: 27
        //DEBUG: e.Items#1: 29

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # Function/11 AsIs: s.ScopeClass#1/16 AsIs: (/23 AsIs: e.Name#1/25 AsIs: )/24 AsIs: e.Body#1/27 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Pass-AttachEntries/4 } Tile{ AsIs: e.Items#1/29 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Pass-AttachEntries/4 (/9 s.EnumSwapDeclaration#1/11 s.ScopeClass#1/16 e.Name#1/17 )/10 e.Items-B#1/21 (/27 # Entry/29 # GN-Entry/30 e.Name#1/31 )/28 e.Items-E#1/23 >/1
        context[17] = context[12];
        context[18] = context[13];
        context[19] = context[14];
        context[20] = context[15];
        // closed e.Name#1 as range 17
        context[21] = 0;
        context[22] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[23] = context[19];
          context[24] = context[20];
          context[25] = 0;
          context[26] = 0;
          context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
          if( ! context[27] )
            continue;
          refalrts::bracket_pointers(context[27], context[28]);
          context[29] = refalrts::ident_left( identifiers[ident_Entry], context[25], context[26] );
          if( ! context[29] )
            continue;
          context[30] = refalrts::ident_left( identifiers[ident_GNm_Entry], context[25], context[26] );
          if( ! context[30] )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[31], context[32], context[17], context[18], context[25], context[26] ) )
            continue;
          if( ! refalrts::empty_seq( context[25], context[26] ) )
            continue;
          // closed e.Items-E#1 as range 23
          //DEBUG: s.EnumSwapDeclaration#1: 11
          //DEBUG: s.ScopeClass#1: 16
          //DEBUG: e.Name#1: 17
          //DEBUG: e.Items-B#1: 21
          //DEBUG: e.Items-E#1: 23
          //11: s.EnumSwapDeclaration#1
          //16: s.ScopeClass#1
          //17: e.Name#1
          //21: e.Items-B#1
          //23: e.Items-E#1
          //31: e.Name#1
          //38: s.EnumSwapDeclaration#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[33]);
          refalrts::alloc_name(vm, context[35], functions[efunc_gen_Passm_AttachEntries_S5C1]);
          refalrts::alloc_open_call(vm, context[36]);
          refalrts::alloc_name(vm, context[37], functions[efunc_OneOf]);
          refalrts::copy_stvar(vm, context[38], context[11]);
          refalrts::alloc_ident(vm, context[39], identifiers[ident_Enum]);
          refalrts::alloc_ident(vm, context[40], identifiers[ident_Swap]);
          refalrts::alloc_ident(vm, context[41], identifiers[ident_Declaration]);
          refalrts::alloc_close_call(vm, context[42]);
          refalrts::alloc_close_call(vm, context[34]);
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[33] );
          res = refalrts::splice_elem( res, context[34] );
          refalrts::push_stack( vm, context[42] );
          refalrts::push_stack( vm, context[36] );
          res = refalrts::splice_elem( res, context[42] );
          res = refalrts::splice_elem( res, context[41] );
          res = refalrts::splice_elem( res, context[40] );
          res = refalrts::splice_elem( res, context[39] );
          res = refalrts::splice_stvar( res, context[38] );
          res = refalrts::splice_elem( res, context[37] );
          res = refalrts::splice_elem( res, context[36] );
          res = refalrts::splice_elem( res, context[35] );
          res = refalrts::splice_elem( res, context[33] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </33 & Pass-AttachEntries$5?1/37 # True/38 >/34
            context[35] = 0;
            context[36] = 0;
            context[37] = refalrts::call_left( context[35], context[36], context[33], context[34] );
            context[38] = refalrts::ident_left( identifiers[ident_True], context[35], context[36] );
            if( ! context[38] )
              continue;
            if( ! refalrts::empty_seq( context[35], context[36] ) )
              continue;
            //DEBUG: s.EnumSwapDeclaration#1: 11
            //DEBUG: s.ScopeClass#1: 16
            //DEBUG: e.Name#1: 17
            //DEBUG: e.Items-B#1: 21
            //DEBUG: e.Items-E#1: 23

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} e.Items-B#1/21 (/27 # Entry/29 # GN-Entry/30 e.Name#1/31 )/28 e.Items-E#1/23 </33 & Pass-AttachEntries$5?1/37 # True/38 >/34 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Pass-AttachEntries/4 AsIs: (/9 AsIs: s.EnumSwapDeclaration#1/11 AsIs: s.ScopeClass#1/16 AsIs: e.Name#1/17 AsIs: )/10 } Tile{ AsIs: >/1 ]] }
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            refalrts::splice_to_freelist_open( vm, context[10], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[33], context[34]);
          continue;
        } while ( refalrts::open_evar_advance( context[21], context[22], context[19], context[20] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Pass-AttachEntries/4 (/9 s.EnumSwapDeclaration#1/11 s.ScopeClass#1/16 e.Name#1/17 )/10 e.Items#1/19 >/1
        context[17] = context[12];
        context[18] = context[13];
        context[19] = context[14];
        context[20] = context[15];
        // closed e.Name#1 as range 17
        // closed e.Items#1 as range 19
        //DEBUG: s.EnumSwapDeclaration#1: 11
        //DEBUG: s.ScopeClass#1: 16
        //DEBUG: e.Name#1: 17
        //DEBUG: e.Items#1: 19
        //11: s.EnumSwapDeclaration#1
        //16: s.ScopeClass#1
        //17: e.Name#1
        //19: e.Items#1
        //26: s.EnumSwapDeclaration#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_name(vm, context[23], functions[efunc_gen_Passm_AttachEntries_S6C1]);
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_OneOf]);
        refalrts::copy_stvar(vm, context[26], context[11]);
        refalrts::alloc_ident(vm, context[27], identifiers[ident_Enum]);
        refalrts::alloc_ident(vm, context[28], identifiers[ident_Swap]);
        refalrts::alloc_ident(vm, context[29], identifiers[ident_Declaration]);
        refalrts::alloc_close_call(vm, context[30]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[21] );
        res = refalrts::splice_elem( res, context[22] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[24] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_stvar( res, context[26] );
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
          // </21 & Pass-AttachEntries$6?1/25 # True/26 >/22
          context[23] = 0;
          context[24] = 0;
          context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
          context[26] = refalrts::ident_left( identifiers[ident_True], context[23], context[24] );
          if( ! context[26] )
            continue;
          if( ! refalrts::empty_seq( context[23], context[24] ) )
            continue;
          //DEBUG: s.EnumSwapDeclaration#1: 11
          //DEBUG: s.ScopeClass#1: 16
          //DEBUG: e.Name#1: 17
          //DEBUG: e.Items#1: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </21 & Pass-AttachEntries$6?1/25 # True/26 >/22 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: s.EnumSwapDeclaration#1/11 AsIs: s.ScopeClass#1/16 AsIs: e.Name#1/17 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Pass-AttachEntries/4 } Tile{ AsIs: e.Items#1/19 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[9], context[10] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[21], context[22]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Pass-AttachEntries/4 (/9 s.DriveInline#1/11 s.ScopeClass#1/16 e.Name#1/17 )/10 e.Items#1/19 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[15];
      // closed e.Name#1 as range 17
      // closed e.Items#1 as range 19
      //DEBUG: s.DriveInline#1: 11
      //DEBUG: s.ScopeClass#1: 16
      //DEBUG: e.Name#1: 17
      //DEBUG: e.Items#1: 19
      //11: s.DriveInline#1
      //16: s.ScopeClass#1
      //17: e.Name#1
      //19: e.Items#1
      //26: s.DriveInline#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[23], functions[efunc_gen_Passm_AttachEntries_S7C1]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_OneOf]);
      refalrts::copy_stvar(vm, context[26], context[11]);
      refalrts::alloc_ident(vm, context[27], identifiers[ident_Inline]);
      refalrts::alloc_ident(vm, context[28], identifiers[ident_Drive]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[21] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[24] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_stvar( res, context[26] );
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
        // </21 & Pass-AttachEntries$7?1/25 # True/26 >/22
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
        context[26] = refalrts::ident_left( identifiers[ident_True], context[23], context[24] );
        if( ! context[26] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: s.DriveInline#1: 11
        //DEBUG: s.ScopeClass#1: 16
        //DEBUG: e.Name#1: 17
        //DEBUG: e.Items#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ScopeClass#1/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </21 & Pass-AttachEntries$7?1/25 # True/26 >/22 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: s.DriveInline#1/11 } Tile{ AsIs: e.Name#1/17 } Tile{ AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Pass-AttachEntries/4 } Tile{ AsIs: e.Items#1/19 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[10], context[10] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[9], context[11] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[21], context[22]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Pass-AttachEntries/4 (/9 # Ident/11 e.Name#1/12 )/10 e.Items#1/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_Ident], context[11] ) )
        continue;
      // closed e.Name#1 as range 12
      // closed e.Items#1 as range 14
      //DEBUG: e.Name#1: 12
      //DEBUG: e.Items#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # Ident/11 AsIs: e.Name#1/12 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Pass-AttachEntries/4 } Tile{ AsIs: e.Items#1/14 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Pass-AttachEntries/4 (/9 s.new#5/11 t.new#6/16 e.new#7/12 )/10 e.new#4/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[5];
    context[15] = context[6];
    // closed e.new#4 as range 14
    context[17] = refalrts::tvar_left( context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & Pass-AttachEntries/4 (/9 # NativeBlock/11 t.SrcPos#1/16 e.Code#1/18 )/10 e.Items#1/20 >/1
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[11] ) )
        continue;
      // closed e.Code#1 as range 18
      // closed e.Items#1 as range 20
      //DEBUG: t.SrcPos#1: 16
      //DEBUG: e.Code#1: 18
      //DEBUG: e.Items#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # NativeBlock/11 AsIs: t.SrcPos#1/16 AsIs: e.Code#1/18 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Pass-AttachEntries/4 } Tile{ AsIs: e.Items#1/20 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Pass-AttachEntries/4 (/9 # Spec/11 (/16 e.Name#1/22 )/17 e.Pattern#1/18 )/10 e.Items#1/20 >/1
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[15];
    context[22] = 0;
    context[23] = 0;
    if( ! refalrts::brackets_term( context[22], context[23], context[16] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Spec], context[11] ) )
      continue;
    // closed e.Name#1 as range 22
    // closed e.Pattern#1 as range 18
    // closed e.Items#1 as range 20
    //DEBUG: e.Name#1: 22
    //DEBUG: e.Pattern#1: 18
    //DEBUG: e.Items#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # Spec/11 AsIs: (/16 AsIs: e.Name#1/22 AsIs: )/17 AsIs: e.Pattern#1/18 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Pass-AttachEntries/4 } Tile{ AsIs: e.Items#1/20 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-AttachEntries/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-AttachEntries/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_AttachEntries("Pass-AttachEntries", COOKIE1_, COOKIE2_, func_Passm_AttachEntries);


static refalrts::FnResult func_Passm_RemoveRedundantDriveInline(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & Pass-RemoveRedundantDriveInline/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Pass-RemoveRedundantDriveInline/4 e.B#1/7 (/13 s.Label#1/15 e.FuncName#1/11 )/14 e.M#1/16 (/22 s.Label#1/24 e.FuncName#1/25 )/23 e.E#1/18 >/1
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
      if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
        continue;
      // closed e.FuncName#1 as range 11
      context[16] = 0;
      context[17] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[18] = context[9];
        context[19] = context[10];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        if( ! refalrts::repeated_stvar_left( vm, context[24], context[15], context[20], context[21] ) )
          continue;
        if( ! refalrts::repeated_evar_left( vm, context[25], context[26], context[11], context[12], context[20], context[21] ) )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;
        // closed e.E#1 as range 18
        //DEBUG: e.B#1: 7
        //DEBUG: s.Label#1: 15
        //DEBUG: e.FuncName#1: 11
        //DEBUG: e.M#1: 16
        //DEBUG: e.E#1: 18
        //7: e.B#1
        //11: e.FuncName#1
        //15: s.Label#1
        //16: e.M#1
        //18: e.E#1
        //24: s.Label#1
        //25: e.FuncName#1
        //32: s.Label#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::alloc_name(vm, context[29], functions[efunc_gen_Passm_RemoveRedundantDriveInline_S1C1]);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_OneOf]);
        refalrts::copy_stvar(vm, context[32], context[24]);
        refalrts::alloc_ident(vm, context[33], identifiers[ident_Drive]);
        refalrts::alloc_ident(vm, context[34], identifiers[ident_Inline]);
        refalrts::alloc_close_call(vm, context[35]);
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[27] );
        res = refalrts::splice_elem( res, context[28] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[30] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_stvar( res, context[32] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_elem( res, context[27] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </27 & Pass-RemoveRedundantDriveInline$1?1/31 # True/32 >/28
          context[29] = 0;
          context[30] = 0;
          context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
          context[32] = refalrts::ident_left( identifiers[ident_True], context[29], context[30] );
          if( ! context[32] )
            continue;
          if( ! refalrts::empty_seq( context[29], context[30] ) )
            continue;
          //DEBUG: e.B#1: 7
          //DEBUG: s.Label#1: 15
          //DEBUG: e.FuncName#1: 11
          //DEBUG: e.M#1: 16
          //DEBUG: e.E#1: 18

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} (/22 s.Label#1/24 e.FuncName#1/25 )/23 {REMOVED TILE} </27 & Pass-RemoveRedundantDriveInline$1?1/31 # True/32 >/28 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Pass-RemoveRedundantDriveInline/4 AsIs: e.B#1/7 AsIs: (/13 AsIs: s.Label#1/15 AsIs: e.FuncName#1/11 AsIs: )/14 } Tile{ AsIs: e.M#1/16 } Tile{ AsIs: e.E#1/18 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[18], context[19] );
          res = refalrts::splice_evar( res, context[16], context[17] );
          refalrts::splice_to_freelist_open( vm, context[14], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[27], context[28]);
        continue;
      } while ( refalrts::open_evar_advance( context[16], context[17], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Pass-RemoveRedundantDriveInline/4 e.B#1/7 (/13 # Drive/15 e.FuncName#1/11 )/14 e.M#1/16 (/22 # Inline/24 e.FuncName#1/25 )/23 e.E#1/18 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Drive], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.FuncName#1 as range 11
      context[16] = 0;
      context[17] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[18] = context[9];
        context[19] = context[10];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        context[24] = refalrts::ident_left( identifiers[ident_Inline], context[20], context[21] );
        if( ! context[24] )
          continue;
        if( ! refalrts::repeated_evar_left( vm, context[25], context[26], context[11], context[12], context[20], context[21] ) )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;
        // closed e.E#1 as range 18
        //DEBUG: e.B#1: 7
        //DEBUG: e.FuncName#1: 11
        //DEBUG: e.M#1: 16
        //DEBUG: e.E#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/22 # Inline/24 e.FuncName#1/25 )/23 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Pass-RemoveRedundantDriveInline/4 AsIs: e.B#1/7 AsIs: (/13 AsIs: # Drive/15 AsIs: e.FuncName#1/11 AsIs: )/14 } Tile{ AsIs: e.M#1/16 } Tile{ AsIs: e.E#1/18 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        refalrts::splice_to_freelist_open( vm, context[14], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[16], context[17], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Pass-RemoveRedundantDriveInline/4 e.B#1/7 (/13 # Inline/15 e.FuncName#1/11 )/14 e.M#1/16 (/22 # Drive/24 e.FuncName#1/25 )/23 e.E#1/18 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Inline], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.FuncName#1 as range 11
      context[16] = 0;
      context[17] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[18] = context[9];
        context[19] = context[10];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        context[24] = refalrts::ident_left( identifiers[ident_Drive], context[20], context[21] );
        if( ! context[24] )
          continue;
        if( ! refalrts::repeated_evar_left( vm, context[25], context[26], context[11], context[12], context[20], context[21] ) )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;
        // closed e.E#1 as range 18
        //DEBUG: e.B#1: 7
        //DEBUG: e.FuncName#1: 11
        //DEBUG: e.M#1: 16
        //DEBUG: e.E#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 # Inline/15 e.FuncName#1/11 )/14 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Pass-RemoveRedundantDriveInline/4 } Tile{ AsIs: e.B#1/7 } Tile{ AsIs: e.M#1/16 } Tile{ AsIs: (/22 AsIs: # Drive/24 AsIs: e.FuncName#1/25 AsIs: )/23 AsIs: e.E#1/18 AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[22];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[16], context[17], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-RemoveRedundantDriveInline/4 e.AST#1/2 >/1
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-RemoveRedundantDriveInline/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_RemoveRedundantDriveInline("Pass-RemoveRedundantDriveInline", COOKIE1_, COOKIE2_, func_Passm_RemoveRedundantDriveInline);


static refalrts::FnResult func_gen_Passm_EnumerateVariables_L1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Pass-EnumerateVariables\1$1=1/4 t.Name#2/5 t.ScopeVars#3/7 e.EnumeratedPattern#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.EnumeratedPattern#3 as range 2
  //DEBUG: t.Name#2: 5
  //DEBUG: t.ScopeVars#3: 7
  //DEBUG: e.EnumeratedPattern#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.ScopeVars#3/7 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Spec/4 AsIs: t.Name#2/5 } Tile{ AsIs: e.EnumeratedPattern#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Spec]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_EnumerateVariables_L1S1A1("Pass-EnumerateVariables\\1$1=1", COOKIE1_, COOKIE2_, func_gen_Passm_EnumerateVariables_L1S1A1);


static refalrts::FnResult func_gen_Passm_EnumerateVariables_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Pass-EnumerateVariables\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pass-EnumerateVariables\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Pass-EnumerateVariables\1/4 (/5 s.new#2/9 t.new#3/10 e.new#4/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.new#4 as range 7
    do {
      // </0 & Pass-EnumerateVariables\1/4 (/5 # Spec/9 t.Name#2/10 e.Pattern#2/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Spec], context[9] ) )
        continue;
      // closed e.Pattern#2 as range 12
      //DEBUG: t.Name#2: 10
      //DEBUG: e.Pattern#2: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Pass-EnumerateVariables\1$1=1/4 } Tile{ AsIs: t.Name#2/10 } </14 & EnumerateVars-Expr/15 0/16 Tile{ AsIs: (/5 HalfReuse: )/9 } Tile{ AsIs: e.Pattern#2/12 } Tile{ HalfReuse: >/6 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[15], functions[efunc_EnumerateVarsm_Expr]);
      refalrts::alloc_number(vm, context[16], 0UL);
      refalrts::update_name(context[4], functions[efunc_gen_Passm_EnumerateVariables_L1S1A1]);
      refalrts::reinit_close_bracket(context[9]);
      refalrts::reinit_close_call(context[6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[14] );
      refalrts::link_brackets( context[5], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      res = refalrts::splice_evar( res, context[14], context[16] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Pass-EnumerateVariables\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/16 e.Name#2/14 )/17 e.Body#2/12 )/6 >/1
    context[12] = context[7];
    context[13] = context[8];
    if( ! refalrts::svar_term( context[10], context[10] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Function], context[9] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Name#2 as range 14
    // closed e.Body#2 as range 12
    //DEBUG: s.ScopeClass#2: 10
    //DEBUG: e.Name#2: 14
    //DEBUG: e.Body#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/16 AsIs: e.Name#2/14 AsIs: )/17 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Body/4 } 1/18 (/19 )/20 Tile{ AsIs: e.Body#2/12 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::alloc_number(vm, context[18], 1UL);
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Body]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-EnumerateVariables\1/4 t.OtherProgramElement#2/5 >/1
  //DEBUG: t.OtherProgramElement#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-EnumerateVariables\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_EnumerateVariables_L1("Pass-EnumerateVariables\\1", COOKIE1_, COOKIE2_, func_gen_Passm_EnumerateVariables_L1);


static refalrts::FnResult func_Passm_EnumerateVariables(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pass-EnumerateVariables/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@6/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z6]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_EnumerateVariables("Pass-EnumerateVariables", COOKIE1_, COOKIE2_, func_Passm_EnumerateVariables);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & EnumerateVars-Body$1\1=4/4 (/7 e.Pattern#3/5 )/8 (/11 e.Assigns#4/9 )/12 (/15 e.Result#5/13 )/16 e.Blocks#6/2 >/1
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
  // closed e.Pattern#3 as range 5
  // closed e.Assigns#4 as range 9
  // closed e.Result#5 as range 13
  // closed e.Blocks#6 as range 2
  //DEBUG: e.Pattern#3: 5
  //DEBUG: e.Assigns#4: 9
  //DEBUG: e.Result#5: 13
  //DEBUG: e.Blocks#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern#3/5 AsIs: )/8 } Tile{ AsIs: e.Assigns#4/9 } Tile{ AsIs: (/15 AsIs: e.Result#5/13 AsIs: )/16 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Blocks#6/2 } Tile{ AsIs: )/12 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1A4("EnumerateVars-Body$1\\1=4", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Body_S1L1A4);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & EnumerateVars-Body$1\1=3/4 (/7 e.Pattern#3/5 )/8 (/11 e.Assigns#4/9 )/12 s.Depth#4/13 (/16 e.Blocks#2/14 )/17 (/20 e.ScopeVars#5/18 )/21 e.Result#5/2 >/1
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
  // closed e.Pattern#3 as range 5
  // closed e.Assigns#4 as range 9
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
  // closed e.Blocks#2 as range 14
  // closed e.ScopeVars#5 as range 18
  // closed e.Result#5 as range 2
  //DEBUG: e.Pattern#3: 5
  //DEBUG: e.Assigns#4: 9
  //DEBUG: s.Depth#4: 13
  //DEBUG: e.Blocks#2: 14
  //DEBUG: e.ScopeVars#5: 18
  //DEBUG: e.Result#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EnumerateVars-Body$1\1=4/4 AsIs: (/7 AsIs: e.Pattern#3/5 AsIs: )/8 AsIs: (/11 AsIs: e.Assigns#4/9 AsIs: )/12 } Tile{ AsIs: (/16 } Tile{ AsIs: e.Result#5/2 } )/22 </23 & EnumerateVars-Blocks/24 </25 & Add/26 1/27 Tile{ AsIs: s.Depth#4/13 } Tile{ HalfReuse: >/17 AsIs: (/20 AsIs: e.ScopeVars#5/18 AsIs: )/21 } Tile{ AsIs: e.Blocks#2/14 } >/28 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_EnumerateVarsm_Blocks]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[27], 1UL);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Body_S1L1A4]);
  refalrts::reinit_close_call(context[17]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[16], context[22] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[22], context[27] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1A3("EnumerateVars-Body$1\\1=3", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Body_S1L1A3);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & EnumerateVars-Body$1\1=2/4 (/7 e.Pattern#3/5 )/8 (/11 e.Blocks#2/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.ScopeVars#4/17 )/20 s.Depth#4/21 e.Assigns#4/2 >/1
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
  // closed e.Pattern#3 as range 5
  // closed e.Blocks#2 as range 9
  // closed e.Result#2 as range 13
  // closed e.ScopeVars#4 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Assigns#4 as range 2
  //DEBUG: e.Pattern#3: 5
  //DEBUG: e.Blocks#2: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: e.ScopeVars#4: 17
  //DEBUG: s.Depth#4: 21
  //DEBUG: e.Assigns#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Depth#4/21 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EnumerateVars-Body$1\1=3/4 AsIs: (/7 AsIs: e.Pattern#3/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Assigns#4/2 } )/22 Tile{ HalfReuse: s.Depth4 #21/12 AsIs: (/15 } Tile{ AsIs: e.Blocks#2/9 } )/23 </24 & EnumerateVars-Expr/25 Tile{ HalfReuse: s.Depth4 #21/16 AsIs: (/19 AsIs: e.ScopeVars#4/17 AsIs: )/20 } Tile{ AsIs: e.Result#2/13 } >/26 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_EnumerateVarsm_Expr]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Body_S1L1A3]);
  refalrts::reinit_svar( context[12], context[21] );
  refalrts::reinit_svar( context[16], context[21] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[23] );
  refalrts::link_brackets( context[11], context[22] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1A2("EnumerateVars-Body$1\\1=2", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Body_S1L1A2);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & EnumerateVars-Body$1\1=1/4 (/7 e.Blocks#2/5 )/8 (/11 e.Result#2/9 )/12 s.Depth#1/13 (/16 e.Assigns#2/14 )/17 (/20 e.ScopeVars#3/18 )/21 e.Pattern#3/2 >/1
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
  // closed e.Blocks#2 as range 5
  // closed e.Result#2 as range 9
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
  // closed e.Assigns#2 as range 14
  // closed e.ScopeVars#3 as range 18
  // closed e.Pattern#3 as range 2
  //DEBUG: e.Blocks#2: 5
  //DEBUG: e.Result#2: 9
  //DEBUG: s.Depth#1: 13
  //DEBUG: e.Assigns#2: 14
  //DEBUG: e.ScopeVars#3: 18
  //DEBUG: e.Pattern#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Depth#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & EnumerateVars-Body$1\1=2/22 (/23 Tile{ AsIs: e.Pattern#3/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Blocks#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/9 AsIs: )/12 } </24 & EnumerateVars-Assignments/25 Tile{ AsIs: (/16 } )/26 Tile{ HalfReuse: s.Depth1 #13/17 AsIs: (/20 AsIs: e.ScopeVars#3/18 AsIs: )/21 } Tile{ AsIs: e.Assigns#2/14 } >/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[22], functions[efunc_gen_EnumerateVarsm_Body_S1L1A2]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_EnumerateVarsm_Assignments]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_svar( context[17], context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[26] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[23], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1A1("EnumerateVars-Body$1\\1=1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Body_S1L1A1);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & EnumerateVars-Body$1\1/4 s.Depth#1/25 (/15 e.ScopeVars#1/13 )/16 (/7 (/11 e.Pattern#2/9 )/12 e.Assigns#2/5 (/23 e.Result#2/21 )/24 (/19 e.Blocks#2/17 )/20 )/8 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[5], context[6] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.ScopeVars#1 as range 13
  // closed e.Pattern#2 as range 9
  // closed e.Assigns#2 as range 5
  // closed e.Result#2 as range 21
  // closed e.Blocks#2 as range 17
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.ScopeVars#1: 13
  //DEBUG: e.Pattern#2: 9
  //DEBUG: e.Assigns#2: 5
  //DEBUG: e.Result#2: 21
  //DEBUG: e.Blocks#2: 17
  //DEBUG: s.Depth#1: 25

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </26 Tile{ HalfReuse: & EnumerateVars-Body$1\1=1/24 AsIs: (/19 AsIs: e.Blocks#2/17 AsIs: )/20 HalfReuse: (/8 } Tile{ AsIs: e.Result#2/21 } Tile{ HalfReuse: )/7 HalfReuse: s.Depth1 #25/11 } Tile{ HalfReuse: (/12 AsIs: e.Assigns#2/5 HalfReuse: )/23 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/25 AsIs: (/15 AsIs: e.ScopeVars#1/13 AsIs: )/16 } Tile{ AsIs: e.Pattern#2/9 } >/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::reinit_name(context[24], functions[efunc_gen_EnumerateVarsm_Body_S1L1A1]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_svar( context[11], context[25] );
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_close_bracket(context[23]);
  refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Expr]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[12], context[23] );
  refalrts::link_brackets( context[8], context[7] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[12], context[23] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[24], context[8] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1("EnumerateVars-Body$1\\1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Body_S1L1);


static refalrts::FnResult func_EnumerateVarsm_Body(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & EnumerateVars-Body/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EnumerateVars-Body/4 s.new#1/5 (/8 e.new#2/6 )/9 s.new#3/10 e.new#4/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & EnumerateVars-Body/4 s.Depth#1/5 (/8 e.ScopeVars#1/11 )/9 # Sentences/10 e.Sentences#1/13 >/1
    context[11] = context[6];
    context[12] = context[7];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[10] ) )
      continue;
    // closed e.ScopeVars#1 as range 11
    // closed e.Sentences#1 as range 13
    //DEBUG: s.Depth#1: 5
    //DEBUG: e.ScopeVars#1: 11
    //DEBUG: e.Sentences#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: # Sentences/10 } Tile{ AsIs: </0 Reuse: & Map@7/4 AsIs: s.Depth#1/5 } Tile{ AsIs: e.ScopeVars#1/11 } Tile{ AsIs: (/8 } Tile{ AsIs: e.Sentences#1/13 } Tile{ AsIs: )/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EnumerateVars-Body/4 s.Depth#1/5 (/8 e.ScopeVars#1/6 )/9 # NativeBody/10 t.SrcPos#1/11 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 6
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2
  //DEBUG: s.Depth#1: 5
  //DEBUG: e.ScopeVars#1: 6
  //DEBUG: t.SrcPos#1: 11
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & EnumerateVars-Body/4 s.Depth#1/5 (/8 e.ScopeVars#1/6 )/9 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/10 AsIs: t.SrcPos#1/11 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsm_Body("EnumerateVars-Body", COOKIE1_, COOKIE2_, func_EnumerateVarsm_Body);


static refalrts::FnResult func_gen_EnumerateVarsm_Blocks_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & EnumerateVars-Blocks\1/4 s.Depth#1/13 (/11 e.ScopeVars#1/9 )/12 (/7 e.Body#2/5 )/8 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.ScopeVars#1 as range 9
  // closed e.Body#2 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.ScopeVars#1: 9
  //DEBUG: e.Body#2: 5
  //DEBUG: s.Depth#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Body/4 AsIs: s.Depth#1/13 AsIs: (/11 AsIs: e.ScopeVars#1/9 AsIs: )/12 } Tile{ AsIs: e.Body#2/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Body]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Blocks_L1("EnumerateVars-Blocks\\1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Blocks_L1);


static refalrts::FnResult func_EnumerateVarsm_Blocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & EnumerateVars-Blocks/4 s.Depth#1/5 (/8 e.ScopeVars#1/6 )/9 e.Blocks#1/2 >/1
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
  // closed e.ScopeVars#1 as range 6
  // closed e.Blocks#1 as range 2
  //DEBUG: s.Depth#1: 5
  //DEBUG: e.ScopeVars#1: 6
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@8/4 AsIs: s.Depth#1/5 } Tile{ AsIs: e.ScopeVars#1/6 } Tile{ AsIs: (/8 } Tile{ AsIs: e.Blocks#1/2 } Tile{ AsIs: )/9 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsm_Blocks("EnumerateVars-Blocks", COOKIE1_, COOKIE2_, func_EnumerateVarsm_Blocks);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & EnumerateVars-Assignments$2=5/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/9 (/12 e.Result#3/10 )/13 (/16 e.Blocks#5/14 )/17 s.Depth#4/18 (/21 e.Assignments#1/19 )/22 (/25 e.ScopeVars#6/23 )/26 e.Pattern#6/2 >/1
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
  // closed e.RAssignments#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Result#3 as range 10
  // closed e.Blocks#5 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Assignments#1 as range 19
  // closed e.ScopeVars#6 as range 23
  // closed e.Pattern#6 as range 2
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: s.ChainType#1: 9
  //DEBUG: e.Result#3: 10
  //DEBUG: e.Blocks#5: 14
  //DEBUG: s.Depth#4: 18
  //DEBUG: e.Assignments#1: 19
  //DEBUG: e.ScopeVars#6: 23
  //DEBUG: e.Pattern#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Depth#4/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EnumerateVars-Assignments/4 AsIs: (/7 AsIs: e.RAssignments#1/5 HalfReuse: (/8 AsIs: s.ChainType#1/9 AsIs: (/12 AsIs: e.Result#3/10 AsIs: )/13 AsIs: (/16 AsIs: e.Blocks#5/14 AsIs: )/17 } Tile{ AsIs: (/21 } Tile{ AsIs: e.Pattern#6/2 } )/27 )/28 )/29 Tile{ HalfReuse: s.Depth4 #18/22 AsIs: (/25 AsIs: e.ScopeVars#6/23 AsIs: )/26 } Tile{ AsIs: e.Assignments#1/19 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Assignments]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_svar( context[22], context[18] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[7], context[29] );
  refalrts::link_brackets( context[8], context[28] );
  refalrts::link_brackets( context[21], context[27] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[27], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::splice_to_freelist_open( vm, context[17], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A5("EnumerateVars-Assignments$2=5", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Assignments_S2A5);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & EnumerateVars-Assignments$2=4/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/9 (/12 e.Result#3/10 )/13 s.Depth#4/14 (/17 e.Assignments#1/15 )/18 (/21 e.ScopeVars#3/19 )/22 (/25 e.Pattern#1/23 )/26 e.Blocks#5/2 >/1
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
  // closed e.RAssignments#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Result#3 as range 10
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
  // closed e.Assignments#1 as range 15
  // closed e.ScopeVars#3 as range 19
  // closed e.Pattern#1 as range 23
  // closed e.Blocks#5 as range 2
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: s.ChainType#1: 9
  //DEBUG: e.Result#3: 10
  //DEBUG: s.Depth#4: 14
  //DEBUG: e.Assignments#1: 15
  //DEBUG: e.ScopeVars#3: 19
  //DEBUG: e.Pattern#1: 23
  //DEBUG: e.Blocks#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EnumerateVars-Assignments$2=5/4 AsIs: (/7 AsIs: e.RAssignments#1/5 AsIs: )/8 AsIs: s.ChainType#1/9 AsIs: (/12 AsIs: e.Result#3/10 AsIs: )/13 } (/27 Tile{ AsIs: e.Blocks#5/2 } Tile{ AsIs: )/22 } Tile{ AsIs: s.Depth#4/14 AsIs: (/17 AsIs: e.Assignments#1/15 AsIs: )/18 HalfReuse: </21 } & EnumerateVars-Expr/28 s.Depth#4/14/29 (/30 Tile{ AsIs: e.ScopeVars#3/19 } Tile{ HalfReuse: )/25 AsIs: e.Pattern#1/23 HalfReuse: >/26 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_EnumerateVarsm_Expr]);
  refalrts::copy_stvar(vm, context[29], context[14]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Assignments_S2A5]);
  refalrts::reinit_open_call(context[21]);
  refalrts::reinit_close_bracket(context[25]);
  refalrts::reinit_close_call(context[26]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[30], context[25] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[27], context[22] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[28], context[30] );
  res = refalrts::splice_evar( res, context[14], context[21] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A4("EnumerateVars-Assignments$2=4", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Assignments_S2A4);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & EnumerateVars-Assignments$2=3/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/9 (/12 e.Result#3/10 )/13 (/16 e.Assignments#1/14 )/17 (/20 e.ScopeVars#3/18 )/21 (/24 e.Pattern#1/22 )/25 (/28 e.Blocks#1/26 )/29 s.Depth#4/30 >/1
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
  // closed e.RAssignments#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.Result#3 as range 10
  // closed e.Assignments#1 as range 14
  // closed e.ScopeVars#3 as range 18
  // closed e.Pattern#1 as range 22
  // closed e.Blocks#1 as range 26
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: s.ChainType#1: 9
  //DEBUG: e.Result#3: 10
  //DEBUG: e.Assignments#1: 14
  //DEBUG: e.ScopeVars#3: 18
  //DEBUG: e.Pattern#1: 22
  //DEBUG: e.Blocks#1: 26
  //DEBUG: s.Depth#4: 30

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EnumerateVars-Assignments$2=4/4 AsIs: (/7 AsIs: e.RAssignments#1/5 AsIs: )/8 AsIs: s.ChainType#1/9 AsIs: (/12 AsIs: e.Result#3/10 AsIs: )/13 HalfReuse: s.Depth4 #30/16 } (/31 Tile{ AsIs: e.Assignments#1/14 } Tile{ AsIs: )/17 AsIs: (/20 AsIs: e.ScopeVars#3/18 AsIs: )/21 AsIs: (/24 AsIs: e.Pattern#1/22 AsIs: )/25 HalfReuse: </28 } Tile{ HalfReuse: & EnumerateVars-Blocks/29 AsIs: s.Depth#4/30 } (/32 e.ScopeVars#3/18/33 )/35 Tile{ AsIs: e.Blocks#1/26 } >/36 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::copy_evar(vm, context[33], context[34], context[18], context[19]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Assignments_S2A4]);
  refalrts::reinit_svar( context[16], context[30] );
  refalrts::reinit_open_call(context[28]);
  refalrts::reinit_name(context[29], functions[efunc_EnumerateVarsm_Blocks]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[32], context[35] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[31], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[32], context[35] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[17], context[28] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A3("EnumerateVars-Assignments$2=3", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Assignments_S2A3);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & EnumerateVars-Assignments$2=2/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/9 (/12 e.Assignments#1/10 )/13 (/16 e.Pattern#1/14 )/17 (/20 e.Blocks#1/18 )/21 s.Depth#1/22 (/25 e.ScopeVars#3/23 )/26 e.Result#3/2 >/1
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
  // closed e.RAssignments#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Assignments#1 as range 10
  // closed e.Pattern#1 as range 14
  // closed e.Blocks#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.ScopeVars#3 as range 23
  // closed e.Result#3 as range 2
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: s.ChainType#1: 9
  //DEBUG: e.Assignments#1: 10
  //DEBUG: e.Pattern#1: 14
  //DEBUG: e.Blocks#1: 18
  //DEBUG: s.Depth#1: 22
  //DEBUG: e.ScopeVars#3: 23
  //DEBUG: e.Result#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EnumerateVars-Assignments$2=3/4 AsIs: (/7 AsIs: e.RAssignments#1/5 AsIs: )/8 AsIs: s.ChainType#1/9 AsIs: (/12 } Tile{ AsIs: e.Result#3/2 } Tile{ AsIs: )/26 } (/27 Tile{ AsIs: e.Assignments#1/10 } )/28 (/29 Tile{ AsIs: e.ScopeVars#3/23 } Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Pattern#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Blocks#1/18 AsIs: )/21 } </30 & Add/31 1/32 Tile{ AsIs: s.Depth#1/22 HalfReuse: >/25 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_open_call(vm, context[30]);
  refalrts::alloc_name(vm, context[31], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[32], 1UL);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Assignments_S2A3]);
  refalrts::reinit_close_call(context[25]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[30] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[29], context[13] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[12], context[26] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[30], context[32] );
  res = refalrts::splice_evar( res, context[13], context[21] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A2("EnumerateVars-Assignments$2=2", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Assignments_S2A2);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & EnumerateVars-Assignments$2=1/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/17 (/20 e.Assignments#1/18 )/21 (/24 e.Pattern#1/22 )/25 (/28 e.Blocks#1/26 )/29 s.Depth#1/30 (/15 e.ScopeVars#1/13 )/16 (/11 e.Result#1/9 )/12 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.RAssignments#1 as range 5
  // closed e.ScopeVars#1 as range 13
  // closed e.Result#1 as range 9
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.Assignments#1 as range 18
  // closed e.Pattern#1 as range 22
  // closed e.Blocks#1 as range 26
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: e.ScopeVars#1: 13
  //DEBUG: e.Result#1: 9
  //DEBUG: s.ChainType#1: 17
  //DEBUG: e.Assignments#1: 18
  //DEBUG: e.Pattern#1: 22
  //DEBUG: e.Blocks#1: 26
  //DEBUG: s.Depth#1: 30

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EnumerateVars-Assignments$2=2/4 AsIs: (/7 AsIs: e.RAssignments#1/5 AsIs: )/8 AsIs: s.ChainType#1/17 AsIs: (/20 AsIs: e.Assignments#1/18 AsIs: )/21 AsIs: (/24 AsIs: e.Pattern#1/22 AsIs: )/25 AsIs: (/28 AsIs: e.Blocks#1/26 AsIs: )/29 AsIs: s.Depth#1/30 HalfReuse: </15 } & EnumerateVars-Expr/31 s.Depth#1/30/32 Tile{ HalfReuse: (/16 } Tile{ AsIs: e.ScopeVars#1/13 } Tile{ HalfReuse: )/11 AsIs: e.Result#1/9 HalfReuse: >/12 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[31], functions[efunc_EnumerateVarsm_Expr]);
  refalrts::copy_stvar(vm, context[32], context[30]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Assignments_S2A2]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_open_bracket(context[16]);
  refalrts::reinit_close_bracket(context[11]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[16], context[11] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A1("EnumerateVars-Assignments$2=1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Assignments_S2A1);


static refalrts::FnResult func_EnumerateVarsm_Assignments(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & EnumerateVars-Assignments/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EnumerateVars-Assignments/4 (/7 e.new#1/5 )/8 s.new#2/9 (/12 e.new#3/10 )/13 e.new#4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.new#3 as range 10
  // closed e.new#4 as range 2
  do {
    // </0 & EnumerateVars-Assignments/4 (/7 e.RAssignments#1/14 )/8 s.Depth#1/9 (/12 e.ScopeVars#1/16 )/13 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[10];
    context[17] = context[11];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.RAssignments#1 as range 14
    // closed e.ScopeVars#1 as range 16
    //DEBUG: s.Depth#1: 9
    //DEBUG: e.RAssignments#1: 14
    //DEBUG: e.ScopeVars#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EnumerateVars-Assignments/4 (/7 {REMOVED TILE} )/8 s.Depth#1/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 AsIs: e.ScopeVars#1/16 AsIs: )/13 HalfReuse: s.Depth1 #9/1 } Tile{ AsIs: e.RAssignments#1/14 } Tile{ ]] }
    refalrts::reinit_svar( context[1], context[9] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EnumerateVars-Assignments/4 (/7 e.RAssignments#1/5 )/8 s.Depth#1/9 (/12 e.ScopeVars#1/10 )/13 (/16 s.ChainType#1/30 (/28 e.Result#1/26 )/29 (/24 e.Blocks#1/22 )/25 (/20 e.Pattern#1/18 )/21 )/17 e.Assignments#1/2 >/1
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_right( context[18], context[19], context[14], context[15] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_right( context[22], context[23], context[14], context[15] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_right( context[26], context[27], context[14], context[15] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.RAssignments#1 as range 5
  // closed e.ScopeVars#1 as range 10
  // closed e.Result#1 as range 26
  // closed e.Blocks#1 as range 22
  // closed e.Pattern#1 as range 18
  // closed e.Assignments#1 as range 2
  if( ! refalrts::svar_left( context[30], context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Depth#1: 9
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: e.ScopeVars#1: 10
  //DEBUG: e.Result#1: 26
  //DEBUG: e.Blocks#1: 22
  //DEBUG: e.Pattern#1: 18
  //DEBUG: e.Assignments#1: 2
  //DEBUG: s.ChainType#1: 30

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EnumerateVars-Assignments$2=1/4 AsIs: (/7 } Tile{ AsIs: e.RAssignments#1/5 } )/31 Tile{ AsIs: s.ChainType#1/30 AsIs: (/28 } Tile{ AsIs: e.Assignments#1/2 } Tile{ AsIs: )/25 AsIs: (/20 AsIs: e.Pattern#1/18 AsIs: )/21 HalfReuse: (/17 } Tile{ AsIs: e.Blocks#1/22 } Tile{ AsIs: )/8 AsIs: s.Depth#1/9 AsIs: (/12 AsIs: e.ScopeVars#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Result#1/26 } Tile{ AsIs: )/29 HalfReuse: </24 } & AssignOrCondition/32 s.ChainType#1/30/33 >/34 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_AssignOrCondition]);
  refalrts::copy_stvar(vm, context[33], context[30]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Assignments_S2A1]);
  refalrts::reinit_open_bracket(context[17]);
  refalrts::reinit_open_call(context[24]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[16], context[29] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[17], context[8] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[28], context[25] );
  refalrts::link_brackets( context[7], context[31] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[32], context[34] );
  res = refalrts::splice_evar( res, context[29], context[24] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[25], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[30], context[28] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsm_Assignments("EnumerateVars-Assignments", COOKIE1_, COOKIE2_, func_EnumerateVarsm_Assignments);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1S4L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & EnumerateVars-Expr\1$4\1/4 (/7 e.ScopeVars#3/5 )/8 e.InBrackets#3/2 >/1
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
  // closed e.ScopeVars#3 as range 5
  // closed e.InBrackets#3 as range 2
  //DEBUG: e.ScopeVars#3: 5
  //DEBUG: e.InBrackets#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#3/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # Brackets/4 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1S4L1("EnumerateVars-Expr\\1$4\\1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Expr_L1S4L1);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1S5L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & EnumerateVars-Expr\1$5\1/4 (/7 e.Name#2/5 )/8 (/11 e.ScopeVars#3/9 )/12 e.InBrackets#3/2 >/1
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
  // closed e.Name#2 as range 5
  // closed e.ScopeVars#3 as range 9
  // closed e.InBrackets#3 as range 2
  //DEBUG: e.Name#2: 5
  //DEBUG: e.ScopeVars#3: 9
  //DEBUG: e.InBrackets#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.ScopeVars#3/9 AsIs: )/12 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_ADTm_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1S5L1("EnumerateVars-Expr\\1$5\\1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Expr_L1S5L1);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1S6L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & EnumerateVars-Expr\1$6\1/4 (/7 e.ScopeVars#3/5 )/8 e.InBrackets#3/2 >/1
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
  // closed e.ScopeVars#3 as range 5
  // closed e.InBrackets#3 as range 2
  //DEBUG: e.ScopeVars#3: 5
  //DEBUG: e.InBrackets#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#3/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # CallBrackets/4 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1S6L1("EnumerateVars-Expr\\1$6\\1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Expr_L1S6L1);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1S7L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & EnumerateVars-Expr\1$7\1/4 (/7 e.ScopeVars#2/5 )/8 e.Sentences#3/2 >/1
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
  // closed e.ScopeVars#2 as range 5
  // closed e.Sentences#3 as range 2
  //DEBUG: e.ScopeVars#2: 5
  //DEBUG: e.Sentences#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#2/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # Closure/4 } Tile{ AsIs: e.Sentences#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Closure]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1S7L1("EnumerateVars-Expr\\1$7\\1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Expr_L1S7L1);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & EnumerateVars-Expr\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EnumerateVars-Expr\1/4 s.new#1/5 (/8 e.new#2/6 )/9 t.new#3/10 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & EnumerateVars-Expr\1/4 s.new#4/5 (/8 e.new#7/12 )/9 (/10 s.new#5/16 e.new#6/14 )/11 >/1
    context[12] = context[6];
    context[13] = context[7];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    // closed e.new#7 as range 12
    if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
      continue;
    // closed e.new#6 as range 14
    do {
      // </0 & EnumerateVars-Expr\1/4 s.new#8/5 (/8 e.new#12/17 )/9 (/10 s.new#9/16 s.new#10/21 e.new#11/19 )/11 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[15];
      // closed e.new#12 as range 17
      if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
        continue;
      // closed e.new#11 as range 19
      do {
        // </0 & EnumerateVars-Expr\1/4 s.new#13/5 (/8 e.new#16/22 )/9 (/10 # TkVariable/16 s.new#14/21 e.new#15/24 )/11 >/1
        context[22] = context[17];
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[16] ) )
          continue;
        // closed e.new#16 as range 22
        // closed e.new#15 as range 24
        do {
          // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars-B#2/30 (/36 s.Mode#2/38 e.Index#2/39 s.Depth#2/41 )/37 e.ScopeVars-E#2/32 )/9 (/10 # TkVariable/16 s.Mode#2/21 e.Index#2/28 )/11 >/1
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          // closed e.Index#2 as range 28
          context[30] = 0;
          context[31] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[32] = context[26];
            context[33] = context[27];
            context[34] = 0;
            context[35] = 0;
            context[36] = refalrts::brackets_left( context[34], context[35], context[32], context[33] );
            if( ! context[36] )
              continue;
            refalrts::bracket_pointers(context[36], context[37]);
            if( ! refalrts::repeated_stvar_left( vm, context[38], context[21], context[34], context[35] ) )
              continue;
            if( ! refalrts::repeated_evar_left( vm, context[39], context[40], context[28], context[29], context[34], context[35] ) )
              continue;
            // closed e.ScopeVars-E#2 as range 32
            if( ! refalrts::svar_left( context[41], context[34], context[35] ) )
              continue;
            if( ! refalrts::empty_seq( context[34], context[35] ) )
              continue;
            //DEBUG: s.Depth#1: 5
            //DEBUG: s.Mode#2: 21
            //DEBUG: e.Index#2: 28
            //DEBUG: e.ScopeVars-B#2: 30
            //DEBUG: e.ScopeVars-E#2: 32
            //DEBUG: s.Depth#2: 41

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.ScopeVars-B#2/30 AsIs: (/36 AsIs: s.Mode#2/38 AsIs: e.Index#2/39 AsIs: s.Depth#2/41 AsIs: )/37 AsIs: e.ScopeVars-E#2/32 AsIs: )/9 AsIs: (/10 AsIs: # TkVariable/16 AsIs: s.Mode#2/21 AsIs: e.Index#2/28 HalfReuse: s.Depth2 #41/11 HalfReuse: )/1 ]] }
            refalrts::reinit_svar( context[11], context[41] );
            refalrts::reinit_close_bracket(context[1]);
            refalrts::link_brackets( context[10], context[1] );
            refalrts::link_brackets( context[8], context[9] );
            refalrts::link_brackets( context[36], context[37] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[30], context[31], context[26], context[27] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/26 )/9 (/10 # TkVariable/16 s.Mode#2/21 e.Index#2/28 )/11 >/1
        context[26] = context[22];
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[25];
        // closed e.ScopeVars#2 as range 26
        // closed e.Index#2 as range 28
        //DEBUG: s.Depth#1: 5
        //DEBUG: s.Mode#2: 21
        //DEBUG: e.ScopeVars#2: 26
        //DEBUG: e.Index#2: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } s.Mode#2/21/30 e.Index#2/28/31 Tile{ AsIs: s.Depth#1/5 HalfReuse: )/8 AsIs: e.ScopeVars#2/26 AsIs: )/9 AsIs: (/10 AsIs: # TkVariable/16 AsIs: s.Mode#2/21 AsIs: e.Index#2/28 HalfReuse: s.Depth1 #5/11 HalfReuse: )/1 ]] }
        refalrts::copy_stvar(vm, context[30], context[21]);
        refalrts::copy_evar(vm, context[31], context[32], context[28], context[29]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_bracket(context[4]);
        refalrts::reinit_close_bracket(context[8]);
        refalrts::reinit_svar( context[11], context[5] );
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[10], context[1] );
        refalrts::link_brackets( context[0], context[9] );
        refalrts::link_brackets( context[4], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[5];
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[30], context[30] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/22 )/9 (/10 # TkNewVariable/16 s.Mode#2/21 e.Index#2/24 )/11 >/1
      context[22] = context[17];
      context[23] = context[18];
      context[24] = context[19];
      context[25] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TkNewVariable], context[16] ) )
        continue;
      // closed e.ScopeVars#2 as range 22
      // closed e.Index#2 as range 24
      //DEBUG: s.Depth#1: 5
      //DEBUG: s.Mode#2: 21
      //DEBUG: e.ScopeVars#2: 22
      //DEBUG: e.Index#2: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } s.Mode#2/21/26 e.Index#2/24/27 Tile{ AsIs: s.Depth#1/5 HalfReuse: )/8 AsIs: e.ScopeVars#2/22 AsIs: )/9 AsIs: (/10 Reuse: # TkVariable/16 AsIs: s.Mode#2/21 AsIs: e.Index#2/24 HalfReuse: s.Depth1 #5/11 HalfReuse: )/1 ]] }
      refalrts::copy_stvar(vm, context[26], context[21]);
      refalrts::copy_evar(vm, context[27], context[28], context[24], context[25]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_close_bracket(context[8]);
      refalrts::update_ident(context[16], identifiers[ident_TkVariable]);
      refalrts::reinit_svar( context[11], context[5] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[10], context[1] );
      refalrts::link_brackets( context[0], context[9] );
      refalrts::link_brackets( context[4], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[5];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/17 )/9 (/10 # Brackets/16 e.InBrackets#2/19 )/11 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[16] ) )
        continue;
      // closed e.ScopeVars#2 as range 17
      // closed e.InBrackets#2 as range 19
      //DEBUG: s.Depth#1: 5
      //DEBUG: e.ScopeVars#2: 17
      //DEBUG: e.InBrackets#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/16 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/17 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/19 } >/21 Tile{ HalfReuse: & EnumerateVars-Expr\1$4\1/11 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::reinit_open_call(context[10]);
      refalrts::reinit_name(context[16], functions[efunc_Fetch]);
      refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Expr]);
      refalrts::reinit_name(context[11], functions[efunc_gen_EnumerateVarsm_Expr_L1S4L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[10], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/17 )/9 (/10 # ADT-Brackets/16 (/23 e.Name#2/21 )/24 e.InBrackets#2/19 )/11 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[16] ) )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.ScopeVars#2 as range 17
      // closed e.Name#2 as range 21
      // closed e.InBrackets#2 as range 19
      //DEBUG: s.Depth#1: 5
      //DEBUG: e.ScopeVars#2: 17
      //DEBUG: e.Name#2: 21
      //DEBUG: e.InBrackets#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </25 & Fetch/26 Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/17 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/19 } >/27 Tile{ HalfReuse: [*]/10 HalfReuse: & EnumerateVars-Expr\1$5\1/16 AsIs: (/23 AsIs: e.Name#2/21 AsIs: )/24 } Tile{ HalfReuse: {*}/11 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_Fetch]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Expr]);
      refalrts::reinit_closure_head(context[10]);
      refalrts::reinit_name(context[16], functions[efunc_gen_EnumerateVarsm_Expr_L1S5L1]);
      refalrts::reinit_unwrapped_closure(context[11], context[10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[10], context[24] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::use( res );
      refalrts::wrap_closure( context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/17 )/9 (/10 # CallBrackets/16 e.InBrackets#2/19 )/11 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[16] ) )
        continue;
      // closed e.ScopeVars#2 as range 17
      // closed e.InBrackets#2 as range 19
      //DEBUG: s.Depth#1: 5
      //DEBUG: e.ScopeVars#2: 17
      //DEBUG: e.InBrackets#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/16 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/17 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/19 } >/21 Tile{ HalfReuse: & EnumerateVars-Expr\1$6\1/11 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::reinit_open_call(context[10]);
      refalrts::reinit_name(context[16], functions[efunc_Fetch]);
      refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Expr]);
      refalrts::reinit_name(context[11], functions[efunc_gen_EnumerateVarsm_Expr_L1S6L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[10], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/17 )/9 (/10 # Closure/16 e.Sentences#2/19 )/11 >/1
    context[17] = context[12];
    context[18] = context[13];
    context[19] = context[14];
    context[20] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[16] ) )
      continue;
    // closed e.ScopeVars#2 as range 17
    // closed e.Sentences#2 as range 19
    //DEBUG: s.Depth#1: 5
    //DEBUG: e.ScopeVars#2: 17
    //DEBUG: e.Sentences#2: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Depth#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </21 & EnumerateVars-Body/22 </23 & Add/24 1/25 Tile{ HalfReuse: s.Depth1 #5/11 AsIs: >/1 } (/26 e.ScopeVars#2/17/27 )/29 Tile{ AsIs: e.Sentences#2/19 } >/30 [*]/31 & EnumerateVars-Expr\1$7\1/32 Tile{ AsIs: (/8 AsIs: e.ScopeVars#2/17 AsIs: )/9 HalfReuse: {*}/10 HalfReuse: >/16 } Tile{ ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_EnumerateVarsm_Body]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[25], 1UL);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::copy_evar(vm, context[27], context[28], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::alloc_closure_head(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_EnumerateVarsm_Expr_L1S7L1]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::reinit_unwrapped_closure(context[10], context[31]);
    refalrts::reinit_close_call(context[16]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[26], context[29] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[16] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[26], context[29] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[21], context[25] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    refalrts::wrap_closure( context[10] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 t.OtherTerm#2/10 >/1
  // closed e.ScopeVars#2 as range 6
  //DEBUG: t.OtherTerm#2: 10
  //DEBUG: s.Depth#1: 5
  //DEBUG: e.ScopeVars#2: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 AsIs: t.OtherTerm#2/10 } Tile{ ]] }
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1("EnumerateVars-Expr\\1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Expr_L1);


static refalrts::FnResult func_EnumerateVarsm_Expr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & EnumerateVars-Expr/4 s.Depth#1/5 (/8 e.OriginScopeVars#1/6 )/9 e.Expr#1/2 >/1
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
  // closed e.OriginScopeVars#1 as range 6
  // closed e.Expr#1 as range 2
  //DEBUG: s.Depth#1: 5
  //DEBUG: e.OriginScopeVars#1: 6
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@1/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.OriginScopeVars#1/6 AsIs: )/9 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[9] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsm_Expr("EnumerateVars-Expr", COOKIE1_, COOKIE2_, func_EnumerateVarsm_Expr);


static refalrts::FnResult func_gen_Passm_NameNestedFuncs_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Pass-NameNestedFuncs\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pass-NameNestedFuncs\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Pass-NameNestedFuncs\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Function], context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#2 as range 11
    // closed e.Body#2 as range 7
    //DEBUG: s.ScopeClass#2: 10
    //DEBUG: e.Name#2: 11
    //DEBUG: e.Body#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 } Tile{ AsIs: </0 Reuse: & NameNestedBody/4 } (/15 e.Name#2/11/16 # SUF/18 )/19 Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::copy_evar(vm, context[16], context[17], context[11], context[12]);
    refalrts::alloc_ident(vm, context[18], identifiers[ident_SUF]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_NameNestedBody]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[19] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-NameNestedFuncs\1/4 t.OtherProgramElement#2/5 >/1
  //DEBUG: t.OtherProgramElement#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-NameNestedFuncs\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_NameNestedFuncs_L1("Pass-NameNestedFuncs\\1", COOKIE1_, COOKIE2_, func_gen_Passm_NameNestedFuncs_L1);


static refalrts::FnResult func_Passm_NameNestedFuncs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pass-NameNestedFuncs/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@9/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_NameNestedFuncs("Pass-NameNestedFuncs", COOKIE1_, COOKIE2_, func_Passm_NameNestedFuncs);


static refalrts::FnResult func_gen_NameNestedBody_S2L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & NameNestedBody$2\1=1/4 s.SentenceNumber#2/5 (/8 e.Pattern#2/6 )/9 (/12 e.Assigns#2/10 )/13 (/16 e.Result#2/14 )/17 (/20 e.Blocks#2/18 )/21 e.MainName#3/2 >/1
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
  // closed e.Pattern#2 as range 6
  // closed e.Assigns#2 as range 10
  // closed e.Result#2 as range 14
  // closed e.Blocks#2 as range 18
  // closed e.MainName#3 as range 2
  //DEBUG: s.SentenceNumber#2: 5
  //DEBUG: e.Pattern#2: 6
  //DEBUG: e.Assigns#2: 10
  //DEBUG: e.Result#2: 14
  //DEBUG: e.Blocks#2: 18
  //DEBUG: e.MainName#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/22 Tile{ AsIs: s.SentenceNumber#2/5 } >/23 (/24 Tile{ AsIs: (/8 AsIs: e.Pattern#2/6 AsIs: )/9 HalfReuse: </12 } & NameNestedAssigns/25 Tile{ HalfReuse: (/21 AsIs: e.MainName#3/2 HalfReuse: )/1 } Tile{ AsIs: e.Assigns#2/10 } >/26 (/27 </28 & NameNestedResult/29 (/30 e.MainName#3/2/31 Tile{ HalfReuse: )/16 AsIs: e.Result#2/14 HalfReuse: >/17 HalfReuse: )/20 } (/33 </34 & NameNestedBlocks/35 (/36 e.MainName#3/2/37 Tile{ AsIs: )/13 } Tile{ AsIs: e.Blocks#2/18 } >/39 )/40 )/41 Tile{ ]] }
  refalrts::alloc_number(vm, context[22], 1UL);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_NameNestedAssigns]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_NameNestedResult]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::copy_evar(vm, context[31], context[32], context[2], context[3]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::alloc_open_call(vm, context[34]);
  refalrts::alloc_name(vm, context[35], functions[efunc_NameNestedBlocks]);
  refalrts::alloc_open_bracket(vm, context[36]);
  refalrts::copy_evar(vm, context[37], context[38], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_close_bracket(vm, context[41]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_open_bracket(context[21]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_bracket(context[16]);
  refalrts::reinit_close_call(context[17]);
  refalrts::reinit_close_bracket(context[20]);
  refalrts::link_brackets( context[24], context[41] );
  refalrts::link_brackets( context[33], context[40] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[34] );
  refalrts::link_brackets( context[36], context[13] );
  refalrts::link_brackets( context[27], context[20] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[30], context[16] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[21], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[39], context[41] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_evar( res, context[33], context[36] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[26], context[30] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[21], context[1] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBody_S2L1A1("NameNestedBody$2\\1=1", COOKIE1_, COOKIE2_, func_gen_NameNestedBody_S2L1A1);


static refalrts::FnResult func_gen_NameNestedBody_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  // </0 & NameNestedBody$2\1/4 (/7 e.MainName#1/5 )/8 s.SentenceNumber#2/25 (/11 (/15 e.Pattern#2/13 )/16 e.Assigns#2/9 (/23 e.Result#2/21 )/24 (/19 e.Blocks#2/17 )/20 )/12 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[9], context[10] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.MainName#1 as range 5
  // closed e.Pattern#2 as range 13
  // closed e.Assigns#2 as range 9
  // closed e.Result#2 as range 21
  // closed e.Blocks#2 as range 17
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Pattern#2: 13
  //DEBUG: e.Assigns#2: 9
  //DEBUG: e.Result#2: 21
  //DEBUG: e.Blocks#2: 17
  //DEBUG: s.SentenceNumber#2: 25

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </26 & Add/27 1/28 s.SentenceNumber#2/25/29 >/30 (/31 Tile{ AsIs: (/15 AsIs: e.Pattern#2/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & NameNestedAssigns/4 AsIs: (/7 AsIs: e.MainName#1/5 HalfReuse: '$'/8 AsIs: s.SentenceNumber#2/25 HalfReuse: )/11 } Tile{ AsIs: e.Assigns#2/9 } >/32 Tile{ AsIs: (/23 } </33 & NameNestedResult/34 (/35 e.MainName#1/5/36 '$'/38 s.SentenceNumber#2/25/39 )/40 Tile{ AsIs: e.Result#2/21 } >/41 )/42 (/43 </44 & NameNestedBlocks/45 (/46 e.MainName#1/5/47 '$'/49 Tile{ HalfReuse: s.SentenceNumber2 #25/24 HalfReuse: )/19 AsIs: e.Blocks#2/17 HalfReuse: >/20 AsIs: )/12 HalfReuse: )/1 ]] }
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[28], 1UL);
  refalrts::copy_stvar(vm, context[29], context[25]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_name(vm, context[34], functions[efunc_NameNestedResult]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::copy_evar(vm, context[36], context[37], context[5], context[6]);
  refalrts::alloc_char(vm, context[38], '$');
  refalrts::copy_stvar(vm, context[39], context[25]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::alloc_close_bracket(vm, context[42]);
  refalrts::alloc_open_bracket(vm, context[43]);
  refalrts::alloc_open_call(vm, context[44]);
  refalrts::alloc_name(vm, context[45], functions[efunc_NameNestedBlocks]);
  refalrts::alloc_open_bracket(vm, context[46]);
  refalrts::copy_evar(vm, context[47], context[48], context[5], context[6]);
  refalrts::alloc_char(vm, context[49], '$');
  refalrts::update_name(context[4], functions[efunc_NameNestedAssigns]);
  refalrts::reinit_char(context[8], '$');
  refalrts::reinit_close_bracket(context[11]);
  refalrts::reinit_svar( context[24], context[25] );
  refalrts::reinit_close_bracket(context[19]);
  refalrts::reinit_close_call(context[20]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[31], context[1] );
  refalrts::link_brackets( context[43], context[12] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[44] );
  refalrts::link_brackets( context[46], context[19] );
  refalrts::link_brackets( context[23], context[42] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[33] );
  refalrts::link_brackets( context[35], context[40] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[26] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[24];
  res = refalrts::splice_evar( res, context[41], context[49] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[33], context[40] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[26], context[31] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBody_S2L1("NameNestedBody$2\\1", COOKIE1_, COOKIE2_, func_gen_NameNestedBody_S2L1);


static refalrts::FnResult func_NameNestedBody(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & NameNestedBody/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NameNestedBody/4 (/7 e.new#1/5 )/8 s.new#2/9 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & NameNestedBody/4 (/7 e.new#5/10 )/8 # Sentences/9 e.new#4/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[9] ) )
      continue;
    // closed e.new#5 as range 10
    // closed e.new#4 as range 12
    do {
      // </0 & NameNestedBody/4 (/7 e.MainName#1/14 )/8 # Sentences/9 (/20 (/24 e.Pattern#1/22 )/25 e.Assigns#1/18 (/32 e.Result#1/30 )/33 (/28 e.Blocks#1/26 )/29 )/21 >/1
      context[14] = context[10];
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[13];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[18], context[19] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[18], context[19] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_right( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.MainName#1 as range 14
      // closed e.Pattern#1 as range 22
      // closed e.Assigns#1 as range 18
      // closed e.Result#1 as range 30
      // closed e.Blocks#1 as range 26
      //DEBUG: e.MainName#1: 14
      //DEBUG: e.Pattern#1: 22
      //DEBUG: e.Assigns#1: 18
      //DEBUG: e.Result#1: 30
      //DEBUG: e.Blocks#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: # Sentences/9 AsIs: (/20 AsIs: (/24 AsIs: e.Pattern#1/22 AsIs: )/25 } Tile{ AsIs: </0 Reuse: & NameNestedAssigns/4 AsIs: (/7 AsIs: e.MainName#1/14 AsIs: )/8 } Tile{ AsIs: e.Assigns#1/18 } >/34 (/35 </36 & NameNestedResult/37 (/38 e.MainName#1/14/39 Tile{ HalfReuse: )/32 AsIs: e.Result#1/30 HalfReuse: >/33 } )/41 (/42 </43 & NameNestedBlocks/44 (/45 e.MainName#1/14/46 Tile{ HalfReuse: )/28 AsIs: e.Blocks#1/26 HalfReuse: >/29 AsIs: )/21 HalfReuse: )/1 ]] }
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_name(vm, context[37], functions[efunc_NameNestedResult]);
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::copy_evar(vm, context[39], context[40], context[14], context[15]);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::alloc_open_call(vm, context[43]);
      refalrts::alloc_name(vm, context[44], functions[efunc_NameNestedBlocks]);
      refalrts::alloc_open_bracket(vm, context[45]);
      refalrts::copy_evar(vm, context[46], context[47], context[14], context[15]);
      refalrts::update_name(context[4], functions[efunc_NameNestedAssigns]);
      refalrts::reinit_close_bracket(context[32]);
      refalrts::reinit_close_call(context[33]);
      refalrts::reinit_close_bracket(context[28]);
      refalrts::reinit_close_call(context[29]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[20], context[1] );
      refalrts::link_brackets( context[42], context[21] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[43] );
      refalrts::link_brackets( context[45], context[28] );
      refalrts::link_brackets( context[35], context[41] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[36] );
      refalrts::link_brackets( context[38], context[32] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[28];
      res = refalrts::splice_evar( res, context[46], context[47] );
      res = refalrts::splice_evar( res, context[41], context[45] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[34], context[38] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[9], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NameNestedBody/4 (/7 e.MainName#1/14 )/8 # Sentences/9 e.Sentences#1/16 >/1
    context[14] = context[10];
    context[15] = context[11];
    context[16] = context[12];
    context[17] = context[13];
    // closed e.MainName#1 as range 14
    // closed e.Sentences#1 as range 16
    //DEBUG: e.MainName#1: 14
    //DEBUG: e.Sentences#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Sentences/18 </19 & DelAccumulator/20 </21 & MapAccum/22 Tile{ HalfReuse: [*]/0 Reuse: & NameNestedBody$2\1/4 AsIs: (/7 AsIs: e.MainName#1/14 AsIs: )/8 HalfReuse: {*}/9 } 1/23 Tile{ AsIs: e.Sentences#1/16 } >/24 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[18], identifiers[ident_Sentences]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_DelAccumulator]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_MapAccum]);
    refalrts::alloc_number(vm, context[23], 1UL);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_NameNestedBody_S2L1]);
    refalrts::reinit_unwrapped_closure(context[9], context[0]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[18], context[22] );
    refalrts::use( res );
    refalrts::wrap_closure( context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NameNestedBody/4 (/7 e.MainName#1/5 )/8 # NativeBody/9 t.SrcPos#1/10 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MainName#1 as range 5
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2
  //DEBUG: e.MainName#1: 5
  //DEBUG: t.SrcPos#1: 10
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & NameNestedBody/4 (/7 e.MainName#1/5 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/9 AsIs: t.SrcPos#1/10 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedBody("NameNestedBody", COOKIE1_, COOKIE2_, func_NameNestedBody);


static refalrts::FnResult func_gen_NameNestedBlocks_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & NameNestedBlocks=1/4 s.BlockNumber#2/5 e.Blocks#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Blocks#2 as range 2
  //DEBUG: s.BlockNumber#2: 5
  //DEBUG: e.Blocks#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & NameNestedBlocks=1/4 s.BlockNumber#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Blocks#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBlocks_A1("NameNestedBlocks=1", COOKIE1_, COOKIE2_, func_gen_NameNestedBlocks_A1);


static refalrts::FnResult func_gen_NameNestedBlocks_A1L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & NameNestedBlocks=1\1=1/4 s.BlockNumber#2/5 (/8 e.Body#2/6 )/9 e.MainName#3/2 >/1
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
  // closed e.Body#2 as range 6
  // closed e.MainName#3 as range 2
  //DEBUG: s.BlockNumber#2: 5
  //DEBUG: e.Body#2: 6
  //DEBUG: e.MainName#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/10 Tile{ AsIs: s.BlockNumber#2/5 HalfReuse: >/8 } (/11 Tile{ HalfReuse: (/9 AsIs: e.MainName#3/2 HalfReuse: )/1 } </12 & NameNestedBody/13 (/14 e.MainName#3/2/15 )/17 Tile{ AsIs: e.Body#2/6 } >/18 )/19 Tile{ ]] }
  refalrts::alloc_number(vm, context[10], 1UL);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_NameNestedBody]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::copy_evar(vm, context[15], context[16], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_open_bracket(context[9]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[19] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBlocks_A1L1A1("NameNestedBlocks=1\\1=1", COOKIE1_, COOKIE2_, func_gen_NameNestedBlocks_A1L1A1);


static refalrts::FnResult func_gen_NameNestedBlocks_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & NameNestedBlocks=1\1/4 (/7 e.MainName#1/5 )/8 s.BlockNumber#2/13 (/11 e.Body#2/9 )/12 >/1
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
  // closed e.MainName#1 as range 5
  // closed e.Body#2 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Body#2: 9
  //DEBUG: s.BlockNumber#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 & Add/15 1/16 s.BlockNumber#2/13/17 >/18 (/19 (/20 e.MainName#1/5/21 ':'/23 s.BlockNumber#2/13/24 )/25 Tile{ AsIs: </0 Reuse: & NameNestedBody/4 AsIs: (/7 AsIs: e.MainName#1/5 HalfReuse: ':'/8 AsIs: s.BlockNumber#2/13 HalfReuse: )/11 AsIs: e.Body#2/9 HalfReuse: >/12 HalfReuse: )/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[16], 1UL);
  refalrts::copy_stvar(vm, context[17], context[13]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]);
  refalrts::alloc_char(vm, context[23], ':');
  refalrts::copy_stvar(vm, context[24], context[13]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_NameNestedBody]);
  refalrts::reinit_char(context[8], ':');
  refalrts::reinit_close_bracket(context[11]);
  refalrts::reinit_close_call(context[12]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[19], context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::link_brackets( context[20], context[25] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[14], context[25] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBlocks_A1L1("NameNestedBlocks=1\\1", COOKIE1_, COOKIE2_, func_gen_NameNestedBlocks_A1L1);


static refalrts::FnResult func_NameNestedBlocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & NameNestedBlocks/4 (/7 e.MainName#1/5 )/8 e.Blocks#1/2 >/1
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
  // closed e.MainName#1 as range 5
  // closed e.Blocks#1 as range 2
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & NameNestedBlocks=1/10 </11 & MapAccum/12 Tile{ HalfReuse: [*]/0 Reuse: & NameNestedBlocks=1\1/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } {*}/13 1/14 Tile{ AsIs: e.Blocks#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_NameNestedBlocks_A1]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_MapAccum]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[0]);
  refalrts::alloc_number(vm, context[14], 1UL);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_NameNestedBlocks_A1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedBlocks("NameNestedBlocks", COOKIE1_, COOKIE2_, func_NameNestedBlocks);


static refalrts::FnResult func_gen_NameNestedAssigns_L1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & NameNestedAssigns\1=2/4 s.AssignId#2/5 s.ChainType#2/6 (/9 e.Result#2/7 )/10 (/13 e.Blocks#2/11 )/14 (/17 e.Pattern#2/15 )/18 e.MainName#4/2 >/1
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
  // closed e.Result#2 as range 7
  // closed e.Blocks#2 as range 11
  // closed e.Pattern#2 as range 15
  // closed e.MainName#4 as range 2
  //DEBUG: s.AssignId#2: 5
  //DEBUG: s.ChainType#2: 6
  //DEBUG: e.Result#2: 7
  //DEBUG: e.Blocks#2: 11
  //DEBUG: e.Pattern#2: 15
  //DEBUG: e.MainName#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/19 Tile{ AsIs: s.AssignId#2/5 } >/20 (/21 Tile{ AsIs: s.ChainType#2/6 AsIs: (/9 } e.MainName#4/2/22 Tile{ AsIs: )/10 AsIs: (/13 } </24 & NameNestedResult/25 (/26 Tile{ AsIs: e.MainName#4/2 } )/27 Tile{ AsIs: e.Result#2/7 } >/28 )/29 (/30 </31 & NameNestedBlocks/32 (/33 e.MainName#4/2/34 )/36 Tile{ AsIs: e.Blocks#2/11 } >/37 Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Pattern#2/15 AsIs: )/18 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_number(vm, context[19], 1UL);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::copy_evar(vm, context[22], context[23], context[2], context[3]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_NameNestedResult]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_NameNestedBlocks]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::copy_evar(vm, context[34], context[35], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[21], context[1] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[30], context[14] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::link_brackets( context[13], context[29] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[28], context[36] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedAssigns_L1A2("NameNestedAssigns\\1=2", COOKIE1_, COOKIE2_, func_gen_NameNestedAssigns_L1A2);


static refalrts::FnResult func_gen_NameNestedAssigns_L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & NameNestedAssigns\1=1/4 s.AssignId#2/5 s.ChainType#2/6 (/9 e.Result#2/7 )/10 (/13 e.Blocks#2/11 )/14 (/17 e.Pattern#2/15 )/18 (/21 e.MainName#1/19 )/22 s.Marker#3/23 >/1
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
  // closed e.Result#2 as range 7
  // closed e.Blocks#2 as range 11
  // closed e.Pattern#2 as range 15
  // closed e.MainName#1 as range 19
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.AssignId#2: 5
  //DEBUG: s.ChainType#2: 6
  //DEBUG: e.Result#2: 7
  //DEBUG: e.Blocks#2: 11
  //DEBUG: e.Pattern#2: 15
  //DEBUG: e.MainName#1: 19
  //DEBUG: s.Marker#3: 23

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/24 Tile{ AsIs: s.AssignId#2/5 } >/25 (/26 Tile{ AsIs: s.ChainType#2/6 AsIs: (/9 } e.MainName#1/19/27 s.Marker#3/23/29 s.AssignId#2/5/30 Tile{ AsIs: )/10 AsIs: (/13 } </31 & NameNestedResult/32 (/33 Tile{ AsIs: e.MainName#1/19 } Tile{ AsIs: s.Marker#3/23 HalfReuse: s.AssignId2 #5/1 } Tile{ AsIs: )/22 } Tile{ AsIs: e.Result#2/7 } >/34 )/35 (/36 </37 & NameNestedBlocks/38 (/39 e.MainName#1/19/40 s.Marker#3/23/42 s.AssignId#2/5/43 )/44 Tile{ AsIs: e.Blocks#2/11 } >/45 Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Pattern#2/15 AsIs: )/18 HalfReuse: )/21 } Tile{ ]] }
  refalrts::alloc_number(vm, context[24], 1UL);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::copy_evar(vm, context[27], context[28], context[19], context[20]);
  refalrts::copy_stvar(vm, context[29], context[23]);
  refalrts::copy_stvar(vm, context[30], context[5]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_NameNestedResult]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_open_bracket(vm, context[36]);
  refalrts::alloc_open_call(vm, context[37]);
  refalrts::alloc_name(vm, context[38], functions[efunc_NameNestedBlocks]);
  refalrts::alloc_open_bracket(vm, context[39]);
  refalrts::copy_evar(vm, context[40], context[41], context[19], context[20]);
  refalrts::copy_stvar(vm, context[42], context[23]);
  refalrts::copy_stvar(vm, context[43], context[5]);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::alloc_close_call(vm, context[45]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::reinit_close_bracket(context[21]);
  refalrts::link_brackets( context[26], context[21] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[36], context[14] );
  refalrts::push_stack( vm, context[45] );
  refalrts::push_stack( vm, context[37] );
  refalrts::link_brackets( context[39], context[44] );
  refalrts::link_brackets( context[13], context[35] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[33], context[22] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[21] );
  res = refalrts::splice_evar( res, context[45], context[45] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[34], context[44] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[23], context[1] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[31], context[33] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedAssigns_L1A1("NameNestedAssigns\\1=1", COOKIE1_, COOKIE2_, func_gen_NameNestedAssigns_L1A1);


static refalrts::FnResult func_gen_NameNestedAssigns_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & NameNestedAssigns\1/4 (/7 e.MainName#1/5 )/8 s.AssignId#2/25 (/11 s.ChainType#2/26 (/23 e.Result#2/21 )/24 (/19 e.Blocks#2/17 )/20 (/15 e.Pattern#2/13 )/16 )/12 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[9], context[10] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.MainName#1 as range 5
  // closed e.Result#2 as range 21
  // closed e.Blocks#2 as range 17
  // closed e.Pattern#2 as range 13
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[26], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Result#2: 21
  //DEBUG: e.Blocks#2: 17
  //DEBUG: e.Pattern#2: 13
  //DEBUG: s.AssignId#2: 25
  //DEBUG: s.ChainType#2: 26

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.AssignId#2/25 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameNestedAssigns\1=1/4 } Tile{ HalfReuse: s.AssignId2 #25/11 AsIs: s.ChainType#2/26 AsIs: (/23 AsIs: e.Result#2/21 AsIs: )/24 AsIs: (/19 AsIs: e.Blocks#2/17 AsIs: )/20 AsIs: (/15 AsIs: e.Pattern#2/13 AsIs: )/16 HalfReuse: (/12 } Tile{ AsIs: e.MainName#1/5 } Tile{ AsIs: )/8 } Tile{ HalfReuse: </7 } & ChainTypeMarker/27 s.ChainType#2/26/28 >/29 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[27], functions[efunc_ChainTypeMarker]);
  refalrts::copy_stvar(vm, context[28], context[26]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_gen_NameNestedAssigns_L1A1]);
  refalrts::reinit_svar( context[11], context[25] );
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_open_call(context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[29] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedAssigns_L1("NameNestedAssigns\\1", COOKIE1_, COOKIE2_, func_gen_NameNestedAssigns_L1);


static refalrts::FnResult func_NameNestedAssigns(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & NameNestedAssigns/4 (/7 e.MainName#1/5 )/8 e.Assigns#1/2 >/1
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
  // closed e.MainName#1 as range 5
  // closed e.Assigns#1 as range 2
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Assigns#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & DelAccumulator/10 </11 & MapAccum/12 Tile{ HalfReuse: [*]/0 Reuse: & NameNestedAssigns\1/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } {*}/13 1/14 Tile{ AsIs: e.Assigns#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_DelAccumulator]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_MapAccum]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[0]);
  refalrts::alloc_number(vm, context[14], 1UL);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_NameNestedAssigns_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedAssigns("NameNestedAssigns", COOKIE1_, COOKIE2_, func_NameNestedAssigns);


static refalrts::FnResult func_ChainTypeMarker(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & ChainTypeMarker/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ChainTypeMarker/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ChainTypeMarker/4 # Assign/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Assign], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ChainTypeMarker/4 # Assign/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '='/1 ]] }
    refalrts::reinit_char(context[1], '=');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ChainTypeMarker/4 # Condition/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Condition], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ChainTypeMarker/4 # Condition/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '?'/1 ]] }
  refalrts::reinit_char(context[1], '?');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ChainTypeMarker("ChainTypeMarker", COOKIE1_, COOKIE2_, func_ChainTypeMarker);


static refalrts::FnResult func_NameNestedResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & NameNestedResult/4 (/7 e.MainName#1/5 )/8 e.Result#1/2 >/1
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
  // closed e.MainName#1 as range 5
  // closed e.Result#1 as range 2
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & DelAccumulator/10 </11 Tile{ HalfReuse: & NameNestedResultRec/0 HalfReuse: 1/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 AsIs: e.Result#1/2 AsIs: >/1 } >/12 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_DelAccumulator]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::reinit_name(context[0], functions[efunc_NameNestedResultRec]);
  refalrts::reinit_number(context[4], 1UL);
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

static refalrts::NativeReference nat_ref_NameNestedResult("NameNestedResult", COOKIE1_, COOKIE2_, func_NameNestedResult);


static refalrts::FnResult func_NameNestedResultRec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & NameNestedResultRec/4 s.StartNumber#1/5 (/8 e.MainName#1/6 )/9 e.Result#1/2 >/1
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
  // closed e.MainName#1 as range 6
  // closed e.Result#1 as range 2
  //DEBUG: s.StartNumber#1: 5
  //DEBUG: e.MainName#1: 6
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@2/4 } Tile{ AsIs: e.MainName#1/6 } Tile{ AsIs: s.StartNumber#1/5 AsIs: (/8 } Tile{ AsIs: e.Result#1/2 } Tile{ AsIs: )/9 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedResultRec("NameNestedResultRec", COOKIE1_, COOKIE2_, func_NameNestedResultRec);


static refalrts::FnResult func_gen_NameNestedResultRecm_Term_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & NameNestedResultRec-Term$1=1/4 s.NextNumber#2/5 e.InBrackets#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.InBrackets#2 as range 2
  //DEBUG: s.NextNumber#2: 5
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.NextNumber#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextNumber2 #5/0 HalfReuse: (/4 } # Brackets/6 Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[6], identifiers[ident_Brackets]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedResultRecm_Term_S1A1("NameNestedResultRec-Term$1=1", COOKIE1_, COOKIE2_, func_gen_NameNestedResultRecm_Term_S1A1);


static refalrts::FnResult func_gen_NameNestedResultRecm_Term_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & NameNestedResultRec-Term$2=1/4 (/7 e.Name#1/5 )/8 s.NextNumber#2/9 e.InBrackets#2/2 >/1
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
  // closed e.InBrackets#2 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: s.NextNumber#2: 9
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextNumber#2/9 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_ADTm_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedResultRecm_Term_S2A1("NameNestedResultRec-Term$2=1", COOKIE1_, COOKIE2_, func_gen_NameNestedResultRecm_Term_S2A1);


static refalrts::FnResult func_gen_NameNestedResultRecm_Term_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & NameNestedResultRec-Term$3=1/4 s.NextNumber#2/5 e.InBrackets#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.InBrackets#2 as range 2
  //DEBUG: s.NextNumber#2: 5
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.NextNumber#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextNumber2 #5/0 HalfReuse: (/4 } # CallBrackets/6 Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[6], identifiers[ident_CallBrackets]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedResultRecm_Term_S3A1("NameNestedResultRec-Term$3=1", COOKIE1_, COOKIE2_, func_gen_NameNestedResultRecm_Term_S3A1);


static refalrts::FnResult func_NameNestedResultRecm_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & NameNestedResultRec-Term/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NameNestedResultRec-Term/4 e.new#1/2 s.new#2/7 t.new#3/5 >/1
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & NameNestedResultRec-Term/4 e.new#7/8 s.new#6/7 (/5 s.new#4/12 e.new#5/10 )/6 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_term( context[10], context[11], context[5] ) )
      continue;
    // closed e.new#7 as range 8
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    // closed e.new#5 as range 10
    do {
      // </0 & NameNestedResultRec-Term/4 e.MainName#1/13 s.NextNumber#1/7 (/5 # Brackets/12 e.InBrackets#1/15 )/6 >/1
      context[13] = context[8];
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[12] ) )
        continue;
      // closed e.MainName#1 as range 13
      // closed e.InBrackets#1 as range 15
      //DEBUG: s.NextNumber#1: 7
      //DEBUG: e.MainName#1: 13
      //DEBUG: e.InBrackets#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameNestedResultRec-Term$1=1/4 } </17 & NameNestedResultRec/18 Tile{ AsIs: s.NextNumber#1/7 AsIs: (/5 } Tile{ AsIs: e.MainName#1/13 } Tile{ HalfReuse: )/12 AsIs: e.InBrackets#1/15 HalfReuse: >/6 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_NameNestedResultRec]);
      refalrts::update_name(context[4], functions[efunc_gen_NameNestedResultRecm_Term_S1A1]);
      refalrts::reinit_close_bracket(context[12]);
      refalrts::reinit_close_call(context[6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[17] );
      refalrts::link_brackets( context[5], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[5] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NameNestedResultRec-Term/4 e.MainName#1/13 s.NextNumber#1/7 (/5 # ADT-Brackets/12 (/19 e.Name#1/17 )/20 e.InBrackets#1/15 )/6 >/1
      context[13] = context[8];
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[12] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.MainName#1 as range 13
      // closed e.Name#1 as range 17
      // closed e.InBrackets#1 as range 15
      //DEBUG: s.NextNumber#1: 7
      //DEBUG: e.MainName#1: 13
      //DEBUG: e.Name#1: 17
      //DEBUG: e.InBrackets#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameNestedResultRec-Term$2=1/4 } Tile{ AsIs: (/19 } Tile{ AsIs: e.Name#1/17 } Tile{ HalfReuse: )/12 } </21 & NameNestedResultRec/22 Tile{ AsIs: s.NextNumber#1/7 AsIs: (/5 } Tile{ AsIs: e.MainName#1/13 } Tile{ AsIs: )/20 AsIs: e.InBrackets#1/15 HalfReuse: >/6 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_NameNestedResultRec]);
      refalrts::update_name(context[4], functions[efunc_gen_NameNestedResultRecm_Term_S2A1]);
      refalrts::reinit_close_bracket(context[12]);
      refalrts::reinit_close_call(context[6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[5], context[20] );
      refalrts::link_brackets( context[19], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[20];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[5] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NameNestedResultRec-Term/4 e.MainName#1/13 s.NextNumber#1/7 (/5 # CallBrackets/12 e.InBrackets#1/15 )/6 >/1
      context[13] = context[8];
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[12] ) )
        continue;
      // closed e.MainName#1 as range 13
      // closed e.InBrackets#1 as range 15
      //DEBUG: s.NextNumber#1: 7
      //DEBUG: e.MainName#1: 13
      //DEBUG: e.InBrackets#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameNestedResultRec-Term$3=1/4 } </17 & NameNestedResultRec/18 Tile{ AsIs: s.NextNumber#1/7 AsIs: (/5 } Tile{ AsIs: e.MainName#1/13 } Tile{ HalfReuse: )/12 AsIs: e.InBrackets#1/15 HalfReuse: >/6 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_NameNestedResultRec]);
      refalrts::update_name(context[4], functions[efunc_gen_NameNestedResultRecm_Term_S3A1]);
      refalrts::reinit_close_bracket(context[12]);
      refalrts::reinit_close_call(context[6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[17] );
      refalrts::link_brackets( context[5], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[5] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NameNestedResultRec-Term/4 e.MainName#1/13 s.NextNumber#1/7 (/5 # Closure/12 e.Sentences#1/15 )/6 >/1
    context[13] = context[8];
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[12] ) )
      continue;
    // closed e.MainName#1 as range 13
    // closed e.Sentences#1 as range 15
    //DEBUG: s.NextNumber#1: 7
    //DEBUG: e.MainName#1: 13
    //DEBUG: e.Sentences#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/17 s.NextNumber#1/7/18 >/19 (/20 # Closure/21 (/22 Tile{ AsIs: e.MainName#1/13 } '\\'/23 Tile{ AsIs: s.NextNumber#1/7 } )/24 </25 & NameNestedBody/26 (/27 e.MainName#1/13/28 '\\'/30 Tile{ HalfReuse: s.NextNumber1 #7/5 HalfReuse: )/12 AsIs: e.Sentences#1/15 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::alloc_number(vm, context[17], 1UL);
    refalrts::copy_stvar(vm, context[18], context[7]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::alloc_ident(vm, context[21], identifiers[ident_Closure]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::alloc_char(vm, context[23], '\\');
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_NameNestedBody]);
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::copy_evar(vm, context[28], context[29], context[13], context[14]);
    refalrts::alloc_char(vm, context[30], '\\');
    refalrts::update_name(context[4], functions[efunc_Add]);
    refalrts::reinit_svar( context[5], context[7] );
    refalrts::reinit_close_bracket(context[12]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[20], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[25] );
    refalrts::link_brackets( context[27], context[12] );
    refalrts::link_brackets( context[22], context[24] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    res = refalrts::splice_evar( res, context[24], context[30] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NameNestedResultRec-Term/4 e.MainName#1/2 s.NextNumber#1/7 t.OtherTerm#1/5 >/1
  // closed e.MainName#1 as range 2
  //DEBUG: t.OtherTerm#1: 5
  //DEBUG: s.NextNumber#1: 7
  //DEBUG: e.MainName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & NameNestedResultRec-Term/4 e.MainName#1/2 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextNumber#1/7 AsIs: t.OtherTerm#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedResultRecm_Term("NameNestedResultRec-Term", COOKIE1_, COOKIE2_, func_NameNestedResultRecm_Term);


static refalrts::FnResult func_gen_Passm_RemoveBlocksAndAssigns_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Pass-RemoveBlocksAndAssigns\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pass-RemoveBlocksAndAssigns\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Pass-RemoveBlocksAndAssigns\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Function], context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#2 as range 11
    // closed e.Body#2 as range 7
    //DEBUG: s.ScopeClass#2: 10
    //DEBUG: e.Name#2: 11
    //DEBUG: e.Body#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 } Tile{ AsIs: </0 Reuse: & RemoveAssigns-Sentences/4 } Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_RemoveAssignsm_Sentences]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-RemoveBlocksAndAssigns\1/4 t.OtherProgramElement#2/5 >/1
  //DEBUG: t.OtherProgramElement#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-RemoveBlocksAndAssigns\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_RemoveBlocksAndAssigns_L1("Pass-RemoveBlocksAndAssigns\\1", COOKIE1_, COOKIE2_, func_gen_Passm_RemoveBlocksAndAssigns_L1);


static refalrts::FnResult func_Passm_RemoveBlocksAndAssigns(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pass-RemoveBlocksAndAssigns/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@10/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_RemoveBlocksAndAssigns("Pass-RemoveBlocksAndAssigns", COOKIE1_, COOKIE2_, func_Passm_RemoveBlocksAndAssigns);


static refalrts::FnResult func_RemoveAssignsm_Sentences(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & RemoveAssigns-Sentences/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RemoveAssigns-Sentences/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & RemoveAssigns-Sentences/4 # Sentences/5 e.Sentences#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[5] ) )
      continue;
    // closed e.Sentences#1 as range 6
    //DEBUG: e.Sentences#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Sentences/0 HalfReuse: </4 HalfReuse: & Map@11/5 AsIs: e.Sentences#1/6 AsIs: >/1 ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Sentences]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_Map_Z11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemoveAssigns-Sentences/4 # NativeBody/5 t.SrcPos#1/6 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2
  //DEBUG: t.SrcPos#1: 6
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RemoveAssigns-Sentences/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/5 AsIs: t.SrcPos#1/6 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveAssignsm_Sentences("RemoveAssigns-Sentences", COOKIE1_, COOKIE2_, func_RemoveAssignsm_Sentences);


static refalrts::FnResult func_gen_RemoveAssignsm_Sentence_S2A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & RemoveAssigns-Sentence$2=3/4 (/7 e.Pattern#1/5 )/8 (/11 e.Conditions#2/9 )/12 e.Result#4/2 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.Conditions#2 as range 9
  // closed e.Result#4 as range 2
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Conditions#2: 9
  //DEBUG: e.Result#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 } Tile{ AsIs: e.Conditions#2/9 } Tile{ HalfReuse: (/12 AsIs: e.Result#4/2 HalfReuse: )/1 } Tile{ HalfReuse: )/11 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_bracket(context[11]);
  refalrts::link_brackets( context[4], context[11] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Sentence_S2A3("RemoveAssigns-Sentence$2=3", COOKIE1_, COOKIE2_, func_gen_RemoveAssignsm_Sentence_S2A3);


static refalrts::FnResult func_gen_RemoveAssignsm_Sentence_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & RemoveAssigns-Sentence$2=2/4 (/7 e.Pattern#1/5 )/8 (/11 e.Conditions#2/9 )/12 (/15 e.Result#3/13 )/16 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.Conditions#2 as range 9
  // closed e.Result#3 as range 13
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Conditions#2: 9
  //DEBUG: e.Result#3: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RemoveAssigns-Sentence$2=3/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Conditions#2/9 AsIs: )/12 HalfReuse: </15 } & RemoveAssigns-Result/17 Tile{ AsIs: e.Result#3/13 } Tile{ HalfReuse: >/16 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_RemoveAssignsm_Result]);
  refalrts::update_name(context[4], functions[efunc_gen_RemoveAssignsm_Sentence_S2A3]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Sentence_S2A2("RemoveAssigns-Sentence$2=2", COOKIE1_, COOKIE2_, func_gen_RemoveAssignsm_Sentence_S2A2);


static refalrts::FnResult func_gen_RemoveAssignsm_Sentence_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & RemoveAssigns-Sentence$2=1/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 (/15 e.Blocks#1/13 )/16 e.Conditions#2/2 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.Result#1 as range 9
  // closed e.Blocks#1 as range 13
  // closed e.Conditions#2 as range 2
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Result#1: 9
  //DEBUG: e.Blocks#1: 13
  //DEBUG: e.Conditions#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RemoveAssigns-Sentence$2=2/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Conditions#2/2 } Tile{ AsIs: )/12 } </17 & RemoveAssigns-WindBlocks/18 (/19 Tile{ AsIs: e.Result#1/9 } Tile{ HalfReuse: )/15 AsIs: e.Blocks#1/13 HalfReuse: >/16 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_RemoveAssignsm_WindBlocks]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_RemoveAssignsm_Sentence_S2A2]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[19], context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Sentence_S2A1("RemoveAssigns-Sentence$2=1", COOKIE1_, COOKIE2_, func_gen_RemoveAssignsm_Sentence_S2A1);


static refalrts::FnResult func_RemoveAssignsm_Sentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & RemoveAssigns-Sentence/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RemoveAssigns-Sentence/4 (/7 (/11 e.new#1/9 )/12 e.new#2/5 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 9
  // closed e.new#2 as range 5
  do {
    // </0 & RemoveAssigns-Sentence/4 (/7 (/11 e.Pattern#1/13 )/12 e.Conditions#1/17 (/23 # Assign/25 (/28 e.AssignName#1/26 )/29 (/32 e.AssignResult#1/30 )/33 (/36 e.Blocks#1/34 )/37 (/40 e.AssignPattern#1/38 )/41 )/24 e.SentenceTail#1/19 )/8 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[5];
    context[16] = context[6];
    // closed e.Pattern#1 as range 13
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[19] = context[15];
      context[20] = context[16];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left( identifiers[ident_Assign], context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[21], context[22] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[21], context[22] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[21], context[22] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = 0;
      context[39] = 0;
      context[40] = refalrts::brackets_left( context[38], context[39], context[21], context[22] );
      if( ! context[40] )
        continue;
      refalrts::bracket_pointers(context[40], context[41]);
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.AssignName#1 as range 26
      // closed e.AssignResult#1 as range 30
      // closed e.Blocks#1 as range 34
      // closed e.AssignPattern#1 as range 38
      // closed e.SentenceTail#1 as range 19
      //DEBUG: e.Pattern#1: 13
      //DEBUG: e.Conditions#1: 17
      //DEBUG: e.AssignName#1: 26
      //DEBUG: e.AssignResult#1: 30
      //DEBUG: e.Blocks#1: 34
      //DEBUG: e.AssignPattern#1: 38
      //DEBUG: e.SentenceTail#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & RemoveAssigns-Sentence/4 AsIs: (/7 AsIs: (/11 AsIs: e.Pattern#1/13 AsIs: )/12 AsIs: e.Conditions#1/17 AsIs: (/23 } Tile{ AsIs: e.AssignResult#1/30 } Tile{ AsIs: )/33 AsIs: (/36 AsIs: e.Blocks#1/34 HalfReuse: (/37 AsIs: (/40 } Tile{ AsIs: e.AssignName#1/26 } Tile{ AsIs: )/41 } Tile{ Reuse: # Sentences/25 AsIs: (/28 } (/42 Tile{ AsIs: e.AssignPattern#1/38 } Tile{ AsIs: )/24 AsIs: e.SentenceTail#1/19 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/29 HalfReuse: )/32 } >/43 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::alloc_close_call(vm, context[43]);
      refalrts::reinit_open_bracket(context[37]);
      refalrts::update_ident(context[25], identifiers[ident_Sentences]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::reinit_close_bracket(context[32]);
      refalrts::push_stack( vm, context[43] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[32] );
      refalrts::link_brackets( context[36], context[29] );
      refalrts::link_brackets( context[37], context[1] );
      refalrts::link_brackets( context[28], context[8] );
      refalrts::link_brackets( context[42], context[24] );
      refalrts::link_brackets( context[40], context[41] );
      refalrts::link_brackets( context[23], context[33] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[29], context[32] );
      res = refalrts::splice_evar( res, context[24], context[1] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[42], context[42] );
      res = refalrts::splice_evar( res, context[25], context[28] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[33], context[40] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[17], context[18], context[15], context[16] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemoveAssigns-Sentence/4 (/7 (/11 e.Pattern#1/9 )/12 e.Conditions#1/5 (/19 e.Result#1/17 )/20 (/15 e.Blocks#1/13 )/16 )/8 >/1
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Pattern#1 as range 9
  // closed e.Conditions#1 as range 5
  // closed e.Result#1 as range 17
  // closed e.Blocks#1 as range 13
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.Conditions#1: 5
  //DEBUG: e.Result#1: 17
  //DEBUG: e.Blocks#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & RemoveAssigns-Sentence$2=1/7 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 } Tile{ AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#1/13 AsIs: )/16 HalfReuse: </8 HalfReuse: & RemoveAssigns-Conditions/1 } Tile{ AsIs: e.Conditions#1/5 } Tile{ HalfReuse: >/0 } >/21 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_RemoveAssignsm_Sentence_S2A1]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[1], functions[efunc_RemoveAssignsm_Conditions]);
  refalrts::reinit_close_call(context[0]);
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[19], context[1] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveAssignsm_Sentence("RemoveAssigns-Sentence", COOKIE1_, COOKIE2_, func_RemoveAssignsm_Sentence);


static refalrts::FnResult func_gen_RemoveAssignsm_Conditions_L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & RemoveAssigns-Conditions\1=1/4 (/7 e.ConditionName#2/5 )/8 (/11 e.Pattern#2/9 )/12 (/15 e.Result#3/13 )/16 >/1
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
  // closed e.ConditionName#2 as range 5
  // closed e.Pattern#2 as range 9
  // closed e.Result#3 as range 13
  //DEBUG: e.ConditionName#2: 5
  //DEBUG: e.Pattern#2: 9
  //DEBUG: e.Result#3: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Condition/4 AsIs: (/7 AsIs: e.ConditionName#2/5 AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: </12 HalfReuse: & RemoveAssigns-Result/15 AsIs: e.Result#3/13 HalfReuse: >/16 HalfReuse: )/1 } (/17 Tile{ AsIs: e.Pattern#2/9 } )/18 )/19 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Condition]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[15], functions[efunc_RemoveAssignsm_Result]);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[19] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Conditions_L1A1("RemoveAssigns-Conditions\\1=1", COOKIE1_, COOKIE2_, func_gen_RemoveAssignsm_Conditions_L1A1);


static refalrts::FnResult func_gen_RemoveAssignsm_Conditions_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & RemoveAssigns-Conditions\1/4 (/7 # Condition/9 (/12 e.ConditionName#2/10 )/13 (/16 e.Result#2/14 )/17 (/20 e.Blocks#2/18 )/21 (/24 e.Pattern#2/22 )/25 )/8 >/1
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
  context[9] = refalrts::ident_left( identifiers[ident_Condition], context[5], context[6] );
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
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[5], context[6] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ConditionName#2 as range 10
  // closed e.Result#2 as range 14
  // closed e.Blocks#2 as range 18
  // closed e.Pattern#2 as range 22
  //DEBUG: e.ConditionName#2: 10
  //DEBUG: e.Result#2: 14
  //DEBUG: e.Blocks#2: 18
  //DEBUG: e.Pattern#2: 22

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/13 {REMOVED TILE} (/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RemoveAssigns-Conditions\1=1/4 AsIs: (/7 } Tile{ AsIs: e.ConditionName#2/10 } Tile{ AsIs: )/21 AsIs: (/24 AsIs: e.Pattern#2/22 AsIs: )/25 HalfReuse: </8 HalfReuse: & RemoveAssigns-WindBlocks/1 } Tile{ AsIs: (/16 AsIs: e.Result#2/14 AsIs: )/17 } Tile{ AsIs: e.Blocks#2/18 } Tile{ HalfReuse: >/9 HalfReuse: >/12 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_gen_RemoveAssignsm_Conditions_L1A1]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[1], functions[efunc_RemoveAssignsm_WindBlocks]);
  refalrts::reinit_close_call(context[9]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[7], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[21], context[1] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Conditions_L1("RemoveAssigns-Conditions\\1", COOKIE1_, COOKIE2_, func_gen_RemoveAssignsm_Conditions_L1);


static refalrts::FnResult func_RemoveAssignsm_Conditions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & RemoveAssigns-Conditions/4 e.Conditions#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Conditions#1 as range 2
  //DEBUG: e.Conditions#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@12/4 AsIs: e.Conditions#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveAssignsm_Conditions("RemoveAssigns-Conditions", COOKIE1_, COOKIE2_, func_RemoveAssignsm_Conditions);


static refalrts::FnResult func_gen_RemoveAssignsm_WindBlocks_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & RemoveAssigns-WindBlocks\1/4 (/7 e.Result#2/5 )/8 (/11 (/15 e.BlockName#2/13 )/16 e.Body#2/9 )/12 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#2 as range 5
  // closed e.BlockName#2 as range 13
  // closed e.Body#2 as range 9
  //DEBUG: e.Result#2: 5
  //DEBUG: e.BlockName#2: 13
  //DEBUG: e.Body#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # CallBrackets/7 } Tile{ HalfReuse: (/8 HalfReuse: # Closure/11 AsIs: (/15 AsIs: e.BlockName#2/13 AsIs: )/16 AsIs: e.Body#2/9 AsIs: )/12 } Tile{ AsIs: e.Result#2/5 } )/17 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_CallBrackets]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_ident(context[11], identifiers[ident_Closure]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[4], context[17] );
  refalrts::link_brackets( context[8], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_WindBlocks_L1("RemoveAssigns-WindBlocks\\1", COOKIE1_, COOKIE2_, func_gen_RemoveAssignsm_WindBlocks_L1);


static refalrts::FnResult func_RemoveAssignsm_WindBlocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & RemoveAssigns-WindBlocks/4 (/7 e.Result#1/5 )/8 e.Blocks#1/2 >/1
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
  // closed e.Result#1 as range 5
  // closed e.Blocks#1 as range 2
  //DEBUG: e.Result#1: 5
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@1/4 AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 AsIs: e.Blocks#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveAssignsm_WindBlocks("RemoveAssigns-WindBlocks", COOKIE1_, COOKIE2_, func_RemoveAssignsm_WindBlocks);


static refalrts::FnResult func_gen_RemoveAssignsm_Result_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & RemoveAssigns-Result\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RemoveAssigns-Result\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & RemoveAssigns-Result\1/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & RemoveAssigns-Result\1/4 (/5 # Brackets/9 e.InBrackets#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 10
      //DEBUG: e.InBrackets#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </5 HalfReuse: & RemoveAssigns-Result/9 AsIs: e.InBrackets#2/10 HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_RemoveAssignsm_Result]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & RemoveAssigns-Result\1/4 (/5 # ADT-Brackets/9 (/14 e.Name#2/12 )/15 e.InBrackets#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
        continue;
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
      if( ! context[14] )
        continue;
      refalrts::bracket_pointers(context[14], context[15]);
      // closed e.Name#2 as range 12
      // closed e.InBrackets#2 as range 10
      //DEBUG: e.Name#2: 12
      //DEBUG: e.InBrackets#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # ADT-Brackets/9 AsIs: (/14 AsIs: e.Name#2/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & RemoveAssigns-Result/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::update_name(context[4], functions[efunc_RemoveAssignsm_Result]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[5], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & RemoveAssigns-Result\1/4 (/5 # CallBrackets/9 e.InBrackets#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 10
      //DEBUG: e.InBrackets#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </5 HalfReuse: & RemoveAssigns-Result/9 AsIs: e.InBrackets#2/10 HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_RemoveAssignsm_Result]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & RemoveAssigns-Result\1/4 (/5 # Closure/9 (/14 e.ClosureName#2/12 )/15 e.Sentences#2/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.ClosureName#2 as range 12
    // closed e.Sentences#2 as range 10
    //DEBUG: e.ClosureName#2: 12
    //DEBUG: e.Sentences#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Closure/9 AsIs: (/14 AsIs: e.ClosureName#2/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & RemoveAssigns-Sentences/4 } Tile{ AsIs: e.Sentences#2/10 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_RemoveAssignsm_Sentences]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemoveAssigns-Result\1/4 t.OtherTerm#2/5 >/1
  //DEBUG: t.OtherTerm#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RemoveAssigns-Result\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Result_L1("RemoveAssigns-Result\\1", COOKIE1_, COOKIE2_, func_gen_RemoveAssignsm_Result_L1);


static refalrts::FnResult func_RemoveAssignsm_Result(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & RemoveAssigns-Result/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@13/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z13]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveAssignsm_Result("RemoveAssigns-Result", COOKIE1_, COOKIE2_, func_RemoveAssignsm_Result);


static refalrts::FnResult func_gen_Passm_FlatNestedFuncs_L1S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Pass-FlatNestedFuncs\1$1\1/4 t.Nf#4/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Nf#4: 5
  //5: t.Nf#4
  //10: t.Nf#4

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Passm_FlatNestedFuncs_L1S1L1C1]);
  refalrts::copy_stvar(vm, context[10], context[5]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </7 & Pass-FlatNestedFuncs\1$1\1?1/11 (/14 # Function/16 s.NfScopeClass#5/17 (/20 e.NfName#5/18 )/21 e.NfBody#5/12 )/15 >/8
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[9], context[10] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left( identifiers[ident_Function], context[12], context[13] );
    if( ! context[16] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[12], context[13] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[12], context[13] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.NfName#5 as range 18
    // closed e.NfBody#5 as range 12
    //DEBUG: t.Nf#4: 5
    //DEBUG: s.NfScopeClass#5: 17
    //DEBUG: e.NfName#5: 18
    //DEBUG: e.NfBody#5: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Pass-FlatNestedFuncs\1$1\1/4 {REMOVED TILE} </7 & Pass-FlatNestedFuncs\1$1\1?1/11 (/14 # Function/16 s.NfScopeClass#5/17 {REMOVED TILE} e.NfBody#5/12 )/15 >/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # Drive/20 AsIs: e.NfName#5/18 AsIs: )/21 } Tile{ AsIs: t.Nf#4/5 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[20], identifiers[ident_Drive]);
    refalrts::link_brackets( context[0], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_gen_Passm_FlatNestedFuncs_L1S1L1("Pass-FlatNestedFuncs\\1$1\\1", COOKIE1_, COOKIE2_, func_gen_Passm_FlatNestedFuncs_L1S1L1);


static refalrts::FnResult func_gen_Passm_FlatNestedFuncs_L1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Pass-FlatNestedFuncs\1$1=1/4 s.ScopeClass#2/5 (/8 e.Name#2/6 )/9 (/12 e.NestedFuncs#3/10 )/13 e.Body#3/2 >/1
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
  // closed e.Name#2 as range 6
  // closed e.NestedFuncs#3 as range 10
  // closed e.Body#3 as range 2
  //DEBUG: s.ScopeClass#2: 5
  //DEBUG: e.Name#2: 6
  //DEBUG: e.NestedFuncs#3: 10
  //DEBUG: e.Body#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Map@14/12 AsIs: e.NestedFuncs#3/10 HalfReuse: >/13 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#2/5 AsIs: (/8 AsIs: e.Name#2/6 AsIs: )/9 } Tile{ AsIs: e.Body#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::reinit_name(context[12], functions[efunc_gen_Map_Z14]);
  refalrts::reinit_close_call(context[13]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Function]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_FlatNestedFuncs_L1S1A1("Pass-FlatNestedFuncs\\1$1=1", COOKIE1_, COOKIE2_, func_gen_Passm_FlatNestedFuncs_L1S1A1);


static refalrts::FnResult func_gen_Passm_FlatNestedFuncs_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Pass-FlatNestedFuncs\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pass-FlatNestedFuncs\1/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Pass-FlatNestedFuncs\1/4 s.MarkupContext#1/5 (/6 # Function/10 s.ScopeClass#2/11 (/14 e.Name#2/12 )/15 e.Body#2/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = refalrts::ident_left( identifiers[ident_Function], context[8], context[9] );
    if( ! context[10] )
      continue;
    if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[8], context[9] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Name#2 as range 12
    // closed e.Body#2 as range 8
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: s.ScopeClass#2: 11
    //DEBUG: e.Name#2: 12
    //DEBUG: e.Body#2: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </6 HalfReuse: & Pass-FlatNestedFuncs\1$1=1/10 AsIs: s.ScopeClass#2/11 AsIs: (/14 AsIs: e.Name#2/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ExtractNested/4 AsIs: s.MarkupContext#1/5 } Tile{ AsIs: e.Body#2/8 } Tile{ HalfReuse: >/7 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[6]);
    refalrts::reinit_name(context[10], functions[efunc_gen_Passm_FlatNestedFuncs_L1S1A1]);
    refalrts::update_name(context[4], functions[efunc_ExtractNested]);
    refalrts::reinit_close_call(context[7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[6], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-FlatNestedFuncs\1/4 s.MarkupContext#1/5 t.OtherProgramElement#2/6 >/1
  //DEBUG: t.OtherProgramElement#2: 6
  //DEBUG: s.MarkupContext#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-FlatNestedFuncs\1/4 s.MarkupContext#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_FlatNestedFuncs_L1("Pass-FlatNestedFuncs\\1", COOKIE1_, COOKIE2_, func_gen_Passm_FlatNestedFuncs_L1);


static refalrts::FnResult func_Passm_FlatNestedFuncs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pass-FlatNestedFuncs/4 s.MarkupContext#1/5 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@15/4 AsIs: s.MarkupContext#1/5 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z15]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_FlatNestedFuncs("Pass-FlatNestedFuncs", COOKIE1_, COOKIE2_, func_Passm_FlatNestedFuncs);


static refalrts::FnResult func_gen_ExtractNested_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ExtractNested=1/4 (/7 )/8 (/11 e.NestedFuncs#2/9 )/12 e.Sentences#2/2 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedFuncs#2 as range 9
  // closed e.Sentences#2 as range 2
  //DEBUG: e.NestedFuncs#2: 9
  //DEBUG: e.Sentences#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractNested=1/4 (/7 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 } Tile{ AsIs: e.Sentences#2/2 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNested_A1("ExtractNested=1", COOKIE1_, COOKIE2_, func_gen_ExtractNested_A1);


static refalrts::FnResult func_ExtractNested(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ExtractNested/4 s.MarkupContext#1/5 e.Sentences#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNested=1/4 } </6 & ExtractNestedRec/7 Tile{ AsIs: s.MarkupContext#1/5 } (/8 )/9 Tile{ AsIs: e.Sentences#1/2 } >/10 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_ExtractNestedRec]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractNested_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[6] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNested("ExtractNested", COOKIE1_, COOKIE2_, func_ExtractNested);


static refalrts::FnResult func_gen_ExtractNestedRec_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNestedRec$1=1/4 (/7 (/11 e.NestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 )/8 e.Sentences#2/2 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedFuncs#2 as range 9
  // closed e.BorrowedVars#2 as range 13
  // closed e.Sentences#2 as range 2
  //DEBUG: e.NestedFuncs#2: 9
  //DEBUG: e.BorrowedVars#2: 13
  //DEBUG: e.Sentences#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & ExtractNestedRec$1=1/4 {REMOVED TILE} {REMOVED TILE} )/16 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#2/13 } Tile{ HalfReuse: )/7 AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 HalfReuse: # Sentences/15 } Tile{ AsIs: e.Sentences#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_ident(context[15], identifiers[ident_Sentences]);
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedRec_S1A1("ExtractNestedRec$1=1", COOKIE1_, COOKIE2_, func_gen_ExtractNestedRec_S1A1);


static refalrts::FnResult func_ExtractNestedRec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & ExtractNestedRec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractNestedRec/4 s.new#1/5 (/8 e.new#2/6 )/9 s.new#3/10 e.new#4/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & ExtractNestedRec/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/11 )/9 # Sentences/10 e.Sentences#1/13 >/1
    context[11] = context[6];
    context[12] = context[7];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[10] ) )
      continue;
    // closed e.ScopeVars#1 as range 11
    // closed e.Sentences#1 as range 13
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.ScopeVars#1: 11
    //DEBUG: e.Sentences#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNestedRec$1=1/4 } </15 & MapAccum/16 Tile{ AsIs: (/8 } & ExtractNested-Sentence/17 Tile{ AsIs: s.MarkupContext#1/5 } Tile{ AsIs: e.ScopeVars#1/11 } )/18 (/19 (/20 )/21 (/22 Tile{ AsIs: )/9 HalfReuse: )/10 AsIs: e.Sentences#1/13 AsIs: >/1 } >/23 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_MapAccum]);
    refalrts::alloc_name(vm, context[17], functions[efunc_ExtractNestedm_Sentence]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedRec_S1A1]);
    refalrts::reinit_close_bracket(context[10]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[19], context[10] );
    refalrts::link_brackets( context[22], context[9] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[8], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[18], context[22] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractNestedRec/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/6 )/9 # NativeBody/10 t.SrcPos#1/11 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 6
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.ScopeVars#1: 6
  //DEBUG: t.SrcPos#1: 11
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.MarkupContext#1/5 {REMOVED TILE} e.ScopeVars#1/6 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 } Tile{ AsIs: (/8 } Tile{ AsIs: )/9 AsIs: # NativeBody/10 AsIs: t.SrcPos#1/11 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedRec("ExtractNestedRec", COOKIE1_, COOKIE2_, func_ExtractNestedRec);


static refalrts::FnResult func_gen_ExtractNestedm_Sentence_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & ExtractNested-Sentence=3/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.ConditionsNestedFuncs#3/9 )/12 (/15 e.Pattern#1/13 )/16 (/19 e.Conditions#3/17 )/20 (/23 e.ResultNestedFuncs#4/21 )/24 (/27 e.BorrowedVars#4/25 )/28 e.Result#4/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.ConditionsNestedFuncs#3 as range 9
  // closed e.Pattern#1 as range 13
  // closed e.Conditions#3 as range 17
  // closed e.ResultNestedFuncs#4 as range 21
  // closed e.BorrowedVars#4 as range 25
  // closed e.Result#4 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.ConditionsNestedFuncs#3: 9
  //DEBUG: e.Pattern#1: 13
  //DEBUG: e.Conditions#3: 17
  //DEBUG: e.ResultNestedFuncs#4: 21
  //DEBUG: e.BorrowedVars#4: 25
  //DEBUG: e.Result#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.ConditionsNestedFuncs#3/9 } Tile{ AsIs: e.ResultNestedFuncs#4/21 } Tile{ AsIs: )/24 AsIs: (/27 AsIs: e.BorrowedVars#4/25 AsIs: )/28 } Tile{ AsIs: )/20 } Tile{ HalfReuse: (/12 AsIs: (/15 AsIs: e.Pattern#1/13 AsIs: )/16 } Tile{ AsIs: e.Conditions#3/17 } Tile{ AsIs: (/23 } Tile{ AsIs: e.Result#4/2 } Tile{ AsIs: )/8 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[23], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[0], context[20] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[4], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[24], context[28] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Sentence_A3("ExtractNested-Sentence=3", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Sentence_A3);


static refalrts::FnResult func_gen_ExtractNestedm_Sentence_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & ExtractNested-Sentence=2/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.Pattern#1/9 )/12 s.MarkupContext#1/13 (/16 e.ScopeVars#1/14 )/17 (/20 e.Result#1/18 )/21 (/24 e.ConditionsNestedFuncs#3/22 )/25 (/28 e.BorrowedVars#3/26 )/29 (/32 e.LocalVars#3/30 )/33 e.Conditions#3/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.Pattern#1 as range 9
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
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  // closed e.ScopeVars#1 as range 14
  // closed e.Result#1 as range 18
  // closed e.ConditionsNestedFuncs#3 as range 22
  // closed e.BorrowedVars#3 as range 26
  // closed e.LocalVars#3 as range 30
  // closed e.Conditions#3 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.Pattern#1: 9
  //DEBUG: s.MarkupContext#1: 13
  //DEBUG: e.ScopeVars#1: 14
  //DEBUG: e.Result#1: 18
  //DEBUG: e.ConditionsNestedFuncs#3: 22
  //DEBUG: e.BorrowedVars#3: 26
  //DEBUG: e.LocalVars#3: 30
  //DEBUG: e.Conditions#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.MarkupContext#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNested-Sentence=3/4 AsIs: (/7 AsIs: e.NestedFuncs#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ConditionsNestedFuncs#3/22 } Tile{ AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.Pattern#1/9 } Tile{ AsIs: )/17 AsIs: (/20 } Tile{ AsIs: e.Conditions#3/2 } Tile{ AsIs: )/12 } </34 & ExtractNested-Result/35 Tile{ HalfReuse: s.MarkupContext1 #13/25 AsIs: (/28 AsIs: e.BorrowedVars#3/26 AsIs: )/29 AsIs: (/32 } Tile{ AsIs: e.ScopeVars#1/14 } Tile{ AsIs: )/33 } Tile{ AsIs: (/16 } Tile{ AsIs: e.LocalVars#3/30 } )/36 Tile{ AsIs: e.Result#1/18 } >/37 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[34]);
  refalrts::alloc_name(vm, context[35], functions[efunc_ExtractNestedm_Result]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedm_Sentence_A3]);
  refalrts::reinit_svar( context[25], context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[34] );
  refalrts::link_brackets( context[16], context[36] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[20], context[12] );
  refalrts::link_brackets( context[24], context[17] );
  refalrts::link_brackets( context[11], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[25], context[32] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[21], context[24] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  refalrts::splice_to_freelist_open( vm, context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Sentence_A2("ExtractNested-Sentence=2", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Sentence_A2);


static refalrts::FnResult func_gen_ExtractNestedm_Sentence_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & ExtractNested-Sentence=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.Pattern#1/9 )/12 s.MarkupContext#1/13 (/16 e.ScopeVars#1/14 )/17 (/20 e.Result#1/18 )/21 (/24 e.Conditions#1/22 )/25 (/28 e.BorrowedVars#2/26 )/29 e.LocalVars#2/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.Pattern#1 as range 9
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
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.ScopeVars#1 as range 14
  // closed e.Result#1 as range 18
  // closed e.Conditions#1 as range 22
  // closed e.BorrowedVars#2 as range 26
  // closed e.LocalVars#2 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.Pattern#1: 9
  //DEBUG: s.MarkupContext#1: 13
  //DEBUG: e.ScopeVars#1: 14
  //DEBUG: e.Result#1: 18
  //DEBUG: e.Conditions#1: 22
  //DEBUG: e.BorrowedVars#2: 26
  //DEBUG: e.LocalVars#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNested-Sentence=2/4 AsIs: (/7 AsIs: e.NestedFuncs#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: s.MarkupContext#1/13 AsIs: (/16 AsIs: e.ScopeVars#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Result#1/18 AsIs: )/21 HalfReuse: </24 } & ExtractNested-Conditions/30 Tile{ HalfReuse: s.MarkupContext1 #13/25 AsIs: (/28 AsIs: e.BorrowedVars#2/26 AsIs: )/29 } (/31 e.ScopeVars#1/14/32 )/34 (/35 Tile{ AsIs: e.LocalVars#2/2 } )/36 Tile{ AsIs: e.Conditions#1/22 } >/37 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[30], functions[efunc_ExtractNestedm_Conditions]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::copy_evar(vm, context[32], context[33], context[14], context[15]);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedm_Sentence_A2]);
  refalrts::reinit_open_call(context[24]);
  refalrts::reinit_svar( context[25], context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[31], context[34] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[31], context[35] );
  res = refalrts::splice_evar( res, context[25], context[29] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Sentence_A1("ExtractNested-Sentence=1", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Sentence_A1);


static refalrts::FnResult func_ExtractNestedm_Sentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & ExtractNested-Sentence/4 s.MarkupContext#1/29 e.ScopeVars#1/2 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 (/7 (/11 e.Pattern#1/9 )/12 e.Conditions#1/5 (/27 e.Result#1/25 )/28 )/8 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
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
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_right( context[25], context[26], context[5], context[6] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedFuncs#1 as range 17
  // closed e.BorrowedVars#1 as range 21
  // closed e.Pattern#1 as range 9
  // closed e.Conditions#1 as range 5
  // closed e.Result#1 as range 25
  if( ! refalrts::svar_left( context[29], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 2
  //DEBUG: e.NestedFuncs#1: 17
  //DEBUG: e.BorrowedVars#1: 21
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.Conditions#1: 5
  //DEBUG: e.Result#1: 25
  //DEBUG: s.MarkupContext#1: 29
  //DEBUG: e.ScopeVars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ExtractNested-Sentence=1/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.Pattern#1/9 } Tile{ HalfReuse: )/4 AsIs: s.MarkupContext#1/29 } (/30 Tile{ AsIs: e.ScopeVars#1/2 } Tile{ AsIs: )/12 } Tile{ AsIs: (/27 AsIs: e.Result#1/25 AsIs: )/28 HalfReuse: (/8 } Tile{ AsIs: e.Conditions#1/5 } Tile{ AsIs: )/24 HalfReuse: </16 HalfReuse: & ExtractNested-Pattern/7 AsIs: (/11 } e.ScopeVars#1/2/31 )/33 (/34 Tile{ AsIs: e.BorrowedVars#1/21 } )/35 e.Pattern#1/9/36 >/38 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::copy_evar(vm, context[31], context[32], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::copy_evar(vm, context[36], context[37], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::reinit_name(context[15], functions[efunc_gen_ExtractNestedm_Sentence_A1]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_open_call(context[16]);
  refalrts::reinit_name(context[7], functions[efunc_ExtractNestedm_Pattern]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[34], context[35] );
  refalrts::link_brackets( context[11], context[33] );
  refalrts::link_brackets( context[8], context[24] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[30], context[12] );
  refalrts::link_brackets( context[23], context[4] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[35], context[38] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[24], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[27], context[8] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[4], context[29] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Sentence("ExtractNested-Sentence", COOKIE1_, COOKIE2_, func_ExtractNestedm_Sentence);


static refalrts::FnResult func_gen_ExtractNestedm_Conditions_S1A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & ExtractNested-Conditions$1=4/4 (/7 e.ResultNestedFuncs#2/5 )/8 (/11 e.ConditionName#1/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.Pattern#1/17 )/20 (/23 e.ConditionsNestedFuncs#5/21 )/24 (/27 e.BorrowedVars#5/25 )/28 (/31 e.LocalVars#5/29 )/32 e.Conditions#5/2 >/1
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
  // closed e.ResultNestedFuncs#2 as range 5
  // closed e.ConditionName#1 as range 9
  // closed e.Result#2 as range 13
  // closed e.Pattern#1 as range 17
  // closed e.ConditionsNestedFuncs#5 as range 21
  // closed e.BorrowedVars#5 as range 25
  // closed e.LocalVars#5 as range 29
  // closed e.Conditions#5 as range 2
  //DEBUG: e.ResultNestedFuncs#2: 5
  //DEBUG: e.ConditionName#1: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: e.Pattern#1: 17
  //DEBUG: e.ConditionsNestedFuncs#5: 21
  //DEBUG: e.BorrowedVars#5: 25
  //DEBUG: e.LocalVars#5: 29
  //DEBUG: e.Conditions#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & ExtractNested-Conditions$1=4/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.ResultNestedFuncs#2/5 } Tile{ AsIs: e.ConditionsNestedFuncs#5/21 } Tile{ AsIs: )/24 AsIs: (/27 AsIs: e.BorrowedVars#5/25 AsIs: )/28 AsIs: (/31 AsIs: e.LocalVars#5/29 AsIs: )/32 } Tile{ AsIs: (/7 } Tile{ HalfReuse: # Condition/8 AsIs: (/11 AsIs: e.ConditionName#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 HalfReuse: )/23 } Tile{ AsIs: e.Conditions#5/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[8], identifiers[ident_Condition]);
  refalrts::reinit_close_bracket(context[23]);
  refalrts::link_brackets( context[7], context[23] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[0], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[23] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[24], context[32] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Conditions_S1A4("ExtractNested-Conditions$1=4", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Conditions_S1A4);


static refalrts::FnResult func_gen_ExtractNestedm_Conditions_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & ExtractNested-Conditions$1=3/4 (/7 e.ResultNestedFuncs#2/5 )/8 (/11 e.ConditionName#1/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.Pattern#1/17 )/20 s.MarkupContext#1/21 (/24 e.BorrowedVars#3/22 )/25 (/28 e.ScopeVars#1/26 )/29 (/32 e.Conditions#1/30 )/33 e.LocalVars#4/2 >/1
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
  // closed e.ResultNestedFuncs#2 as range 5
  // closed e.ConditionName#1 as range 9
  // closed e.Result#2 as range 13
  // closed e.Pattern#1 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  // closed e.BorrowedVars#3 as range 22
  // closed e.ScopeVars#1 as range 26
  // closed e.Conditions#1 as range 30
  // closed e.LocalVars#4 as range 2
  //DEBUG: e.ResultNestedFuncs#2: 5
  //DEBUG: e.ConditionName#1: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: e.Pattern#1: 17
  //DEBUG: s.MarkupContext#1: 21
  //DEBUG: e.BorrowedVars#3: 22
  //DEBUG: e.ScopeVars#1: 26
  //DEBUG: e.Conditions#1: 30
  //DEBUG: e.LocalVars#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNested-Conditions$1=4/4 AsIs: (/7 AsIs: e.ResultNestedFuncs#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.ConditionName#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 } </34 & ExtractNested-Conditions/35 Tile{ AsIs: s.MarkupContext#1/21 AsIs: (/24 AsIs: e.BorrowedVars#3/22 AsIs: )/25 AsIs: (/28 AsIs: e.ScopeVars#1/26 AsIs: )/29 AsIs: (/32 } Tile{ AsIs: e.LocalVars#4/2 } Tile{ AsIs: )/33 } Tile{ AsIs: e.Conditions#1/30 } >/36 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[34]);
  refalrts::alloc_name(vm, context[35], functions[efunc_ExtractNestedm_Conditions]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedm_Conditions_S1A4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[34] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[32] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Conditions_S1A3("ExtractNested-Conditions$1=3", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Conditions_S1A3);


static refalrts::FnResult func_gen_ExtractNestedm_Conditions_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & ExtractNested-Conditions$1=2/4 (/7 e.ResultNestedFuncs#2/5 )/8 (/11 e.ConditionName#1/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.Pattern#1/17 )/20 s.MarkupContext#1/21 (/24 e.ScopeVars#1/22 )/25 (/28 e.Conditions#1/26 )/29 (/32 e.LocalVars#1/30 )/33 (/36 e.BorrowedVars#3/34 )/37 e.PatternLocalVars#3/2 >/1
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
  // closed e.ResultNestedFuncs#2 as range 5
  // closed e.ConditionName#1 as range 9
  // closed e.Result#2 as range 13
  // closed e.Pattern#1 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  context[34] = 0;
  context[35] = 0;
  context[36] = refalrts::brackets_left( context[34], context[35], context[2], context[3] );
  if( ! context[36] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[36], context[37]);
  // closed e.ScopeVars#1 as range 22
  // closed e.Conditions#1 as range 26
  // closed e.LocalVars#1 as range 30
  // closed e.BorrowedVars#3 as range 34
  // closed e.PatternLocalVars#3 as range 2
  //DEBUG: e.ResultNestedFuncs#2: 5
  //DEBUG: e.ConditionName#1: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: e.Pattern#1: 17
  //DEBUG: s.MarkupContext#1: 21
  //DEBUG: e.ScopeVars#1: 22
  //DEBUG: e.Conditions#1: 26
  //DEBUG: e.LocalVars#1: 30
  //DEBUG: e.BorrowedVars#3: 34
  //DEBUG: e.PatternLocalVars#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNested-Conditions$1=3/4 AsIs: (/7 AsIs: e.ResultNestedFuncs#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.ConditionName#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 AsIs: s.MarkupContext#1/21 AsIs: (/24 } Tile{ AsIs: e.BorrowedVars#3/34 } Tile{ AsIs: )/33 AsIs: (/36 } Tile{ AsIs: e.ScopeVars#1/22 } Tile{ AsIs: )/25 AsIs: (/28 AsIs: e.Conditions#1/26 AsIs: )/29 HalfReuse: </32 } Tile{ HalfReuse: & Uniq/37 } Tile{ AsIs: e.LocalVars#1/30 } Tile{ AsIs: e.PatternLocalVars#3/2 } >/38 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedm_Conditions_S1A3]);
  refalrts::reinit_open_call(context[32]);
  refalrts::reinit_name(context[37], functions[efunc_Uniq]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[32] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[36], context[25] );
  refalrts::link_brackets( context[24], context[33] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[25], context[32] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[33], context[36] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Conditions_S1A2("ExtractNested-Conditions$1=2", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Conditions_S1A2);


static refalrts::FnResult func_gen_ExtractNestedm_Conditions_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & ExtractNested-Conditions$1=1/4 (/7 e.ConditionName#1/5 )/8 (/11 e.Pattern#1/9 )/12 s.MarkupContext#1/13 (/16 e.ScopeVars#1/14 )/17 (/20 e.Conditions#1/18 )/21 (/24 e.LocalVars#1/22 )/25 (/28 e.ResultNestedFuncs#2/26 )/29 (/32 e.BorrowedVars#2/30 )/33 e.Result#2/2 >/1
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
  // closed e.ConditionName#1 as range 5
  // closed e.Pattern#1 as range 9
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
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  // closed e.ScopeVars#1 as range 14
  // closed e.Conditions#1 as range 18
  // closed e.LocalVars#1 as range 22
  // closed e.ResultNestedFuncs#2 as range 26
  // closed e.BorrowedVars#2 as range 30
  // closed e.Result#2 as range 2
  //DEBUG: e.ConditionName#1: 5
  //DEBUG: e.Pattern#1: 9
  //DEBUG: s.MarkupContext#1: 13
  //DEBUG: e.ScopeVars#1: 14
  //DEBUG: e.Conditions#1: 18
  //DEBUG: e.LocalVars#1: 22
  //DEBUG: e.ResultNestedFuncs#2: 26
  //DEBUG: e.BorrowedVars#2: 30
  //DEBUG: e.Result#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNested-Conditions$1=2/4 AsIs: (/7 } Tile{ AsIs: e.ResultNestedFuncs#2/26 } )/34 (/35 Tile{ AsIs: e.ConditionName#1/5 } )/36 (/37 Tile{ AsIs: e.Result#2/2 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: s.MarkupContext#1/13 AsIs: (/16 AsIs: e.ScopeVars#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Conditions#1/18 AsIs: )/21 AsIs: (/24 AsIs: e.LocalVars#1/22 AsIs: )/25 HalfReuse: </28 } & ExtractNested-Pattern/38 (/39 e.ScopeVars#1/14/40 Tile{ AsIs: )/29 AsIs: (/32 AsIs: e.BorrowedVars#2/30 AsIs: )/33 } e.Pattern#1/9/42 >/44 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_name(vm, context[38], functions[efunc_ExtractNestedm_Pattern]);
  refalrts::alloc_open_bracket(vm, context[39]);
  refalrts::copy_evar(vm, context[40], context[41], context[14], context[15]);
  refalrts::copy_evar(vm, context[42], context[43], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[44]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedm_Conditions_S1A2]);
  refalrts::reinit_open_call(context[28]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[44] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[39], context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[37], context[8] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[7], context[34] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[44], context[44] );
  res = refalrts::splice_evar( res, context[42], context[43] );
  res = refalrts::splice_evar( res, context[29], context[33] );
  res = refalrts::splice_evar( res, context[40], context[41] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[8], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Conditions_S1A1("ExtractNested-Conditions$1=1", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Conditions_S1A1);


static refalrts::FnResult func_ExtractNestedm_Conditions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & ExtractNested-Conditions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractNested-Conditions/4 s.new#1/5 (/8 e.new#2/6 )/9 (/12 e.new#3/10 )/13 (/16 e.new#4/14 )/17 e.new#5/2 >/1
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
  // closed e.new#2 as range 6
  // closed e.new#3 as range 10
  // closed e.new#4 as range 14
  // closed e.new#5 as range 2
  do {
    // </0 & ExtractNested-Conditions/4 s.MarkupContext#1/5 (/8 e.BorrowedVars#1/18 )/9 (/12 e.ScopeVars#1/20 )/13 (/16 e.LocalVars#1/22 )/17 (/28 # Condition/30 (/33 e.ConditionName#1/31 )/34 (/37 e.Result#1/35 )/38 (/41 e.Pattern#1/39 )/42 )/29 e.Conditions#1/24 >/1
    context[18] = context[6];
    context[19] = context[7];
    context[20] = context[10];
    context[21] = context[11];
    context[22] = context[14];
    context[23] = context[15];
    context[24] = context[2];
    context[25] = context[3];
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    context[30] = refalrts::ident_left( identifiers[ident_Condition], context[26], context[27] );
    if( ! context[30] )
      continue;
    context[31] = 0;
    context[32] = 0;
    context[33] = refalrts::brackets_left( context[31], context[32], context[26], context[27] );
    if( ! context[33] )
      continue;
    refalrts::bracket_pointers(context[33], context[34]);
    context[35] = 0;
    context[36] = 0;
    context[37] = refalrts::brackets_left( context[35], context[36], context[26], context[27] );
    if( ! context[37] )
      continue;
    refalrts::bracket_pointers(context[37], context[38]);
    context[39] = 0;
    context[40] = 0;
    context[41] = refalrts::brackets_left( context[39], context[40], context[26], context[27] );
    if( ! context[41] )
      continue;
    refalrts::bracket_pointers(context[41], context[42]);
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    // closed e.BorrowedVars#1 as range 18
    // closed e.ScopeVars#1 as range 20
    // closed e.LocalVars#1 as range 22
    // closed e.ConditionName#1 as range 31
    // closed e.Result#1 as range 35
    // closed e.Pattern#1 as range 39
    // closed e.Conditions#1 as range 24
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.BorrowedVars#1: 18
    //DEBUG: e.ScopeVars#1: 20
    //DEBUG: e.LocalVars#1: 22
    //DEBUG: e.ConditionName#1: 31
    //DEBUG: e.Result#1: 35
    //DEBUG: e.Pattern#1: 39
    //DEBUG: e.Conditions#1: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </28 HalfReuse: & ExtractNested-Conditions$1=1/30 AsIs: (/33 AsIs: e.ConditionName#1/31 AsIs: )/34 AsIs: (/37 } Tile{ AsIs: e.Pattern#1/39 } )/43 Tile{ HalfReuse: s.MarkupContext1 #5/38 AsIs: (/41 } e.ScopeVars#1/20/44 Tile{ AsIs: )/42 HalfReuse: (/29 AsIs: e.Conditions#1/24 HalfReuse: )/1 } (/46 e.LocalVars#1/22/47 )/49 Tile{ AsIs: </0 Reuse: & ExtractNested-Result/4 AsIs: s.MarkupContext#1/5 AsIs: (/8 AsIs: e.BorrowedVars#1/18 AsIs: )/9 AsIs: (/12 AsIs: e.ScopeVars#1/20 AsIs: )/13 AsIs: (/16 AsIs: e.LocalVars#1/22 AsIs: )/17 } Tile{ AsIs: e.Result#1/35 } >/50 >/51 Tile{ ]] }
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::copy_evar(vm, context[44], context[45], context[20], context[21]);
    refalrts::alloc_open_bracket(vm, context[46]);
    refalrts::copy_evar(vm, context[47], context[48], context[22], context[23]);
    refalrts::alloc_close_bracket(vm, context[49]);
    refalrts::alloc_close_call(vm, context[50]);
    refalrts::alloc_close_call(vm, context[51]);
    refalrts::reinit_open_call(context[28]);
    refalrts::reinit_name(context[30], functions[efunc_gen_ExtractNestedm_Conditions_S1A1]);
    refalrts::reinit_svar( context[38], context[5] );
    refalrts::reinit_open_bracket(context[29]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_ExtractNestedm_Result]);
    refalrts::push_stack( vm, context[51] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[50] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[46], context[49] );
    refalrts::link_brackets( context[29], context[1] );
    refalrts::link_brackets( context[41], context[42] );
    refalrts::link_brackets( context[37], context[43] );
    refalrts::link_brackets( context[33], context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[50], context[51] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[0], context[17] );
    res = refalrts::splice_evar( res, context[46], context[49] );
    res = refalrts::splice_evar( res, context[42], context[1] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[38], context[41] );
    res = refalrts::splice_evar( res, context[43], context[43] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[28], context[37] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractNested-Conditions/4 s.MarkupContext#1/5 (/8 e.BorrowedVars#1/6 )/9 (/12 e.ScopeVars#1/10 )/13 (/16 e.LocalVars#1/14 )/17 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.BorrowedVars#1 as range 6
  // closed e.ScopeVars#1 as range 10
  // closed e.LocalVars#1 as range 14
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.BorrowedVars#1: 6
  //DEBUG: e.ScopeVars#1: 10
  //DEBUG: e.LocalVars#1: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & ExtractNested-Conditions/4 s.MarkupContext#1/5 (/8 {REMOVED TILE} {REMOVED TILE} e.ScopeVars#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.BorrowedVars#1/6 } Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.LocalVars#1/14 AsIs: )/17 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Conditions("ExtractNested-Conditions", COOKIE1_, COOKIE2_, func_ExtractNestedm_Conditions);


static refalrts::FnResult func_ExtractNestedm_Pattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ExtractNested-Pattern/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BorrowedVars#1/9 )/12 e.Pattern#1/2 >/1
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
  // closed e.ScopeVars#1 as range 5
  // closed e.BorrowedVars#1 as range 9
  // closed e.Pattern#1 as range 2
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.BorrowedVars#1: 9
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@3/4 } Tile{ AsIs: e.ScopeVars#1/5 } Tile{ AsIs: (/11 AsIs: e.BorrowedVars#1/9 AsIs: )/12 } Tile{ AsIs: (/7 } </13 & Uniq/14 </15 & ExtractAllVars/16 Tile{ AsIs: e.Pattern#1/2 } >/17 >/18 Tile{ AsIs: )/8 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Uniq]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_ExtractAllVars]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Pattern("ExtractNested-Pattern", COOKIE1_, COOKIE2_, func_ExtractNestedm_Pattern);


static refalrts::FnResult func_ExtractAllVars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ExtractAllVars/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ExtractAllVars/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & ExtractAllVars/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#4 as range 11
      do {
        // </0 & ExtractAllVars/4 (/7 # TkVariable/13 s.Mode#1/18 e.Index#1/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[13] ) )
          continue;
        // closed e.Tail#1 as range 16
        if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
          continue;
        // closed e.Index#1 as range 14
        //DEBUG: e.Tail#1: 16
        //DEBUG: s.Mode#1: 18
        //DEBUG: e.Index#1: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 AsIs: s.Mode#1/18 AsIs: e.Index#1/14 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[13]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[13], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ExtractAllVars/4 (/7 # Brackets/13 e.Inner#1/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[13] ) )
          continue;
        // closed e.Inner#1 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.Inner#1: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/7 # Brackets/13 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Inner#1/14 } Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ExtractAllVars/4 (/7 # ADT-Brackets/13 e.Inner#1/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[13] ) )
        continue;
      // closed e.Inner#1 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.Inner#1: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # ADT-Brackets/13 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Inner#1/14 } Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAllVars/4 t.OtherTerm#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.OtherTerm#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.OtherTerm#1/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAllVars/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractAllVars/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAllVars("ExtractAllVars", COOKIE1_, COOKIE2_, func_ExtractAllVars);


static refalrts::FnResult func_Uniq(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Uniq/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Uniq/4 e.Uniqs#1/7 t.Repeated#1/11 e.NotScanned-M#1/13 t.Repeated#1/17 e.NotScanned-E#1/15 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[15] = context[9];
        context[16] = context[10];
        context[18] = refalrts::repeated_stvar_left( vm, context[17], context[11], context[15], context[16] );
        if( ! context[18] )
          continue;
        // closed e.NotScanned-E#1 as range 15
        //DEBUG: e.Uniqs#1: 7
        //DEBUG: t.Repeated#1: 11
        //DEBUG: e.NotScanned-M#1: 13
        //DEBUG: e.NotScanned-E#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Repeated#1/11 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/7 } Tile{ AsIs: </0 AsIs: & Uniq/4 } Tile{ AsIs: e.NotScanned-M#1/13 } Tile{ AsIs: t.Repeated#1/17 AsIs: e.NotScanned-E#1/15 AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[17];
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Uniq/4 e.Uniqs#1/2 >/1
  // closed e.Uniqs#1 as range 2
  //DEBUG: e.Uniqs#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Uniq/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Uniq("Uniq", COOKIE1_, COOKIE2_, func_Uniq);


static refalrts::FnResult func_UpdateBorrowedVars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & UpdateBorrowedVars/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & UpdateBorrowedVars/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 s.new#3/13 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 9
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  do {
    // </0 & UpdateBorrowedVars/4 e.ScopeVars#1/14 (/11 e.BorrowedVars-B#1/20 (/26 s.Mode#1/28 e.Index#1/29 )/27 e.BorrowedVars-E#1/22 )/12 (/7 s.Mode#1/13 e.Index#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.ScopeVars#1 as range 14
    // closed e.Index#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[16];
      context[23] = context[17];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      if( ! refalrts::repeated_stvar_left( vm, context[28], context[13], context[24], context[25] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[29], context[30], context[18], context[19], context[24], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      // closed e.BorrowedVars-E#1 as range 22
      //DEBUG: s.Mode#1: 13
      //DEBUG: e.ScopeVars#1: 14
      //DEBUG: e.Index#1: 18
      //DEBUG: e.BorrowedVars-B#1: 20
      //DEBUG: e.BorrowedVars-E#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & UpdateBorrowedVars/4 e.ScopeVars#1/14 {REMOVED TILE} (/7 s.Mode#1/13 e.Index#1/18 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars-B#1/20 AsIs: (/26 AsIs: s.Mode#1/28 AsIs: e.Index#1/29 AsIs: )/27 AsIs: e.BorrowedVars-E#1/22 AsIs: )/12 } Tile{ ]] }
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[16], context[17] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & UpdateBorrowedVars/4 e.ScopeVars-B#1/20 (/26 s.Mode#1/28 e.Index#1/29 )/27 e.ScopeVars-E#1/22 (/11 e.BorrowedVars#1/16 )/12 (/7 s.Mode#1/13 e.Index#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.BorrowedVars#1 as range 16
    // closed e.Index#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      if( ! refalrts::repeated_stvar_left( vm, context[28], context[13], context[24], context[25] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[29], context[30], context[18], context[19], context[24], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      // closed e.ScopeVars-E#1 as range 22
      //DEBUG: s.Mode#1: 13
      //DEBUG: e.BorrowedVars#1: 16
      //DEBUG: e.Index#1: 18
      //DEBUG: e.ScopeVars-B#1: 20
      //DEBUG: e.ScopeVars-E#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & UpdateBorrowedVars/4 e.ScopeVars-B#1/20 (/26 s.Mode#1/28 e.Index#1/29 )/27 e.ScopeVars-E#1/22 (/11 {REMOVED TILE} )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#1/16 } Tile{ AsIs: (/7 AsIs: s.Mode#1/13 AsIs: e.Index#1/18 AsIs: )/8 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[7];
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UpdateBorrowedVars/4 e.ScopeVars#1/2 (/11 e.BorrowedVars#1/9 )/12 (/7 s.Mode#1/13 e.Index#1/5 )/8 >/1
  // closed e.ScopeVars#1 as range 2
  // closed e.BorrowedVars#1 as range 9
  // closed e.Index#1 as range 5
  //DEBUG: s.Mode#1: 13
  //DEBUG: e.ScopeVars#1: 2
  //DEBUG: e.BorrowedVars#1: 9
  //DEBUG: e.Index#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UpdateBorrowedVars/4 e.ScopeVars#1/2 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars#1/9 AsIs: )/12 AsIs: (/7 AsIs: s.Mode#1/13 AsIs: e.Index#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UpdateBorrowedVars("UpdateBorrowedVars", COOKIE1_, COOKIE2_, func_UpdateBorrowedVars);


static refalrts::FnResult func_gen_ExtractNestedm_Result_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNested-Result=1/4 (/7 (/11 e.NestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 )/8 e.Result#2/2 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedFuncs#2 as range 9
  // closed e.BorrowedVars#2 as range 13
  // closed e.Result#2 as range 2
  //DEBUG: e.NestedFuncs#2: 9
  //DEBUG: e.BorrowedVars#2: 13
  //DEBUG: e.Result#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractNested-Result=1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } Tile{ AsIs: e.Result#2/2 } Tile{ ]] }
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Result_A1("ExtractNested-Result=1", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Result_A1);


static refalrts::FnResult func_ExtractNestedm_Result(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & ExtractNested-Result/4 s.MarkupContext#1/5 (/8 e.OriginBorrowedVars#1/6 )/9 (/12 e.ScopeVars#1/10 )/13 (/16 e.LocalVars#1/14 )/17 e.OriginResult#1/2 >/1
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
  // closed e.OriginBorrowedVars#1 as range 6
  // closed e.ScopeVars#1 as range 10
  // closed e.LocalVars#1 as range 14
  // closed e.OriginResult#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.OriginBorrowedVars#1: 6
  //DEBUG: e.ScopeVars#1: 10
  //DEBUG: e.LocalVars#1: 14
  //DEBUG: e.OriginResult#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.MarkupContext#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNested-Result=1/4 } </18 & MapAccum/19 Tile{ AsIs: (/8 } & ExtractNested-Result-Term/20 Tile{ HalfReuse: s.MarkupContext1 #5/9 AsIs: (/12 AsIs: e.ScopeVars#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.LocalVars#1/14 AsIs: )/17 } )/21 (/22 (/23 )/24 (/25 Tile{ AsIs: e.OriginBorrowedVars#1/6 } )/26 )/27 Tile{ AsIs: e.OriginResult#1/2 } >/28 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[20], functions[efunc_ExtractNestedm_Resultm_Term]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedm_Result_A1]);
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[22], context[27] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[8], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[9], context[17] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Result("ExtractNested-Result", COOKIE1_, COOKIE2_, func_ExtractNestedm_Result);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNested-Result-Term$2=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.InBracketsNestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 e.InBrackets#2/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.InBracketsNestedFuncs#2 as range 9
  // closed e.BorrowedVars#2 as range 13
  // closed e.InBrackets#2 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.InBracketsNestedFuncs#2: 9
  //DEBUG: e.BorrowedVars#2: 13
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.InBracketsNestedFuncs#2/9 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # Brackets/7 } Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S2A1("ExtractNested-Result-Term$2=1", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Resultm_Term_S2A1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ExtractNested-Result-Term$3=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.Name#1/9 )/12 (/15 e.InBracketsNestedFuncs#2/13 )/16 (/19 e.BorrowedVars#2/17 )/20 e.InBrackets#2/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.Name#1 as range 9
  // closed e.InBracketsNestedFuncs#2 as range 13
  // closed e.BorrowedVars#2 as range 17
  // closed e.InBrackets#2 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.Name#1: 9
  //DEBUG: e.InBracketsNestedFuncs#2: 13
  //DEBUG: e.BorrowedVars#2: 17
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.InBracketsNestedFuncs#2/13 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.BorrowedVars#2/17 AsIs: )/20 } Tile{ HalfReuse: )/7 } Tile{ AsIs: (/15 } Tile{ HalfReuse: # ADT-Brackets/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_ident(context[8], identifiers[ident_ADTm_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[4], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S3A1("ExtractNested-Result-Term$3=1", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Resultm_Term_S3A1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNested-Result-Term$4=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.InBracketsNestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 e.InBrackets#2/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.InBracketsNestedFuncs#2 as range 9
  // closed e.BorrowedVars#2 as range 13
  // closed e.InBrackets#2 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.InBracketsNestedFuncs#2: 9
  //DEBUG: e.BorrowedVars#2: 13
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.InBracketsNestedFuncs#2/9 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # CallBrackets/7 } Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_CallBrackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S4A1("ExtractNested-Result-Term$4=1", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Resultm_Term_S4A1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ExtractNested-Result-Term$5=2/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.NestedNestedFuncs#2/9 )/12 t.Function#3/13 (/17 e.BorrowedVars#3/15 )/18 t.ClosureTerm#3/19 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.NestedNestedFuncs#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.BorrowedVars#3 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.NestedNestedFuncs#2: 9
  //DEBUG: t.Function#3: 13
  //DEBUG: e.BorrowedVars#3: 15
  //DEBUG: t.ClosureTerm#3: 19

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.NestedNestedFuncs#2/9 } Tile{ AsIs: t.Function#3/13 } Tile{ AsIs: )/12 } Tile{ AsIs: (/17 AsIs: e.BorrowedVars#3/15 AsIs: )/18 } Tile{ AsIs: )/8 } Tile{ AsIs: t.ClosureTerm#3/19 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A2("ExtractNested-Result-Term$5=2", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Resultm_Term_S5A2);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ExtractNested-Result-Term$5=2\1$2\1/4 (/7 e.Context#4/5 )/8 (/11 (/15 e.Pattern#5/13 )/16 e.Conditions#5/9 (/19 e.Result#5/17 )/20 )/12 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Context#4 as range 5
  // closed e.Pattern#5 as range 13
  // closed e.Conditions#5 as range 9
  // closed e.Result#5 as range 17
  //DEBUG: e.Context#4: 5
  //DEBUG: e.Pattern#5: 13
  //DEBUG: e.Conditions#5: 9
  //DEBUG: e.Result#5: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractNested-Result-Term$5=2\1$2\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: (/15 } Tile{ AsIs: e.Context#4/5 } Tile{ AsIs: e.Pattern#5/13 } Tile{ AsIs: )/16 AsIs: e.Conditions#5/9 AsIs: (/19 AsIs: e.Result#5/17 AsIs: )/20 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1("ExtractNested-Result-Term$5=2\\1$2\\1", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & ExtractNested-Result-Term$5=2\1$2=1/4 (/7 e.ClosureName#1/5 )/8 (/11 e.Sentences#3/9 )/12 (/15 e.ScopeVars#1/13 )/16 (/19 e.BorrowedVars#1/17 )/20 (/23 e.NestedBorrowedVars#2/21 )/24 e.Context#4/2 >/1
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
  // closed e.ClosureName#1 as range 5
  // closed e.Sentences#3 as range 9
  // closed e.ScopeVars#1 as range 13
  // closed e.BorrowedVars#1 as range 17
  // closed e.NestedBorrowedVars#2 as range 21
  // closed e.Context#4 as range 2
  //DEBUG: e.ClosureName#1: 5
  //DEBUG: e.Sentences#3: 9
  //DEBUG: e.ScopeVars#1: 13
  //DEBUG: e.BorrowedVars#1: 17
  //DEBUG: e.NestedBorrowedVars#2: 21
  //DEBUG: e.Context#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/25 Tile{ HalfReuse: # Function/0 HalfReuse: # GN-Local/4 AsIs: (/7 AsIs: e.ClosureName#1/5 AsIs: )/8 HalfReuse: # Sentences/11 } </26 & Map@16/27 e.Context#4/2/28 Tile{ AsIs: (/23 } Tile{ AsIs: e.Sentences#3/9 } )/30 >/31 )/32 Tile{ HalfReuse: </12 HalfReuse: & Reduce@2/15 AsIs: e.ScopeVars#1/13 HalfReuse: (/16 AsIs: (/19 AsIs: e.BorrowedVars#1/17 AsIs: )/20 } Tile{ AsIs: e.NestedBorrowedVars#2/21 } )/33 >/34 (/35 # ClosureBrackets/36 (/37 # Symbol/38 # Name/39 e.ClosureName#1/5/40 Tile{ AsIs: )/24 AsIs: e.Context#4/2 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_gen_Map_Z16]);
  refalrts::copy_evar(vm, context[28], context[29], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::alloc_ident(vm, context[36], identifiers[ident_ClosureBrackets]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_ident(vm, context[38], identifiers[ident_Symbol]);
  refalrts::alloc_ident(vm, context[39], identifiers[ident_Name]);
  refalrts::copy_evar(vm, context[40], context[41], context[5], context[6]);
  refalrts::reinit_ident(context[0], identifiers[ident_Function]);
  refalrts::reinit_ident(context[4], identifiers[ident_GNm_Local]);
  refalrts::reinit_ident(context[11], identifiers[ident_Sentences]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[15], functions[efunc_gen_Reduce_Z2]);
  refalrts::reinit_open_bracket(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[35], context[1] );
  refalrts::link_brackets( context[37], context[24] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[16], context[33] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[25], context[32] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[23], context[30] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[24];
  res = refalrts::splice_evar( res, context[40], context[41] );
  res = refalrts::splice_evar( res, context[33], context[39] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[12], context[20] );
  res = refalrts::splice_evar( res, context[30], context[32] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1("ExtractNested-Result-Term$5=2\\1$2=1", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & ExtractNested-Result-Term$5=2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractNested-Result-Term$5=2\1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 s.new#5/21 (/24 e.new#6/22 )/25 e.new#7/2 >/1
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
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.new#6 as range 22
  // closed e.new#7 as range 2
  do {
    // </0 & ExtractNested-Result-Term$5=2\1/4 (/7 e.ClosureName#1/26 )/8 (/11 e.BorrowedVars#1/28 )/12 (/15 e.NestedBorrowedVars#2/30 )/16 (/19 e.ScopeVars#1/32 )/20 s.MarkupContext#1/21 (/24 )/25 e.Body#3/34 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[9];
    context[29] = context[10];
    context[30] = context[13];
    context[31] = context[14];
    context[32] = context[17];
    context[33] = context[18];
    context[34] = context[2];
    context[35] = context[3];
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.ClosureName#1 as range 26
    // closed e.BorrowedVars#1 as range 28
    // closed e.NestedBorrowedVars#2 as range 30
    // closed e.ScopeVars#1 as range 32
    // closed e.Body#3 as range 34
    //DEBUG: s.MarkupContext#1: 21
    //DEBUG: e.ClosureName#1: 26
    //DEBUG: e.BorrowedVars#1: 28
    //DEBUG: e.NestedBorrowedVars#2: 30
    //DEBUG: e.ScopeVars#1: 32
    //DEBUG: e.Body#3: 34

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.NestedBorrowedVars#2/30 )/16 {REMOVED TILE} e.ScopeVars#1/32 {REMOVED TILE} s.MarkupContext#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 HalfReuse: # GN-Local/7 } Tile{ AsIs: (/19 } Tile{ AsIs: e.ClosureName#1/26 } Tile{ AsIs: )/20 } Tile{ AsIs: e.Body#3/34 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.BorrowedVars#1/28 AsIs: )/12 AsIs: (/15 } Tile{ HalfReuse: # Symbol/24 HalfReuse: # Name/25 } e.ClosureName#1/26/36 Tile{ HalfReuse: )/1 ]] }
    refalrts::copy_evar(vm, context[36], context[37], context[26], context[27]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Function]);
    refalrts::reinit_ident(context[7], identifiers[ident_GNm_Local]);
    refalrts::reinit_ident(context[24], identifiers[ident_Symbol]);
    refalrts::reinit_ident(context[25], identifiers[ident_Name]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[15], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractNested-Result-Term$5=2\1/4 (/7 e.ClosureName#1/5 )/8 (/11 e.BorrowedVars#1/9 )/12 (/15 e.NestedBorrowedVars#2/13 )/16 (/19 e.ScopeVars#1/17 )/20 s.MarkupContext#1/21 (/24 e.NestedBorrowedVars#2/27 )/25 # Sentences/26 e.Sentences#3/2 >/1
  context[26] = refalrts::ident_left( identifiers[ident_Sentences], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  // closed e.ClosureName#1 as range 5
  // closed e.BorrowedVars#1 as range 9
  // closed e.NestedBorrowedVars#2 as range 13
  if( ! refalrts::repeated_evar_left( vm, context[27], context[28], context[13], context[14], context[22], context[23] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[22], context[23] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 17
  // closed e.Sentences#3 as range 2
  //DEBUG: s.MarkupContext#1: 21
  //DEBUG: e.ClosureName#1: 5
  //DEBUG: e.BorrowedVars#1: 9
  //DEBUG: e.NestedBorrowedVars#2: 13
  //DEBUG: e.ScopeVars#1: 17
  //DEBUG: e.Sentences#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNested-Result-Term$5=2\1$2=1/4 AsIs: (/7 } Tile{ AsIs: e.ClosureName#1/5 } Tile{ AsIs: )/25 HalfReuse: (/26 AsIs: e.Sentences#3/2 HalfReuse: )/1 } Tile{ AsIs: (/24 } Tile{ AsIs: e.ScopeVars#1/17 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.BorrowedVars#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.NestedBorrowedVars#2/13 AsIs: )/16 HalfReuse: </19 } Tile{ HalfReuse: & CreateContext/20 AsIs: s.MarkupContext#1/21 } Tile{ AsIs: e.NestedBorrowedVars#2/27 } >/29 >/30 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1]);
  refalrts::reinit_open_bracket(context[26]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_open_call(context[19]);
  refalrts::reinit_name(context[20], functions[efunc_CreateContext]);
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[24], context[8] );
  refalrts::link_brackets( context[26], context[1] );
  refalrts::link_brackets( context[7], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[8], context[19] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[25], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A2L1("ExtractNested-Result-Term$5=2\\1", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Resultm_Term_S5A2L1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  // </0 & ExtractNested-Result-Term$5=1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractNested-Result-Term$5=1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 s.new#5/21 (/24 e.new#6/22 )/25 (/28 e.new#7/26 )/29 e.new#8/2 >/1
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
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.new#6 as range 22
  // closed e.new#7 as range 26
  // closed e.new#8 as range 2
  do {
    // </0 & ExtractNested-Result-Term$5=1/4 (/7 e.NestedFuncs#1/30 )/8 (/11 e.ClosureName#1/32 )/12 (/15 e.BorrowedVars#1/34 )/16 (/19 e.ScopeVars#1/36 )/20 s.MarkupContext#1/21 (/24 )/25 (/28 e.NestedNestedFuncs#2/38 )/29 e.Body#2/40 >/1
    context[30] = context[5];
    context[31] = context[6];
    context[32] = context[9];
    context[33] = context[10];
    context[34] = context[13];
    context[35] = context[14];
    context[36] = context[17];
    context[37] = context[18];
    context[38] = context[26];
    context[39] = context[27];
    context[40] = context[2];
    context[41] = context[3];
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.NestedFuncs#1 as range 30
    // closed e.ClosureName#1 as range 32
    // closed e.BorrowedVars#1 as range 34
    // closed e.ScopeVars#1 as range 36
    // closed e.NestedNestedFuncs#2 as range 38
    // closed e.Body#2 as range 40
    //DEBUG: s.MarkupContext#1: 21
    //DEBUG: e.NestedFuncs#1: 30
    //DEBUG: e.ClosureName#1: 32
    //DEBUG: e.BorrowedVars#1: 34
    //DEBUG: e.ScopeVars#1: 36
    //DEBUG: e.NestedNestedFuncs#2: 38
    //DEBUG: e.Body#2: 40

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.ScopeVars#1/36 {REMOVED TILE} s.MarkupContext#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/30 } Tile{ AsIs: e.NestedNestedFuncs#2/38 } Tile{ AsIs: (/24 HalfReuse: # Function/25 HalfReuse: # GN-Local/28 } Tile{ AsIs: (/7 } Tile{ AsIs: e.ClosureName#1/32 } Tile{ AsIs: )/29 AsIs: e.Body#2/40 HalfReuse: )/1 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#1/34 AsIs: )/16 HalfReuse: )/19 } Tile{ AsIs: (/11 } Tile{ HalfReuse: # Symbol/8 } # Name/42 e.ClosureName#1/32/43 Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::alloc_ident(vm, context[42], identifiers[ident_Name]);
    refalrts::copy_evar(vm, context[43], context[44], context[32], context[33]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[25], identifiers[ident_Function]);
    refalrts::reinit_ident(context[28], identifiers[ident_GNm_Local]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::reinit_close_bracket(context[19]);
    refalrts::reinit_ident(context[8], identifiers[ident_Symbol]);
    refalrts::link_brackets( context[11], context[20] );
    refalrts::link_brackets( context[0], context[19] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[4], context[12] );
    refalrts::link_brackets( context[24], context[1] );
    refalrts::link_brackets( context[7], context[29] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[42], context[42] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[29], context[1] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[24], context[28] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ExtractNested-Result-Term$5=1/4 (/7 e.NestedFuncs#1/30 )/8 (/11 e.ClosureName#1/32 )/12 (/15 e.BorrowedVars#1/34 )/16 (/19 e.ScopeVars#1/36 )/20 s.MarkupContext#1/21 (/24 e.NestedBorrowedVars#2/38 )/25 (/28 e.NestedNestedFuncs#2/40 )/29 # Sentences/44 e.#0/42 >/1
    context[30] = context[5];
    context[31] = context[6];
    context[32] = context[9];
    context[33] = context[10];
    context[34] = context[13];
    context[35] = context[14];
    context[36] = context[17];
    context[37] = context[18];
    context[38] = context[22];
    context[39] = context[23];
    context[40] = context[26];
    context[41] = context[27];
    context[42] = context[2];
    context[43] = context[3];
    context[44] = refalrts::ident_left( identifiers[ident_Sentences], context[42], context[43] );
    if( ! context[44] )
      continue;
    // closed e.NestedFuncs#1 as range 30
    // closed e.ClosureName#1 as range 32
    // closed e.BorrowedVars#1 as range 34
    // closed e.ScopeVars#1 as range 36
    // closed e.NestedBorrowedVars#2 as range 38
    // closed e.NestedNestedFuncs#2 as range 40
    // closed e.#0 as range 42
    //DEBUG: s.MarkupContext#1: 21
    //DEBUG: e.NestedFuncs#1: 30
    //DEBUG: e.ClosureName#1: 32
    //DEBUG: e.BorrowedVars#1: 34
    //DEBUG: e.ScopeVars#1: 36
    //DEBUG: e.NestedBorrowedVars#2: 38
    //DEBUG: e.NestedNestedFuncs#2: 40
    //DEBUG: e.#0: 42

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.MarkupContext#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNested-Result-Term$5=2/4 AsIs: (/7 AsIs: e.NestedFuncs#1/30 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.NestedNestedFuncs#2/40 } Tile{ AsIs: )/20 } </45 & ExtractNested-Result-Term$5=2\1$2=1/46 (/47 Tile{ AsIs: e.ClosureName#1/32 } Tile{ AsIs: )/29 HalfReuse: (/44 AsIs: e.#0/42 HalfReuse: )/1 } (/48 Tile{ AsIs: e.ScopeVars#1/36 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#1/34 AsIs: )/16 AsIs: (/19 } e.NestedBorrowedVars#2/38/49 )/51 </52 & CreateContext/53 Tile{ HalfReuse: s.MarkupContext1 #21/24 AsIs: e.NestedBorrowedVars#2/38 HalfReuse: >/25 HalfReuse: >/28 } >/54 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[45]);
    refalrts::alloc_name(vm, context[46], functions[efunc_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1]);
    refalrts::alloc_open_bracket(vm, context[47]);
    refalrts::alloc_open_bracket(vm, context[48]);
    refalrts::copy_evar(vm, context[49], context[50], context[38], context[39]);
    refalrts::alloc_close_bracket(vm, context[51]);
    refalrts::alloc_open_call(vm, context[52]);
    refalrts::alloc_name(vm, context[53], functions[efunc_CreateContext]);
    refalrts::alloc_close_call(vm, context[54]);
    refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedm_Resultm_Term_S5A2]);
    refalrts::reinit_open_bracket(context[44]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::reinit_svar( context[24], context[21] );
    refalrts::reinit_close_call(context[25]);
    refalrts::reinit_close_call(context[28]);
    refalrts::push_stack( vm, context[54] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[45] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[52] );
    refalrts::link_brackets( context[19], context[51] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[48], context[12] );
    refalrts::link_brackets( context[44], context[1] );
    refalrts::link_brackets( context[47], context[29] );
    refalrts::link_brackets( context[11], context[20] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[54], context[54] );
    res = refalrts::splice_evar( res, context[24], context[28] );
    res = refalrts::splice_evar( res, context[51], context[53] );
    res = refalrts::splice_evar( res, context[49], context[50] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[48], context[48] );
    res = refalrts::splice_evar( res, context[29], context[1] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[45], context[47] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    refalrts::splice_to_freelist_open( vm, context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractNested-Result-Term$5=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.ClosureName#1/9 )/12 (/15 e.BorrowedVars#1/13 )/16 (/19 e.ScopeVars#1/17 )/20 s.MarkupContext#1/21 (/24 e.NestedBorrowedVars#2/22 )/25 (/28 e.NestedNestedFuncs#2/26 )/29 e.Body#2/2 >/1
  // closed e.NestedFuncs#1 as range 5
  // closed e.ClosureName#1 as range 9
  // closed e.BorrowedVars#1 as range 13
  // closed e.ScopeVars#1 as range 17
  // closed e.NestedBorrowedVars#2 as range 22
  // closed e.NestedNestedFuncs#2 as range 26
  // closed e.Body#2 as range 2
  //DEBUG: s.MarkupContext#1: 21
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.ClosureName#1: 9
  //DEBUG: e.BorrowedVars#1: 13
  //DEBUG: e.ScopeVars#1: 17
  //DEBUG: e.NestedBorrowedVars#2: 22
  //DEBUG: e.NestedNestedFuncs#2: 26
  //DEBUG: e.Body#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNested-Result-Term$5=2/4 AsIs: (/7 AsIs: e.NestedFuncs#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.NestedNestedFuncs#2/26 } )/30 </31 & ExtractNested-Result-Term$5=2\1*2/32 (/33 Tile{ AsIs: e.ClosureName#1/9 } Tile{ AsIs: )/29 } Tile{ AsIs: (/28 } Tile{ AsIs: e.BorrowedVars#1/13 } Tile{ AsIs: )/12 AsIs: (/15 } e.NestedBorrowedVars#2/22/34 Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.ScopeVars#1/17 AsIs: )/20 AsIs: s.MarkupContext#1/21 AsIs: (/24 AsIs: e.NestedBorrowedVars#2/22 AsIs: )/25 } Tile{ AsIs: e.Body#2/2 } >/36 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_gen_ExtractNestedm_Resultm_Term_S5A2L1D2]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::copy_evar(vm, context[34], context[35], context[22], context[23]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedm_Resultm_Term_S5A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[28], context[12] );
  refalrts::link_brackets( context[33], context[29] );
  refalrts::link_brackets( context[11], context[30] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[25] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[30], context[33] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A1("ExtractNested-Result-Term$5=1", COOKIE1_, COOKIE2_, func_gen_ExtractNestedm_Resultm_Term_S5A1);


static refalrts::FnResult func_ExtractNestedm_Resultm_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  // </0 & ExtractNested-Result-Term/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractNested-Result-Term/4 s.new#1/5 (/8 e.new#2/6 )/9 (/12 e.new#3/10 )/13 (/16 (/20 e.new#4/18 )/21 (/24 e.new#5/22 )/25 )/17 t.new#6/26 >/1
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
  context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[14], context[15] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  if( ! refalrts::empty_seq( context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 6
  // closed e.new#3 as range 10
  // closed e.new#4 as range 18
  // closed e.new#5 as range 22
  context[27] = refalrts::tvar_left( context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ExtractNested-Result-Term/4 s.new#7/5 (/8 e.new#10/28 )/9 (/12 e.new#11/30 )/13 (/16 (/20 e.new#12/32 )/21 (/24 e.new#13/34 )/25 )/17 (/26 s.new#8/38 e.new#9/36 )/27 >/1
    context[28] = context[6];
    context[29] = context[7];
    context[30] = context[10];
    context[31] = context[11];
    context[32] = context[18];
    context[33] = context[19];
    context[34] = context[22];
    context[35] = context[23];
    context[36] = 0;
    context[37] = 0;
    if( ! refalrts::brackets_term( context[36], context[37], context[26] ) )
      continue;
    // closed e.new#10 as range 28
    // closed e.new#11 as range 30
    // closed e.new#12 as range 32
    // closed e.new#13 as range 34
    if( ! refalrts::svar_left( context[38], context[36], context[37] ) )
      continue;
    // closed e.new#9 as range 36
    do {
      // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/39 )/9 (/12 e.LocalVars#1/41 )/13 (/16 (/20 e.NestedFuncs#1/43 )/21 (/24 e.BorrowedVars#1/45 )/25 )/17 (/26 # TkVariable/38 s.Mode#1/49 e.Index#1/47 )/27 >/1
      context[39] = context[28];
      context[40] = context[29];
      context[41] = context[30];
      context[42] = context[31];
      context[43] = context[32];
      context[44] = context[33];
      context[45] = context[34];
      context[46] = context[35];
      context[47] = context[36];
      context[48] = context[37];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[38] ) )
        continue;
      // closed e.ScopeVars#1 as range 39
      // closed e.LocalVars#1 as range 41
      // closed e.NestedFuncs#1 as range 43
      // closed e.BorrowedVars#1 as range 45
      if( ! refalrts::svar_left( context[49], context[47], context[48] ) )
        continue;
      // closed e.Index#1 as range 47
      //DEBUG: s.MarkupContext#1: 5
      //DEBUG: e.ScopeVars#1: 39
      //DEBUG: e.LocalVars#1: 41
      //DEBUG: e.NestedFuncs#1: 43
      //DEBUG: e.BorrowedVars#1: 45
      //DEBUG: s.Mode#1: 49
      //DEBUG: e.Index#1: 47

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.MarkupContext#1/5 {REMOVED TILE} e.LocalVars#1/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/16 AsIs: (/20 AsIs: e.NestedFuncs#1/43 AsIs: )/21 HalfReuse: </24 } Tile{ Reuse: & CheckBorrowed/4 } Tile{ AsIs: (/8 AsIs: e.ScopeVars#1/39 AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.BorrowedVars#1/45 } Tile{ AsIs: )/13 } Tile{ HalfReuse: (/1 } Tile{ HalfReuse: s.Mode1 #49/0 } e.Index#1/47/50 )/52 Tile{ HalfReuse: >/25 AsIs: )/17 AsIs: (/26 AsIs: # TkVariable/38 AsIs: s.Mode#1/49 AsIs: e.Index#1/47 AsIs: )/27 } Tile{ ]] }
      refalrts::copy_evar(vm, context[50], context[51], context[47], context[48]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::reinit_open_call(context[24]);
      refalrts::update_name(context[4], functions[efunc_CheckBorrowed]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_svar( context[0], context[49] );
      refalrts::reinit_close_call(context[25]);
      refalrts::link_brackets( context[26], context[27] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[1], context[52] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[25], context[27] );
      res = refalrts::splice_evar( res, context[52], context[52] );
      res = refalrts::splice_evar( res, context[50], context[51] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/39 )/9 (/12 e.LocalVars#1/41 )/13 (/16 (/20 e.NestedFuncs#1/43 )/21 (/24 e.BorrowedVars#1/45 )/25 )/17 (/26 # Brackets/38 e.InBrackets#1/47 )/27 >/1
      context[39] = context[28];
      context[40] = context[29];
      context[41] = context[30];
      context[42] = context[31];
      context[43] = context[32];
      context[44] = context[33];
      context[45] = context[34];
      context[46] = context[35];
      context[47] = context[36];
      context[48] = context[37];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[38] ) )
        continue;
      // closed e.ScopeVars#1 as range 39
      // closed e.LocalVars#1 as range 41
      // closed e.NestedFuncs#1 as range 43
      // closed e.BorrowedVars#1 as range 45
      // closed e.InBrackets#1 as range 47
      //DEBUG: s.MarkupContext#1: 5
      //DEBUG: e.ScopeVars#1: 39
      //DEBUG: e.LocalVars#1: 41
      //DEBUG: e.NestedFuncs#1: 43
      //DEBUG: e.BorrowedVars#1: 45
      //DEBUG: e.InBrackets#1: 47

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & ExtractNested-Result-Term/4 s.MarkupContext#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ExtractNested-Result-Term$2=1/16 AsIs: (/20 AsIs: e.NestedFuncs#1/43 AsIs: )/21 HalfReuse: </24 } Tile{ HalfReuse: & ExtractNested-Result/25 HalfReuse: s.MarkupContext1 #5/17 AsIs: (/26 } Tile{ AsIs: e.BorrowedVars#1/45 } Tile{ HalfReuse: )/38 } Tile{ AsIs: (/8 AsIs: e.ScopeVars#1/39 AsIs: )/9 AsIs: (/12 AsIs: e.LocalVars#1/41 AsIs: )/13 } Tile{ AsIs: e.InBrackets#1/47 } Tile{ HalfReuse: >/27 AsIs: >/1 ]] }
      refalrts::reinit_name(context[16], functions[efunc_gen_ExtractNestedm_Resultm_Term_S2A1]);
      refalrts::reinit_open_call(context[24]);
      refalrts::reinit_name(context[25], functions[efunc_ExtractNestedm_Result]);
      refalrts::reinit_svar( context[17], context[5] );
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_close_call(context[27]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[26], context[38] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[27];
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[8], context[13] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/39 )/9 (/12 e.LocalVars#1/41 )/13 (/16 (/20 e.NestedFuncs#1/43 )/21 (/24 e.BorrowedVars#1/45 )/25 )/17 (/26 # ADT-Brackets/38 (/51 e.Name#1/49 )/52 e.InBrackets#1/47 )/27 >/1
      context[39] = context[28];
      context[40] = context[29];
      context[41] = context[30];
      context[42] = context[31];
      context[43] = context[32];
      context[44] = context[33];
      context[45] = context[34];
      context[46] = context[35];
      context[47] = context[36];
      context[48] = context[37];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[38] ) )
        continue;
      context[49] = 0;
      context[50] = 0;
      context[51] = refalrts::brackets_left( context[49], context[50], context[47], context[48] );
      if( ! context[51] )
        continue;
      refalrts::bracket_pointers(context[51], context[52]);
      // closed e.ScopeVars#1 as range 39
      // closed e.LocalVars#1 as range 41
      // closed e.NestedFuncs#1 as range 43
      // closed e.BorrowedVars#1 as range 45
      // closed e.Name#1 as range 49
      // closed e.InBrackets#1 as range 47
      //DEBUG: s.MarkupContext#1: 5
      //DEBUG: e.ScopeVars#1: 39
      //DEBUG: e.LocalVars#1: 41
      //DEBUG: e.NestedFuncs#1: 43
      //DEBUG: e.BorrowedVars#1: 45
      //DEBUG: e.Name#1: 49
      //DEBUG: e.InBrackets#1: 47

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & ExtractNested-Result-Term/4 s.MarkupContext#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ExtractNested-Result-Term$3=1/16 AsIs: (/20 AsIs: e.NestedFuncs#1/43 AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.Name#1/49 } Tile{ AsIs: )/25 HalfReuse: </17 HalfReuse: & ExtractNested-Result/26 HalfReuse: s.MarkupContext1 #5/38 AsIs: (/51 } Tile{ AsIs: e.BorrowedVars#1/45 } Tile{ AsIs: )/52 } Tile{ AsIs: (/8 AsIs: e.ScopeVars#1/39 AsIs: )/9 AsIs: (/12 AsIs: e.LocalVars#1/41 AsIs: )/13 } Tile{ AsIs: e.InBrackets#1/47 } Tile{ HalfReuse: >/27 AsIs: >/1 ]] }
      refalrts::reinit_name(context[16], functions[efunc_gen_ExtractNestedm_Resultm_Term_S3A1]);
      refalrts::reinit_open_call(context[17]);
      refalrts::reinit_name(context[26], functions[efunc_ExtractNestedm_Result]);
      refalrts::reinit_svar( context[38], context[5] );
      refalrts::reinit_close_call(context[27]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[17] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[51], context[52] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[27];
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[8], context[13] );
      res = refalrts::splice_evar( res, context[52], context[52] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[25], context[51] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/39 )/9 (/12 e.LocalVars#1/41 )/13 (/16 (/20 e.NestedFuncs#1/43 )/21 (/24 e.BorrowedVars#1/45 )/25 )/17 (/26 # CallBrackets/38 e.InBrackets#1/47 )/27 >/1
      context[39] = context[28];
      context[40] = context[29];
      context[41] = context[30];
      context[42] = context[31];
      context[43] = context[32];
      context[44] = context[33];
      context[45] = context[34];
      context[46] = context[35];
      context[47] = context[36];
      context[48] = context[37];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[38] ) )
        continue;
      // closed e.ScopeVars#1 as range 39
      // closed e.LocalVars#1 as range 41
      // closed e.NestedFuncs#1 as range 43
      // closed e.BorrowedVars#1 as range 45
      // closed e.InBrackets#1 as range 47
      //DEBUG: s.MarkupContext#1: 5
      //DEBUG: e.ScopeVars#1: 39
      //DEBUG: e.LocalVars#1: 41
      //DEBUG: e.NestedFuncs#1: 43
      //DEBUG: e.BorrowedVars#1: 45
      //DEBUG: e.InBrackets#1: 47

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & ExtractNested-Result-Term/4 s.MarkupContext#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ExtractNested-Result-Term$4=1/16 AsIs: (/20 AsIs: e.NestedFuncs#1/43 AsIs: )/21 HalfReuse: </24 } Tile{ HalfReuse: & ExtractNested-Result/25 HalfReuse: s.MarkupContext1 #5/17 AsIs: (/26 } Tile{ AsIs: e.BorrowedVars#1/45 } Tile{ HalfReuse: )/38 } Tile{ AsIs: (/8 AsIs: e.ScopeVars#1/39 AsIs: )/9 AsIs: (/12 AsIs: e.LocalVars#1/41 AsIs: )/13 } Tile{ AsIs: e.InBrackets#1/47 } Tile{ HalfReuse: >/27 AsIs: >/1 ]] }
      refalrts::reinit_name(context[16], functions[efunc_gen_ExtractNestedm_Resultm_Term_S4A1]);
      refalrts::reinit_open_call(context[24]);
      refalrts::reinit_name(context[25], functions[efunc_ExtractNestedm_Result]);
      refalrts::reinit_svar( context[17], context[5] );
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_close_call(context[27]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[26], context[38] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[27];
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[8], context[13] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/39 )/9 (/12 e.LocalVars#1/41 )/13 (/16 (/20 e.NestedFuncs#1/43 )/21 (/24 e.BorrowedVars#1/45 )/25 )/17 (/26 # Closure/38 (/51 e.ClosureName#1/49 )/52 e.Body#1/47 )/27 >/1
    context[39] = context[28];
    context[40] = context[29];
    context[41] = context[30];
    context[42] = context[31];
    context[43] = context[32];
    context[44] = context[33];
    context[45] = context[34];
    context[46] = context[35];
    context[47] = context[36];
    context[48] = context[37];
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[38] ) )
      continue;
    context[49] = 0;
    context[50] = 0;
    context[51] = refalrts::brackets_left( context[49], context[50], context[47], context[48] );
    if( ! context[51] )
      continue;
    refalrts::bracket_pointers(context[51], context[52]);
    // closed e.ScopeVars#1 as range 39
    // closed e.LocalVars#1 as range 41
    // closed e.NestedFuncs#1 as range 43
    // closed e.BorrowedVars#1 as range 45
    // closed e.ClosureName#1 as range 49
    // closed e.Body#1 as range 47
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.ScopeVars#1: 39
    //DEBUG: e.LocalVars#1: 41
    //DEBUG: e.NestedFuncs#1: 43
    //DEBUG: e.BorrowedVars#1: 45
    //DEBUG: e.ClosureName#1: 49
    //DEBUG: e.Body#1: 47

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/51 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & ExtractNested-Result-Term$5=1/16 AsIs: (/20 AsIs: e.NestedFuncs#1/43 AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.ClosureName#1/49 } Tile{ AsIs: )/17 AsIs: (/26 } Tile{ AsIs: e.BorrowedVars#1/45 } Tile{ AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.ScopeVars#1/39 } Tile{ AsIs: )/25 } Tile{ HalfReuse: s.MarkupContext1 #5/38 } Tile{ AsIs: </0 Reuse: & ExtractNestedRec/4 AsIs: s.MarkupContext#1/5 AsIs: (/8 } e.ScopeVars#1/39/53 Tile{ AsIs: e.LocalVars#1/41 } Tile{ AsIs: )/52 AsIs: e.Body#1/47 HalfReuse: >/27 AsIs: >/1 ]] }
    refalrts::copy_evar(vm, context[53], context[54], context[39], context[40]);
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_name(context[16], functions[efunc_gen_ExtractNestedm_Resultm_Term_S5A1]);
    refalrts::reinit_svar( context[38], context[5] );
    refalrts::update_name(context[4], functions[efunc_ExtractNestedRec]);
    refalrts::reinit_close_call(context[27]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[52] );
    refalrts::link_brackets( context[12], context[25] );
    refalrts::link_brackets( context[26], context[9] );
    refalrts::link_brackets( context[24], context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[52];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[53], context[54] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[9], context[12] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_evar( res, context[17], context[26] );
    res = refalrts::splice_evar( res, context[49], context[50] );
    res = refalrts::splice_evar( res, context[13], context[24] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/6 )/9 (/12 e.LocalVars#1/10 )/13 (/16 (/20 e.NestedFuncs#1/18 )/21 (/24 e.BorrowedVars#1/22 )/25 )/17 t.OtherTerm#1/26 >/1
  // closed e.ScopeVars#1 as range 6
  // closed e.LocalVars#1 as range 10
  // closed e.NestedFuncs#1 as range 18
  // closed e.BorrowedVars#1 as range 22
  //DEBUG: t.OtherTerm#1: 26
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.ScopeVars#1: 6
  //DEBUG: e.LocalVars#1: 10
  //DEBUG: e.NestedFuncs#1: 18
  //DEBUG: e.BorrowedVars#1: 22

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/6 )/9 (/12 e.LocalVars#1/10 )/13 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/16 AsIs: (/20 AsIs: e.NestedFuncs#1/18 AsIs: )/21 AsIs: (/24 AsIs: e.BorrowedVars#1/22 AsIs: )/25 AsIs: )/17 AsIs: t.OtherTerm#1/26 } Tile{ ]] }
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[27] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Resultm_Term("ExtractNested-Result-Term", COOKIE1_, COOKIE2_, func_ExtractNestedm_Resultm_Term);


static refalrts::FnResult func_CheckBorrowed(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & CheckBorrowed/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckBorrowed/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 s.new#3/17 e.new#4/13 )/16 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 13
  do {
    // </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/18 )/8 (/11 e.BorrowedVars-B#1/24 (/30 s.Mode#1/32 e.Index#1/33 )/31 e.BorrowedVars-E#1/26 )/12 (/15 s.Mode#1/17 e.Index#1/22 )/16 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    // closed e.ScopeVars#1 as range 18
    // closed e.Index#1 as range 22
    context[24] = 0;
    context[25] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[26] = context[20];
      context[27] = context[21];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      if( ! refalrts::repeated_stvar_left( vm, context[32], context[17], context[28], context[29] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[33], context[34], context[22], context[23], context[28], context[29] ) )
        continue;
      if( ! refalrts::empty_seq( context[28], context[29] ) )
        continue;
      // closed e.BorrowedVars-E#1 as range 26
      //DEBUG: s.Mode#1: 17
      //DEBUG: e.ScopeVars#1: 18
      //DEBUG: e.Index#1: 22
      //DEBUG: e.BorrowedVars-B#1: 24
      //DEBUG: e.BorrowedVars-E#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/18 )/8 {REMOVED TILE} (/15 s.Mode#1/17 e.Index#1/22 )/16 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars-B#1/24 AsIs: (/30 AsIs: s.Mode#1/32 AsIs: e.Index#1/33 AsIs: )/31 AsIs: e.BorrowedVars-E#1/26 AsIs: )/12 } Tile{ ]] }
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[24], context[25], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckBorrowed/4 (/7 e.ScopeVars-B#1/24 (/30 s.Mode#1/32 e.Index#1/33 )/31 e.ScopeVars-E#1/26 )/8 (/11 e.BorrowedVars#1/20 )/12 (/15 s.Mode#1/17 e.Index#1/22 )/16 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    // closed e.BorrowedVars#1 as range 20
    // closed e.Index#1 as range 22
    context[24] = 0;
    context[25] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[26] = context[18];
      context[27] = context[19];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      if( ! refalrts::repeated_stvar_left( vm, context[32], context[17], context[28], context[29] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[33], context[34], context[22], context[23], context[28], context[29] ) )
        continue;
      if( ! refalrts::empty_seq( context[28], context[29] ) )
        continue;
      // closed e.ScopeVars-E#1 as range 26
      //DEBUG: s.Mode#1: 17
      //DEBUG: e.BorrowedVars#1: 20
      //DEBUG: e.Index#1: 22
      //DEBUG: e.ScopeVars-B#1: 24
      //DEBUG: e.ScopeVars-E#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & CheckBorrowed/4 (/7 e.ScopeVars-B#1/24 (/30 s.Mode#1/32 e.Index#1/33 )/31 e.ScopeVars-E#1/26 )/8 (/11 {REMOVED TILE} )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#1/20 } Tile{ AsIs: (/15 AsIs: s.Mode#1/17 AsIs: e.Index#1/22 AsIs: )/16 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[24], context[25], context[18], context[19] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BorrowedVars#1/9 )/12 (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1
  // closed e.ScopeVars#1 as range 5
  // closed e.BorrowedVars#1 as range 9
  // closed e.Index#1 as range 13
  //DEBUG: s.Mode#1: 17
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.BorrowedVars#1: 9
  //DEBUG: e.Index#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/5 )/8 {REMOVED TILE} (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars#1/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckBorrowed("CheckBorrowed", COOKIE1_, COOKIE2_, func_CheckBorrowed);


static refalrts::FnResult func_gen_CreateContext_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & CreateContext$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateContext$1\1/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
  // closed e.new#2 as range 5
  do {
    // </0 & CreateContext$1\1/4 (/7 'e'/9 e.Index#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::char_term( 'e', context[9] ) )
      continue;
    // closed e.Index#2 as range 10
    //DEBUG: e.Index#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 # Symbol/13 # Identifier/14 # VAR/15 'e'/16 e.Index#2/10/17 )/19 (/20 Tile{ HalfReuse: # Brackets/0 HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: 'e'/9 AsIs: e.Index#2/10 AsIs: )/8 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_Symbol]);
    refalrts::alloc_ident(vm, context[14], identifiers[ident_Identifier]);
    refalrts::alloc_ident(vm, context[15], identifiers[ident_VAR]);
    refalrts::alloc_char(vm, context[16], 'e');
    refalrts::copy_evar(vm, context[17], context[18], context[10], context[11]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::reinit_ident(context[0], identifiers[ident_Brackets]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[20], context[1] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::link_brackets( context[12], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[12], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateContext$1\1/4 (/7 s.Mode#2/9 e.Index#2/5 )/8 >/1
  // closed e.Index#2 as range 5
  //DEBUG: s.Mode#2: 9
  //DEBUG: e.Index#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # Symbol/0 HalfReuse: # Identifier/4 HalfReuse: # VAR/7 AsIs: s.Mode#2/9 AsIs: e.Index#2/5 AsIs: )/8 HalfReuse: (/1 } # TkVariable/11 s.Mode#2/9/12 e.Index#2/5/13 )/15 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_TkVariable]);
  refalrts::copy_stvar(vm, context[12], context[9]);
  refalrts::copy_evar(vm, context[13], context[14], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::reinit_ident(context[0], identifiers[ident_Symbol]);
  refalrts::reinit_ident(context[4], identifiers[ident_Identifier]);
  refalrts::reinit_ident(context[7], identifiers[ident_VAR]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::link_brackets( context[1], context[15] );
  refalrts::link_brackets( context[10], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateContext_S1L1("CreateContext$1\\1", COOKIE1_, COOKIE2_, func_gen_CreateContext_S1L1);


static refalrts::FnResult func_gen_CreateContext_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & CreateContext$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateContext$2\1/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
  // closed e.new#2 as range 5
  do {
    // </0 & CreateContext$2\1/4 (/7 'e'/9 e.Index#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::char_term( 'e', context[9] ) )
      continue;
    // closed e.Index#2 as range 10
    //DEBUG: e.Index#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 Tile{ HalfReuse: # Brackets/0 HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: 'e'/9 AsIs: e.Index#2/10 AsIs: )/8 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::reinit_ident(context[0], identifiers[ident_Brackets]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateContext$2\1/4 (/7 s.Mode#2/9 e.Index#2/5 )/8 >/1
  // closed e.Index#2 as range 5
  //DEBUG: s.Mode#2: 9
  //DEBUG: e.Index#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: s.Mode#2/9 AsIs: e.Index#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateContext_S2L1("CreateContext$2\\1", COOKIE1_, COOKIE2_, func_gen_CreateContext_S2L1);


static refalrts::FnResult func_CreateContext(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CreateContext/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateContext/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & CreateContext/4 # MarkupContext/5 e.Context#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_MarkupContext], context[5] ) )
      continue;
    // closed e.Context#1 as range 6
    //DEBUG: e.Context#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Map@17/5 AsIs: e.Context#1/6 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_Map_Z17]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateContext/4 # NoMarkupContext/5 e.Context#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NoMarkupContext], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Context#1 as range 2
  //DEBUG: e.Context#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Map@18/5 AsIs: e.Context#1/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[5], functions[efunc_gen_Map_Z18]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateContext("CreateContext", COOKIE1_, COOKIE2_, func_CreateContext);


static refalrts::FnResult func_gen_Passm_CleanupRedudandExterns_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Pass-CleanupRedudandExterns=1/4 (/7 e.DefinedFunctions#2/5 )/8 e.AST#2/2 >/1
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
  // closed e.DefinedFunctions#2 as range 5
  // closed e.AST#2 as range 2
  //DEBUG: e.DefinedFunctions#2: 5
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Map@19/7 AsIs: e.DefinedFunctions#2/5 HalfReuse: (/8 AsIs: e.AST#2/2 HalfReuse: )/1 } Tile{ HalfReuse: >/0 } Tile{ ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z19]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_call(context[0]);
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_CleanupRedudandExterns_A1("Pass-CleanupRedudandExterns=1", COOKIE1_, COOKIE2_, func_gen_Passm_CleanupRedudandExterns_A1);


static refalrts::FnResult func_gen_Passm_CleanupRedudandExterns_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Pass-CleanupRedudandExterns=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 e.new#3/9 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 9
  do {
    // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.new#4/14 )/8 (/11 s.new#5/13 s.new#6/18 e.new#7/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    // closed e.new#4 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    // closed e.new#7 as range 16
    do {
      // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/19 )/8 (/11 # Function/13 s.ScopeClass#2/18 (/25 e.Name#2/23 )/26 e.Body#2/21 )/12 >/1
      context[19] = context[14];
      context[20] = context[15];
      context[21] = context[16];
      context[22] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_Function], context[13] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      // closed e.DefinedFunctions#2 as range 19
      // closed e.Name#2 as range 23
      // closed e.Body#2 as range 21
      //DEBUG: s.ScopeClass#2: 18
      //DEBUG: e.DefinedFunctions#2: 19
      //DEBUG: e.Name#2: 23
      //DEBUG: e.Body#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.DefinedFunctions#2/19 } Tile{ AsIs: (/7 } e.Name#2/23/27 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function/13 AsIs: s.ScopeClass#2/18 AsIs: (/25 AsIs: e.Name#2/23 AsIs: )/26 AsIs: e.Body#2/21 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_evar(vm, context[27], context[28], context[23], context[24]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/19 )/8 (/11 # Enum/13 s.ScopeClass#2/18 e.Name#2/21 )/12 >/1
      context[19] = context[14];
      context[20] = context[15];
      context[21] = context[16];
      context[22] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_Enum], context[13] ) )
        continue;
      // closed e.DefinedFunctions#2 as range 19
      // closed e.Name#2 as range 21
      //DEBUG: s.ScopeClass#2: 18
      //DEBUG: e.DefinedFunctions#2: 19
      //DEBUG: e.Name#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.DefinedFunctions#2/19 } Tile{ AsIs: (/7 } e.Name#2/21/23 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Enum/13 AsIs: s.ScopeClass#2/18 AsIs: e.Name#2/21 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[21], context[22]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/19 )/8 (/11 # Swap/13 s.ScopeClass#2/18 e.Name#2/21 )/12 >/1
    context[19] = context[14];
    context[20] = context[15];
    context[21] = context[16];
    context[22] = context[17];
    if( ! refalrts::ident_term( identifiers[ident_Swap], context[13] ) )
      continue;
    // closed e.DefinedFunctions#2 as range 19
    // closed e.Name#2 as range 21
    //DEBUG: s.ScopeClass#2: 18
    //DEBUG: e.DefinedFunctions#2: 19
    //DEBUG: e.Name#2: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.DefinedFunctions#2/19 } Tile{ AsIs: (/7 } e.Name#2/21/23 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Swap/13 AsIs: s.ScopeClass#2/18 AsIs: e.Name#2/21 AsIs: )/12 } Tile{ ]] }
    refalrts::copy_evar(vm, context[23], context[24], context[21], context[22]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/14 )/8 (/11 # Inline/13 e.Name#2/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_Inline], context[13] ) )
      continue;
    // closed e.DefinedFunctions#2 as range 14
    // closed e.Name#2 as range 16
    //DEBUG: e.DefinedFunctions#2: 14
    //DEBUG: e.Name#2: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.DefinedFunctions#2/14 } Tile{ AsIs: (/7 } e.Name#2/16/18 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Inline/13 AsIs: e.Name#2/16 AsIs: )/12 } Tile{ ]] }
    refalrts::copy_evar(vm, context[18], context[19], context[16], context[17]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/14 )/8 (/11 # Drive/13 e.Name#2/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_Drive], context[13] ) )
      continue;
    // closed e.DefinedFunctions#2 as range 14
    // closed e.Name#2 as range 16
    //DEBUG: e.DefinedFunctions#2: 14
    //DEBUG: e.Name#2: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.DefinedFunctions#2/14 } Tile{ AsIs: (/7 } e.Name#2/16/18 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Drive/13 AsIs: e.Name#2/16 AsIs: )/12 } Tile{ ]] }
    refalrts::copy_evar(vm, context[18], context[19], context[16], context[17]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/14 )/8 (/11 # Declaration/13 s.ScopeClass#2/18 e.Name#2/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_Declaration], context[13] ) )
      continue;
    // closed e.DefinedFunctions#2 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    // closed e.Name#2 as range 16
    //DEBUG: e.DefinedFunctions#2: 14
    //DEBUG: s.ScopeClass#2: 18
    //DEBUG: e.Name#2: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.DefinedFunctions#2/14 AsIs: )/8 AsIs: (/11 AsIs: # Declaration/13 AsIs: s.ScopeClass#2/18 AsIs: e.Name#2/16 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/14 )/8 (/11 # Ident/13 e.Name#2/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_Ident], context[13] ) )
      continue;
    // closed e.DefinedFunctions#2 as range 14
    // closed e.Name#2 as range 16
    //DEBUG: e.DefinedFunctions#2: 14
    //DEBUG: e.Name#2: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.DefinedFunctions#2/14 AsIs: )/8 AsIs: (/11 AsIs: # Ident/13 AsIs: e.Name#2/16 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.new#4/5 )/8 (/11 s.new#5/13 t.new#6/14 e.new#7/9 )/12 >/1
  // closed e.new#4 as range 5
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 9
  do {
    // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/16 )/8 (/11 # NativeBlock/13 t.SrcPos#2/14 e.Code#2/18 )/12 >/1
    context[16] = context[5];
    context[17] = context[6];
    context[18] = context[9];
    context[19] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[13] ) )
      continue;
    // closed e.DefinedFunctions#2 as range 16
    // closed e.Code#2 as range 18
    //DEBUG: t.SrcPos#2: 14
    //DEBUG: e.DefinedFunctions#2: 16
    //DEBUG: e.Code#2: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.DefinedFunctions#2/16 AsIs: )/8 AsIs: (/11 AsIs: # NativeBlock/13 AsIs: t.SrcPos#2/14 AsIs: e.Code#2/18 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/5 )/8 (/11 # Spec/13 t.SrcPos#2/14 t.Name#2/16 e.Pattern#2/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_Spec], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.DefinedFunctions#2 as range 5
  context[17] = refalrts::tvar_left( context[16], context[9], context[10] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#2 as range 9
  //DEBUG: t.SrcPos#2: 14
  //DEBUG: e.DefinedFunctions#2: 5
  //DEBUG: t.Name#2: 16
  //DEBUG: e.Pattern#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.DefinedFunctions#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Spec/13 AsIs: t.SrcPos#2/14 AsIs: t.Name#2/16 AsIs: e.Pattern#2/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_CleanupRedudandExterns_A1L1("Pass-CleanupRedudandExterns=1\\1", COOKIE1_, COOKIE2_, func_gen_Passm_CleanupRedudandExterns_A1L1);


static refalrts::FnResult func_Passm_CleanupRedudandExterns(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Pass-CleanupRedudandExterns/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Pass-CleanupRedudandExterns=1/4 } </5 & MapAccum/6 & Pass-CleanupRedudandExterns=1\1/7 (/8 )/9 Tile{ AsIs: e.AST#1/2 } >/10 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Passm_CleanupRedudandExterns_A1L1]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_Passm_CleanupRedudandExterns_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_CleanupRedudandExterns("Pass-CleanupRedudandExterns", COOKIE1_, COOKIE2_, func_Passm_CleanupRedudandExterns);


static refalrts::FnResult func_FilterDeclarations(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & FilterDeclarations/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FilterDeclarations/4 e.new#1/2 t.new#2/5 >/1
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & FilterDeclarations/4 e.DefinedFunctions-B#1/13 (/19 e.Name#1/21 )/20 e.DefinedFunctions-E#1/15 (/5 # Declaration/11 s.ScopeClass#1/12 e.Name#1/9 )/6 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = refalrts::ident_left( identifiers[ident_Declaration], context[9], context[10] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[7];
      context[16] = context[8];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      if( ! refalrts::repeated_evar_left( vm, context[21], context[22], context[9], context[10], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.DefinedFunctions-E#1 as range 15
      //DEBUG: s.ScopeClass#1: 12
      //DEBUG: e.Name#1: 9
      //DEBUG: e.DefinedFunctions-B#1: 13
      //DEBUG: e.DefinedFunctions-E#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FilterDeclarations/4 e.DefinedFunctions-B#1/13 (/19 e.Name#1/21 )/20 e.DefinedFunctions-E#1/15 (/5 # Declaration/11 s.ScopeClass#1/12 e.Name#1/9 )/6 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FilterDeclarations/4 e.DefinedFunctions#1/2 t.OtherItem#1/5 >/1
  // closed e.DefinedFunctions#1 as range 2
  //DEBUG: t.OtherItem#1: 5
  //DEBUG: e.DefinedFunctions#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FilterDeclarations/4 e.DefinedFunctions#1/2 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FilterDeclarations("FilterDeclarations", COOKIE1_, COOKIE2_, func_FilterDeclarations);


static refalrts::FnResult func_gen_Passm_FoldEnums_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Pass-FoldEnums\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pass-FoldEnums\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Pass-FoldEnums\1/4 (/5 # Function/9 s.ScopeClass#2/15 (/13 e.Name#2/11 )/14 # Sentences/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Function], context[7], context[8] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_right( identifiers[ident_Sentences], context[7], context[8] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_right( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#2 as range 11
    if( ! refalrts::svar_left( context[15], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Name#2: 11
    //DEBUG: s.ScopeClass#2: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Pass-FoldEnums\1/4 {REMOVED TILE} (/13 {REMOVED TILE} )/14 # Sentences/10 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Enum/9 AsIs: s.ScopeClass#2/15 } Tile{ AsIs: e.Name#2/11 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident(context[9], identifiers[ident_Enum]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-FoldEnums\1/4 t.Other#2/5 >/1
  //DEBUG: t.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-FoldEnums\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_FoldEnums_L1("Pass-FoldEnums\\1", COOKIE1_, COOKIE2_, func_gen_Passm_FoldEnums_L1);


static refalrts::FnResult func_Passm_FoldEnums(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pass-FoldEnums/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@20/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z20]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_FoldEnums("Pass-FoldEnums", COOKIE1_, COOKIE2_, func_Passm_FoldEnums);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@1/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@1/4 (/7 s.new#3/13 t.new#4/14 e.new#5/11 )/8 e.new#6/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#6 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[15] = refalrts::tvar_left( context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.new#5 as range 11
      do {
        // </0 & Map@1/4 (/7 # Function/13 t.0#0/14 s.ScopeClass#2/20 (/23 e.4#0/21 )/24 e.3#0/16 )/8 e.Tail#1/18 >/1
        context[16] = context[11];
        context[17] = context[12];
        context[18] = context[9];
        context[19] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Function], context[13] ) )
          continue;
        // closed e.Tail#1 as range 18
        if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
          continue;
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::brackets_left( context[21], context[22], context[16], context[17] );
        if( ! context[23] )
          continue;
        refalrts::bracket_pointers(context[23], context[24]);
        // closed e.4#0 as range 21
        // closed e.3#0 as range 16
        //DEBUG: t.0#0: 14
        //DEBUG: e.Tail#1: 18
        //DEBUG: s.ScopeClass#2: 20
        //DEBUG: e.4#0: 21
        //DEBUG: e.3#0: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.0#0/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/13 } Tile{ AsIs: s.ScopeClass#2/20 AsIs: (/23 AsIs: e.4#0/21 AsIs: )/24 } Tile{ AsIs: </0 Reuse: & RemovePos-Body/4 } Tile{ AsIs: e.3#0/16 } >/25 )/26 </27 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/18 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_close_bracket(vm, context[26]);
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::update_name(context[4], functions[efunc_RemovePosm_Body]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[27] );
        refalrts::link_brackets( context[7], context[26] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[25], context[27] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[20], context[24] );
        res = refalrts::splice_evar( res, context[7], context[13] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@1/4 (/7 # Ident/13 t.0#0/14 e.1#0/16 )/8 e.Tail#1/18 >/1
        context[16] = context[11];
        context[17] = context[12];
        context[18] = context[9];
        context[19] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Ident], context[13] ) )
          continue;
        // closed e.1#0 as range 16
        // closed e.Tail#1 as range 18
        //DEBUG: t.0#0: 14
        //DEBUG: e.1#0: 16
        //DEBUG: e.Tail#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.0#0/14 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Ident/13 } Tile{ AsIs: e.1#0/16 } Tile{ HalfReuse: )/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/18 AsIs: >/1 ]] }
        refalrts::reinit_close_bracket(context[4]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[4], context[4] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[7], context[13] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@1/4 (/7 # NativeBlock/13 t.0#0/14 e.1#0/16 )/8 e.Tail#1/18 >/1
        context[16] = context[11];
        context[17] = context[12];
        context[18] = context[9];
        context[19] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[13] ) )
          continue;
        // closed e.1#0 as range 16
        // closed e.Tail#1 as range 18
        //DEBUG: t.0#0: 14
        //DEBUG: e.1#0: 16
        //DEBUG: e.Tail#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # NativeBlock/13 AsIs: t.0#0/14 AsIs: e.1#0/16 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@1/4 } Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@1/4 (/7 s.new#7/13 t.new#8/14 t.new#9/20 e.new#10/16 )/8 e.new#11/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[9];
      context[19] = context[10];
      // closed e.new#11 as range 18
      context[21] = refalrts::tvar_left( context[20], context[16], context[17] );
      if( ! context[21] )
        continue;
      // closed e.new#10 as range 16
      do {
        // </0 & Map@1/4 (/7 # Spec/13 t.0#0/14 (/20 e.3#0/26 )/21 e.2#0/22 )/8 e.Tail#1/24 >/1
        context[22] = context[16];
        context[23] = context[17];
        context[24] = context[18];
        context[25] = context[19];
        context[26] = 0;
        context[27] = 0;
        if( ! refalrts::brackets_term( context[26], context[27], context[20] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_Spec], context[13] ) )
          continue;
        // closed e.3#0 as range 26
        // closed e.2#0 as range 22
        // closed e.Tail#1 as range 24
        //DEBUG: t.0#0: 14
        //DEBUG: e.3#0: 26
        //DEBUG: e.2#0: 22
        //DEBUG: e.Tail#1: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.0#0/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Spec/13 } Tile{ AsIs: (/20 AsIs: e.3#0/26 AsIs: )/21 } Tile{ AsIs: </0 Reuse: & RemovePos-Expr/4 } Tile{ AsIs: e.2#0/22 } >/28 )/29 </30 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/24 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::alloc_close_bracket(vm, context[29]);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::update_name(context[4], functions[efunc_RemovePosm_Expr]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[30] );
        refalrts::link_brackets( context[7], context[29] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[28], context[30] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[7], context[13] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@1/4 (/7 s.EnumSwapDeclaration#2/13 t.0#0/14 s.ScopeClass#2/20 e.2#0/22 )/8 e.Tail#1/24 >/1
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[19];
      if( ! refalrts::svar_term( context[20], context[20] ) )
        continue;
      // closed e.2#0 as range 22
      // closed e.Tail#1 as range 24
      //DEBUG: t.0#0: 14
      //DEBUG: s.ScopeClass#2: 20
      //DEBUG: s.EnumSwapDeclaration#2: 13
      //DEBUG: e.2#0: 22
      //DEBUG: e.Tail#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.0#0/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.EnumSwapDeclaration#2/13 } Tile{ AsIs: s.ScopeClass#2/20 } Tile{ AsIs: e.2#0/22 } Tile{ HalfReuse: )/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/24 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[7], context[13] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@1/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Pass-RemovePos\1*5/4 AsIs: t.Next#1/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_Passm_RemovePos_L1D5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@1/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@2/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@2/4 (/7 s.ChainType#3/25 (/23 e.2#0/21 )/24 (/19 e.4#0/17 )/20 (/15 e.6#0/13 )/16 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_right( context[13], context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_right( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[11], context[12] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.2#0 as range 21
      // closed e.4#0 as range 17
      // closed e.6#0 as range 13
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[25], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: e.2#0: 21
      //DEBUG: e.4#0: 17
      //DEBUG: e.6#0: 13
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.ChainType#3: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & RemovePos-Body$1\1\1=1/7 AsIs: s.ChainType#3/25 AsIs: (/23 AsIs: e.2#0/21 AsIs: )/24 AsIs: (/19 AsIs: e.4#0/17 AsIs: )/20 AsIs: (/15 AsIs: e.6#0/13 AsIs: )/16 HalfReuse: </8 } & AssignOrCondition/26 s.ChainType#3/25/27 >/28 >/29 Tile{ AsIs: </0 } & Map@2/30 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[26], functions[efunc_AssignOrCondition]);
      refalrts::copy_stvar(vm, context[27], context[25]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_gen_Map_Z2]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_gen_RemovePosm_Body_S1L1L1A1]);
      refalrts::reinit_open_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[8] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[26], context[29] );
      res = refalrts::splice_evar( res, context[4], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@2/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & RemovePos-Body$1\1\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_gen_RemovePosm_Body_S1L1L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@2/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@3/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@3/4 (/7 (/15 e.1#0/13 )/16 e.4#0/11 (/23 e.5#0/21 )/24 (/19 e.3#0/17 )/20 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_right( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[11], context[12] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.1#0 as range 13
      // closed e.4#0 as range 11
      // closed e.5#0 as range 21
      // closed e.3#0 as range 17
      // closed e.Tail#1 as range 9
      //DEBUG: e.1#0: 13
      //DEBUG: e.4#0: 11
      //DEBUG: e.5#0: 21
      //DEBUG: e.3#0: 17
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: </7 HalfReuse: & RemovePos-Expr/15 AsIs: e.1#0/13 HalfReuse: >/16 } )/25 </26 & Map@2/27 Tile{ AsIs: e.4#0/11 } >/28 Tile{ AsIs: (/23 } </29 & RemovePos-Expr/30 Tile{ AsIs: e.5#0/21 } >/31 Tile{ AsIs: )/24 AsIs: (/19 } </32 & RemovePos-Blocks/33 Tile{ AsIs: e.3#0/17 } >/34 )/35 )/36 Tile{ HalfReuse: </20 HalfReuse: & Map@3/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_gen_Map_Z2]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_RemovePosm_Expr]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_RemovePosm_Blocks]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_close_bracket(vm, context[36]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[15], functions[efunc_RemovePosm_Expr]);
      refalrts::reinit_close_call(context[16]);
      refalrts::reinit_open_call(context[20]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::link_brackets( context[0], context[36] );
      refalrts::link_brackets( context[19], context[35] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[4], context[25] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[20];
      res = refalrts::splice_evar( res, context[34], context[36] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[24], context[19] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[25], context[27] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & RemovePos-Body$1\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@3/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z3]);
    refalrts::update_name(context[4], functions[efunc_gen_RemovePosm_Body_S1L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@3/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Map@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@4/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@4/4 (/7 e.#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.#0 as range 11
      // closed e.Tail#1 as range 9
      //DEBUG: e.#0: 11
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & RemovePos-Body/7 AsIs: e.#0/11 HalfReuse: >/8 } )/13 </14 & Map@4/15 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[13]);
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[15], functions[efunc_gen_Map_Z4]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_RemovePosm_Body]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[14] );
      refalrts::link_brackets( context[0], context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[13], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@4/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & RemovePos-Blocks\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@4/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z4]);
    refalrts::update_name(context[4], functions[efunc_gen_RemovePosm_Blocks_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@4/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@4/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z4("Map@4", COOKIE1_, COOKIE2_, func_gen_Map_Z4);


static refalrts::FnResult func_gen_Map_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Map@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@5/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@5/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#4 as range 11
      do {
        // </0 & Map@5/4 (/7 s.new#6/13 t.new#7/18 t.new#8/20 e.new#9/14 )/8 e.new#10/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        // closed e.new#10 as range 16
        context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
        if( ! context[19] )
          continue;
        context[21] = refalrts::tvar_left( context[20], context[14], context[15] );
        if( ! context[21] )
          continue;
        // closed e.new#9 as range 14
        do {
          // </0 & Map@5/4 (/7 s.new#11/13 t.new#12/18 s.new#13/20 e.new#14/22 )/8 e.new#15/24 >/1
          context[22] = context[14];
          context[23] = context[15];
          context[24] = context[16];
          context[25] = context[17];
          if( ! refalrts::svar_term( context[20], context[20] ) )
            continue;
          // closed e.new#14 as range 22
          // closed e.new#15 as range 24
          do {
            // </0 & Map@5/4 (/7 # TkVariable/13 t.0#0/18 s.Mode#2/20 e.2#0/26 )/8 e.Tail#1/28 >/1
            context[26] = context[22];
            context[27] = context[23];
            context[28] = context[24];
            context[29] = context[25];
            if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[13] ) )
              continue;
            // closed e.2#0 as range 26
            // closed e.Tail#1 as range 28
            //DEBUG: t.0#0: 18
            //DEBUG: s.Mode#2: 20
            //DEBUG: e.2#0: 26
            //DEBUG: e.Tail#1: 28

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.0#0/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkVariable/13 } Tile{ AsIs: s.Mode#2/20 } Tile{ AsIs: e.2#0/26 } Tile{ HalfReuse: )/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@5/8 AsIs: e.Tail#1/28 AsIs: >/1 ]] }
            refalrts::reinit_close_bracket(context[4]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[7], context[4] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[0], context[0] );
            res = refalrts::splice_evar( res, context[4], context[4] );
            res = refalrts::splice_evar( res, context[26], context[27] );
            res = refalrts::splice_evar( res, context[20], context[20] );
            res = refalrts::splice_evar( res, context[7], context[13] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@5/4 (/7 # TkNewVariable/13 t.0#0/18 s.Mode#2/20 e.2#0/26 )/8 e.Tail#1/28 >/1
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_TkNewVariable], context[13] ) )
            continue;
          // closed e.2#0 as range 26
          // closed e.Tail#1 as range 28
          //DEBUG: t.0#0: 18
          //DEBUG: s.Mode#2: 20
          //DEBUG: e.2#0: 26
          //DEBUG: e.Tail#1: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.0#0/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkNewVariable/13 } Tile{ AsIs: s.Mode#2/20 } Tile{ AsIs: e.2#0/26 } Tile{ HalfReuse: )/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@5/8 AsIs: e.Tail#1/28 AsIs: >/1 ]] }
          refalrts::reinit_close_bracket(context[4]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[4] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[0], context[0] );
          res = refalrts::splice_evar( res, context[4], context[4] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[20], context[20] );
          res = refalrts::splice_evar( res, context[7], context[13] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@5/4 (/7 # Symbol/13 # Name/18 t.1#0/20 e.2#0/22 )/8 e.Tail#1/24 >/1
        context[22] = context[14];
        context[23] = context[15];
        context[24] = context[16];
        context[25] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_Name], context[18] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[13] ) )
          continue;
        // closed e.2#0 as range 22
        // closed e.Tail#1 as range 24
        //DEBUG: t.1#0: 20
        //DEBUG: e.2#0: 22
        //DEBUG: e.Tail#1: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.1#0/20 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Symbol/13 AsIs: # Name/18 } Tile{ AsIs: e.2#0/22 } Tile{ HalfReuse: )/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@5/8 AsIs: e.Tail#1/24 AsIs: >/1 ]] }
        refalrts::reinit_close_bracket(context[4]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[4], context[4] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[7], context[18] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@5/4 (/7 # Brackets/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & RemovePos-Expr/13 AsIs: e.0#0/14 HalfReuse: >/8 } )/18 </19 & Map@5/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[18]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_gen_Map_Z5]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[13], functions[efunc_RemovePosm_Expr]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[0], context[18] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[18], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@5/4 (/7 # ADT-Brackets/13 t.0#0/18 (/22 e.3#0/20 )/23 e.2#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[13] ) )
          continue;
        // closed e.Tail#1 as range 16
        context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
        if( ! context[19] )
          continue;
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        // closed e.3#0 as range 20
        // closed e.2#0 as range 14
        //DEBUG: e.Tail#1: 16
        //DEBUG: t.0#0: 18
        //DEBUG: e.3#0: 20
        //DEBUG: e.2#0: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.0#0/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/13 } Tile{ AsIs: (/22 AsIs: e.3#0/20 AsIs: )/23 } Tile{ AsIs: </0 Reuse: & RemovePos-Expr/4 } Tile{ AsIs: e.2#0/14 } >/24 )/25 </26 Tile{ HalfReuse: & Map@5/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::alloc_close_bracket(vm, context[25]);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::update_name(context[4], functions[efunc_RemovePosm_Expr]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[26] );
        refalrts::link_brackets( context[7], context[25] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[24], context[26] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[7], context[13] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@5/4 (/7 # CallBrackets/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </7 HalfReuse: & RemovePos-Expr/13 AsIs: e.0#0/14 HalfReuse: >/8 } )/18 </19 & Map@5/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[18]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_gen_Map_Z5]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[13], functions[efunc_RemovePosm_Expr]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[0], context[18] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[18], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@5/4 (/7 # Closure/13 e.0#0/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_Closure], context[13] ) )
        continue;
      // closed e.0#0 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.0#0: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Closure/4 HalfReuse: </7 HalfReuse: & RemovePos-Body/13 AsIs: e.0#0/14 HalfReuse: >/8 } )/18 </19 & Map@5/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[18]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_gen_Map_Z5]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Closure]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[13], functions[efunc_RemovePosm_Body]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[0], context[18] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[18], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@5/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@5/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@5/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z5("Map@5", COOKIE1_, COOKIE2_, func_gen_Map_Z5);


static refalrts::FnResult func_gen_Map_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Map@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@6/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@6/4 (/7 s.new#3/13 t.new#4/14 e.new#5/11 )/8 e.new#6/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#6 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[15] = refalrts::tvar_left( context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.new#5 as range 11
      do {
        // </0 & Map@6/4 (/7 # Spec/13 t.0#0/14 e.1#0/16 )/8 e.Tail#1/18 >/1
        context[16] = context[11];
        context[17] = context[12];
        context[18] = context[9];
        context[19] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Spec], context[13] ) )
          continue;
        // closed e.1#0 as range 16
        // closed e.Tail#1 as range 18
        //DEBUG: t.0#0: 14
        //DEBUG: e.1#0: 16
        //DEBUG: e.Tail#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Pass-EnumerateVariables\1$1=1/4 } Tile{ AsIs: t.0#0/14 } </20 & EnumerateVars-Expr/21 0/22 Tile{ AsIs: (/7 HalfReuse: )/13 } Tile{ AsIs: e.1#0/16 } >/23 >/24 </25 Tile{ HalfReuse: & Map@6/8 AsIs: e.Tail#1/18 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_EnumerateVarsm_Expr]);
        refalrts::alloc_number(vm, context[22], 0UL);
        refalrts::alloc_close_call(vm, context[23]);
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::update_name(context[4], functions[efunc_gen_Passm_EnumerateVariables_L1S1A1]);
        refalrts::reinit_close_bracket(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z6]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[20] );
        refalrts::link_brackets( context[7], context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[7], context[13] );
        res = refalrts::splice_evar( res, context[20], context[22] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@6/4 (/7 # Function/13 s.ScopeClass#2/14 (/22 e.3#0/20 )/23 e.2#0/16 )/8 e.Tail#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[9];
      context[19] = context[10];
      if( ! refalrts::svar_term( context[14], context[14] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Function], context[13] ) )
        continue;
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[16], context[17] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      // closed e.3#0 as range 20
      // closed e.2#0 as range 16
      // closed e.Tail#1 as range 18
      //DEBUG: s.ScopeClass#2: 14
      //DEBUG: e.3#0: 20
      //DEBUG: e.2#0: 16
      //DEBUG: e.Tail#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/13 AsIs: s.ScopeClass#2/14 AsIs: (/22 AsIs: e.3#0/20 AsIs: )/23 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Body/4 } 1/24 (/25 )/26 Tile{ AsIs: e.2#0/16 } >/27 )/28 </29 Tile{ HalfReuse: & Map@6/8 AsIs: e.Tail#1/18 AsIs: >/1 ]] }
      refalrts::alloc_number(vm, context[24], 1UL);
      refalrts::alloc_open_bracket(vm, context[25]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Body]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[29] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::link_brackets( context[22], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[27], context[29] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[24], context[26] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@6/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@6/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@6/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@6/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z6("Map@6", COOKIE1_, COOKIE2_, func_gen_Map_Z6);


static refalrts::FnResult func_gen_Map_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & Map@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@7/4 s.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@7/4 s.new#4/9 e.new#5/10 (/7 t.new#6/14 e.new#7/12 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = context[5];
    context[13] = context[6];
    // closed e.new#5 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & Map@7/4 s.Depth#1/9 e.ScopeVars#1/16 (/7 (/14 (/24 e.1#0/22 )/25 e.4#0/20 (/32 e.5#0/30 )/33 (/28 e.3#0/26 )/29 )/15 e.Tail#1/18 )/8 >/1
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = 0;
      context[21] = 0;
      if( ! refalrts::brackets_term( context[20], context[21], context[14] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[20], context[21] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[20], context[21] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_right( context[30], context[31], context[20], context[21] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      // closed e.ScopeVars#1 as range 16
      // closed e.1#0 as range 22
      // closed e.4#0 as range 20
      // closed e.5#0 as range 30
      // closed e.3#0 as range 26
      // closed e.Tail#1 as range 18
      //DEBUG: s.Depth#1: 9
      //DEBUG: e.ScopeVars#1: 16
      //DEBUG: e.1#0: 22
      //DEBUG: e.4#0: 20
      //DEBUG: e.5#0: 30
      //DEBUG: e.3#0: 26
      //DEBUG: e.Tail#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </34 Tile{ HalfReuse: & EnumerateVars-Body$1\1=1/33 AsIs: (/28 AsIs: e.3#0/26 AsIs: )/29 HalfReuse: (/15 } Tile{ AsIs: e.5#0/30 } )/35 s.Depth#1/9/36 Tile{ AsIs: (/32 } Tile{ AsIs: e.4#0/20 } )/37 </38 & EnumerateVars-Expr/39 s.Depth#1/9/40 Tile{ AsIs: (/14 } e.ScopeVars#1/16/41 Tile{ HalfReuse: )/24 AsIs: e.1#0/22 HalfReuse: >/25 } >/43 Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: s.Depth#1/9 AsIs: e.ScopeVars#1/16 AsIs: (/7 } Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::copy_stvar(vm, context[36], context[9]);
      refalrts::alloc_close_bracket(vm, context[37]);
      refalrts::alloc_open_call(vm, context[38]);
      refalrts::alloc_name(vm, context[39], functions[efunc_EnumerateVarsm_Expr]);
      refalrts::copy_stvar(vm, context[40], context[9]);
      refalrts::copy_evar(vm, context[41], context[42], context[16], context[17]);
      refalrts::alloc_close_call(vm, context[43]);
      refalrts::reinit_name(context[33], functions[efunc_gen_EnumerateVarsm_Body_S1L1A1]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::reinit_close_bracket(context[24]);
      refalrts::reinit_close_call(context[25]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::push_stack( vm, context[43] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[38] );
      refalrts::link_brackets( context[14], context[24] );
      refalrts::link_brackets( context[32], context[37] );
      refalrts::link_brackets( context[15], context[35] );
      refalrts::link_brackets( context[28], context[29] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[37], context[40] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[33], context[15] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@7/4 s.Depth#1/9 e.ScopeVars#1/16 (/7 t.Next#1/14 e.Tail#1/18 )/8 >/1
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    // closed e.ScopeVars#1 as range 16
    // closed e.Tail#1 as range 18
    //DEBUG: t.Next#1: 14
    //DEBUG: s.Depth#1: 9
    //DEBUG: e.ScopeVars#1: 16
    //DEBUG: e.Tail#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </20 & EnumerateVars-Body$1\1*1/21 s.Depth#1/9/22 (/23 e.ScopeVars#1/16/24 )/26 Tile{ AsIs: t.Next#1/14 } >/27 Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: s.Depth#1/9 AsIs: e.ScopeVars#1/16 AsIs: (/7 } Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_EnumerateVarsm_Body_S1L1D1]);
    refalrts::copy_stvar(vm, context[22], context[9]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::copy_evar(vm, context[24], context[25], context[16], context[17]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[23], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[20], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@7/4 s.Depth#1/9 e.ScopeVars#1/2 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 2
  //DEBUG: s.Depth#1: 9
  //DEBUG: e.ScopeVars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@7/4 s.Depth#1/9 e.ScopeVars#1/2 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z7("Map@7", COOKIE1_, COOKIE2_, func_gen_Map_Z7);


static refalrts::FnResult func_gen_Map_Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Map@8/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@8/4 s.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@8/4 s.new#4/9 e.new#5/10 (/7 t.new#6/14 e.new#7/12 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = context[5];
    context[13] = context[6];
    // closed e.new#5 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & Map@8/4 s.Depth#1/9 e.ScopeVars#1/16 (/7 (/14 e.#0/20 )/15 e.Tail#1/18 )/8 >/1
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = 0;
      context[21] = 0;
      if( ! refalrts::brackets_term( context[20], context[21], context[14] ) )
        continue;
      // closed e.ScopeVars#1 as range 16
      // closed e.#0 as range 20
      // closed e.Tail#1 as range 18
      //DEBUG: s.Depth#1: 9
      //DEBUG: e.ScopeVars#1: 16
      //DEBUG: e.#0: 20
      //DEBUG: e.Tail#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/22 </23 & EnumerateVars-Body/24 s.Depth#1/9/25 (/26 e.ScopeVars#1/16/27 Tile{ HalfReuse: )/14 AsIs: e.#0/20 HalfReuse: >/15 } )/29 Tile{ AsIs: </0 AsIs: & Map@8/4 AsIs: s.Depth#1/9 AsIs: e.ScopeVars#1/16 AsIs: (/7 } Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[22]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_EnumerateVarsm_Body]);
      refalrts::copy_stvar(vm, context[25], context[9]);
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::copy_evar(vm, context[27], context[28], context[16], context[17]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::reinit_close_bracket(context[14]);
      refalrts::reinit_close_call(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[22], context[29] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[23] );
      refalrts::link_brackets( context[26], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[22], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@8/4 s.Depth#1/9 e.ScopeVars#1/16 (/7 t.Next#1/14 e.Tail#1/18 )/8 >/1
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    // closed e.ScopeVars#1 as range 16
    // closed e.Tail#1 as range 18
    //DEBUG: t.Next#1: 14
    //DEBUG: s.Depth#1: 9
    //DEBUG: e.ScopeVars#1: 16
    //DEBUG: e.Tail#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </20 & EnumerateVars-Blocks\1*1/21 s.Depth#1/9/22 (/23 e.ScopeVars#1/16/24 )/26 Tile{ AsIs: t.Next#1/14 } >/27 Tile{ AsIs: </0 AsIs: & Map@8/4 AsIs: s.Depth#1/9 AsIs: e.ScopeVars#1/16 AsIs: (/7 } Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_EnumerateVarsm_Blocks_L1D1]);
    refalrts::copy_stvar(vm, context[22], context[9]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::copy_evar(vm, context[24], context[25], context[16], context[17]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[23], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[20], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@8/4 s.Depth#1/9 e.ScopeVars#1/2 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 2
  //DEBUG: s.Depth#1: 9
  //DEBUG: e.ScopeVars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@8/4 s.Depth#1/9 e.ScopeVars#1/2 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z8("Map@8", COOKIE1_, COOKIE2_, func_gen_Map_Z8);


static refalrts::FnResult func_gen_MapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MapAccum@1/4 s.Depth#1/5 t.Acc#1/6 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2
  //DEBUG: s.Depth#1: 5
  //DEBUG: t.Acc#1: 6
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: s.Depth#1/5 AsIs: t.Acc#1/6 AsIs: e.Tail#1/2 HalfReuse: (/1 } )/8 >/9 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[1], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z1("MapAccum@1", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z1);


static refalrts::FnResult func_gen_Map_Z9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Map@9/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@9/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@9/4 (/7 # Function/13 s.ScopeClass#2/14 (/17 e.3#0/15 )/18 e.2#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Function], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.3#0 as range 15
      // closed e.2#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.ScopeClass#2: 14
      //DEBUG: e.3#0: 15
      //DEBUG: e.2#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/13 AsIs: s.ScopeClass#2/14 AsIs: (/17 AsIs: e.3#0/15 AsIs: )/18 } Tile{ AsIs: </0 Reuse: & NameNestedBody/4 } (/19 e.3#0/15/20 # SUF/22 )/23 Tile{ AsIs: e.2#0/11 } >/24 )/25 </26 Tile{ HalfReuse: & Map@9/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[19]);
      refalrts::copy_evar(vm, context[20], context[21], context[15], context[16]);
      refalrts::alloc_ident(vm, context[22], identifiers[ident_SUF]);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::update_name(context[4], functions[efunc_NameNestedBody]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z9]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[7], context[25] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[19], context[23] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[24], context[26] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[23] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@9/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@9/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@9/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@9/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z9("Map@9", COOKIE1_, COOKIE2_, func_gen_Map_Z9);


static refalrts::FnResult func_gen_MapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & MapAccum@2/4 e.MainName#1/2 t.Acc#1/9 (/7 e.Tail#1/5 )/8 >/1
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
  // closed e.Tail#1 as range 5
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.MainName#1 as range 2
  //DEBUG: e.Tail#1: 5
  //DEBUG: t.Acc#1: 9
  //DEBUG: e.MainName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: e.MainName#1/2 AsIs: t.Acc#1/9 AsIs: (/7 AsIs: e.Tail#1/5 AsIs: )/8 HalfReuse: (/1 } )/11 >/12 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[1], context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z2("MapAccum@2", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z2);


static refalrts::FnResult func_gen_Map_Z10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Map@10/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@10/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@10/4 (/7 # Function/13 s.ScopeClass#2/14 (/17 e.3#0/15 )/18 e.2#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Function], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.3#0 as range 15
      // closed e.2#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.ScopeClass#2: 14
      //DEBUG: e.3#0: 15
      //DEBUG: e.2#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/13 AsIs: s.ScopeClass#2/14 AsIs: (/17 AsIs: e.3#0/15 AsIs: )/18 } Tile{ AsIs: </0 Reuse: & RemoveAssigns-Sentences/4 } Tile{ AsIs: e.2#0/11 } >/19 )/20 </21 Tile{ HalfReuse: & Map@10/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::update_name(context[4], functions[efunc_RemoveAssignsm_Sentences]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[21] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@10/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@10/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@10/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@10/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z10("Map@10", COOKIE1_, COOKIE2_, func_gen_Map_Z10);


static refalrts::FnResult func_gen_Map_Z11(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@11/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@11/4 t.Next#1/7 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & RemoveAssigns-Sentence/4 AsIs: t.Next#1/7 } >/9 </10 & Map@11/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z11]);
    refalrts::update_name(context[4], functions[efunc_RemoveAssignsm_Sentence]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@11/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@11/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z11("Map@11", COOKIE1_, COOKIE2_, func_gen_Map_Z11);


static refalrts::FnResult func_gen_Map_Z12(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & Map@12/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@12/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@12/4 (/7 # Condition/13 (/16 e.2#0/14 )/17 (/20 e.4#0/18 )/21 (/24 e.6#0/22 )/25 (/28 e.8#0/26 )/29 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Condition], context[11], context[12] );
      if( ! context[13] )
        continue;
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[11], context[12] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[11], context[12] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[11], context[12] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.2#0 as range 14
      // closed e.4#0 as range 18
      // closed e.6#0 as range 22
      // closed e.8#0 as range 26
      // closed e.Tail#1 as range 9
      //DEBUG: e.2#0: 14
      //DEBUG: e.4#0: 18
      //DEBUG: e.6#0: 22
      //DEBUG: e.8#0: 26
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & RemoveAssigns-Conditions\1=1/13 AsIs: (/16 AsIs: e.2#0/14 AsIs: )/17 AsIs: (/20 } Tile{ AsIs: e.8#0/26 } Tile{ AsIs: )/21 } Tile{ AsIs: </0 Reuse: & RemoveAssigns-WindBlocks/4 } (/30 Tile{ AsIs: e.4#0/18 } Tile{ HalfReuse: )/24 AsIs: e.6#0/22 HalfReuse: >/25 HalfReuse: >/28 } Tile{ HalfReuse: </29 HalfReuse: & Map@12/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[13], functions[efunc_gen_RemoveAssignsm_Conditions_L1A1]);
      refalrts::update_name(context[4], functions[efunc_RemoveAssignsm_WindBlocks]);
      refalrts::reinit_close_bracket(context[24]);
      refalrts::reinit_close_call(context[25]);
      refalrts::reinit_close_call(context[28]);
      refalrts::reinit_open_call(context[29]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[29];
      res = refalrts::splice_evar( res, context[24], context[28] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[7], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@12/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & RemoveAssigns-Conditions\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@12/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z12]);
    refalrts::update_name(context[4], functions[efunc_gen_RemoveAssignsm_Conditions_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@12/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@12/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z12("Map@12", COOKIE1_, COOKIE2_, func_gen_Map_Z12);


static refalrts::FnResult func_gen_Reduce_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Reduce@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@1/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Reduce@1/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Reduce@1/4 (/5 e.#0/13 )/6 (/9 (/19 e.2#0/17 )/20 e.1#0/15 )/10 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      if( ! refalrts::brackets_term( context[15], context[16], context[9] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.#0 as range 13
      // closed e.2#0 as range 17
      // closed e.1#0 as range 15
      // closed e.Tail#1 as range 11
      //DEBUG: e.#0: 13
      //DEBUG: e.2#0: 17
      //DEBUG: e.1#0: 15
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@1/4 AsIs: (/5 } (/21 # CallBrackets/22 Tile{ HalfReuse: (/6 HalfReuse: # Closure/9 AsIs: (/19 AsIs: e.2#0/17 AsIs: )/20 AsIs: e.1#0/15 AsIs: )/10 } Tile{ AsIs: e.#0/13 } )/23 )/24 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[21]);
      refalrts::alloc_ident(vm, context[22], identifiers[ident_CallBrackets]);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::reinit_open_bracket(context[6]);
      refalrts::reinit_ident(context[9], identifiers[ident_Closure]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[5], context[24] );
      refalrts::link_brackets( context[21], context[23] );
      refalrts::link_brackets( context[6], context[10] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[6], context[10] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@1/4 t.Acc#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce@1/14 Tile{ AsIs: </0 Reuse: & RemoveAssigns-WindBlocks\1*1/4 AsIs: t.Acc#1/5 AsIs: t.Next#1/9 } >/15 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_Z1]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_gen_RemoveAssignsm_WindBlocks_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@1/4 t.Acc#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Acc#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce@1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z1("Reduce@1", COOKIE1_, COOKIE2_, func_gen_Reduce_Z1);


static refalrts::FnResult func_gen_Map_Z13(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Map@13/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@13/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@13/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#4 as range 11
      do {
        // </0 & Map@13/4 (/7 # Brackets/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & RemoveAssigns-Result/13 AsIs: e.0#0/14 HalfReuse: >/8 } )/18 </19 & Map@13/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[18]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_gen_Map_Z13]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[13], functions[efunc_RemoveAssignsm_Result]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[0], context[18] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[18], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@13/4 (/7 # ADT-Brackets/13 (/20 e.2#0/18 )/21 e.1#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[13] ) )
          continue;
        context[18] = 0;
        context[19] = 0;
        context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
        if( ! context[20] )
          continue;
        refalrts::bracket_pointers(context[20], context[21]);
        // closed e.2#0 as range 18
        // closed e.1#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.2#0: 18
        //DEBUG: e.1#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/13 AsIs: (/20 AsIs: e.2#0/18 AsIs: )/21 } Tile{ AsIs: </0 Reuse: & RemoveAssigns-Result/4 } Tile{ AsIs: e.1#0/14 } >/22 )/23 </24 Tile{ HalfReuse: & Map@13/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_close_bracket(vm, context[23]);
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::update_name(context[4], functions[efunc_RemoveAssignsm_Result]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z13]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[24] );
        refalrts::link_brackets( context[7], context[23] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[22], context[24] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@13/4 (/7 # CallBrackets/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </7 HalfReuse: & RemoveAssigns-Result/13 AsIs: e.0#0/14 HalfReuse: >/8 } )/18 </19 & Map@13/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[18]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_gen_Map_Z13]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[13], functions[efunc_RemoveAssignsm_Result]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[0], context[18] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[18], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@13/4 (/7 # Closure/13 (/20 e.2#0/18 )/21 e.1#0/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_Closure], context[13] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.2#0 as range 18
      // closed e.1#0 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.2#0: 18
      //DEBUG: e.1#0: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Closure/13 AsIs: (/20 AsIs: e.2#0/18 AsIs: )/21 } Tile{ AsIs: </0 Reuse: & RemoveAssigns-Sentences/4 } Tile{ AsIs: e.1#0/14 } >/22 )/23 </24 Tile{ HalfReuse: & Map@13/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::update_name(context[4], functions[efunc_RemoveAssignsm_Sentences]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[7], context[23] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[22], context[24] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@13/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@13/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@13/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@13/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z13("Map@13", COOKIE1_, COOKIE2_, func_gen_Map_Z13);


static refalrts::FnResult func_gen_Map_Z14(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@14/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@14/4 t.Next#1/7 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Pass-FlatNestedFuncs\1$1\1/4 AsIs: t.Next#1/7 } >/9 </10 & Map@14/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z14]);
    refalrts::update_name(context[4], functions[efunc_gen_Passm_FlatNestedFuncs_L1S1L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@14/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@14/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z14("Map@14", COOKIE1_, COOKIE2_, func_gen_Map_Z14);


static refalrts::FnResult func_gen_Map_Z15(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Map@15/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@15/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@15/4 s.new#3/5 t.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & Map@15/4 s.MarkupContext#1/5 (/8 # Function/14 s.ScopeClass#2/15 (/18 e.3#0/16 )/19 e.2#0/12 )/9 e.Tail#1/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      context[14] = refalrts::ident_left( identifiers[ident_Function], context[12], context[13] );
      if( ! context[14] )
        continue;
      // closed e.Tail#1 as range 10
      if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
        continue;
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[12], context[13] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      // closed e.3#0 as range 16
      // closed e.2#0 as range 12
      //DEBUG: s.MarkupContext#1: 5
      //DEBUG: e.Tail#1: 10
      //DEBUG: s.ScopeClass#2: 15
      //DEBUG: e.3#0: 16
      //DEBUG: e.2#0: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </8 HalfReuse: & Pass-FlatNestedFuncs\1$1=1/14 AsIs: s.ScopeClass#2/15 AsIs: (/18 AsIs: e.3#0/16 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ExtractNested/4 AsIs: s.MarkupContext#1/5 } Tile{ AsIs: e.2#0/12 } >/20 >/21 </22 & Map@15/23 Tile{ HalfReuse: s.MarkupContext1 #5/9 AsIs: e.Tail#1/10 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_gen_Map_Z15]);
      refalrts::reinit_open_call(context[8]);
      refalrts::reinit_name(context[14], functions[efunc_gen_Passm_FlatNestedFuncs_L1S1A1]);
      refalrts::update_name(context[4], functions[efunc_ExtractNested]);
      refalrts::reinit_svar( context[9], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      res = refalrts::splice_evar( res, context[20], context[23] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[8], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@15/4 s.MarkupContext#1/5 t.Next#1/8 e.Tail#1/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail#1 as range 10
    //DEBUG: t.Next#1: 8
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.Tail#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/8 } Tile{ AsIs: </0 AsIs: & Map@15/4 AsIs: s.MarkupContext#1/5 } Tile{ AsIs: e.Tail#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@15/4 s.MarkupContext#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.MarkupContext#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@15/4 s.MarkupContext#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z15("Map@15", COOKIE1_, COOKIE2_, func_gen_Map_Z15);


static refalrts::FnResult func_gen_MapAccum_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & MapAccum@3/4 e.ScopeVars#1/2 t.Acc#1/9 (/7 e.Tail#1/5 )/8 >/1
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
  // closed e.Tail#1 as range 5
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 2
  //DEBUG: e.Tail#1: 5
  //DEBUG: t.Acc#1: 9
  //DEBUG: e.ScopeVars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@3/4 AsIs: e.ScopeVars#1/2 AsIs: t.Acc#1/9 AsIs: (/7 AsIs: e.Tail#1/5 AsIs: )/8 HalfReuse: (/1 } )/11 >/12 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z3]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[1], context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z3("MapAccum@3", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z3);


static refalrts::FnResult func_gen_Map_Z16(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & Map@16/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@16/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@16/4 e.new#3/9 (/7 t.new#4/13 e.new#5/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.new#3 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new#5 as range 11
    do {
      // </0 & Map@16/4 e.Context#4/15 (/7 (/13 (/23 e.1#0/21 )/24 e.2#0/19 (/27 e.3#0/25 )/28 )/14 e.Tail#1/17 )/8 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_right( context[25], context[26], context[19], context[20] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      // closed e.Context#4 as range 15
      // closed e.1#0 as range 21
      // closed e.2#0 as range 19
      // closed e.3#0 as range 25
      // closed e.Tail#1 as range 17
      //DEBUG: e.Context#4: 15
      //DEBUG: e.1#0: 21
      //DEBUG: e.2#0: 19
      //DEBUG: e.3#0: 25
      //DEBUG: e.Tail#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: (/23 } e.Context#4/15/29 Tile{ AsIs: e.1#0/21 } Tile{ AsIs: )/24 AsIs: e.2#0/19 AsIs: (/27 AsIs: e.3#0/25 AsIs: )/28 AsIs: )/14 } Tile{ AsIs: </0 AsIs: & Map@16/4 AsIs: e.Context#4/15 AsIs: (/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[29], context[30], context[15], context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[24], context[14] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[13], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@16/4 e.Context#4/15 (/7 t.Next#1/13 e.Tail#1/17 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.Context#4 as range 15
    // closed e.Tail#1 as range 17
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Context#4: 15
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 & ExtractNested-Result-Term$5=2\1$2\1*1/20 (/21 e.Context#4/15/22 )/24 Tile{ AsIs: t.Next#1/13 } >/25 Tile{ AsIs: </0 AsIs: & Map@16/4 AsIs: e.Context#4/15 AsIs: (/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1D1]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::copy_evar(vm, context[22], context[23], context[15], context[16]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@16/4 e.Context#4/2 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Context#4 as range 2
  //DEBUG: e.Context#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@16/4 e.Context#4/2 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z16("Map@16", COOKIE1_, COOKIE2_, func_gen_Map_Z16);


static refalrts::FnResult func_gen_Reduce_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Reduce@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@2/4 e.new#1/2 (/7 t.new#2/9 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & Reduce@2/4 e.ScopeVars#1/11 (/7 t.Acc#1/9 t.Next#1/15 e.Tail#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.ScopeVars#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.ScopeVars#1: 11
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@2/4 AsIs: e.ScopeVars#1/11 AsIs: (/7 } </17 & CheckBorrowed/18 (/19 e.ScopeVars#1/11/20 )/22 Tile{ AsIs: t.Acc#1/9 AsIs: t.Next#1/15 } >/23 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_CheckBorrowed]);
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::copy_evar(vm, context[20], context[21], context[11], context[12]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[19], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[9], context[16] );
    res = refalrts::splice_evar( res, context[17], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@2/4 e.ScopeVars#1/2 (/7 t.Acc#1/9 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 2
  //DEBUG: t.Acc#1: 9
  //DEBUG: e.ScopeVars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce@2/4 e.ScopeVars#1/2 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z2("Reduce@2", COOKIE1_, COOKIE2_, func_gen_Reduce_Z2);


static refalrts::FnResult func_gen_Map_Z17(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Map@17/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@17/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@17/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#4 as range 11
      do {
        // </0 & Map@17/4 (/7 'e'/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::char_term( 'e', context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/18 Tile{ HalfReuse: # Symbol/0 HalfReuse: # Identifier/4 HalfReuse: # VAR/7 AsIs: 'e'/13 AsIs: e.0#0/14 AsIs: )/8 } (/19 # Brackets/20 (/21 # TkVariable/22 'e'/23 e.0#0/14/24 )/26 )/27 </28 & Map@17/29 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[18]);
        refalrts::alloc_open_bracket(vm, context[19]);
        refalrts::alloc_ident(vm, context[20], identifiers[ident_Brackets]);
        refalrts::alloc_open_bracket(vm, context[21]);
        refalrts::alloc_ident(vm, context[22], identifiers[ident_TkVariable]);
        refalrts::alloc_char(vm, context[23], 'e');
        refalrts::copy_evar(vm, context[24], context[25], context[14], context[15]);
        refalrts::alloc_close_bracket(vm, context[26]);
        refalrts::alloc_close_bracket(vm, context[27]);
        refalrts::alloc_open_call(vm, context[28]);
        refalrts::alloc_name(vm, context[29], functions[efunc_gen_Map_Z17]);
        refalrts::reinit_ident(context[0], identifiers[ident_Symbol]);
        refalrts::reinit_ident(context[4], identifiers[ident_Identifier]);
        refalrts::reinit_ident(context[7], identifiers[ident_VAR]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[28] );
        refalrts::link_brackets( context[19], context[27] );
        refalrts::link_brackets( context[21], context[26] );
        refalrts::link_brackets( context[18], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[19], context[29] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@17/4 (/7 s.Mode#2/13 e.0#0/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      // closed e.0#0 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: s.Mode#2: 13
      //DEBUG: e.0#0: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/18 Tile{ HalfReuse: # Symbol/0 HalfReuse: # Identifier/4 HalfReuse: # VAR/7 AsIs: s.Mode#2/13 AsIs: e.0#0/14 AsIs: )/8 } (/19 # TkVariable/20 s.Mode#2/13/21 e.0#0/14/22 )/24 </25 & Map@17/26 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[18]);
      refalrts::alloc_open_bracket(vm, context[19]);
      refalrts::alloc_ident(vm, context[20], identifiers[ident_TkVariable]);
      refalrts::copy_stvar(vm, context[21], context[13]);
      refalrts::copy_evar(vm, context[22], context[23], context[14], context[15]);
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_gen_Map_Z17]);
      refalrts::reinit_ident(context[0], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[4], identifiers[ident_Identifier]);
      refalrts::reinit_ident(context[7], identifiers[ident_VAR]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[19], context[24] );
      refalrts::link_brackets( context[18], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[19], context[26] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@17/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateContext$1\1*2/4 AsIs: t.Next#1/7 } >/11 </12 & Map@17/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z17]);
    refalrts::update_name(context[4], functions[efunc_gen_CreateContext_S1L1D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@17/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@17/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z17("Map@17", COOKIE1_, COOKIE2_, func_gen_Map_Z17);


static refalrts::FnResult func_gen_Map_Z18(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Map@18/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@18/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@18/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#4 as range 11
      do {
        // </0 & Map@18/4 (/7 'e'/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::char_term( 'e', context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/18 Tile{ HalfReuse: # Brackets/0 HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: 'e'/13 AsIs: e.0#0/14 AsIs: )/8 } )/19 </20 & Map@18/21 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[18]);
        refalrts::alloc_close_bracket(vm, context[19]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_gen_Map_Z18]);
        refalrts::reinit_ident(context[0], identifiers[ident_Brackets]);
        refalrts::reinit_open_bracket(context[4]);
        refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[20] );
        refalrts::link_brackets( context[18], context[19] );
        refalrts::link_brackets( context[4], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[19], context[21] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@18/4 (/7 s.Mode#2/13 e.0#0/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      // closed e.0#0 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: s.Mode#2: 13
      //DEBUG: e.0#0: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: s.Mode#2/13 AsIs: e.0#0/14 AsIs: )/8 } Tile{ AsIs: </0 } & Map@18/18 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_Map_Z18]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[4], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[4], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@18/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateContext$2\1*2/4 AsIs: t.Next#1/7 } >/11 </12 & Map@18/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z18]);
    refalrts::update_name(context[4], functions[efunc_gen_CreateContext_S2L1D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@18/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@18/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z18("Map@18", COOKIE1_, COOKIE2_, func_gen_Map_Z18);


static refalrts::FnResult func_gen_Map_Z19(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Map@19/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@19/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@19/4 e.DefinedFunctions#2/9 (/7 t.Next#1/13 e.Tail#1/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.DefinedFunctions#2 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 11
    //DEBUG: e.DefinedFunctions#2: 9
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & FilterDeclarations/16 e.DefinedFunctions#2/9/17 Tile{ AsIs: t.Next#1/13 } >/19 Tile{ AsIs: </0 AsIs: & Map@19/4 AsIs: e.DefinedFunctions#2/9 AsIs: (/7 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_FilterDeclarations]);
    refalrts::copy_evar(vm, context[17], context[18], context[9], context[10]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@19/4 e.DefinedFunctions#2/2 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.DefinedFunctions#2 as range 2
  //DEBUG: e.DefinedFunctions#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@19/4 e.DefinedFunctions#2/2 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z19("Map@19", COOKIE1_, COOKIE2_, func_gen_Map_Z19);


static refalrts::FnResult func_gen_Map_Z20(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Map@20/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@20/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@20/4 (/7 # Function/13 s.ScopeClass#2/19 (/17 e.3#0/15 )/18 # Sentences/14 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Function], context[11], context[12] );
      if( ! context[13] )
        continue;
      context[14] = refalrts::ident_right( identifiers[ident_Sentences], context[11], context[12] );
      if( ! context[14] )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_right( context[15], context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.3#0 as range 15
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[19], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: e.3#0: 15
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.ScopeClass#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Map@20/4 {REMOVED TILE} s.ScopeClass#2/19 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Enum/13 } Tile{ HalfReuse: s.ScopeClass2 #19/17 AsIs: e.3#0/15 AsIs: )/18 HalfReuse: </14 HalfReuse: & Map@20/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::update_ident(context[13], identifiers[ident_Enum]);
      refalrts::reinit_svar( context[17], context[19] );
      refalrts::reinit_open_call(context[14]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z20]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[14] );
      refalrts::link_brackets( context[7], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[17];
      res = refalrts::splice_evar( res, context[7], context[13] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@20/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@20/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@20/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@20/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z20("Map@20", COOKIE1_, COOKIE2_, func_gen_Map_Z20);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & DoMapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@1/4 s.new#1/9 t.new#2/10 e.new#3/2 (/7 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#4 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & DoMapAccum@1/4 s.Depth#1/9 t.Acc#1/10 t.Next#1/16 e.Tail#1/12 (/7 e.Scanned#1/14 )/8 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[14] = context[5];
    context[15] = context[6];
    // closed e.Scanned#1 as range 14
    context[17] = refalrts::tvar_left( context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    // closed e.Tail#1 as range 12
    //DEBUG: t.Acc#1: 10
    //DEBUG: s.Depth#1: 9
    //DEBUG: e.Scanned#1: 14
    //DEBUG: t.Next#1: 16
    //DEBUG: e.Tail#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </18 & DoMapAccum-Aux@1/19 s.Depth#1/9/20 Tile{ AsIs: e.Tail#1/12 } Tile{ AsIs: (/7 AsIs: e.Scanned#1/14 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr\1/4 AsIs: s.Depth#1/9 AsIs: t.Acc#1/10 AsIs: t.Next#1/16 } >/21 )/22 >/23 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
    refalrts::copy_stvar(vm, context[20], context[9]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Expr_L1]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[18] );
    refalrts::link_brackets( context[1], context[22] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[0], context[17] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 s.Depth#1/9 t.Acc#1/10 (/7 e.Scanned#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  //DEBUG: t.Acc#1: 10
  //DEBUG: s.Depth#1: 9
  //DEBUG: e.Scanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 s.Depth#1/9 {REMOVED TILE} (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/10 } Tile{ AsIs: e.Scanned#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_DoMapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & DoMapAccum@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@2/4 e.new#1/2 t.new#2/13 (/11 e.new#3/9 )/12 (/7 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#3 as range 9
  // closed e.new#4 as range 5
  context[14] = refalrts::tvar_right( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & DoMapAccum@2/4 e.MainName#1/15 t.Acc#1/13 (/11 t.Next#1/21 e.Tail#1/17 )/12 (/7 e.Scanned#1/19 )/8 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[5];
    context[20] = context[6];
    // closed e.MainName#1 as range 15
    // closed e.Scanned#1 as range 19
    context[22] = refalrts::tvar_left( context[21], context[17], context[18] );
    if( ! context[22] )
      continue;
    // closed e.Tail#1 as range 17
    //DEBUG: t.Acc#1: 13
    //DEBUG: e.MainName#1: 15
    //DEBUG: e.Scanned#1: 19
    //DEBUG: t.Next#1: 21
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </23 & DoMapAccum-Aux@2/24 e.MainName#1/15/25 Tile{ AsIs: (/11 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Scanned#1/19 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & NameNestedResultRec-Term/4 AsIs: e.MainName#1/15 AsIs: t.Acc#1/13 } Tile{ AsIs: t.Next#1/21 } >/27 )/28 >/29 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
    refalrts::copy_evar(vm, context[25], context[26], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_NameNestedResultRecm_Term]);
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[1], context[28] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@2/4 e.MainName#1/2 t.Acc#1/13 (/11 )/12 (/7 e.Scanned#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MainName#1 as range 2
  // closed e.Scanned#1 as range 5
  //DEBUG: t.Acc#1: 13
  //DEBUG: e.MainName#1: 2
  //DEBUG: e.Scanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum@2/4 e.MainName#1/2 {REMOVED TILE} (/11 )/12 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/13 } Tile{ AsIs: e.Scanned#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z2("DoMapAccum@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z2);


static refalrts::FnResult func_gen_DoMapAccum_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & DoMapAccum@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@3/4 e.new#1/2 t.new#2/13 (/11 e.new#3/9 )/12 (/7 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#3 as range 9
  // closed e.new#4 as range 5
  context[14] = refalrts::tvar_right( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & DoMapAccum@3/4 e.ScopeVars#1/15 t.Acc#1/13 (/11 t.Next#1/21 e.Tail#1/17 )/12 (/7 e.Scanned#1/19 )/8 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[5];
    context[20] = context[6];
    // closed e.ScopeVars#1 as range 15
    // closed e.Scanned#1 as range 19
    context[22] = refalrts::tvar_left( context[21], context[17], context[18] );
    if( ! context[22] )
      continue;
    // closed e.Tail#1 as range 17
    //DEBUG: t.Acc#1: 13
    //DEBUG: e.ScopeVars#1: 15
    //DEBUG: e.Scanned#1: 19
    //DEBUG: t.Next#1: 21
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </23 & DoMapAccum-Aux@3/24 e.ScopeVars#1/15/25 Tile{ AsIs: (/11 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Scanned#1/19 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & UpdateBorrowedVars/4 AsIs: e.ScopeVars#1/15 AsIs: t.Acc#1/13 } Tile{ AsIs: t.Next#1/21 } >/27 )/28 >/29 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_DoMapAccumm_Aux_Z3]);
    refalrts::copy_evar(vm, context[25], context[26], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_UpdateBorrowedVars]);
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[1], context[28] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@3/4 e.ScopeVars#1/2 t.Acc#1/13 (/11 )/12 (/7 e.Scanned#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 2
  // closed e.Scanned#1 as range 5
  //DEBUG: t.Acc#1: 13
  //DEBUG: e.ScopeVars#1: 2
  //DEBUG: e.Scanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum@3/4 e.ScopeVars#1/2 {REMOVED TILE} (/11 )/12 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/13 } Tile{ AsIs: e.Scanned#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z3("DoMapAccum@3", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z3);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & DoMapAccum-Aux@1/4 s.Depth#1/13 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 t.Acc#1/14 e.StepScanned#1/5 )/8 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Scanned#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2
  context[15] = refalrts::tvar_left( context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 5
  //DEBUG: e.Scanned#1: 9
  //DEBUG: s.Depth#1: 13
  //DEBUG: e.Tail#1: 2
  //DEBUG: t.Acc#1: 14
  //DEBUG: e.StepScanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: s.Depth#1/13 } Tile{ AsIs: t.Acc#1/14 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: e.StepScanned#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::splice_to_freelist_open( vm, context[13], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z1("DoMapAccum-Aux@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z1);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & DoMapAccum-Aux@2/4 e.MainName#1/2 (/15 e.Tail#1/13 )/16 (/11 e.Scanned#1/9 )/12 (/7 t.Acc#1/17 e.StepScanned#1/5 )/8 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.MainName#1 as range 2
  // closed e.Tail#1 as range 13
  // closed e.Scanned#1 as range 9
  context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 5
  //DEBUG: e.MainName#1: 2
  //DEBUG: e.Tail#1: 13
  //DEBUG: e.Scanned#1: 9
  //DEBUG: t.Acc#1: 17
  //DEBUG: e.StepScanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/12 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 } Tile{ AsIs: e.MainName#1/2 } Tile{ AsIs: t.Acc#1/17 } Tile{ AsIs: (/15 AsIs: e.Tail#1/13 AsIs: )/16 AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: e.StepScanned#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[11] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z2("DoMapAccum-Aux@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z2);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & DoMapAccum-Aux@3/4 e.ScopeVars#1/2 (/15 e.Tail#1/13 )/16 (/11 e.Scanned#1/9 )/12 (/7 t.Acc#1/17 e.StepScanned#1/5 )/8 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.ScopeVars#1 as range 2
  // closed e.Tail#1 as range 13
  // closed e.Scanned#1 as range 9
  context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 5
  //DEBUG: e.ScopeVars#1: 2
  //DEBUG: e.Tail#1: 13
  //DEBUG: e.Scanned#1: 9
  //DEBUG: t.Acc#1: 17
  //DEBUG: e.StepScanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/12 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@3/4 } Tile{ AsIs: e.ScopeVars#1/2 } Tile{ AsIs: t.Acc#1/17 } Tile{ AsIs: (/15 AsIs: e.Tail#1/13 AsIs: )/16 AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: e.StepScanned#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[11] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z3("DoMapAccum-Aux@3", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z3);


//End of file
