// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LowLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ConvertInterpretCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoLength(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenerateResult_Sentences(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Length_T(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult LowLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult OutlineConstants(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrepareInterpretCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrepareInterpretCommands_Linearize(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrepareOpenEStack(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RemoveNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #AlgLeft
template <typename SREFAL_PARAM_INT>
struct ident_AlgLeft {
  static const char *name() {
    return "AlgLeft";
  }
};

// identifier #Both
template <typename SREFAL_PARAM_INT>
struct ident_Both {
  static const char *name() {
    return "Both";
  }
};

// identifier #CmdADT
template <typename SREFAL_PARAM_INT>
struct ident_CmdADT {
  static const char *name() {
    return "CmdADT";
  }
};

// identifier #CmdAllocateElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdAllocateElem {
  static const char *name() {
    return "CmdAllocateElem";
  }
};

// identifier #CmdArrCopy
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrCopy {
  static const char *name() {
    return "CmdArrCopy";
  }
};

// identifier #CmdArrSplice
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrSplice {
  static const char *name() {
    return "CmdArrSplice";
  }
};

// identifier #CmdBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CmdBrackets {
  static const char *name() {
    return "CmdBrackets";
  }
};

// identifier #CmdChar
template <typename SREFAL_PARAM_INT>
struct ident_CmdChar {
  static const char *name() {
    return "CmdChar";
  }
};

// identifier #CmdComment
template <typename SREFAL_PARAM_INT>
struct ident_CmdComment {
  static const char *name() {
    return "CmdComment";
  }
};

// identifier #CmdCopyVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdCopyVar {
  static const char *name() {
    return "CmdCopyVar";
  }
};

// identifier #CmdDeclaration
template <typename SREFAL_PARAM_INT>
struct ident_CmdDeclaration {
  static const char *name() {
    return "CmdDeclaration";
  }
};

// identifier #CmdDefineIdent
template <typename SREFAL_PARAM_INT>
struct ident_CmdDefineIdent {
  static const char *name() {
    return "CmdDefineIdent";
  }
};

// identifier #CmdElse
template <typename SREFAL_PARAM_INT>
struct ident_CmdElse {
  static const char *name() {
    return "CmdElse";
  }
};

// identifier #CmdEmpty
template <typename SREFAL_PARAM_INT>
struct ident_CmdEmpty {
  static const char *name() {
    return "CmdEmpty";
  }
};

// identifier #CmdEmptyResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdEmptyResult {
  static const char *name() {
    return "CmdEmptyResult";
  }
};

// identifier #CmdEndIf
template <typename SREFAL_PARAM_INT>
struct ident_CmdEndIf {
  static const char *name() {
    return "CmdEndIf";
  }
};

// identifier #CmdEndSentence
template <typename SREFAL_PARAM_INT>
struct ident_CmdEndSentence {
  static const char *name() {
    return "CmdEndSentence";
  }
};

// identifier #CmdEnum
template <typename SREFAL_PARAM_INT>
struct ident_CmdEnum {
  static const char *name() {
    return "CmdEnum";
  }
};

// identifier #CmdFail
template <typename SREFAL_PARAM_INT>
struct ident_CmdFail {
  static const char *name() {
    return "CmdFail";
  }
};

// identifier #CmdFinRAA
template <typename SREFAL_PARAM_INT>
struct ident_CmdFinRAA {
  static const char *name() {
    return "CmdFinRAA";
  }
};

// identifier #CmdFnEnd
template <typename SREFAL_PARAM_INT>
struct ident_CmdFnEnd {
  static const char *name() {
    return "CmdFnEnd";
  }
};

// identifier #CmdFnStart
template <typename SREFAL_PARAM_INT>
struct ident_CmdFnStart {
  static const char *name() {
    return "CmdFnStart";
  }
};

// identifier #CmdIdent
template <typename SREFAL_PARAM_INT>
struct ident_CmdIdent {
  static const char *name() {
    return "CmdIdent";
  }
};

// identifier #CmdIfDef
template <typename SREFAL_PARAM_INT>
struct ident_CmdIfDef {
  static const char *name() {
    return "CmdIfDef";
  }
};

// identifier #CmdInitB0
template <typename SREFAL_PARAM_INT>
struct ident_CmdInitB0 {
  static const char *name() {
    return "CmdInitB0";
  }
};

// identifier #CmdInitRAA
template <typename SREFAL_PARAM_INT>
struct ident_CmdInitRAA {
  static const char *name() {
    return "CmdInitRAA";
  }
};

// identifier #CmdInsertElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertElem {
  static const char *name() {
    return "CmdInsertElem";
  }
};

// identifier #CmdInsertRange
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertRange {
  static const char *name() {
    return "CmdInsertRange";
  }
};

// identifier #CmdInsertVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertVar {
  static const char *name() {
    return "CmdInsertVar";
  }
};

// identifier #CmdIssueMem
template <typename SREFAL_PARAM_INT>
struct ident_CmdIssueMem {
  static const char *name() {
    return "CmdIssueMem";
  }
};

// identifier #CmdLinkBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CmdLinkBrackets {
  static const char *name() {
    return "CmdLinkBrackets";
  }
};

// identifier #CmdName
template <typename SREFAL_PARAM_INT>
struct ident_CmdName {
  static const char *name() {
    return "CmdName";
  }
};

// identifier #CmdNumber
template <typename SREFAL_PARAM_INT>
struct ident_CmdNumber {
  static const char *name() {
    return "CmdNumber";
  }
};

// identifier #CmdOpenELoop
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenELoop {
  static const char *name() {
    return "CmdOpenELoop";
  }
};

// identifier #CmdOpenedE_End
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenedE_End {
  static const char *name() {
    return "CmdOpenedE_End";
  }
};

// identifier #CmdOpenedE_Start
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenedE_Start {
  static const char *name() {
    return "CmdOpenedE_Start";
  }
};

// identifier #CmdPushStack
template <typename SREFAL_PARAM_INT>
struct ident_CmdPushStack {
  static const char *name() {
    return "CmdPushStack";
  }
};

// identifier #CmdRepeated
template <typename SREFAL_PARAM_INT>
struct ident_CmdRepeated {
  static const char *name() {
    return "CmdRepeated";
  }
};

// identifier #CmdReturnResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdReturnResult {
  static const char *name() {
    return "CmdReturnResult";
  }
};

// identifier #CmdSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdSave {
  static const char *name() {
    return "CmdSave";
  }
};

// identifier #CmdSentence
template <typename SREFAL_PARAM_INT>
struct ident_CmdSentence {
  static const char *name() {
    return "CmdSentence";
  }
};

// identifier #CmdSeparator
template <typename SREFAL_PARAM_INT>
struct ident_CmdSeparator {
  static const char *name() {
    return "CmdSeparator";
  }
};

// identifier #CmdSpliceElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdSpliceElem {
  static const char *name() {
    return "CmdSpliceElem";
  }
};

// identifier #CmdSpliceRange
template <typename SREFAL_PARAM_INT>
struct ident_CmdSpliceRange {
  static const char *name() {
    return "CmdSpliceRange";
  }
};

// identifier #CmdStartSentence
template <typename SREFAL_PARAM_INT>
struct ident_CmdStartSentence {
  static const char *name() {
    return "CmdStartSentence";
  }
};

// identifier #CmdSwap
template <typename SREFAL_PARAM_INT>
struct ident_CmdSwap {
  static const char *name() {
    return "CmdSwap";
  }
};

// identifier #CmdVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdVar {
  static const char *name() {
    return "CmdVar";
  }
};

// identifier #CmdiADT
template <typename SREFAL_PARAM_INT>
struct ident_CmdiADT {
  static const char *name() {
    return "CmdiADT";
  }
};

// identifier #CmdiAllocateElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdiAllocateElem {
  static const char *name() {
    return "CmdiAllocateElem";
  }
};

// identifier #CmdiBracket
template <typename SREFAL_PARAM_INT>
struct ident_CmdiBracket {
  static const char *name() {
    return "CmdiBracket";
  }
};

// identifier #CmdiChar
template <typename SREFAL_PARAM_INT>
struct ident_CmdiChar {
  static const char *name() {
    return "CmdiChar";
  }
};

// identifier #CmdiEPrepare
template <typename SREFAL_PARAM_INT>
struct ident_CmdiEPrepare {
  static const char *name() {
    return "CmdiEPrepare";
  }
};

// identifier #CmdiEStart
template <typename SREFAL_PARAM_INT>
struct ident_CmdiEStart {
  static const char *name() {
    return "CmdiEStart";
  }
};

// identifier #CmdiEmpty
template <typename SREFAL_PARAM_INT>
struct ident_CmdiEmpty {
  static const char *name() {
    return "CmdiEmpty";
  }
};

// identifier #CmdiEmptyResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdiEmptyResult {
  static const char *name() {
    return "CmdiEmptyResult";
  }
};

// identifier #CmdiFail
template <typename SREFAL_PARAM_INT>
struct ident_CmdiFail {
  static const char *name() {
    return "CmdiFail";
  }
};

// identifier #CmdiFuncArray
template <typename SREFAL_PARAM_INT>
struct ident_CmdiFuncArray {
  static const char *name() {
    return "CmdiFuncArray";
  }
};

// identifier #CmdiHugeNum
template <typename SREFAL_PARAM_INT>
struct ident_CmdiHugeNum {
  static const char *name() {
    return "CmdiHugeNum";
  }
};

// identifier #CmdiIdent
template <typename SREFAL_PARAM_INT>
struct ident_CmdiIdent {
  static const char *name() {
    return "CmdiIdent";
  }
};

// identifier #CmdiInitB0
template <typename SREFAL_PARAM_INT>
struct ident_CmdiInitB0 {
  static const char *name() {
    return "CmdiInitB0";
  }
};

// identifier #CmdiLabelArray
template <typename SREFAL_PARAM_INT>
struct ident_CmdiLabelArray {
  static const char *name() {
    return "CmdiLabelArray";
  }
};

// identifier #CmdiLinkBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CmdiLinkBrackets {
  static const char *name() {
    return "CmdiLinkBrackets";
  }
};

// identifier #CmdiName
template <typename SREFAL_PARAM_INT>
struct ident_CmdiName {
  static const char *name() {
    return "CmdiName";
  }
};

// identifier #CmdiNum
template <typename SREFAL_PARAM_INT>
struct ident_CmdiNum {
  static const char *name() {
    return "CmdiNum";
  }
};

// identifier #CmdiNumberArray
template <typename SREFAL_PARAM_INT>
struct ident_CmdiNumberArray {
  static const char *name() {
    return "CmdiNumberArray";
  }
};

// identifier #CmdiOnFailGoTo
template <typename SREFAL_PARAM_INT>
struct ident_CmdiOnFailGoTo {
  static const char *name() {
    return "CmdiOnFailGoTo";
  }
};

// identifier #CmdiPushStack
template <typename SREFAL_PARAM_INT>
struct ident_CmdiPushStack {
  static const char *name() {
    return "CmdiPushStack";
  }
};

// identifier #CmdiRepeat
template <typename SREFAL_PARAM_INT>
struct ident_CmdiRepeat {
  static const char *name() {
    return "CmdiRepeat";
  }
};

// identifier #CmdiReserveStack
template <typename SREFAL_PARAM_INT>
struct ident_CmdiReserveStack {
  static const char *name() {
    return "CmdiReserveStack";
  }
};

// identifier #CmdiReturnResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdiReturnResult {
  static const char *name() {
    return "CmdiReturnResult";
  }
};

// identifier #CmdiRunInterpret
template <typename SREFAL_PARAM_INT>
struct ident_CmdiRunInterpret {
  static const char *name() {
    return "CmdiRunInterpret";
  }
};

// identifier #CmdiSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdiSave {
  static const char *name() {
    return "CmdiSave";
  }
};

// identifier #CmdiStringArray
template <typename SREFAL_PARAM_INT>
struct ident_CmdiStringArray {
  static const char *name() {
    return "CmdiStringArray";
  }
};

// identifier #CmdiVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdiVar {
  static const char *name() {
    return "CmdiVar";
  }
};

// identifier #ElHugeNumber
template <typename SREFAL_PARAM_INT>
struct ident_ElHugeNumber {
  static const char *name() {
    return "ElHugeNumber";
  }
};

// identifier #ElIdent
template <typename SREFAL_PARAM_INT>
struct ident_ElIdent {
  static const char *name() {
    return "ElIdent";
  }
};

// identifier #ElName
template <typename SREFAL_PARAM_INT>
struct ident_ElName {
  static const char *name() {
    return "ElName";
  }
};

// identifier #ElNumber
template <typename SREFAL_PARAM_INT>
struct ident_ElNumber {
  static const char *name() {
    return "ElNumber";
  }
};

// identifier #ElString
template <typename SREFAL_PARAM_INT>
struct ident_ElString {
  static const char *name() {
    return "ElString";
  }
};

// identifier #Function
template <typename SREFAL_PARAM_INT>
struct ident_Function {
  static const char *name() {
    return "Function";
  }
};

// identifier #OnlyDirect
template <typename SREFAL_PARAM_INT>
struct ident_OnlyDirect {
  static const char *name() {
    return "OnlyDirect";
  }
};

// identifier #OnlyInterpret
template <typename SREFAL_PARAM_INT>
struct ident_OnlyInterpret {
  static const char *name() {
    return "OnlyInterpret";
  }
};

static refalrts::FnResult lambda_LowLevelRASL_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_LowLevelRASL_0/4 s.GenMode#1/10 (/7 # Function/9 s.ScopeClass#2/11 (/14 e.Name#2/12 )/15 e.Commands#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Function<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Name#2 as range 12
    // closed e.Commands#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_LowLevelRASL_0/4 s.GenMode#1/10 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & LowLevelRASL_Function/7 HalfReuse: s.GenMode1 #10/9 AsIs: s.ScopeClass#2/11 AsIs: (/14 AsIs: e.Name#2/12 AsIs: )/15 AsIs: e.Commands#2/5 HalfReuse: >/8 } Tile{ ]] }
    refalrts::reinit_name( context[7], LowLevelRASL_Function, "LowLevelRASL_Function" );
    refalrts::reinit_svar( context[9], context[10] );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_LowLevelRASL_0/4 s.GenMode#1/10 (/7 # CmdEnum/9 s.ScopeClass#2/11 e.Name#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdEnum<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_LowLevelRASL_0/4 s.GenMode#1/10 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdEnum/9 AsIs: s.ScopeClass#2/11 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_LowLevelRASL_0/4 s.GenMode#1/10 (/7 # CmdSwap/9 s.ScopeClass#2/11 e.Name#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdSwap<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_LowLevelRASL_0/4 s.GenMode#1/10 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdSwap/9 AsIs: s.ScopeClass#2/11 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_LowLevelRASL_0/4 s.GenMode#1/10 (/7 # CmdDeclaration/9 s.ScopeClass#2/11 e.Name#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdDeclaration<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_LowLevelRASL_0/4 s.GenMode#1/10 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdDeclaration/9 AsIs: s.ScopeClass#2/11 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_LowLevelRASL_0/4 s.GenMode#1/10 (/7 # CmdDefineIdent/9 e.Name#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdDefineIdent<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Name#2 as range 5
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_LowLevelRASL_0/4 s.GenMode#1/10 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdDefineIdent/9 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
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
  // </0 & lambda_LowLevelRASL_0/4 s.GenMode#1/10 (/7 # CmdSeparator/9 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_CmdSeparator<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_LowLevelRASL_0/4 s.GenMode#1/10 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdSeparator/9 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult LowLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & LowLevelRASL/4 s.GenMode#1/5 e.ProgramElements#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ProgramElements#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } </6 & CreateClosure /7 & lambda_LowLevelRASL_0/8 Tile{ AsIs: s.GenMode#1/5 } >/9 Tile{ AsIs: e.ProgramElements#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], lambda_LowLevelRASL_0, "lambda_LowLevelRASL_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Map, "Map" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult LowLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 63 elems
  refalrts::Iter context[63];
  refalrts::zeros( context, 63 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LowLevelRASL_Function/4 # Both/5 s.ScopeClass#1/6 (/9 e.Name#1/7 )/10 (/13 # CmdIssueMem/15 s.Number#1/16 )/14 e.Commands#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Both<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_CmdIssueMem<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Name#1 as range 7
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.ScopeClass#1/6 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 # CmdFnStart/18 Tile{ HalfReuse: s.ScopeClass1 #6/9 AsIs: e.Name#1/7 AsIs: )/10 AsIs: (/13 AsIs: # CmdIssueMem/15 AsIs: s.Number#1/16 AsIs: )/14 } (/19 # CmdIfDef/20 )/21 Tile{ AsIs: </0 Reuse: & PrepareOpenEStack/4 HalfReuse: </5 } & OutlineConstants/22 (/23 0/24 )/25 (/26 0/27 )/28 (/29 0/30 )/31 (/32 0/33 )/34 (/35 # CmdInitRAA/36 )/37 </38 & PrepareInterpretCommands/39 Tile{ AsIs: e.Commands#1/2 } >/40 (/41 # CmdFinRAA/42 )/43 >/44 0/45 >/46 (/47 # CmdiRunInterpret/48 )/49 (/50 # CmdElse/51 )/52 </53 & GenerateResult_Sentences/54 e.Commands#1/2/55 >/57 (/58 # CmdEndIf/59 )/60 (/61 # CmdFnEnd/62 Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_CmdFnStart<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[20], & ident_CmdIfDef<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[24], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[27], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[30], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[33], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[36], & ident_CmdInitRAA<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[39], PrepareInterpretCommands, "PrepareInterpretCommands" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[42], & ident_CmdFinRAA<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[43] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[44] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[45], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[46] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[47] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[48], & ident_CmdiRunInterpret<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[49] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[50] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[51], & ident_CmdElse<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[52] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[53] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[54], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[55], context[56], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[57] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[58] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[59], & ident_CmdEndIf<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[60] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[61] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[62], & ident_CmdFnEnd<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[9], context[6] );
    refalrts::update_name( context[4], PrepareOpenEStack, "PrepareOpenEStack" );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[61], context[1] );
    refalrts::link_brackets( context[58], context[60] );
    refalrts::push_stack( context[57] );
    refalrts::push_stack( context[53] );
    refalrts::link_brackets( context[50], context[52] );
    refalrts::link_brackets( context[47], context[49] );
    refalrts::push_stack( context[46] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[5] );
    refalrts::link_brackets( context[41], context[43] );
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[38] );
    refalrts::link_brackets( context[35], context[37] );
    refalrts::link_brackets( context[32], context[34] );
    refalrts::link_brackets( context[29], context[31] );
    refalrts::link_brackets( context[26], context[28] );
    refalrts::link_brackets( context[23], context[25] );
    refalrts::link_brackets( context[19], context[21] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[17], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[40], context[62] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[22], context[39] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[9], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LowLevelRASL_Function/4 # OnlyDirect/5 s.ScopeClass#1/6 (/9 e.Name#1/7 )/10 (/13 # CmdIssueMem/15 s.Number#1/16 )/14 e.Commands#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_OnlyDirect<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_CmdIssueMem<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Name#1 as range 7
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.ScopeClass#1/6 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdFnStart/4 } Tile{ HalfReuse: s.ScopeClass1 #6/9 AsIs: e.Name#1/7 AsIs: )/10 AsIs: (/13 AsIs: # CmdIssueMem/15 AsIs: s.Number#1/16 AsIs: )/14 } </17 & GenerateResult_Sentences/18 Tile{ AsIs: e.Commands#1/2 } >/19 (/20 Tile{ Reuse: # CmdFnEnd/5 } Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdFnStart<int>::name );
    refalrts::reinit_svar( context[9], context[6] );
    refalrts::update_ident( context[5], & ident_CmdFnEnd<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[20], context[1] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & LowLevelRASL_Function/4 # OnlyInterpret/5 s.ScopeClass#1/6 (/9 e.Name#1/7 )/10 (/13 # CmdIssueMem/15 s.Number#1/16 )/14 e.Commands#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_OnlyInterpret<int>::name, context[2], context[3] );
  if( ! context[5] )
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
  context[15] = refalrts::ident_left(  & ident_CmdIssueMem<int>::name, context[11], context[12] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 7
  // closed e.Commands#1 as range 2
  if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.ScopeClass#1/6 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/17 # CmdFnStart/18 Tile{ HalfReuse: s.ScopeClass1 #6/9 AsIs: e.Name#1/7 AsIs: )/10 AsIs: (/13 AsIs: # CmdIssueMem/15 AsIs: s.Number#1/16 AsIs: )/14 } Tile{ AsIs: </0 Reuse: & PrepareOpenEStack/4 HalfReuse: </5 } & OutlineConstants/19 (/20 0/21 )/22 (/23 0/24 )/25 (/26 0/27 )/28 (/29 0/30 )/31 (/32 # CmdInitRAA/33 )/34 </35 & PrepareInterpretCommands/36 Tile{ AsIs: e.Commands#1/2 } >/37 (/38 # CmdFinRAA/39 )/40 >/41 0/42 >/43 (/44 # CmdiRunInterpret/45 )/46 (/47 # CmdFnEnd/48 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[18], & ident_CmdFnStart<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], OutlineConstants, "OutlineConstants" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[21], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[24], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[27], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[30], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[33], & ident_CmdInitRAA<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[36], PrepareInterpretCommands, "PrepareInterpretCommands" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[39], & ident_CmdFinRAA<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[42], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[44] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[45], & ident_CmdiRunInterpret<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[48], & ident_CmdFnEnd<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[9], context[6] );
  refalrts::update_name( context[4], PrepareOpenEStack, "PrepareOpenEStack" );
  refalrts::reinit_open_call( context[5] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[47], context[1] );
  refalrts::link_brackets( context[44], context[46] );
  refalrts::push_stack( context[43] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[41] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[38], context[40] );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[35] );
  refalrts::link_brackets( context[32], context[34] );
  refalrts::link_brackets( context[29], context[31] );
  refalrts::link_brackets( context[26], context[28] );
  refalrts::link_brackets( context[23], context[25] );
  refalrts::link_brackets( context[20], context[22] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[17], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[37], context[48] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[36] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrepareInterpretCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrepareInterpretCommands/4 e.Commands#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Commands#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & Map/6 & ConvertInterpretCommand/7 Tile{ AsIs: </0 Reuse: & PrepareInterpretCommands_Linearize/4 AsIs: e.Commands#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ConvertInterpretCommand, "ConvertInterpretCommand" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_PrepareInterpretCommands_Linearize_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_PrepareInterpretCommands_Linearize_0/4 (/7 e.Tail#1/5 )/8 s.Length#2/9 e.SubCommands#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Tail#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SubCommands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Length#2/9 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdiOnFailGoTo/4 HalfReuse: s.Length2 #9/7 } Tile{ AsIs: )/8 } Tile{ AsIs: e.SubCommands#2/2 } </10 & PrepareInterpretCommands_Linearize/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_CmdiOnFailGoTo<int>::name );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[10] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrepareInterpretCommands_Linearize(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrepareInterpretCommands_Linearize/4 (/7 # CmdSentence/9 e.SubCommands#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdSentence<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.SubCommands#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </10 & Fetch/11 Tile{ AsIs: </0 Reuse: & Length_T/4 HalfReuse: </7 HalfReuse: & PrepareInterpretCommands_Linearize/9 AsIs: e.SubCommands#1/5 HalfReuse: >/8 } >/12 </13 & CreateClosure /14 & lambda_PrepareInterpretCommands_Linearize_0/15 (/16 Tile{ AsIs: e.Tail#1/2 } )/17 >/18 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], lambda_PrepareInterpretCommands_Linearize_0, "lambda_PrepareInterpretCommands_Linearize_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Length_T, "Length_T" );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrepareInterpretCommands_Linearize/4 (/7 # CmdOpenELoop/9 # AlgLeft/10 s.BracketNum#1/11 s.VarNumber#1/12 e.SubCommands#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdOpenELoop<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_AlgLeft<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    // closed e.SubCommands#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/13 # CmdiEPrepare/14 Tile{ HalfReuse: s.BracketNum1 #11/0 HalfReuse: s.VarNumber1 #12/4 HalfReuse: )/7 HalfReuse: (/9 Reuse: # CmdiEStart/10 AsIs: s.BracketNum#1/11 AsIs: s.VarNumber#1/12 } )/15 </16 & PrepareInterpretCommands_Linearize/17 Tile{ AsIs: e.SubCommands#1/5 } >/18 </19 Tile{ HalfReuse: & PrepareInterpretCommands_Linearize/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], & ident_CmdiEPrepare<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[0], context[11] );
    refalrts::reinit_svar( context[4], context[12] );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::update_ident( context[10], & ident_CmdiEStart<int>::name );
    refalrts::reinit_name( context[8], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[9], context[15] );
    refalrts::link_brackets( context[13], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrepareInterpretCommands_Linearize/4 t.Command#1/5 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Command#1/5 } Tile{ AsIs: </0 AsIs: & PrepareInterpretCommands_Linearize/4 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrepareInterpretCommands_Linearize/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & PrepareInterpretCommands_Linearize/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Length_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Length_T/4 e.Expr#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & DoLength/0 HalfReuse: 0/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], DoLength, "DoLength" );
  refalrts::reinit_number( context[4], 0UL );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult DoLength(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoLength/4 s.Count#1/10 e.Expr#1/2 (/7 # CmdComment/9 e.Text#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdComment<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Text#1 as range 5
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    // closed e.Expr#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoLength/4 AsIs: s.Count#1/10 AsIs: e.Expr#1/2 HalfReuse: >/7 HalfReuse: (/9 } Tile{ HalfReuse: # CmdComment/8 } Tile{ AsIs: e.Text#1/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_ident( context[8], & ident_CmdComment<int>::name );
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
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoLength/4 s.Count#1/5 e.Expr#1/2 t.Last#1/6 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[7] = refalrts::tvar_right( context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    // closed e.Expr#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoLength/4 } </8 & Inc/9 Tile{ AsIs: s.Count#1/5 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Expr#1/2 } >/10 Tile{ AsIs: t.Last#1/6 } Tile{ ]] }
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
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoLength/4 s.Count#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & DoLength/4 s.Count#1/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Count1 #5/0 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ConvertInterpretCommand_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ConvertInterpretCommand_0/4 s.Direction#1/6 s.BracketNumber#1/7 s.Number#1/8 '<'/5 >/1
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
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdiNum/4 AsIs: s.Direction#1/6 AsIs: s.BracketNumber#1/7 AsIs: s.Number#1/8 HalfReuse: )/5 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdiNum<int>::name );
    refalrts::reinit_close_bracket( context[5] );
    refalrts::link_brackets( context[0], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ConvertInterpretCommand_0/4 s.Direction#1/5 s.BracketNumber#1/6 s.Number#1/7 s.Other#2/8 >/1
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
  //TRASH: {REMOVED TILE}  s.Other#2/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdiHugeNum/4 AsIs: s.Direction#1/5 AsIs: s.BracketNumber#1/6 AsIs: s.Number#1/7 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_CmdiHugeNum<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ConvertInterpretCommand_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ConvertInterpretCommand_1/4 s.ElemNo#1/6 s.Number#1/7 '<'/5 >/1
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
    //TRASH: {REMOVED TILE}  s.Number#1/7 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdiAllocateElem/4 AsIs: s.ElemNo#1/6 } # ElNumber/8 Tile{ HalfReuse: s.Number1 #7/5 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_ident( context[8], & ident_ElNumber<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdiAllocateElem<int>::name );
    refalrts::reinit_svar( context[5], context[7] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ConvertInterpretCommand_1/4 s.ElemNo#1/5 s.Number#1/6 s.Other#2/7 >/1
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Other#2/7 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdiAllocateElem/4 AsIs: s.ElemNo#1/5 } # ElHugeNumber/8 Tile{ AsIs: s.Number#1/6 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_ident( context[8], & ident_ElHugeNumber<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_CmdiAllocateElem<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ConvertInterpretCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdBrackets/9 s.Direction#1/10 s.Num#1/11 s.NumRanges#1/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdBrackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiBracket/9 AsIs: s.Direction#1/10 AsIs: s.Num#1/11 AsIs: s.NumRanges#1/12 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdiBracket<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdNumber/9 s.Direction#1/10 s.BracketNumber#1/11 s.Number#1/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdNumber<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </13 & Fetch/14 </15 & Compare/16 s.Number#1/12/17 256/18 Tile{ HalfReuse: >/0 HalfReuse: </4 HalfReuse: & CreateClosure /7 HalfReuse: & lambda_ConvertInterpretCommand_0/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 AsIs: s.Number#1/12 HalfReuse: >/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], Compare, "Compare" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[17], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[18], 256UL ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::reinit_name( context[9], lambda_ConvertInterpretCommand_0, "lambda_ConvertInterpretCommand_0" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[13], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdIdent/9 s.Direction#1/10 s.BracketNumber#1/11 e.Name#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdIdent<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiIdent/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdiIdent<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdSave/9 s.OldBracketNumber#1/10 s.NewBracketNumber#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdSave<int>::name, context[5], context[6] );
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
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiSave/9 AsIs: s.OldBracketNumber#1/10 AsIs: s.NewBracketNumber#1/11 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdiSave<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdiEPrepare/9 s.BracketNum#1/10 s.VarNumber#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdiEPrepare<int>::name, context[5], context[6] );
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
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdiEPrepare/9 AsIs: s.BracketNum#1/10 AsIs: s.VarNumber#1/11 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdiEStart/9 s.BracketNum#1/10 s.VarNumber#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdiEStart<int>::name, context[5], context[6] );
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
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdiEStart/9 AsIs: s.BracketNum#1/10 AsIs: s.VarNumber#1/11 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdChar/9 s.Direction#1/10 s.BracketNumber#1/11 s.Char#1/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdChar<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiChar/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 AsIs: s.Char#1/12 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdiChar<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdName/9 s.Direction#1/10 s.BracketNumber#1/11 e.Name#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdName<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiName/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdiName<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdADT/9 s.Direction#1/10 s.BracketNumber#1/11 s.InnerBrackets#1/12 e.Name#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdADT<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiADT/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 AsIs: s.InnerBrackets#1/12 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdiADT<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdRepeated/9 s.Direction#1/10 s.BracketNumber#1/11 s.Mode#1/12 s.VarNum#1/13 s.SampleNum#1/14 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdRepeated<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiRepeat/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 AsIs: s.Mode#1/12 AsIs: s.VarNum#1/13 AsIs: s.SampleNum#1/14 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdiRepeat<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdEmpty/9 # AlgLeft/10 s.BracketNumber#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdEmpty<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_AlgLeft<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 (/7 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 Reuse: # CmdiEmpty/10 AsIs: s.BracketNumber#1/11 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[9] );
    refalrts::update_ident( context[10], & ident_CmdiEmpty<int>::name );
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
    // </0 & ConvertInterpretCommand/4 (/7 # CmdVar/9 s.Direction#1/10 s.BracketNumber#1/11 s.Mode#1/12 s.VarNumber#1/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdVar<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiVar/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 AsIs: s.Mode#1/12 AsIs: s.VarNumber#1/13 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdiVar<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdComment/9 e.Text#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdComment<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdComment/9 AsIs: e.Text#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdEmptyResult/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdEmptyResult<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiEmptyResult/9 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdiEmptyResult<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdAllocateElem/9 s.ElemNo#1/10 # ElNumber/11 s.Number#1/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdAllocateElem<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    context[11] = refalrts::ident_left(  & ident_ElNumber<int>::name, context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.ElemNo#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 HalfReuse: & Compare/9 } s.Number#1/12/13 256/14 >/15 </16 & CreateClosure /17 & lambda_ConvertInterpretCommand_1/18 Tile{ HalfReuse: s.ElemNo1 #10/11 AsIs: s.Number#1/12 HalfReuse: >/8 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[13], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[14], 256UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], lambda_ConvertInterpretCommand_1, "lambda_ConvertInterpretCommand_1" ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], Compare, "Compare" );
    refalrts::reinit_svar( context[11], context[10] );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[13], context[18] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdAllocateElem/9 s.ElemNo#1/10 s.Type#1/11 e.Info#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdAllocateElem<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    // closed e.Info#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiAllocateElem/9 AsIs: s.ElemNo#1/10 AsIs: s.Type#1/11 AsIs: e.Info#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdiAllocateElem<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdInsertElem/9 s.ElemNo#1/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdSpliceElem/9 AsIs: s.ElemNo#1/10 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdSpliceElem<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdInsertRange/9 s.ElemNo#1/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdInsertRange<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdSpliceRange/9 AsIs: s.ElemNo#1/10 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdSpliceRange<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdInsertVar/9 s.Mode#1/10 s.Number#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdInsertVar<int>::name, context[5], context[6] );
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
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdArrSplice/9 AsIs: s.Mode#1/10 AsIs: s.Number#1/11 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdArrSplice<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdLinkBrackets/9 s.Left#1/10 s.Right#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdLinkBrackets<int>::name, context[5], context[6] );
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
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiLinkBrackets/9 AsIs: s.Left#1/10 AsIs: s.Right#1/11 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdiLinkBrackets<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdPushStack/9 s.ElemNo#1/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdPushStack<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiPushStack/9 AsIs: s.ElemNo#1/10 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdiPushStack<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdCopyVar/9 s.Mode#1/10 s.Number#1/11 s.Sample#1/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdCopyVar<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdArrCopy/9 AsIs: s.Mode#1/10 AsIs: s.Number#1/11 AsIs: s.Sample#1/12 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdArrCopy<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdiOnFailGoTo/9 s.Offset#1/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdiOnFailGoTo<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdiOnFailGoTo/9 AsIs: s.Offset#1/10 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdFail/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdFail<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiFail/9 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdiFail<int>::name );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ConvertInterpretCommand/4 (/7 # CmdReturnResult/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdReturnResult<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiReturnResult/9 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdiReturnResult<int>::name );
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
  // </0 & ConvertInterpretCommand/4 (/7 # CmdInitB0/9 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_CmdInitB0<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ConvertInterpretCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdiInitB0/9 AsIs: )/8 } Tile{ ]] }
  refalrts::update_ident( context[9], & ident_CmdiInitB0<int>::name );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult RemoveNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & RemoveNumber/4 (/7 s.Number#1/9 e.Name#1/5 )/8 >/1
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
  // closed e.Name#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & RemoveNumber/4 (/7 s.Number#1/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_OutlineConstants_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_OutlineConstants_0/4 (/7 s.Id#2/9 s.Value#2/10 )/8 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_OutlineConstants_0/4 (/7 s.Id#2/9 s.Value#2/10 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Value2 #10/0 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult OutlineConstants(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/21 e.Funcs#1/5 )/8 (/11 s.NextLabel#1/22 e.Labels#1/9 )/12 (/15 s.NextNumber#1/23 e.Numbers#1/13 )/16 (/19 s.NextString#1/24 e.Strings#1/17 )/20 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[21], context[5], context[6] ) )
      continue;
    // closed e.Funcs#1 as range 5
    if( ! refalrts::svar_left( context[22], context[9], context[10] ) )
      continue;
    // closed e.Labels#1 as range 9
    if( ! refalrts::svar_left( context[23], context[13], context[14] ) )
      continue;
    // closed e.Numbers#1 as range 13
    if( ! refalrts::svar_left( context[24], context[17], context[18] ) )
      continue;
    // closed e.Strings#1 as range 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.NextFunc#1/21 {REMOVED TILE}  {REMOVED TILE}  s.NextLabel#1/22 {REMOVED TILE}  {REMOVED TILE}  s.NextNumber#1/23 {REMOVED TILE}  {REMOVED TILE}  s.NextString#1/24 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdiFuncArray/4 HalfReuse: </7 } & Map/25 & RemoveNumber/26 Tile{ AsIs: e.Funcs#1/5 } >/27 Tile{ AsIs: )/8 AsIs: (/11 } # CmdiLabelArray/28 </29 & Map/30 & RemoveNumber/31 Tile{ AsIs: e.Labels#1/9 } >/32 Tile{ AsIs: )/12 AsIs: (/15 } # CmdiNumberArray/33 </34 & Map/35 & lambda_OutlineConstants_0/36 Tile{ AsIs: e.Numbers#1/13 } >/37 Tile{ AsIs: )/16 AsIs: (/19 } # CmdiStringArray/38 </39 & Map/40 & RemoveNumber/41 Tile{ AsIs: e.Strings#1/17 } Tile{ HalfReuse: >/20 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_name( context[25], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], RemoveNumber, "RemoveNumber" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], & ident_CmdiLabelArray<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], RemoveNumber, "RemoveNumber" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], & ident_CmdiNumberArray<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[36], lambda_OutlineConstants_0, "lambda_OutlineConstants_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[38], & ident_CmdiStringArray<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[40], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[41], RemoveNumber, "RemoveNumber" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdiFuncArray<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_close_call( context[20] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[39] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[34] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[38], context[41] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[33], context[36] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/26 e.Funcs_B#1/29 (/33 s.Num#1/37 e.Func#1/35 )/34 e.Funcs_E#1/38 )/8 (/11 e.Labels#1/9 )/12 (/15 e.Numbers#1/13 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiName/25 s.Direction#1/27 s.BracketNum#1/28 e.Func#1/21 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiName<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Labels#1 as range 9
    // closed e.Numbers#1 as range 13
    // closed e.Strings#1 as range 17
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[21], context[22] ) )
      continue;
    // closed e.Func#1 as range 21
    context[29] = 0;
    context[30] = 0;
    refalrts::start_e_loop();
    do {
      context[38] = context[5];
      context[39] = context[6];
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[38], context[39] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      if( ! refalrts::repeated_evar_right( context[35], context[36], context[21], context[22], context[31], context[32] ) )
        continue;
      // closed e.Funcs_E#1 as range 5
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Func#1/21 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: s.NextFunc#1/26 AsIs: e.Funcs_B#1/29 AsIs: (/33 AsIs: s.Num#1/37 AsIs: e.Func#1/35 AsIs: )/34 AsIs: e.Funcs_E#1/38 AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Numbers#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiName/40 Tile{ AsIs: s.Direction#1/27 AsIs: s.BracketNum#1/28 } Tile{ HalfReuse: s.Num1 #37/24 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[40], & ident_CmdiName<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[23] );
      refalrts::reinit_open_bracket( context[25] );
      refalrts::reinit_svar( context[24], context[37] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[25], context[1] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[25], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[29], context[30], context[5], context[6] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/26 e.Funcs#1/5 )/8 (/11 e.Labels#1/9 )/12 (/15 e.Numbers#1/13 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiName/25 s.Direction#1/27 s.BracketNum#1/28 e.Func#1/21 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiName<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Labels#1 as range 9
    // closed e.Numbers#1 as range 13
    // closed e.Strings#1 as range 17
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[5], context[6] ) )
      continue;
    // closed e.Funcs#1 as range 5
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[21], context[22] ) )
      continue;
    // closed e.Func#1 as range 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 } </29 & Inc/30 Tile{ AsIs: s.NextFunc#1/26 } >/31 Tile{ AsIs: e.Funcs#1/5 } (/32 s.NextFunc#1/26/33 Tile{ AsIs: e.Func#1/21 } )/34 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Numbers#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiName/35 Tile{ AsIs: s.Direction#1/27 AsIs: s.BracketNum#1/28 } Tile{ HalfReuse: s.NextFunc1 #26/24 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[33], context[26]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[35], & ident_CmdiName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[23] );
    refalrts::reinit_open_bracket( context[25] );
    refalrts::reinit_svar( context[24], context[26] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[25], context[1] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[32], context[34] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[29] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[8], context[25] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/26 e.Funcs_B#1/29 (/33 s.Num#1/37 e.Func#1/35 )/34 e.Funcs_E#1/38 )/8 (/11 e.Labels#1/9 )/12 (/15 e.Numbers#1/13 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiAllocateElem/25 s.ElemNo#1/27 # ElName/28 e.Func#1/21 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Labels#1 as range 9
    // closed e.Numbers#1 as range 13
    // closed e.Strings#1 as range 17
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    context[28] = refalrts::ident_left(  & ident_ElName<int>::name, context[21], context[22] );
    if( ! context[28] )
      continue;
    // closed e.Func#1 as range 21
    context[29] = 0;
    context[30] = 0;
    refalrts::start_e_loop();
    do {
      context[38] = context[5];
      context[39] = context[6];
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[38], context[39] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      if( ! refalrts::repeated_evar_right( context[35], context[36], context[21], context[22], context[31], context[32] ) )
        continue;
      // closed e.Funcs_E#1 as range 5
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Func#1/21 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: s.NextFunc#1/26 AsIs: e.Funcs_B#1/29 AsIs: (/33 AsIs: s.Num#1/37 AsIs: e.Func#1/35 AsIs: )/34 AsIs: e.Funcs_E#1/38 AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Numbers#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiAllocateElem/40 Tile{ AsIs: s.ElemNo#1/27 AsIs: # ElName/28 } Tile{ HalfReuse: s.Num1 #37/24 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[40], & ident_CmdiAllocateElem<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[23] );
      refalrts::reinit_open_bracket( context[25] );
      refalrts::reinit_svar( context[24], context[37] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[25], context[1] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[25], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[29], context[30], context[5], context[6] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/26 e.Funcs#1/5 )/8 (/11 e.Labels#1/9 )/12 (/15 e.Numbers#1/13 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiAllocateElem/25 s.ElemNo#1/27 # ElName/28 e.Func#1/21 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Labels#1 as range 9
    // closed e.Numbers#1 as range 13
    // closed e.Strings#1 as range 17
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[5], context[6] ) )
      continue;
    // closed e.Funcs#1 as range 5
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    context[28] = refalrts::ident_left(  & ident_ElName<int>::name, context[21], context[22] );
    if( ! context[28] )
      continue;
    // closed e.Func#1 as range 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 } </29 & Inc/30 Tile{ AsIs: s.NextFunc#1/26 } >/31 Tile{ AsIs: e.Funcs#1/5 } (/32 Tile{ HalfReuse: s.NextFunc1 #26/28 AsIs: e.Func#1/21 AsIs: )/24 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Numbers#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiAllocateElem/33 Tile{ AsIs: s.ElemNo#1/27 } # ElName/34 s.NextFunc#1/26/35 Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], & ident_ElName<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[35], context[26]))
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[28], context[26] );
    refalrts::reinit_close_call( context[23] );
    refalrts::reinit_open_bracket( context[25] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[25], context[1] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[32], context[24] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[29] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[8], context[25] );
    res = refalrts::splice_evar( res, context[28], context[24] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/26 e.Funcs_B#1/30 (/34 s.Num#1/38 e.Func#1/36 )/35 e.Funcs_E#1/39 )/8 (/11 e.Labels#1/9 )/12 (/15 e.Numbers#1/13 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiADT/25 s.Direction#1/27 s.BracketNum#1/28 s.InnerBrackets#1/29 e.Func#1/21 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiADT<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Labels#1 as range 9
    // closed e.Numbers#1 as range 13
    // closed e.Strings#1 as range 17
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[21], context[22] ) )
      continue;
    // closed e.Func#1 as range 21
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop();
    do {
      context[39] = context[5];
      context[40] = context[6];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[39], context[40] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      if( ! refalrts::repeated_evar_right( context[36], context[37], context[21], context[22], context[32], context[33] ) )
        continue;
      // closed e.Funcs_E#1 as range 5
      if( ! refalrts::svar_left( context[38], context[32], context[33] ) )
        continue;
      if( ! refalrts::empty_seq( context[32], context[33] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Func#1/21 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: s.NextFunc#1/26 AsIs: e.Funcs_B#1/30 AsIs: (/34 AsIs: s.Num#1/38 AsIs: e.Func#1/36 AsIs: )/35 AsIs: e.Funcs_E#1/39 AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Numbers#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiADT/41 Tile{ AsIs: s.Direction#1/27 AsIs: s.BracketNum#1/28 AsIs: s.InnerBrackets#1/29 } Tile{ HalfReuse: s.Num1 #38/24 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[41], & ident_CmdiADT<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[23] );
      refalrts::reinit_open_bracket( context[25] );
      refalrts::reinit_svar( context[24], context[38] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[25], context[1] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[34], context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[27], context[29] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[25], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[30], context[31], context[5], context[6] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/26 e.Funcs#1/5 )/8 (/11 e.Labels#1/9 )/12 (/15 e.Numbers#1/13 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiADT/25 s.Direction#1/27 s.BracketNum#1/28 s.InnerBrackets#1/29 e.Func#1/21 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiADT<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Labels#1 as range 9
    // closed e.Numbers#1 as range 13
    // closed e.Strings#1 as range 17
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[5], context[6] ) )
      continue;
    // closed e.Funcs#1 as range 5
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[21], context[22] ) )
      continue;
    // closed e.Func#1 as range 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 } </30 & Inc/31 Tile{ AsIs: s.NextFunc#1/26 } >/32 Tile{ AsIs: e.Funcs#1/5 } (/33 s.NextFunc#1/26/34 Tile{ AsIs: e.Func#1/21 } )/35 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Numbers#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiADT/36 Tile{ AsIs: s.Direction#1/27 AsIs: s.BracketNum#1/28 AsIs: s.InnerBrackets#1/29 } Tile{ HalfReuse: s.NextFunc1 #26/24 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[26]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[36], & ident_CmdiADT<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[23] );
    refalrts::reinit_open_bracket( context[25] );
    refalrts::reinit_svar( context[24], context[26] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[25], context[1] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[33], context[35] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[8], context[25] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/5 )/8 (/11 s.NextLabel#1/26 e.Labels_B#1/29 (/33 s.Num#1/37 e.Label#1/35 )/34 e.Labels_E#1/38 )/12 (/15 e.Numbers#1/13 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiIdent/25 s.Direction#1/27 s.BracketNum#1/28 e.Label#1/21 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiIdent<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Funcs#1 as range 5
    // closed e.Numbers#1 as range 13
    // closed e.Strings#1 as range 17
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[21], context[22] ) )
      continue;
    // closed e.Label#1 as range 21
    context[29] = 0;
    context[30] = 0;
    refalrts::start_e_loop();
    do {
      context[38] = context[9];
      context[39] = context[10];
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[38], context[39] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      if( ! refalrts::repeated_evar_right( context[35], context[36], context[21], context[22], context[31], context[32] ) )
        continue;
      // closed e.Labels_E#1 as range 9
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Label#1/21 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/5 AsIs: )/8 AsIs: (/11 AsIs: s.NextLabel#1/26 AsIs: e.Labels_B#1/29 AsIs: (/33 AsIs: s.Num#1/37 AsIs: e.Label#1/35 AsIs: )/34 AsIs: e.Labels_E#1/38 AsIs: )/12 AsIs: (/15 AsIs: e.Numbers#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiIdent/40 Tile{ AsIs: s.Direction#1/27 AsIs: s.BracketNum#1/28 } Tile{ HalfReuse: s.Num1 #37/24 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[40], & ident_CmdiIdent<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[23] );
      refalrts::reinit_open_bracket( context[25] );
      refalrts::reinit_svar( context[24], context[37] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[25], context[1] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[25], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[29], context[30], context[9], context[10] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/5 )/8 (/11 s.NextLabel#1/26 e.Labels#1/9 )/12 (/15 e.Numbers#1/13 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiIdent/25 s.Direction#1/27 s.BracketNum#1/28 e.Label#1/21 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiIdent<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Funcs#1 as range 5
    // closed e.Numbers#1 as range 13
    // closed e.Strings#1 as range 17
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[9], context[10] ) )
      continue;
    // closed e.Labels#1 as range 9
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[21], context[22] ) )
      continue;
    // closed e.Label#1 as range 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/5 AsIs: )/8 AsIs: (/11 } </29 & Inc/30 Tile{ AsIs: s.NextLabel#1/26 } >/31 Tile{ AsIs: e.Labels#1/9 } (/32 s.NextLabel#1/26/33 Tile{ AsIs: e.Label#1/21 } )/34 Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Numbers#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiIdent/35 Tile{ AsIs: s.Direction#1/27 AsIs: s.BracketNum#1/28 } Tile{ HalfReuse: s.NextLabel1 #26/24 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[33], context[26]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[35], & ident_CmdiIdent<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[23] );
    refalrts::reinit_open_bracket( context[25] );
    refalrts::reinit_svar( context[24], context[26] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[25], context[1] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[32], context[34] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[12], context[25] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/5 )/8 (/11 s.NextLabel#1/26 e.Labels_B#1/29 (/33 s.Num#1/37 e.Label#1/35 )/34 e.Labels_E#1/38 )/12 (/15 e.Numbers#1/13 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiAllocateElem/25 s.ElemNo#1/27 # ElIdent/28 e.Label#1/21 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Funcs#1 as range 5
    // closed e.Numbers#1 as range 13
    // closed e.Strings#1 as range 17
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    context[28] = refalrts::ident_left(  & ident_ElIdent<int>::name, context[21], context[22] );
    if( ! context[28] )
      continue;
    // closed e.Label#1 as range 21
    context[29] = 0;
    context[30] = 0;
    refalrts::start_e_loop();
    do {
      context[38] = context[9];
      context[39] = context[10];
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[38], context[39] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      if( ! refalrts::repeated_evar_right( context[35], context[36], context[21], context[22], context[31], context[32] ) )
        continue;
      // closed e.Labels_E#1 as range 9
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Label#1/21 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/5 AsIs: )/8 AsIs: (/11 AsIs: s.NextLabel#1/26 AsIs: e.Labels_B#1/29 AsIs: (/33 AsIs: s.Num#1/37 AsIs: e.Label#1/35 AsIs: )/34 AsIs: e.Labels_E#1/38 AsIs: )/12 AsIs: (/15 AsIs: e.Numbers#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiAllocateElem/40 Tile{ AsIs: s.ElemNo#1/27 AsIs: # ElIdent/28 } Tile{ HalfReuse: s.Num1 #37/24 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[40], & ident_CmdiAllocateElem<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[23] );
      refalrts::reinit_open_bracket( context[25] );
      refalrts::reinit_svar( context[24], context[37] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[25], context[1] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[25], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[29], context[30], context[9], context[10] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/5 )/8 (/11 s.NextLabel#1/26 e.Labels#1/9 )/12 (/15 e.Numbers#1/13 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiAllocateElem/25 s.ElemNo#1/27 # ElIdent/28 e.Label#1/21 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Funcs#1 as range 5
    // closed e.Numbers#1 as range 13
    // closed e.Strings#1 as range 17
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[9], context[10] ) )
      continue;
    // closed e.Labels#1 as range 9
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    context[28] = refalrts::ident_left(  & ident_ElIdent<int>::name, context[21], context[22] );
    if( ! context[28] )
      continue;
    // closed e.Label#1 as range 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/5 AsIs: )/8 AsIs: (/11 } </29 & Inc/30 Tile{ AsIs: s.NextLabel#1/26 } >/31 Tile{ AsIs: e.Labels#1/9 } (/32 Tile{ HalfReuse: s.NextLabel1 #26/28 AsIs: e.Label#1/21 AsIs: )/24 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Numbers#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiAllocateElem/33 Tile{ AsIs: s.ElemNo#1/27 } # ElIdent/34 s.NextLabel#1/26/35 Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], & ident_ElIdent<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[35], context[26]))
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[28], context[26] );
    refalrts::reinit_close_call( context[23] );
    refalrts::reinit_open_bracket( context[25] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[25], context[1] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[32], context[24] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[12], context[25] );
    res = refalrts::splice_evar( res, context[28], context[24] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/5 )/8 (/11 e.Labels#1/9 )/12 (/15 s.NextNumId#1/26 e.Numbers_B#1/30 (/34 s.Id#1/37 s.Number#1/36 )/35 e.Numbers_E#1/38 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiHugeNum/25 s.Direction#1/27 s.BracketNum#1/28 s.Number#1/29 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiHugeNum<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Funcs#1 as range 5
    // closed e.Labels#1 as range 9
    // closed e.Strings#1 as range 17
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[21], context[22] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop();
    do {
      context[38] = context[13];
      context[39] = context[14];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[38], context[39] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      if( ! refalrts::repeated_stvar_right( context[36], context[29], context[32], context[33] ) )
        continue;
      // closed e.Numbers_E#1 as range 13
      if( ! refalrts::svar_left( context[37], context[32], context[33] ) )
        continue;
      if( ! refalrts::empty_seq( context[32], context[33] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Number#1/29 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 AsIs: (/15 AsIs: s.NextNumId#1/26 AsIs: e.Numbers_B#1/30 AsIs: (/34 AsIs: s.Id#1/37 AsIs: s.Number#1/36 AsIs: )/35 AsIs: e.Numbers_E#1/38 AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiHugeNum/40 Tile{ AsIs: s.Direction#1/27 AsIs: s.BracketNum#1/28 } Tile{ HalfReuse: s.Id1 #37/24 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[40], & ident_CmdiHugeNum<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[23] );
      refalrts::reinit_open_bracket( context[25] );
      refalrts::reinit_svar( context[24], context[37] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[25], context[1] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[34], context[35] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[25], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[30], context[31], context[13], context[14] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/5 )/8 (/11 e.Labels#1/9 )/12 (/15 s.NextNumId#1/26 e.Numbers#1/13 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiHugeNum/25 s.Direction#1/27 s.BracketNum#1/28 s.Number#1/29 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiHugeNum<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Funcs#1 as range 5
    // closed e.Labels#1 as range 9
    // closed e.Strings#1 as range 17
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[13], context[14] ) )
      continue;
    // closed e.Numbers#1 as range 13
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[21], context[22] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 AsIs: (/15 } </30 & Inc/31 Tile{ AsIs: s.NextNumId#1/26 } >/32 Tile{ AsIs: e.Numbers#1/13 } (/33 s.NextNumId#1/26/34 Tile{ AsIs: s.Number#1/29 AsIs: )/24 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiHugeNum/35 Tile{ AsIs: s.Direction#1/27 AsIs: s.BracketNum#1/28 } s.NextNumId#1/26/36 Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[26]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[35], & ident_CmdiHugeNum<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[26]))
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[23] );
    refalrts::reinit_open_bracket( context[25] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[25], context[1] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[33], context[24] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[16], context[25] );
    res = refalrts::splice_evar( res, context[29], context[24] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/5 )/8 (/11 e.Labels#1/9 )/12 (/15 s.NextNumId#1/26 e.Numbers_B#1/30 (/34 s.Id#1/37 s.Number#1/36 )/35 e.Numbers_E#1/38 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiAllocateElem/25 s.ElemNo#1/27 # ElHugeNumber/28 s.Number#1/29 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Funcs#1 as range 5
    // closed e.Labels#1 as range 9
    // closed e.Strings#1 as range 17
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    context[28] = refalrts::ident_left(  & ident_ElHugeNumber<int>::name, context[21], context[22] );
    if( ! context[28] )
      continue;
    if( ! refalrts::svar_left( context[29], context[21], context[22] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop();
    do {
      context[38] = context[13];
      context[39] = context[14];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[38], context[39] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      if( ! refalrts::repeated_stvar_right( context[36], context[29], context[32], context[33] ) )
        continue;
      // closed e.Numbers_E#1 as range 13
      if( ! refalrts::svar_left( context[37], context[32], context[33] ) )
        continue;
      if( ! refalrts::empty_seq( context[32], context[33] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Number#1/29 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 AsIs: (/15 AsIs: s.NextNumId#1/26 AsIs: e.Numbers_B#1/30 AsIs: (/34 AsIs: s.Id#1/37 AsIs: s.Number#1/36 AsIs: )/35 AsIs: e.Numbers_E#1/38 AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiAllocateElem/40 Tile{ AsIs: s.ElemNo#1/27 AsIs: # ElHugeNumber/28 } Tile{ HalfReuse: s.Id1 #37/24 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[40], & ident_CmdiAllocateElem<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[23] );
      refalrts::reinit_open_bracket( context[25] );
      refalrts::reinit_svar( context[24], context[37] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[25], context[1] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[34], context[35] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[25], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[30], context[31], context[13], context[14] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/5 )/8 (/11 e.Labels#1/9 )/12 (/15 s.NextNumId#1/26 e.Numbers#1/13 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiAllocateElem/25 s.ElemNo#1/27 # ElHugeNumber/28 s.Number#1/29 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Funcs#1 as range 5
    // closed e.Labels#1 as range 9
    // closed e.Strings#1 as range 17
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[13], context[14] ) )
      continue;
    // closed e.Numbers#1 as range 13
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    context[28] = refalrts::ident_left(  & ident_ElHugeNumber<int>::name, context[21], context[22] );
    if( ! context[28] )
      continue;
    if( ! refalrts::svar_left( context[29], context[21], context[22] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 AsIs: (/15 } </30 & Inc/31 Tile{ AsIs: s.NextNumId#1/26 } >/32 Tile{ AsIs: e.Numbers#1/13 } (/33 Tile{ HalfReuse: s.NextNumId1 #26/28 AsIs: s.Number#1/29 AsIs: )/24 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiAllocateElem/34 Tile{ AsIs: s.ElemNo#1/27 } # ElHugeNumber/35 s.NextNumId#1/26/36 Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[35], & ident_ElHugeNumber<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[26]))
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[28], context[26] );
    refalrts::reinit_close_call( context[23] );
    refalrts::reinit_open_bracket( context[25] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[25], context[1] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[33], context[24] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[16], context[25] );
    res = refalrts::splice_evar( res, context[28], context[24] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/5 )/8 (/11 e.Labels#1/9 )/12 (/15 e.Numbers#1/13 )/16 (/19 s.NextStringId#1/26 e.Strings_B#1/29 (/33 s.Id#1/37 e.String#1/35 )/34 e.Strings_E#1/38 )/20 e.Commands#1/2 (/23 # CmdiAllocateElem/25 s.ElemNo#1/27 # ElString/28 e.String#1/21 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Funcs#1 as range 5
    // closed e.Labels#1 as range 9
    // closed e.Numbers#1 as range 13
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    context[28] = refalrts::ident_left(  & ident_ElString<int>::name, context[21], context[22] );
    if( ! context[28] )
      continue;
    // closed e.String#1 as range 21
    context[29] = 0;
    context[30] = 0;
    refalrts::start_e_loop();
    do {
      context[38] = context[17];
      context[39] = context[18];
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[38], context[39] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      if( ! refalrts::repeated_evar_right( context[35], context[36], context[21], context[22], context[31], context[32] ) )
        continue;
      // closed e.Strings_E#1 as range 17
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.String#1/21 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Numbers#1/13 AsIs: )/16 AsIs: (/19 AsIs: s.NextStringId#1/26 AsIs: e.Strings_B#1/29 AsIs: (/33 AsIs: s.Id#1/37 AsIs: e.String#1/35 AsIs: )/34 AsIs: e.Strings_E#1/38 AsIs: )/20 AsIs: e.Commands#1/2 HalfReuse: >/23 HalfReuse: (/25 } # CmdiAllocateElem/40 Tile{ AsIs: s.ElemNo#1/27 AsIs: # ElString/28 } Tile{ HalfReuse: s.Id1 #37/24 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[40], & ident_CmdiAllocateElem<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[23] );
      refalrts::reinit_open_bracket( context[25] );
      refalrts::reinit_svar( context[24], context[37] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[25], context[1] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[25], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[29], context[30], context[17], context[18] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/5 )/8 (/11 e.Labels#1/9 )/12 (/15 e.Numbers#1/13 )/16 (/19 s.NextStringId#1/26 e.Strings#1/17 )/20 e.Commands#1/2 (/23 # CmdiAllocateElem/25 s.ElemNo#1/27 # ElString/28 e.String#1/21 )/24 >/1
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
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Funcs#1 as range 5
    // closed e.Labels#1 as range 9
    // closed e.Numbers#1 as range 13
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[26], context[17], context[18] ) )
      continue;
    // closed e.Strings#1 as range 17
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    context[28] = refalrts::ident_left(  & ident_ElString<int>::name, context[21], context[22] );
    if( ! context[28] )
      continue;
    // closed e.String#1 as range 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Numbers#1/13 AsIs: )/16 AsIs: (/19 } </29 & Inc/30 Tile{ AsIs: s.NextStringId#1/26 } >/31 Tile{ AsIs: e.Strings#1/17 } (/32 s.NextStringId#1/26/33 Tile{ AsIs: e.String#1/21 } Tile{ AsIs: )/20 } )/34 Tile{ AsIs: e.Commands#1/2 } >/35 Tile{ AsIs: (/23 AsIs: # CmdiAllocateElem/25 AsIs: s.ElemNo#1/27 AsIs: # ElString/28 } Tile{ HalfReuse: s.NextStringId1 #26/24 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[33], context[26]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[24], context[26] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[23], context[1] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[34] );
    refalrts::link_brackets( context[32], context[20] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[23], context[28] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & OutlineConstants/4 (/7 e.Funcs#1/5 )/8 (/11 e.Labels#1/9 )/12 (/15 e.Numbers#1/13 )/16 (/19 e.Strings#1/17 )/20 e.Commands#1/2 t.OtherCommand#1/21 >/1
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
  // closed e.Funcs#1 as range 5
  // closed e.Labels#1 as range 9
  // closed e.Numbers#1 as range 13
  // closed e.Strings#1 as range 17
  context[22] = refalrts::tvar_right( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Numbers#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Strings#1/17 AsIs: )/20 } Tile{ AsIs: e.Commands#1/2 } Tile{ AsIs: >/1 } Tile{ AsIs: t.OtherCommand#1/21 } Tile{ ]] }
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrepareOpenEStack(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrepareOpenEStack/4 (/7 # CmdiEStart/9 e.VarInfo#1/5 )/8 e.Commands#1/2 s.Depth#1/10 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdiEStart<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.VarInfo#1 as range 5
    if( ! refalrts::svar_right( context[10], context[2], context[3] ) )
      continue;
    // closed e.Commands#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdiEStart/9 AsIs: e.VarInfo#1/5 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & PrepareOpenEStack/4 } Tile{ AsIs: e.Commands#1/2 } </11 & Inc/12 Tile{ AsIs: s.Depth#1/10 AsIs: >/1 } >/13 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[11], context[12] );
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
    // </0 & PrepareOpenEStack/4 (/7 # CmdiOnFailGoTo/9 s.Offset#1/10 )/8 e.Commands#1/2 s.Depth#1/11 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdiOnFailGoTo<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[2], context[3] ) )
      continue;
    // closed e.Commands#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdiOnFailGoTo/9 AsIs: s.Offset#1/10 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & PrepareOpenEStack/4 } Tile{ AsIs: e.Commands#1/2 } </12 & Inc/13 Tile{ AsIs: s.Depth#1/11 AsIs: >/1 } >/14 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[12], context[13] );
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
    // </0 & PrepareOpenEStack/4 t.OtherCommand#1/5 e.Commands#1/2 s.Depth#1/7 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
      continue;
    // closed e.Commands#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherCommand#1/5 } Tile{ AsIs: </0 AsIs: & PrepareOpenEStack/4 } Tile{ AsIs: e.Commands#1/2 } Tile{ AsIs: s.Depth#1/7 AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrepareOpenEStack/4 s.Depth#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdiReserveStack/4 AsIs: s.Depth#1/5 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_CmdiReserveStack<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenerateResult_Sentences(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenerateResult_Sentences/4 (/7 # CmdSentence/9 e.SubCommands#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdSentence<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.SubCommands#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdStartSentence/4 HalfReuse: )/7 HalfReuse: </9 } & GenerateResult_Sentences/10 Tile{ AsIs: e.SubCommands#1/5 } >/11 (/12 # CmdEndSentence/13 )/14 </15 Tile{ HalfReuse: & GenerateResult_Sentences/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[10], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_CmdEndSentence<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdStartSentence<int>::name );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], GenerateResult_Sentences, "GenerateResult_Sentences" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[12], context[14] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenerateResult_Sentences/4 (/7 # CmdOpenELoop/9 # AlgLeft/10 s.BracketNum#1/11 s.VarNumber#1/12 e.SubCommands#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdOpenELoop<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_AlgLeft<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    // closed e.SubCommands#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } # CmdOpenedE_Start/13 # AlgLeft/14 s.BracketNum#1/11/15 s.VarNumber#1/12/16 )/17 </18 & GenerateResult_Sentences/19 Tile{ AsIs: e.SubCommands#1/5 } Tile{ HalfReuse: >/4 AsIs: (/7 Reuse: # CmdOpenedE_End/9 AsIs: # AlgLeft/10 AsIs: s.BracketNum#1/11 AsIs: s.VarNumber#1/12 } )/20 </21 Tile{ HalfReuse: & GenerateResult_Sentences/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[13], & ident_CmdOpenedE_Start<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], & ident_AlgLeft<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[15], context[11]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[16], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_call( context[4] );
    refalrts::update_ident( context[9], & ident_CmdOpenedE_End<int>::name );
    refalrts::reinit_name( context[8], GenerateResult_Sentences, "GenerateResult_Sentences" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[0], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[4], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[13], context[19] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenerateResult_Sentences/4 t.Command#1/5 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Command#1/5 } Tile{ AsIs: </0 AsIs: & GenerateResult_Sentences/4 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenerateResult_Sentences/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & GenerateResult_Sentences/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
