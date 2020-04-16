// This file automatically generated from 'Flex-Parser.ref'
// Don't edit! Edit 'Flex-Parser.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1147743400_3290364811
#define COOKIE1_ 1147743400U
#define COOKIE2_ 3290364811U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Gu_Tokens = 3,
  efunc_gen_Current_L1 = 4,
  efunc_Fetch = 5,
  efunc_gen_MoveNext_L1 = 6,
  efunc_Current = 7,
  efunc_gen_CurrentTag_L1 = 8,
  efunc_gen_CurrentAttr_L1 = 9,
  efunc_gen_CurrentPos_L1 = 10,
  efunc_MoveNext = 11,
  efunc_Flexm_TextFromToken = 12,
  efunc_Error = 13,
  efunc_CurrentTag = 14,
  efunc_gen_Expect_L1 = 15,
  efunc_ErrorAt = 16,
  efunc_gen_Error_L1 = 17,
  efunc_ParseDescription = 18,
  efunc_ParseDescriptions = 19,
  efunc_ParseSubexpr = 20,
  efunc_ParseDomain = 21,
  efunc_gen_ParseDescription_L1 = 22,
  efunc_gen_ParseDescriptions_L1 = 23,
  efunc_CurrentPos = 24,
  efunc_CurrentAttr = 25,
  efunc_Expect = 26,
  efunc_ParseRegexp = 27,
  efunc_gen_ParseSubexpr_L1 = 28,
  efunc_ParseDomainFrom = 29,
  efunc_ParseDomainTo = 30,
  efunc_gen_ParseDomain_L1 = 31,
  efunc_ParseStatesOpt = 32,
  efunc_gen_ParseDomainFrom_L1 = 33,
  efunc_ParseStates = 34,
  efunc_gen_ParseStatesOpt_L1 = 35,
  efunc_ParseNextStateOpt = 36,
  efunc_ParseFlush = 37,
  efunc_Generalize = 38,
  efunc_gen_ParseDomainTo_L1 = 39,
  efunc_gen_ParseFlush_L1 = 40,
  efunc_ParseState = 41,
  efunc_gen_ParseNextStateOpt_L1 = 42,
  efunc_ParseNameOpt = 43,
  efunc_gen_ParseState_L1 = 44,
  efunc_gen_ParseNameOpt_L1 = 45,
  efunc_ParseAlt = 46,
  efunc_gen_ParseRegexp_L1 = 47,
  efunc_ParseComplexTerm = 48,
  efunc_ParseTerm = 49,
  efunc_gen_ParseComplexTerm_L1 = 50,
  efunc_ParseSimpleTerm = 51,
  efunc_ParseRepeater = 52,
  efunc_gen_ParseTerm_L1 = 53,
  efunc_gen_ParseRepeater_L1 = 54,
  efunc_ParseSet = 55,
  efunc_gen_ParseSimpleTerm_L1 = 56,
  efunc_ParseInvertOpt = 57,
  efunc_ParseComplexSYMBOLSET = 58,
  efunc_ParseComplexSYMBOLSETS = 59,
  efunc_gen_ParseSet_L1 = 60,
  efunc_gen_ParseInvertOpt_L1 = 61,
  efunc_gen_ParseComplexSYMBOLSETS_L1 = 62,
  efunc_ParseOptSYMBOL = 63,
  efunc_gen_ParseComplexSYMBOLSET_L1 = 64,
  efunc_gen_ParseOptSYMBOL_L1 = 65,
  efunc_ParseStateNames = 66,
  efunc_gen_ParseStates_L1 = 67,
  efunc_ParseNextName = 68,
  efunc_gen_ParseStateNames_L1 = 69,
  efunc_gen_ParseNextName_L1 = 70,
  efunc_ParseAltTail = 71,
  efunc_gen_ParseAlt_L1 = 72,
  efunc_gen_ParseAltTail_L1 = 73,
  efunc_Mu = 74,
  efunc_Up = 75,
  efunc_Evm_met = 76,
  efunc_Residue = 77,
  efunc_u_u_Metau_Residue = 78,
  efunc_Flexm_Parse = 79,
};


enum ident {
  ident_TName = 0,
  ident_TStateStart = 1,
  ident_TStartRegexp = 2,
  ident_TEOF = 3,
  ident_Subexpr = 4,
  ident_TEquals = 5,
  ident_Domain = 6,
  ident_TArrow = 7,
  ident_TFlush = 8,
  ident_TSkip = 9,
  ident_TErrorMessage = 10,
  ident_NamedDomain = 11,
  ident_SkippedDomain = 12,
  ident_ErrorDomain = 13,
  ident_TComma = 14,
  ident_NextState = 15,
  ident_NoNextState = 16,
  ident_TStateEnd = 17,
  ident_Regexp = 18,
  ident_TEndRegexp = 19,
  ident_ComplexTermSYMBOL = 20,
  ident_TAny = 21,
  ident_TStartGroup = 22,
  ident_TInclude = 23,
  ident_TChar = 24,
  ident_TOpenBracket = 25,
  ident_TermSYMBOL = 26,
  ident_Term = 27,
  ident_TZeroMany = 28,
  ident_ManyZero = 29,
  ident_TOneMany = 30,
  ident_ManyOne = 31,
  ident_TOptional = 32,
  ident_Optional = 33,
  ident_AnyChar = 34,
  ident_NamedRegexp = 35,
  ident_Char = 36,
  ident_Alt = 37,
  ident_TCloseBracket = 38,
  ident_NamedGroup = 39,
  ident_TEndGroup = 40,
  ident_TInvertGroup = 41,
  ident_Inverted = 42,
  ident_Direct = 43,
  ident_TGroupRange = 44,
  ident_Name = 45,
  ident_TAlt = 46,
  ident_Mu = 47,
  ident_Up = 48,
  ident_Evm_met = 49,
  ident_Residue = 50,
  ident_u_u_Metau_Residue = 51,
  ident_Gu_Tokens = 52,
  ident_Current = 53,
  ident_MoveNext = 54,
  ident_CurrentTag = 55,
  ident_CurrentAttr = 56,
  ident_CurrentPos = 57,
  ident_Expect = 58,
  ident_Generalize = 59,
  ident_Error = 60,
  ident_Flexm_Parse = 61,
  ident_ParseDescription = 62,
  ident_ParseDescriptions = 63,
  ident_ParseSubexpr = 64,
  ident_ParseDomain = 65,
  ident_ParseDomainFrom = 66,
  ident_ParseStatesOpt = 67,
  ident_ParseDomainTo = 68,
  ident_ParseFlush = 69,
  ident_ParseNextStateOpt = 70,
  ident_ParseState = 71,
  ident_ParseNameOpt = 72,
  ident_ParseRegexp = 73,
  ident_ParseComplexTerm = 74,
  ident_ParseTerm = 75,
  ident_ParseRepeater = 76,
  ident_ParseSimpleTerm = 77,
  ident_ParseSet = 78,
  ident_ParseInvertOpt = 79,
  ident_ParseComplexSYMBOLSETS = 80,
  ident_ParseComplexSYMBOLSET = 81,
  ident_ParseOptSYMBOL = 82,
  ident_ParseStates = 83,
  ident_ParseStateNames = 84,
  ident_ParseNextName = 85,
  ident_ParseAlt = 86,
  ident_ParseAltTail = 87,
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
  res = refalrts::splice_evar( res, context[8], context[8] );
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
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
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
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 </8 & __Step-Drop/9 >/10 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[10] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Current/5 >/6 & CurrentTag\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_CurrentTag_L1]);
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Current/5 >/6 & CurrentAttr\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_CurrentAttr_L1]);
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Current/5 >/6 & CurrentPos\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_CurrentPos_L1]);
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
    //TRASH: {REMOVED TILE} s.Expected#1/5 (/8 e.ExpectedDescription#1/11 )/9 s.Expected#1/10 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MoveNext/4 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_MoveNext]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 } Tile{ HalfReuse: 'U'/8 } Tile{ HalfReuse: 'n'/9 }"expected "/11 </13 & Flex-TextFromToken/14 </15 & Current/16 >/17 >/18", but expected "/19 Tile{ AsIs: e.ExpectedDescription#1/6 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[11], context[12], "expected ", 9);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_chars(vm, context[19], context[20], ", but expected ", 15);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::reinit_char(context[8], 'U');
  refalrts::reinit_char(context[9], 'n');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[11], context[20] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[8], context[8] );
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
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </6 & CurrentTag/7 >/8 [*]/9 & Expect\1/10 Tile{ AsIs: s.Expected#1/5 } (/11 Tile{ AsIs: e.ExpectedDescription#1/2 } )/12 {*}/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_closure_head(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Expect_L1]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[9]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
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
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & Current/6 >/7 [*]/8 & Error\1/9 (/10 Tile{ AsIs: e.Message#1/2 } )/11 {*}/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_closure_head(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Error_L1]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[8]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Error("Error", COOKIE1_, COOKIE2_, func_Error);


static refalrts::FnResult func_Flexm_Parse(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & G_Tokens/4 AsIs: e.Tokens#1/2 AsIs: >/1 } </5 & ParseDescription/6 >/7 </8 & ParseDescriptions/9 >/10 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_ParseDescription]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_ParseDescriptions]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_Gu_Tokens]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[10] );
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
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSubexpr/4 HalfReuse: >/5 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_ParseSubexpr]);
    refalrts::reinit_close_call(context[5]);
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseDescription\1/4 # TStateStart/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStateStart], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseDomain/4 HalfReuse: >/5 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_ParseDomain]);
    refalrts::reinit_close_call(context[5]);
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseDescription\1/4 # TStartRegexp/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStartRegexp], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseDomain/4 HalfReuse: >/5 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_ParseDomain]);
    refalrts::reinit_close_call(context[5]);
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[5], res );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected domain or subexpr definition, but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected domain or subexpr definition, but got ", 47);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseDescription\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseDescription_L1]);
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

static refalrts::NativeReference nat_ref_ParseDescription("ParseDescription", COOKIE1_, COOKIE2_, func_ParseDescription);


static refalrts::FnResult func_gen_ParseDescriptions_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseDescription/4 HalfReuse: >/5 HalfReuse: </1 } & ParseDescriptions/6 >/7 Tile{ ]] }
    refalrts::alloc_name(vm, context[6], functions[efunc_ParseDescriptions]);
    refalrts::alloc_close_call(vm, context[7]);
    refalrts::update_name(context[4], functions[efunc_ParseDescription]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseDescription/4 HalfReuse: >/5 HalfReuse: </1 } & ParseDescriptions/6 >/7 Tile{ ]] }
    refalrts::alloc_name(vm, context[6], functions[efunc_ParseDescriptions]);
    refalrts::alloc_close_call(vm, context[7]);
    refalrts::update_name(context[4], functions[efunc_ParseDescription]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseDescription/4 HalfReuse: >/5 HalfReuse: </1 } & ParseDescriptions/6 >/7 Tile{ ]] }
    refalrts::alloc_name(vm, context[6], functions[efunc_ParseDescriptions]);
    refalrts::alloc_close_call(vm, context[7]);
    refalrts::update_name(context[4], functions[efunc_ParseDescription]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected domain or subexpr definition, but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected domain or subexpr definition, but got ", 47);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseDescriptions\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseDescriptions_L1]);
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

static refalrts::NativeReference nat_ref_ParseDescriptions("ParseDescriptions", COOKIE1_, COOKIE2_, func_ParseDescriptions);


static refalrts::FnResult func_gen_ParseSubexpr_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
    //RESULT: Tile{ [[ } (/6 # Subexpr/7 </8 & CurrentPos/9 >/10 </11 & CurrentAttr/12 >/13 </14 & MoveNext/15 >/16 </17 & Expect/18 # TEquals/19 '='/20 >/21 Tile{ AsIs: </0 Reuse: & ParseRegexp/4 HalfReuse: >/5 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_Subexpr]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_CurrentPos]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_CurrentAttr]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_MoveNext]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Expect]);
    refalrts::alloc_ident(vm, context[19], identifiers[ident_TEquals]);
    refalrts::alloc_char(vm, context[20], '=');
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_ParseRegexp]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[6], context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSubexpr\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected number, but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected number, but got ", 25);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseSubexpr\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseSubexpr_L1]);
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

static refalrts::NativeReference nat_ref_ParseSubexpr("ParseSubexpr", COOKIE1_, COOKIE2_, func_ParseSubexpr);


static refalrts::FnResult func_gen_ParseDomain_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
    //RESULT: Tile{ [[ } (/6 # Domain/7 </8 & CurrentPos/9 >/10 </11 & ParseDomainFrom/12 >/13 </14 & Expect/15 # TArrow/16"->"/17 >/19 Tile{ AsIs: </0 Reuse: & ParseDomainTo/4 HalfReuse: >/5 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_Domain]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_CurrentPos]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_ParseDomainFrom]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Expect]);
    refalrts::alloc_ident(vm, context[16], identifiers[ident_TArrow]);
    refalrts::alloc_chars(vm, context[17], context[18], "->", 2);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_ParseDomainTo]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[6], context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[19] );
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
    //RESULT: Tile{ [[ } (/6 # Domain/7 </8 & CurrentPos/9 >/10 </11 & ParseDomainFrom/12 >/13 </14 & Expect/15 # TArrow/16"->"/17 >/19 Tile{ AsIs: </0 Reuse: & ParseDomainTo/4 HalfReuse: >/5 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_Domain]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_CurrentPos]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_ParseDomainFrom]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Expect]);
    refalrts::alloc_ident(vm, context[16], identifiers[ident_TArrow]);
    refalrts::alloc_chars(vm, context[17], context[18], "->", 2);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_ParseDomainTo]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[6], context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseDomain\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected start of a state or of a regular expression, but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected start of a state or of a regular expression, but got ", 62);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseDomain\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseDomain_L1]);
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

static refalrts::NativeReference nat_ref_ParseDomain("ParseDomain", COOKIE1_, COOKIE2_, func_ParseDomain);


static refalrts::FnResult func_gen_ParseDomainFrom_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & ParseStatesOpt/5 AsIs: >/1 } )/6 </7 & ParseRegexp/8 >/9 Tile{ ]] }
    refalrts::alloc_close_bracket(vm, context[6]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_ParseRegexp]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_ParseStatesOpt]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::link_brackets( context[0], context[6] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[9] );
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
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & ParseStatesOpt/5 AsIs: >/1 } )/6 </7 & ParseRegexp/8 >/9 Tile{ ]] }
    refalrts::alloc_close_bracket(vm, context[6]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_ParseRegexp]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_ParseStatesOpt]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::link_brackets( context[0], context[6] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseDomainFrom\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected start of a state, but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected start of a state, but got ", 35);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseDomainFrom\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseDomainFrom_L1]);
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

static refalrts::NativeReference nat_ref_ParseDomainFrom("ParseDomainFrom", COOKIE1_, COOKIE2_, func_ParseDomainFrom);


static refalrts::FnResult func_gen_ParseStatesOpt_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
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
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseStates/4 HalfReuse: >/5 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_ParseStates]);
    refalrts::reinit_close_call(context[5]);
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[5], res );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseStatesOpt\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseStatesOpt_L1]);
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

static refalrts::NativeReference nat_ref_ParseStatesOpt("ParseStatesOpt", COOKIE1_, COOKIE2_, func_ParseStatesOpt);


static refalrts::FnResult func_gen_ParseDomainTo_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseFlush/4 HalfReuse: >/5 HalfReuse: </1 } & ParseNextStateOpt/6 >/7 Tile{ ]] }
    refalrts::alloc_name(vm, context[6], functions[efunc_ParseNextStateOpt]);
    refalrts::alloc_close_call(vm, context[7]);
    refalrts::update_name(context[4], functions[efunc_ParseFlush]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseDomainTo\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected named, skipped or error domain possibly followed by next state, but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected named, skipped or error domain possibly followed by next state, but got ", 81);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Generalize/5 </6 & CurrentTag/7 >/8 (/9 # TFlush/10 # TName/11 # TSkip/12 # TErrorMessage/13 )/14 >/15 & ParseDomainTo\1/16 >/17 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Generalize]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TFlush]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_TName]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_TSkip]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_TErrorMessage]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_ParseDomainTo_L1]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[9], context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[17] );
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
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
    //RESULT: Tile{ [[ } (/6 # NamedDomain/7 </8 & CurrentAttr/9 >/10 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & MoveNext/5 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_NamedDomain]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_CurrentAttr]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_MoveNext]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::link_brackets( context[6], context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseFlush\1/4 # TSkip/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TSkip], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # SkippedDomain/0 HalfReuse: </4 HalfReuse: & MoveNext/5 AsIs: >/1 ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_SkippedDomain]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_MoveNext]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseFlush\1/4 # TErrorMessage/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TErrorMessage], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 # ErrorDomain/7 </8 & CurrentAttr/9 >/10 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & MoveNext/5 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_ErrorDomain]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_CurrentAttr]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_MoveNext]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::link_brackets( context[6], context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseFlush\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected named, skipped or error domain, but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected named, skipped or error domain, but got ", 49);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseFlush\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseFlush_L1]);
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

static refalrts::NativeReference nat_ref_ParseFlush("ParseFlush", COOKIE1_, COOKIE2_, func_ParseFlush);


static refalrts::FnResult func_gen_ParseNextStateOpt_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MoveNext/4 HalfReuse: >/5 HalfReuse: (/1 } # NextState/6 </7 & ParseState/8 >/9 )/10 Tile{ ]] }
    refalrts::alloc_ident(vm, context[6], identifiers[ident_NextState]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_ParseState]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_MoveNext]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::link_brackets( context[1], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[10] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseNextStateOpt\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseNextStateOpt_L1]);
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

static refalrts::NativeReference nat_ref_ParseNextStateOpt("ParseNextStateOpt", COOKIE1_, COOKIE2_, func_ParseNextStateOpt);


static refalrts::FnResult func_gen_ParseState_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MoveNext/4 HalfReuse: >/5 HalfReuse: (/1 } </6 & ParseNameOpt/7 >/8 )/9 </10 & Expect/11 # TStateEnd/12 '>'/13 >/14 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_ParseNameOpt]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_close_bracket(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Expect]);
    refalrts::alloc_ident(vm, context[12], identifiers[ident_TStateEnd]);
    refalrts::alloc_char(vm, context[13], '>');
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::update_name(context[4], functions[efunc_MoveNext]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[10] );
    refalrts::link_brackets( context[1], context[9] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseState\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected bracketed state expression, but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected bracketed state expression, but got ", 45);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseState\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseState_L1]);
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

static refalrts::NativeReference nat_ref_ParseState("ParseState", COOKIE1_, COOKIE2_, func_ParseState);


static refalrts::FnResult func_gen_ParseNameOpt_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MoveNext/4 HalfReuse: >/5 HalfReuse: </1 } & CurrentAttr/6 >/7 Tile{ ]] }
    refalrts::alloc_name(vm, context[6], functions[efunc_CurrentAttr]);
    refalrts::alloc_close_call(vm, context[7]);
    refalrts::update_name(context[4], functions[efunc_MoveNext]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseNameOpt\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseNameOpt_L1]);
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

static refalrts::NativeReference nat_ref_ParseNameOpt("ParseNameOpt", COOKIE1_, COOKIE2_, func_ParseNameOpt);


static refalrts::FnResult func_gen_ParseRegexp_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MoveNext/4 HalfReuse: >/5 HalfReuse: (/1 } # Regexp/6 </7 & ParseAlt/8 >/9 )/10 </11 & Expect/12 # TEndRegexp/13 '/'/14 >/15 Tile{ ]] }
    refalrts::alloc_ident(vm, context[6], identifiers[ident_Regexp]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_ParseAlt]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Expect]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_TEndRegexp]);
    refalrts::alloc_char(vm, context[14], '/');
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_MoveNext]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[1], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseRegexp\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected bracketed regular expression or <<EOF>>, but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected bracketed regular expression or <<EOF>>, but got ", 58);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseRegexp\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseRegexp_L1]);
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

static refalrts::NativeReference nat_ref_ParseRegexp("ParseRegexp", COOKIE1_, COOKIE2_, func_ParseRegexp);


static refalrts::FnResult func_gen_ParseComplexTerm_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseTerm/4 HalfReuse: >/5 HalfReuse: </1 } & ParseComplexTerm/6 >/7 Tile{ ]] }
    refalrts::alloc_name(vm, context[6], functions[efunc_ParseComplexTerm]);
    refalrts::alloc_close_call(vm, context[7]);
    refalrts::update_name(context[4], functions[efunc_ParseTerm]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
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
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Generalize/5 </6 & CurrentTag/7 >/8 (/9 # ComplexTermSYMBOL/10 # TAny/11 # TStartGroup/12 # TInclude/13 # TChar/14 # TOpenBracket/15 )/16 >/17 & ParseComplexTerm\1/18 >/19 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Generalize]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_ComplexTermSYMBOL]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_TAny]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_TStartGroup]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_TInclude]);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_TChar]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_TOpenBracket]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_ParseComplexTerm_L1]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[9], context[16] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[19] );
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
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
    //RESULT: Tile{ [[ } (/6 # Term/7 </8 & ParseSimpleTerm/9 >/10 Tile{ AsIs: </0 Reuse: & ParseRepeater/4 HalfReuse: >/5 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_Term]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_ParseSimpleTerm]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_ParseRepeater]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[6], context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseTerm\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected a symbol, starting group, include, open bracket expression but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected a symbol, starting group, include, open bracket expression but got ", 76);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Generalize/5 </6 & CurrentTag/7 >/8 (/9 # TermSYMBOL/10 # TAny/11 # TStartGroup/12 # TInclude/13 # TChar/14 # TOpenBracket/15 )/16 >/17 & ParseTerm\1/18 >/19 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Generalize]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TermSYMBOL]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_TAny]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_TStartGroup]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_TInclude]);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_TChar]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_TOpenBracket]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_ParseTerm_L1]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[9], context[16] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[19] );
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
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
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
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # ManyZero/0 HalfReuse: </4 HalfReuse: & MoveNext/5 AsIs: >/1 ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_ManyZero]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_MoveNext]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseRepeater\1/4 # TOneMany/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TOneMany], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # ManyOne/0 HalfReuse: </4 HalfReuse: & MoveNext/5 AsIs: >/1 ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_ManyOne]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_MoveNext]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseRepeater\1/4 # TOptional/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TOptional], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Optional/0 HalfReuse: </4 HalfReuse: & MoveNext/5 AsIs: >/1 ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Optional]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_MoveNext]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseRepeater\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseRepeater_L1]);
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

static refalrts::NativeReference nat_ref_ParseRepeater("ParseRepeater", COOKIE1_, COOKIE2_, func_ParseRepeater);


static refalrts::FnResult func_gen_ParseSimpleTerm_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # AnyChar/0 HalfReuse: </4 HalfReuse: & MoveNext/5 AsIs: >/1 ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_AnyChar]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_MoveNext]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseSimpleTerm\1/4 # TStartGroup/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStartGroup], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSet/4 HalfReuse: >/5 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_ParseSet]);
    refalrts::reinit_close_call(context[5]);
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseSimpleTerm\1/4 # TInclude/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TInclude], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 # NamedRegexp/7 </8 & CurrentAttr/9 >/10 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & MoveNext/5 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_NamedRegexp]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_CurrentAttr]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_MoveNext]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::link_brackets( context[6], context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[10] );
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
    //RESULT: Tile{ [[ } (/6 # Char/7 </8 & CurrentAttr/9 >/10 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & MoveNext/5 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_Char]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_CurrentAttr]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_MoveNext]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::link_brackets( context[6], context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[10] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MoveNext/4 HalfReuse: >/5 HalfReuse: (/1 } # Alt/6 </7 & ParseAlt/8 >/9 )/10 </11 & Expect/12 # TCloseBracket/13 ')'/14 >/15 Tile{ ]] }
    refalrts::alloc_ident(vm, context[6], identifiers[ident_Alt]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_ParseAlt]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Expect]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_TCloseBracket]);
    refalrts::alloc_char(vm, context[14], ')');
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_MoveNext]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[1], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSimpleTerm\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected any symbol, set of symbols, expression in brackets but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected any symbol, set of symbols, expression in brackets but got ", 68);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseSimpleTerm\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseSimpleTerm_L1]);
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

static refalrts::NativeReference nat_ref_ParseSimpleTerm("ParseSimpleTerm", COOKIE1_, COOKIE2_, func_ParseSimpleTerm);


static refalrts::FnResult func_gen_ParseSet_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MoveNext/4 HalfReuse: >/5 HalfReuse: (/1 } # NamedGroup/6 </7 & ParseInvertOpt/8 >/9 </10 & ParseComplexSYMBOLSET/11 >/12 </13 & ParseComplexSYMBOLSETS/14 >/15 </16 & Expect/17 # TEndGroup/18 ']'/19 >/20 )/21 Tile{ ]] }
    refalrts::alloc_ident(vm, context[6], identifiers[ident_NamedGroup]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_ParseInvertOpt]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_ParseComplexSYMBOLSET]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_ParseComplexSYMBOLSETS]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_Expect]);
    refalrts::alloc_ident(vm, context[18], identifiers[ident_TEndGroup]);
    refalrts::alloc_char(vm, context[19], ']');
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_MoveNext]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::link_brackets( context[1], context[21] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSet\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected expression in square brackets but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected expression in square brackets but got ", 47);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseSet\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseSet_L1]);
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

static refalrts::NativeReference nat_ref_ParseSet("ParseSet", COOKIE1_, COOKIE2_, func_ParseSet);


static refalrts::FnResult func_gen_ParseInvertOpt_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
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
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Inverted/0 HalfReuse: </4 HalfReuse: & MoveNext/5 AsIs: >/1 ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Inverted]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_MoveNext]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseInvertOpt\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseInvertOpt_L1]);
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

static refalrts::NativeReference nat_ref_ParseInvertOpt("ParseInvertOpt", COOKIE1_, COOKIE2_, func_ParseInvertOpt);


static refalrts::FnResult func_gen_ParseComplexSYMBOLSETS_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseComplexSYMBOLSET/4 HalfReuse: >/5 HalfReuse: </1 } & ParseComplexSYMBOLSETS/6 >/7 Tile{ ]] }
    refalrts::alloc_name(vm, context[6], functions[efunc_ParseComplexSYMBOLSETS]);
    refalrts::alloc_close_call(vm, context[7]);
    refalrts::update_name(context[4], functions[efunc_ParseComplexSYMBOLSET]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseComplexSYMBOLSETS\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseComplexSYMBOLSETS_L1]);
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

static refalrts::NativeReference nat_ref_ParseComplexSYMBOLSETS("ParseComplexSYMBOLSETS", COOKIE1_, COOKIE2_, func_ParseComplexSYMBOLSETS);


static refalrts::FnResult func_gen_ParseComplexSYMBOLSET_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
    //RESULT: Tile{ [[ } (/6 </7 & CurrentAttr/8 >/9 </10 & MoveNext/11 >/12 Tile{ AsIs: </0 Reuse: & ParseOptSYMBOL/4 HalfReuse: >/5 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_CurrentAttr]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_MoveNext]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::update_name(context[4], functions[efunc_ParseOptSYMBOL]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[6], context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseComplexSYMBOLSET\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected symbol or pair of symbols but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected symbol or pair of symbols but got ", 43);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseComplexSYMBOLSET\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseComplexSYMBOLSET_L1]);
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

static refalrts::NativeReference nat_ref_ParseComplexSYMBOLSET("ParseComplexSYMBOLSET", COOKIE1_, COOKIE2_, func_ParseComplexSYMBOLSET);


static refalrts::FnResult func_gen_ParseOptSYMBOL_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
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
    //RESULT: Tile{ [[ } </6 & MoveNext/7 >/8 </9 & CurrentAttr/10 >/11 Tile{ AsIs: </0 Reuse: & Expect/4 Reuse: # TChar/5 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_MoveNext]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_CurrentAttr]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_Expect]);
    refalrts::update_ident(context[5], identifiers[ident_TChar]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[11] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseOptSYMBOL\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseOptSYMBOL_L1]);
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

static refalrts::NativeReference nat_ref_ParseOptSYMBOL("ParseOptSYMBOL", COOKIE1_, COOKIE2_, func_ParseOptSYMBOL);


static refalrts::FnResult func_gen_ParseStates_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MoveNext/4 HalfReuse: >/5 HalfReuse: (/1 } </6 & ParseStateNames/7 >/8 )/9 </10 & Expect/11 # TStateEnd/12 '>'/13 >/14 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_ParseStateNames]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_close_bracket(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Expect]);
    refalrts::alloc_ident(vm, context[12], identifiers[ident_TStateEnd]);
    refalrts::alloc_char(vm, context[13], '>');
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::update_name(context[4], functions[efunc_MoveNext]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[10] );
    refalrts::link_brackets( context[1], context[9] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseStates\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected state names surrounded by brackets but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected state names surrounded by brackets but got ", 52);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseStates\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseStates_L1]);
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

static refalrts::NativeReference nat_ref_ParseStates("ParseStates", COOKIE1_, COOKIE2_, func_ParseStates);


static refalrts::FnResult func_gen_ParseStateNames_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
    //RESULT: Tile{ [[ } (/6 # Name/7 </8 & CurrentAttr/9 >/10 )/11 </12 & MoveNext/13 >/14 (/15 Tile{ AsIs: </0 Reuse: & ParseNextName/4 HalfReuse: >/5 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_Name]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_CurrentAttr]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_close_bracket(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_MoveNext]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_ParseNextName]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[15], context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::link_brackets( context[6], context[11] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[15] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseStateNames\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseStateNames_L1]);
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

static refalrts::NativeReference nat_ref_ParseStateNames("ParseStateNames", COOKIE1_, COOKIE2_, func_ParseStateNames);


static refalrts::FnResult func_gen_ParseNextName_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MoveNext/4 HalfReuse: >/5 HalfReuse: </1 } & Expect/6 # TName/7 >/8 (/9 </10 & ParseNextName/11 >/12 )/13 Tile{ ]] }
    refalrts::alloc_name(vm, context[6], functions[efunc_Expect]);
    refalrts::alloc_ident(vm, context[7], identifiers[ident_TName]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_ParseNextName]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_close_bracket(vm, context[13]);
    refalrts::update_name(context[4], functions[efunc_MoveNext]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_call(context[1]);
    refalrts::link_brackets( context[9], context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseNextName\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseNextName_L1]);
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

static refalrts::NativeReference nat_ref_ParseNextName("ParseNextName", COOKIE1_, COOKIE2_, func_ParseNextName);


static refalrts::FnResult func_gen_ParseAlt_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & ParseComplexTerm/5 AsIs: >/1 } )/6 </7 & ParseAltTail/8 >/9 Tile{ ]] }
    refalrts::alloc_close_bracket(vm, context[6]);
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_ParseAltTail]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_ParseComplexTerm]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::link_brackets( context[0], context[6] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseAlt\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Expected regular expression but got "/6 </8 & Flex-TextFromToken/9 </10 & Current/11 >/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Expected regular expression but got ", 36);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Flexm_TextFromToken]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Current]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Error]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[13] );
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
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & Generalize/5 </6 & CurrentTag/7 >/8 (/9 # ComplexTermSYMBOL/10 # TAny/11 # TStartGroup/12 # TInclude/13 # TChar/14 # TOpenBracket/15 # TAlt/16 )/17 >/18 & ParseAlt\1/19 >/20 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Generalize]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_ComplexTermSYMBOL]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_TAny]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_TStartGroup]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_TInclude]);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_TChar]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_TOpenBracket]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_TAlt]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_gen_ParseAlt_L1]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[9], context[17] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[20] );
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
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MoveNext/4 HalfReuse: >/5 HalfReuse: (/1 } </6 & ParseComplexTerm/7 >/8 )/9 </10 & ParseAltTail/11 >/12 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[7], functions[efunc_ParseComplexTerm]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_close_bracket(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_ParseAltTail]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::update_name(context[4], functions[efunc_MoveNext]);
    refalrts::reinit_close_call(context[5]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[10] );
    refalrts::link_brackets( context[1], context[9] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[12] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </1 } & CurrentTag/5 >/6 & ParseAltTail\1/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_CurrentTag]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_ParseAltTail_L1]);
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

static refalrts::NativeReference nat_ref_ParseAltTail("ParseAltTail", COOKIE1_, COOKIE2_, func_ParseAltTail);


//End of file
