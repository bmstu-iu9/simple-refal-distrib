// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #ADT-Brackets
template <typename SREFAL_PARAM_INT>
struct ident_ADT_Brackets {
  static const char *name() {
    return "ADT-Brackets";
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

extern refalrts::RefalFunction& Map_0_0;
#define Map_alias Map_0_0
#define Map_str "Map#0:0"

extern refalrts::RefalFunction& Fetch_0_0;
#define Fetch_alias Fetch_0_0
#define Fetch_str "Fetch#0:0"

extern refalrts::RefalFunction& gen_PreparePatternHardSent_L1S5L1_4049383299_2111946739;
#define gen_PreparePatternHardSent_L1S5L1_alias gen_PreparePatternHardSent_L1S5L1_4049383299_2111946739

extern refalrts::RefalFunction& gen_PreparePatternHardSent_L1_4049383299_2111946739;
#define gen_PreparePatternHardSent_L1_alias gen_PreparePatternHardSent_L1_4049383299_2111946739

extern refalrts::RefalFunction& PreparePatternHardSent_4049383299_2111946739;
#define PreparePatternHardSent_alias PreparePatternHardSent_4049383299_2111946739

extern refalrts::RefalFunction& CreateHardPattern_Aux_4049383299_2111946739;
#define CreateHardPattern_Aux_alias CreateHardPattern_Aux_4049383299_2111946739

extern refalrts::RefalFunction& CreateHardPattern_0_0;
#define CreateHardPattern_alias CreateHardPattern_0_0


static refalrts::FnResult func_gen_PreparePatternHardSent_L1S5L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & PreparePatternHardSent\1$5\1/4 s.idx#0/5 >/1
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
    // 'e'
    // </0 & PreparePatternHardSent\1$5\1/4 'e'/5 >/1
    if( ! refalrts::char_term( 'e', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & PreparePatternHardSent\1$5\1/4 'e'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # E/1 ]] }
    refalrts::reinit_ident( context[1], & ident_E<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 't'
    // </0 & PreparePatternHardSent\1$5\1/4 't'/5 >/1
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & PreparePatternHardSent\1$5\1/4 't'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # T/1 ]] }
    refalrts::reinit_ident( context[1], & ident_T<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // 's'
  // </0 & PreparePatternHardSent\1$5\1/4 's'/5 >/1
  if( ! refalrts::char_term( 's', context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & PreparePatternHardSent\1$5\1/4 's'/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # S/1 ]] }
  refalrts::reinit_ident( context[1], & ident_S<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_PreparePatternHardSent_L1S5L1(func_gen_PreparePatternHardSent_L1S5L1, "PreparePatternHardSent\\1$5\\1#4049383299:2111946739");
refalrts::RefalFunction& gen_PreparePatternHardSent_L1S5L1_4049383299_2111946739 = descr_gen_PreparePatternHardSent_L1S5L1;

static refalrts::FnResult func_gen_PreparePatternHardSent_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & PreparePatternHardSent\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    // ( # TkChar s.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkChar/9 s.char#2/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TkChar<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::svar_left( context[10], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkChar/9 AsIs: s.char#2/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_Atom<int>::name );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TkNumber s.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkNumber/9 s.value#2/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TkNumber<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::svar_left( context[10], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkNumber/9 AsIs: s.value#2/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_Atom<int>::name );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TkName e.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkName/9 e.name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TkName<int>::name, context[9] ) )
      continue;
    // closed e.name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkName/9 AsIs: e.name#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_Atom<int>::name );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TkIdentifier e.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkIdentifier/9 e.ident#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TkIdentifier<int>::name, context[9] ) )
      continue;
    // closed e.ident#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Atom/7 AsIs: # TkIdentifier/9 AsIs: e.ident#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_Atom<int>::name );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TkVariable s.idx e.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # TkVariable/9 s.Mode#2/10 e.Index#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TkVariable<int>::name, context[9] ) )
      continue;
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::svar_left( context[10], context[16], context[17] ) )
      continue;
    // closed e.Index#2 as range 16(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#2/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Fetch/7 HalfReuse: s.Mode2 #10/9 } & PreparePatternHardSent\1$5\1/11 >/12 (/13 Tile{ AsIs: e.Index#2/16(5) } )/14 (/15 Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_name( context[11], & gen_PreparePatternHardSent_L1S5L1_alias ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], & Fetch_alias );
    refalrts::reinit_svar( context[9], context[10] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[15], context[8] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Brackets e.idx )
    // </0 & PreparePatternHardSent\1/4 (/7 # Brackets/9 e.inBrackets#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Brackets<int>::name, context[9] ) )
      continue;
    // closed e.inBrackets#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & PreparePatternHardSent/9 AsIs: e.inBrackets#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], & PreparePatternHardSent_alias );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # ADT-Brackets ( e.idx ) e.idx )
  // </0 & PreparePatternHardSent\1/4 (/7 # ADT-Brackets/9 (/12 e.Name#2/10 )/13 e.inBrackets#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_ADT_Brackets<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Name#2 as range 10
  // closed e.inBrackets#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } Tile{ AsIs: </0 Reuse: & PreparePatternHardSent/4 } Tile{ AsIs: e.inBrackets#2/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::update_name( context[4], & PreparePatternHardSent_alias );
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
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_PreparePatternHardSent_L1(func_gen_PreparePatternHardSent_L1, "PreparePatternHardSent\\1#4049383299:2111946739");
refalrts::RefalFunction& gen_PreparePatternHardSent_L1_4049383299_2111946739 = descr_gen_PreparePatternHardSent_L1;

static refalrts::FnResult func_PreparePatternHardSent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & PreparePatternHardSent/4 e.Pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & PreparePatternHardSent\1/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map_alias );
  refalrts::update_name( context[4], & gen_PreparePatternHardSent_L1_alias );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_PreparePatternHardSent(func_PreparePatternHardSent, "PreparePatternHardSent#4049383299:2111946739");
refalrts::RefalFunction& PreparePatternHardSent_4049383299_2111946739 = descr_PreparePatternHardSent;

static refalrts::FnResult func_CreateHardPattern_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & CreateHardPattern-Aux/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & CreateHardPattern-Aux/4 (/7 # ADT-Brackets/9 (/12 e.Name#1/10 )/13 e.body#1/5 )/8 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[27], context[28] );
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
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    // closed e.Name#1 as range 10
    // closed e.body#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.body#1/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
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
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # ADT-Brackets ( e.idx ) e.idx ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/7 # ADT-Brackets/9 (/12 e.Name#1/10 )/13 e.body#1/5 )/8 e.smth#1/2 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[27], context[28] );
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
    // closed e.body#1 as range 5
    // closed e.smth#1 as range 27(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 } Tile{ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.body#1/5 } >/14 )/15 </16 Tile{ HalfReuse: & CreateHardPattern-Aux/8 AsIs: e.smth#1/27(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[8], & CreateHardPattern_Aux_alias );
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
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # ADT-Brackets/9 (/12 e.Name#1/10 )/13 e.body#1/5 )/8 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[27], context[28] );
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
    // closed e.smth#1 as range 27(2)
    // closed e.Name#1 as range 10
    // closed e.body#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 AsIs: e.smth#1/27(2) HalfReuse: >/7 HalfReuse: (/9 HalfReuse: # ADT-Brackets/12 } (/14 Tile{ AsIs: e.Name#1/10 } )/15 </16 Tile{ HalfReuse: & CreateHardPattern-Aux/13 AsIs: e.body#1/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_ident( context[12], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_name( context[13], & CreateHardPattern_Aux_alias );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Brackets e.idx )
    // </0 & CreateHardPattern-Aux/4 (/7 # Brackets/9 e.body#1/5 )/8 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    // closed e.body#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CreateHardPattern-Aux/9 AsIs: e.body#1/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], & CreateHardPattern_Aux_alias );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Brackets e.idx ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/7 # Brackets/9 e.body#1/5 )/8 e.smth#1/2 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.body#1 as range 5
    // closed e.smth#1 as range 27(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CreateHardPattern-Aux/9 AsIs: e.body#1/5 HalfReuse: >/8 } )/10 </11 & CreateHardPattern-Aux/12 Tile{ AsIs: e.smth#1/27(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], & CreateHardPattern_Aux_alias ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], & CreateHardPattern_Aux_alias );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx ( # Brackets e.idx )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # Brackets/9 e.body#1/5 )/8 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.smth#1 as range 27(2)
    // closed e.body#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 AsIs: e.smth#1/27(2) HalfReuse: >/7 HalfReuse: (/9 } # Brackets/10 </11 & CreateHardPattern-Aux/12 Tile{ AsIs: e.body#1/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], & CreateHardPattern_Aux_alias ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # S ( e.idx ) ( e.idx ) ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/7 # S/9 (/12 e.name#1/10 )/13 (/16 e.pattern#1/14 )/17 )/8 e.smth#1/2 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_S<int>::name, context[5], context[6] );
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
    context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.name#1 as range 10
    // closed e.pattern#1 as range 14
    // closed e.smth#1 as range 27(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.pattern#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ } (/18 # S/19 (/20"idx"/21 )/23 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/7 AsIs: # S/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 HalfReuse: )/16 } )/24 )/25 )/26 Tile{ HalfReuse: </17 HalfReuse: & CreateHardPattern-Aux/8 AsIs: e.smth#1/27(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_S<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], "idx", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[16] );
    refalrts::reinit_open_call( context[17] );
    refalrts::reinit_name( context[8], & CreateHardPattern_Aux_alias );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[18], context[26] );
    refalrts::link_brackets( context[0], context[25] );
    refalrts::link_brackets( context[4], context[24] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[20], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_evar( res, context[18], context[23] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx ( # S ( e.idx ) ( e.idx ) )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # S/9 (/12 e.name#1/10 )/13 (/16 e.pattern#1/14 )/17 )/8 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_S<int>::name, context[5], context[6] );
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
    context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.smth#1 as range 27(2)
    // closed e.name#1 as range 10
    // closed e.pattern#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.pattern#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.smth#1/27(2) } >/18 (/19 # S/20 (/21"idx"/22 )/24 (/25 (/26 Tile{ AsIs: (/7 AsIs: # S/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 HalfReuse: )/16 } Tile{ AsIs: )/17 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[20], & ident_S<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], "idx", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::link_brackets( context[25], context[8] );
    refalrts::link_brackets( context[26], context[17] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    res = refalrts::splice_evar( res, context[7], context[16] );
    res = refalrts::splice_evar( res, context[18], context[26] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # T ( e.idx ) ( e.idx ) ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/7 # T/9 (/12 e.name#1/10 )/13 (/16 e.pattern#1/14 )/17 )/8 e.smth#1/2 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_T<int>::name, context[5], context[6] );
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
    context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.name#1 as range 10
    // closed e.pattern#1 as range 14
    // closed e.smth#1 as range 27(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.pattern#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ } (/18 # T/19 (/20"idx"/21 )/23 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/7 AsIs: # T/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 HalfReuse: )/16 } )/24 )/25 )/26 Tile{ HalfReuse: </17 HalfReuse: & CreateHardPattern-Aux/8 AsIs: e.smth#1/27(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_T<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], "idx", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[16] );
    refalrts::reinit_open_call( context[17] );
    refalrts::reinit_name( context[8], & CreateHardPattern_Aux_alias );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[18], context[26] );
    refalrts::link_brackets( context[0], context[25] );
    refalrts::link_brackets( context[4], context[24] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[20], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_evar( res, context[18], context[23] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx ( # T ( e.idx ) ( e.idx ) )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # T/9 (/12 e.name#1/10 )/13 (/16 e.pattern#1/14 )/17 )/8 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_T<int>::name, context[5], context[6] );
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
    context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.smth#1 as range 27(2)
    // closed e.name#1 as range 10
    // closed e.pattern#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.pattern#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.smth#1/27(2) } >/18 (/19 # T/20 (/21"idx"/22 )/24 (/25 (/26 Tile{ AsIs: (/7 AsIs: # T/9 AsIs: (/12 AsIs: e.name#1/10 AsIs: )/13 HalfReuse: )/16 } Tile{ AsIs: )/17 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[20], & ident_T<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], "idx", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::link_brackets( context[25], context[8] );
    refalrts::link_brackets( context[26], context[17] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    res = refalrts::splice_evar( res, context[7], context[16] );
    res = refalrts::splice_evar( res, context[18], context[26] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Atom e.idx ) e.idx
    // </0 & CreateHardPattern-Aux/4 (/7 # Atom/9 e.attr#1/5 )/8 e.smth#1/2 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.attr#1 as range 5
    // closed e.smth#1 as range 27(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Atom/9 AsIs: e.attr#1/5 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 } Tile{ AsIs: e.smth#1/27(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx ( # Atom e.idx )
    // </0 & CreateHardPattern-Aux/4 e.smth#1/2 (/7 # Atom/9 e.attr#1/5 )/8 >/1
    context[27] = context[2];
    context[28] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[27], context[28] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Atom<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.smth#1 as range 27(2)
    // closed e.attr#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CreateHardPattern-Aux/4 AsIs: e.smth#1/27(2) HalfReuse: >/7 HalfReuse: (/9 } Tile{ HalfReuse: # Atom/8 } Tile{ AsIs: e.attr#1/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_ident( context[8], & ident_Atom<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    //
    // </0 & CreateHardPattern-Aux/4 >/1
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & CreateHardPattern-Aux/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & CreateHardPattern-Aux/4 e.smth#1/2 >/1
  // closed e.smth#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/5 # E/6 (/7"idx"/8 )/10 Tile{ HalfReuse: (/0 HalfReuse: (/4 AsIs: e.smth#1/2 HalfReuse: )/1 } )/11 )/12 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_E<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "idx", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[5], context[12] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_CreateHardPattern_Aux(func_CreateHardPattern_Aux, "CreateHardPattern-Aux#4049383299:2111946739");
refalrts::RefalFunction& CreateHardPattern_Aux_4049383299_2111946739 = descr_CreateHardPattern_Aux;

static refalrts::FnResult func_CreateHardPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CreateHardPattern/4 e.pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.pattern#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CreateHardPattern-Aux/6 Tile{ AsIs: </0 Reuse: & PreparePatternHardSent/4 AsIs: e.pattern#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & CreateHardPattern_Aux_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & PreparePatternHardSent_alias );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_CreateHardPattern(func_CreateHardPattern, "CreateHardPattern#0:0");
refalrts::RefalFunction& CreateHardPattern_0_0 = descr_CreateHardPattern;


//End of file
