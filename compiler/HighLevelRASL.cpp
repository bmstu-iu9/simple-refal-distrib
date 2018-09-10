// This file automatically generated from 'HighLevelRASL.sref'
// Don't edit! Edit 'HighLevelRASL.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3260011162_259521105
static const refalrts::IdentReference ident_CmdConditionFunc("CmdConditionFunc");
static const refalrts::IdentReference ident_CmdDeclaration("CmdDeclaration");
static const refalrts::IdentReference ident_CmdDefineIdent("CmdDefineIdent");
static const refalrts::IdentReference ident_CmdEmitNativeCode("CmdEmitNativeCode");
static const refalrts::IdentReference ident_CmdEnum("CmdEnum");
static const refalrts::IdentReference ident_CmdNativeFunction("CmdNativeFunction");
static const refalrts::IdentReference ident_CmdSwap("CmdSwap");
static const refalrts::IdentReference ident_Condition("Condition");
static const refalrts::IdentReference ident_Conjoint("Conjoint");
static const refalrts::IdentReference ident_Declaration("Declaration");
static const refalrts::IdentReference ident_Disjoint("Disjoint");
static const refalrts::IdentReference ident_Enum("Enum");
static const refalrts::IdentReference ident_Function("Function");
static const refalrts::IdentReference ident_GNm_Local("GN-Local");
static const refalrts::IdentReference ident_Ident("Ident");
static const refalrts::IdentReference ident_NativeBlock("NativeBlock");
static const refalrts::IdentReference ident_NativeBody("NativeBody");
static const refalrts::IdentReference ident_NoOpt("NoOpt");
static const refalrts::IdentReference ident_OptResult("OptResult");
static const refalrts::IdentReference ident_Sentences("Sentences");
static const refalrts::IdentReference ident_Swap("Swap");
static refalrts::ExternalReference ref_GenResultm_Opt("GenResult-Opt", 0U, 0U);
static refalrts::ExternalReference ref_GenResultm_Simple("GenResult-Simple", 0U, 0U);
static refalrts::ExternalReference ref_GenResultFuncs("GenResultFuncs", 3260011162U, 259521105U);
static refalrts::ExternalReference ref_GenSentenceFunc("GenSentenceFunc", 3260011162U, 259521105U);
static refalrts::ExternalReference ref_GenSubstm_Save("GenSubst-Save", 0U, 0U);
static refalrts::ExternalReference ref_GenSubstm_Simple("GenSubst-Simple", 0U, 0U);
static refalrts::ExternalReference ref_HighLevelRASL("HighLevelRASL", 0U, 0U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_L1("HighLevelRASL\\1", 3260011162U, 259521105U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_L1S1L1("HighLevelRASL\\1$1\\1", 3260011162U, 259521105U);
static refalrts::ExternalReference ref_gen_HighLevelRASL_L1S1L1L1("HighLevelRASL\\1$1\\1\\1", 3260011162U, 259521105U);
static refalrts::ExternalReference ref_HighLevelRASLm_Function("HighLevelRASL-Function", 3260011162U, 259521105U);
static refalrts::ExternalReference ref_HighLevelRASLm_Functionm_Conjoint("HighLevelRASL-Function-Conjoint", 0U, 0U);
static refalrts::ExternalReference ref_HighLevelRASLm_Functionm_Disjoint("HighLevelRASL-Function-Disjoint", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);

static refalrts::FnResult func_gen_HighLevelRASL_L1S1L1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & HighLevelRASL\1$1\1\1/4 (/7 # Condition/9 (/12 e.Name#4/10 )/13 (/16 e.Result#4/14 )/17 (/20 e.Pattern#4/18 )/21 )/8 >/1
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
  context[9] = refalrts::ident_left(  ident_Condition.ref(vm), context[5], context[6] );
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#4 as range 10
  // closed e.Result#4 as range 14
  // closed e.Pattern#4 as range 18
  //DEBUG: e.Name#4: 10
  //DEBUG: e.Result#4: 14
  //DEBUG: e.Pattern#4: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1$1\1\1/4 {REMOVED TILE} (/16 e.Result#4/14 )/17 (/20 e.Pattern#4/18 )/21 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdConditionFunc/9 HalfReuse: # GN-Local/12 AsIs: e.Name#4/10 AsIs: )/13 } Tile{ ]] }
  refalrts::update_ident( context[9], ident_CmdConditionFunc.ref(vm) );
  refalrts::reinit_ident( context[12], ident_GNm_Local.ref(vm) );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_L1S1L1L1("HighLevelRASL\\1$1\\1\\1", 3260011162U, 259521105U, func_gen_HighLevelRASL_L1S1L1L1);


static refalrts::FnResult func_gen_HighLevelRASL_L1S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & HighLevelRASL\1$1\1/4 (/7 (/11 e.Pattern#3/9 )/12 e.Conditions#3/5 (/15 e.Result#3/13 )/16 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#3 as range 9
  // closed e.Conditions#3 as range 5
  // closed e.Result#3 as range 13
  //DEBUG: e.Pattern#3: 9
  //DEBUG: e.Conditions#3: 5
  //DEBUG: e.Result#3: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/11 e.Pattern#3/9 )/12 {REMOVED TILE} (/15 e.Result#3/13 )/16 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & HighLevelRASL\1$1\1\1/7 } Tile{ AsIs: e.Conditions#3/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_Map.ref(vm) );
  refalrts::reinit_name( context[7], ref_gen_HighLevelRASL_L1S1L1L1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_L1S1L1("HighLevelRASL\\1$1\\1", 3260011162U, 259521105U, func_gen_HighLevelRASL_L1S1L1);


static refalrts::FnResult func_gen_HighLevelRASL_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & HighLevelRASL\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & HighLevelRASL\1/4 s.new#1/9 s.new#2/10 (/7 s.new#3/11 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  do {
    // </0 & HighLevelRASL\1/4 s.new#5/9 s.new#6/10 (/7 s.new#7/11 s.new#8/14 e.new#9/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#9 as range 12
    do {
      // </0 & HighLevelRASL\1/4 s.new#10/9 s.new#11/10 (/7 # Function/11 s.new#12/14 (/19 e.new#13/17 )/20 s.new#14/21 e.new#15/15 )/8 >/1
      context[15] = context[12];
      context[16] = context[13];
      if( ! refalrts::ident_term(  ident_Function.ref(vm), context[11] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.new#13 as range 17
      if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
        continue;
      // closed e.new#15 as range 15
      do {
        // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Function/11 s.ScopeClass#2/14 (/19 e.Name#2/17 )/20 # Sentences/21 e.Sentences#2/15 )/8 >/1
        if( ! refalrts::ident_term(  ident_Sentences.ref(vm), context[21] ) )
          continue;
        // closed e.Name#2 as range 17
        // closed e.Sentences#2 as range 15
        //DEBUG: s.Joint#1: 9
        //DEBUG: s.OptResult#1: 10
        //DEBUG: s.ScopeClass#2: 14
        //DEBUG: e.Name#2: 17
        //DEBUG: e.Sentences#2: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.OptResult#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </22 & Map/23 Tile{ HalfReuse: & HighLevelRASL\1$1\1/21 AsIs: e.Sentences#2/15 HalfReuse: >/8 HalfReuse: </1 } & HighLevelRASL-Function/24 Tile{ AsIs: </0 Reuse: & GenSentenceFunc/4 AsIs: s.Joint#1/9 } >/25 </26 & GenResultFuncs/27 Tile{ HalfReuse: s.OptResult1 #10/7 HalfReuse: >/11 AsIs: s.ScopeClass#2/14 AsIs: (/19 AsIs: e.Name#2/17 AsIs: )/20 } e.Sentences#2/15/28 >/30 Tile{ ]] }
        if( ! refalrts::alloc_open_call( vm, context[22] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[23], ref_Map.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[24], ref_HighLevelRASLm_Function.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[25] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( vm, context[26] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[27], ref_GenResultFuncs.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_evar(vm, context[28], context[29], context[15], context[16]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[30] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_name( context[21], ref_gen_HighLevelRASL_L1S1L1.ref(vm) );
        refalrts::reinit_close_call( context[8] );
        refalrts::reinit_open_call( context[1] );
        refalrts::update_name( context[4], ref_GenSentenceFunc.ref(vm) );
        refalrts::reinit_svar( context[7], context[10] );
        refalrts::reinit_close_call( context[11] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[1] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::push_stack( vm, context[11] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[30], context[30] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[7], context[20] );
        res = refalrts::splice_evar( res, context[25], context[27] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[21], context[1] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Function/11 s.ScopeClass#2/14 (/19 e.Name#2/17 )/20 # NativeBody/21 t.SrcPos#2/24 e.Code#2/22 )/8 >/1
      context[22] = context[15];
      context[23] = context[16];
      if( ! refalrts::ident_term(  ident_NativeBody.ref(vm), context[21] ) )
        continue;
      // closed e.Name#2 as range 17
      context[25] = refalrts::tvar_left( context[24], context[22], context[23] );
      if( ! context[25] )
        continue;
      // closed e.Code#2 as range 22
      //DEBUG: s.Joint#1: 9
      //DEBUG: s.OptResult#1: 10
      //DEBUG: s.ScopeClass#2: 14
      //DEBUG: e.Name#2: 17
      //DEBUG: t.SrcPos#2: 24
      //DEBUG: e.Code#2: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} # NativeBody/21 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdNativeFunction/11 AsIs: s.ScopeClass#2/14 AsIs: (/19 AsIs: e.Name#2/17 AsIs: )/20 } Tile{ AsIs: t.SrcPos#2/24 AsIs: e.Code#2/22 AsIs: )/8 } Tile{ ]] }
      refalrts::update_ident( context[11], ident_CmdNativeFunction.ref(vm) );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[24], context[8] );
      res = refalrts::splice_evar( res, context[7], context[20] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Enum/11 s.ScopeClass#2/14 e.Name#2/12 )/8 >/1
      if( ! refalrts::ident_term(  ident_Enum.ref(vm), context[11] ) )
        continue;
      // closed e.Name#2 as range 12
      //DEBUG: s.Joint#1: 9
      //DEBUG: s.OptResult#1: 10
      //DEBUG: s.ScopeClass#2: 14
      //DEBUG: e.Name#2: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdEnum/11 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/12 AsIs: )/8 } Tile{ ]] }
      refalrts::update_ident( context[11], ident_CmdEnum.ref(vm) );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Swap/11 s.ScopeClass#2/14 e.Name#2/12 )/8 >/1
      if( ! refalrts::ident_term(  ident_Swap.ref(vm), context[11] ) )
        continue;
      // closed e.Name#2 as range 12
      //DEBUG: s.Joint#1: 9
      //DEBUG: s.OptResult#1: 10
      //DEBUG: s.ScopeClass#2: 14
      //DEBUG: e.Name#2: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdSwap/11 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/12 AsIs: )/8 } Tile{ ]] }
      refalrts::update_ident( context[11], ident_CmdSwap.ref(vm) );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Declaration/11 s.ScopeClass#2/14 e.Name#2/12 )/8 >/1
    if( ! refalrts::ident_term(  ident_Declaration.ref(vm), context[11] ) )
      continue;
    // closed e.Name#2 as range 12
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: s.ScopeClass#2: 14
    //DEBUG: e.Name#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDeclaration/11 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/12 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[11], ident_CmdDeclaration.ref(vm) );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Ident/11 e.Name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Ident.ref(vm), context[11] ) )
      continue;
    // closed e.Name#2 as range 5
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: e.Name#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDefineIdent/11 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[11], ident_CmdDefineIdent.ref(vm) );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # NativeBlock/11 t.SrcPos#2/12 e.Code#2/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_NativeBlock.ref(vm), context[11] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#2 as range 5
  //DEBUG: s.Joint#1: 9
  //DEBUG: s.OptResult#1: 10
  //DEBUG: t.SrcPos#2: 12
  //DEBUG: e.Code#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdEmitNativeCode/11 AsIs: t.SrcPos#2/12 AsIs: e.Code#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::update_ident( context[11], ident_CmdEmitNativeCode.ref(vm) );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_L1("HighLevelRASL\\1", 3260011162U, 259521105U, func_gen_HighLevelRASL_L1);


static refalrts::FnResult func_HighLevelRASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & HighLevelRASL/4 s.Joint#1/5 s.OptResult#1/6 e.ProgramElements#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ProgramElements#1 as range 2
  //DEBUG: s.Joint#1: 5
  //DEBUG: s.OptResult#1: 6
  //DEBUG: e.ProgramElements#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map/8 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL\1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 } {*}/9 Tile{ AsIs: e.ProgramElements#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[8], ref_Map.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[9], context[0] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_HighLevelRASL_L1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[9] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASL("HighLevelRASL", 0U, 0U, func_HighLevelRASL);


static refalrts::FnResult func_HighLevelRASLm_Function(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & HighLevelRASL-Function/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & HighLevelRASL-Function/4 s.new#1/5 s.new#2/6 s.new#3/7 s.new#4/8 (/11 e.new#5/9 )/12 e.new#6/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#5 as range 9
  // closed e.new#6 as range 2
  do {
    // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/9 )/12 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 9
    //DEBUG: s.FnGenFunction#1: 5
    //DEBUG: s.FnGenSubst#1: 6
    //DEBUG: s.FnGenResult#1: 7
    //DEBUG: s.ScopeClass#1: 8
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FnGenFunction#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdEnum/4 } Tile{ HalfReuse: s.ScopeClass1 #8/11 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdEnum.ref(vm) );
    refalrts::reinit_svar( context[11], context[8] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/9 )/12 t.OneSentence#1/15 >/1
    context[13] = context[2];
    context[14] = context[3];
    // closed e.Name#1 as range 9
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: s.FnGenFunction#1: 5
    //DEBUG: s.FnGenSubst#1: 6
    //DEBUG: s.FnGenResult#1: 7
    //DEBUG: s.ScopeClass#1: 8
    //DEBUG: e.Name#1: 9
    //DEBUG: t.OneSentence#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FnGenFunction#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function-Disjoint/4 } Tile{ AsIs: s.FnGenSubst#1/6 AsIs: s.FnGenResult#1/7 AsIs: s.ScopeClass#1/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 AsIs: t.OneSentence#1/15 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_HighLevelRASLm_Functionm_Disjoint.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HighLevelRASL-Function/4 s.FnGenFunction#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/9 )/12 e.Sentences#1/2 >/1
  // closed e.Name#1 as range 9
  // closed e.Sentences#1 as range 2
  //DEBUG: s.FnGenFunction#1: 5
  //DEBUG: s.FnGenSubst#1: 6
  //DEBUG: s.FnGenResult#1: 7
  //DEBUG: s.ScopeClass#1: 8
  //DEBUG: e.Name#1: 9
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.FnGenFunction#1/5 AsIs: s.FnGenSubst#1/6 AsIs: s.FnGenResult#1/7 AsIs: s.ScopeClass#1/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASLm_Function("HighLevelRASL-Function", 3260011162U, 259521105U, func_HighLevelRASLm_Function);


static refalrts::FnResult func_GenSentenceFunc(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & GenSentenceFunc/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenSentenceFunc/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GenSentenceFunc/4 # Conjoint/5 >/1
    if( ! refalrts::ident_term(  ident_Conjoint.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenSentenceFunc/4 # Conjoint/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & HighLevelRASL-Function-Conjoint/1 ]] }
    refalrts::reinit_name( context[1], ref_HighLevelRASLm_Functionm_Conjoint.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenSentenceFunc/4 # Disjoint/5 >/1
  if( ! refalrts::ident_term(  ident_Disjoint.ref(vm), context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenSentenceFunc/4 # Disjoint/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: & HighLevelRASL-Function-Disjoint/1 ]] }
  refalrts::reinit_name( context[1], ref_HighLevelRASLm_Functionm_Disjoint.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenSentenceFunc("GenSentenceFunc", 3260011162U, 259521105U, func_GenSentenceFunc);


static refalrts::FnResult func_GenResultFuncs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & GenResultFuncs/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenResultFuncs/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GenResultFuncs/4 # NoOpt/5 >/1
    if( ! refalrts::ident_term(  ident_NoOpt.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # NoOpt/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: & GenSubst-Simple/0 Reuse: & GenResult-Simple/4 } Tile{ ]] }
    refalrts::reinit_name( context[0], ref_GenSubstm_Simple.ref(vm) );
    refalrts::update_name( context[4], ref_GenResultm_Simple.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResultFuncs/4 # OptResult/5 >/1
  if( ! refalrts::ident_term(  ident_OptResult.ref(vm), context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} # OptResult/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: & GenSubst-Save/0 Reuse: & GenResult-Opt/4 } Tile{ ]] }
  refalrts::reinit_name( context[0], ref_GenSubstm_Save.ref(vm) );
  refalrts::update_name( context[4], ref_GenResultm_Opt.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultFuncs("GenResultFuncs", 3260011162U, 259521105U, func_GenResultFuncs);


//End of file
