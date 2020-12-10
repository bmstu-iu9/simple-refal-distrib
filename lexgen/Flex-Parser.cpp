// This file automatically generated from 'Flex-Parser.ref'
// Don't edit! Edit 'Flex-Parser.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_572522945_1193440523
#define COOKIE1_ 572522945U
#define COOKIE2_ 1193440523U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Gu_Tokens = 3,
  efunc_gen_Current_L1 = 4,
  efunc_Fetch = 5,
  efunc_gen_MoveNext_L1 = 6,
  efunc_gen_CurrentTag_L1 = 7,
  efunc_gen_CurrentAttr_L1 = 8,
  efunc_gen_CurrentPos_L1 = 9,
  efunc_Flexm_TextFromToken = 10,
  efunc_gen_Error_Z1 = 11,
  efunc_gen_Expect_L1 = 12,
  efunc_ErrorAt = 13,
  efunc_gen_Error_L1 = 14,
  efunc_gen_ParseDescription_L1 = 15,
  efunc_gen_ParseDescriptions_L1 = 16,
  efunc_gen_ParseSubexpr_L1 = 17,
  efunc_gen_ParseDomain_L1 = 18,
  efunc_gen_Error_Z2 = 19,
  efunc_gen_Expect_L1Z1 = 20,
  efunc_gen_ParseRegexp_L1 = 21,
  efunc_gen_Error_Z3 = 22,
  efunc_gen_ParseDomainFrom_L1 = 23,
  efunc_gen_Expect_L1Z2 = 24,
  efunc_Generalize = 25,
  efunc_gen_ParseDomainTo_L1 = 26,
  efunc_gen_Error_Z4 = 27,
  efunc_gen_ParseStatesOpt_L1 = 28,
  efunc_gen_Error_Z5 = 29,
  efunc_gen_ParseStates_L1 = 30,
  efunc_gen_ParseFlush_L1 = 31,
  efunc_gen_ParseNextStateOpt_L1 = 32,
  efunc_gen_Error_Z6 = 33,
  efunc_gen_Error_Z7 = 34,
  efunc_gen_ParseState_L1 = 35,
  efunc_gen_ParseNameOpt_L1 = 36,
  efunc_gen_Expect_L1Z3 = 37,
  efunc_gen_Error_Z8 = 38,
  efunc_gen_ParseAlt_L1 = 39,
  efunc_gen_Expect_L1Z4 = 40,
  efunc_gen_Error_Z9 = 41,
  efunc_gen_ParseTerm_L1 = 42,
  efunc_gen_ParseComplexTerm_L1 = 43,
  efunc_gen_ParseSimpleTerm_L1 = 44,
  efunc_gen_ParseRepeater_L1 = 45,
  efunc_gen_Error_Z10 = 46,
  efunc_gen_ParseSet_L1 = 47,
  efunc_gen_Expect_L1Z5 = 48,
  efunc_gen_Error_Z11 = 49,
  efunc_gen_ParseInvertOpt_L1 = 50,
  efunc_gen_ParseComplexSYMBOLSET_L1 = 51,
  efunc_gen_ParseComplexSYMBOLSETS_L1 = 52,
  efunc_gen_Expect_L1Z6 = 53,
  efunc_gen_Error_Z12 = 54,
  efunc_gen_ParseOptSYMBOL_L1 = 55,
  efunc_gen_Error_Z13 = 56,
  efunc_gen_Expect_L1Z7 = 57,
  efunc_gen_ParseStateNames_L1 = 58,
  efunc_gen_Error_Z14 = 59,
  efunc_gen_ParseNextName_L1 = 60,
  efunc_gen_Expect_L1Z8 = 61,
  efunc_gen_ParseAltTail_L1 = 62,
  efunc_gen_Error_Z15 = 63,
  efunc_Mu = 64,
  efunc_Up = 65,
  efunc_Evm_met = 66,
  efunc_Residue = 67,
  efunc_u_u_Metau_Residue = 68,
  efunc_Current = 69,
  efunc_MoveNext = 70,
  efunc_CurrentTag = 71,
  efunc_CurrentAttr = 72,
  efunc_CurrentPos = 73,
  efunc_Expect = 74,
  efunc_Error = 75,
  efunc_Flexm_Parse = 76,
  efunc_ParseDescription = 77,
  efunc_ParseDescriptions = 78,
  efunc_ParseSubexpr = 79,
  efunc_ParseDomain = 80,
  efunc_ParseDomainFrom = 81,
  efunc_ParseStatesOpt = 82,
  efunc_ParseDomainTo = 83,
  efunc_ParseFlush = 84,
  efunc_ParseNextStateOpt = 85,
  efunc_ParseState = 86,
  efunc_ParseNameOpt = 87,
  efunc_ParseRegexp = 88,
  efunc_ParseComplexTerm = 89,
  efunc_ParseTerm = 90,
  efunc_ParseRepeater = 91,
  efunc_ParseSimpleTerm = 92,
  efunc_ParseSet = 93,
  efunc_ParseInvertOpt = 94,
  efunc_ParseComplexSYMBOLSETS = 95,
  efunc_ParseComplexSYMBOLSET = 96,
  efunc_ParseOptSYMBOL = 97,
  efunc_ParseStates = 98,
  efunc_ParseStateNames = 99,
  efunc_ParseNextName = 100,
  efunc_ParseAlt = 101,
  efunc_ParseAltTail = 102,
  efunc_gen_Error_L1Z1 = 103,
  efunc_gen_Error_Z0 = 104,
  efunc_gen_Error_L1Z2 = 105,
  efunc_gen_Error_Z16 = 106,
  efunc_gen_Expect_L1Z0 = 107,
  efunc_gen_Error_L1Z3 = 108,
  efunc_gen_Error_Z17 = 109,
  efunc_gen_Error_L1Z4 = 110,
  efunc_gen_Error_L1Z5 = 111,
  efunc_gen_Error_L1Z6 = 112,
  efunc_gen_Error_L1Z7 = 113,
  efunc_gen_Error_Z18 = 114,
  efunc_gen_Error_L1Z8 = 115,
  efunc_gen_Error_Z19 = 116,
  efunc_gen_Error_L1Z9 = 117,
  efunc_gen_Error_L1Z10 = 118,
  efunc_gen_Error_Z20 = 119,
  efunc_gen_Error_L1Z11 = 120,
  efunc_gen_Error_Z21 = 121,
  efunc_gen_Error_L1Z12 = 122,
  efunc_gen_Error_L1Z13 = 123,
  efunc_gen_Error_Z22 = 124,
  efunc_gen_Error_L1Z14 = 125,
  efunc_gen_Error_L1Z15 = 126,
  efunc_gen_Error_L1Z0 = 127,
  efunc_gen_Error_L1Z16 = 128,
  efunc_gen_Error_L1Z17 = 129,
  efunc_gen_Error_L1Z18 = 130,
  efunc_gen_Error_L1Z19 = 131,
  efunc_gen_Error_L1Z20 = 132,
  efunc_gen_Error_L1Z21 = 133,
  efunc_gen_Error_L1Z22 = 134,
};


enum ident {
  ident_TName = 0,
  ident_TStateStart = 1,
  ident_TStartRegexp = 2,
  ident_TEOF = 3,
  ident_Subexpr = 4,
  ident_Domain = 5,
  ident_TFlush = 6,
  ident_TSkip = 7,
  ident_TErrorMessage = 8,
  ident_NamedDomain = 9,
  ident_SkippedDomain = 10,
  ident_ErrorDomain = 11,
  ident_TComma = 12,
  ident_NextState = 13,
  ident_NoNextState = 14,
  ident_Regexp = 15,
  ident_ComplexTermSYMBOL = 16,
  ident_TAny = 17,
  ident_TStartGroup = 18,
  ident_TInclude = 19,
  ident_TChar = 20,
  ident_TOpenBracket = 21,
  ident_TAlt = 22,
  ident_TermSYMBOL = 23,
  ident_Term = 24,
  ident_TZeroMany = 25,
  ident_ManyZero = 26,
  ident_TOneMany = 27,
  ident_ManyOne = 28,
  ident_TOptional = 29,
  ident_Optional = 30,
  ident_AnyChar = 31,
  ident_NamedRegexp = 32,
  ident_Char = 33,
  ident_Alt = 34,
  ident_NamedGroup = 35,
  ident_TInvertGroup = 36,
  ident_Inverted = 37,
  ident_Direct = 38,
  ident_TGroupRange = 39,
  ident_Name = 40,
  ident_Mu = 41,
  ident_Up = 42,
  ident_Evm_met = 43,
  ident_Residue = 44,
  ident_u_u_Metau_Residue = 45,
  ident_Gu_Tokens = 46,
  ident_Current = 47,
  ident_MoveNext = 48,
  ident_CurrentTag = 49,
  ident_CurrentAttr = 50,
  ident_CurrentPos = 51,
  ident_Expect = 52,
  ident_Generalize = 53,
  ident_Error = 54,
  ident_Flexm_Parse = 55,
  ident_ParseDescription = 56,
  ident_ParseDescriptions = 57,
  ident_ParseSubexpr = 58,
  ident_ParseDomain = 59,
  ident_ParseDomainFrom = 60,
  ident_ParseStatesOpt = 61,
  ident_ParseDomainTo = 62,
  ident_ParseFlush = 63,
  ident_ParseNextStateOpt = 64,
  ident_ParseState = 65,
  ident_ParseNameOpt = 66,
  ident_ParseRegexp = 67,
  ident_ParseComplexTerm = 68,
  ident_ParseTerm = 69,
  ident_ParseRepeater = 70,
  ident_ParseSimpleTerm = 71,
  ident_ParseSet = 72,
  ident_ParseInvertOpt = 73,
  ident_ParseComplexSYMBOLSETS = 74,
  ident_ParseComplexSYMBOLSET = 75,
  ident_ParseOptSYMBOL = 76,
  ident_ParseStates = 77,
  ident_ParseStateNames = 78,
  ident_ParseNextName = 79,
  ident_ParseAlt = 80,
  ident_ParseAltTail = 81,
  ident_TEquals = 82,
  ident_TArrow = 83,
  ident_TStateEnd = 84,
  ident_TEndRegexp = 85,
  ident_TCloseBracket = 86,
  ident_TEndGroup = 87,
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
  // </0 & Mu/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
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
  // </0 & Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
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
  // </0 & __Meta_Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 AsIs: >/1 ]] }
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


static refalrts::FnResult func_gen_Current_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Current\1/4 (/7 s.Type#2/9 t.Position#2/10 e.Info#2/5 )/8 e.OtherTokens#2/2 >/1
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
  // closed e.OtherTokens#2 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 5
  //DEBUG: e.OtherTokens#2: 2
  //DEBUG: s.Type#2: 9
  //DEBUG: t.Position#2: 10
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/12 s.Type#2/9/13 t.Position#2/10/14 e.Info#2/5/16 )/18 Tile{ AsIs: </0 Reuse: & G_Tokens/4 AsIs: (/7 AsIs: s.Type#2/9 AsIs: t.Position#2/10 AsIs: e.Info#2/5 AsIs: )/8 AsIs: e.OtherTokens#2/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::copy_stvar(vm, context[13], context[9]);
  refalrts::copy_evar(vm, context[14], context[15], context[10], context[11]);
  refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_Gu_Tokens]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[12], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[12], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Current_L1("Current\\1", COOKIE1_, COOKIE2_, func_gen_Current_L1);


static refalrts::FnResult func_Current(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Current/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & G_Tokens/5 >/6 & Current\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Current("Current", COOKIE1_, COOKIE2_, func_Current);


static refalrts::FnResult func_gen_MoveNext_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & MoveNext\1/4 t.First#2/5 e.OtherTokens#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.OtherTokens#2 as range 2
  //DEBUG: t.First#2: 5
  //DEBUG: e.OtherTokens#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.First#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & G_Tokens/4 } Tile{ AsIs: e.OtherTokens#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Gu_Tokens]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MoveNext_L1("MoveNext\\1", COOKIE1_, COOKIE2_, func_gen_MoveNext_L1);


static refalrts::FnResult func_MoveNext(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & MoveNext/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & G_Tokens/5 >/6 & MoveNext\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_MoveNext_L1]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MoveNext("MoveNext", COOKIE1_, COOKIE2_, func_MoveNext);


static refalrts::FnResult func_gen_CurrentTag_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & CurrentTag\1/4 (/7 s.Type#2/9 t.Position#2/10 e.Info#2/5 )/8 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 5
  //DEBUG: s.Type#2: 9
  //DEBUG: t.Position#2: 10
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CurrentTag\1/4 (/7 s.Type#2/9 t.Position#2/10 e.Info#2/5 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Type2 #9/1 ]] }
  refalrts::reinit_svar( context[1], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CurrentTag_L1("CurrentTag\\1", COOKIE1_, COOKIE2_, func_gen_CurrentTag_L1);


static refalrts::FnResult func_CurrentTag(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & CurrentTag/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & G_Tokens/7 >/8 & Current\1/9 >/10 & CurrentTag\1/11 >/12 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CurrentTag("CurrentTag", COOKIE1_, COOKIE2_, func_CurrentTag);


static refalrts::FnResult func_gen_CurrentAttr_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & CurrentAttr\1/4 (/7 s.Type#2/9 t.Position#2/10 e.Info#2/5 )/8 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 5
  //DEBUG: s.Type#2: 9
  //DEBUG: t.Position#2: 10
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CurrentAttr\1/4 (/7 s.Type#2/9 t.Position#2/10 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Info#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CurrentAttr_L1("CurrentAttr\\1", COOKIE1_, COOKIE2_, func_gen_CurrentAttr_L1);


static refalrts::FnResult func_CurrentAttr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & CurrentAttr/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & G_Tokens/7 >/8 & Current\1/9 >/10 & CurrentAttr\1/11 >/12 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_CurrentAttr_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CurrentAttr("CurrentAttr", COOKIE1_, COOKIE2_, func_CurrentAttr);


static refalrts::FnResult func_gen_CurrentPos_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & CurrentPos\1/4 (/7 s.Type#2/9 t.Position#2/10 e.Info#2/5 )/8 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 5
  //DEBUG: s.Type#2: 9
  //DEBUG: t.Position#2: 10
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CurrentPos\1/4 (/7 s.Type#2/9 {REMOVED TILE} e.Info#2/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Position#2/10 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CurrentPos_L1("CurrentPos\\1", COOKIE1_, COOKIE2_, func_gen_CurrentPos_L1);


static refalrts::FnResult func_CurrentPos(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & CurrentPos/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & G_Tokens/7 >/8 & Current\1/9 >/10 & CurrentPos\1/11 >/12 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_CurrentPos_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CurrentPos("CurrentPos", COOKIE1_, COOKIE2_, func_CurrentPos);


static refalrts::FnResult func_gen_Expect_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Expect\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Expect\1/4 s.new#1/5 (/8 e.new#2/6 )/9 s.new#3/10 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Expect\1/4 s.Expected#1/5 (/8 e.ExpectedDescription#1/11 )/9 s.Expected#1/10 >/1
    context[11] = context[6];
    context[12] = context[7];
    if( ! refalrts::repeated_stvar_term( vm, context[10], context[5] ) )
      continue;
    // closed e.ExpectedDescription#1 as range 11
    //DEBUG: s.Expected#1: 5
    //DEBUG: e.ExpectedDescription#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Expected#1/5 {REMOVED TILE} e.ExpectedDescription#1/11 {REMOVED TILE} s.Expected#1/10 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ HalfReuse: </9 } Tile{ HalfReuse: & G_Tokens/8 } >/13 & MoveNext\1/14 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_MoveNext_L1]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_name(context[8], functions[efunc_Gu_Tokens]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Expect\1/4 s.Expected#1/5 (/8 e.ExpectedDescription#1/6 )/9 s.Unexpected#2/10 >/1
  // closed e.ExpectedDescription#1 as range 6
  //DEBUG: s.Expected#1: 5
  //DEBUG: s.Unexpected#2: 10
  //DEBUG: e.ExpectedDescription#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Expected#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Unexpected#2/10 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@1/4 } Tile{ AsIs: (/8 } </11 & Flex-TextFromToken/12 </13 & Fetch/14 </15 & G_Tokens/16 >/17 & Current\1/18 >/19 >/20 Tile{ AsIs: )/9 } Tile{ AsIs: e.ExpectedDescription#1/6 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[11], context[20] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expect_L1("Expect\\1", COOKIE1_, COOKIE2_, func_gen_Expect_L1);


static refalrts::FnResult func_Expect(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Expect/4 s.Expected#1/5 e.ExpectedDescription#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ExpectedDescription#1 as range 2
  //DEBUG: s.Expected#1: 5
  //DEBUG: e.ExpectedDescription#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </6 & Fetch/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 & CurrentTag\1/15 >/16 [*]/17 & Expect\1/18 Tile{ AsIs: s.Expected#1/5 } (/19 Tile{ AsIs: e.ExpectedDescription#1/2 } )/20 {*}/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_closure_head(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_Expect_L1]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_unwrapped_closure(vm, context[21], context[17]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[21] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expect("Expect", COOKIE1_, COOKIE2_, func_Expect);


static refalrts::FnResult func_Generalize(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Generalize/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Generalize/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Generalize/4 s.Tag#1/5 e.Generics-B#1/8 (/14 s.GenericTag#1/16 e.Tags-B#1/17 s.Tag#1/21 e.Tags-E#1/19 )/15 e.Generics-E#1/10 >/1
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
      // closed e.Generics-E#1 as range 10
      if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[19] = context[12];
        context[20] = context[13];
        if( ! refalrts::repeated_stvar_left( vm, context[21], context[5], context[19], context[20] ) )
          continue;
        // closed e.Tags-E#1 as range 19
        //DEBUG: s.Tag#1: 5
        //DEBUG: e.Generics-B#1: 8
        //DEBUG: e.Generics-E#1: 10
        //DEBUG: s.GenericTag#1: 16
        //DEBUG: e.Tags-B#1: 17
        //DEBUG: e.Tags-E#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Generalize/4 s.Tag#1/5 e.Generics-B#1/8 (/14 s.GenericTag#1/16 e.Tags-B#1/17 s.Tag#1/21 e.Tags-E#1/19 )/15 e.Generics-E#1/10 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: s.GenericTag1 #16/1 ]] }
        refalrts::reinit_svar( context[1], context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[17], context[18], context[12], context[13] ) );
    } while ( refalrts::open_evar_advance( context[8], context[9], context[6], context[7] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Generalize/4 s.Tag#1/5 e.Generics#1/2 >/1
  // closed e.Generics#1 as range 2
  //DEBUG: s.Tag#1: 5
  //DEBUG: e.Generics#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Generalize/4 s.Tag#1/5 e.Generics#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Tag1 #5/1 ]] }
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Generalize("Generalize", COOKIE1_, COOKIE2_, func_Generalize);


static refalrts::FnResult func_gen_Error_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Error\1/4 (/7 e.Message#1/5 )/8 (/11 s.Type#2/13 t.Pos#2/14 e.Info#2/9 )/12 >/1
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
  // closed e.Message#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 9
  //DEBUG: e.Message#1: 5
  //DEBUG: s.Type#2: 13
  //DEBUG: t.Pos#2: 14
  //DEBUG: e.Info#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 (/11 s.Type#2/13 {REMOVED TILE} e.Info#2/9 )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/14 } Tile{ AsIs: e.Message#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_ErrorAt]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1("Error\\1", COOKIE1_, COOKIE2_, func_gen_Error_L1);


static refalrts::FnResult func_Error(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Error/4 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Message#1 as range 2
  //DEBUG: e.Message#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & Fetch/6 </7 & G_Tokens/8 >/9 & Current\1/10 >/11 [*]/12 & Error\1/13 (/14 Tile{ AsIs: e.Message#1/2 } )/15 {*}/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_closure_head(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Error_L1]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_unwrapped_closure(vm, context[16], context[12]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Error("Error", COOKIE1_, COOKIE2_, func_Error);


static refalrts::FnResult func_Flexm_Parse(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & Flex-Parse/4 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & G_Tokens/4 AsIs: e.Tokens#1/2 AsIs: >/1 } </5 & Fetch/6 </7 & Fetch/8 </9 & Fetch/10 </11 & G_Tokens/12 >/13 & Current\1/14 >/15 & CurrentTag\1/16 >/17 & ParseDescription\1/18 >/19 </20 & Fetch/21 </22 & Fetch/23 </24 & Fetch/25 </26 & G_Tokens/27 >/28 & Current\1/29 >/30 & CurrentTag\1/31 >/32 & ParseDescriptions\1/33 >/34 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_ParseDescription_L1]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::alloc_name(vm, context[31], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::alloc_name(vm, context[33], functions[efunc_gen_ParseDescriptions_L1]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::update_name(context[4], functions[efunc_Gu_Tokens]);
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[34] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flexm_Parse("Flex-Parse", 0U, 0U, func_Flexm_Parse);


static refalrts::FnResult func_gen_ParseDescription_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseDescription\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseDescription\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseDescription\1/4 # TName/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TName], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & Fetch/1 } </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseSubexpr\1/15 >/16 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseSubexpr_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseDescription\1/4 # TStateStart/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStateStart], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & Fetch/1 } </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseDomain\1/15 >/16 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseDomain_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseDescription\1/4 # TStartRegexp/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStartRegexp], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & Fetch/1 } </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseDomain\1/15 >/16 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseDomain_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseDescription\1/4 # TEOF/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TEOF], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ParseDescription\1/4 # TEOF/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseDescription\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@2/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseDescription_L1("ParseDescription\\1", COOKIE1_, COOKIE2_, func_gen_ParseDescription_L1);


static refalrts::FnResult func_ParseDescription(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseDescription/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseDescription\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseDescription_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseDescription("ParseDescription", COOKIE1_, COOKIE2_, func_ParseDescription);


static refalrts::FnResult func_gen_ParseDescriptions_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & ParseDescriptions\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseDescriptions\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseDescriptions\1/4 # TName/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TName], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & Fetch/1 } </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseDescription\1/15 >/16 </17 & Fetch/18 </19 & Fetch/20 </21 & Fetch/22 </23 & G_Tokens/24 >/25 & Current\1/26 >/27 & CurrentTag\1/28 >/29 & ParseDescriptions\1/30 >/31 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseDescription_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_ParseDescriptions_L1]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[31] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseDescriptions\1/4 # TStateStart/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStateStart], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & Fetch/1 } </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseDescription\1/15 >/16 </17 & Fetch/18 </19 & Fetch/20 </21 & Fetch/22 </23 & G_Tokens/24 >/25 & Current\1/26 >/27 & CurrentTag\1/28 >/29 & ParseDescriptions\1/30 >/31 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseDescription_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_ParseDescriptions_L1]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[31] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseDescriptions\1/4 # TStartRegexp/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStartRegexp], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & Fetch/1 } </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseDescription\1/15 >/16 </17 & Fetch/18 </19 & Fetch/20 </21 & Fetch/22 </23 & G_Tokens/24 >/25 & Current\1/26 >/27 & CurrentTag\1/28 >/29 & ParseDescriptions\1/30 >/31 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseDescription_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_ParseDescriptions_L1]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[31] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseDescriptions\1/4 # TEOF/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TEOF], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ParseDescriptions\1/4 # TEOF/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseDescriptions\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@2/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseDescriptions_L1("ParseDescriptions\\1", COOKIE1_, COOKIE2_, func_gen_ParseDescriptions_L1);


static refalrts::FnResult func_ParseDescriptions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseDescriptions/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseDescriptions\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseDescriptions_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseDescriptions("ParseDescriptions", COOKIE1_, COOKIE2_, func_ParseDescriptions);


static refalrts::FnResult func_gen_ParseSubexpr_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 64 elems
  refalrts::Iter context[64];
  refalrts::zeros( context, 64 );
  // </0 & ParseSubexpr\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSubexpr\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseSubexpr\1/4 # TName/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TName], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 # Subexpr/7 </8 & Fetch/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 & CurrentPos\1/17 >/18 </19 & Fetch/20 </21 & Fetch/22 </23 & G_Tokens/24 >/25 & Current\1/26 >/27 & CurrentAttr\1/28 >/29 </30 & Fetch/31 </32 & G_Tokens/33 >/34 & MoveNext\1/35 >/36 </37 & Fetch/38 </39 & Fetch/40 </41 & Fetch/42 </43 & G_Tokens/44 >/45 & Current\1/46 >/47 & CurrentTag\1/48 >/49 & Expect\1@1/50 >/51 </52 & Fetch/53 </54 & Fetch/55 </56 & Fetch/57 </58 & G_Tokens/59 >/60 & Current\1/61 >/62 & CurrentTag\1/63 Tile{ HalfReuse: >/0 Reuse: & ParseRegexp\1/4 HalfReuse: >/5 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_Subexpr]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_CurrentPos_L1]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_CurrentAttr_L1]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::alloc_name(vm, context[35], functions[efunc_gen_MoveNext_L1]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::alloc_open_call(vm, context[37]);
    refalrts::alloc_name(vm, context[38], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[41]);
    refalrts::alloc_name(vm, context[42], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[43]);
    refalrts::alloc_name(vm, context[44], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[45]);
    refalrts::alloc_name(vm, context[46], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[47]);
    refalrts::alloc_name(vm, context[48], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[49]);
    refalrts::alloc_name(vm, context[50], functions[efunc_gen_Expect_L1Z1]);
    refalrts::alloc_close_call(vm, context[51]);
    refalrts::alloc_open_call(vm, context[52]);
    refalrts::alloc_name(vm, context[53], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[54]);
    refalrts::alloc_name(vm, context[55], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[56]);
    refalrts::alloc_name(vm, context[57], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[58]);
    refalrts::alloc_name(vm, context[59], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[60]);
    refalrts::alloc_name(vm, context[61], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[62]);
    refalrts::alloc_name(vm, context[63], functions[efunc_gen_CurrentTag_L1]);
    refalrts::reinit_close_call(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_ParseRegexp_L1]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[6], context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[52] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[54] );
    refalrts::push_stack( vm, context[62] );
    refalrts::push_stack( vm, context[56] );
    refalrts::push_stack( vm, context[60] );
    refalrts::push_stack( vm, context[58] );
    refalrts::push_stack( vm, context[51] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[49] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[47] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[45] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[63] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSubexpr\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@3/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSubexpr_L1("ParseSubexpr\\1", COOKIE1_, COOKIE2_, func_gen_ParseSubexpr_L1);


static refalrts::FnResult func_ParseSubexpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseSubexpr/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseSubexpr\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseSubexpr_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseSubexpr("ParseSubexpr", COOKIE1_, COOKIE2_, func_ParseSubexpr);


static refalrts::FnResult func_gen_ParseDomain_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 70 elems
  refalrts::Iter context[70];
  refalrts::zeros( context, 70 );
  // </0 & ParseDomain\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseDomain\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseDomain\1/4 # TStateStart/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStateStart], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 # Domain/7 </8 & Fetch/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 & CurrentPos\1/17 >/18 </19 & Fetch/20 </21 & Fetch/22 </23 & Fetch/24 </25 & G_Tokens/26 >/27 & Current\1/28 >/29 & CurrentTag\1/30 >/31 & ParseDomainFrom\1/32 >/33 </34 & Fetch/35 </36 & Fetch/37 </38 & Fetch/39 </40 & G_Tokens/41 >/42 & Current\1/43 >/44 & CurrentTag\1/45 >/46 & Expect\1@2/47 >/48 </49 & Fetch/50 </51 & Generalize/52 </53 & Fetch/54 </55 & Fetch/56 </57 & G_Tokens/58 >/59 & Current\1/60 >/61 & CurrentTag\1/62 >/63 (/64 # TFlush/65 # TName/66 # TSkip/67 # TErrorMessage/68 )/69 Tile{ HalfReuse: >/0 Reuse: & ParseDomainTo\1/4 HalfReuse: >/5 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_Domain]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_CurrentPos_L1]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_ParseDomainFrom_L1]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_open_call(vm, context[34]);
    refalrts::alloc_name(vm, context[35], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[36]);
    refalrts::alloc_name(vm, context[37], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[40]);
    refalrts::alloc_name(vm, context[41], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[42]);
    refalrts::alloc_name(vm, context[43], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[44]);
    refalrts::alloc_name(vm, context[45], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[46]);
    refalrts::alloc_name(vm, context[47], functions[efunc_gen_Expect_L1Z2]);
    refalrts::alloc_close_call(vm, context[48]);
    refalrts::alloc_open_call(vm, context[49]);
    refalrts::alloc_name(vm, context[50], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[51]);
    refalrts::alloc_name(vm, context[52], functions[efunc_Generalize]);
    refalrts::alloc_open_call(vm, context[53]);
    refalrts::alloc_name(vm, context[54], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[55]);
    refalrts::alloc_name(vm, context[56], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[57]);
    refalrts::alloc_name(vm, context[58], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[59]);
    refalrts::alloc_name(vm, context[60], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[61]);
    refalrts::alloc_name(vm, context[62], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[63]);
    refalrts::alloc_open_bracket(vm, context[64]);
    refalrts::alloc_ident(vm, context[65], identifiers[ident_TFlush]);
    refalrts::alloc_ident(vm, context[66], identifiers[ident_TName]);
    refalrts::alloc_ident(vm, context[67], identifiers[ident_TSkip]);
    refalrts::alloc_ident(vm, context[68], identifiers[ident_TErrorMessage]);
    refalrts::alloc_close_bracket(vm, context[69]);
    refalrts::reinit_close_call(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_ParseDomainTo_L1]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[6], context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[49] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[51] );
    refalrts::link_brackets( context[64], context[69] );
    refalrts::push_stack( vm, context[63] );
    refalrts::push_stack( vm, context[53] );
    refalrts::push_stack( vm, context[61] );
    refalrts::push_stack( vm, context[55] );
    refalrts::push_stack( vm, context[59] );
    refalrts::push_stack( vm, context[57] );
    refalrts::push_stack( vm, context[48] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[46] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[44] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[42] );
    refalrts::push_stack( vm, context[40] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[69] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseDomain\1/4 # TStartRegexp/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStartRegexp], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 # Domain/7 </8 & Fetch/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 & CurrentPos\1/17 >/18 </19 & Fetch/20 </21 & Fetch/22 </23 & Fetch/24 </25 & G_Tokens/26 >/27 & Current\1/28 >/29 & CurrentTag\1/30 >/31 & ParseDomainFrom\1/32 >/33 </34 & Fetch/35 </36 & Fetch/37 </38 & Fetch/39 </40 & G_Tokens/41 >/42 & Current\1/43 >/44 & CurrentTag\1/45 >/46 & Expect\1@2/47 >/48 </49 & Fetch/50 </51 & Generalize/52 </53 & Fetch/54 </55 & Fetch/56 </57 & G_Tokens/58 >/59 & Current\1/60 >/61 & CurrentTag\1/62 >/63 (/64 # TFlush/65 # TName/66 # TSkip/67 # TErrorMessage/68 )/69 Tile{ HalfReuse: >/0 Reuse: & ParseDomainTo\1/4 HalfReuse: >/5 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_Domain]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_CurrentPos_L1]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_ParseDomainFrom_L1]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_open_call(vm, context[34]);
    refalrts::alloc_name(vm, context[35], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[36]);
    refalrts::alloc_name(vm, context[37], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[40]);
    refalrts::alloc_name(vm, context[41], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[42]);
    refalrts::alloc_name(vm, context[43], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[44]);
    refalrts::alloc_name(vm, context[45], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[46]);
    refalrts::alloc_name(vm, context[47], functions[efunc_gen_Expect_L1Z2]);
    refalrts::alloc_close_call(vm, context[48]);
    refalrts::alloc_open_call(vm, context[49]);
    refalrts::alloc_name(vm, context[50], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[51]);
    refalrts::alloc_name(vm, context[52], functions[efunc_Generalize]);
    refalrts::alloc_open_call(vm, context[53]);
    refalrts::alloc_name(vm, context[54], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[55]);
    refalrts::alloc_name(vm, context[56], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[57]);
    refalrts::alloc_name(vm, context[58], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[59]);
    refalrts::alloc_name(vm, context[60], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[61]);
    refalrts::alloc_name(vm, context[62], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[63]);
    refalrts::alloc_open_bracket(vm, context[64]);
    refalrts::alloc_ident(vm, context[65], identifiers[ident_TFlush]);
    refalrts::alloc_ident(vm, context[66], identifiers[ident_TName]);
    refalrts::alloc_ident(vm, context[67], identifiers[ident_TSkip]);
    refalrts::alloc_ident(vm, context[68], identifiers[ident_TErrorMessage]);
    refalrts::alloc_close_bracket(vm, context[69]);
    refalrts::reinit_close_call(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_ParseDomainTo_L1]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[6], context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[49] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[51] );
    refalrts::link_brackets( context[64], context[69] );
    refalrts::push_stack( vm, context[63] );
    refalrts::push_stack( vm, context[53] );
    refalrts::push_stack( vm, context[61] );
    refalrts::push_stack( vm, context[55] );
    refalrts::push_stack( vm, context[59] );
    refalrts::push_stack( vm, context[57] );
    refalrts::push_stack( vm, context[48] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[46] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[44] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[42] );
    refalrts::push_stack( vm, context[40] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[69] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseDomain\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@4/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseDomain_L1("ParseDomain\\1", COOKIE1_, COOKIE2_, func_gen_ParseDomain_L1);


static refalrts::FnResult func_ParseDomain(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseDomain/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseDomain\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseDomain_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseDomain("ParseDomain", COOKIE1_, COOKIE2_, func_ParseDomain);


static refalrts::FnResult func_gen_ParseDomainFrom_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & ParseDomainFrom\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseDomainFrom\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseDomainFrom\1/4 # TStateStart/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStateStart], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 </7 & Fetch/8 </9 & Fetch/10 </11 & Fetch/12 </13 & G_Tokens/14 >/15 & Current\1/16 >/17 & CurrentTag\1/18 >/19 & ParseStatesOpt\1/20 >/21 )/22 </23 & Fetch/24 </25 & Fetch/26 </27 & Fetch/28 </29 & G_Tokens/30 >/31 & Current\1/32 >/33 Tile{ HalfReuse: & CurrentTag\1/0 HalfReuse: >/4 HalfReuse: & ParseRegexp\1/5 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_ParseStatesOpt_L1]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::reinit_name(context[0], functions[efunc_gen_CurrentTag_L1]);
    refalrts::reinit_close_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_ParseRegexp_L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[29] );
    refalrts::link_brackets( context[6], context[22] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[33] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseDomainFrom\1/4 # TStartRegexp/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStartRegexp], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 </7 & Fetch/8 </9 & Fetch/10 </11 & Fetch/12 </13 & G_Tokens/14 >/15 & Current\1/16 >/17 & CurrentTag\1/18 >/19 & ParseStatesOpt\1/20 >/21 )/22 </23 & Fetch/24 </25 & Fetch/26 </27 & Fetch/28 </29 & G_Tokens/30 >/31 & Current\1/32 >/33 Tile{ HalfReuse: & CurrentTag\1/0 HalfReuse: >/4 HalfReuse: & ParseRegexp\1/5 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_ParseStatesOpt_L1]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::reinit_name(context[0], functions[efunc_gen_CurrentTag_L1]);
    refalrts::reinit_close_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_ParseRegexp_L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[29] );
    refalrts::link_brackets( context[6], context[22] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[33] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseDomainFrom\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@5/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseDomainFrom_L1("ParseDomainFrom\\1", COOKIE1_, COOKIE2_, func_gen_ParseDomainFrom_L1);


static refalrts::FnResult func_ParseDomainFrom(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseDomainFrom/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseDomainFrom\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseDomainFrom_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseDomainFrom("ParseDomainFrom", COOKIE1_, COOKIE2_, func_ParseDomainFrom);


static refalrts::FnResult func_gen_ParseStatesOpt_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseStatesOpt\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseStatesOpt\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseStatesOpt\1/4 # TStateStart/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStateStart], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & Fetch/1 } </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseStates\1/15 >/16 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseStates_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseStatesOpt\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseStatesOpt\1/4 s.Other#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseStatesOpt_L1("ParseStatesOpt\\1", COOKIE1_, COOKIE2_, func_gen_ParseStatesOpt_L1);


static refalrts::FnResult func_ParseStatesOpt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseStatesOpt/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseStatesOpt\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseStatesOpt_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseStatesOpt("ParseStatesOpt", COOKIE1_, COOKIE2_, func_ParseStatesOpt);


static refalrts::FnResult func_gen_ParseDomainTo_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & ParseDomainTo\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseDomainTo\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseDomainTo\1/4 # TFlush/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TFlush], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & Fetch/1 } </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseFlush\1/15 >/16 </17 & Fetch/18 </19 & Fetch/20 </21 & Fetch/22 </23 & G_Tokens/24 >/25 & Current\1/26 >/27 & CurrentTag\1/28 >/29 & ParseNextStateOpt\1/30 >/31 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseFlush_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_ParseNextStateOpt_L1]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[31] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseDomainTo\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@6/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z6]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseDomainTo_L1("ParseDomainTo\\1", COOKIE1_, COOKIE2_, func_gen_ParseDomainTo_L1);


static refalrts::FnResult func_ParseDomainTo(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & ParseDomainTo/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Generalize/5 </6 & Fetch/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 & CurrentTag\1/15 >/16 (/17 # TFlush/18 # TName/19 # TSkip/20 # TErrorMessage/21 )/22 >/23 & ParseDomainTo\1/24 >/25 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Generalize]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_TFlush]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_TName]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_TSkip]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_TErrorMessage]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_gen_ParseDomainTo_L1]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[17], context[22] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[25] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseDomainTo("ParseDomainTo", COOKIE1_, COOKIE2_, func_ParseDomainTo);


static refalrts::FnResult func_gen_ParseFlush_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & ParseFlush\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseFlush\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseFlush\1/4 # TName/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TName], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 # NamedDomain/7 </8 & Fetch/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 & CurrentAttr\1/17 >/18 )/19 </20 & Fetch/21 </22 Tile{ HalfReuse: & G_Tokens/0 HalfReuse: >/4 HalfReuse: & MoveNext\1/5 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_NamedDomain]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_CurrentAttr_L1]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::reinit_name(context[0], functions[efunc_Gu_Tokens]);
    refalrts::reinit_close_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_MoveNext_L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[22] );
    refalrts::link_brackets( context[6], context[19] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseFlush\1/4 # TSkip/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TSkip], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # SkippedDomain/6 </7 & Fetch/8 </9 Tile{ HalfReuse: & G_Tokens/0 HalfReuse: >/4 HalfReuse: & MoveNext\1/5 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[6], identifiers[ident_SkippedDomain]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::reinit_name(context[0], functions[efunc_Gu_Tokens]);
    refalrts::reinit_close_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_MoveNext_L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseFlush\1/4 # TErrorMessage/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TErrorMessage], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 # ErrorDomain/7 </8 & Fetch/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 & CurrentAttr\1/17 >/18 )/19 </20 & Fetch/21 </22 Tile{ HalfReuse: & G_Tokens/0 HalfReuse: >/4 HalfReuse: & MoveNext\1/5 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_ErrorDomain]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_CurrentAttr_L1]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::reinit_name(context[0], functions[efunc_Gu_Tokens]);
    refalrts::reinit_close_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_MoveNext_L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[22] );
    refalrts::link_brackets( context[6], context[19] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseFlush\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@7/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseFlush_L1("ParseFlush\\1", COOKIE1_, COOKIE2_, func_gen_ParseFlush_L1);


static refalrts::FnResult func_ParseFlush(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseFlush/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseFlush\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseFlush_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseFlush("ParseFlush", COOKIE1_, COOKIE2_, func_ParseFlush);


static refalrts::FnResult func_gen_ParseNextStateOpt_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & ParseNextStateOpt\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseNextStateOpt\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseNextStateOpt\1/4 # TComma/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TComma], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & G_Tokens/1 } >/6 & MoveNext\1/7 >/8 (/9 # NextState/10 </11 & Fetch/12 </13 & Fetch/14 </15 & Fetch/16 </17 & G_Tokens/18 >/19 & Current\1/20 >/21 & CurrentTag\1/22 >/23 & ParseState\1/24 >/25 )/26 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_gen_MoveNext_L1]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_ident(vm, context[10], identifiers[ident_NextState]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_ParseState_L1]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
    refalrts::link_brackets( context[9], context[26] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseNextStateOpt\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseNextStateOpt\1/4 s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoNextState/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_NoNextState]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseNextStateOpt_L1("ParseNextStateOpt\\1", COOKIE1_, COOKIE2_, func_gen_ParseNextStateOpt_L1);


static refalrts::FnResult func_ParseNextStateOpt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseNextStateOpt/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseNextStateOpt\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseNextStateOpt_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseNextStateOpt("ParseNextStateOpt", COOKIE1_, COOKIE2_, func_ParseNextStateOpt);


static refalrts::FnResult func_gen_ParseState_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & ParseState\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseState\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseState\1/4 # TStateStart/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStateStart], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & G_Tokens/1 } >/6 & MoveNext\1/7 >/8 (/9 </10 & Fetch/11 </12 & Fetch/13 </14 & Fetch/15 </16 & G_Tokens/17 >/18 & Current\1/19 >/20 & CurrentTag\1/21 >/22 & ParseNameOpt\1/23 >/24 )/25 </26 & Fetch/27 </28 & Fetch/29 </30 & Fetch/31 </32 & G_Tokens/33 >/34 & Current\1/35 >/36 & CurrentTag\1/37 >/38 & Expect\1@3/39 >/40 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_gen_MoveNext_L1]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_ParseNameOpt_L1]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::alloc_name(vm, context[35], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::alloc_name(vm, context[37], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_gen_Expect_L1Z3]);
    refalrts::alloc_close_call(vm, context[40]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
    refalrts::push_stack( vm, context[40] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[32] );
    refalrts::link_brackets( context[9], context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[40] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseState\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@8/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseState_L1("ParseState\\1", COOKIE1_, COOKIE2_, func_gen_ParseState_L1);


static refalrts::FnResult func_ParseState(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseState/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseState\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseState_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseState("ParseState", COOKIE1_, COOKIE2_, func_ParseState);


static refalrts::FnResult func_gen_ParseNameOpt_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ParseNameOpt\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseNameOpt\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseNameOpt\1/4 # TName/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TName], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & G_Tokens/1 } >/6 & MoveNext\1/7 >/8 </9 & Fetch/10 </11 & Fetch/12 </13 & G_Tokens/14 >/15 & Current\1/16 >/17 & CurrentAttr\1/18 >/19 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_gen_MoveNext_L1]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_CurrentAttr_L1]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseNameOpt\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseNameOpt\1/4 s.Other#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseNameOpt_L1("ParseNameOpt\\1", COOKIE1_, COOKIE2_, func_gen_ParseNameOpt_L1);


static refalrts::FnResult func_ParseNameOpt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseNameOpt/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseNameOpt\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseNameOpt_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseNameOpt("ParseNameOpt", COOKIE1_, COOKIE2_, func_ParseNameOpt);


static refalrts::FnResult func_gen_ParseRegexp_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  // </0 & ParseRegexp\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseRegexp\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseRegexp\1/4 # TStartRegexp/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStartRegexp], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & G_Tokens/1 } >/6 & MoveNext\1/7 >/8 (/9 # Regexp/10 </11 & Fetch/12 </13 & Generalize/14 </15 & Fetch/16 </17 & Fetch/18 </19 & G_Tokens/20 >/21 & Current\1/22 >/23 & CurrentTag\1/24 >/25 (/26 # ComplexTermSYMBOL/27 # TAny/28 # TStartGroup/29 # TInclude/30 # TChar/31 # TOpenBracket/32 # TAlt/33 )/34 >/35 & ParseAlt\1/36 >/37 )/38 </39 & Fetch/40 </41 & Fetch/42 </43 & Fetch/44 </45 & G_Tokens/46 >/47 & Current\1/48 >/49 & CurrentTag\1/50 >/51 & Expect\1@4/52 >/53 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_gen_MoveNext_L1]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_ident(vm, context[10], identifiers[ident_Regexp]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Generalize]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::alloc_ident(vm, context[27], identifiers[ident_ComplexTermSYMBOL]);
    refalrts::alloc_ident(vm, context[28], identifiers[ident_TAny]);
    refalrts::alloc_ident(vm, context[29], identifiers[ident_TStartGroup]);
    refalrts::alloc_ident(vm, context[30], identifiers[ident_TInclude]);
    refalrts::alloc_ident(vm, context[31], identifiers[ident_TChar]);
    refalrts::alloc_ident(vm, context[32], identifiers[ident_TOpenBracket]);
    refalrts::alloc_ident(vm, context[33], identifiers[ident_TAlt]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_gen_ParseAlt_L1]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::alloc_open_call(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[41]);
    refalrts::alloc_name(vm, context[42], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[43]);
    refalrts::alloc_name(vm, context[44], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[45]);
    refalrts::alloc_name(vm, context[46], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[47]);
    refalrts::alloc_name(vm, context[48], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[49]);
    refalrts::alloc_name(vm, context[50], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[51]);
    refalrts::alloc_name(vm, context[52], functions[efunc_gen_Expect_L1Z4]);
    refalrts::alloc_close_call(vm, context[53]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
    refalrts::push_stack( vm, context[53] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[51] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[49] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[47] );
    refalrts::push_stack( vm, context[45] );
    refalrts::link_brackets( context[9], context[38] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[26], context[34] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[53] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseRegexp\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@9/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseRegexp_L1("ParseRegexp\\1", COOKIE1_, COOKIE2_, func_gen_ParseRegexp_L1);


static refalrts::FnResult func_ParseRegexp(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseRegexp/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseRegexp\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseRegexp_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseRegexp("ParseRegexp", COOKIE1_, COOKIE2_, func_ParseRegexp);


static refalrts::FnResult func_gen_ParseComplexTerm_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  // </0 & ParseComplexTerm\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseComplexTerm\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseComplexTerm\1/4 # ComplexTermSYMBOL/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ComplexTermSYMBOL], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & Generalize/1 } </6 & Fetch/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 & CurrentTag\1/15 >/16 (/17 # TermSYMBOL/18 # TAny/19 # TStartGroup/20 # TInclude/21 # TChar/22 # TOpenBracket/23 )/24 >/25 & ParseTerm\1/26 >/27 </28 & Fetch/29 </30 & Generalize/31 </32 & Fetch/33 </34 & Fetch/35 </36 & G_Tokens/37 >/38 & Current\1/39 >/40 & CurrentTag\1/41 >/42 (/43 # ComplexTermSYMBOL/44 # TAny/45 # TStartGroup/46 # TInclude/47 # TChar/48 # TOpenBracket/49 )/50 >/51 & ParseComplexTerm\1/52 >/53 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_ident(vm, context[18], identifiers[ident_TermSYMBOL]);
    refalrts::alloc_ident(vm, context[19], identifiers[ident_TAny]);
    refalrts::alloc_ident(vm, context[20], identifiers[ident_TStartGroup]);
    refalrts::alloc_ident(vm, context[21], identifiers[ident_TInclude]);
    refalrts::alloc_ident(vm, context[22], identifiers[ident_TChar]);
    refalrts::alloc_ident(vm, context[23], identifiers[ident_TOpenBracket]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_gen_ParseTerm_L1]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_Generalize]);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[34]);
    refalrts::alloc_name(vm, context[35], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[36]);
    refalrts::alloc_name(vm, context[37], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[40]);
    refalrts::alloc_name(vm, context[41], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[42]);
    refalrts::alloc_open_bracket(vm, context[43]);
    refalrts::alloc_ident(vm, context[44], identifiers[ident_ComplexTermSYMBOL]);
    refalrts::alloc_ident(vm, context[45], identifiers[ident_TAny]);
    refalrts::alloc_ident(vm, context[46], identifiers[ident_TStartGroup]);
    refalrts::alloc_ident(vm, context[47], identifiers[ident_TInclude]);
    refalrts::alloc_ident(vm, context[48], identifiers[ident_TChar]);
    refalrts::alloc_ident(vm, context[49], identifiers[ident_TOpenBracket]);
    refalrts::alloc_close_bracket(vm, context[50]);
    refalrts::alloc_close_call(vm, context[51]);
    refalrts::alloc_name(vm, context[52], functions[efunc_gen_ParseComplexTerm_L1]);
    refalrts::alloc_close_call(vm, context[53]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Generalize]);
    refalrts::push_stack( vm, context[53] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[51] );
    refalrts::push_stack( vm, context[30] );
    refalrts::link_brackets( context[43], context[50] );
    refalrts::push_stack( vm, context[42] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[40] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[5] );
    refalrts::link_brackets( context[17], context[24] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[53] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseComplexTerm\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseComplexTerm\1/4 s.Other#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseComplexTerm_L1("ParseComplexTerm\\1", COOKIE1_, COOKIE2_, func_gen_ParseComplexTerm_L1);


static refalrts::FnResult func_ParseComplexTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & ParseComplexTerm/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Generalize/5 </6 & Fetch/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 & CurrentTag\1/15 >/16 (/17 # ComplexTermSYMBOL/18 # TAny/19 # TStartGroup/20 # TInclude/21 # TChar/22 # TOpenBracket/23 )/24 >/25 & ParseComplexTerm\1/26 >/27 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Generalize]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_ComplexTermSYMBOL]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_TAny]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_TStartGroup]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_TInclude]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_TChar]);
  refalrts::alloc_ident(vm, context[23], identifiers[ident_TOpenBracket]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_gen_ParseComplexTerm_L1]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[17], context[24] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseComplexTerm("ParseComplexTerm", COOKIE1_, COOKIE2_, func_ParseComplexTerm);


static refalrts::FnResult func_gen_ParseTerm_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & ParseTerm\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseTerm\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseTerm\1/4 # TermSYMBOL/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TermSYMBOL], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 # Term/7 </8 & Fetch/9 </10 & Fetch/11 </12 & Fetch/13 </14 & G_Tokens/15 >/16 & Current\1/17 >/18 & CurrentTag\1/19 >/20 & ParseSimpleTerm\1/21 >/22 </23 & Fetch/24 </25 & Fetch/26 </27 & Fetch/28 </29 & G_Tokens/30 >/31 & Current\1/32 >/33 & CurrentTag\1/34 Tile{ HalfReuse: >/0 Reuse: & ParseRepeater\1/4 HalfReuse: >/5 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_Term]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_ParseSimpleTerm_L1]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_name(vm, context[34], functions[efunc_gen_CurrentTag_L1]);
    refalrts::reinit_close_call(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_ParseRepeater_L1]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[6], context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[34] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseTerm\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@10/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseTerm_L1("ParseTerm\\1", COOKIE1_, COOKIE2_, func_gen_ParseTerm_L1);


static refalrts::FnResult func_ParseTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & ParseTerm/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Generalize/5 </6 & Fetch/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 & CurrentTag\1/15 >/16 (/17 # TermSYMBOL/18 # TAny/19 # TStartGroup/20 # TInclude/21 # TChar/22 # TOpenBracket/23 )/24 >/25 & ParseTerm\1/26 >/27 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Generalize]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_TermSYMBOL]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_TAny]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_TStartGroup]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_TInclude]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_TChar]);
  refalrts::alloc_ident(vm, context[23], identifiers[ident_TOpenBracket]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_gen_ParseTerm_L1]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[17], context[24] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseTerm("ParseTerm", COOKIE1_, COOKIE2_, func_ParseTerm);


static refalrts::FnResult func_gen_ParseRepeater_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & ParseRepeater\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseRepeater\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseRepeater\1/4 # TZeroMany/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TZeroMany], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # ManyZero/6 </7 & Fetch/8 </9 Tile{ HalfReuse: & G_Tokens/0 HalfReuse: >/4 HalfReuse: & MoveNext\1/5 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[6], identifiers[ident_ManyZero]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::reinit_name(context[0], functions[efunc_Gu_Tokens]);
    refalrts::reinit_close_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_MoveNext_L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseRepeater\1/4 # TOneMany/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TOneMany], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # ManyOne/6 </7 & Fetch/8 </9 Tile{ HalfReuse: & G_Tokens/0 HalfReuse: >/4 HalfReuse: & MoveNext\1/5 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[6], identifiers[ident_ManyOne]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::reinit_name(context[0], functions[efunc_Gu_Tokens]);
    refalrts::reinit_close_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_MoveNext_L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseRepeater\1/4 # TOptional/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TOptional], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Optional/6 </7 & Fetch/8 </9 Tile{ HalfReuse: & G_Tokens/0 HalfReuse: >/4 HalfReuse: & MoveNext\1/5 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[6], identifiers[ident_Optional]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::reinit_name(context[0], functions[efunc_Gu_Tokens]);
    refalrts::reinit_close_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_MoveNext_L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseRepeater\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseRepeater\1/4 s.Other#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseRepeater_L1("ParseRepeater\\1", COOKIE1_, COOKIE2_, func_gen_ParseRepeater_L1);


static refalrts::FnResult func_ParseRepeater(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseRepeater/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseRepeater\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseRepeater_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseRepeater("ParseRepeater", COOKIE1_, COOKIE2_, func_ParseRepeater);


static refalrts::FnResult func_gen_ParseSimpleTerm_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  // </0 & ParseSimpleTerm\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSimpleTerm\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseSimpleTerm\1/4 # TAny/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TAny], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # AnyChar/6 </7 & Fetch/8 </9 Tile{ HalfReuse: & G_Tokens/0 HalfReuse: >/4 HalfReuse: & MoveNext\1/5 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[6], identifiers[ident_AnyChar]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::reinit_name(context[0], functions[efunc_Gu_Tokens]);
    refalrts::reinit_close_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_MoveNext_L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseSimpleTerm\1/4 # TStartGroup/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStartGroup], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & Fetch/1 } </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseSet\1/15 >/16 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseSet_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseSimpleTerm\1/4 # TInclude/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TInclude], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 # NamedRegexp/7 </8 & Fetch/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 & CurrentAttr\1/17 >/18 )/19 </20 & Fetch/21 </22 Tile{ HalfReuse: & G_Tokens/0 HalfReuse: >/4 HalfReuse: & MoveNext\1/5 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_NamedRegexp]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_CurrentAttr_L1]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::reinit_name(context[0], functions[efunc_Gu_Tokens]);
    refalrts::reinit_close_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_MoveNext_L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[22] );
    refalrts::link_brackets( context[6], context[19] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseSimpleTerm\1/4 # TChar/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TChar], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 # Char/7 </8 & Fetch/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 & CurrentAttr\1/17 >/18 )/19 </20 & Fetch/21 </22 Tile{ HalfReuse: & G_Tokens/0 HalfReuse: >/4 HalfReuse: & MoveNext\1/5 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_Char]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_CurrentAttr_L1]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::reinit_name(context[0], functions[efunc_Gu_Tokens]);
    refalrts::reinit_close_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_MoveNext_L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[22] );
    refalrts::link_brackets( context[6], context[19] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseSimpleTerm\1/4 # TOpenBracket/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TOpenBracket], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & G_Tokens/1 } >/6 & MoveNext\1/7 >/8 (/9 # Alt/10 </11 & Fetch/12 </13 & Generalize/14 </15 & Fetch/16 </17 & Fetch/18 </19 & G_Tokens/20 >/21 & Current\1/22 >/23 & CurrentTag\1/24 >/25 (/26 # ComplexTermSYMBOL/27 # TAny/28 # TStartGroup/29 # TInclude/30 # TChar/31 # TOpenBracket/32 # TAlt/33 )/34 >/35 & ParseAlt\1/36 >/37 )/38 </39 & Fetch/40 </41 & Fetch/42 </43 & Fetch/44 </45 & G_Tokens/46 >/47 & Current\1/48 >/49 & CurrentTag\1/50 >/51 & Expect\1@5/52 >/53 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_gen_MoveNext_L1]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_ident(vm, context[10], identifiers[ident_Alt]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Generalize]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::alloc_ident(vm, context[27], identifiers[ident_ComplexTermSYMBOL]);
    refalrts::alloc_ident(vm, context[28], identifiers[ident_TAny]);
    refalrts::alloc_ident(vm, context[29], identifiers[ident_TStartGroup]);
    refalrts::alloc_ident(vm, context[30], identifiers[ident_TInclude]);
    refalrts::alloc_ident(vm, context[31], identifiers[ident_TChar]);
    refalrts::alloc_ident(vm, context[32], identifiers[ident_TOpenBracket]);
    refalrts::alloc_ident(vm, context[33], identifiers[ident_TAlt]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_gen_ParseAlt_L1]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::alloc_open_call(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[41]);
    refalrts::alloc_name(vm, context[42], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[43]);
    refalrts::alloc_name(vm, context[44], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[45]);
    refalrts::alloc_name(vm, context[46], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[47]);
    refalrts::alloc_name(vm, context[48], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[49]);
    refalrts::alloc_name(vm, context[50], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[51]);
    refalrts::alloc_name(vm, context[52], functions[efunc_gen_Expect_L1Z5]);
    refalrts::alloc_close_call(vm, context[53]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
    refalrts::push_stack( vm, context[53] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[51] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[49] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[47] );
    refalrts::push_stack( vm, context[45] );
    refalrts::link_brackets( context[9], context[38] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[26], context[34] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[53] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSimpleTerm\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@11/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z11]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSimpleTerm_L1("ParseSimpleTerm\\1", COOKIE1_, COOKIE2_, func_gen_ParseSimpleTerm_L1);


static refalrts::FnResult func_ParseSimpleTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseSimpleTerm/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseSimpleTerm\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseSimpleTerm_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseSimpleTerm("ParseSimpleTerm", COOKIE1_, COOKIE2_, func_ParseSimpleTerm);


static refalrts::FnResult func_gen_ParseSet_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 72 elems
  refalrts::Iter context[72];
  refalrts::zeros( context, 72 );
  // </0 & ParseSet\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSet\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseSet\1/4 # TStartGroup/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStartGroup], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & G_Tokens/1 } >/6 & MoveNext\1/7 >/8 (/9 # NamedGroup/10 </11 & Fetch/12 </13 & Fetch/14 </15 & Fetch/16 </17 & G_Tokens/18 >/19 & Current\1/20 >/21 & CurrentTag\1/22 >/23 & ParseInvertOpt\1/24 >/25 </26 & Fetch/27 </28 & Fetch/29 </30 & Fetch/31 </32 & G_Tokens/33 >/34 & Current\1/35 >/36 & CurrentTag\1/37 >/38 & ParseComplexSYMBOLSET\1/39 >/40 </41 & Fetch/42 </43 & Fetch/44 </45 & Fetch/46 </47 & G_Tokens/48 >/49 & Current\1/50 >/51 & CurrentTag\1/52 >/53 & ParseComplexSYMBOLSETS\1/54 >/55 </56 & Fetch/57 </58 & Fetch/59 </60 & Fetch/61 </62 & G_Tokens/63 >/64 & Current\1/65 >/66 & CurrentTag\1/67 >/68 & Expect\1@6/69 >/70 )/71 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_gen_MoveNext_L1]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_ident(vm, context[10], identifiers[ident_NamedGroup]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_ParseInvertOpt_L1]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::alloc_name(vm, context[35], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::alloc_name(vm, context[37], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_gen_ParseComplexSYMBOLSET_L1]);
    refalrts::alloc_close_call(vm, context[40]);
    refalrts::alloc_open_call(vm, context[41]);
    refalrts::alloc_name(vm, context[42], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[43]);
    refalrts::alloc_name(vm, context[44], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[45]);
    refalrts::alloc_name(vm, context[46], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[47]);
    refalrts::alloc_name(vm, context[48], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[49]);
    refalrts::alloc_name(vm, context[50], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[51]);
    refalrts::alloc_name(vm, context[52], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[53]);
    refalrts::alloc_name(vm, context[54], functions[efunc_gen_ParseComplexSYMBOLSETS_L1]);
    refalrts::alloc_close_call(vm, context[55]);
    refalrts::alloc_open_call(vm, context[56]);
    refalrts::alloc_name(vm, context[57], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[58]);
    refalrts::alloc_name(vm, context[59], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[60]);
    refalrts::alloc_name(vm, context[61], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[62]);
    refalrts::alloc_name(vm, context[63], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[64]);
    refalrts::alloc_name(vm, context[65], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[66]);
    refalrts::alloc_name(vm, context[67], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[68]);
    refalrts::alloc_name(vm, context[69], functions[efunc_gen_Expect_L1Z6]);
    refalrts::alloc_close_call(vm, context[70]);
    refalrts::alloc_close_bracket(vm, context[71]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
    refalrts::link_brackets( context[9], context[71] );
    refalrts::push_stack( vm, context[70] );
    refalrts::push_stack( vm, context[56] );
    refalrts::push_stack( vm, context[68] );
    refalrts::push_stack( vm, context[58] );
    refalrts::push_stack( vm, context[66] );
    refalrts::push_stack( vm, context[60] );
    refalrts::push_stack( vm, context[64] );
    refalrts::push_stack( vm, context[62] );
    refalrts::push_stack( vm, context[55] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[53] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[51] );
    refalrts::push_stack( vm, context[45] );
    refalrts::push_stack( vm, context[49] );
    refalrts::push_stack( vm, context[47] );
    refalrts::push_stack( vm, context[40] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[71] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSet\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@12/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSet_L1("ParseSet\\1", COOKIE1_, COOKIE2_, func_gen_ParseSet_L1);


static refalrts::FnResult func_ParseSet(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseSet/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseSet\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseSet_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseSet("ParseSet", COOKIE1_, COOKIE2_, func_ParseSet);


static refalrts::FnResult func_gen_ParseInvertOpt_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & ParseInvertOpt\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseInvertOpt\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseInvertOpt\1/4 # TInvertGroup/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TInvertGroup], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Inverted/6 </7 & Fetch/8 </9 Tile{ HalfReuse: & G_Tokens/0 HalfReuse: >/4 HalfReuse: & MoveNext\1/5 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[6], identifiers[ident_Inverted]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::reinit_name(context[0], functions[efunc_Gu_Tokens]);
    refalrts::reinit_close_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_MoveNext_L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseInvertOpt\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseInvertOpt\1/4 s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Direct/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Direct]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseInvertOpt_L1("ParseInvertOpt\\1", COOKIE1_, COOKIE2_, func_gen_ParseInvertOpt_L1);


static refalrts::FnResult func_ParseInvertOpt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseInvertOpt/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseInvertOpt\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseInvertOpt_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseInvertOpt("ParseInvertOpt", COOKIE1_, COOKIE2_, func_ParseInvertOpt);


static refalrts::FnResult func_gen_ParseComplexSYMBOLSETS_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & ParseComplexSYMBOLSETS\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseComplexSYMBOLSETS\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseComplexSYMBOLSETS\1/4 # TChar/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TChar], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & Fetch/1 } </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseComplexSYMBOLSET\1/15 >/16 </17 & Fetch/18 </19 & Fetch/20 </21 & Fetch/22 </23 & G_Tokens/24 >/25 & Current\1/26 >/27 & CurrentTag\1/28 >/29 & ParseComplexSYMBOLSETS\1/30 >/31 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseComplexSYMBOLSET_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_ParseComplexSYMBOLSETS_L1]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[31] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseComplexSYMBOLSETS\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseComplexSYMBOLSETS\1/4 s.Other#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseComplexSYMBOLSETS_L1("ParseComplexSYMBOLSETS\\1", COOKIE1_, COOKIE2_, func_gen_ParseComplexSYMBOLSETS_L1);


static refalrts::FnResult func_ParseComplexSYMBOLSETS(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseComplexSYMBOLSETS/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseComplexSYMBOLSETS\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseComplexSYMBOLSETS_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseComplexSYMBOLSETS("ParseComplexSYMBOLSETS", COOKIE1_, COOKIE2_, func_ParseComplexSYMBOLSETS);


static refalrts::FnResult func_gen_ParseComplexSYMBOLSET_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & ParseComplexSYMBOLSET\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseComplexSYMBOLSET\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseComplexSYMBOLSET\1/4 # TChar/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TChar], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 </7 & Fetch/8 </9 & Fetch/10 </11 & G_Tokens/12 >/13 & Current\1/14 >/15 & CurrentAttr\1/16 >/17 </18 & Fetch/19 </20 & G_Tokens/21 >/22 & MoveNext\1/23 >/24 </25 & Fetch/26 </27 & Fetch/28 </29 & Fetch/30 </31 & G_Tokens/32 >/33 & Current\1/34 >/35 & CurrentTag\1/36 Tile{ HalfReuse: >/0 Reuse: & ParseOptSYMBOL\1/4 HalfReuse: >/5 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_CurrentAttr_L1]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_MoveNext_L1]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_name(vm, context[34], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_gen_CurrentTag_L1]);
    refalrts::reinit_close_call(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_ParseOptSYMBOL_L1]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[6], context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[36] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseComplexSYMBOLSET\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@13/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z13]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseComplexSYMBOLSET_L1("ParseComplexSYMBOLSET\\1", COOKIE1_, COOKIE2_, func_gen_ParseComplexSYMBOLSET_L1);


static refalrts::FnResult func_ParseComplexSYMBOLSET(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseComplexSYMBOLSET/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseComplexSYMBOLSET\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseComplexSYMBOLSET_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseComplexSYMBOLSET("ParseComplexSYMBOLSET", COOKIE1_, COOKIE2_, func_ParseComplexSYMBOLSET);


static refalrts::FnResult func_gen_ParseOptSYMBOL_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & ParseOptSYMBOL\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseOptSYMBOL\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseOptSYMBOL\1/4 # TGroupRange/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TGroupRange], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & G_Tokens/1 } >/6 & MoveNext\1/7 >/8 </9 & Fetch/10 </11 & Fetch/12 </13 & G_Tokens/14 >/15 & Current\1/16 >/17 & CurrentAttr\1/18 >/19 </20 & Fetch/21 </22 & Fetch/23 </24 & Fetch/25 </26 & G_Tokens/27 >/28 & Current\1/29 >/30 & CurrentTag\1/31 >/32 & Expect\1@7/33 >/34 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_gen_MoveNext_L1]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_CurrentAttr_L1]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_gen_Expect_L1Z7]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[34] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseOptSYMBOL\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseOptSYMBOL\1/4 s.Other#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseOptSYMBOL_L1("ParseOptSYMBOL\\1", COOKIE1_, COOKIE2_, func_gen_ParseOptSYMBOL_L1);


static refalrts::FnResult func_ParseOptSYMBOL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseOptSYMBOL/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseOptSYMBOL\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseOptSYMBOL_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseOptSYMBOL("ParseOptSYMBOL", COOKIE1_, COOKIE2_, func_ParseOptSYMBOL);


static refalrts::FnResult func_gen_ParseStates_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & ParseStates\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseStates\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseStates\1/4 # TStateStart/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStateStart], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & G_Tokens/1 } >/6 & MoveNext\1/7 >/8 (/9 </10 & Fetch/11 </12 & Fetch/13 </14 & Fetch/15 </16 & G_Tokens/17 >/18 & Current\1/19 >/20 & CurrentTag\1/21 >/22 & ParseStateNames\1/23 >/24 )/25 </26 & Fetch/27 </28 & Fetch/29 </30 & Fetch/31 </32 & G_Tokens/33 >/34 & Current\1/35 >/36 & CurrentTag\1/37 >/38 & Expect\1@3/39 >/40 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_gen_MoveNext_L1]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_ParseStateNames_L1]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::alloc_name(vm, context[35], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::alloc_name(vm, context[37], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_gen_Expect_L1Z3]);
    refalrts::alloc_close_call(vm, context[40]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
    refalrts::push_stack( vm, context[40] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[32] );
    refalrts::link_brackets( context[9], context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[40] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseStates\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@14/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z14]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseStates_L1("ParseStates\\1", COOKIE1_, COOKIE2_, func_gen_ParseStates_L1);


static refalrts::FnResult func_ParseStates(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseStates/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseStates\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseStates_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseStates("ParseStates", COOKIE1_, COOKIE2_, func_ParseStates);


static refalrts::FnResult func_gen_ParseStateNames_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & ParseStateNames\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseStateNames\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseStateNames\1/4 # TName/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TName], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 # Name/7 </8 & Fetch/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 & CurrentAttr\1/17 >/18 )/19 </20 & Fetch/21 </22 & G_Tokens/23 >/24 & MoveNext\1/25 >/26 (/27 </28 & Fetch/29 </30 & Fetch/31 </32 & Fetch/33 </34 & G_Tokens/35 >/36 & Current\1/37 >/38 & CurrentTag\1/39 Tile{ HalfReuse: >/0 Reuse: & ParseNextName\1/4 HalfReuse: >/5 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_Name]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_CurrentAttr_L1]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_gen_MoveNext_L1]);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[34]);
    refalrts::alloc_name(vm, context[35], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::alloc_name(vm, context[37], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_gen_CurrentTag_L1]);
    refalrts::reinit_close_call(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_ParseNextName_L1]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[27], context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[22] );
    refalrts::link_brackets( context[6], context[19] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[39] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseStateNames\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseStateNames\1/4 s.Other#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseStateNames_L1("ParseStateNames\\1", COOKIE1_, COOKIE2_, func_gen_ParseStateNames_L1);


static refalrts::FnResult func_ParseStateNames(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseStateNames/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseStateNames\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseStateNames_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseStateNames("ParseStateNames", COOKIE1_, COOKIE2_, func_ParseStateNames);


static refalrts::FnResult func_gen_ParseNextName_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & ParseNextName\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseNextName\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseNextName\1/4 # TComma/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TComma], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & G_Tokens/1 } >/6 & MoveNext\1/7 >/8 </9 & Fetch/10 </11 & Fetch/12 </13 & Fetch/14 </15 & G_Tokens/16 >/17 & Current\1/18 >/19 & CurrentTag\1/20 >/21 & Expect\1@8/22 >/23 (/24 </25 & Fetch/26 </27 & Fetch/28 </29 & Fetch/30 </31 & G_Tokens/32 >/33 & Current\1/34 >/35 & CurrentTag\1/36 >/37 & ParseNextName\1/38 >/39 )/40 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_gen_MoveNext_L1]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_Expect_L1Z8]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_name(vm, context[34], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::alloc_name(vm, context[38], functions[efunc_gen_ParseNextName_L1]);
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
    refalrts::link_brackets( context[24], context[40] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[40] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseNextName\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseNextName\1/4 s.Other#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseNextName_L1("ParseNextName\\1", COOKIE1_, COOKIE2_, func_gen_ParseNextName_L1);


static refalrts::FnResult func_ParseNextName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseNextName/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseNextName\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseNextName_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseNextName("ParseNextName", COOKIE1_, COOKIE2_, func_ParseNextName);


static refalrts::FnResult func_gen_ParseAlt_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & ParseAlt\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseAlt\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseAlt\1/4 # ComplexTermSYMBOL/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ComplexTermSYMBOL], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 </7 & Fetch/8 </9 & Generalize/10 </11 & Fetch/12 </13 & Fetch/14 </15 & G_Tokens/16 >/17 & Current\1/18 >/19 & CurrentTag\1/20 >/21 (/22 # ComplexTermSYMBOL/23 # TAny/24 # TStartGroup/25 # TInclude/26 # TChar/27 # TOpenBracket/28 )/29 >/30 & ParseComplexTerm\1/31 >/32 )/33 </34 & Fetch/35 </36 & Fetch/37 </38 & Fetch/39 </40 & G_Tokens/41 >/42 & Current\1/43 >/44 Tile{ HalfReuse: & CurrentTag\1/0 HalfReuse: >/4 HalfReuse: & ParseAltTail\1/5 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Generalize]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::alloc_ident(vm, context[23], identifiers[ident_ComplexTermSYMBOL]);
    refalrts::alloc_ident(vm, context[24], identifiers[ident_TAny]);
    refalrts::alloc_ident(vm, context[25], identifiers[ident_TStartGroup]);
    refalrts::alloc_ident(vm, context[26], identifiers[ident_TInclude]);
    refalrts::alloc_ident(vm, context[27], identifiers[ident_TChar]);
    refalrts::alloc_ident(vm, context[28], identifiers[ident_TOpenBracket]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_gen_ParseComplexTerm_L1]);
    refalrts::alloc_close_call(vm, context[32]);
    refalrts::alloc_close_bracket(vm, context[33]);
    refalrts::alloc_open_call(vm, context[34]);
    refalrts::alloc_name(vm, context[35], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[36]);
    refalrts::alloc_name(vm, context[37], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[40]);
    refalrts::alloc_name(vm, context[41], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[42]);
    refalrts::alloc_name(vm, context[43], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[44]);
    refalrts::reinit_name(context[0], functions[efunc_gen_CurrentTag_L1]);
    refalrts::reinit_close_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_ParseAltTail_L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[44] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[42] );
    refalrts::push_stack( vm, context[40] );
    refalrts::link_brackets( context[6], context[33] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[9] );
    refalrts::link_brackets( context[22], context[29] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[44] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseAlt\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@15/4 } </6 & Flex-TextFromToken/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z15]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseAlt_L1("ParseAlt\\1", COOKIE1_, COOKIE2_, func_gen_ParseAlt_L1);


static refalrts::FnResult func_ParseAlt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & ParseAlt/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Generalize/5 </6 & Fetch/7 </8 & Fetch/9 </10 & G_Tokens/11 >/12 & Current\1/13 >/14 & CurrentTag\1/15 >/16 (/17 # ComplexTermSYMBOL/18 # TAny/19 # TStartGroup/20 # TInclude/21 # TChar/22 # TOpenBracket/23 # TAlt/24 )/25 >/26 & ParseAlt\1/27 >/28 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Generalize]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_ComplexTermSYMBOL]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_TAny]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_TStartGroup]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_TInclude]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_TChar]);
  refalrts::alloc_ident(vm, context[23], identifiers[ident_TOpenBracket]);
  refalrts::alloc_ident(vm, context[24], identifiers[ident_TAlt]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_gen_ParseAlt_L1]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[17], context[25] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[28] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseAlt("ParseAlt", COOKIE1_, COOKIE2_, func_ParseAlt);


static refalrts::FnResult func_gen_ParseAltTail_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & ParseAltTail\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseAltTail\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseAltTail\1/4 # TAlt/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TAlt], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </5 HalfReuse: & G_Tokens/1 } >/6 & MoveNext\1/7 >/8 (/9 </10 & Fetch/11 </12 & Generalize/13 </14 & Fetch/15 </16 & Fetch/17 </18 & G_Tokens/19 >/20 & Current\1/21 >/22 & CurrentTag\1/23 >/24 (/25 # ComplexTermSYMBOL/26 # TAny/27 # TStartGroup/28 # TInclude/29 # TChar/30 # TOpenBracket/31 )/32 >/33 & ParseComplexTerm\1/34 >/35 )/36 </37 & Fetch/38 </39 & Fetch/40 </41 & Fetch/42 </43 & G_Tokens/44 >/45 & Current\1/46 >/47 & CurrentTag\1/48 >/49 & ParseAltTail\1/50 >/51 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_gen_MoveNext_L1]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Generalize]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::alloc_ident(vm, context[26], identifiers[ident_ComplexTermSYMBOL]);
    refalrts::alloc_ident(vm, context[27], identifiers[ident_TAny]);
    refalrts::alloc_ident(vm, context[28], identifiers[ident_TStartGroup]);
    refalrts::alloc_ident(vm, context[29], identifiers[ident_TInclude]);
    refalrts::alloc_ident(vm, context[30], identifiers[ident_TChar]);
    refalrts::alloc_ident(vm, context[31], identifiers[ident_TOpenBracket]);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_name(vm, context[34], functions[efunc_gen_ParseComplexTerm_L1]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_open_call(vm, context[37]);
    refalrts::alloc_name(vm, context[38], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[41]);
    refalrts::alloc_name(vm, context[42], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[43]);
    refalrts::alloc_name(vm, context[44], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[45]);
    refalrts::alloc_name(vm, context[46], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[47]);
    refalrts::alloc_name(vm, context[48], functions[efunc_gen_CurrentTag_L1]);
    refalrts::alloc_close_call(vm, context[49]);
    refalrts::alloc_name(vm, context[50], functions[efunc_gen_ParseAltTail_L1]);
    refalrts::alloc_close_call(vm, context[51]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
    refalrts::push_stack( vm, context[51] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[49] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[47] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[45] );
    refalrts::push_stack( vm, context[43] );
    refalrts::link_brackets( context[9], context[36] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[12] );
    refalrts::link_brackets( context[25], context[32] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[51] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseAltTail\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseAltTail\1/4 s.Other#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseAltTail_L1("ParseAltTail\\1", COOKIE1_, COOKIE2_, func_gen_ParseAltTail_L1);


static refalrts::FnResult func_ParseAltTail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseAltTail/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Fetch/5 </6 & Fetch/7 </8 & G_Tokens/9 >/10 & Current\1/11 >/12 & CurrentTag\1/13 >/14 & ParseAltTail\1/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_Tokens]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Current_L1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CurrentTag_L1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseAltTail_L1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseAltTail("ParseAltTail", COOKIE1_, COOKIE2_, func_ParseAltTail);


static refalrts::FnResult func_gen_Error_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Error@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error@1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error@1/4 (/7 e.Call#0/9 )/8 e.ExpectedDescription#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Call#0 as range 9
    // closed e.ExpectedDescription#1 as range 11
    //DEBUG: e.Call#0: 9
    //DEBUG: e.ExpectedDescription#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Fetch/14 </15 & Fetch/16 </17 & G_Tokens/18 >/19 & Current\1/20 >/21 Tile{ HalfReuse: [*]/0 Reuse: & Error\1@1/4 AsIs: (/7 AsIs: e.Call#0/9 AsIs: )/8 } (/22 Tile{ AsIs: e.ExpectedDescription#1/11 } )/23 {*}/24 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::alloc_unwrapped_closure(vm, context[24], context[0]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_Error_L1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[13], context[21] );
    refalrts::use( res );
    refalrts::wrap_closure( context[24] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@1/4 (/7 e.Call#0/5 )/8 e.ExpectedDescription#1/2 >/1
  // closed e.Call#0 as range 5
  // closed e.ExpectedDescription#1 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.ExpectedDescription#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@0/4 HalfReuse: 'U'/7 }"nexpected "/9 Tile{ AsIs: e.Call#0/5 }", but expected"/11 Tile{ HalfReuse: ' '/8 AsIs: e.ExpectedDescription#1/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "nexpected ", 10);
  refalrts::alloc_chars(vm, context[11], context[12], ", but expected", 14);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z0]);
  refalrts::reinit_char(context[7], 'U');
  refalrts::reinit_char(context[8], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z1("Error@1", COOKIE1_, COOKIE2_, func_gen_Error_Z1);


static refalrts::FnResult func_gen_Error_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@2/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@2/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z2]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@2/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Error@0/6"Expected domain or subexpr definition, but go"/7 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Call#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Error_Z0]);
  refalrts::alloc_chars(vm, context[7], context[8], "Expected domain or subexpr definition, but go", 45);
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z2("Error@2", COOKIE1_, COOKIE2_, func_gen_Error_Z2);


static refalrts::FnResult func_gen_Expect_L1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Expect\1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Expect\1@1/4 s.new#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & Expect\1@1/4 # TEquals/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_TEquals], context[7] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 HalfReuse: & G_Tokens/1 } >/8 & MoveNext\1/9 >/10 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[8]);
      refalrts::alloc_name(vm, context[9], functions[efunc_gen_MoveNext_L1]);
      refalrts::alloc_close_call(vm, context[10]);
      refalrts::update_name(context[4], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Expect\1@1/4 s.Unexpected#2/7 >/1
    //DEBUG: s.Unexpected#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Unexpected#2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@16/4 } </8 & Flex-TextFromToken/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_Error_Z16]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[17] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Expect\1@1/4 e.dyn#0/2 >/1
  // closed e.dyn#0 as range 2
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Expect\1@0/6 # TEquals/7 (/8 Tile{ HalfReuse: '='/0 HalfReuse: )/4 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Expect_L1Z0]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_TEquals]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::reinit_char(context[0], '=');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expect_L1Z1("Expect\\1@1", COOKIE1_, COOKIE2_, func_gen_Expect_L1Z1);


static refalrts::FnResult func_gen_Error_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@3/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@3/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z3]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@3/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Error@0/6"Expected number, but go"/7 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Call#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Error_Z0]);
  refalrts::alloc_chars(vm, context[7], context[8], "Expected number, but go", 23);
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z3("Error@3", COOKIE1_, COOKIE2_, func_gen_Error_Z3);


static refalrts::FnResult func_gen_Expect_L1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Expect\1@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Expect\1@2/4 s.new#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & Expect\1@2/4 # TArrow/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_TArrow], context[7] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 HalfReuse: & G_Tokens/1 } >/8 & MoveNext\1/9 >/10 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[8]);
      refalrts::alloc_name(vm, context[9], functions[efunc_gen_MoveNext_L1]);
      refalrts::alloc_close_call(vm, context[10]);
      refalrts::update_name(context[4], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Expect\1@2/4 s.Unexpected#2/7 >/1
    //DEBUG: s.Unexpected#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Unexpected#2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@17/4 } </8 & Flex-TextFromToken/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_Error_Z17]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[17] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Expect\1@2/4 e.dyn#0/2 >/1
  // closed e.dyn#0 as range 2
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Expect\1@0/6 # TArrow/7 (/8 '-'/9 Tile{ HalfReuse: '>'/0 HalfReuse: )/4 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Expect_L1Z0]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_TArrow]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_char(vm, context[9], '-');
  refalrts::reinit_char(context[0], '>');
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

static refalrts::NativeReference nat_ref_gen_Expect_L1Z2("Expect\\1@2", COOKIE1_, COOKIE2_, func_gen_Expect_L1Z2);


static refalrts::FnResult func_gen_Error_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@4/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@4/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z4]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@4/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Error@0/6"Expected start of a state or of a regular expression, but go"/7 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Call#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Error_Z0]);
  refalrts::alloc_chars(vm, context[7], context[8], "Expected start of a state or of a regular expression, but go", 60);
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z4("Error@4", COOKIE1_, COOKIE2_, func_gen_Error_Z4);


static refalrts::FnResult func_gen_Error_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@5/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@5/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z5]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@5/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Error@0/6"Expected start of a state, but go"/7 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Call#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Error_Z0]);
  refalrts::alloc_chars(vm, context[7], context[8], "Expected start of a state, but go", 33);
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z5("Error@5", COOKIE1_, COOKIE2_, func_gen_Error_Z5);


static refalrts::FnResult func_gen_Error_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@6/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@6/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z6]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@6/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Error@0/6"Expected named, skipped or error domain possibly followed by next state, but go"/7 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Call#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Error_Z0]);
  refalrts::alloc_chars(vm, context[7], context[8], "Expected named, skipped or error domain possibly followed by next state, but go", 79);
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z6("Error@6", COOKIE1_, COOKIE2_, func_gen_Error_Z6);


static refalrts::FnResult func_gen_Error_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@7/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@7/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z7]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@7/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Error@0/6"Expected named, skipped or error domain, but go"/7 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Call#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Error_Z0]);
  refalrts::alloc_chars(vm, context[7], context[8], "Expected named, skipped or error domain, but go", 47);
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z7("Error@7", COOKIE1_, COOKIE2_, func_gen_Error_Z7);


static refalrts::FnResult func_gen_Expect_L1Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Expect\1@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Expect\1@3/4 s.new#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & Expect\1@3/4 # TStateEnd/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_TStateEnd], context[7] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 HalfReuse: & G_Tokens/1 } >/8 & MoveNext\1/9 >/10 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[8]);
      refalrts::alloc_name(vm, context[9], functions[efunc_gen_MoveNext_L1]);
      refalrts::alloc_close_call(vm, context[10]);
      refalrts::update_name(context[4], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Expect\1@3/4 s.Unexpected#2/7 >/1
    //DEBUG: s.Unexpected#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Unexpected#2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@18/4 } </8 & Flex-TextFromToken/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_Error_Z18]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[17] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Expect\1@3/4 e.dyn#0/2 >/1
  // closed e.dyn#0 as range 2
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Expect\1@0/6 # TStateEnd/7 (/8 Tile{ HalfReuse: '>'/0 HalfReuse: )/4 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Expect_L1Z0]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_TStateEnd]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::reinit_char(context[0], '>');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expect_L1Z3("Expect\\1@3", COOKIE1_, COOKIE2_, func_gen_Expect_L1Z3);


static refalrts::FnResult func_gen_Error_Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@8/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@8/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@8/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z8]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@8/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Error@0/6"Expected bracketed state expression, but go"/7 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Call#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Error_Z0]);
  refalrts::alloc_chars(vm, context[7], context[8], "Expected bracketed state expression, but go", 43);
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z8("Error@8", COOKIE1_, COOKIE2_, func_gen_Error_Z8);


static refalrts::FnResult func_gen_Expect_L1Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Expect\1@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Expect\1@4/4 s.new#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & Expect\1@4/4 # TEndRegexp/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_TEndRegexp], context[7] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 HalfReuse: & G_Tokens/1 } >/8 & MoveNext\1/9 >/10 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[8]);
      refalrts::alloc_name(vm, context[9], functions[efunc_gen_MoveNext_L1]);
      refalrts::alloc_close_call(vm, context[10]);
      refalrts::update_name(context[4], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Expect\1@4/4 s.Unexpected#2/7 >/1
    //DEBUG: s.Unexpected#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Unexpected#2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@19/4 } </8 & Flex-TextFromToken/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_Error_Z19]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[17] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Expect\1@4/4 e.dyn#0/2 >/1
  // closed e.dyn#0 as range 2
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Expect\1@0/6 # TEndRegexp/7 (/8 Tile{ HalfReuse: '/'/0 HalfReuse: )/4 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Expect_L1Z0]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_TEndRegexp]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::reinit_char(context[0], '/');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expect_L1Z4("Expect\\1@4", COOKIE1_, COOKIE2_, func_gen_Expect_L1Z4);


static refalrts::FnResult func_gen_Error_Z9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@9/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@9/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@9/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z9]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@9/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Error@0/6"Expected bracketed regular expression or <<EOF>>, but go"/7 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Call#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Error_Z0]);
  refalrts::alloc_chars(vm, context[7], context[8], "Expected bracketed regular expression or <<EOF>>, but go", 56);
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z9("Error@9", COOKIE1_, COOKIE2_, func_gen_Error_Z9);


static refalrts::FnResult func_gen_Error_Z10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@10/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@10/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@10/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z10]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@10/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Error@0/6"Expected a symbol, starting group, include, open bracket expression but go"/7 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Call#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Error_Z0]);
  refalrts::alloc_chars(vm, context[7], context[8], "Expected a symbol, starting group, include, open bracket expression but go", 74);
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z10("Error@10", COOKIE1_, COOKIE2_, func_gen_Error_Z10);


static refalrts::FnResult func_gen_Expect_L1Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Expect\1@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Expect\1@5/4 s.new#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & Expect\1@5/4 # TCloseBracket/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_TCloseBracket], context[7] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 HalfReuse: & G_Tokens/1 } >/8 & MoveNext\1/9 >/10 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[8]);
      refalrts::alloc_name(vm, context[9], functions[efunc_gen_MoveNext_L1]);
      refalrts::alloc_close_call(vm, context[10]);
      refalrts::update_name(context[4], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Expect\1@5/4 s.Unexpected#2/7 >/1
    //DEBUG: s.Unexpected#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Unexpected#2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@20/4 } </8 & Flex-TextFromToken/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_Error_Z20]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[17] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Expect\1@5/4 e.dyn#0/2 >/1
  // closed e.dyn#0 as range 2
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Expect\1@0/6 # TCloseBracket/7 (/8 Tile{ HalfReuse: ')'/0 HalfReuse: )/4 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Expect_L1Z0]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_TCloseBracket]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::reinit_char(context[0], ')');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expect_L1Z5("Expect\\1@5", COOKIE1_, COOKIE2_, func_gen_Expect_L1Z5);


static refalrts::FnResult func_gen_Error_Z11(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@11/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@11/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@11/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z11]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@11/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Error@0/6"Expected any symbol, set of symbols, expression in brackets but go"/7 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Call#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Error_Z0]);
  refalrts::alloc_chars(vm, context[7], context[8], "Expected any symbol, set of symbols, expression in brackets but go", 66);
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z11("Error@11", COOKIE1_, COOKIE2_, func_gen_Error_Z11);


static refalrts::FnResult func_gen_Expect_L1Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Expect\1@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Expect\1@6/4 s.new#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & Expect\1@6/4 # TEndGroup/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_TEndGroup], context[7] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 HalfReuse: & G_Tokens/1 } >/8 & MoveNext\1/9 >/10 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[8]);
      refalrts::alloc_name(vm, context[9], functions[efunc_gen_MoveNext_L1]);
      refalrts::alloc_close_call(vm, context[10]);
      refalrts::update_name(context[4], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Expect\1@6/4 s.Unexpected#2/7 >/1
    //DEBUG: s.Unexpected#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Unexpected#2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@21/4 } </8 & Flex-TextFromToken/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_Error_Z21]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[17] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Expect\1@6/4 e.dyn#0/2 >/1
  // closed e.dyn#0 as range 2
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Expect\1@0/6 # TEndGroup/7 (/8 Tile{ HalfReuse: ']'/0 HalfReuse: )/4 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Expect_L1Z0]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_TEndGroup]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::reinit_char(context[0], ']');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expect_L1Z6("Expect\\1@6", COOKIE1_, COOKIE2_, func_gen_Expect_L1Z6);


static refalrts::FnResult func_gen_Error_Z12(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@12/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@12/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@12/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z12]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@12/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Error@0/6"Expected expression in square brackets but go"/7 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Call#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Error_Z0]);
  refalrts::alloc_chars(vm, context[7], context[8], "Expected expression in square brackets but go", 45);
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z12("Error@12", COOKIE1_, COOKIE2_, func_gen_Error_Z12);


static refalrts::FnResult func_gen_Error_Z13(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@13/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@13/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@13/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z13]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@13/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Error@0/6"Expected symbol or pair of symbols but go"/7 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Call#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Error_Z0]);
  refalrts::alloc_chars(vm, context[7], context[8], "Expected symbol or pair of symbols but go", 41);
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z13("Error@13", COOKIE1_, COOKIE2_, func_gen_Error_Z13);


static refalrts::FnResult func_gen_Expect_L1Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Expect\1@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Expect\1@7/4 s.new#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & Expect\1@7/4 # TChar/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_TChar], context[7] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 HalfReuse: & G_Tokens/1 } >/8 & MoveNext\1/9 >/10 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[8]);
      refalrts::alloc_name(vm, context[9], functions[efunc_gen_MoveNext_L1]);
      refalrts::alloc_close_call(vm, context[10]);
      refalrts::update_name(context[4], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Expect\1@7/4 s.Unexpected#2/7 >/1
    //DEBUG: s.Unexpected#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Unexpected#2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@22/4 } </8 & Flex-TextFromToken/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_Error_Z22]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[17] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Expect\1@7/4 e.dyn#0/2 >/1
  // closed e.dyn#0 as range 2
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Expect\1@0/6 # TChar/7 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Expect_L1Z0]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_TChar]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expect_L1Z7("Expect\\1@7", COOKIE1_, COOKIE2_, func_gen_Expect_L1Z7);


static refalrts::FnResult func_gen_Error_Z14(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@14/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@14/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@14/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z14]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@14/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Error@0/6"Expected state names surrounded by brackets but go"/7 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Call#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Error_Z0]);
  refalrts::alloc_chars(vm, context[7], context[8], "Expected state names surrounded by brackets but go", 50);
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z14("Error@14", COOKIE1_, COOKIE2_, func_gen_Error_Z14);


static refalrts::FnResult func_gen_Expect_L1Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Expect\1@8/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Expect\1@8/4 s.new#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & Expect\1@8/4 # TName/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_TName], context[7] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 HalfReuse: & G_Tokens/1 } >/8 & MoveNext\1/9 >/10 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[8]);
      refalrts::alloc_name(vm, context[9], functions[efunc_gen_MoveNext_L1]);
      refalrts::alloc_close_call(vm, context[10]);
      refalrts::update_name(context[4], functions[efunc_Fetch]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[1], functions[efunc_Gu_Tokens]);
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Expect\1@8/4 s.Unexpected#2/7 >/1
    //DEBUG: s.Unexpected#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Unexpected#2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@22/4 } </8 & Flex-TextFromToken/9 </10 & Fetch/11 </12 & G_Tokens/13 >/14 & Current\1/15 >/16 >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_Error_Z22]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[17] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Expect\1@8/4 e.dyn#0/2 >/1
  // closed e.dyn#0 as range 2
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Expect\1@0/6 # TName/7 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Expect_L1Z0]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_TName]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expect_L1Z8("Expect\\1@8", COOKIE1_, COOKIE2_, func_gen_Expect_L1Z8);


static refalrts::FnResult func_gen_Error_Z15(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@15/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@15/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@15/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z15]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@15/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Error@0/6"Expected regular expression but go"/7 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Call#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Error_Z0]);
  refalrts::alloc_chars(vm, context[7], context[8], "Expected regular expression but go", 34);
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z15("Error@15", COOKIE1_, COOKIE2_, func_gen_Error_Z15);


static refalrts::FnResult func_gen_Error_L1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Error\1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & Error\1@1/4 (/7 e.Call#0/13 )/8 (/11 e.ExpectedDescription#1/15 )/12 (/21 s.Type#2/23 t.Pos#2/24 e.Info#2/19 )/22 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    // closed e.Call#0 as range 13
    // closed e.ExpectedDescription#1 as range 15
    if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
      continue;
    context[25] = refalrts::tvar_left( context[24], context[19], context[20] );
    if( ! context[25] )
      continue;
    // closed e.Info#2 as range 19
    //DEBUG: e.Call#0: 13
    //DEBUG: e.ExpectedDescription#1: 15
    //DEBUG: s.Type#2: 23
    //DEBUG: t.Pos#2: 24
    //DEBUG: e.Info#2: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/23 {REMOVED TILE} e.Info#2/19 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/24 }"Un"/26 Tile{ HalfReuse: 'e'/12 HalfReuse: 'x'/21 } Tile{ HalfReuse: 'p'/22 }"ected"/28 Tile{ HalfReuse: ' '/7 AsIs: e.Call#0/13 HalfReuse: ','/8 HalfReuse: ' '/11 }"but expected "/30 Tile{ AsIs: e.ExpectedDescription#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[26], context[27], "Un", 2);
    refalrts::alloc_chars(vm, context[28], context[29], "ected", 5);
    refalrts::alloc_chars(vm, context[30], context[31], "but expected ", 13);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[12], 'e');
    refalrts::reinit_char(context[21], 'x');
    refalrts::reinit_char(context[22], 'p');
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_char(context[8], ',');
    refalrts::reinit_char(context[11], ' ');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[12], context[21] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@1/4 (/7 e.Call#0/5 )/8 (/11 e.ExpectedDescription#1/9 )/12 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.ExpectedDescription#1 as range 9
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.ExpectedDescription#1: 9
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error\1@0/4 AsIs: (/7 }"Unexpected "/13 Tile{ AsIs: e.Call#0/5 }", but expecte"/15 Tile{ HalfReuse: 'd'/8 HalfReuse: ' '/11 AsIs: e.ExpectedDescription#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[13], context[14], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[15], context[16], ", but expecte", 13);
  refalrts::update_name(context[4], functions[efunc_gen_Error_L1Z0]);
  refalrts::reinit_char(context[8], 'd');
  refalrts::reinit_char(context[11], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z1("Error\\1@1", COOKIE1_, COOKIE2_, func_gen_Error_L1Z1);


static refalrts::FnResult func_gen_Error_L1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Error\1@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@2/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@2/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 } Tile{ HalfReuse: 'E'/7 } 'x'/20 Tile{ HalfReuse: 'p'/8 HalfReuse: 'e'/15 } Tile{ HalfReuse: 'c'/16 }"ted domain or subexpr definition, but got "/21 Tile{ AsIs: e.Call#0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], 'x');
    refalrts::alloc_chars(vm, context[21], context[22], "ted domain or subexpr definition, but got ", 42);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[15], 'e');
    refalrts::reinit_char(context[16], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@2/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Error\1@0/10 (/11"Expected domain or subexpr definition, but g"/12 Tile{ HalfReuse: 'o'/0 HalfReuse: 't'/4 HalfReuse: ' '/7 AsIs: e.Call#0/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Error_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "Expected domain or subexpr definition, but g", 44);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z2("Error\\1@2", COOKIE1_, COOKIE2_, func_gen_Error_L1Z2);


static refalrts::FnResult func_gen_Error_Z16(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@16/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@16/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@16/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z16]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@16/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@0/4 }"Unexpected "/5 Tile{ AsIs: e.Call#0/2 }", but expected ="/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[7], context[8], ", but expected =", 16);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z16("Error@16", COOKIE1_, COOKIE2_, func_gen_Error_Z16);


static refalrts::FnResult func_gen_Error_L1Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Error\1@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@3/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@3/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 } Tile{ HalfReuse: 'E'/7 } 'x'/20 Tile{ HalfReuse: 'p'/8 HalfReuse: 'e'/15 } Tile{ HalfReuse: 'c'/16 }"ted number, but got "/21 Tile{ AsIs: e.Call#0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], 'x');
    refalrts::alloc_chars(vm, context[21], context[22], "ted number, but got ", 20);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[15], 'e');
    refalrts::reinit_char(context[16], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@3/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Error\1@0/10 (/11"Expected number, but g"/12 Tile{ HalfReuse: 'o'/0 HalfReuse: 't'/4 HalfReuse: ' '/7 AsIs: e.Call#0/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Error_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "Expected number, but g", 22);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z3("Error\\1@3", COOKIE1_, COOKIE2_, func_gen_Error_L1Z3);


static refalrts::FnResult func_gen_Error_Z17(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@17/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@17/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@17/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z17]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@17/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@0/4 }"Unexpected "/5 Tile{ AsIs: e.Call#0/2 }", but expected ->"/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[7], context[8], ", but expected ->", 17);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z17("Error@17", COOKIE1_, COOKIE2_, func_gen_Error_Z17);


static refalrts::FnResult func_gen_Error_L1Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Error\1@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@4/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@4/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 } Tile{ HalfReuse: 'E'/7 } 'x'/20 Tile{ HalfReuse: 'p'/8 HalfReuse: 'e'/15 } Tile{ HalfReuse: 'c'/16 }"ted start of a state or of a regular expression, but got "/21 Tile{ AsIs: e.Call#0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], 'x');
    refalrts::alloc_chars(vm, context[21], context[22], "ted start of a state or of a regular expression, but got ", 57);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[15], 'e');
    refalrts::reinit_char(context[16], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@4/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Error\1@0/10 (/11"Expected start of a state or of a regular expression, but g"/12 Tile{ HalfReuse: 'o'/0 HalfReuse: 't'/4 HalfReuse: ' '/7 AsIs: e.Call#0/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Error_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "Expected start of a state or of a regular expression, but g", 59);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z4("Error\\1@4", COOKIE1_, COOKIE2_, func_gen_Error_L1Z4);


static refalrts::FnResult func_gen_Error_L1Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Error\1@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@5/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@5/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 } Tile{ HalfReuse: 'E'/7 } 'x'/20 Tile{ HalfReuse: 'p'/8 HalfReuse: 'e'/15 } Tile{ HalfReuse: 'c'/16 }"ted start of a state, but got "/21 Tile{ AsIs: e.Call#0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], 'x');
    refalrts::alloc_chars(vm, context[21], context[22], "ted start of a state, but got ", 30);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[15], 'e');
    refalrts::reinit_char(context[16], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@5/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Error\1@0/10 (/11"Expected start of a state, but g"/12 Tile{ HalfReuse: 'o'/0 HalfReuse: 't'/4 HalfReuse: ' '/7 AsIs: e.Call#0/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Error_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "Expected start of a state, but g", 32);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z5("Error\\1@5", COOKIE1_, COOKIE2_, func_gen_Error_L1Z5);


static refalrts::FnResult func_gen_Error_L1Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Error\1@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@6/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@6/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 } Tile{ HalfReuse: 'E'/7 } 'x'/20 Tile{ HalfReuse: 'p'/8 HalfReuse: 'e'/15 } Tile{ HalfReuse: 'c'/16 }"ted named, skipped or error domain possibly followed by next state, but got "/21 Tile{ AsIs: e.Call#0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], 'x');
    refalrts::alloc_chars(vm, context[21], context[22], "ted named, skipped or error domain possibly followed by next state, but got ", 76);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[15], 'e');
    refalrts::reinit_char(context[16], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@6/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Error\1@0/10 (/11"Expected named, skipped or error domain possibly followed by next state, but g"/12 Tile{ HalfReuse: 'o'/0 HalfReuse: 't'/4 HalfReuse: ' '/7 AsIs: e.Call#0/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Error_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "Expected named, skipped or error domain possibly followed by next state, but g", 78);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z6("Error\\1@6", COOKIE1_, COOKIE2_, func_gen_Error_L1Z6);


static refalrts::FnResult func_gen_Error_L1Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Error\1@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@7/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@7/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 } Tile{ HalfReuse: 'E'/7 } 'x'/20 Tile{ HalfReuse: 'p'/8 HalfReuse: 'e'/15 } Tile{ HalfReuse: 'c'/16 }"ted named, skipped or error domain, but got "/21 Tile{ AsIs: e.Call#0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], 'x');
    refalrts::alloc_chars(vm, context[21], context[22], "ted named, skipped or error domain, but got ", 44);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[15], 'e');
    refalrts::reinit_char(context[16], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@7/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Error\1@0/10 (/11"Expected named, skipped or error domain, but g"/12 Tile{ HalfReuse: 'o'/0 HalfReuse: 't'/4 HalfReuse: ' '/7 AsIs: e.Call#0/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Error_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "Expected named, skipped or error domain, but g", 46);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z7("Error\\1@7", COOKIE1_, COOKIE2_, func_gen_Error_L1Z7);


static refalrts::FnResult func_gen_Error_Z18(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@18/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@18/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@18/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z18]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@18/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@0/4 }"Unexpected "/5 Tile{ AsIs: e.Call#0/2 }", but expected >"/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[7], context[8], ", but expected >", 16);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z18("Error@18", COOKIE1_, COOKIE2_, func_gen_Error_Z18);


static refalrts::FnResult func_gen_Error_L1Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Error\1@8/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@8/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@8/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 } Tile{ HalfReuse: 'E'/7 } 'x'/20 Tile{ HalfReuse: 'p'/8 HalfReuse: 'e'/15 } Tile{ HalfReuse: 'c'/16 }"ted bracketed state expression, but got "/21 Tile{ AsIs: e.Call#0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], 'x');
    refalrts::alloc_chars(vm, context[21], context[22], "ted bracketed state expression, but got ", 40);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[15], 'e');
    refalrts::reinit_char(context[16], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@8/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Error\1@0/10 (/11"Expected bracketed state expression, but g"/12 Tile{ HalfReuse: 'o'/0 HalfReuse: 't'/4 HalfReuse: ' '/7 AsIs: e.Call#0/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Error_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "Expected bracketed state expression, but g", 42);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z8("Error\\1@8", COOKIE1_, COOKIE2_, func_gen_Error_L1Z8);


static refalrts::FnResult func_gen_Error_Z19(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@19/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@19/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@19/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z19]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@19/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@0/4 }"Unexpected "/5 Tile{ AsIs: e.Call#0/2 }", but expected /"/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[7], context[8], ", but expected /", 16);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z19("Error@19", COOKIE1_, COOKIE2_, func_gen_Error_Z19);


static refalrts::FnResult func_gen_Error_L1Z9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Error\1@9/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@9/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@9/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 } Tile{ HalfReuse: 'E'/7 } 'x'/20 Tile{ HalfReuse: 'p'/8 HalfReuse: 'e'/15 } Tile{ HalfReuse: 'c'/16 }"ted bracketed regular expression or <<EOF>>, but got "/21 Tile{ AsIs: e.Call#0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], 'x');
    refalrts::alloc_chars(vm, context[21], context[22], "ted bracketed regular expression or <<EOF>>, but got ", 53);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[15], 'e');
    refalrts::reinit_char(context[16], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@9/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Error\1@0/10 (/11"Expected bracketed regular expression or <<EOF>>, but g"/12 Tile{ HalfReuse: 'o'/0 HalfReuse: 't'/4 HalfReuse: ' '/7 AsIs: e.Call#0/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Error_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "Expected bracketed regular expression or <<EOF>>, but g", 55);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z9("Error\\1@9", COOKIE1_, COOKIE2_, func_gen_Error_L1Z9);


static refalrts::FnResult func_gen_Error_L1Z10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Error\1@10/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@10/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@10/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 } Tile{ HalfReuse: 'E'/7 } 'x'/20 Tile{ HalfReuse: 'p'/8 HalfReuse: 'e'/15 } Tile{ HalfReuse: 'c'/16 }"ted a symbol, starting group, include, open bracket expression but got "/21 Tile{ AsIs: e.Call#0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], 'x');
    refalrts::alloc_chars(vm, context[21], context[22], "ted a symbol, starting group, include, open bracket expression but got ", 71);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[15], 'e');
    refalrts::reinit_char(context[16], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@10/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Error\1@0/10 (/11"Expected a symbol, starting group, include, open bracket expression but g"/12 Tile{ HalfReuse: 'o'/0 HalfReuse: 't'/4 HalfReuse: ' '/7 AsIs: e.Call#0/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Error_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "Expected a symbol, starting group, include, open bracket expression but g", 73);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z10("Error\\1@10", COOKIE1_, COOKIE2_, func_gen_Error_L1Z10);


static refalrts::FnResult func_gen_Error_Z20(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@20/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@20/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@20/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z20]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@20/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@0/4 }"Unexpected "/5 Tile{ AsIs: e.Call#0/2 }", but expected )"/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[7], context[8], ", but expected )", 16);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z20("Error@20", COOKIE1_, COOKIE2_, func_gen_Error_Z20);


static refalrts::FnResult func_gen_Error_L1Z11(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Error\1@11/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@11/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@11/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 } Tile{ HalfReuse: 'E'/7 } 'x'/20 Tile{ HalfReuse: 'p'/8 HalfReuse: 'e'/15 } Tile{ HalfReuse: 'c'/16 }"ted any symbol, set of symbols, expression in brackets but got "/21 Tile{ AsIs: e.Call#0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], 'x');
    refalrts::alloc_chars(vm, context[21], context[22], "ted any symbol, set of symbols, expression in brackets but got ", 63);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[15], 'e');
    refalrts::reinit_char(context[16], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@11/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Error\1@0/10 (/11"Expected any symbol, set of symbols, expression in brackets but g"/12 Tile{ HalfReuse: 'o'/0 HalfReuse: 't'/4 HalfReuse: ' '/7 AsIs: e.Call#0/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Error_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "Expected any symbol, set of symbols, expression in brackets but g", 65);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z11("Error\\1@11", COOKIE1_, COOKIE2_, func_gen_Error_L1Z11);


static refalrts::FnResult func_gen_Error_Z21(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@21/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@21/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@21/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z21]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@21/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@0/4 }"Unexpected "/5 Tile{ AsIs: e.Call#0/2 }", but expected ]"/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[7], context[8], ", but expected ]", 16);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z21("Error@21", COOKIE1_, COOKIE2_, func_gen_Error_Z21);


static refalrts::FnResult func_gen_Error_L1Z12(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Error\1@12/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@12/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@12/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 } Tile{ HalfReuse: 'E'/7 } 'x'/20 Tile{ HalfReuse: 'p'/8 HalfReuse: 'e'/15 } Tile{ HalfReuse: 'c'/16 }"ted expression in square brackets but got "/21 Tile{ AsIs: e.Call#0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], 'x');
    refalrts::alloc_chars(vm, context[21], context[22], "ted expression in square brackets but got ", 42);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[15], 'e');
    refalrts::reinit_char(context[16], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@12/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Error\1@0/10 (/11"Expected expression in square brackets but g"/12 Tile{ HalfReuse: 'o'/0 HalfReuse: 't'/4 HalfReuse: ' '/7 AsIs: e.Call#0/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Error_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "Expected expression in square brackets but g", 44);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z12("Error\\1@12", COOKIE1_, COOKIE2_, func_gen_Error_L1Z12);


static refalrts::FnResult func_gen_Error_L1Z13(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Error\1@13/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@13/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@13/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 } Tile{ HalfReuse: 'E'/7 } 'x'/20 Tile{ HalfReuse: 'p'/8 HalfReuse: 'e'/15 } Tile{ HalfReuse: 'c'/16 }"ted symbol or pair of symbols but got "/21 Tile{ AsIs: e.Call#0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], 'x');
    refalrts::alloc_chars(vm, context[21], context[22], "ted symbol or pair of symbols but got ", 38);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[15], 'e');
    refalrts::reinit_char(context[16], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@13/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Error\1@0/10 (/11"Expected symbol or pair of symbols but g"/12 Tile{ HalfReuse: 'o'/0 HalfReuse: 't'/4 HalfReuse: ' '/7 AsIs: e.Call#0/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Error_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "Expected symbol or pair of symbols but g", 40);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z13("Error\\1@13", COOKIE1_, COOKIE2_, func_gen_Error_L1Z13);


static refalrts::FnResult func_gen_Error_Z22(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Error@22/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Error@22/4 e.Call#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Call#0 as range 5
    //DEBUG: e.Call#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & Fetch/8 </9 & G_Tokens/10 >/11 & Current\1/12 >/13 [*]/14 & Error\1@22/15 (/16 Tile{ AsIs: e.Call#0/5 } )/17 {*}/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Gu_Tokens]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Current_L1]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_closure_head(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Error_L1Z22]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[14]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error@22/4 e.Call#0/2 >/1
  // closed e.Call#0 as range 2
  //DEBUG: e.Call#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error@0/4 }"Unexpected "/5 Tile{ AsIs: e.Call#0/2 }", but expected "/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[7], context[8], ", but expected ", 15);
  refalrts::update_name(context[4], functions[efunc_gen_Error_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_Z22("Error@22", COOKIE1_, COOKIE2_, func_gen_Error_Z22);


static refalrts::FnResult func_gen_Error_L1Z14(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Error\1@14/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@14/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@14/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 } Tile{ HalfReuse: 'E'/7 } 'x'/20 Tile{ HalfReuse: 'p'/8 HalfReuse: 'e'/15 } Tile{ HalfReuse: 'c'/16 }"ted state names surrounded by brackets but got "/21 Tile{ AsIs: e.Call#0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], 'x');
    refalrts::alloc_chars(vm, context[21], context[22], "ted state names surrounded by brackets but got ", 47);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[15], 'e');
    refalrts::reinit_char(context[16], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@14/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Error\1@0/10 (/11"Expected state names surrounded by brackets but g"/12 Tile{ HalfReuse: 'o'/0 HalfReuse: 't'/4 HalfReuse: ' '/7 AsIs: e.Call#0/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Error_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "Expected state names surrounded by brackets but g", 49);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z14("Error\\1@14", COOKIE1_, COOKIE2_, func_gen_Error_L1Z14);


static refalrts::FnResult func_gen_Error_L1Z15(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Error\1@15/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@15/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@15/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 } Tile{ HalfReuse: 'E'/7 } 'x'/20 Tile{ HalfReuse: 'p'/8 HalfReuse: 'e'/15 } Tile{ HalfReuse: 'c'/16 }"ted regular expression but got "/21 Tile{ AsIs: e.Call#0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], 'x');
    refalrts::alloc_chars(vm, context[21], context[22], "ted regular expression but got ", 31);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[15], 'e');
    refalrts::reinit_char(context[16], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@15/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Error\1@0/10 (/11"Expected regular expression but g"/12 Tile{ HalfReuse: 'o'/0 HalfReuse: 't'/4 HalfReuse: ' '/7 AsIs: e.Call#0/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Error_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "Expected regular expression but g", 33);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z15("Error\\1@15", COOKIE1_, COOKIE2_, func_gen_Error_L1Z15);


static refalrts::FnResult func_gen_Error_L1Z16(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Error\1@16/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@16/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@16/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 }"Unexpected"/20 Tile{ HalfReuse: ' '/7 AsIs: e.Call#0/9 HalfReuse: ','/8 HalfReuse: ' '/15 }"but expected "/22 Tile{ HalfReuse: '='/16 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[20], context[21], "Unexpected", 10);
    refalrts::alloc_chars(vm, context[22], context[23], "but expected ", 13);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_char(context[8], ',');
    refalrts::reinit_char(context[15], ' ');
    refalrts::reinit_char(context[16], '=');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[7], context[15] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@16/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error\1@0/4 AsIs: (/7 }"Unexpected "/9 Tile{ AsIs: e.Call#0/5 }", but expected ="/11 Tile{ AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[11], context[12], ", but expected =", 16);
  refalrts::update_name(context[4], functions[efunc_gen_Error_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z16("Error\\1@16", COOKIE1_, COOKIE2_, func_gen_Error_L1Z16);


static refalrts::FnResult func_gen_Error_L1Z17(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Error\1@17/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@17/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@17/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 }"Unexpected"/20 Tile{ HalfReuse: ' '/7 AsIs: e.Call#0/9 HalfReuse: ','/8 HalfReuse: ' '/15 }"but expected -"/22 Tile{ HalfReuse: '>'/16 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[20], context[21], "Unexpected", 10);
    refalrts::alloc_chars(vm, context[22], context[23], "but expected -", 14);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_char(context[8], ',');
    refalrts::reinit_char(context[15], ' ');
    refalrts::reinit_char(context[16], '>');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[7], context[15] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@17/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error\1@0/4 AsIs: (/7 }"Unexpected "/9 Tile{ AsIs: e.Call#0/5 }", but expected ->"/11 Tile{ AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[11], context[12], ", but expected ->", 17);
  refalrts::update_name(context[4], functions[efunc_gen_Error_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z17("Error\\1@17", COOKIE1_, COOKIE2_, func_gen_Error_L1Z17);


static refalrts::FnResult func_gen_Error_L1Z18(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Error\1@18/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@18/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@18/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 }"Unexpected"/20 Tile{ HalfReuse: ' '/7 AsIs: e.Call#0/9 HalfReuse: ','/8 HalfReuse: ' '/15 }"but expected "/22 Tile{ HalfReuse: '>'/16 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[20], context[21], "Unexpected", 10);
    refalrts::alloc_chars(vm, context[22], context[23], "but expected ", 13);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_char(context[8], ',');
    refalrts::reinit_char(context[15], ' ');
    refalrts::reinit_char(context[16], '>');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[7], context[15] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@18/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error\1@0/4 AsIs: (/7 }"Unexpected "/9 Tile{ AsIs: e.Call#0/5 }", but expected >"/11 Tile{ AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[11], context[12], ", but expected >", 16);
  refalrts::update_name(context[4], functions[efunc_gen_Error_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z18("Error\\1@18", COOKIE1_, COOKIE2_, func_gen_Error_L1Z18);


static refalrts::FnResult func_gen_Error_L1Z19(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Error\1@19/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@19/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@19/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 }"Unexpected"/20 Tile{ HalfReuse: ' '/7 AsIs: e.Call#0/9 HalfReuse: ','/8 HalfReuse: ' '/15 }"but expected "/22 Tile{ HalfReuse: '/'/16 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[20], context[21], "Unexpected", 10);
    refalrts::alloc_chars(vm, context[22], context[23], "but expected ", 13);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_char(context[8], ',');
    refalrts::reinit_char(context[15], ' ');
    refalrts::reinit_char(context[16], '/');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[7], context[15] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@19/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error\1@0/4 AsIs: (/7 }"Unexpected "/9 Tile{ AsIs: e.Call#0/5 }", but expected /"/11 Tile{ AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[11], context[12], ", but expected /", 16);
  refalrts::update_name(context[4], functions[efunc_gen_Error_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z19("Error\\1@19", COOKIE1_, COOKIE2_, func_gen_Error_L1Z19);


static refalrts::FnResult func_gen_Error_L1Z20(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Error\1@20/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@20/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@20/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 }"Unexpected"/20 Tile{ HalfReuse: ' '/7 AsIs: e.Call#0/9 HalfReuse: ','/8 HalfReuse: ' '/15 }"but expected "/22 Tile{ HalfReuse: ')'/16 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[20], context[21], "Unexpected", 10);
    refalrts::alloc_chars(vm, context[22], context[23], "but expected ", 13);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_char(context[8], ',');
    refalrts::reinit_char(context[15], ' ');
    refalrts::reinit_char(context[16], ')');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[7], context[15] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@20/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error\1@0/4 AsIs: (/7 }"Unexpected "/9 Tile{ AsIs: e.Call#0/5 }", but expected )"/11 Tile{ AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[11], context[12], ", but expected )", 16);
  refalrts::update_name(context[4], functions[efunc_gen_Error_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z20("Error\\1@20", COOKIE1_, COOKIE2_, func_gen_Error_L1Z20);


static refalrts::FnResult func_gen_Error_L1Z21(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Error\1@21/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@21/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@21/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 }"Unexpected"/20 Tile{ HalfReuse: ' '/7 AsIs: e.Call#0/9 HalfReuse: ','/8 HalfReuse: ' '/15 }"but expected "/22 Tile{ HalfReuse: ']'/16 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[20], context[21], "Unexpected", 10);
    refalrts::alloc_chars(vm, context[22], context[23], "but expected ", 13);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_char(context[8], ',');
    refalrts::reinit_char(context[15], ' ');
    refalrts::reinit_char(context[16], ']');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[7], context[15] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@21/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error\1@0/4 AsIs: (/7 }"Unexpected "/9 Tile{ AsIs: e.Call#0/5 }", but expected ]"/11 Tile{ AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[11], context[12], ", but expected ]", 16);
  refalrts::update_name(context[4], functions[efunc_gen_Error_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z21("Error\\1@21", COOKIE1_, COOKIE2_, func_gen_Error_L1Z21);


static refalrts::FnResult func_gen_Error_L1Z22(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Error\1@22/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Error\1@22/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Error\1@22/4 (/7 e.Call#0/9 )/8 (/15 s.Type#2/17 t.Pos#2/18 e.Info#2/13 )/16 >/1
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
    // closed e.Call#0 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Info#2 as range 13
    //DEBUG: e.Call#0: 9
    //DEBUG: s.Type#2: 17
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Info#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Type#2/17 {REMOVED TILE} e.Info#2/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.Pos#2/18 }"Unexpected"/20 Tile{ HalfReuse: ' '/7 AsIs: e.Call#0/9 HalfReuse: ','/8 HalfReuse: ' '/15 }"but expected"/22 Tile{ HalfReuse: ' '/16 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[20], context[21], "Unexpected", 10);
    refalrts::alloc_chars(vm, context[22], context[23], "but expected", 12);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_char(context[8], ',');
    refalrts::reinit_char(context[15], ' ');
    refalrts::reinit_char(context[16], ' ');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[7], context[15] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Error\1@22/4 (/7 e.Call#0/5 )/8 e.dyn#0/2 >/1
  // closed e.Call#0 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Call#0: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error\1@0/4 AsIs: (/7 }"Unexpected "/9 Tile{ AsIs: e.Call#0/5 }", but expected "/11 Tile{ AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "Unexpected ", 11);
  refalrts::alloc_chars(vm, context[11], context[12], ", but expected ", 15);
  refalrts::update_name(context[4], functions[efunc_gen_Error_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Error_L1Z22("Error\\1@22", COOKIE1_, COOKIE2_, func_gen_Error_L1Z22);


//End of file
