// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CreateFastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CreateGlobalGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EscapeChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FastGen_Terms(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Max(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Min(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult PatternComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ReverseGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SplitGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Sub(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult UnBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CalcComplexity(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CalcComplexity_aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ComputeClassK(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ComputeClassMN(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ComputeClasses(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ComputePossibleClasses(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ComputePossibleClasses_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CreateSuperposition(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CreateSuperposition_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoSplitGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Generalization(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Generalization_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetClasses(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetComplex(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetGeneralization(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetMinKMN(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetReplacement(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetReplacement_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GlobalGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GlobalGen_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult InList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult InspectFastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrepRep(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ReplacmentsCounter(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ReversePattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ReversePattern_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SplitGen_Empty(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Superposition(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #ADT_Brackets
template <typename SREFAL_PARAM_INT>
struct ident_ADT_Brackets {
  static const char *name() {
    return "ADT_Brackets";
  }
};

// identifier #Atom
template <typename SREFAL_PARAM_INT>
struct ident_Atom {
  static const char *name() {
    return "Atom";
  }
};

// identifier #Brackets
template <typename SREFAL_PARAM_INT>
struct ident_Brackets {
  static const char *name() {
    return "Brackets";
  }
};

// identifier #E
template <typename SREFAL_PARAM_INT>
struct ident_E {
  static const char *name() {
    return "E";
  }
};

// identifier #K
template <typename SREFAL_PARAM_INT>
struct ident_K {
  static const char *name() {
    return "K";
  }
};

// identifier #MN
template <typename SREFAL_PARAM_INT>
struct ident_MN {
  static const char *name() {
    return "MN";
  }
};

// identifier #S
template <typename SREFAL_PARAM_INT>
struct ident_S {
  static const char *name() {
    return "S";
  }
};

// identifier #T
template <typename SREFAL_PARAM_INT>
struct ident_T {
  static const char *name() {
    return "T";
  }
};

// identifier #TkChar
template <typename SREFAL_PARAM_INT>
struct ident_TkChar {
  static const char *name() {
    return "TkChar";
  }
};

// identifier #TkIdentifier
template <typename SREFAL_PARAM_INT>
struct ident_TkIdentifier {
  static const char *name() {
    return "TkIdentifier";
  }
};

// identifier #TkName
template <typename SREFAL_PARAM_INT>
struct ident_TkName {
  static const char *name() {
    return "TkName";
  }
};

// identifier #TkNumber
template <typename SREFAL_PARAM_INT>
struct ident_TkNumber {
  static const char *name() {
    return "TkNumber";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

static refalrts::FnResult lambda_CreateGlobalGen_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_CreateGlobalGen_0/4 s.Num#2/9 (/7 e.FastGen#2/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.FastGen#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#2/9 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.FastGen#2/5 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & InspectFastGen/4 } e.FastGen#2/5/10 >/12 )/13 Tile{ ]] }
  if (! refalrts::copy_evar(context[10], context[11], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[1] );
  refalrts::update_name( context[4], InspectFastGen, "InspectFastGen" );
  refalrts::link_brackets( context[1], context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_CreateGlobalGen_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_CreateGlobalGen_1/4 (/7 e.FastGen#2/5 )/8 (/11 e.Inspected#2/9 )/12 >/1
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
  // closed e.FastGen#2 as range 5
  // closed e.Inspected#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.FastGen#2/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: </0 Reuse: & GlobalGen/4 } Tile{ AsIs: e.Inspected#2/9 } Tile{ HalfReuse: >/12 HalfReuse: )/1 ]] }
  refalrts::update_name( context[4], GlobalGen, "GlobalGen" );
  refalrts::reinit_close_call( context[12] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult CreateGlobalGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CreateGlobalGen/4 e.HardSentences#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.HardSentences#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & Fetch/6 Tile{ AsIs: </0 Reuse: & CreateFastGen/4 AsIs: e.HardSentences#1/2 AsIs: >/1 } </7 & Seq/8 & lambda_CreateGlobalGen_0/9 & lambda_CreateGlobalGen_1/10 >/11 >/12 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], lambda_CreateGlobalGen_0, "lambda_CreateGlobalGen_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], lambda_CreateGlobalGen_1, "lambda_CreateGlobalGen_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], CreateFastGen, "CreateFastGen" );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_InspectFastGen_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_InspectFastGen_0/4 1/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::number_left( 1UL, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_InspectFastGen_0/4 1/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 1/0 } Tile{ ]] }
    refalrts::reinit_number( context[0], 1UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_InspectFastGen_0/4 s.Num#2/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_InspectFastGen_0/4 s.Num#2/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 0/0 } Tile{ ]] }
  refalrts::reinit_number( context[0], 0UL );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult InspectFastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & InspectFastGen/4 (/7 # E/9 '$'/10 e.EReplacements#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_E<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( '$', context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.EReplacements#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/11 # E/12 </13 & Fetch/14 Tile{ AsIs: </0 Reuse: & ReplacmentsCounter/4 HalfReuse: 0/7 HalfReuse: (/9 HalfReuse: )/10 AsIs: e.EReplacements#1/5 HalfReuse: >/8 } & lambda_InspectFastGen_0/15 >/16 '$'/17 e.EReplacements#1/5/18 )/20 </21 & InspectFastGen/22 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_E<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], lambda_InspectFastGen_0, "lambda_InspectFastGen_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], '$' ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], InspectFastGen, "InspectFastGen" ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ReplacmentsCounter, "ReplacmentsCounter" );
    refalrts::reinit_number( context[7], 0UL );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_close_bracket( context[10] );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[11], context[20] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[15], context[22] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & InspectFastGen/4 (/7 # Brackets/9 s.Num#1/10 e.inBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.inBrackets#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Brackets/9 AsIs: s.Num#1/10 } Tile{ AsIs: </0 AsIs: & InspectFastGen/4 } Tile{ AsIs: e.inBrackets#1/5 } >/11 )/12 </13 Tile{ HalfReuse: & InspectFastGen/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[8], InspectFastGen, "InspectFastGen" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[13] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & InspectFastGen/4 (/7 # ADT_Brackets/9 (/12 e.Name#1/10 )/13 s.Num#1/14 e.inBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#1 as range 10
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    // closed e.inBrackets#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT_Brackets/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 AsIs: s.Num#1/14 } Tile{ AsIs: </0 AsIs: & InspectFastGen/4 } Tile{ AsIs: e.inBrackets#1/5 } >/15 )/16 </17 Tile{ HalfReuse: & InspectFastGen/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[8], InspectFastGen, "InspectFastGen" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & InspectFastGen/4 (/7 e.Any#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Any#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Any#1/5 } Tile{ HalfReuse: )/4 HalfReuse: </7 } Tile{ HalfReuse: & InspectFastGen/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], InspectFastGen, "InspectFastGen" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & InspectFastGen/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & InspectFastGen/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ReplacmentsCounter_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ReplacmentsCounter_0/4 s.Counter#1/18 (/16 e.Scanned#1/14 )/17 (/12 e.Tail#1/10 )/13 0/9 (/7 e.PrepReplacement#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::number_right( 0UL, context[2], context[3] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Scanned#1 as range 14
    // closed e.Tail#1 as range 10
    // closed e.PrepReplacement#2 as range 5
    if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & ReplacmentsCounter/9 } Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Counter#1/18 HalfReuse: >/16 } Tile{ AsIs: (/12 } Tile{ AsIs: e.Scanned#1/14 } Tile{ AsIs: (/7 AsIs: e.PrepReplacement#2/5 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: e.Tail#1/10 } Tile{ HalfReuse: >/17 } Tile{ ]] }
    refalrts::reinit_open_call( context[13] );
    refalrts::reinit_name( context[9], ReplacmentsCounter, "ReplacmentsCounter" );
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_call( context[17] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_evar( res, context[13], context[9] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ReplacmentsCounter_0/4 s.Counter#1/18 (/16 e.Scanned#1/14 )/17 (/12 e.Tail#1/10 )/13 1/9 (/7 e.PrepReplacement#2/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::number_right( 1UL, context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Scanned#1 as range 14
  // closed e.Tail#1 as range 10
  // closed e.PrepReplacement#2 as range 5
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/12 {REMOVED TILE}  )/13 1/9 (/7 e.PrepReplacement#2/5 )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReplacmentsCounter/4 AsIs: s.Counter#1/18 AsIs: (/16 AsIs: e.Scanned#1/14 AsIs: )/17 } Tile{ AsIs: e.Tail#1/10 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ReplacmentsCounter, "ReplacmentsCounter" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[17], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ReplacmentsCounter(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReplacmentsCounter/4 s.Counter#1/5 (/8 e.Scanned#1/6 )/9 (/12 (/16 e.Replacement#1/14 )/17 )/13 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[10], context[11] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.Scanned#1 as range 6
    // closed e.Replacement#1 as range 14
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </18 & Fetch/19 </20 & InList/21 (/22 </23 Tile{ HalfReuse: & PrepRep/16 AsIs: e.Replacement#1/14 HalfReuse: >/17 AsIs: )/13 } (/24 e.Scanned#1/6/25 )/27 >/28 </29 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_ReplacmentsCounter_0/4 AsIs: s.Counter#1/5 AsIs: (/8 AsIs: e.Scanned#1/6 AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.Tail#1/2 } )/30 >/31 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], InList, "InList" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[16], PrepRep, "PrepRep" );
    refalrts::reinit_close_call( context[17] );
    refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::update_name( context[4], lambda_ReplacmentsCounter_0, "lambda_ReplacmentsCounter_0" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[12], context[30] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::link_brackets( context[22], context[13] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[24], context[29] );
    res = refalrts::splice_evar( res, context[16], context[13] );
    res = refalrts::splice_evar( res, context[18], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ReplacmentsCounter/4 s.Counter#1/9 (/7 e.Scanned#1/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Scanned#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & ReplacmentsCounter/4 s.Counter#1/9 (/7 e.Scanned#1/5 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Counter1 #9/0 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrepRep(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrepRep/4 (/7 # Atom/9 e.Body#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Body#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Atom/9 AsIs: e.Body#1/5 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & PrepRep/4 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrepRep/4 (/7 # Brackets/9 s.Num#1/10 e.inBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.inBrackets#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Brackets/9 AsIs: s.Num#1/10 } Tile{ AsIs: </0 AsIs: & PrepRep/4 } Tile{ AsIs: e.inBrackets#1/5 } >/11 )/12 </13 Tile{ HalfReuse: & PrepRep/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[8], PrepRep, "PrepRep" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[13] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrepRep/4 (/7 # ADT_Brackets/9 (/12 e.Name#1/10 )/13 s.Num#1/14 e.inBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#1 as range 10
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    // closed e.inBrackets#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT_Brackets/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 AsIs: s.Num#1/14 } Tile{ AsIs: </0 AsIs: & PrepRep/4 } Tile{ AsIs: e.inBrackets#1/5 } >/15 )/16 </17 Tile{ HalfReuse: & PrepRep/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[8], PrepRep, "PrepRep" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrepRep/4 (/7 s.Mode#1/9 e.Body#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    // closed e.Body#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Mode#1/9 e.Body#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Mode1 #9/4 HalfReuse: )/7 } </10 Tile{ HalfReuse: & PrepRep/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_name( context[8], PrepRep, "PrepRep" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrepRep/4 (/7 e.Else#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Else#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Else#1/5 } Tile{ HalfReuse: )/4 HalfReuse: </7 } Tile{ HalfReuse: & PrepRep/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], PrepRep, "PrepRep" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrepRep/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & PrepRep/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_InList_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_InList_0/4 (/8 e.Elem#1/6 )/9 (/12 e.List#1/10 )/13 '='/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '=', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Elem#1 as range 6
    // closed e.List#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Elem#1/6 )/9 (/12 e.List#1/10 )/13 '='/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 1/0 HalfReuse: (/4 HalfReuse: )/8 } Tile{ ]] }
    refalrts::reinit_number( context[0], 1UL );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[8] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_InList_0/4 (/7 e.Elem#1/5 )/8 (/11 e.List#1/9 )/12 s.Else#2/13 >/1
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
  // closed e.Elem#1 as range 5
  // closed e.List#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.Else#2/13 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & InList/4 AsIs: (/7 AsIs: e.Elem#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.List#1/9 AsIs: )/12 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], InList, "InList" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[12], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult InList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & InList/4 (/7 e.Elem#1/5 )/8 (/11 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Elem#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  (/11 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/4 AsIs: (/7 AsIs: e.Elem#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_number( context[4], 0UL );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & InList/4 (/7 e.Elem#1/5 )/8 (/11 t.ListElem#1/13 e.List#1/9 )/12 >/1
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
  // closed e.Elem#1 as range 5
  context[14] = refalrts::tvar_left( context[13], context[9], context[10] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.List#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </15 & Fetch/16 </17 & Compare/18 (/19 Tile{ AsIs: t.ListElem#1/13 } )/20 (/21 e.Elem#1/5/22 )/24 >/25 </26 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_InList_0/4 AsIs: (/7 AsIs: e.Elem#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.List#1/9 } )/27 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], Compare, "Compare" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[22], context[23], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_InList_0, "lambda_InList_0" );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[26] );
  refalrts::link_brackets( context[11], context[27] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[21], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[20], context[26] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GlobalGen_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GlobalGen_0/4 (/7 # E/9 0/10 '$'/11 e.Body#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_E<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::number_left( 0UL, context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_left( '$', context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Body#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # E/9 0/10 '$'/11 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GlobalGen_Aux/4 } Tile{ AsIs: e.Body#2/5 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], GlobalGen_Aux, "GlobalGen_Aux" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GlobalGen_0/4 (/7 # E/9 1/10 '$'/11 e.Body#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_E<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::number_left( 1UL, context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_left( '$', context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Body#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GlobalGen_0/4 (/7 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 HalfReuse: # E/10 AsIs: '$'/11 AsIs: e.Body#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_ident( context[10], & ident_E<int>::name );
    refalrts::link_brackets( context[9], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GlobalGen_0/4 (/7 # Brackets/9 s.Num#2/10 e.inBrackets#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.inBrackets#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#2/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & GlobalGen/9 } Tile{ AsIs: e.inBrackets#2/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], GlobalGen, "GlobalGen" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GlobalGen_0/4 (/7 # ADT_Brackets/9 (/12 e.Name#2/10 )/13 s.Num#2/14 e.inBrackets#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#2 as range 10
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    // closed e.inBrackets#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#2/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT_Brackets/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } Tile{ AsIs: </0 Reuse: & GlobalGen/4 } Tile{ AsIs: e.inBrackets#2/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], GlobalGen, "GlobalGen" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GlobalGen_0/4 (/7 e.Any#2/5 )/8 >/1
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
  // closed e.Any#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_GlobalGen_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Any#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GlobalGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GlobalGen/4 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GlobalGen/4 e.Inspected#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Inspected#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_GlobalGen_0/4 AsIs: e.Inspected#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_GlobalGen_0, "lambda_GlobalGen_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GlobalGen_Aux_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GlobalGen_Aux_0/4 (/7 (/11 e.Replacement#2/9 )/12 )/8 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Replacement#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_GlobalGen_Aux_0/4 (/7 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.Replacement#2/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GlobalGen_Aux_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GlobalGen_Aux_1/4 (/7 (/11 e.Class#3/9 )/12 e.Body#3/5 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Class#3 as range 9
  // closed e.Body#3 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Class#3/9 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CalcComplexity/4 HalfReuse: </7 HalfReuse: & Generalization/11 } Tile{ HalfReuse: 1/12 AsIs: e.Body#3/5 HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::update_name( context[4], CalcComplexity, "CalcComplexity" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[11], Generalization, "Generalization" );
  refalrts::reinit_number( context[12], 1UL );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[11], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GlobalGen_Aux_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GlobalGen_Aux_2/4 e.All#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.All#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & GetComplex/6 </7 & Map/8 & lambda_GlobalGen_Aux_1/9 </10 & CreateSuperposition/11 (/12 e.All#2/2/13 )/15 (/16 Tile{ AsIs: </0 Reuse: & ComputePossibleClasses/4 AsIs: e.All#2/2 AsIs: >/1 } )/17 >/18 >/19 >/20 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], GetComplex, "GetComplex" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], lambda_GlobalGen_Aux_1, "lambda_GlobalGen_Aux_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], CreateSuperposition, "CreateSuperposition" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[13], context[14], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ComputePossibleClasses, "ComputePossibleClasses" );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[10] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GlobalGen_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GlobalGen_Aux/4 e.Replacements#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Replacements#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & Fetch/6 </7 Tile{ HalfReuse: & Map/0 Reuse: & lambda_GlobalGen_Aux_0/4 AsIs: e.Replacements#1/2 AsIs: >/1 } </8 & Seq/9 & lambda_GlobalGen_Aux_2/10 >/11 >/12 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], lambda_GlobalGen_Aux_2, "lambda_GlobalGen_Aux_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_GlobalGen_Aux_0, "lambda_GlobalGen_Aux_0" );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ComputePossibleClasses_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ComputePossibleClasses_0/4 e.Classes#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Classes#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & GetMinKMN/6 (/7 100/8 100/9 Tile{ HalfReuse: 100/0 HalfReuse: )/4 AsIs: e.Classes#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], GetMinKMN, "GetMinKMN" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[8], 100UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[9], 100UL ) )
    return refalrts::cNoMemory;
  refalrts::reinit_number( context[0], 100UL );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[7], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ComputePossibleClasses(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ComputePossibleClasses/4 e.Patterns#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Patterns#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Patterns#1/2 HalfReuse: </1 } & Seq/5 & ComputeClasses/6 & lambda_ComputePossibleClasses_0/7 & ComputePossibleClasses_Aux/8 >/9 >/10 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ComputeClasses, "ComputeClasses" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], lambda_ComputePossibleClasses_0, "lambda_ComputePossibleClasses_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ComputePossibleClasses_Aux, "ComputePossibleClasses_Aux" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ComputeClasses_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ComputeClasses_0/4 (/7 e.Left#2/9 (/13 # E/15 e.Body#2/11 )/14 e.Right#2/16 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[5];
      context[17] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[16], context[17] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left(  & ident_E<int>::name, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Body#2 as range 11
      // closed e.Right#2 as range 5

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } (/18 Tile{ HalfReuse: # MN/0 HalfReuse: </4 HalfReuse: & ComputeClassMN/7 AsIs: e.Left#2/9 AsIs: (/13 AsIs: # E/15 AsIs: e.Body#2/11 AsIs: )/14 AsIs: e.Right#2/16 HalfReuse: 0/8 HalfReuse: 0/1 } >/19 )/20 Tile{ ]] }
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_ident( context[0], & ident_MN<int>::name );
      refalrts::reinit_open_call( context[4] );
      refalrts::reinit_name( context[7], ComputeClassMN, "ComputeClassMN" );
      refalrts::reinit_number( context[8], 0UL );
      refalrts::reinit_number( context[1], 0UL );
      refalrts::link_brackets( context[18], context[20] );
      refalrts::push_stack( context[19] );
      refalrts::push_stack( context[4] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[5], context[6] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ComputeClasses_0/4 (/7 e.Pattern#2/5 )/8 >/1
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
  // closed e.Pattern#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/9 Tile{ HalfReuse: # K/0 HalfReuse: </4 HalfReuse: & ComputeClassK/7 AsIs: e.Pattern#2/5 HalfReuse: 0/8 AsIs: >/1 } )/10 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_ident( context[0], & ident_K<int>::name );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], ComputeClassK, "ComputeClassK" );
  refalrts::reinit_number( context[8], 0UL );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ComputeClasses(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ComputeClasses/4 e.Patterns#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Patterns#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_ComputeClasses_0/4 AsIs: e.Patterns#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_ComputeClasses_0, "lambda_ComputeClasses_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GetMinKMN(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetMinKMN/4 (/7 s.K#1/14 s.M#1/15 s.N#1/16 )/8 (/11 # K/13 s.KNum#1/17 )/12 e.OtherClasses#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_K<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.OtherClasses#1 as range 2
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.K#1/14 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & GetMinKMN/4 AsIs: (/7 } Tile{ HalfReuse: </8 HalfReuse: & Min/11 HalfReuse: s.K1 #14/13 AsIs: s.KNum#1/17 } >/18 Tile{ AsIs: s.M#1/15 AsIs: s.N#1/16 } Tile{ AsIs: )/12 AsIs: e.OtherClasses#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[11], Min, "Min" );
    refalrts::reinit_svar( context[13], context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[8], context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetMinKMN/4 (/7 s.K#1/14 s.M#1/15 s.N#1/16 )/8 (/11 # MN/13 s.MNum#1/17 s.NNum#1/18 )/12 e.OtherClasses#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_MN<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.OtherClasses#1 as range 2
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.M#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & GetMinKMN/4 AsIs: (/7 AsIs: s.K#1/14 } Tile{ HalfReuse: </8 HalfReuse: & Min/11 HalfReuse: s.M1 #15/13 AsIs: s.MNum#1/17 } >/19 </20 & Min/21 Tile{ AsIs: s.N#1/16 } Tile{ AsIs: s.NNum#1/18 } >/22 Tile{ AsIs: )/12 AsIs: e.OtherClasses#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Min, "Min" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[11], Min, "Min" );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[8], context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[14], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GetMinKMN/4 (/7 s.K#1/9 s.M#1/10 s.N#1/11 )/8 >/1
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & GetMinKMN/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.K#1/9 AsIs: s.M#1/10 AsIs: s.N#1/11 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ComputePossibleClasses_Aux_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ComputePossibleClasses_Aux_0/4 s.K#1/5 s.N#1/6 s.M#1/7 '>'/8 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    context[8] = refalrts::char_left( '>', context[2], context[3] );
    if( ! context[8] )
      continue;
    // closed e.Tail#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.K#1/5 {REMOVED TILE}  s.M#1/7 '>'/8 e.Tail#2/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.M1 #7/4 } Tile{ AsIs: s.N#1/6 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[4], context[7] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ComputePossibleClasses_Aux_0/4 s.K#1/5 s.N#1/6 s.M#1/7 '='/8 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    context[8] = refalrts::char_left( '=', context[2], context[3] );
    if( ! context[8] )
      continue;
    // closed e.Tail#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.K#1/5 {REMOVED TILE}  s.M#1/7 '='/8 e.Tail#2/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.M1 #7/4 } Tile{ AsIs: s.N#1/6 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[4], context[7] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ComputePossibleClasses_Aux_0/4 s.K#1/8 s.N#1/9 s.M#1/10 '<'/7 '>'/6 '>'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '>', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( '>', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/11 </12 & GetClasses/13 </14 & Min/15 Tile{ AsIs: </0 Reuse: & Sub/4 AsIs: s.K#1/8 AsIs: s.N#1/9 } >/16 s.M#1/10/17 >/18 </19 & Max/20 </21 & Sub/22 s.K#1/8/23 s.N#1/9/24 >/25 Tile{ AsIs: s.M#1/10 HalfReuse: >/7 HalfReuse: s.K1 #8/6 HalfReuse: >/5 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], GetClasses, "GetClasses" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Min, "Min" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[17], context[10]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], Max, "Max" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], Sub, "Sub" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[23], context[8]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[24], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Sub, "Sub" );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_svar( context[6], context[8] );
    refalrts::reinit_close_call( context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[16], context[25] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ComputePossibleClasses_Aux_0/4 s.K#1/8 s.N#1/9 s.M#1/10 '<'/7 '>'/6 '='/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '=', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( '>', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.K#1/8 s.N#1/9 s.M#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetClasses/4 } Tile{ HalfReuse: 0/7 HalfReuse: s.M1 #10/6 HalfReuse: s.K1 #8/5 AsIs: >/1 ]] }
    refalrts::update_name( context[4], GetClasses, "GetClasses" );
    refalrts::reinit_number( context[7], 0UL );
    refalrts::reinit_svar( context[6], context[10] );
    refalrts::reinit_svar( context[5], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ComputePossibleClasses_Aux_0/4 s.K#1/8 s.N#1/9 s.M#1/10 '<'/7 '>'/6 '<'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( '>', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.K#1/8 s.N#1/9 s.M#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetClasses/4 } Tile{ HalfReuse: 0/7 HalfReuse: s.M1 #10/6 HalfReuse: s.K1 #8/5 AsIs: >/1 ]] }
    refalrts::update_name( context[4], GetClasses, "GetClasses" );
    refalrts::reinit_number( context[7], 0UL );
    refalrts::reinit_svar( context[6], context[10] );
    refalrts::reinit_svar( context[5], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ComputePossibleClasses_Aux_0/4 s.K#1/8 s.N#1/9 s.M#1/10 '<'/7 '<'/6 '>'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '>', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.M#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ } </11 & GetClasses/12 Tile{ AsIs: </0 Reuse: & Sub/4 AsIs: s.K#1/8 AsIs: s.N#1/9 } Tile{ HalfReuse: >/7 HalfReuse: s.K1 #8/6 HalfReuse: s.K1 #8/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], GetClasses, "GetClasses" ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Sub, "Sub" );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_svar( context[6], context[8] );
    refalrts::reinit_svar( context[5], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ComputePossibleClasses_Aux_0/4 s.K#1/8 s.N#1/9 s.M#1/10 '<'/7 '<'/6 '='/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '=', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.K#1/8 s.N#1/9 s.M#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetClasses/4 } Tile{ HalfReuse: 0/7 HalfReuse: s.K1 #8/6 HalfReuse: s.K1 #8/5 AsIs: >/1 ]] }
    refalrts::update_name( context[4], GetClasses, "GetClasses" );
    refalrts::reinit_number( context[7], 0UL );
    refalrts::reinit_svar( context[6], context[8] );
    refalrts::reinit_svar( context[5], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ComputePossibleClasses_Aux_0/4 s.K#1/8 s.N#1/9 s.M#1/10 '<'/7 '<'/6 '<'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.K#1/8 s.N#1/9 s.M#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetClasses/4 } Tile{ HalfReuse: 0/7 HalfReuse: s.K1 #8/6 HalfReuse: s.K1 #8/5 AsIs: >/1 ]] }
    refalrts::update_name( context[4], GetClasses, "GetClasses" );
    refalrts::reinit_number( context[7], 0UL );
    refalrts::reinit_svar( context[6], context[8] );
    refalrts::reinit_svar( context[5], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ComputePossibleClasses_Aux_0/4 s.K#1/8 s.N#1/9 s.M#1/10 '<'/7 '='/6 '>'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '>', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( '=', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.M#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ } </11 & GetClasses/12 Tile{ AsIs: </0 Reuse: & Sub/4 AsIs: s.K#1/8 AsIs: s.N#1/9 } Tile{ HalfReuse: >/7 HalfReuse: s.K1 #8/6 HalfReuse: s.K1 #8/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], GetClasses, "GetClasses" ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Sub, "Sub" );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_svar( context[6], context[8] );
    refalrts::reinit_svar( context[5], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ComputePossibleClasses_Aux_0/4 s.K#1/8 s.N#1/9 s.M#1/10 '<'/7 '='/6 '='/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '=', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( '=', context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[7] )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.K#1/8 s.N#1/9 s.M#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetClasses/4 } Tile{ HalfReuse: 0/7 HalfReuse: s.K1 #8/6 HalfReuse: s.K1 #8/5 AsIs: >/1 ]] }
    refalrts::update_name( context[4], GetClasses, "GetClasses" );
    refalrts::reinit_number( context[7], 0UL );
    refalrts::reinit_svar( context[6], context[8] );
    refalrts::reinit_svar( context[5], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ComputePossibleClasses_Aux_0/4 s.K#1/8 s.N#1/9 s.M#1/10 '<'/7 '='/6 '<'/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::char_right( '<', context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[6] = refalrts::char_right( '=', context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::char_right( '<', context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.K#1/8 s.N#1/9 s.M#1/10 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetClasses/4 } Tile{ HalfReuse: 0/7 HalfReuse: s.K1 #8/6 HalfReuse: s.K1 #8/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], GetClasses, "GetClasses" );
  refalrts::reinit_number( context[7], 0UL );
  refalrts::reinit_svar( context[6], context[8] );
  refalrts::reinit_svar( context[5], context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ComputePossibleClasses_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ComputePossibleClasses_Aux/4 (/7 s.K#1/11 100/10 100/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::number_right( 100UL, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::number_right( 100UL, context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetClasses/4 HalfReuse: 0/7 AsIs: s.K#1/11 HalfReuse: s.K1 #11/10 HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name( context[4], GetClasses, "GetClasses" );
    refalrts::reinit_number( context[7], 0UL );
    refalrts::reinit_svar( context[10], context[11] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ComputePossibleClasses_Aux/4 (/7 100/9 s.M#1/10 s.N#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::number_left( 100UL, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ComputePossibleClasses_Aux/4 (/7 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: s.M#1/10 AsIs: s.N#1/11 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[9] );
    refalrts::link_brackets( context[9], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ComputePossibleClasses_Aux/4 (/7 s.K#1/9 s.M#1/10 s.N#1/11 )/8 >/1
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & Compare/12 Tile{ AsIs: s.K#1/9 } </13 & Add/14 Tile{ AsIs: s.M#1/10 AsIs: s.N#1/11 HalfReuse: >/8 AsIs: >/1 } </15 & Compare/16 s.K#1/9/17 s.M#1/10/18 >/19 </20 & Compare/21 s.K#1/9/22 s.N#1/11/23 >/24 </25 & CreateClosure /26 & lambda_ComputePossibleClasses_Aux_0/27 s.K#1/9/28 s.N#1/11/29 s.M#1/10/30 >/31 >/32 Tile{ ]] }
  if( ! refalrts::alloc_name( context[12], Compare, "Compare" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Add, "Add" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], Compare, "Compare" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[17], context[9]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[18], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], Compare, "Compare" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[22], context[9]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[23], context[11]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], lambda_ComputePossibleClasses_Aux_0, "lambda_ComputePossibleClasses_Aux_0" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[28], context[9]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[29], context[11]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[30], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[32] );
  res = refalrts::splice_evar( res, context[10], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GetClasses_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GetClasses_0/4 s.M#1/6 s.MplusN#1/7 s.MaxM#1/8 '>'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '>', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GetClasses_0/4 s.M#1/6 s.MplusN#1/7 s.MaxM#1/8 '>'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GetClasses_0/4 s.M#1/5 s.MplusN#1/6 s.MaxM#1/7 s.Else#2/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Else#2/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/9 s.M#1/5/10 </11 & Sub/12 Tile{ AsIs: s.MplusN#1/6 } s.M#1/5/13 >/14 )/15 </16 & GetClasses/17 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.M#1/5 } >/18 Tile{ AsIs: s.MaxM#1/7 } s.MplusN#1/6/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Sub, "Sub" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[13], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], GetClasses, "GetClasses" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[19], context[6]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Inc, "Inc" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[9], context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GetClasses(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GetClasses/4 s.M#1/5 s.MaxM#1/6 s.MplusN#1/7 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </8 & Fetch/9 Tile{ AsIs: </0 Reuse: & Compare/4 AsIs: s.M#1/5 AsIs: s.MaxM#1/6 } >/10 </11 & CreateClosure /12 & lambda_GetClasses_0/13 s.M#1/5/14 Tile{ AsIs: s.MplusN#1/7 } s.MaxM#1/6/15 >/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], lambda_GetClasses_0, "lambda_GetClasses_0" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[14], context[5]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[15], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Compare, "Compare" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ComputeClassK(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ComputeClassK/4 s.K#1/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & ComputeClassK/4 s.K#1/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.K1 #5/0 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ComputeClassK/4 t.Term#1/5 e.Tail#1/2 s.K#1/7 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  t.Term#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & ComputeClassK/4 } Tile{ AsIs: e.Tail#1/2 } </8 & Inc/9 Tile{ AsIs: s.K#1/7 AsIs: >/1 } >/10 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ComputeClassMN(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ComputeClassMN/4 (/7 # E/9 e.Body#1/5 )/8 s.M#1/10 s.N#1/11 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_E<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Body#1 as range 5
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ComputeClassMN/4 (/7 # E/9 e.Body#1/5 )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.M#1/10 AsIs: s.N#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ComputeClassMN/4 (/7 # E/9 e.Body1#1/5 )/8 e.Any#1/2 (/14 # E/16 e.Body2#1/12 )/15 s.M#1/11 s.N#1/10 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_E<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Body1#1 as range 5
    if( ! refalrts::svar_right( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[2], context[3] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[2], context[3] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  & ident_E<int>::name, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.Any#1 as range 2
    // closed e.Body2#1 as range 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ComputeClassMN/4 (/7 # E/9 e.Body1#1/5 )/8 e.Any#1/2 (/14 # E/16 e.Body2#1/12 )/15 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.M#1/11 AsIs: s.N#1/10 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ComputeClassMN/4 (/7 # E/9 e.Body#1/5 )/8 e.Any#1/2 t.Right#1/12 s.M#1/11 s.N#1/10 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_E<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Body#1 as range 5
    if( ! refalrts::svar_right( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[2], context[3] ) )
      continue;
    context[13] = refalrts::tvar_right( context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    // closed e.Any#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.Right#1/12 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ComputeClassMN/4 AsIs: (/7 AsIs: # E/9 AsIs: e.Body#1/5 AsIs: )/8 } Tile{ AsIs: e.Any#1/2 } Tile{ AsIs: s.M#1/11 } </14 & Inc/15 Tile{ AsIs: s.N#1/10 AsIs: >/1 } >/16 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ComputeClassMN/4 t.Left#1/5 e.Any#1/2 (/11 # E/13 e.Body#1/9 )/12 s.M#1/8 s.N#1/7 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[8], context[2], context[3] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_E<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Any#1 as range 2
    // closed e.Body#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.Left#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ComputeClassMN/4 } Tile{ AsIs: e.Any#1/2 } Tile{ AsIs: (/11 AsIs: # E/13 AsIs: e.Body#1/9 AsIs: )/12 } </14 & Inc/15 Tile{ AsIs: s.M#1/8 } >/16 Tile{ AsIs: s.N#1/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ComputeClassMN/4 t.Left#1/5 e.Any#1/2 t.Right#1/9 s.M#1/8 s.N#1/7 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Any#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  t.Left#1/5 {REMOVED TILE}  t.Right#1/9 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & ComputeClassMN/4 } Tile{ AsIs: e.Any#1/2 } </11 & Inc/12 Tile{ AsIs: s.M#1/8 } >/13 </14 & Inc/15 Tile{ AsIs: s.N#1/7 AsIs: >/1 } >/16 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Superposition(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Superposition/4 (/7 )/8 (/11 s.Num1#1/13 s.Num2#1/14 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num1#1/13 s.Num2#1/14 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # E/4 HalfReuse: '$'/7 HalfReuse: (/8 AsIs: (/11 } )/15 Tile{ AsIs: )/12 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_E<int>::name );
    refalrts::reinit_char( context[7], '$' );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::link_brackets( context[11], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Superposition/4 (/7 e.Any#1/5 )/8 (/11 0/13 0/14 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::number_left( 0UL, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::number_left( 0UL, context[9], context[10] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Any#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/14 HalfReuse: # E/12 } Tile{ HalfReuse: '$'/0 HalfReuse: (/4 AsIs: (/7 AsIs: e.Any#1/5 AsIs: )/8 HalfReuse: )/11 HalfReuse: )/13 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_ident( context[12], & ident_E<int>::name );
    refalrts::reinit_char( context[0], '$' );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::link_brackets( context[14], context[13] );
    refalrts::link_brackets( context[4], context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[14], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Superposition/4 (/7 (/11 # Brackets/13 e.inBrackets#1/9 )/12 e.Tail#1/5 )/8 (/16 s.Num1#1/19 0/18 )/17 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::number_right( 0UL, context[14], context[15] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.inBrackets#1 as range 9
    // closed e.Tail#1 as range 5
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Brackets/13 AsIs: e.inBrackets#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & Superposition/4 AsIs: (/7 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: )/8 AsIs: (/16 } </20 & Dec/21 Tile{ AsIs: s.Num1#1/19 } >/22 Tile{ AsIs: 0/18 AsIs: )/17 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Dec, "Dec" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[8], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Superposition/4 (/7 (/11 # ADT_Brackets/13 (/16 e.Name#1/14 )/17 e.inBrackets#1/9 )/12 e.Tail#1/5 )/8 (/20 s.Num1#1/23 0/22 )/21 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::number_right( 0UL, context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 14
    // closed e.inBrackets#1 as range 9
    // closed e.Tail#1 as range 5
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # ADT_Brackets/13 AsIs: (/16 AsIs: e.Name#1/14 AsIs: )/17 AsIs: e.inBrackets#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & Superposition/4 AsIs: (/7 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: )/8 AsIs: (/20 } </24 & Dec/25 Tile{ AsIs: s.Num1#1/23 } >/26 Tile{ AsIs: 0/22 AsIs: )/21 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], Dec, "Dec" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[22];
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[8], context[20] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Superposition/4 (/7 (/11 # Atom/13 e.Body#1/9 )/12 e.Tail#1/5 )/8 (/16 s.Num1#1/19 0/18 )/17 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Atom<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::number_right( 0UL, context[14], context[15] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Body#1 as range 9
    // closed e.Tail#1 as range 5
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Atom/13 AsIs: e.Body#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & Superposition/4 AsIs: (/7 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: )/8 AsIs: (/16 } </20 & Dec/21 Tile{ AsIs: s.Num1#1/19 } >/22 Tile{ AsIs: 0/18 AsIs: )/17 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Dec, "Dec" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[8], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Superposition/4 (/7 (/11 # S/13 e.Body#1/9 )/12 e.Tail#1/5 )/8 (/16 s.Num1#1/19 0/18 )/17 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_S<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::number_right( 0UL, context[14], context[15] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Body#1 as range 9
    // closed e.Tail#1 as range 5
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # S/13 AsIs: e.Body#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & Superposition/4 AsIs: (/7 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: )/8 AsIs: (/16 } </20 & Dec/21 Tile{ AsIs: s.Num1#1/19 } >/22 Tile{ AsIs: 0/18 AsIs: )/17 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Dec, "Dec" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[8], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Superposition/4 (/7 (/11 # T/13 e.Body#1/9 )/12 e.Tail#1/5 )/8 (/16 s.Num1#1/19 0/18 )/17 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_T<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::number_right( 0UL, context[14], context[15] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Body#1 as range 9
    // closed e.Tail#1 as range 5
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/13 AsIs: e.Body#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & Superposition/4 AsIs: (/7 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: )/8 AsIs: (/16 } </20 & Dec/21 Tile{ AsIs: s.Num1#1/19 } >/22 Tile{ AsIs: 0/18 AsIs: )/17 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Dec, "Dec" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[8], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Superposition/4 (/7 e.Head#1/5 (/15 # Brackets/17 e.inBrackets#1/13 )/16 )/8 (/11 s.Num1#1/18 s.Num2#1/19 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_Brackets<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Head#1 as range 5
    // closed e.inBrackets#1 as range 13
    if( ! refalrts::svar_left( context[18], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Superposition/4 AsIs: (/7 AsIs: e.Head#1/5 HalfReuse: )/15 HalfReuse: (/17 } Tile{ AsIs: s.Num1#1/18 } </20 & Dec/21 Tile{ AsIs: s.Num2#1/19 HalfReuse: >/12 } Tile{ AsIs: )/16 HalfReuse: >/8 AsIs: (/11 } # Brackets/22 Tile{ AsIs: e.inBrackets#1/13 } Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Dec, "Dec" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[15] );
    refalrts::reinit_open_bracket( context[17] );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[16] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[7], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[16], context[11] );
    res = refalrts::splice_evar( res, context[19], context[12] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Superposition/4 (/7 e.Head#1/5 (/15 # ADT_Brackets/17 (/20 e.Name#1/18 )/21 e.inBrackets#1/13 )/16 )/8 (/11 s.Num1#1/22 s.Num2#1/23 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[13], context[14] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Head#1 as range 5
    // closed e.Name#1 as range 18
    // closed e.inBrackets#1 as range 13
    if( ! refalrts::svar_left( context[22], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[23], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Superposition/4 AsIs: (/7 } Tile{ AsIs: e.Head#1/5 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: s.Num1#1/22 } </24 & Dec/25 Tile{ AsIs: s.Num2#1/23 } >/26 Tile{ AsIs: )/12 AsIs: >/1 } Tile{ AsIs: (/15 AsIs: # ADT_Brackets/17 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: e.inBrackets#1/13 AsIs: )/16 } Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], Dec, "Dec" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[8], context[22] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Superposition/4 (/7 e.Head#1/5 (/15 # Atom/17 e.Body#1/13 )/16 )/8 (/11 s.Num1#1/18 s.Num2#1/19 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_Atom<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Head#1 as range 5
    // closed e.Body#1 as range 13
    if( ! refalrts::svar_left( context[18], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Superposition/4 AsIs: (/7 AsIs: e.Head#1/5 HalfReuse: )/15 HalfReuse: (/17 } Tile{ AsIs: s.Num1#1/18 } </20 & Dec/21 Tile{ AsIs: s.Num2#1/19 HalfReuse: >/12 } Tile{ AsIs: )/16 HalfReuse: >/8 AsIs: (/11 } # Atom/22 Tile{ AsIs: e.Body#1/13 } Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Dec, "Dec" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_Atom<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[15] );
    refalrts::reinit_open_bracket( context[17] );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[16] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[7], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[16], context[11] );
    res = refalrts::splice_evar( res, context[19], context[12] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Superposition/4 (/7 e.Head#1/5 (/15 # S/17 e.Body#1/13 )/16 )/8 (/11 s.Num1#1/18 s.Num2#1/19 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_S<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Head#1 as range 5
    // closed e.Body#1 as range 13
    if( ! refalrts::svar_left( context[18], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Superposition/4 AsIs: (/7 AsIs: e.Head#1/5 HalfReuse: )/15 HalfReuse: (/17 } Tile{ AsIs: s.Num1#1/18 } </20 & Dec/21 Tile{ AsIs: s.Num2#1/19 HalfReuse: >/12 } Tile{ AsIs: )/16 HalfReuse: >/8 AsIs: (/11 } # S/22 Tile{ AsIs: e.Body#1/13 } Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Dec, "Dec" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_S<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[15] );
    refalrts::reinit_open_bracket( context[17] );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[16] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[7], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[16], context[11] );
    res = refalrts::splice_evar( res, context[19], context[12] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Superposition/4 (/7 e.Head#1/5 (/15 # T/17 e.Body#1/13 )/16 )/8 (/11 s.Num1#1/18 s.Num2#1/19 )/12 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = refalrts::ident_left(  & ident_T<int>::name, context[13], context[14] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Head#1 as range 5
  // closed e.Body#1 as range 13
  if( ! refalrts::svar_left( context[18], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Superposition/4 AsIs: (/7 AsIs: e.Head#1/5 HalfReuse: )/15 HalfReuse: (/17 } Tile{ AsIs: s.Num1#1/18 } </20 & Dec/21 Tile{ AsIs: s.Num2#1/19 HalfReuse: >/12 } Tile{ AsIs: )/16 HalfReuse: >/8 AsIs: (/11 } # T/22 Tile{ AsIs: e.Body#1/13 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], Dec, "Dec" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[22], & ident_T<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[15] );
  refalrts::reinit_open_bracket( context[17] );
  refalrts::reinit_close_call( context[12] );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[17], context[16] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[7], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[16], context[11] );
  res = refalrts::splice_evar( res, context[19], context[12] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CreateSuperposition_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateSuperposition_Aux/4 (/7 (/11 e.Pattern#1/9 )/12 e.Tail#1/5 )/8 (/15 e.Class#1/13 )/16 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Pattern#1 as range 9
    // closed e.Tail#1 as range 5
    // closed e.Class#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Superposition/7 AsIs: (/11 } Tile{ AsIs: e.Pattern#1/9 } )/17 (/18 e.Class#1/13/19 )/21 >/22 )/23 </24 & CreateSuperposition_Aux/25 Tile{ HalfReuse: (/12 AsIs: e.Tail#1/5 AsIs: )/8 AsIs: (/15 AsIs: e.Class#1/13 AsIs: )/16 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], CreateSuperposition_Aux, "CreateSuperposition_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], Superposition, "Superposition" );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::link_brackets( context[0], context[23] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[18], context[21] );
    refalrts::link_brackets( context[11], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[17], context[25] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CreateSuperposition_Aux/4 (/7 )/8 (/11 e.Class#1/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Class#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & CreateSuperposition_Aux/4 (/7 )/8 (/11 e.Class#1/9 )/12 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CreateSuperposition(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CreateSuperposition/4 (/7 e.Patterns#1/5 )/8 (/11 (/15 e.Class#1/13 )/16 e.Tail#1/9 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Patterns#1 as range 5
    // closed e.Class#1 as range 13
    // closed e.Tail#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 Tile{ AsIs: (/15 AsIs: e.Class#1/13 AsIs: )/16 } </18 & CreateSuperposition_Aux/19 (/20 e.Patterns#1/5/21 )/23 (/24 e.Class#1/13/25 )/27 >/28 )/29 Tile{ AsIs: </0 AsIs: & CreateSuperposition/4 AsIs: (/7 AsIs: e.Patterns#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], CreateSuperposition_Aux, "CreateSuperposition_Aux" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[29] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::link_brackets( context[20], context[23] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[18], context[29] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CreateSuperposition/4 (/7 e.Patterns#1/5 )/8 (/11 )/12 >/1
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
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Patterns#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & CreateSuperposition/4 (/7 e.Patterns#1/5 )/8 (/11 )/12 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Generalization_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Generalization_Aux/4 s.Num#1/13 (/11 t.Term1#1/14 e.Tail1#1/9 )/12 (/7 t.Term2#1/16 e.Tail2#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Tail1#1 as range 9
    context[17] = refalrts::tvar_left( context[16], context[5], context[6] );
    if( ! context[17] )
      continue;
    // closed e.Tail2#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FastGen_Terms/4 AsIs: s.Num#1/13 AsIs: (/11 AsIs: t.Term1#1/14 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: t.Term2#1/16 } )/18 >/19 </20 & Generalization_Aux/21 s.Num#1/13/22 (/23 Tile{ AsIs: e.Tail1#1/9 } )/24 (/25 Tile{ AsIs: e.Tail2#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Generalization_Aux, "Generalization_Aux" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[22], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], FastGen_Terms, "FastGen_Terms" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[25], context[8] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[18] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[18], context[23] );
    res = refalrts::splice_evar( res, context[12], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Generalization_Aux/4 s.Num#1/18 (/11 (/15 # E/17 e.Pattern#1/13 )/16 )/12 (/7 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_E<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern#1 as range 13
    if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & Generalization_Aux/4 s.Num#1/18 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # E/11 HalfReuse: '$'/15 HalfReuse: (/17 AsIs: e.Pattern#1/13 AsIs: )/16 HalfReuse: (/12 HalfReuse: )/7 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[11], & ident_E<int>::name );
    refalrts::reinit_char( context[15], '$' );
    refalrts::reinit_open_bracket( context[17] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[12], context[7] );
    refalrts::link_brackets( context[17], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Generalization_Aux/4 s.Num#1/18 (/16 )/17 (/7 (/11 # E/13 e.Pattern#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_E<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Pattern#1 as range 9
    if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & Generalization_Aux/4 s.Num#1/18 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # E/16 HalfReuse: '$'/17 AsIs: (/7 HalfReuse: )/11 HalfReuse: (/13 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[16], & ident_E<int>::name );
    refalrts::reinit_char( context[17], '$' );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[13], context[12] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Generalization_Aux/4 s.Num#1/13 (/11 )/12 (/7 )/8 >/1
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
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Generalization_Aux/4 s.Num#1/13 (/11 )/12 (/7 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Generalization(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Generalization/4 s.Num#1/5 (/8 e.Pattern1#1/6 )/9 (/12 e.Pattern2#1/10 )/13 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Pattern1#1 as range 6
    // closed e.Pattern2#1 as range 10
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </14 & Generalization/15 </16 & Inc/17 s.Num#1/5/18 >/19 (/20 Tile{ AsIs: </0 Reuse: & Generalization_Aux/4 AsIs: s.Num#1/5 AsIs: (/8 AsIs: e.Pattern1#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Pattern2#1/10 AsIs: )/13 } >/21 )/22 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Generalization, "Generalization" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[18], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Generalization_Aux, "Generalization_Aux" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[20], context[22] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[14], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Generalization/4 s.Num#1/9 (/7 e.Pattern#1/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Pattern#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Generalization/4 s.Num#1/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CalcComplexity_aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CalcComplexity_aux/4 s.Comp#1/5 (/8 # S/10 e.Body#1/6 )/9 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::ident_left(  & ident_S<int>::name, context[6], context[7] );
    if( ! context[10] )
      continue;
    // closed e.Body#1 as range 6
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Body#1/6 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 } & CalcComplexity_aux/11 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Comp#1/5 HalfReuse: 2/8 HalfReuse: >/10 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[11], CalcComplexity_aux, "CalcComplexity_aux" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[9] );
    refalrts::update_name( context[4], Add, "Add" );
    refalrts::reinit_number( context[8], 2UL );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CalcComplexity_aux/4 s.Comp#1/5 (/8 # E/10 e.Body#1/6 )/9 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::ident_left(  & ident_E<int>::name, context[6], context[7] );
    if( ! context[10] )
      continue;
    // closed e.Body#1 as range 6
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Body#1/6 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 } & CalcComplexity_aux/11 Tile{ AsIs: </0 Reuse: & Sub/4 AsIs: s.Comp#1/5 HalfReuse: 1/8 HalfReuse: >/10 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[11], CalcComplexity_aux, "CalcComplexity_aux" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[9] );
    refalrts::update_name( context[4], Sub, "Sub" );
    refalrts::reinit_number( context[8], 1UL );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CalcComplexity_aux/4 s.Comp#1/5 (/8 # T/10 e.Body#1/6 )/9 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::ident_left(  & ident_T<int>::name, context[6], context[7] );
    if( ! context[10] )
      continue;
    // closed e.Body#1 as range 6
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Body#1/6 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 } & CalcComplexity_aux/11 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Comp#1/5 HalfReuse: 1/8 HalfReuse: >/10 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[11], CalcComplexity_aux, "CalcComplexity_aux" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[9] );
    refalrts::update_name( context[4], Add, "Add" );
    refalrts::reinit_number( context[8], 1UL );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CalcComplexity_aux/4 s.Comp#1/5 (/8 # Atom/10 e.Body#1/6 )/9 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::ident_left(  & ident_Atom<int>::name, context[6], context[7] );
    if( ! context[10] )
      continue;
    // closed e.Body#1 as range 6
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Body#1/6 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 } & CalcComplexity_aux/11 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Comp#1/5 HalfReuse: 3/8 HalfReuse: >/10 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[11], CalcComplexity_aux, "CalcComplexity_aux" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[9] );
    refalrts::update_name( context[4], Add, "Add" );
    refalrts::reinit_number( context[8], 3UL );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CalcComplexity_aux/4 s.Comp#1/5 (/8 # Brackets/10 s.Num#1/11 e.Body#1/6 )/9 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::ident_left(  & ident_Brackets<int>::name, context[6], context[7] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[11], context[6], context[7] ) )
      continue;
    // closed e.Body#1 as range 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/11 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 } & CalcComplexity_aux/12 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Comp#1/5 HalfReuse: 3/8 HalfReuse: >/10 } Tile{ AsIs: e.Body#1/6 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[12], CalcComplexity_aux, "CalcComplexity_aux" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[9] );
    refalrts::update_name( context[4], Add, "Add" );
    refalrts::reinit_number( context[8], 3UL );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CalcComplexity_aux/4 s.Comp#1/5 (/8 # ADT_Brackets/10 (/13 e.Name#1/11 )/14 s.Num#1/15 e.Body#1/6 )/9 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[6], context[7] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[6], context[7] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#1 as range 11
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[15], context[6], context[7] ) )
      continue;
    // closed e.Body#1 as range 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Name#1/11 {REMOVED TILE}  s.Num#1/15 {REMOVED TILE}  )/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & CalcComplexity_aux/14 } Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Comp#1/5 HalfReuse: 3/8 HalfReuse: >/10 } Tile{ AsIs: e.Body#1/6 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[13] );
    refalrts::reinit_name( context[14], CalcComplexity_aux, "CalcComplexity_aux" );
    refalrts::update_name( context[4], Add, "Add" );
    refalrts::reinit_number( context[8], 3UL );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CalcComplexity_aux/4 s.Comp#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & CalcComplexity_aux/4 s.Comp#1/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Comp1 #5/0 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CalcComplexity(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CalcComplexity/4 (/7 e.Body#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Body#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/9 Tile{ AsIs: </0 Reuse: & CalcComplexity_aux/4 HalfReuse: 1/7 AsIs: e.Body#1/5 HalfReuse: >/8 } e.Body#1/5/10 )/12 </13 & CalcComplexity/14 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[10], context[11], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], CalcComplexity, "CalcComplexity" ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], CalcComplexity_aux, "CalcComplexity_aux" );
    refalrts::reinit_number( context[7], 1UL );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[9], context[12] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CalcComplexity/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & CalcComplexity/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GetComplex_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GetComplex_0/4 s.Complexity#1/10 (/13 e.Body#1/11 )/14 (/17 e.Tail#1/15 )/18 s.CurComplexity#1/19 (/8 e.CurBody#1/6 )/9 '>'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '>', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_right( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    // closed e.CurBody#1 as range 6
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Body#1 as range 11
    // closed e.Tail#1 as range 15
    if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Complexity#1/10 {REMOVED TILE}  e.Body#1/11 )/14 (/17 {REMOVED TILE}  )/18 s.CurComplexity#1/19 {REMOVED TILE}  '>'/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetComplex/4 } Tile{ AsIs: (/13 } Tile{ HalfReuse: s.CurComplexity1 #19/8 AsIs: e.CurBody#1/6 AsIs: )/9 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], GetComplex, "GetComplex" );
    refalrts::reinit_svar( context[8], context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GetComplex_0/4 s.Complexity#1/5 (/8 e.Body#1/6 )/9 (/12 e.Tail#1/10 )/13 s.CurComplexity#1/14 (/17 e.CurBody#1/15 )/18 s.Any#2/19 >/1
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
  // closed e.Body#1 as range 6
  // closed e.Tail#1 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.CurBody#1 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.Complexity#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/13 s.CurComplexity#1/14 (/17 e.CurBody#1/15 )/18 s.Any#2/19 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetComplex/4 } Tile{ AsIs: (/12 } Tile{ HalfReuse: s.Complexity1 #5/8 AsIs: e.Body#1/6 AsIs: )/9 } Tile{ AsIs: e.Tail#1/10 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], GetComplex, "GetComplex" );
  refalrts::reinit_svar( context[8], context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[12], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GetComplex(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetComplex/4 (/7 s.CurComplexity#1/13 e.CurBody#1/5 )/8 (/11 s.Complexity#1/14 e.Body#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
      continue;
    // closed e.CurBody#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.Body#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & Compare/15 Tile{ AsIs: s.CurComplexity#1/13 } Tile{ AsIs: s.Complexity#1/14 } >/16 </17 & CreateClosure /18 & lambda_GetComplex_0/19 s.Complexity#1/14/20 (/21 Tile{ AsIs: e.Body#1/9 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: )/12 } s.CurComplexity#1/13/22 (/23 Tile{ AsIs: e.CurBody#1/5 } )/24 >/25 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[15], Compare, "Compare" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], lambda_GetComplex_0, "lambda_GetComplex_0" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[20], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[22], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_open_call( context[7] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[21], context[8] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[16], context[21] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GetComplex/4 (/7 s.CurComplexity#1/9 e.CurBody#1/5 )/8 >/1
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
  // closed e.CurBody#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & GetComplex/4 (/7 s.CurComplexity#1/9 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.CurBody#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_PatternComment_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PatternComment_0/4 (/7 # Atom/9 # TkChar/10 s.Char#2/11 )/8 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_TkChar<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Tail#2 as range 2
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Char#2/11 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/7 HalfReuse: s.Char2 #11/9 HalfReuse: >/10 } '\''/12 </13 Tile{ HalfReuse: & PatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[12], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '\'' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], EscapeChar, "EscapeChar" );
    refalrts::reinit_svar( context[9], context[11] );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_name( context[8], PatternComment, "PatternComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[10], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PatternComment_0/4 (/7 # Atom/9 # TkNumber/10 s.Value#2/11 )/8 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Tail#2 as range 2
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # Atom/9 # TkNumber/10 s.Value#2/11 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.Value2 #11/0 HalfReuse: </4 } Tile{ HalfReuse: & PatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[0], context[11] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[8], PatternComment, "PatternComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PatternComment_0/4 (/7 # Atom/9 # TkName/10 e.Name#2/5 )/8 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_TkName<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Name#2 as range 5
    // closed e.Tail#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/7 # Atom/9 # TkName/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '&'/0 } Tile{ AsIs: e.Name#2/5 } Tile{ HalfReuse: </4 } Tile{ HalfReuse: & PatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[0], '&' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[8], PatternComment, "PatternComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PatternComment_0/4 (/7 # Atom/9 # TkIdentifier/10 e.Ident#2/5 )/8 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Ident#2 as range 5
    // closed e.Tail#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/7 # Atom/9 # TkIdentifier/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '#'/0 } Tile{ AsIs: e.Ident#2/5 } Tile{ HalfReuse: </4 } Tile{ HalfReuse: & PatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[0], '#' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[8], PatternComment, "PatternComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PatternComment_0/4 (/7 # Brackets/9 s.Num#2/10 e.inBrackets#2/5 )/8 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#2 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.inBrackets#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#2/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & PatternComment/7 } Tile{ AsIs: e.inBrackets#2/5 } Tile{ HalfReuse: >/9 } )/11 </12 Tile{ HalfReuse: & PatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], PatternComment, "PatternComment" );
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_name( context[8], PatternComment, "PatternComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[0], context[11] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PatternComment_0/4 (/7 # ADT_Brackets/9 (/12 e.Name#2/10 )/13 s.Num#2/14 e.inBrackets#2/5 )/8 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#2 as range 10
    // closed e.Tail#2 as range 2
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    // closed e.inBrackets#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#2/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '['/12 AsIs: e.Name#2/10 HalfReuse: ' '/13 } Tile{ AsIs: </0 Reuse: & PatternComment/4 } Tile{ AsIs: e.inBrackets#2/5 } Tile{ HalfReuse: >/7 HalfReuse: ']'/9 } </15 Tile{ HalfReuse: & PatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[12], '[' );
    refalrts::reinit_char( context[13], ' ' );
    refalrts::update_name( context[4], PatternComment, "PatternComment" );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_char( context[9], ']' );
    refalrts::reinit_name( context[8], PatternComment, "PatternComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PatternComment_0/4 (/7 # Brackets/9 e.inBrackets#2/5 )/8 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.inBrackets#2 as range 5
    // closed e.Tail#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & PatternComment/7 } Tile{ AsIs: e.inBrackets#2/5 } Tile{ HalfReuse: >/9 } )/10 </11 Tile{ HalfReuse: & PatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], PatternComment, "PatternComment" );
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_name( context[8], PatternComment, "PatternComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PatternComment_0/4 (/7 # ADT_Brackets/9 (/12 e.Name#2/10 )/13 e.inBrackets#2/5 )/8 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#2 as range 10
    // closed e.inBrackets#2 as range 5
    // closed e.Tail#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '['/12 AsIs: e.Name#2/10 HalfReuse: ' '/13 } Tile{ AsIs: </0 Reuse: & PatternComment/4 } Tile{ AsIs: e.inBrackets#2/5 } Tile{ HalfReuse: >/7 HalfReuse: ']'/9 } </14 Tile{ HalfReuse: & PatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[12], '[' );
    refalrts::reinit_char( context[13], ' ' );
    refalrts::update_name( context[4], PatternComment, "PatternComment" );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_char( context[9], ']' );
    refalrts::reinit_name( context[8], PatternComment, "PatternComment" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_PatternComment_0/4 (/7 s.Tag#2/9 e.Any#2/5 )/8 e.Tail#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Tail#2 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Any#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 s.Tag#2/9 e.Any#2/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Tag2 #9/0 HalfReuse: </4 } Tile{ HalfReuse: & PatternComment/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[8], PatternComment, "PatternComment" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult PatternComment(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PatternComment/4 (/7 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & PatternComment/4 (/7 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PatternComment/4 e.Pattern#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_PatternComment_0/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_PatternComment_0, "lambda_PatternComment_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ReverseGen_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ReverseGen_0/4 # E/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_E<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_ReverseGen_0/4 # E/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'e'/0 } Tile{ ]] }
    refalrts::reinit_char( context[0], 'e' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ReverseGen_0/4 # T/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_T<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_ReverseGen_0/4 # T/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 't'/0 } Tile{ ]] }
    refalrts::reinit_char( context[0], 't' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ReverseGen_0/4 # S/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_S<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_ReverseGen_0/4 # S/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 's'/0 } Tile{ ]] }
  refalrts::reinit_char( context[0], 's' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult ReverseGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReverseGen/4 (/7 # Brackets/9 e.inBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.inBrackets#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & ReverseGen/9 AsIs: e.inBrackets#1/5 HalfReuse: >/8 } )/10 </11 & ReverseGen/12 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ReverseGen, "ReverseGen" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], ReverseGen, "ReverseGen" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReverseGen/4 (/7 # ADT_Brackets/9 (/12 e.Name#1/10 )/13 e.inBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#1 as range 10
    // closed e.inBrackets#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT_Brackets/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ AsIs: </0 AsIs: & ReverseGen/4 } Tile{ AsIs: e.inBrackets#1/5 } >/14 )/15 </16 Tile{ HalfReuse: & ReverseGen/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[8], ReverseGen, "ReverseGen" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[7], context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReverseGen/4 (/7 # Atom/9 s.Type#1/10 e.Value#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.Value#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/7 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: s.Type#1/10 AsIs: e.Value#1/5 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ReverseGen/4 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[9], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReverseGen/4 (/7 s.Mode#1/9 (/12 e.Name#1/10 )/13 e.Any#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#1 as range 10
    // closed e.Any#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Any#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14 Tile{ HalfReuse: # TkVariable/0 HalfReuse: </4 HalfReuse: & Fetch/7 AsIs: s.Mode#1/9 HalfReuse: & lambda_ReverseGen_0/12 } >/15 Tile{ AsIs: e.Name#1/10 } Tile{ AsIs: )/13 } </16 Tile{ HalfReuse: & ReverseGen/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], & ident_TkVariable<int>::name );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], Fetch, "Fetch" );
    refalrts::reinit_name( context[12], lambda_ReverseGen_0, "lambda_ReverseGen_0" );
    refalrts::reinit_name( context[8], ReverseGen, "ReverseGen" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[14], context[13] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReverseGen/4 (/7 e.Else#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Else#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Else#1/5 } Tile{ HalfReuse: )/4 HalfReuse: </7 } Tile{ HalfReuse: & ReverseGen/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], ReverseGen, "ReverseGen" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ReverseGen/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ReverseGen/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ReversePattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReversePattern/4 (/7 s.Mode#1/9 (/12 e.name#1/10 )/13 '$'/14 e.Replacements#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::char_left( '$', context[5], context[6] );
    if( ! context[14] )
      continue;
    // closed e.name#1 as range 10
    // closed e.Replacements#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Mode#1/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 AsIs: '$'/14 } Tile{ AsIs: </0 Reuse: & ReversePattern_Aux/4 } Tile{ AsIs: e.Replacements#1/5 } >/15 )/16 </17 Tile{ HalfReuse: & ReversePattern/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ReversePattern_Aux, "ReversePattern_Aux" );
    refalrts::reinit_name( context[8], ReversePattern, "ReversePattern" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ReversePattern/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ReversePattern/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ReversePattern_Aux_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ReversePattern_Aux_0/4 # E/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_E<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_ReversePattern_Aux_0/4 # E/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'e'/0 } Tile{ ]] }
    refalrts::reinit_char( context[0], 'e' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ReversePattern_Aux_0/4 # T/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_T<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_ReversePattern_Aux_0/4 # T/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 't'/0 } Tile{ ]] }
    refalrts::reinit_char( context[0], 't' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ReversePattern_Aux_0/4 # S/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_S<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_ReversePattern_Aux_0/4 # S/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 's'/0 } Tile{ ]] }
  refalrts::reinit_char( context[0], 's' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ReversePattern_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReversePattern_Aux/4 (/7 # Atom/9 s.Type#1/10 e.Value#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.Value#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/7 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: s.Type#1/10 AsIs: e.Value#1/5 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ReversePattern_Aux/4 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[9], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReversePattern_Aux/4 (/7 # Brackets/9 s.Num#1/10 e.inBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.inBrackets#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & ReversePattern_Aux/9 } Tile{ AsIs: e.inBrackets#1/5 } >/11 )/12 </13 Tile{ HalfReuse: & ReversePattern_Aux/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], ReversePattern_Aux, "ReversePattern_Aux" );
    refalrts::reinit_name( context[8], ReversePattern_Aux, "ReversePattern_Aux" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[13] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReversePattern_Aux/4 (/7 # ADT_Brackets/9 (/12 e.Name#1/10 )/13 s.Num#1/14 e.inBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#1 as range 10
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    // closed e.inBrackets#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#1/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT_Brackets/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ AsIs: </0 AsIs: & ReversePattern_Aux/4 } Tile{ AsIs: e.inBrackets#1/5 } >/15 )/16 </17 Tile{ HalfReuse: & ReversePattern_Aux/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[8], ReversePattern_Aux, "ReversePattern_Aux" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReversePattern_Aux/4 (/7 # Brackets/9 e.inBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.inBrackets#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & ReversePattern_Aux/9 AsIs: e.inBrackets#1/5 HalfReuse: >/8 } )/10 </11 & ReversePattern_Aux/12 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ReversePattern_Aux, "ReversePattern_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], ReversePattern_Aux, "ReversePattern_Aux" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReversePattern_Aux/4 (/7 # ADT_Brackets/9 (/12 e.Name#1/10 )/13 e.inBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#1 as range 10
    // closed e.inBrackets#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT_Brackets/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ AsIs: </0 AsIs: & ReversePattern_Aux/4 } Tile{ AsIs: e.inBrackets#1/5 } >/14 )/15 </16 Tile{ HalfReuse: & ReversePattern_Aux/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[8], ReversePattern_Aux, "ReversePattern_Aux" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[7], context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReversePattern_Aux/4 (/7 s.Mode#1/9 (/12 e.Name#1/10 )/13 e.Any#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#1 as range 10
    // closed e.Any#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Any#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14 Tile{ HalfReuse: # TkVariable/0 HalfReuse: </4 HalfReuse: & Fetch/7 AsIs: s.Mode#1/9 HalfReuse: & lambda_ReversePattern_Aux_0/12 } >/15 Tile{ AsIs: e.Name#1/10 } Tile{ AsIs: )/13 } </16 Tile{ HalfReuse: & ReversePattern_Aux/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], & ident_TkVariable<int>::name );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], Fetch, "Fetch" );
    refalrts::reinit_name( context[12], lambda_ReversePattern_Aux_0, "lambda_ReversePattern_Aux_0" );
    refalrts::reinit_name( context[8], ReversePattern_Aux, "ReversePattern_Aux" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[14], context[13] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReversePattern_Aux/4 (/7 s.Mode#1/9 '$'/10 (/13 (/17 e.Rep#1/15 )/18 )/14 e.Any#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    context[10] = refalrts::char_left( '$', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.Rep#1 as range 15
    // closed e.Any#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 s.Mode#1/9 {REMOVED TILE}  (/17 {REMOVED TILE}  )/18 )/14 e.Any#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReversePattern_Aux/4 } Tile{ AsIs: e.Rep#1/15 } Tile{ HalfReuse: >/10 HalfReuse: </13 } Tile{ HalfReuse: & ReversePattern_Aux/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_open_call( context[13] );
    refalrts::reinit_name( context[8], ReversePattern_Aux, "ReversePattern_Aux" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReversePattern_Aux/4 (/7 s.Mode#1/10 '$'/9 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_right( '$', context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Mode#1/10 AsIs: '$'/9 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ReversePattern_Aux/4 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ReversePattern_Aux/4 (/7 e.Else#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Else#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & ReversePattern_Aux/7 AsIs: e.Else#1/5 HalfReuse: >/8 } )/9 </10 & ReversePattern_Aux/11 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ReversePattern_Aux, "ReversePattern_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ReversePattern_Aux, "ReversePattern_Aux" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::link_brackets( context[0], context[9] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ReversePattern_Aux/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ReversePattern_Aux/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_SplitGen_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_SplitGen_0/4 e.All#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.All#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & DoSplitGen/6 (/7 'i'/8 'd'/9 Tile{ HalfReuse: 'x'/0 HalfReuse: )/4 AsIs: e.All#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], DoSplitGen, "DoSplitGen" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'd' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'x' );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[7], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_SplitGen_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_SplitGen_1/4 e.All#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.All#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & GetGeneralization/6 (/7 )/8 e.All#2/2/9 >/11 Tile{ AsIs: </0 Reuse: & GetReplacement/4 AsIs: e.All#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], GetGeneralization, "GetGeneralization" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[9], context[10], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], GetReplacement, "GetReplacement" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult SplitGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SplitGen/4 (/7 (/11 )/12 )/8 e.SentenceTails#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.SentenceTails#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SplitGen/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 HalfReuse: )/11 HalfReuse: </12 HalfReuse: & SplitGen_Empty/8 AsIs: e.SentenceTails#1/2 AsIs: >/1 ]] }
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[8], SplitGen_Empty, "SplitGen_Empty" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SplitGen/4 (/7 e.Any#1/5 )/8 e.SentenceTails#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Any#1 as range 5
  // closed e.SentenceTails#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.SentenceTails#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Any#1/5 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & Seq/8 } & lambda_SplitGen_0/9 & lambda_SplitGen_1/10 >/11 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[9], lambda_SplitGen_0, "lambda_SplitGen_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], lambda_SplitGen_1, "lambda_SplitGen_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], Seq, "Seq" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult SplitGen_Empty(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SplitGen_Empty/4 (/7 e.Sentence#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Sentence#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Sentence#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 HalfReuse: </7 } Tile{ HalfReuse: & SplitGen_Empty/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], SplitGen_Empty, "SplitGen_Empty" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SplitGen_Empty/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & SplitGen_Empty/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult DoSplitGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoSplitGen/4 (/7 e.Idx#1/5 )/8 (/11 s.Mode#1/13 '$'/14 e.Replacements#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Idx#1 as range 5
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    context[14] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[14] )
      continue;
    // closed e.Replacements#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/15 Tile{ AsIs: s.Mode#1/13 } (/16 e.Idx#1/5/17 0/19 )/20 Tile{ AsIs: '$'/14 AsIs: e.Replacements#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & DoSplitGen/4 AsIs: (/7 AsIs: e.Idx#1/5 HalfReuse: 'V'/8 HalfReuse: )/11 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[19], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[8], 'V' );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::link_brackets( context[15], context[12] );
    refalrts::link_brackets( context[16], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[14], context[12] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoSplitGen/4 (/7 e.Idx#1/5 )/8 (/11 # Brackets/13 s.Num#1/14 e.inBrackets#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Idx#1 as range 5
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.inBrackets#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#1/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/15 Tile{ AsIs: # Brackets/13 } Tile{ AsIs: </0 AsIs: & DoSplitGen/4 AsIs: (/7 AsIs: e.Idx#1/5 HalfReuse: 'B'/8 HalfReuse: )/11 } Tile{ AsIs: e.inBrackets#1/9 } >/16 )/17 </18 & DoSplitGen/19 (/20 e.Idx#1/5/21 'T'/23 Tile{ AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], DoSplitGen, "DoSplitGen" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'T' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[20], context[12] );
    refalrts::link_brackets( context[15], context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[16], context[23] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoSplitGen/4 (/7 e.Idx#1/5 )/8 (/11 # ADT_Brackets/13 (/16 e.Name#1/14 )/17 s.Num#1/18 e.inBrackets#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Idx#1 as range 5
    // closed e.Name#1 as range 14
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[18], context[9], context[10] ) )
      continue;
    // closed e.inBrackets#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#1/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # ADT_Brackets/13 AsIs: (/16 AsIs: e.Name#1/14 AsIs: )/17 } Tile{ AsIs: </0 AsIs: & DoSplitGen/4 AsIs: (/7 AsIs: e.Idx#1/5 HalfReuse: 'D'/8 } )/19 Tile{ AsIs: e.inBrackets#1/9 } >/20 )/21 </22 & DoSplitGen/23 (/24 e.Idx#1/5/25 't'/27 Tile{ AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], DoSplitGen, "DoSplitGen" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[8], 'D' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[22] );
    refalrts::link_brackets( context[24], context[12] );
    refalrts::link_brackets( context[11], context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[19] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[20], context[27] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoSplitGen/4 (/7 e.Idx#1/5 )/8 (/11 # Brackets/13 e.inBrackets#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Idx#1 as range 5
    // closed e.inBrackets#1 as range 9
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14 Tile{ AsIs: # Brackets/13 } Tile{ AsIs: </0 AsIs: & DoSplitGen/4 AsIs: (/7 AsIs: e.Idx#1/5 HalfReuse: 'B'/8 HalfReuse: )/11 } Tile{ AsIs: e.inBrackets#1/9 } >/15 )/16 </17 & DoSplitGen/18 (/19 e.Idx#1/5/20 'T'/22 Tile{ AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], DoSplitGen, "DoSplitGen" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[20], context[21], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'T' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[8], 'B' );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[19], context[12] );
    refalrts::link_brackets( context[14], context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[15], context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoSplitGen/4 (/7 e.Idx#1/5 )/8 (/11 # ADT_Brackets/13 (/16 e.Name#1/14 )/17 e.inBrackets#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Idx#1 as range 5
    // closed e.Name#1 as range 14
    // closed e.inBrackets#1 as range 9
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # ADT_Brackets/13 AsIs: (/16 AsIs: e.Name#1/14 AsIs: )/17 } Tile{ AsIs: </0 AsIs: & DoSplitGen/4 AsIs: (/7 AsIs: e.Idx#1/5 HalfReuse: 'D'/8 } )/18 Tile{ AsIs: e.inBrackets#1/9 } >/19 )/20 </21 & DoSplitGen/22 (/23 e.Idx#1/5/24 't'/26 Tile{ AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], DoSplitGen, "DoSplitGen" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[24], context[25], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[8], 'D' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[23], context[12] );
    refalrts::link_brackets( context[11], context[20] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[18] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[19], context[26] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoSplitGen/4 (/7 e.Idx#1/5 )/8 (/11 # Atom/13 e.Body#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Atom<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Idx#1 as range 5
    // closed e.Body#1 as range 9
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14 Tile{ AsIs: # Atom/13 AsIs: e.Body#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & DoSplitGen/4 AsIs: (/7 AsIs: e.Idx#1/5 HalfReuse: 'A'/8 HalfReuse: )/11 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::link_brackets( context[14], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[13], context[12] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoSplitGen/4 (/7 e.Idx#1/5 )/8 (/11 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.Idx#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  )/12 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoSplitGen/4 AsIs: (/7 AsIs: e.Idx#1/5 HalfReuse: 'E'/8 HalfReuse: )/11 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], 'E' );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoSplitGen/4 (/7 e.Idx#1/5 )/8 >/1
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
  // closed e.Idx#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & DoSplitGen/4 (/7 e.Idx#1/5 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GetGeneralization(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetGeneralization/4 (/7 e.Scanned#1/5 )/8 (/11 s.gen#1/13 (/16 e.name#1/14 )/17 '$'/18 (/21 (/25 e.rep#1/23 )/26 )/22 e.reps#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Scanned#1 as range 5
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::char_left( '$', context[9], context[10] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[9], context[10] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[19], context[20] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.name#1 as range 14
    // closed e.rep#1 as range 23
    // closed e.reps#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.gen#1/13 {REMOVED TILE}  (/21 (/25 e.rep#1/23 )/26 )/22 e.reps#1/9 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & GetGeneralization/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: (/8 HalfReuse: s.gen1 #13/11 } Tile{ AsIs: (/16 AsIs: e.name#1/14 AsIs: )/17 HalfReuse: )/18 } Tile{ AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_svar( context[11], context[13] );
    refalrts::reinit_close_bracket( context[18] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[8], context[18] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[16], context[18] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetGeneralization/4 (/7 e.Scanned#1/5 )/8 (/11 # Brackets/13 e.inBrackets#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.inBrackets#1 as range 9
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & GetGeneralization/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: (/8 HalfReuse: # Brackets/11 HalfReuse: </13 } & UnBracket/14 </15 & GetGeneralization/16 (/17 )/18 Tile{ AsIs: e.inBrackets#1/9 } >/19 >/20 )/21 Tile{ AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[14], UnBracket, "UnBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], GetGeneralization, "GetGeneralization" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[11], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[8], context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetGeneralization/4 (/7 e.Scanned#1/5 )/8 (/11 # ADT_Brackets/13 (/16 e.Name#1/14 )/17 e.inBrackets#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Scanned#1 as range 5
    // closed e.Name#1 as range 14
    // closed e.inBrackets#1 as range 9
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & GetGeneralization/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: (/8 HalfReuse: # ADT_Brackets/11 HalfReuse: (/13 } Tile{ AsIs: e.Name#1/14 } Tile{ AsIs: )/17 } </18 & UnBracket/19 </20 & GetGeneralization/21 Tile{ AsIs: (/16 } )/22 Tile{ AsIs: e.inBrackets#1/9 } >/23 >/24 )/25 Tile{ AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], UnBracket, "UnBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], GetGeneralization, "GetGeneralization" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[11], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[8], context[25] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[16], context[22] );
    refalrts::link_brackets( context[13], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[18], context[21] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetGeneralization/4 (/7 e.Scanned#1/5 )/8 (/11 e.gen#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Scanned#1 as range 5
    // closed e.gen#1 as range 9
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & GetGeneralization/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: (/8 } Tile{ AsIs: e.gen#1/9 } Tile{ HalfReuse: )/11 } Tile{ AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GetGeneralization/4 (/7 e.Scanned#1/5 )/8 >/1
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
  // closed e.Scanned#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & GetGeneralization/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GetReplacement_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetReplacement_Aux/4 (/7 s.Mode#1/14 (/12 e.Name#1/10 )/13 '$'/9 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_right( '$', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_right( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#1 as range 10
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & GetReplacement_Aux/4 (/7 s.Mode#1/14 (/12 e.Name#1/10 )/13 '$'/9 )/8 e.Tail#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetReplacement_Aux/4 (/7 # Brackets/9 e.Replacements#1/5 )/8 e.Tail#1/2 (/16 e.Scanned#1/14 )/17 (/12 e.Else#1/10 )/13 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Replacements#1 as range 5
    // closed e.Tail#1 as range 2
    // closed e.Scanned#1 as range 14
    // closed e.Else#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # Brackets/9 {REMOVED TILE}  )/8 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & GetReplacement_Aux/4 } Tile{ AsIs: e.Replacements#1/5 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: (/16 AsIs: e.Scanned#1/14 AsIs: )/17 AsIs: (/12 AsIs: e.Else#1/10 AsIs: )/13 AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetReplacement_Aux/4 (/7 # ADT_Brackets/9 (/12 e.Name#1/10 )/13 e.Replacements#1/5 )/8 e.Tail#1/2 (/20 e.Scanned#1/18 )/21 (/16 e.Else#1/14 )/17 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_right( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.Name#1 as range 10
    // closed e.Replacements#1 as range 5
    // closed e.Tail#1 as range 2
    // closed e.Scanned#1 as range 18
    // closed e.Else#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # ADT_Brackets/9 (/12 e.Name#1/10 )/13 {REMOVED TILE}  )/8 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & GetReplacement_Aux/4 } Tile{ AsIs: e.Replacements#1/5 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: (/20 AsIs: e.Scanned#1/18 AsIs: )/21 AsIs: (/16 AsIs: e.Else#1/14 AsIs: )/17 AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetReplacement_Aux/4 (/7 s.Mode#1/17 (/20 e.Name#1/18 )/21 '$'/22 (/25 (/29 e.rep#1/27 )/30 )/26 e.otherRep#1/5 )/8 e.Tail#1/2 (/15 e.Scanned#1/13 )/16 (/11 e.Else#1/9 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Tail#1 as range 2
    // closed e.Scanned#1 as range 13
    // closed e.Else#1 as range 9
    if( ! refalrts::svar_left( context[17], context[5], context[6] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::char_left( '$', context[5], context[6] );
    if( ! context[22] )
      continue;
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[5], context[6] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[23], context[24] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.Name#1 as range 18
    // closed e.rep#1 as range 27
    // closed e.otherRep#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & GetReplacement_Aux/4 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: (/25 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: (/7 AsIs: s.Mode#1/17 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: '$'/22 } Tile{ AsIs: e.rep#1/27 } Tile{ HalfReuse: )/15 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.Else#1/9 HalfReuse: (/12 HalfReuse: s.Mode1 #17/1 } Tile{ AsIs: (/29 } e.Name#1/18/31 Tile{ AsIs: )/30 HalfReuse: '$'/26 AsIs: e.otherRep#1/5 AsIs: )/8 } )/33 >/34 Tile{ ]] }
    if (! refalrts::copy_evar(context[31], context[32], context[18], context[19]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[15] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_svar( context[1], context[17] );
    refalrts::reinit_char( context[26], '$' );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[33] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::link_brackets( context[25], context[16] );
    refalrts::link_brackets( context[7], context[15] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[30], context[8] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[7], context[22] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetReplacement_Aux/4 (/7 s.Mode#1/17 s.Type#1/18 e.gen#1/5 )/8 e.Tail#1/2 (/15 e.Scanned#1/13 )/16 (/11 e.Else#1/9 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Tail#1 as range 2
    // closed e.Scanned#1 as range 13
    // closed e.Else#1 as range 9
    if( ! refalrts::svar_left( context[17], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[5], context[6] ) )
      continue;
    // closed e.gen#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & GetReplacement_Aux/4 (/7 s.Mode#1/17 s.Type#1/18 e.gen#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & GetReplacement_Aux/8 AsIs: e.Tail#1/2 AsIs: (/15 AsIs: e.Scanned#1/13 AsIs: )/16 AsIs: (/11 AsIs: e.Else#1/9 AsIs: )/12 AsIs: >/1 ]] }
    refalrts::reinit_name( context[8], GetReplacement_Aux, "GetReplacement_Aux" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GetReplacement_Aux/4 (/7 )/8 (/11 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & GetReplacement_Aux/4 {REMOVED TILE}  (/11 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GetReplacement_Aux/4 (/7 e.Scanned#1/5 )/8 (/11 e.Else#1/9 )/12 >/1
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
  // closed e.Scanned#1 as range 5
  // closed e.Else#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & ReversePattern/7 AsIs: e.Scanned#1/5 HalfReuse: >/8 HalfReuse: )/11 } Tile{ HalfReuse: </12 } & GetReplacement/13 Tile{ AsIs: e.Else#1/9 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[13], GetReplacement, "GetReplacement" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], ReversePattern, "ReversePattern" );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[11] );
  refalrts::reinit_open_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[12] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GetReplacement(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GetReplacement/4 e.All#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.All#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetReplacement_Aux/4 AsIs: e.All#1/2 HalfReuse: (/1 } )/5 (/6 )/7 >/8 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], GetReplacement_Aux, "GetReplacement_Aux" );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[6], context[7] );
  refalrts::link_brackets( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Min_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Min_0/4 s.2#1/6 s.1#1/7 '<'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_Min_0/4 s.2#1/6 s.1#1/7 '<'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.11 #7/0 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Min_0/4 s.2#1/5 s.1#1/6 s.Other#2/7 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_Min_0/4 s.2#1/5 s.1#1/6 s.Other#2/7 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.21 #5/0 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult Min(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Min/4 s.1#1/5 s.2#1/6 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </7 & Fetch/8 Tile{ AsIs: </0 Reuse: & Compare/4 AsIs: s.1#1/5 AsIs: s.2#1/6 AsIs: >/1 } </9 & CreateClosure /10 & lambda_Min_0/11 s.2#1/6/12 s.1#1/5/13 >/14 >/15 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], lambda_Min_0, "lambda_Min_0" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[12], context[6]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[13], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Compare, "Compare" );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Max_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Max_0/4 s.2#1/6 s.1#1/7 '>'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '>', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_Max_0/4 s.2#1/6 s.1#1/7 '>'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.11 #7/0 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Max_0/4 s.2#1/5 s.1#1/6 s.Other#2/7 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_Max_0/4 s.2#1/5 s.1#1/6 s.Other#2/7 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.21 #5/0 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult Max(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Max/4 s.1#1/5 s.2#1/6 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </7 & Fetch/8 Tile{ AsIs: </0 Reuse: & Compare/4 AsIs: s.1#1/5 AsIs: s.2#1/6 AsIs: >/1 } </9 & CreateClosure /10 & lambda_Max_0/11 s.2#1/6/12 s.1#1/5/13 >/14 >/15 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], lambda_Max_0, "lambda_Max_0" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[12], context[6]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[13], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Compare, "Compare" );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
