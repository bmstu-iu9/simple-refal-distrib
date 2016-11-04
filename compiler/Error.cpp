// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #EL-HasErrors
template <typename SREFAL_PARAM_INT>
struct ident_EL_HasErrors {
  static const char *name() {
    return "EL-HasErrors";
  }
};

// identifier #EL-NoErrors
template <typename SREFAL_PARAM_INT>
struct ident_EL_NoErrors {
  static const char *name() {
    return "EL-NoErrors";
  }
};

// identifier #NoLine
template <typename SREFAL_PARAM_INT>
struct ident_NoLine {
  static const char *name() {
    return "NoLine";
  }
};

// identifier #TkError
template <typename SREFAL_PARAM_INT>
struct ident_TkError {
  static const char *name() {
    return "TkError";
  }
};

// identifier #TkUnexpected
template <typename SREFAL_PARAM_INT>
struct ident_TkUnexpected {
  static const char *name() {
    return "TkUnexpected";
  }
};

extern refalrts::RefalFunction& WriteLine_0_0;
#define WriteLine_alias WriteLine_0_0
#define WriteLine_str "WriteLine#0:0"

extern refalrts::RefalFunction& StrFromInt_0_0;
#define StrFromInt_alias StrFromInt_0_0
#define StrFromInt_str "StrFromInt#0:0"

extern refalrts::RefalFunction& StrFromToken_0_0;
#define StrFromToken_alias StrFromToken_0_0
#define StrFromToken_str "StrFromToken#0:0"

extern refalrts::RefalFunction& Map_0_0;
#define Map_alias Map_0_0
#define Map_str "Map#0:0"

extern refalrts::RefalFunction& Sort_0_0;
#define Sort_alias Sort_0_0
#define Sort_str "Sort#0:0"

static refalrts::RefalEmptyFunction descr_ErrorList("ErrorList#167490376:3611868372");
refalrts::RefalFunction& ErrorList_167490376_3611868372 = descr_ErrorList;
#define ErrorList_alias ErrorList_167490376_3611868372

extern refalrts::RefalFunction& EL_Create_0_0;
#define EL_Create_alias EL_Create_0_0

extern refalrts::RefalFunction& EL_AddError_0_0;
#define EL_AddError_alias EL_AddError_0_0

extern refalrts::RefalFunction& EL_AddErrorAt_0_0;
#define EL_AddErrorAt_alias EL_AddErrorAt_0_0

extern refalrts::RefalFunction& EL_AddUnexpected_0_0;
#define EL_AddUnexpected_alias EL_AddUnexpected_0_0

extern refalrts::RefalFunction& gen_EL_Destroy_S2L1_167490376_3611868372;
#define gen_EL_Destroy_S2L1_alias gen_EL_Destroy_S2L1_167490376_3611868372

extern refalrts::RefalFunction& EL_Destroy_0_0;
#define EL_Destroy_alias EL_Destroy_0_0


#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_EL_Create {
    static refalrts::RefalFunction *functions[] = {
      & ErrorList_alias
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 7, 0, 0},
      // </0 & EL-Create/4 e.FileName#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.FileName#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & ErrorList/4 } (/5 Tile{ AsIs: e.FileName#1/2 } )/6 Tile{ HalfReuse: ]/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 5},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 6},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseADT, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_EL_Create_0_0

} // unnamed namespace

static refalrts::RASLFunction descr_EL_Create(
  "EL-Create#0:0",
  scope_EL_Create::raa,
  scope_EL_Create::functions,
  scope_EL_Create::idents,
  scope_EL_Create::numbers,
  scope_EL_Create::strings
);
refalrts::RefalFunction& EL_Create_0_0 = descr_EL_Create;

#else
static refalrts::FnResult func_EL_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & EL-Create/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & ErrorList/4 } (/5 Tile{ AsIs: e.FileName#1/2 } )/6 Tile{ HalfReuse: ]/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_adt( context[0] );
  refalrts::update_name( context[4], & ErrorList_alias );
  refalrts::reinit_close_adt( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_EL_Create(func_EL_Create, "EL-Create#0:0");
refalrts::RefalFunction& EL_Create_0_0 = descr_EL_Create;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_EL_AddError {
    static refalrts::RefalFunction *functions[] = {
      & ErrorList_alias
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NoLine<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 14, 0, 0},
      // </0 & EL-AddError/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 e.Message#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icADTLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 10, 5},
      // closed e.FileName#1 as range 10
      // closed e.Errors#1 as range 5
      // closed e.Message#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: e.Errors#1/5 HalfReuse: (/9 } Tile{ HalfReuse: # NoLine/4 } Tile{ AsIs: e.Message#1/2 } Tile{ HalfReuse: )/0 } Tile{ HalfReuse: ]/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseADT, 1},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icLinkBrackets, 9, 0, 0},
      {refalrts::icLinkBrackets, 12, 13, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 4, 4, 0},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_EL_AddError_0_0

} // unnamed namespace

static refalrts::RASLFunction descr_EL_AddError(
  "EL-AddError#0:0",
  scope_EL_AddError::raa,
  scope_EL_AddError::functions,
  scope_EL_AddError::idents,
  scope_EL_AddError::numbers,
  scope_EL_AddError::strings
);
refalrts::RefalFunction& EL_AddError_0_0 = descr_EL_AddError;

#else
static refalrts::FnResult func_EL_AddError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & EL-AddError/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], & ErrorList_alias, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.FileName#1 as range 10
  // closed e.Errors#1 as range 5
  // closed e.Message#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: e.Errors#1/5 HalfReuse: (/9 } Tile{ HalfReuse: # NoLine/4 } Tile{ AsIs: e.Message#1/2 } Tile{ HalfReuse: )/0 } Tile{ HalfReuse: ]/1 ]] }
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_ident( context[4], & ident_NoLine<int>::name );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_adt( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[9], context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_EL_AddError(func_EL_AddError, "EL-AddError#0:0");
refalrts::RefalFunction& EL_AddError_0_0 = descr_EL_AddError;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_EL_AddErrorAt {
    static refalrts::RefalFunction *functions[] = {
      & ErrorList_alias
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 15, 0, 0},
      // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 s.LineNumber#1/14 e.Message#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icADTLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 10, 5},
      // closed e.FileName#1 as range 10
      // closed e.Errors#1 as range 5
      {refalrts::icsVarLeft, 0, 14, 2},
      // closed e.Message#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: e.Errors#1/5 HalfReuse: (/9 AsIs: s.LineNumber#1/14 AsIs: e.Message#1/2 HalfReuse: )/1 } Tile{ HalfReuse: ]/4 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseADT, 4},
      {refalrts::icLinkBrackets, 7, 4, 0},
      {refalrts::icLinkBrackets, 9, 1, 0},
      {refalrts::icLinkBrackets, 12, 13, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 4, 0},
      {refalrts::icSpliceTile, 7, 1, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_EL_AddErrorAt_0_0

} // unnamed namespace

static refalrts::RASLFunction descr_EL_AddErrorAt(
  "EL-AddErrorAt#0:0",
  scope_EL_AddErrorAt::raa,
  scope_EL_AddErrorAt::functions,
  scope_EL_AddErrorAt::idents,
  scope_EL_AddErrorAt::numbers,
  scope_EL_AddErrorAt::strings
);
refalrts::RefalFunction& EL_AddErrorAt_0_0 = descr_EL_AddErrorAt;

#else
static refalrts::FnResult func_EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 s.LineNumber#1/14 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], & ErrorList_alias, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.FileName#1 as range 10
  // closed e.Errors#1 as range 5
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: e.Errors#1/5 HalfReuse: (/9 AsIs: s.LineNumber#1/14 AsIs: e.Message#1/2 HalfReuse: )/1 } Tile{ HalfReuse: ]/4 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::reinit_close_adt( context[4] );
  refalrts::link_brackets( context[7], context[4] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_EL_AddErrorAt(func_EL_AddErrorAt, "EL-AddErrorAt#0:0");
refalrts::RefalFunction& EL_AddErrorAt_0_0 = descr_EL_AddErrorAt;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_EL_AddUnexpected {
    static refalrts::RefalFunction *functions[] = {
      & EL_AddErrorAt_alias,
      & StrFromToken_alias
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkUnexpected<int>::name,
      & ident_TkError<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {", expected", 10},
      {"Unexpected ", 11},
      {"nown characters \"", 17}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 20, 0, 0},
      //FAST GEN: t.$ ( s.$ s.$ e.$ ) e.$
      //GLOBAL GEN: t.$ ( s.$ s.$ e.$ ) e.$
      // </0 & EL-AddUnexpected/4 t.idx#0/5 (/9 s.idxVB#0/11 s.idxVBV#0/12 e.idxVBVV#0/7 )/10 e.idxVT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 7, 2},
      // closed e.idxVT#0 as range 2
      {refalrts::icsVarLeft, 0, 11, 7},
      {refalrts::icsVarLeft, 0, 12, 7},
      // closed e.idxVBVV#0 as range 7
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // t.idx ( # TkError s.idx e.idx ) e.idx
      // </0 & EL-AddUnexpected/4 t.ErrorList#1/5 (/9 # TkError/11 s.LineNumber#1/12 e.Message#1/7 )/10 e.Expected#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 11},
      // closed e.Message#1 as range 7
      // closed e.Expected#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} # TkError/11 s.LineNumber#1/12 {REMOVED TILE} )/10 e.Expected#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 } Tile{ AsIs: e.Message#1/7 } Tile{ AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitSVar, 0, 12, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icTrash, 0, 0, 9},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // t.idx ( # TkUnexpected s.idx e.idx ) e.idx
      // </0 & EL-AddUnexpected/4 t.ErrorList#1/5 (/9 # TkUnexpected/11 s.LineNumber#1/12 e.Unexpected#1/7 )/10 e.Expected#1/2 >/1
      {refalrts::icIdentTerm, 0, 0, 11},
      // closed e.Unexpected#1 as range 7
      // closed e.Expected#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.LineNumber#1/12 {REMOVED TILE} {REMOVED TILE} e.Expected#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 HalfReuse: 'U'/11 } 'n'/13 Tile{ HalfReuse: 'k'/10 }"nown characters \""/14 Tile{ AsIs: e.Unexpected#1/7 } '\"'/16 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, 'n', 13},
      {refalrts::icAllocString, 0, 2, 14},
      {refalrts::icAllocChar, 0, '\"', 16},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitSVar, 0, 12, 9},
      {refalrts::icReinitChar, 0, 'U', 11},
      {refalrts::icReinitChar, 0, 'k', 10},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 14, 15, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icTrash, 0, 0, 11},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx ( s.idx s.idx e.idx ) e.idx
      // </0 & EL-AddUnexpected/4 t.ErrorList#1/5 (/9 s.Unexpected#1/11 s.LineNumber#1/12 e.Info#1/7 )/10 e.Expected#1/2 >/1
      // closed e.Info#1 as range 7
      // closed e.Expected#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.LineNumber#1/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 }"Unexpected "/13 </15 & StrFromToken/16 Tile{ AsIs: s.Unexpected#1/11 } Tile{ AsIs: e.Info#1/7 } >/17", expected"/18 Tile{ HalfReuse: ' '/10 AsIs: e.Expected#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 1, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 1, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
      {refalrts::icAllocString, 0, 0, 18},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitSVar, 0, 12, 9},
      {refalrts::icReinitChar, 0, ' ', 10},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icSetRes, 0, 0, 10},
      {refalrts::icSpliceTile, 17, 19, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icSpliceTile, 13, 16, 0},
      {refalrts::icTrash, 0, 0, 9},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_EL_AddUnexpected_0_0

} // unnamed namespace

static refalrts::RASLFunction descr_EL_AddUnexpected(
  "EL-AddUnexpected#0:0",
  scope_EL_AddUnexpected::raa,
  scope_EL_AddUnexpected::functions,
  scope_EL_AddUnexpected::idents,
  scope_EL_AddUnexpected::numbers,
  scope_EL_AddUnexpected::strings
);
refalrts::RefalFunction& EL_AddUnexpected_0_0 = descr_EL_AddUnexpected;

#else
static refalrts::FnResult func_EL_AddUnexpected(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: t.$ ( s.$ s.$ e.$ ) e.$
  //GLOBAL GEN: t.$ ( s.$ s.$ e.$ ) e.$
  // </0 & EL-AddUnexpected/4 t.idx#0/5 (/9 s.idxVB#0/11 s.idxVBV#0/12 e.idxVBVV#0/7 )/10 e.idxVT#0/2 >/1
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
  // closed e.idxVT#0 as range 2
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVBVV#0 as range 7
  do {
    // t.idx ( # TkError s.idx e.idx ) e.idx
    // </0 & EL-AddUnexpected/4 t.ErrorList#1/5 (/9 # TkError/11 s.LineNumber#1/12 e.Message#1/7 )/10 e.Expected#1/2 >/1
    if( ! refalrts::ident_term(  & ident_TkError<int>::name, context[11] ) )
      continue;
    // closed e.Message#1 as range 7
    // closed e.Expected#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # TkError/11 s.LineNumber#1/12 {REMOVED TILE} )/10 e.Expected#1/2 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 } Tile{ AsIs: e.Message#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], & EL_AddErrorAt_alias );
    refalrts::reinit_svar( context[9], context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx ( # TkUnexpected s.idx e.idx ) e.idx
    // </0 & EL-AddUnexpected/4 t.ErrorList#1/5 (/9 # TkUnexpected/11 s.LineNumber#1/12 e.Unexpected#1/7 )/10 e.Expected#1/2 >/1
    if( ! refalrts::ident_term(  & ident_TkUnexpected<int>::name, context[11] ) )
      continue;
    // closed e.Unexpected#1 as range 7
    // closed e.Expected#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.LineNumber#1/12 {REMOVED TILE} {REMOVED TILE} e.Expected#1/2 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 HalfReuse: 'U'/11 } 'n'/13 Tile{ HalfReuse: 'k'/10 }"nown characters \""/14 Tile{ AsIs: e.Unexpected#1/7 } '\"'/16 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[13], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "nown characters \"", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], '\"' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & EL_AddErrorAt_alias );
    refalrts::reinit_svar( context[9], context[12] );
    refalrts::reinit_char( context[11], 'U' );
    refalrts::reinit_char( context[10], 'k' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx ( s.idx s.idx e.idx ) e.idx
  // </0 & EL-AddUnexpected/4 t.ErrorList#1/5 (/9 s.Unexpected#1/11 s.LineNumber#1/12 e.Info#1/7 )/10 e.Expected#1/2 >/1
  // closed e.Info#1 as range 7
  // closed e.Expected#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.LineNumber#1/12 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 }"Unexpected "/13 </15 & StrFromToken/16 Tile{ AsIs: s.Unexpected#1/11 } Tile{ AsIs: e.Info#1/7 } >/17", expected"/18 Tile{ HalfReuse: ' '/10 AsIs: e.Expected#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[13], context[14], "Unexpected ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], & StrFromToken_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], ", expected", 10 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & EL_AddErrorAt_alias );
  refalrts::reinit_svar( context[9], context[12] );
  refalrts::reinit_char( context[10], ' ' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[9], res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_EL_AddUnexpected(func_EL_AddUnexpected, "EL-AddUnexpected#0:0");
refalrts::RefalFunction& EL_AddUnexpected_0_0 = descr_EL_AddUnexpected;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_EL_Destroy_S2L1 {
    static refalrts::RefalFunction *functions[] = {
      & StrFromInt_alias,
      & WriteLine_alias
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NoLine<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"ERROR: ", 7},
      {"RO", 2},
      {" E", 2}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 18, 0, 0},
      //FAST GEN: ( e.$ ) ( s.$ e.$ )
      //GLOBAL GEN: ( e.$ ) ( s.$ e.$ )
      // </0 & EL-Destroy$2\1/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 13, 9},
      // closed e.idxTBV#0 as range 9
      {refalrts::icOnFailGoTo, +20, 0, 0},
      // ( e.idx ) ( # NoLine e.idx )
      // </0 & EL-Destroy$2\1/4 (/7 e.FileName#1/5 )/8 (/11 # NoLine/13 e.Message#2/9 )/12 >/1
      {refalrts::icIdentTerm, 0, 0, 13},
      // closed e.FileName#1 as range 5
      // closed e.Message#2 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.FileName#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: ' '/7 }" E"/14 Tile{ HalfReuse: 'R'/1 }"RO"/16 Tile{ HalfReuse: 'R'/8 HalfReuse: ':'/11 HalfReuse: ' '/13 AsIs: e.Message#2/9 HalfReuse: >/12 } Tile{ ]] }
      {refalrts::icAllocString, 0, 2, 14},
      {refalrts::icAllocString, 0, 1, 16},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, ' ', 7},
      {refalrts::icReinitChar, 0, 'R', 1},
      {refalrts::icReinitChar, 0, 'R', 8},
      {refalrts::icReinitChar, 0, ':', 11},
      {refalrts::icReinitChar, 0, ' ', 13},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 12, 0},
      {refalrts::icSpliceTile, 16, 17, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 14, 15, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( e.idx ) ( s.idx e.idx )
      // </0 & EL-Destroy$2\1/4 (/7 e.FileName#1/5 )/8 (/11 s.LineNumber#2/13 e.Message#2/9 )/12 >/1
      // closed e.FileName#1 as range 5
      // closed e.Message#2 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ AsIs: e.FileName#1/5 } Tile{ HalfReuse: ':'/7 } Tile{ HalfReuse: </8 HalfReuse: & StrFromInt/11 AsIs: s.LineNumber#2/13 } >/14 Tile{ HalfReuse: ':'/12 }"ERROR: "/15 Tile{ AsIs: e.Message#2/9 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icAllocString, 0, 0, 15},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, ':', 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
      {refalrts::icReinitFunc, 0, 0, 11},
      {refalrts::icReinitChar, 0, ':', 12},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icSpliceTile, 8, 13, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_EL_Destroy_S2L1_167490376_3611868372

} // unnamed namespace

static refalrts::RASLFunction descr_gen_EL_Destroy_S2L1(
  "EL-Destroy$2\\1#167490376:3611868372",
  scope_gen_EL_Destroy_S2L1::raa,
  scope_gen_EL_Destroy_S2L1::functions,
  scope_gen_EL_Destroy_S2L1::idents,
  scope_gen_EL_Destroy_S2L1::numbers,
  scope_gen_EL_Destroy_S2L1::strings
);
refalrts::RefalFunction& gen_EL_Destroy_S2L1_167490376_3611868372 = descr_gen_EL_Destroy_S2L1;

#else
static refalrts::FnResult func_gen_EL_Destroy_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: ( e.$ ) ( s.$ e.$ )
  //GLOBAL GEN: ( e.$ ) ( s.$ e.$ )
  // </0 & EL-Destroy$2\1/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 >/1
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
  // closed e.idxB#0 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBV#0 as range 9
  do {
    // ( e.idx ) ( # NoLine e.idx )
    // </0 & EL-Destroy$2\1/4 (/7 e.FileName#1/5 )/8 (/11 # NoLine/13 e.Message#2/9 )/12 >/1
    if( ! refalrts::ident_term(  & ident_NoLine<int>::name, context[13] ) )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.Message#2 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.FileName#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: ' '/7 }" E"/14 Tile{ HalfReuse: 'R'/1 }"RO"/16 Tile{ HalfReuse: 'R'/8 HalfReuse: ':'/11 HalfReuse: ' '/13 AsIs: e.Message#2/9 HalfReuse: >/12 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[14], context[15], " E", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], "RO", 2 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & WriteLine_alias );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[1], 'R' );
    refalrts::reinit_char( context[8], 'R' );
    refalrts::reinit_char( context[11], ':' );
    refalrts::reinit_char( context[13], ' ' );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( s.idx e.idx )
  // </0 & EL-Destroy$2\1/4 (/7 e.FileName#1/5 )/8 (/11 s.LineNumber#2/13 e.Message#2/9 )/12 >/1
  // closed e.FileName#1 as range 5
  // closed e.Message#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ AsIs: e.FileName#1/5 } Tile{ HalfReuse: ':'/7 } Tile{ HalfReuse: </8 HalfReuse: & StrFromInt/11 AsIs: s.LineNumber#2/13 } >/14 Tile{ HalfReuse: ':'/12 }"ERROR: "/15 Tile{ AsIs: e.Message#2/9 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "ERROR: ", 7 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & WriteLine_alias );
  refalrts::reinit_char( context[7], ':' );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[11], & StrFromInt_alias );
  refalrts::reinit_char( context[12], ':' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[8], context[13] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_EL_Destroy_S2L1(func_gen_EL_Destroy_S2L1, "EL-Destroy$2\\1#167490376:3611868372");
refalrts::RefalFunction& gen_EL_Destroy_S2L1_167490376_3611868372 = descr_gen_EL_Destroy_S2L1;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_EL_Destroy {
    static refalrts::RefalFunction *functions[] = {
      & gen_EL_Destroy_S2L1_alias,
      & refalrts::create_closure,
      & Map_alias,
      & Sort_alias,
      & ErrorList_alias
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_EL_HasErrors<int>::name,
      & ident_EL_NoErrors<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 21, 0, 0},
      //FAST GEN: [ErrorList e.$ ]
      //GLOBAL GEN: [ErrorList ( e.$ ) e.$ ]
      // </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.idxDB#0/10 )/13 e.idxDT#0/5 ]/9 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icADTLeftSave, 4, 5, 2},
      {refalrts::icBracketLeftSave, 0, 10, 5},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.idxDB#0 as range 10
      // closed e.idxDT#0 as range 5
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // [ErrorList ( e.idx ) ]
      // </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 ]/9 >/1
      {refalrts::icSave, 0, 19, 5},
      {refalrts::icEmpty, 0, 0, 19},
      // closed e.FileName#1 as range 10
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 ]/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # EL-NoErrors/1 ]] }
      {refalrts::icReinitIdent, 0, 1, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // [ErrorList ( e.idx ) e.idx ]
      // </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 >/1
      // closed e.FileName#1 as range 10
      // closed e.Errors#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Map/0 HalfReuse: </4 HalfReuse: & @create_closure@/7 Reuse: & EL-Destroy$2\1/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 } >/15 </16 & Sort/17 Tile{ AsIs: e.Errors#1/5 } >/18 Tile{ HalfReuse: >/9 HalfReuse: # EL-HasErrors/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
      {refalrts::icAllocFunc, 0, 3, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icReinitFunc, 0, 2, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 1, 7},
      {refalrts::icUpdateFunc, 0, 0, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icReinitIdent, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icLinkBrackets, 12, 13, 0},
      {refalrts::icSetRes, 0, 0, 9},
      {refalrts::icSpliceTile, 18, 18, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 15, 17, 0},
      {refalrts::icSpliceTile, 0, 13, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_EL_Destroy_0_0

} // unnamed namespace

static refalrts::RASLFunction descr_EL_Destroy(
  "EL-Destroy#0:0",
  scope_EL_Destroy::raa,
  scope_EL_Destroy::functions,
  scope_EL_Destroy::idents,
  scope_EL_Destroy::numbers,
  scope_EL_Destroy::strings
);
refalrts::RefalFunction& EL_Destroy_0_0 = descr_EL_Destroy;

#else
static refalrts::FnResult func_EL_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  //FAST GEN: [ErrorList e.$ ]
  //GLOBAL GEN: [ErrorList ( e.$ ) e.$ ]
  // </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.idxDB#0/10 )/13 e.idxDT#0/5 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], & ErrorList_alias, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxDB#0 as range 10
  // closed e.idxDT#0 as range 5
  do {
    // [ErrorList ( e.idx ) ]
    // </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 ]/9 >/1
    context[19] = context[5];
    context[20] = context[6];
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.FileName#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 ]/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # EL-NoErrors/1 ]] }
    refalrts::reinit_ident( context[1], & ident_EL_NoErrors<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // [ErrorList ( e.idx ) e.idx ]
  // </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 >/1
  // closed e.FileName#1 as range 10
  // closed e.Errors#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Map/0 HalfReuse: </4 HalfReuse: & @create_closure@/7 Reuse: & EL-Destroy$2\1/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 } >/15 </16 & Sort/17 Tile{ AsIs: e.Errors#1/5 } >/18 Tile{ HalfReuse: >/9 HalfReuse: # EL-HasErrors/1 ]] }
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], & Sort_alias ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map_alias );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], & refalrts::create_closure );
  refalrts::update_name( context[8], & gen_EL_Destroy_S2L1_alias );
  refalrts::reinit_close_call( context[9] );
  refalrts::reinit_ident( context[1], & ident_EL_HasErrors<int>::name );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[4] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_EL_Destroy(func_EL_Destroy, "EL-Destroy#0:0");
refalrts::RefalFunction& EL_Destroy_0_0 = descr_EL_Destroy;

#endif

//End of file
