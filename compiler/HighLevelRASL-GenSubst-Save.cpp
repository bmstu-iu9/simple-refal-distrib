// This file automatically generated from 'HighLevelRASL-GenSubst-Save.sref'
// Don't edit! Edit 'HighLevelRASL-GenSubst-Save.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2575990627_2269175587
static const refalrts::RefalIdentifier ident_ADTm_Brackets = refalrts::ident_from_static("ADT-Brackets");
static const refalrts::RefalIdentifier ident_AlgLeft = refalrts::ident_from_static("AlgLeft");
static const refalrts::RefalIdentifier ident_AlgRight = refalrts::ident_from_static("AlgRight");
static const refalrts::RefalIdentifier ident_AlgTerm = refalrts::ident_from_static("AlgTerm");
static const refalrts::RefalIdentifier ident_Brackets = refalrts::ident_from_static("Brackets");
static const refalrts::RefalIdentifier ident_CmdADTSave = refalrts::ident_from_static("CmdADTSave");
static const refalrts::RefalIdentifier ident_CmdBrackets = refalrts::ident_from_static("CmdBrackets");
static const refalrts::RefalIdentifier ident_CmdBracketsSave = refalrts::ident_from_static("CmdBracketsSave");
static const refalrts::RefalIdentifier ident_CmdChar = refalrts::ident_from_static("CmdChar");
static const refalrts::RefalIdentifier ident_CmdCharSave = refalrts::ident_from_static("CmdCharSave");
static const refalrts::RefalIdentifier ident_CmdComment = refalrts::ident_from_static("CmdComment");
static const refalrts::RefalIdentifier ident_CmdEmpty = refalrts::ident_from_static("CmdEmpty");
static const refalrts::RefalIdentifier ident_CmdIdent = refalrts::ident_from_static("CmdIdent");
static const refalrts::RefalIdentifier ident_CmdIdentSave = refalrts::ident_from_static("CmdIdentSave");
static const refalrts::RefalIdentifier ident_CmdName = refalrts::ident_from_static("CmdName");
static const refalrts::RefalIdentifier ident_CmdNameSave = refalrts::ident_from_static("CmdNameSave");
static const refalrts::RefalIdentifier ident_CmdNumber = refalrts::ident_from_static("CmdNumber");
static const refalrts::RefalIdentifier ident_CmdNumberSave = refalrts::ident_from_static("CmdNumberSave");
static const refalrts::RefalIdentifier ident_CmdOpenedE = refalrts::ident_from_static("CmdOpenedE");
static const refalrts::RefalIdentifier ident_CmdRepeated = refalrts::ident_from_static("CmdRepeated");
static const refalrts::RefalIdentifier ident_CmdRepeatedTVarSave = refalrts::ident_from_static("CmdRepeatedTVarSave");
static const refalrts::RefalIdentifier ident_CmdVar = refalrts::ident_from_static("CmdVar");
static const refalrts::RefalIdentifier ident_CmdVarSave = refalrts::ident_from_static("CmdVarSave");
static const refalrts::RefalIdentifier ident_E = refalrts::ident_from_static("E");
static const refalrts::RefalIdentifier ident_Junk = refalrts::ident_from_static("Junk");
static const refalrts::RefalIdentifier ident_Offset = refalrts::ident_from_static("Offset");
static const refalrts::RefalIdentifier ident_S = refalrts::ident_from_static("S");
static const refalrts::RefalIdentifier ident_T = refalrts::ident_from_static("T");
static const refalrts::RefalIdentifier ident_TkChar = refalrts::ident_from_static("TkChar");
static const refalrts::RefalIdentifier ident_TkCloseADT = refalrts::ident_from_static("TkCloseADT");
static const refalrts::RefalIdentifier ident_TkCloseBracket = refalrts::ident_from_static("TkCloseBracket");
static const refalrts::RefalIdentifier ident_TkIdentifier = refalrts::ident_from_static("TkIdentifier");
static const refalrts::RefalIdentifier ident_TkName = refalrts::ident_from_static("TkName");
static const refalrts::RefalIdentifier ident_TkNumber = refalrts::ident_from_static("TkNumber");
static const refalrts::RefalIdentifier ident_TkOpenADT = refalrts::ident_from_static("TkOpenADT");
static const refalrts::RefalIdentifier ident_TkOpenBracket = refalrts::ident_from_static("TkOpenBracket");
static const refalrts::RefalIdentifier ident_TkVariable = refalrts::ident_from_static("TkVariable");
static refalrts::ExternalReference ref_Add("Add", 0U, 0U);
static refalrts::ExternalReference ref_DoGenSubst("DoGenSubst", 2575990627U, 2269175587U);
static refalrts::ExternalReference ref_gen_DoGenSubst_S36A1("DoGenSubst$36=1", 2575990627U, 2269175587U);
static refalrts::ExternalReference ref_gen_DoGenSubst_S36A2("DoGenSubst$36=2", 2575990627U, 2269175587U);
static refalrts::ExternalReference ref_gen_DoGenSubst_S36A3("DoGenSubst$36=3", 2575990627U, 2269175587U);
static refalrts::ExternalReference ref_GenSubstm_Save("GenSubst-Save", 0U, 0U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_Inc2("Inc2", 0U, 0U);
static refalrts::ExternalReference ref_IncVarOffsetm_Saved("IncVarOffset-Saved", 2575990627U, 2269175587U);
static refalrts::ExternalReference ref_MakeRepeatedSave("MakeRepeatedSave", 2575990627U, 2269175587U);
static refalrts::ExternalReference ref_MakeSavers("MakeSavers", 0U, 0U);
static refalrts::ExternalReference ref_PrintVar("PrintVar", 0U, 0U);
static refalrts::ExternalReference ref_TextFromExpr("TextFromExpr", 0U, 0U);

static refalrts::FnResult func_GenSubstm_Save(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & GenSubst-Save/4 s.ContextTop#1/13 e.Substitutes#1/2 (/11 e.Vars#1/9 )/12 (/7 e.PrefixCommands#1/5 )/8 >/1
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
  // closed e.Vars#1 as range 9
  // closed e.PrefixCommands#1 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitutes#1 as range 2
  //DEBUG: e.Vars#1: 9
  //DEBUG: e.PrefixCommands#1: 5
  //DEBUG: s.ContextTop#1: 13
  //DEBUG: e.Substitutes#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 AsIs: s.ContextTop#1/13 AsIs: e.Substitutes#1/2 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.PrefixCommands#1/5 AsIs: )/8 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_DoGenSubst.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenSubstm_Save("GenSubst-Save", 0U, 0U, func_GenSubstm_Save);


static refalrts::FnResult func_gen_DoGenSubst_S36A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoGenSubst$36=3/4 (/7 e.Vars#1/5 )/8 (/11 e.Index#1/9 )/12 s.VarOffset#2/13 (/16 e.Commands#1/14 )/17 t.CmdOpenedE#3/18 s.ContextOffset#4/20 (/23 e.CmdSaves#4/21 )/24 e.SubstitutesAnsJunks#4/2 >/1
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
  // closed e.Vars#1 as range 5
  // closed e.Index#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Commands#1 as range 14
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[20], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.CmdSaves#4 as range 21
  // closed e.SubstitutesAnsJunks#4 as range 2
  //DEBUG: e.Vars#1: 5
  //DEBUG: e.Index#1: 9
  //DEBUG: s.VarOffset#2: 13
  //DEBUG: e.Commands#1: 14
  //DEBUG: t.CmdOpenedE#3: 18
  //DEBUG: s.ContextOffset#4: 20
  //DEBUG: e.CmdSaves#4: 21
  //DEBUG: e.SubstitutesAnsJunks#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ContextOffset#4/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 HalfReuse: s.ContextOffset4 #20/7 } Tile{ AsIs: e.SubstitutesAnsJunks#4/2 } (/25 Tile{ AsIs: e.Vars#1/5 } Tile{ AsIs: (/23 } Tile{ HalfReuse: 'e'/8 AsIs: (/11 AsIs: e.Index#1/9 AsIs: )/12 AsIs: s.VarOffset#2/13 HalfReuse: )/16 } Tile{ AsIs: )/24 } (/26 Tile{ AsIs: e.Commands#1/14 } Tile{ AsIs: t.CmdOpenedE#3/18 } Tile{ AsIs: e.CmdSaves#4/21 } Tile{ AsIs: )/17 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoGenSubst.ref.function );
  refalrts::reinit_svar( context[7], context[20] );
  refalrts::reinit_char( context[8], 'e' );
  refalrts::reinit_close_bracket( context[16] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[26], context[17] );
  refalrts::link_brackets( context[25], context[24] );
  refalrts::link_brackets( context[23], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoGenSubst_S36A3("DoGenSubst$36=3", 2575990627U, 2269175587U, func_gen_DoGenSubst_S36A3);


static refalrts::FnResult func_gen_DoGenSubst_S36A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  // </0 & DoGenSubst$36=2/4 (/7 e.Vars#1/5 )/8 (/11 e.Index#1/9 )/12 s.VarOffset#2/13 (/16 e.Commands#1/14 )/17 s.ContextOffset#1/18 (/21 e.Junk#1/19 )/22 s.Num#1/23 (/26 e.Range#1/24 )/27 (/30 e.SubstitutesAnsJunks#1/28 )/31 t.CmdOpenedE#3/32 >/1
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
  // closed e.Vars#1 as range 5
  // closed e.Index#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Commands#1 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Junk#1 as range 19
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  context[28] = 0;
  context[29] = 0;
  context[30] = refalrts::brackets_left( context[28], context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[30], context[31]);
  // closed e.Range#1 as range 24
  // closed e.SubstitutesAnsJunks#1 as range 28
  context[33] = refalrts::tvar_left( context[32], context[2], context[3] );
  if( ! context[33] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Vars#1: 5
  //DEBUG: e.Index#1: 9
  //DEBUG: s.VarOffset#2: 13
  //DEBUG: e.Commands#1: 14
  //DEBUG: s.ContextOffset#1: 18
  //DEBUG: e.Junk#1: 19
  //DEBUG: s.Num#1: 23
  //DEBUG: e.Range#1: 24
  //DEBUG: e.SubstitutesAnsJunks#1: 28
  //DEBUG: t.CmdOpenedE#3: 32

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </34 Tile{ HalfReuse: [*]/0 Reuse: & DoGenSubst$36=3/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Index#1/9 AsIs: )/12 AsIs: s.VarOffset#2/13 AsIs: (/16 AsIs: e.Commands#1/14 AsIs: )/17 } Tile{ AsIs: t.CmdOpenedE#3/32 } {*}/35 </36 & MakeSavers/37 </38 & Inc2/39 Tile{ AsIs: s.ContextOffset#1/18 } >/40 Tile{ AsIs: (/30 } Tile{ HalfReuse: # Junk/21 AsIs: e.Junk#1/19 HalfReuse: (/22 } # TkVariable/41 'e'/42 e.Index#1/9/43 s.ContextOffset#1/18/45 Tile{ AsIs: )/31 } )/46 (/47 # E/48 Tile{ HalfReuse: s.Num1 #23/26 AsIs: e.Range#1/24 AsIs: )/27 } Tile{ AsIs: e.SubstitutesAnsJunks#1/28 } >/49 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[35], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[37], ref_MakeSavers.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[39], ref_Inc2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[41], ident_TkVariable ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'e' ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[43], context[44], context[9], context[10]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[45], context[18]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[48], ident_E ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[49] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_DoGenSubst_S36A3.ref.function );
  refalrts::reinit_ident( context[21], ident_Junk );
  refalrts::reinit_open_bracket( context[22] );
  refalrts::reinit_svar( context[26], context[23] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[49] );
  refalrts::push_stack( context[36] );
  refalrts::link_brackets( context[47], context[27] );
  refalrts::link_brackets( context[30], context[46] );
  refalrts::link_brackets( context[22], context[31] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[38] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[49], context[49] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[46], context[48] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[41], context[45] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[40], context[40] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[35], context[39] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[0], context[17] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  refalrts::wrap_closure( context[35] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoGenSubst_S36A2("DoGenSubst$36=2", 2575990627U, 2269175587U, func_gen_DoGenSubst_S36A2);


static refalrts::FnResult func_gen_DoGenSubst_S36A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & DoGenSubst$36=1/4 (/7 e.Vars#1/5 )/8 (/11 e.Index#1/9 )/12 (/15 e.Commands#1/13 )/16 s.ContextOffset#1/17 (/20 e.Junk#1/18 )/21 s.Num#1/22 (/25 e.Range#1/23 )/26 (/29 e.SubstitutesAnsJunks#1/27 )/30 s.VarOffset#2/31 >/1
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
  // closed e.Vars#1 as range 5
  // closed e.Index#1 as range 9
  // closed e.Commands#1 as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.Junk#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  context[27] = 0;
  context[28] = 0;
  context[29] = refalrts::brackets_left( context[27], context[28], context[2], context[3] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[29], context[30]);
  // closed e.Range#1 as range 23
  // closed e.SubstitutesAnsJunks#1 as range 27
  if( ! refalrts::svar_left( context[31], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Vars#1: 5
  //DEBUG: e.Index#1: 9
  //DEBUG: e.Commands#1: 13
  //DEBUG: s.ContextOffset#1: 17
  //DEBUG: e.Junk#1: 18
  //DEBUG: s.Num#1: 22
  //DEBUG: e.Range#1: 23
  //DEBUG: e.SubstitutesAnsJunks#1: 27
  //DEBUG: s.VarOffset#2: 31

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </32 Tile{ HalfReuse: [*]/0 Reuse: & DoGenSubst$36=2/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Index#1/9 } )/33 Tile{ HalfReuse: s.VarOffset2 #31/12 AsIs: (/15 AsIs: e.Commands#1/13 AsIs: )/16 AsIs: s.ContextOffset#1/17 AsIs: (/20 AsIs: e.Junk#1/18 AsIs: )/21 AsIs: s.Num#1/22 AsIs: (/25 AsIs: e.Range#1/23 AsIs: )/26 AsIs: (/29 AsIs: e.SubstitutesAnsJunks#1/27 AsIs: )/30 } {*}/34 (/35 # CmdOpenedE/36 # AlgLeft/37 s.Num#1/22/38 Tile{ AsIs: s.VarOffset#2/31 } )/39 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[34], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[36], ident_CmdOpenedE ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[37], ident_AlgLeft ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[38], context[22]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_DoGenSubst_S36A2.ref.function );
  refalrts::reinit_svar( context[12], context[31] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[32] );
  refalrts::link_brackets( context[35], context[39] );
  refalrts::link_brackets( context[29], context[30] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[33] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[39], context[39] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[34], context[38] );
  res = refalrts::splice_evar( res, context[12], context[30] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  refalrts::use( res );
  refalrts::wrap_closure( context[34] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoGenSubst_S36A1("DoGenSubst$36=1", 2575990627U, 2269175587U, func_gen_DoGenSubst_S36A1);


static refalrts::FnResult func_DoGenSubst(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 79 elems
  refalrts::Iter context[79];
  refalrts::zeros( context, 79 );
  // </0 & DoGenSubst/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoGenSubst/4 s.new#1/13 e.new#2/2 (/11 e.new#3/9 )/12 (/7 e.new#4/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # T/29 s.Num#1/40 (/37 # TkChar/39 s.Char#1/41 )/38 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_T, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[25], context[26] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_TkChar, context[35], context[36] );
      if( ! context[39] )
        continue;
      // closed e.Junk1#1 as range 20
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[40], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      if( ! refalrts::svar_left( context[41], context[35], context[36] ) )
        continue;
      if( ! refalrts::empty_seq( context[35], context[36] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 40
      //DEBUG: s.Char#1: 41

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/16 AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk1#1/20 HalfReuse: (/23 HalfReuse: # TkChar/27 HalfReuse: s.Char1 #41/29 AsIs: s.Num#1/40 HalfReuse: )/37 } Tile{ AsIs: e.Junk2#1/30 } Tile{ AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ Reuse: # AlgTerm/34 } Tile{ HalfReuse: s.Num1 #40/39 AsIs: s.Char#1/41 AsIs: )/38 AsIs: )/28 HalfReuse: >/32 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkChar );
      refalrts::reinit_svar( context[29], context[41] );
      refalrts::reinit_close_bracket( context[37] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdChar );
      refalrts::update_ident( context[34], ident_AlgTerm );
      refalrts::reinit_svar( context[39], context[40] );
      refalrts::reinit_close_call( context[32] );
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::link_brackets( context[8], context[38] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[22], context[33] );
      refalrts::link_brackets( context[23], context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[39], context[32] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[33], context[1] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # T/29 s.Num#1/40 (/37 # TkName/39 e.Name#1/35 )/38 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_T, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[25], context[26] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_TkName, context[35], context[36] );
      if( ! context[39] )
        continue;
      // closed e.Junk1#1 as range 20
      // closed e.Name#1 as range 35
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[40], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.Name#1: 35
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 40

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/40 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/16 AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk1#1/20 HalfReuse: (/23 HalfReuse: # TkName/27 } e.Name#1/35/41 Tile{ HalfReuse: s.Num1 #40/32 HalfReuse: )/34 AsIs: e.Junk2#1/30 AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } Tile{ HalfReuse: # AlgTerm/37 HalfReuse: s.Num1 #40/39 AsIs: e.Name#1/35 AsIs: )/38 AsIs: )/28 } Tile{ HalfReuse: >/29 } Tile{ ]] }
      if (! refalrts::copy_evar(context[41], context[42], context[35], context[36]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkName );
      refalrts::reinit_svar( context[32], context[40] );
      refalrts::reinit_close_bracket( context[34] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdName );
      refalrts::reinit_ident( context[37], ident_AlgTerm );
      refalrts::reinit_svar( context[39], context[40] );
      refalrts::reinit_close_call( context[29] );
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::link_brackets( context[8], context[38] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[22], context[33] );
      refalrts::link_brackets( context[23], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[37], context[28] );
      res = refalrts::splice_evar( res, context[32], context[1] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      refalrts::splice_to_freelist_open( context[27], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # T/29 s.Num#1/40 (/37 # TkIdentifier/39 e.Ident#1/35 )/38 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_T, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[25], context[26] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_TkIdentifier, context[35], context[36] );
      if( ! context[39] )
        continue;
      // closed e.Junk1#1 as range 20
      // closed e.Ident#1 as range 35
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[40], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.Ident#1: 35
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 40

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/40 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/16 AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk1#1/20 HalfReuse: (/23 HalfReuse: # TkIdentifier/27 } e.Ident#1/35/41 Tile{ HalfReuse: s.Num1 #40/32 HalfReuse: )/34 AsIs: e.Junk2#1/30 AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ HalfReuse: # AlgTerm/37 HalfReuse: s.Num1 #40/39 AsIs: e.Ident#1/35 AsIs: )/38 AsIs: )/28 } Tile{ HalfReuse: >/29 } Tile{ ]] }
      if (! refalrts::copy_evar(context[41], context[42], context[35], context[36]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkIdentifier );
      refalrts::reinit_svar( context[32], context[40] );
      refalrts::reinit_close_bracket( context[34] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdIdent );
      refalrts::reinit_ident( context[37], ident_AlgTerm );
      refalrts::reinit_svar( context[39], context[40] );
      refalrts::reinit_close_call( context[29] );
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::link_brackets( context[8], context[38] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[22], context[33] );
      refalrts::link_brackets( context[23], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[37], context[28] );
      res = refalrts::splice_evar( res, context[32], context[1] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      refalrts::splice_to_freelist_open( context[27], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # T/29 s.Num#1/40 (/37 # TkNumber/39 s.Value#1/41 )/38 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_T, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[25], context[26] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_TkNumber, context[35], context[36] );
      if( ! context[39] )
        continue;
      // closed e.Junk1#1 as range 20
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[40], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      if( ! refalrts::svar_left( context[41], context[35], context[36] ) )
        continue;
      if( ! refalrts::empty_seq( context[35], context[36] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 40
      //DEBUG: s.Value#1: 41

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/16 AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk1#1/20 HalfReuse: (/23 HalfReuse: # TkNumber/27 HalfReuse: s.Value1 #41/29 AsIs: s.Num#1/40 HalfReuse: )/37 } Tile{ AsIs: e.Junk2#1/30 } Tile{ AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ Reuse: # AlgTerm/34 } Tile{ HalfReuse: s.Num1 #40/39 AsIs: s.Value#1/41 AsIs: )/38 AsIs: )/28 HalfReuse: >/32 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkNumber );
      refalrts::reinit_svar( context[29], context[41] );
      refalrts::reinit_close_bracket( context[37] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdNumber );
      refalrts::update_ident( context[34], ident_AlgTerm );
      refalrts::reinit_svar( context[39], context[40] );
      refalrts::reinit_close_call( context[32] );
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::link_brackets( context[8], context[38] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[22], context[33] );
      refalrts::link_brackets( context[23], context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[39], context[32] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[33], context[1] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # T/29 s.Num#1/40 (/37 # Brackets/39 e.SubRange#1/35 )/38 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_T, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[25], context[26] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_Brackets, context[35], context[36] );
      if( ! context[39] )
        continue;
      // closed e.Junk1#1 as range 20
      // closed e.SubRange#1 as range 35
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[40], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.SubRange#1: 35
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 40

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Inc2/42 Tile{ AsIs: s.ContextOffset#1/13 } >/43 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk1#1/20 HalfReuse: (/23 HalfReuse: # TkOpenBracket/27 HalfReuse: s.Num1 #40/29 } )/44 )/45 Tile{ AsIs: (/37 Reuse: # E/39 } s.ContextOffset#1/13/46 Tile{ AsIs: e.SubRange#1/35 } )/47 (/48 # Junk/49 (/50 # TkCloseBracket/51 </52 Tile{ HalfReuse: & Inc/38 HalfReuse: s.Num1 #40/28 HalfReuse: >/32 HalfReuse: )/34 AsIs: e.Junk2#1/30 AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgTerm/53 Tile{ AsIs: s.Num#1/40 } s.ContextOffset#1/13/54 )/55 )/56 >/57 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[42], ref_Inc2.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[46], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[49], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[51], ident_TkCloseBracket ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[53], ident_AlgTerm ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[54], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[55] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[56] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[57] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkOpenBracket );
      refalrts::reinit_svar( context[29], context[40] );
      refalrts::update_ident( context[39], ident_E );
      refalrts::reinit_name( context[38], ref_Inc.ref.function );
      refalrts::reinit_svar( context[28], context[40] );
      refalrts::reinit_close_call( context[32] );
      refalrts::reinit_close_bracket( context[34] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdBrackets );
      refalrts::push_stack( context[57] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[56] );
      refalrts::link_brackets( context[8], context[55] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[48], context[33] );
      refalrts::link_brackets( context[50], context[34] );
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[52] );
      refalrts::link_brackets( context[37], context[47] );
      refalrts::link_brackets( context[22], context[45] );
      refalrts::link_brackets( context[23], context[44] );
      refalrts::push_stack( context[43] );
      refalrts::push_stack( context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[54], context[57] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[53], context[53] );
      res = refalrts::splice_evar( res, context[38], context[1] );
      res = refalrts::splice_evar( res, context[47], context[52] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[46], context[46] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_evar( res, context[22], context[29] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # T/29 s.Num#1/44 (/37 # ADT-Brackets/39 (/42 e.Name#1/40 )/43 e.SubRange#1/35 )/38 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_T, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[25], context[26] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_ADTm_Brackets, context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = 0;
      context[41] = 0;
      context[42] = refalrts::brackets_left( context[40], context[41], context[35], context[36] );
      if( ! context[42] )
        continue;
      refalrts::bracket_pointers(context[42], context[43]);
      // closed e.Junk1#1 as range 20
      // closed e.Name#1 as range 40
      // closed e.SubRange#1 as range 35
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[44], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.Name#1: 40
      //DEBUG: e.SubRange#1: 35
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 44

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </45 & Add/46 Tile{ AsIs: s.ContextOffset#1/13 } 3/47 >/48 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # Junk/24 } Tile{ AsIs: e.Junk1#1/20 } Tile{ AsIs: (/27 Reuse: # TkOpenADT/29 AsIs: s.Num#1/44 HalfReuse: )/37 HalfReuse: (/39 HalfReuse: # TkName/42 AsIs: e.Name#1/40 HalfReuse: </43 } & Add/49 s.ContextOffset#1/13/50 2/51 >/52 Tile{ AsIs: )/23 } )/53 (/54 # E/55 s.ContextOffset#1/13/56 Tile{ AsIs: e.SubRange#1/35 } )/57 (/58 # Junk/59 (/60 # TkCloseADT/61 </62 Tile{ HalfReuse: & Inc/38 HalfReuse: s.Num1 #44/28 HalfReuse: >/32 HalfReuse: )/34 AsIs: e.Junk2#1/30 AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADTSave/1 } # AlgTerm/63 s.Num#1/44/64 s.ContextOffset#1/13/65 e.Name#1/40/66 )/68 )/69 >/70 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[46], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[47], 3UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[49], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[51], 2UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[53] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[54] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[55], ident_E ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[56], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[57] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[58] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[59], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[60] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[61], ident_TkCloseADT ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[62] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[63], ident_AlgTerm ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[64], context[44]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[65], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[66], context[67], context[40], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[68] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[69] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[70] ) )
        return refalrts::cNoMemory;
      refalrts::update_ident( context[29], ident_TkOpenADT );
      refalrts::reinit_close_bracket( context[37] );
      refalrts::reinit_open_bracket( context[39] );
      refalrts::reinit_ident( context[42], ident_TkName );
      refalrts::reinit_open_call( context[43] );
      refalrts::reinit_name( context[38], ref_Inc.ref.function );
      refalrts::reinit_svar( context[28], context[44] );
      refalrts::reinit_close_call( context[32] );
      refalrts::reinit_close_bracket( context[34] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdADTSave );
      refalrts::push_stack( context[70] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[69] );
      refalrts::link_brackets( context[8], context[68] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[58], context[33] );
      refalrts::link_brackets( context[60], context[34] );
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[62] );
      refalrts::link_brackets( context[54], context[57] );
      refalrts::link_brackets( context[22], context[53] );
      refalrts::link_brackets( context[39], context[23] );
      refalrts::push_stack( context[52] );
      refalrts::push_stack( context[43] );
      refalrts::link_brackets( context[27], context[37] );
      refalrts::push_stack( context[48] );
      refalrts::push_stack( context[45] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[63], context[70] );
      res = refalrts::splice_evar( res, context[38], context[1] );
      res = refalrts::splice_evar( res, context[57], context[62] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[53], context[56] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[49], context[52] );
      res = refalrts::splice_evar( res, context[27], context[43] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[22], context[24] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/18 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # T/33 s.Num#1/44 (/41 # TkVariable/43 s.Mode#1/45 e.Index#1/39 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/20 (/11 e.Vars-B#1/46 (/52 s.Mode#1/54 (/57 e.Index#1/59 )/58 e.Offsets#1/50 s.SampleOffset#1/61 )/53 e.Vars-E#1/48 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    // closed e.Commands#1 as range 5
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      context[23] = context[17];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left(  ident_Junk, context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[20], context[21] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left(  ident_T, context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[20], context[21] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left(  ident_Junk, context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left(  ident_TkVariable, context[39], context[40] );
      if( ! context[43] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 20
      if( ! refalrts::svar_left( context[44], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      if( ! refalrts::svar_left( context[45], context[39], context[40] ) )
        continue;
      // closed e.Index#1 as range 39
      context[46] = 0;
      context[47] = 0;
      refalrts::start_e_loop();
      do {
        context[48] = context[22];
        context[49] = context[23];
        context[50] = 0;
        context[51] = 0;
        context[52] = refalrts::brackets_left( context[50], context[51], context[48], context[49] );
        if( ! context[52] )
          continue;
        refalrts::bracket_pointers(context[52], context[53]);
        if( ! refalrts::repeated_stvar_left( context[54], context[45], context[50], context[51] ) )
          continue;
        context[55] = 0;
        context[56] = 0;
        context[57] = refalrts::brackets_left( context[55], context[56], context[50], context[51] );
        if( ! context[57] )
          continue;
        refalrts::bracket_pointers(context[57], context[58]);
        if( ! refalrts::repeated_evar_left( context[59], context[60], context[39], context[40], context[55], context[56] ) )
          continue;
        if( ! refalrts::empty_seq( context[55], context[56] ) )
          continue;
        // closed e.Vars-E#1 as range 48
        if( ! refalrts::svar_right( context[61], context[50], context[51] ) )
          continue;
        // closed e.Offsets#1 as range 50
        //DEBUG: s.ContextOffset#1: 13
        //DEBUG: e.Commands#1: 5
        //DEBUG: e.Substs-B#1: 18
        //DEBUG: e.Junk1#1: 24
        //DEBUG: e.Junk2#1: 34
        //DEBUG: e.Substs-E#1: 20
        //DEBUG: s.Num#1: 44
        //DEBUG: s.Mode#1: 45
        //DEBUG: e.Index#1: 39
        //DEBUG: e.Vars-B#1: 46
        //DEBUG: e.Vars-E#1: 48
        //DEBUG: s.SampleOffset#1: 61
        //DEBUG: e.Offsets#1: 50

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/18 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # TkVariable/31 HalfReuse: s.Mode1 #54/33 } Tile{ AsIs: e.Index#1/39 } Tile{ HalfReuse: s.Num1 #44/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/20 AsIs: (/11 AsIs: e.Vars-B#1/46 AsIs: (/52 AsIs: s.Mode#1/54 AsIs: (/57 AsIs: e.Index#1/59 AsIs: )/58 AsIs: e.Offsets#1/50 AsIs: s.SampleOffset#1/61 HalfReuse: s.Num1 #44/53 } )/62 Tile{ AsIs: e.Vars-E#1/48 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } Tile{ HalfReuse: # AlgTerm/41 HalfReuse: s.Num1 #44/43 AsIs: s.Mode#1/45 } Tile{ AsIs: s.Num#1/44 } s.SampleOffset#1/61/63 Tile{ AsIs: )/42 AsIs: )/32 } >/64 Tile{ ]] }
        if( ! refalrts::alloc_close_bracket( context[62] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[63], context[61]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[64] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[27] );
        refalrts::reinit_ident( context[31], ident_TkVariable );
        refalrts::reinit_svar( context[33], context[54] );
        refalrts::reinit_svar( context[36], context[44] );
        refalrts::reinit_close_bracket( context[38] );
        refalrts::reinit_svar( context[53], context[44] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], ident_CmdRepeated );
        refalrts::reinit_ident( context[41], ident_AlgTerm );
        refalrts::reinit_svar( context[43], context[44] );
        refalrts::push_stack( context[64] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[32] );
        refalrts::link_brackets( context[8], context[42] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[52], context[62] );
        refalrts::link_brackets( context[57], context[58] );
        refalrts::link_brackets( context[26], context[37] );
        refalrts::link_brackets( context[27], context[38] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[64], context[64] );
        res = refalrts::splice_evar( res, context[42], context[32] );
        res = refalrts::splice_evar( res, context[63], context[63] );
        res = refalrts::splice_evar( res, context[44], context[44] );
        res = refalrts::splice_evar( res, context[41], context[45] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[62], context[62] );
        res = refalrts::splice_evar( res, context[36], context[53] );
        res = refalrts::splice_evar( res, context[39], context[40] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[46], context[47], context[22], context[23] ) );
    } while ( refalrts::open_evar_advance( context[18], context[19], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # T/29 s.Num#1/41 (/37 # TkVariable/39 't'/40 e.Index#1/35 )/38 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_T, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[25], context[26] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_TkVariable, context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::char_left( 't', context[35], context[36] );
      if( ! context[40] )
        continue;
      // closed e.Junk1#1 as range 20
      // closed e.Index#1 as range 35
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[41], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.Index#1: 35
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 41

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} s.Num#1/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/16 AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk1#1/20 HalfReuse: (/23 HalfReuse: # TkVariable/27 HalfReuse: 't'/29 } e.Index#1/35/42 Tile{ HalfReuse: s.Num1 #41/32 HalfReuse: )/34 AsIs: e.Junk2#1/30 AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } Tile{ HalfReuse: (/40 AsIs: e.Index#1/35 AsIs: )/38 HalfReuse: s.Num1 #41/28 } Tile{ HalfReuse: )/39 } )/44 Tile{ AsIs: (/37 } Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if (! refalrts::copy_evar(context[42], context[43], context[35], context[36]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkVariable );
      refalrts::reinit_char( context[29], 't' );
      refalrts::reinit_svar( context[32], context[41] );
      refalrts::reinit_close_bracket( context[34] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 't' );
      refalrts::reinit_open_bracket( context[40] );
      refalrts::reinit_svar( context[28], context[41] );
      refalrts::reinit_close_bracket( context[39] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[37], context[8] );
      refalrts::link_brackets( context[11], context[44] );
      refalrts::link_brackets( context[12], context[39] );
      refalrts::link_brackets( context[40], context[38] );
      refalrts::link_brackets( context[22], context[33] );
      refalrts::link_brackets( context[23], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[40], context[28] );
      res = refalrts::splice_evar( res, context[32], context[7] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      refalrts::splice_to_freelist_open( context[29], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # T/29 s.Num#1/41 (/37 # TkVariable/39 's'/40 e.Index#1/35 )/38 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_T, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[25], context[26] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_TkVariable, context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::char_left( 's', context[35], context[36] );
      if( ! context[40] )
        continue;
      // closed e.Junk1#1 as range 20
      // closed e.Index#1 as range 35
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[41], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.Index#1: 35
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 41

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/16 AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk1#1/20 HalfReuse: (/23 HalfReuse: # TkVariable/27 HalfReuse: 's'/29 } e.Index#1/35/42 Tile{ HalfReuse: s.Num1 #41/32 HalfReuse: )/34 AsIs: e.Junk2#1/30 AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } Tile{ HalfReuse: (/40 AsIs: e.Index#1/35 AsIs: )/38 HalfReuse: s.Num1 #41/28 } )/44 )/45 (/46 Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: (/37 Reuse: # CmdVar/39 } # AlgTerm/47 Tile{ AsIs: s.Num#1/41 } 's'/48 s.Num#1/41/49 )/50 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if (! refalrts::copy_evar(context[42], context[43], context[35], context[36]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[47], ident_AlgTerm ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[48], 's' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[49], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[50] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkVariable );
      refalrts::reinit_char( context[29], 's' );
      refalrts::reinit_svar( context[32], context[41] );
      refalrts::reinit_close_bracket( context[34] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::reinit_open_bracket( context[40] );
      refalrts::reinit_svar( context[28], context[41] );
      refalrts::update_ident( context[39], ident_CmdVar );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[46], context[8] );
      refalrts::link_brackets( context[37], context[50] );
      refalrts::link_brackets( context[11], context[45] );
      refalrts::link_brackets( context[12], context[44] );
      refalrts::link_brackets( context[40], context[38] );
      refalrts::link_brackets( context[22], context[33] );
      refalrts::link_brackets( context[23], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[48], context[50] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[47], context[47] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[44], context[46] );
      res = refalrts::splice_evar( res, context[40], context[28] );
      res = refalrts::splice_evar( res, context[32], context[7] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # S/29 s.Num#1/40 (/37 # TkChar/39 s.Char#1/41 )/38 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_S, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[25], context[26] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_TkChar, context[35], context[36] );
      if( ! context[39] )
        continue;
      // closed e.Junk1#1 as range 20
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[40], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      if( ! refalrts::svar_left( context[41], context[35], context[36] ) )
        continue;
      if( ! refalrts::empty_seq( context[35], context[36] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 40
      //DEBUG: s.Char#1: 41

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/16 AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk1#1/20 HalfReuse: (/23 HalfReuse: # TkChar/27 HalfReuse: s.Char1 #41/29 AsIs: s.Num#1/40 HalfReuse: )/37 } Tile{ AsIs: e.Junk2#1/30 } Tile{ AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ Reuse: # AlgTerm/34 } Tile{ HalfReuse: s.Num1 #40/39 AsIs: s.Char#1/41 AsIs: )/38 AsIs: )/28 HalfReuse: >/32 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkChar );
      refalrts::reinit_svar( context[29], context[41] );
      refalrts::reinit_close_bracket( context[37] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdChar );
      refalrts::update_ident( context[34], ident_AlgTerm );
      refalrts::reinit_svar( context[39], context[40] );
      refalrts::reinit_close_call( context[32] );
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::link_brackets( context[8], context[38] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[22], context[33] );
      refalrts::link_brackets( context[23], context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[39], context[32] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[33], context[1] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # S/29 s.Num#1/40 (/37 # TkName/39 e.Name#1/35 )/38 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_S, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[25], context[26] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_TkName, context[35], context[36] );
      if( ! context[39] )
        continue;
      // closed e.Junk1#1 as range 20
      // closed e.Name#1 as range 35
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[40], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.Name#1: 35
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 40

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/40 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/16 AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk1#1/20 HalfReuse: (/23 HalfReuse: # TkName/27 } e.Name#1/35/41 Tile{ HalfReuse: s.Num1 #40/32 HalfReuse: )/34 AsIs: e.Junk2#1/30 AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } Tile{ HalfReuse: # AlgTerm/37 HalfReuse: s.Num1 #40/39 AsIs: e.Name#1/35 AsIs: )/38 AsIs: )/28 } Tile{ HalfReuse: >/29 } Tile{ ]] }
      if (! refalrts::copy_evar(context[41], context[42], context[35], context[36]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkName );
      refalrts::reinit_svar( context[32], context[40] );
      refalrts::reinit_close_bracket( context[34] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdName );
      refalrts::reinit_ident( context[37], ident_AlgTerm );
      refalrts::reinit_svar( context[39], context[40] );
      refalrts::reinit_close_call( context[29] );
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::link_brackets( context[8], context[38] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[22], context[33] );
      refalrts::link_brackets( context[23], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[37], context[28] );
      res = refalrts::splice_evar( res, context[32], context[1] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      refalrts::splice_to_freelist_open( context[27], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # S/29 s.Num#1/40 (/37 # TkIdentifier/39 e.Ident#1/35 )/38 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_S, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[25], context[26] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_TkIdentifier, context[35], context[36] );
      if( ! context[39] )
        continue;
      // closed e.Junk1#1 as range 20
      // closed e.Ident#1 as range 35
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[40], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.Ident#1: 35
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 40

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/40 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/16 AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk1#1/20 HalfReuse: (/23 HalfReuse: # TkIdentifier/27 } e.Ident#1/35/41 Tile{ HalfReuse: s.Num1 #40/32 HalfReuse: )/34 AsIs: e.Junk2#1/30 AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ HalfReuse: # AlgTerm/37 HalfReuse: s.Num1 #40/39 AsIs: e.Ident#1/35 AsIs: )/38 AsIs: )/28 } Tile{ HalfReuse: >/29 } Tile{ ]] }
      if (! refalrts::copy_evar(context[41], context[42], context[35], context[36]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkIdentifier );
      refalrts::reinit_svar( context[32], context[40] );
      refalrts::reinit_close_bracket( context[34] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdIdent );
      refalrts::reinit_ident( context[37], ident_AlgTerm );
      refalrts::reinit_svar( context[39], context[40] );
      refalrts::reinit_close_call( context[29] );
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::link_brackets( context[8], context[38] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[22], context[33] );
      refalrts::link_brackets( context[23], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[37], context[28] );
      res = refalrts::splice_evar( res, context[32], context[1] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      refalrts::splice_to_freelist_open( context[27], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # S/29 s.Num#1/40 (/37 # TkNumber/39 s.Value#1/41 )/38 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_S, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[25], context[26] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_TkNumber, context[35], context[36] );
      if( ! context[39] )
        continue;
      // closed e.Junk1#1 as range 20
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[40], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      if( ! refalrts::svar_left( context[41], context[35], context[36] ) )
        continue;
      if( ! refalrts::empty_seq( context[35], context[36] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 40
      //DEBUG: s.Value#1: 41

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/16 AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk1#1/20 HalfReuse: (/23 HalfReuse: # TkNumber/27 HalfReuse: s.Value1 #41/29 AsIs: s.Num#1/40 HalfReuse: )/37 } Tile{ AsIs: e.Junk2#1/30 } Tile{ AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ Reuse: # AlgTerm/34 } Tile{ HalfReuse: s.Num1 #40/39 AsIs: s.Value#1/41 AsIs: )/38 AsIs: )/28 HalfReuse: >/32 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkNumber );
      refalrts::reinit_svar( context[29], context[41] );
      refalrts::reinit_close_bracket( context[37] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdNumber );
      refalrts::update_ident( context[34], ident_AlgTerm );
      refalrts::reinit_svar( context[39], context[40] );
      refalrts::reinit_close_call( context[32] );
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::link_brackets( context[8], context[38] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[22], context[33] );
      refalrts::link_brackets( context[23], context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[39], context[32] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[33], context[1] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/18 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # S/33 s.Num#1/44 (/41 # TkVariable/43 s.Mode#1/45 e.Index#1/39 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/20 (/11 e.Vars-B#1/46 (/52 s.Mode#1/54 (/57 e.Index#1/59 )/58 e.Offsets#1/50 s.SampleOffset#1/61 )/53 e.Vars-E#1/48 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    // closed e.Commands#1 as range 5
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      context[23] = context[17];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left(  ident_Junk, context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[20], context[21] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left(  ident_S, context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[20], context[21] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left(  ident_Junk, context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left(  ident_TkVariable, context[39], context[40] );
      if( ! context[43] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 20
      if( ! refalrts::svar_left( context[44], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      if( ! refalrts::svar_left( context[45], context[39], context[40] ) )
        continue;
      // closed e.Index#1 as range 39
      context[46] = 0;
      context[47] = 0;
      refalrts::start_e_loop();
      do {
        context[48] = context[22];
        context[49] = context[23];
        context[50] = 0;
        context[51] = 0;
        context[52] = refalrts::brackets_left( context[50], context[51], context[48], context[49] );
        if( ! context[52] )
          continue;
        refalrts::bracket_pointers(context[52], context[53]);
        if( ! refalrts::repeated_stvar_left( context[54], context[45], context[50], context[51] ) )
          continue;
        context[55] = 0;
        context[56] = 0;
        context[57] = refalrts::brackets_left( context[55], context[56], context[50], context[51] );
        if( ! context[57] )
          continue;
        refalrts::bracket_pointers(context[57], context[58]);
        if( ! refalrts::repeated_evar_left( context[59], context[60], context[39], context[40], context[55], context[56] ) )
          continue;
        if( ! refalrts::empty_seq( context[55], context[56] ) )
          continue;
        // closed e.Vars-E#1 as range 48
        if( ! refalrts::svar_right( context[61], context[50], context[51] ) )
          continue;
        // closed e.Offsets#1 as range 50
        //DEBUG: s.ContextOffset#1: 13
        //DEBUG: e.Commands#1: 5
        //DEBUG: e.Substs-B#1: 18
        //DEBUG: e.Junk1#1: 24
        //DEBUG: e.Junk2#1: 34
        //DEBUG: e.Substs-E#1: 20
        //DEBUG: s.Num#1: 44
        //DEBUG: s.Mode#1: 45
        //DEBUG: e.Index#1: 39
        //DEBUG: e.Vars-B#1: 46
        //DEBUG: e.Vars-E#1: 48
        //DEBUG: s.SampleOffset#1: 61
        //DEBUG: e.Offsets#1: 50

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/18 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # TkVariable/31 HalfReuse: s.Mode1 #54/33 } Tile{ AsIs: e.Index#1/39 } Tile{ HalfReuse: s.Num1 #44/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/20 AsIs: (/11 AsIs: e.Vars-B#1/46 AsIs: (/52 AsIs: s.Mode#1/54 AsIs: (/57 AsIs: e.Index#1/59 AsIs: )/58 AsIs: e.Offsets#1/50 AsIs: s.SampleOffset#1/61 HalfReuse: s.Num1 #44/53 } )/62 Tile{ AsIs: e.Vars-E#1/48 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } Tile{ HalfReuse: # AlgTerm/41 HalfReuse: s.Num1 #44/43 AsIs: s.Mode#1/45 } Tile{ AsIs: s.Num#1/44 } s.SampleOffset#1/61/63 Tile{ AsIs: )/42 AsIs: )/32 } >/64 Tile{ ]] }
        if( ! refalrts::alloc_close_bracket( context[62] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[63], context[61]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[64] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[27] );
        refalrts::reinit_ident( context[31], ident_TkVariable );
        refalrts::reinit_svar( context[33], context[54] );
        refalrts::reinit_svar( context[36], context[44] );
        refalrts::reinit_close_bracket( context[38] );
        refalrts::reinit_svar( context[53], context[44] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], ident_CmdRepeated );
        refalrts::reinit_ident( context[41], ident_AlgTerm );
        refalrts::reinit_svar( context[43], context[44] );
        refalrts::push_stack( context[64] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[32] );
        refalrts::link_brackets( context[8], context[42] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[52], context[62] );
        refalrts::link_brackets( context[57], context[58] );
        refalrts::link_brackets( context[26], context[37] );
        refalrts::link_brackets( context[27], context[38] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[64], context[64] );
        res = refalrts::splice_evar( res, context[42], context[32] );
        res = refalrts::splice_evar( res, context[63], context[63] );
        res = refalrts::splice_evar( res, context[44], context[44] );
        res = refalrts::splice_evar( res, context[41], context[45] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[62], context[62] );
        res = refalrts::splice_evar( res, context[36], context[53] );
        res = refalrts::splice_evar( res, context[39], context[40] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[46], context[47], context[22], context[23] ) );
    } while ( refalrts::open_evar_advance( context[18], context[19], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # S/29 s.Num#1/41 (/37 # TkVariable/39 's'/40 e.Index#1/35 )/38 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_S, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[25], context[26] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_TkVariable, context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::char_left( 's', context[35], context[36] );
      if( ! context[40] )
        continue;
      // closed e.Junk1#1 as range 20
      // closed e.Index#1 as range 35
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[41], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.Index#1: 35
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 41

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} s.Num#1/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/16 AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk1#1/20 HalfReuse: (/23 HalfReuse: # TkVariable/27 HalfReuse: 's'/29 } e.Index#1/35/42 Tile{ HalfReuse: s.Num1 #41/32 HalfReuse: )/34 AsIs: e.Junk2#1/30 AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } Tile{ HalfReuse: (/40 AsIs: e.Index#1/35 AsIs: )/38 HalfReuse: s.Num1 #41/28 } Tile{ HalfReuse: )/39 } )/44 Tile{ AsIs: (/37 } Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if (! refalrts::copy_evar(context[42], context[43], context[35], context[36]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkVariable );
      refalrts::reinit_char( context[29], 's' );
      refalrts::reinit_svar( context[32], context[41] );
      refalrts::reinit_close_bracket( context[34] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::reinit_open_bracket( context[40] );
      refalrts::reinit_svar( context[28], context[41] );
      refalrts::reinit_close_bracket( context[39] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[37], context[8] );
      refalrts::link_brackets( context[11], context[44] );
      refalrts::link_brackets( context[12], context[39] );
      refalrts::link_brackets( context[40], context[38] );
      refalrts::link_brackets( context[22], context[33] );
      refalrts::link_brackets( context[23], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[40], context[28] );
      res = refalrts::splice_evar( res, context[32], context[7] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      refalrts::splice_to_freelist_open( context[29], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk#1/20 )/23 (/27 # E/29 s.Num#1/30 (/33 # TkChar/35 s.Char#1/36 )/34 e.Range#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_E, context[25], context[26] );
      if( ! context[29] )
        continue;
      // closed e.Junk#1 as range 20
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[30], context[25], context[26] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[25], context[26] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkChar, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Range#1 as range 25
      if( ! refalrts::svar_left( context[36], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk#1: 20
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 30
      //DEBUG: e.Range#1: 25
      //DEBUG: s.Char#1: 36

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </37 & Inc/38 Tile{ AsIs: s.ContextOffset#1/13 } >/39 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk#1/20 HalfReuse: (/23 HalfReuse: # TkChar/27 HalfReuse: s.Char1 #36/29 } s.ContextOffset#1/13/40 )/41 )/42 Tile{ AsIs: (/33 Reuse: # E/35 } Tile{ HalfReuse: s.Num1 #30/34 AsIs: e.Range#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdCharSave/1 } # AlgLeft/43 Tile{ AsIs: s.Num#1/30 } s.ContextOffset#1/13/44 Tile{ AsIs: s.Char#1/36 } )/45 )/46 >/47 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[38], ref_Inc.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[40], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[43], ident_AlgLeft ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[44], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[47] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkChar );
      refalrts::reinit_svar( context[29], context[36] );
      refalrts::update_ident( context[35], ident_E );
      refalrts::reinit_svar( context[34], context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdCharSave );
      refalrts::push_stack( context[47] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[46] );
      refalrts::link_brackets( context[8], context[45] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[33], context[28] );
      refalrts::link_brackets( context[22], context[42] );
      refalrts::link_brackets( context[23], context[41] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[45], context[47] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[33], context[35] );
      res = refalrts::splice_evar( res, context[40], context[42] );
      res = refalrts::splice_evar( res, context[22], context[29] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk#1/20 )/23 (/27 # E/29 s.Num#1/30 (/33 # TkNumber/35 s.Number#1/36 )/34 e.Range#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_E, context[25], context[26] );
      if( ! context[29] )
        continue;
      // closed e.Junk#1 as range 20
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[30], context[25], context[26] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[25], context[26] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkNumber, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Range#1 as range 25
      if( ! refalrts::svar_left( context[36], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk#1: 20
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 30
      //DEBUG: e.Range#1: 25
      //DEBUG: s.Number#1: 36

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </37 & Inc/38 Tile{ AsIs: s.ContextOffset#1/13 } >/39 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk#1/20 HalfReuse: (/23 HalfReuse: # TkNumber/27 HalfReuse: s.Number1 #36/29 } s.ContextOffset#1/13/40 )/41 )/42 Tile{ AsIs: (/33 Reuse: # E/35 } Tile{ HalfReuse: s.Num1 #30/34 AsIs: e.Range#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumberSave/1 } # AlgLeft/43 Tile{ AsIs: s.Num#1/30 } s.ContextOffset#1/13/44 Tile{ AsIs: s.Number#1/36 } )/45 )/46 >/47 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[38], ref_Inc.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[40], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[43], ident_AlgLeft ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[44], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[47] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkNumber );
      refalrts::reinit_svar( context[29], context[36] );
      refalrts::update_ident( context[35], ident_E );
      refalrts::reinit_svar( context[34], context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdNumberSave );
      refalrts::push_stack( context[47] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[46] );
      refalrts::link_brackets( context[8], context[45] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[33], context[28] );
      refalrts::link_brackets( context[22], context[42] );
      refalrts::link_brackets( context[23], context[41] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[45], context[47] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[33], context[35] );
      res = refalrts::splice_evar( res, context[40], context[42] );
      res = refalrts::splice_evar( res, context[22], context[29] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk#1/20 )/23 (/27 # E/29 s.Num#1/30 (/33 # TkName/35 e.Name#1/31 )/34 e.Range#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_E, context[25], context[26] );
      if( ! context[29] )
        continue;
      // closed e.Junk#1 as range 20
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[30], context[25], context[26] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[25], context[26] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkName, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Name#1 as range 31
      // closed e.Range#1 as range 25
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk#1: 20
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 30
      //DEBUG: e.Name#1: 31
      //DEBUG: e.Range#1: 25

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </36 & Inc/37 Tile{ AsIs: s.ContextOffset#1/13 } >/38 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk#1/20 HalfReuse: (/23 HalfReuse: # TkName/27 } Tile{ AsIs: e.Name#1/31 } s.ContextOffset#1/13/39 )/40 )/41 (/42 Tile{ Reuse: # E/35 } Tile{ HalfReuse: s.Num1 #30/34 AsIs: e.Range#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNameSave/1 } Tile{ Reuse: # AlgLeft/29 AsIs: s.Num#1/30 HalfReuse: s.ContextOffset1 #13/33 } e.Name#1/31/43 )/45 )/46 >/47 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[37], ref_Inc.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[39], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[43], context[44], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[47] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkName );
      refalrts::update_ident( context[35], ident_E );
      refalrts::reinit_svar( context[34], context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdNameSave );
      refalrts::update_ident( context[29], ident_AlgLeft );
      refalrts::reinit_svar( context[33], context[13] );
      refalrts::push_stack( context[47] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[46] );
      refalrts::link_brackets( context[8], context[45] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[42], context[28] );
      refalrts::link_brackets( context[22], context[41] );
      refalrts::link_brackets( context[23], context[40] );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[45], context[47] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[29], context[33] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[39], context[42] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[22], context[27] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk#1/20 )/23 (/27 # E/29 s.Num#1/30 (/33 # TkIdentifier/35 e.Name#1/31 )/34 e.Range#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_E, context[25], context[26] );
      if( ! context[29] )
        continue;
      // closed e.Junk#1 as range 20
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[30], context[25], context[26] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[25], context[26] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkIdentifier, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Name#1 as range 31
      // closed e.Range#1 as range 25
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk#1: 20
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 30
      //DEBUG: e.Name#1: 31
      //DEBUG: e.Range#1: 25

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </36 & Inc/37 Tile{ AsIs: s.ContextOffset#1/13 } >/38 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk#1/20 HalfReuse: (/23 HalfReuse: # TkIdentifier/27 } Tile{ AsIs: e.Name#1/31 } s.ContextOffset#1/13/39 )/40 )/41 (/42 Tile{ Reuse: # E/35 } Tile{ HalfReuse: s.Num1 #30/34 AsIs: e.Range#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdentSave/1 } Tile{ Reuse: # AlgLeft/29 AsIs: s.Num#1/30 HalfReuse: s.ContextOffset1 #13/33 } e.Name#1/31/43 )/45 )/46 >/47 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[37], ref_Inc.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[39], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[43], context[44], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[47] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkIdentifier );
      refalrts::update_ident( context[35], ident_E );
      refalrts::reinit_svar( context[34], context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdIdentSave );
      refalrts::update_ident( context[29], ident_AlgLeft );
      refalrts::reinit_svar( context[33], context[13] );
      refalrts::push_stack( context[47] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[46] );
      refalrts::link_brackets( context[8], context[45] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[42], context[28] );
      refalrts::link_brackets( context[22], context[41] );
      refalrts::link_brackets( context[23], context[40] );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[45], context[47] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[29], context[33] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[39], context[42] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[22], context[27] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # E/24 s.Num#1/35 e.Range#1/20 (/32 # TkChar/34 s.Char#1/36 )/33 )/23 (/27 # Junk/29 e.Junk#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_E, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_Junk, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_right( context[30], context[31], context[20], context[21] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_TkChar, context[30], context[31] );
      if( ! context[34] )
        continue;
      // closed e.Junk#1 as range 25
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[35], context[20], context[21] ) )
        continue;
      // closed e.Range#1 as range 20
      if( ! refalrts::svar_left( context[36], context[30], context[31] ) )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk#1: 25
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 35
      //DEBUG: e.Range#1: 20
      //DEBUG: s.Char#1: 36

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </37 & Inc/38 Tile{ AsIs: s.ContextOffset#1/13 } >/39 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # E/24 AsIs: s.Num#1/35 AsIs: e.Range#1/20 HalfReuse: )/32 HalfReuse: (/34 } # Junk/40 (/41 Tile{ HalfReuse: # TkChar/33 HalfReuse: s.Char1 #36/23 HalfReuse: s.ContextOffset1 #13/27 HalfReuse: )/29 AsIs: e.Junk#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdCharSave/1 } # AlgRight/42 s.Num#1/35/43 s.ContextOffset#1/13/44 Tile{ AsIs: s.Char#1/36 } )/45 )/46 >/47 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[38], ref_Inc.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[42], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[43], context[35]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[44], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[47] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[32] );
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_ident( context[33], ident_TkChar );
      refalrts::reinit_svar( context[23], context[36] );
      refalrts::reinit_svar( context[27], context[13] );
      refalrts::reinit_close_bracket( context[29] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdCharSave );
      refalrts::push_stack( context[47] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[46] );
      refalrts::link_brackets( context[8], context[45] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[34], context[28] );
      refalrts::link_brackets( context[41], context[29] );
      refalrts::link_brackets( context[22], context[32] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[45], context[47] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[42], context[44] );
      res = refalrts::splice_evar( res, context[33], context[1] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[22], context[34] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # E/24 s.Num#1/35 e.Range#1/20 (/32 # TkNumber/34 s.Number#1/36 )/33 )/23 (/27 # Junk/29 e.Junk#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_E, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_Junk, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_right( context[30], context[31], context[20], context[21] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_TkNumber, context[30], context[31] );
      if( ! context[34] )
        continue;
      // closed e.Junk#1 as range 25
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[35], context[20], context[21] ) )
        continue;
      // closed e.Range#1 as range 20
      if( ! refalrts::svar_left( context[36], context[30], context[31] ) )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk#1: 25
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 35
      //DEBUG: e.Range#1: 20
      //DEBUG: s.Number#1: 36

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </37 & Inc/38 Tile{ AsIs: s.ContextOffset#1/13 } >/39 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # E/24 AsIs: s.Num#1/35 AsIs: e.Range#1/20 HalfReuse: )/32 HalfReuse: (/34 } # Junk/40 (/41 Tile{ HalfReuse: # TkNumber/33 HalfReuse: s.Number1 #36/23 HalfReuse: s.ContextOffset1 #13/27 HalfReuse: )/29 AsIs: e.Junk#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumberSave/1 } # AlgRight/42 s.Num#1/35/43 s.ContextOffset#1/13/44 Tile{ AsIs: s.Number#1/36 } )/45 )/46 >/47 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[38], ref_Inc.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[42], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[43], context[35]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[44], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[47] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[32] );
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_ident( context[33], ident_TkNumber );
      refalrts::reinit_svar( context[23], context[36] );
      refalrts::reinit_svar( context[27], context[13] );
      refalrts::reinit_close_bracket( context[29] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdNumberSave );
      refalrts::push_stack( context[47] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[46] );
      refalrts::link_brackets( context[8], context[45] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[34], context[28] );
      refalrts::link_brackets( context[41], context[29] );
      refalrts::link_brackets( context[22], context[32] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[45], context[47] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[42], context[44] );
      res = refalrts::splice_evar( res, context[33], context[1] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[22], context[34] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # E/24 s.Num#1/35 e.Range#1/20 (/32 # TkName/34 e.Name#1/30 )/33 )/23 (/27 # Junk/29 e.Junk#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_E, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_Junk, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_right( context[30], context[31], context[20], context[21] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_TkName, context[30], context[31] );
      if( ! context[34] )
        continue;
      // closed e.Name#1 as range 30
      // closed e.Junk#1 as range 25
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[35], context[20], context[21] ) )
        continue;
      // closed e.Range#1 as range 20
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Name#1: 30
      //DEBUG: e.Junk#1: 25
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 35
      //DEBUG: e.Range#1: 20

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </36 & Inc/37 Tile{ AsIs: s.ContextOffset#1/13 } >/38 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # E/24 AsIs: s.Num#1/35 AsIs: e.Range#1/20 HalfReuse: )/32 HalfReuse: (/34 } # Junk/39 (/40 # TkName/41 Tile{ AsIs: e.Name#1/30 } Tile{ HalfReuse: s.ContextOffset1 #13/27 HalfReuse: )/29 AsIs: e.Junk#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNameSave/1 } # AlgRight/42 s.Num#1/35/43 s.ContextOffset#1/13/44 e.Name#1/30/45 Tile{ AsIs: )/33 AsIs: )/23 } >/47 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[37], ref_Inc.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[39], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[41], ident_TkName ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[42], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[43], context[35]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[44], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[45], context[46], context[30], context[31]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[47] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[32] );
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_svar( context[27], context[13] );
      refalrts::reinit_close_bracket( context[29] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdNameSave );
      refalrts::push_stack( context[47] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[23] );
      refalrts::link_brackets( context[8], context[33] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[34], context[28] );
      refalrts::link_brackets( context[40], context[29] );
      refalrts::link_brackets( context[22], context[32] );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[47], context[47] );
      res = refalrts::splice_evar( res, context[33], context[23] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[42], context[44] );
      res = refalrts::splice_evar( res, context[27], context[1] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[39], context[41] );
      res = refalrts::splice_evar( res, context[22], context[34] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # E/24 s.Num#1/35 e.Range#1/20 (/32 # TkIdentifier/34 e.Name#1/30 )/33 )/23 (/27 # Junk/29 e.Junk#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_E, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_Junk, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_right( context[30], context[31], context[20], context[21] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_TkIdentifier, context[30], context[31] );
      if( ! context[34] )
        continue;
      // closed e.Name#1 as range 30
      // closed e.Junk#1 as range 25
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[35], context[20], context[21] ) )
        continue;
      // closed e.Range#1 as range 20
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Name#1: 30
      //DEBUG: e.Junk#1: 25
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 35
      //DEBUG: e.Range#1: 20

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </36 & Inc/37 Tile{ AsIs: s.ContextOffset#1/13 } >/38 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # E/24 AsIs: s.Num#1/35 AsIs: e.Range#1/20 HalfReuse: )/32 HalfReuse: (/34 } # Junk/39 (/40 # TkIdentifier/41 Tile{ AsIs: e.Name#1/30 } Tile{ HalfReuse: s.ContextOffset1 #13/27 HalfReuse: )/29 AsIs: e.Junk#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdentSave/1 } # AlgRight/42 s.Num#1/35/43 s.ContextOffset#1/13/44 e.Name#1/30/45 Tile{ AsIs: )/33 AsIs: )/23 } >/47 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[37], ref_Inc.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[39], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[41], ident_TkIdentifier ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[42], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[43], context[35]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[44], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[45], context[46], context[30], context[31]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[47] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[32] );
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_svar( context[27], context[13] );
      refalrts::reinit_close_bracket( context[29] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdIdentSave );
      refalrts::push_stack( context[47] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[23] );
      refalrts::link_brackets( context[8], context[33] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[34], context[28] );
      refalrts::link_brackets( context[40], context[29] );
      refalrts::link_brackets( context[22], context[32] );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[47], context[47] );
      res = refalrts::splice_evar( res, context[33], context[23] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[42], context[44] );
      res = refalrts::splice_evar( res, context[27], context[1] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[39], context[41] );
      res = refalrts::splice_evar( res, context[22], context[34] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk#1/20 )/23 (/27 # E/29 s.Num#1/30 (/33 # Brackets/35 e.SubRange#1/31 )/34 e.Range#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_E, context[25], context[26] );
      if( ! context[29] )
        continue;
      // closed e.Junk#1 as range 20
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[30], context[25], context[26] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[25], context[26] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_Brackets, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.SubRange#1 as range 31
      // closed e.Range#1 as range 25
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk#1: 20
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 30
      //DEBUG: e.SubRange#1: 31
      //DEBUG: e.Range#1: 25

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </36 & Add/37 s.ContextOffset#1/13/38 4/39 >/40 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk#1/20 HalfReuse: (/23 HalfReuse: # TkOpenBracket/27 HalfReuse: </29 } & Add/41 Tile{ AsIs: s.ContextOffset#1/13 } 2/42 >/43 )/44 )/45 Tile{ AsIs: (/33 Reuse: # E/35 } s.ContextOffset#1/13/46 Tile{ AsIs: e.SubRange#1/31 } )/47 (/48 # Junk/49 (/50 # TkCloseBracket/51 </52 & Add/53 s.ContextOffset#1/13/54 3/55 >/56 )/57 )/58 (/59 # E/60 Tile{ HalfReuse: s.Num1 #30/34 AsIs: e.Range#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBracketsSave/1 } # AlgLeft/61 Tile{ AsIs: s.Num#1/30 } s.ContextOffset#1/13/62 )/63 )/64 >/65 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[37], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[38], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[39], 4UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[41], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[42], 2UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[46], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[49], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[51], ident_TkCloseBracket ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[53], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[54], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[55], 3UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[56] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[57] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[58] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[59] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[60], ident_E ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[61], ident_AlgLeft ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[62], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[63] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[64] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[65] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkOpenBracket );
      refalrts::reinit_open_call( context[29] );
      refalrts::update_ident( context[35], ident_E );
      refalrts::reinit_svar( context[34], context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdBracketsSave );
      refalrts::push_stack( context[65] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[64] );
      refalrts::link_brackets( context[8], context[63] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[59], context[28] );
      refalrts::link_brackets( context[48], context[58] );
      refalrts::link_brackets( context[50], context[57] );
      refalrts::push_stack( context[56] );
      refalrts::push_stack( context[52] );
      refalrts::link_brackets( context[33], context[47] );
      refalrts::link_brackets( context[22], context[45] );
      refalrts::link_brackets( context[23], context[44] );
      refalrts::push_stack( context[43] );
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[40] );
      refalrts::push_stack( context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[62], context[65] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[61], context[61] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[47], context[60] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[46], context[46] );
      res = refalrts::splice_evar( res, context[33], context[35] );
      res = refalrts::splice_evar( res, context[42], context[45] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[22], context[29] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[36], context[40] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # E/24 s.Num#1/35 e.Range#1/20 (/32 # Brackets/34 e.SubRange#1/30 )/33 )/23 (/27 # Junk/29 e.Junk#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_E, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_Junk, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_right( context[30], context[31], context[20], context[21] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Brackets, context[30], context[31] );
      if( ! context[34] )
        continue;
      // closed e.SubRange#1 as range 30
      // closed e.Junk#1 as range 25
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[35], context[20], context[21] ) )
        continue;
      // closed e.Range#1 as range 20
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.SubRange#1: 30
      //DEBUG: e.Junk#1: 25
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 35
      //DEBUG: e.Range#1: 20

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </36 & Add/37 s.ContextOffset#1/13/38 4/39 >/40 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # E/24 AsIs: s.Num#1/35 AsIs: e.Range#1/20 HalfReuse: )/32 HalfReuse: (/34 } # Junk/41 (/42 # TkOpenBracket/43 </44 & Add/45 Tile{ AsIs: s.ContextOffset#1/13 } 2/46 >/47 )/48 )/49 (/50 # E/51 s.ContextOffset#1/13/52 Tile{ AsIs: e.SubRange#1/30 } )/53 (/54 # Junk/55 (/56 # TkCloseBracket/57 </58 & Add/59 Tile{ HalfReuse: s.ContextOffset1 #13/33 HalfReuse: 3/23 HalfReuse: >/27 HalfReuse: )/29 AsIs: e.Junk#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBracketsSave/1 } # AlgRight/60 s.Num#1/35/61 s.ContextOffset#1/13/62 )/63 )/64 >/65 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[37], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[38], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[39], 4UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[41], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[43], ident_TkOpenBracket ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[45], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[46], 2UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[51], ident_E ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[52], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[53] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[54] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[55], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[56] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[57], ident_TkCloseBracket ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[58] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[59], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[60], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[61], context[35]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[62], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[63] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[64] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[65] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[32] );
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_svar( context[33], context[13] );
      refalrts::reinit_number( context[23], 3UL );
      refalrts::reinit_close_call( context[27] );
      refalrts::reinit_close_bracket( context[29] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdBracketsSave );
      refalrts::push_stack( context[65] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[64] );
      refalrts::link_brackets( context[8], context[63] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[54], context[28] );
      refalrts::link_brackets( context[56], context[29] );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[58] );
      refalrts::link_brackets( context[50], context[53] );
      refalrts::link_brackets( context[34], context[49] );
      refalrts::link_brackets( context[42], context[48] );
      refalrts::push_stack( context[47] );
      refalrts::push_stack( context[44] );
      refalrts::link_brackets( context[22], context[32] );
      refalrts::push_stack( context[40] );
      refalrts::push_stack( context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[60], context[65] );
      res = refalrts::splice_evar( res, context[33], context[1] );
      res = refalrts::splice_evar( res, context[53], context[59] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[46], context[52] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[41], context[45] );
      res = refalrts::splice_evar( res, context[22], context[34] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[36], context[40] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk#1/20 )/23 (/27 # E/29 s.Num#1/30 (/33 # ADT-Brackets/35 (/38 e.Name#1/36 )/39 e.SubRange#1/31 )/34 e.Range#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_E, context[25], context[26] );
      if( ! context[29] )
        continue;
      // closed e.Junk#1 as range 20
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[30], context[25], context[26] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[25], context[26] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_ADTm_Brackets, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[31], context[32] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      // closed e.Name#1 as range 36
      // closed e.SubRange#1 as range 31
      // closed e.Range#1 as range 25
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk#1: 20
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 30
      //DEBUG: e.Name#1: 36
      //DEBUG: e.SubRange#1: 31
      //DEBUG: e.Range#1: 25

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num#1/30 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </40 & Add/41 s.ContextOffset#1/13/42 5/43 >/44 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk#1/20 HalfReuse: (/23 HalfReuse: # TkOpenADT/27 HalfReuse: </29 } & Add/45 Tile{ AsIs: s.ContextOffset#1/13 } 2/46 >/47 )/48 (/49 # TkName/50 e.Name#1/36/51 </53 & Add/54 s.ContextOffset#1/13/55 3/56 >/57 )/58 )/59 (/60 # E/61 s.ContextOffset#1/13/62 Tile{ AsIs: e.SubRange#1/31 } )/63 (/64 # Junk/65 (/66 # TkCloseADT/67 </68 & Add/69 s.ContextOffset#1/13/70 4/71 >/72 )/73 )/74 (/75 # E/76 Tile{ HalfReuse: s.Num1 #30/34 AsIs: e.Range#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADTSave/1 } Tile{ HalfReuse: # AlgLeft/33 HalfReuse: s.Num1 #30/35 HalfReuse: s.ContextOffset1 #13/38 AsIs: e.Name#1/36 AsIs: )/39 } )/77 >/78 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[41], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[42], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[43], 5UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[45], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[46], 2UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[50], ident_TkName ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[51], context[52], context[36], context[37]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[53] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[54], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[55], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[56], 3UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[57] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[58] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[59] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[60] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[61], ident_E ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[62], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[63] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[64] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[65], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[66] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[67], ident_TkCloseADT ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[68] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[69], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[70], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[71], 4UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[72] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[73] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[74] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[75] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[76], ident_E ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[77] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[78] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkOpenADT );
      refalrts::reinit_open_call( context[29] );
      refalrts::reinit_svar( context[34], context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdADTSave );
      refalrts::reinit_ident( context[33], ident_AlgLeft );
      refalrts::reinit_svar( context[35], context[30] );
      refalrts::reinit_svar( context[38], context[13] );
      refalrts::push_stack( context[78] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[77] );
      refalrts::link_brackets( context[8], context[39] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[75], context[28] );
      refalrts::link_brackets( context[64], context[74] );
      refalrts::link_brackets( context[66], context[73] );
      refalrts::push_stack( context[72] );
      refalrts::push_stack( context[68] );
      refalrts::link_brackets( context[60], context[63] );
      refalrts::link_brackets( context[22], context[59] );
      refalrts::link_brackets( context[49], context[58] );
      refalrts::push_stack( context[57] );
      refalrts::push_stack( context[53] );
      refalrts::link_brackets( context[23], context[48] );
      refalrts::push_stack( context[47] );
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[44] );
      refalrts::push_stack( context[40] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[77], context[78] );
      res = refalrts::splice_evar( res, context[33], context[39] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[63], context[76] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[46], context[62] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[45], context[45] );
      res = refalrts::splice_evar( res, context[22], context[29] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[40], context[44] );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # E/24 s.Num#1/39 e.Range#1/20 (/32 # ADT-Brackets/34 (/37 e.Name#1/35 )/38 e.SubRange#1/30 )/33 )/23 (/27 # Junk/29 e.Junk#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_E, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_Junk, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_right( context[30], context[31], context[20], context[21] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_ADTm_Brackets, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[30], context[31] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      // closed e.Name#1 as range 35
      // closed e.SubRange#1 as range 30
      // closed e.Junk#1 as range 25
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[39], context[20], context[21] ) )
        continue;
      // closed e.Range#1 as range 20
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Name#1: 35
      //DEBUG: e.SubRange#1: 30
      //DEBUG: e.Junk#1: 25
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 39
      //DEBUG: e.Range#1: 20

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </40 & Add/41 s.ContextOffset#1/13/42 5/43 >/44 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # E/24 AsIs: s.Num#1/39 AsIs: e.Range#1/20 HalfReuse: )/32 HalfReuse: (/34 HalfReuse: # Junk/37 } (/45 # TkOpenADT/46 </47 & Add/48 Tile{ AsIs: s.ContextOffset#1/13 } 2/49 >/50 Tile{ AsIs: )/38 } (/51 # TkName/52 Tile{ AsIs: e.Name#1/35 } </53 & Add/54 s.ContextOffset#1/13/55 3/56 >/57 )/58 )/59 (/60 # E/61 s.ContextOffset#1/13/62 Tile{ AsIs: e.SubRange#1/30 } )/63 (/64 # Junk/65 (/66 # TkCloseADT/67 </68 & Add/69 Tile{ HalfReuse: s.ContextOffset1 #13/33 HalfReuse: 4/23 HalfReuse: >/27 HalfReuse: )/29 AsIs: e.Junk#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADTSave/1 } # AlgRight/70 s.Num#1/39/71 s.ContextOffset#1/13/72 e.Name#1/35/73 )/75 )/76 >/77 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[41], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[42], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[43], 5UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], ident_TkOpenADT ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[48], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[49], 2UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[52], ident_TkName ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[53] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[54], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[55], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[56], 3UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[57] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[58] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[59] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[60] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[61], ident_E ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[62], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[63] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[64] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[65], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[66] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[67], ident_TkCloseADT ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[68] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[69], ref_Add.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[70], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[71], context[39]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[72], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[73], context[74], context[35], context[36]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[75] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[76] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[77] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[32] );
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_ident( context[37], ident_Junk );
      refalrts::reinit_svar( context[33], context[13] );
      refalrts::reinit_number( context[23], 4UL );
      refalrts::reinit_close_call( context[27] );
      refalrts::reinit_close_bracket( context[29] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdADTSave );
      refalrts::push_stack( context[77] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[76] );
      refalrts::link_brackets( context[8], context[75] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[64], context[28] );
      refalrts::link_brackets( context[66], context[29] );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[68] );
      refalrts::link_brackets( context[60], context[63] );
      refalrts::link_brackets( context[34], context[59] );
      refalrts::link_brackets( context[51], context[58] );
      refalrts::push_stack( context[57] );
      refalrts::push_stack( context[53] );
      refalrts::link_brackets( context[45], context[38] );
      refalrts::push_stack( context[50] );
      refalrts::push_stack( context[47] );
      refalrts::link_brackets( context[22], context[32] );
      refalrts::push_stack( context[44] );
      refalrts::push_stack( context[40] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[70], context[77] );
      res = refalrts::splice_evar( res, context[33], context[1] );
      res = refalrts::splice_evar( res, context[63], context[69] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[53], context[62] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[45], context[48] );
      res = refalrts::splice_evar( res, context[22], context[37] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[40], context[44] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # E/29 s.Num#1/35 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_E, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      // closed e.Junk1#1 as range 20
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[35], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 35

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/23 (/27 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/16 AsIs: (/22 AsIs: # Junk/24 } Tile{ AsIs: e.Junk1#1/20 } Tile{ AsIs: e.Junk2#1/30 } Tile{ AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdEmpty/1 } Tile{ Reuse: # AlgLeft/29 AsIs: s.Num#1/35 AsIs: )/28 HalfReuse: )/32 HalfReuse: >/34 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdEmpty );
      refalrts::update_ident( context[29], ident_AlgLeft );
      refalrts::reinit_close_bracket( context[32] );
      refalrts::reinit_close_call( context[34] );
      refalrts::push_stack( context[34] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[32] );
      refalrts::link_brackets( context[8], context[28] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[22], context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[34] );
      res = refalrts::splice_evar( res, context[33], context[1] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::splice_to_freelist_open( context[24], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/18 (/26 # Junk/28 e.Junk#1/24 )/27 (/31 # E/33 s.Num#1/34 (/37 # TkVariable/39 s.Mode#1/40 e.Index#1/35 )/38 e.Range#1/29 )/32 e.Substs-E#1/20 (/11 e.Vars-B#1/41 (/47 s.Mode#1/49 (/52 e.Index#1/54 )/53 e.Offsets#1/45 s.SampleOffset#1/56 )/48 e.Vars-E#1/43 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    // closed e.Commands#1 as range 5
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      context[23] = context[17];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left(  ident_Junk, context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[20], context[21] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left(  ident_E, context[29], context[30] );
      if( ! context[33] )
        continue;
      // closed e.Junk#1 as range 24
      // closed e.Substs-E#1 as range 20
      if( ! refalrts::svar_left( context[34], context[29], context[30] ) )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_TkVariable, context[35], context[36] );
      if( ! context[39] )
        continue;
      // closed e.Range#1 as range 29
      if( ! refalrts::svar_left( context[40], context[35], context[36] ) )
        continue;
      // closed e.Index#1 as range 35
      context[41] = 0;
      context[42] = 0;
      refalrts::start_e_loop();
      do {
        context[43] = context[22];
        context[44] = context[23];
        context[45] = 0;
        context[46] = 0;
        context[47] = refalrts::brackets_left( context[45], context[46], context[43], context[44] );
        if( ! context[47] )
          continue;
        refalrts::bracket_pointers(context[47], context[48]);
        if( ! refalrts::repeated_stvar_left( context[49], context[40], context[45], context[46] ) )
          continue;
        context[50] = 0;
        context[51] = 0;
        context[52] = refalrts::brackets_left( context[50], context[51], context[45], context[46] );
        if( ! context[52] )
          continue;
        refalrts::bracket_pointers(context[52], context[53]);
        if( ! refalrts::repeated_evar_left( context[54], context[55], context[35], context[36], context[50], context[51] ) )
          continue;
        if( ! refalrts::empty_seq( context[50], context[51] ) )
          continue;
        // closed e.Vars-E#1 as range 43
        if( ! refalrts::svar_right( context[56], context[45], context[46] ) )
          continue;
        // closed e.Offsets#1 as range 45
        //DEBUG: s.ContextOffset#1: 13
        //DEBUG: e.Commands#1: 5
        //DEBUG: e.Substs-B#1: 18
        //DEBUG: e.Junk#1: 24
        //DEBUG: e.Substs-E#1: 20
        //DEBUG: s.Num#1: 34
        //DEBUG: e.Range#1: 29
        //DEBUG: s.Mode#1: 40
        //DEBUG: e.Index#1: 35
        //DEBUG: e.Vars-B#1: 41
        //DEBUG: e.Vars-E#1: 43
        //DEBUG: s.SampleOffset#1: 56
        //DEBUG: e.Offsets#1: 45

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </57 Tile{ HalfReuse: & IncVarOffset-Saved/37 HalfReuse: s.ContextOffset1 #13/39 AsIs: s.Mode#1/40 } >/58 Tile{ AsIs: e.Substs-B#1/18 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk#1/24 HalfReuse: (/27 HalfReuse: # TkVariable/31 HalfReuse: s.Mode1 #49/33 } Tile{ AsIs: e.Index#1/35 } Tile{ AsIs: s.ContextOffset#1/13 } )/59 )/60 (/61 # E/62 Tile{ HalfReuse: s.Num1 #34/38 AsIs: e.Range#1/29 AsIs: )/32 AsIs: e.Substs-E#1/20 AsIs: (/11 AsIs: e.Vars-B#1/41 AsIs: (/47 AsIs: s.Mode#1/49 AsIs: (/52 AsIs: e.Index#1/54 AsIs: )/53 AsIs: e.Offsets#1/45 AsIs: s.SampleOffset#1/56 HalfReuse: s.ContextOffset1 #13/48 } )/63 Tile{ AsIs: e.Vars-E#1/43 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: </8 HalfReuse: & MakeRepeatedSave/1 } # AlgLeft/64 Tile{ AsIs: s.Num#1/34 } s.Mode#1/49/65 s.ContextOffset#1/13/66 s.SampleOffset#1/56/67 >/68 )/69 >/70 Tile{ ]] }
        if( ! refalrts::alloc_open_call( context[57] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[58] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[59] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[60] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[61] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[62], ident_E ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[63] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[64], ident_AlgLeft ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[65], context[49]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[66], context[13]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[67], context[56]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[68] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[69] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[70] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_name( context[37], ref_IncVarOffsetm_Saved.ref.function );
        refalrts::reinit_svar( context[39], context[13] );
        refalrts::reinit_open_bracket( context[27] );
        refalrts::reinit_ident( context[31], ident_TkVariable );
        refalrts::reinit_svar( context[33], context[49] );
        refalrts::reinit_svar( context[38], context[34] );
        refalrts::reinit_svar( context[48], context[13] );
        refalrts::reinit_open_call( context[8] );
        refalrts::reinit_name( context[1], ref_MakeRepeatedSave.ref.function );
        refalrts::push_stack( context[70] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[69] );
        refalrts::push_stack( context[68] );
        refalrts::push_stack( context[8] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[47], context[63] );
        refalrts::link_brackets( context[52], context[53] );
        refalrts::link_brackets( context[61], context[32] );
        refalrts::link_brackets( context[26], context[60] );
        refalrts::link_brackets( context[27], context[59] );
        refalrts::push_stack( context[58] );
        refalrts::push_stack( context[57] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[65], context[70] );
        res = refalrts::splice_evar( res, context[34], context[34] );
        res = refalrts::splice_evar( res, context[64], context[64] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[43], context[44] );
        res = refalrts::splice_evar( res, context[63], context[63] );
        res = refalrts::splice_evar( res, context[38], context[48] );
        res = refalrts::splice_evar( res, context[59], context[62] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[26], context[33] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[58], context[58] );
        res = refalrts::splice_evar( res, context[37], context[40] );
        res = refalrts::splice_evar( res, context[57], context[57] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[41], context[42], context[22], context[23] ) );
    } while ( refalrts::open_evar_advance( context[18], context[19], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/18 (/26 # E/28 s.Num#1/39 e.Range#1/24 (/36 # TkVariable/38 s.Mode#1/40 e.Index#1/34 )/37 )/27 (/31 # Junk/33 e.Junk#1/29 )/32 e.Substs-E#1/20 (/11 e.Vars-B#1/41 (/47 s.Mode#1/49 (/52 e.Index#1/54 )/53 e.Offsets#1/45 s.SampleOffset#1/56 )/48 e.Vars-E#1/43 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    // closed e.Commands#1 as range 5
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      context[23] = context[17];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left(  ident_E, context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[20], context[21] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left(  ident_Junk, context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_right( context[34], context[35], context[24], context[25] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left(  ident_TkVariable, context[34], context[35] );
      if( ! context[38] )
        continue;
      // closed e.Junk#1 as range 29
      // closed e.Substs-E#1 as range 20
      if( ! refalrts::svar_left( context[39], context[24], context[25] ) )
        continue;
      // closed e.Range#1 as range 24
      if( ! refalrts::svar_left( context[40], context[34], context[35] ) )
        continue;
      // closed e.Index#1 as range 34
      context[41] = 0;
      context[42] = 0;
      refalrts::start_e_loop();
      do {
        context[43] = context[22];
        context[44] = context[23];
        context[45] = 0;
        context[46] = 0;
        context[47] = refalrts::brackets_left( context[45], context[46], context[43], context[44] );
        if( ! context[47] )
          continue;
        refalrts::bracket_pointers(context[47], context[48]);
        if( ! refalrts::repeated_stvar_left( context[49], context[40], context[45], context[46] ) )
          continue;
        context[50] = 0;
        context[51] = 0;
        context[52] = refalrts::brackets_left( context[50], context[51], context[45], context[46] );
        if( ! context[52] )
          continue;
        refalrts::bracket_pointers(context[52], context[53]);
        if( ! refalrts::repeated_evar_left( context[54], context[55], context[34], context[35], context[50], context[51] ) )
          continue;
        if( ! refalrts::empty_seq( context[50], context[51] ) )
          continue;
        // closed e.Vars-E#1 as range 43
        if( ! refalrts::svar_right( context[56], context[45], context[46] ) )
          continue;
        // closed e.Offsets#1 as range 45
        //DEBUG: s.ContextOffset#1: 13
        //DEBUG: e.Commands#1: 5
        //DEBUG: e.Substs-B#1: 18
        //DEBUG: e.Junk#1: 29
        //DEBUG: e.Substs-E#1: 20
        //DEBUG: s.Num#1: 39
        //DEBUG: e.Range#1: 24
        //DEBUG: s.Mode#1: 40
        //DEBUG: e.Index#1: 34
        //DEBUG: e.Vars-B#1: 41
        //DEBUG: e.Vars-E#1: 43
        //DEBUG: s.SampleOffset#1: 56
        //DEBUG: e.Offsets#1: 45

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </57 & IncVarOffset-Saved/58 Tile{ AsIs: s.ContextOffset#1/13 } Tile{ AsIs: s.Mode#1/40 } >/59 Tile{ AsIs: e.Substs-B#1/18 } Tile{ AsIs: (/26 AsIs: # E/28 AsIs: s.Num#1/39 AsIs: e.Range#1/24 HalfReuse: )/36 HalfReuse: (/38 } # Junk/60 (/61 # TkVariable/62 s.Mode#1/49/63 Tile{ AsIs: e.Index#1/34 } Tile{ HalfReuse: s.ContextOffset1 #13/31 HalfReuse: )/33 AsIs: e.Junk#1/29 AsIs: )/32 AsIs: e.Substs-E#1/20 AsIs: (/11 AsIs: e.Vars-B#1/41 AsIs: (/47 AsIs: s.Mode#1/49 AsIs: (/52 AsIs: e.Index#1/54 AsIs: )/53 AsIs: e.Offsets#1/45 AsIs: s.SampleOffset#1/56 HalfReuse: s.ContextOffset1 #13/48 } )/64 Tile{ AsIs: e.Vars-E#1/43 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: </8 HalfReuse: & MakeRepeatedSave/1 } # AlgRight/65 s.Num#1/39/66 s.Mode#1/49/67 s.ContextOffset#1/13/68 s.SampleOffset#1/56/69 Tile{ HalfReuse: >/37 AsIs: )/27 } >/70 Tile{ ]] }
        if( ! refalrts::alloc_open_call( context[57] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[58], ref_IncVarOffsetm_Saved.ref.function ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[59] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[60], ident_Junk ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[61] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[62], ident_TkVariable ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[63], context[49]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[64] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[65], ident_AlgRight ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[66], context[39]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[67], context[49]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[68], context[13]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[69], context[56]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[70] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_close_bracket( context[36] );
        refalrts::reinit_open_bracket( context[38] );
        refalrts::reinit_svar( context[31], context[13] );
        refalrts::reinit_close_bracket( context[33] );
        refalrts::reinit_svar( context[48], context[13] );
        refalrts::reinit_open_call( context[8] );
        refalrts::reinit_name( context[1], ref_MakeRepeatedSave.ref.function );
        refalrts::reinit_close_call( context[37] );
        refalrts::push_stack( context[70] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[27] );
        refalrts::push_stack( context[37] );
        refalrts::push_stack( context[8] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[47], context[64] );
        refalrts::link_brackets( context[52], context[53] );
        refalrts::link_brackets( context[38], context[32] );
        refalrts::link_brackets( context[61], context[33] );
        refalrts::link_brackets( context[26], context[36] );
        refalrts::push_stack( context[59] );
        refalrts::push_stack( context[57] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[70], context[70] );
        res = refalrts::splice_evar( res, context[37], context[27] );
        res = refalrts::splice_evar( res, context[65], context[69] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[43], context[44] );
        res = refalrts::splice_evar( res, context[64], context[64] );
        res = refalrts::splice_evar( res, context[31], context[48] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[60], context[63] );
        res = refalrts::splice_evar( res, context[26], context[38] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[59], context[59] );
        res = refalrts::splice_evar( res, context[40], context[40] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[57], context[58] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[41], context[42], context[22], context[23] ) );
    } while ( refalrts::open_evar_advance( context[18], context[19], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk1#1/20 )/23 (/27 # E/29 s.Num#1/41 (/37 # TkVariable/39 'e'/40 e.Index#1/35 )/38 )/28 (/32 # Junk/34 e.Junk2#1/30 )/33 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_E, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[18], context[19] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_Junk, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[25], context[26] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left(  ident_TkVariable, context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::char_left( 'e', context[35], context[36] );
      if( ! context[40] )
        continue;
      // closed e.Junk1#1 as range 20
      // closed e.Index#1 as range 35
      // closed e.Junk2#1 as range 30
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[41], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk1#1: 20
      //DEBUG: e.Index#1: 35
      //DEBUG: e.Junk2#1: 30
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 41

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/16 AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk1#1/20 HalfReuse: (/23 HalfReuse: # TkVariable/27 HalfReuse: 'e'/29 } e.Index#1/35/42 Tile{ HalfReuse: s.Num1 #41/32 HalfReuse: )/34 AsIs: e.Junk2#1/30 AsIs: )/33 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 'e'/7 } (/44 e.Index#1/35/45 )/47 Tile{ AsIs: s.Num#1/41 } )/48 )/49 (/50 Tile{ AsIs: e.Commands#1/5 } (/51 # CmdComment/52" closed "/53 Tile{ HalfReuse: </37 HalfReuse: & PrintVar/39 AsIs: 'e'/40 AsIs: e.Index#1/35 HalfReuse: >/38 HalfReuse: ' '/28 }"as range "/55 # Offset/57 s.Num#1/41/58 )/59 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if (! refalrts::copy_evar(context[42], context[43], context[35], context[36]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[45], context[46], context[35], context[36]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[52], ident_CmdComment ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[53], context[54], " closed ", 8 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[55], context[56], "as range ", 9 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[57], ident_Offset ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[58], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[59] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkVariable );
      refalrts::reinit_char( context[29], 'e' );
      refalrts::reinit_svar( context[32], context[41] );
      refalrts::reinit_close_bracket( context[34] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 'e' );
      refalrts::reinit_open_call( context[37] );
      refalrts::reinit_name( context[39], ref_PrintVar.ref.function );
      refalrts::reinit_close_call( context[38] );
      refalrts::reinit_char( context[28], ' ' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[50], context[8] );
      refalrts::link_brackets( context[51], context[59] );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[37] );
      refalrts::link_brackets( context[11], context[49] );
      refalrts::link_brackets( context[12], context[48] );
      refalrts::link_brackets( context[44], context[47] );
      refalrts::link_brackets( context[22], context[33] );
      refalrts::link_brackets( context[23], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[55], context[59] );
      res = refalrts::splice_evar( res, context[37], context[28] );
      res = refalrts::splice_evar( res, context[51], context[54] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[48], context[50] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[44], context[47] );
      res = refalrts::splice_evar( res, context[32], context[7] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk#1/20 )/23 (/27 # E/29 s.Num#1/30 (/33 # TkVariable/35 's'/36 e.Index#1/31 )/34 e.Range#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_E, context[25], context[26] );
      if( ! context[29] )
        continue;
      // closed e.Junk#1 as range 20
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[30], context[25], context[26] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[25], context[26] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkVariable, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = refalrts::char_left( 's', context[31], context[32] );
      if( ! context[36] )
        continue;
      // closed e.Index#1 as range 31
      // closed e.Range#1 as range 25
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk#1: 20
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 30
      //DEBUG: e.Index#1: 31
      //DEBUG: e.Range#1: 25

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </37 & Inc/38 Tile{ AsIs: s.ContextOffset#1/13 } >/39 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk#1/20 HalfReuse: (/23 HalfReuse: # TkVariable/27 HalfReuse: 's'/29 } Tile{ AsIs: e.Index#1/31 } s.ContextOffset#1/13/40 )/41 )/42 (/43 # E/44 Tile{ HalfReuse: s.Num1 #30/34 AsIs: e.Range#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } (/45 e.Index#1/31/46 )/48 s.ContextOffset#1/13/49 )/50 )/51 (/52 Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: (/33 Reuse: # CmdVar/35 HalfReuse: # AlgLeft/36 } Tile{ AsIs: s.Num#1/30 } 's'/53 s.ContextOffset#1/13/54 )/55 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[38], ref_Inc.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[40], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[44], ident_E ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[46], context[47], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[49], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[53], 's' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[54], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[55] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkVariable );
      refalrts::reinit_char( context[29], 's' );
      refalrts::reinit_svar( context[34], context[30] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::update_ident( context[35], ident_CmdVar );
      refalrts::reinit_ident( context[36], ident_AlgLeft );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[52], context[8] );
      refalrts::link_brackets( context[33], context[55] );
      refalrts::link_brackets( context[11], context[51] );
      refalrts::link_brackets( context[12], context[50] );
      refalrts::link_brackets( context[45], context[48] );
      refalrts::link_brackets( context[43], context[28] );
      refalrts::link_brackets( context[22], context[42] );
      refalrts::link_brackets( context[23], context[41] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[53], context[55] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[33], context[36] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[45], context[52] );
      res = refalrts::splice_evar( res, context[34], context[7] );
      res = refalrts::splice_evar( res, context[40], context[44] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[22], context[29] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # Junk/24 e.Junk#1/20 )/23 (/27 # E/29 s.Num#1/30 (/33 # TkVariable/35 't'/36 e.Index#1/31 )/34 e.Range#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_Junk, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_E, context[25], context[26] );
      if( ! context[29] )
        continue;
      // closed e.Junk#1 as range 20
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[30], context[25], context[26] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[25], context[26] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkVariable, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = refalrts::char_left( 't', context[31], context[32] );
      if( ! context[36] )
        continue;
      // closed e.Index#1 as range 31
      // closed e.Range#1 as range 25
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Junk#1: 20
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 30
      //DEBUG: e.Index#1: 31
      //DEBUG: e.Range#1: 25

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </37 & Inc2/38 Tile{ AsIs: s.ContextOffset#1/13 } >/39 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # Junk/24 AsIs: e.Junk#1/20 HalfReuse: (/23 HalfReuse: # TkVariable/27 HalfReuse: 't'/29 } Tile{ AsIs: e.Index#1/31 } s.ContextOffset#1/13/40 )/41 )/42 (/43 # E/44 Tile{ HalfReuse: s.Num1 #30/34 AsIs: e.Range#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } (/45 e.Index#1/31/46 )/48 s.ContextOffset#1/13/49 )/50 )/51 (/52 Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: (/33 Reuse: # CmdVarSave/35 HalfReuse: # AlgLeft/36 } Tile{ AsIs: s.Num#1/30 } 't'/53 s.ContextOffset#1/13/54 )/55 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[38], ref_Inc2.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[40], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[44], ident_E ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[46], context[47], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[49], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[53], 't' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[54], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[55] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[23] );
      refalrts::reinit_ident( context[27], ident_TkVariable );
      refalrts::reinit_char( context[29], 't' );
      refalrts::reinit_svar( context[34], context[30] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 't' );
      refalrts::update_ident( context[35], ident_CmdVarSave );
      refalrts::reinit_ident( context[36], ident_AlgLeft );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[52], context[8] );
      refalrts::link_brackets( context[33], context[55] );
      refalrts::link_brackets( context[11], context[51] );
      refalrts::link_brackets( context[12], context[50] );
      refalrts::link_brackets( context[45], context[48] );
      refalrts::link_brackets( context[43], context[28] );
      refalrts::link_brackets( context[22], context[42] );
      refalrts::link_brackets( context[23], context[41] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[53], context[55] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[33], context[36] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[45], context[52] );
      res = refalrts::splice_evar( res, context[34], context[7] );
      res = refalrts::splice_evar( res, context[40], context[44] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[22], context[29] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # E/24 s.Num#1/36 e.Range#1/20 (/32 # TkVariable/34 's'/35 e.Index#1/30 )/33 )/23 (/27 # Junk/29 e.Junk#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_E, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_Junk, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_right( context[30], context[31], context[20], context[21] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_TkVariable, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = refalrts::char_left( 's', context[30], context[31] );
      if( ! context[35] )
        continue;
      // closed e.Index#1 as range 30
      // closed e.Junk#1 as range 25
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[36], context[20], context[21] ) )
        continue;
      // closed e.Range#1 as range 20
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Index#1: 30
      //DEBUG: e.Junk#1: 25
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 36
      //DEBUG: e.Range#1: 20

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </37 & Inc/38 Tile{ AsIs: s.ContextOffset#1/13 } >/39 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # E/24 AsIs: s.Num#1/36 AsIs: e.Range#1/20 HalfReuse: )/32 HalfReuse: (/34 HalfReuse: # Junk/35 } (/40 # TkVariable/41 's'/42 Tile{ AsIs: e.Index#1/30 } Tile{ HalfReuse: s.ContextOffset1 #13/27 HalfReuse: )/29 AsIs: e.Junk#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } (/43 e.Index#1/30/44 )/46 s.ContextOffset#1/13/47 Tile{ AsIs: )/33 AsIs: )/23 } (/48 Tile{ AsIs: e.Commands#1/5 } (/49 # CmdVar/50 # AlgRight/51 s.Num#1/36/52 's'/53 s.ContextOffset#1/13/54 )/55 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[38], ref_Inc.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[41], ident_TkVariable ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[42], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[44], context[45], context[30], context[31]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[50], ident_CmdVar ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[51], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[52], context[36]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[53], 's' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[54], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[55] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[32] );
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_ident( context[35], ident_Junk );
      refalrts::reinit_svar( context[27], context[13] );
      refalrts::reinit_close_bracket( context[29] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[48], context[8] );
      refalrts::link_brackets( context[49], context[55] );
      refalrts::link_brackets( context[11], context[23] );
      refalrts::link_brackets( context[12], context[33] );
      refalrts::link_brackets( context[43], context[46] );
      refalrts::link_brackets( context[34], context[28] );
      refalrts::link_brackets( context[40], context[29] );
      refalrts::link_brackets( context[22], context[32] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[49], context[55] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[48], context[48] );
      res = refalrts::splice_evar( res, context[33], context[23] );
      res = refalrts::splice_evar( res, context[43], context[47] );
      res = refalrts::splice_evar( res, context[27], context[7] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[40], context[42] );
      res = refalrts::splice_evar( res, context[22], context[35] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/16 (/22 # E/24 s.Num#1/36 e.Range#1/20 (/32 # TkVariable/34 't'/35 e.Index#1/30 )/33 )/23 (/27 # Junk/29 e.Junk#1/25 )/28 e.Substs-E#1/18 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  ident_E, context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[18], context[19] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left(  ident_Junk, context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_right( context[30], context[31], context[20], context[21] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left(  ident_TkVariable, context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = refalrts::char_left( 't', context[30], context[31] );
      if( ! context[35] )
        continue;
      // closed e.Index#1 as range 30
      // closed e.Junk#1 as range 25
      // closed e.Substs-E#1 as range 18
      if( ! refalrts::svar_left( context[36], context[20], context[21] ) )
        continue;
      // closed e.Range#1 as range 20
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 9
      //DEBUG: e.Commands#1: 5
      //DEBUG: e.Substs-B#1: 16
      //DEBUG: e.Index#1: 30
      //DEBUG: e.Junk#1: 25
      //DEBUG: e.Substs-E#1: 18
      //DEBUG: s.Num#1: 36
      //DEBUG: e.Range#1: 20

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </37 & Inc2/38 Tile{ AsIs: s.ContextOffset#1/13 } >/39 Tile{ AsIs: e.Substs-B#1/16 } Tile{ AsIs: (/22 AsIs: # E/24 AsIs: s.Num#1/36 AsIs: e.Range#1/20 HalfReuse: )/32 HalfReuse: (/34 HalfReuse: # Junk/35 } (/40 # TkVariable/41 't'/42 Tile{ AsIs: e.Index#1/30 } Tile{ HalfReuse: s.ContextOffset1 #13/27 HalfReuse: )/29 AsIs: e.Junk#1/25 AsIs: )/28 AsIs: e.Substs-E#1/18 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } (/43 e.Index#1/30/44 )/46 s.ContextOffset#1/13/47 Tile{ AsIs: )/33 AsIs: )/23 } (/48 Tile{ AsIs: e.Commands#1/5 } (/49 # CmdVarSave/50 # AlgRight/51 s.Num#1/36/52 't'/53 s.ContextOffset#1/13/54 )/55 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[38], ref_Inc2.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[41], ident_TkVariable ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[42], 't' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[44], context[45], context[30], context[31]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[50], ident_CmdVarSave ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[51], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[52], context[36]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[53], 't' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[54], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[55] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[32] );
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_ident( context[35], ident_Junk );
      refalrts::reinit_svar( context[27], context[13] );
      refalrts::reinit_close_bracket( context[29] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 't' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[48], context[8] );
      refalrts::link_brackets( context[49], context[55] );
      refalrts::link_brackets( context[11], context[23] );
      refalrts::link_brackets( context[12], context[33] );
      refalrts::link_brackets( context[43], context[46] );
      refalrts::link_brackets( context[34], context[28] );
      refalrts::link_brackets( context[40], context[29] );
      refalrts::link_brackets( context[22], context[32] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[49], context[55] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[48], context[48] );
      res = refalrts::splice_evar( res, context[33], context[23] );
      res = refalrts::splice_evar( res, context[43], context[47] );
      res = refalrts::splice_evar( res, context[27], context[7] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[40], context[42] );
      res = refalrts::splice_evar( res, context[22], context[35] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // </0 & DoGenSubst/4 s.new#5/13 (/16 # Junk/18 e.new#8/14 )/17 e.new#9/2 (/11 e.new#7/9 )/12 (/7 e.new#6/5 )/8 >/1
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = refalrts::ident_left(  ident_Junk, context[14], context[15] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#8 as range 14
  // closed e.new#9 as range 2
  // closed e.new#7 as range 9
  // closed e.new#6 as range 5
  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 (/16 # Junk/18 e.Junk#1/14 )/17 (/23 # E/25 s.Num#1/26 (/29 # TkVariable/31 'e'/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.SubstitutesAnsJunks#1/19 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  ident_E, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Junk#1 as range 14
    // closed e.SubstitutesAnsJunks#1 as range 19
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
      continue;
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    context[31] = refalrts::ident_left(  ident_TkVariable, context[27], context[28] );
    if( ! context[31] )
      continue;
    context[32] = refalrts::char_left( 'e', context[27], context[28] );
    if( ! context[32] )
      continue;
    // closed e.Index#1 as range 27
    // closed e.Range#1 as range 21
    //DEBUG: s.ContextOffset#1: 13
    //DEBUG: e.Junk#1: 14
    //DEBUG: e.SubstitutesAnsJunks#1: 19
    //DEBUG: e.Vars#1: 9
    //DEBUG: e.Commands#1: 5
    //DEBUG: s.Num#1: 26
    //DEBUG: e.Index#1: 27
    //DEBUG: e.Range#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num#1/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & DoGenSubst$36=1/33 Tile{ AsIs: (/29 } Tile{ AsIs: e.Vars#1/9 } Tile{ HalfReuse: )/31 HalfReuse: (/32 } Tile{ AsIs: e.Index#1/27 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 AsIs: )/8 HalfReuse: s.ContextOffset1 #13/1 } Tile{ HalfReuse: (/18 AsIs: e.Junk#1/14 AsIs: )/17 HalfReuse: s.Num1 #26/23 HalfReuse: (/25 } Tile{ AsIs: e.Range#1/21 } Tile{ AsIs: )/30 } Tile{ HalfReuse: (/24 AsIs: e.SubstitutesAnsJunks#1/19 HalfReuse: )/11 } {*}/34 Tile{ AsIs: s.ContextOffset#1/13 HalfReuse: >/16 } Tile{ ]] }
    if( ! refalrts::alloc_name( context[33], ref_gen_DoGenSubst_S36A1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( context[34], context[4] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[4] );
    refalrts::reinit_close_bracket( context[31] );
    refalrts::reinit_open_bracket( context[32] );
    refalrts::reinit_svar( context[1], context[13] );
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_svar( context[23], context[26] );
    refalrts::reinit_open_bracket( context[25] );
    refalrts::reinit_open_bracket( context[24] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_close_call( context[16] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[24], context[11] );
    refalrts::link_brackets( context[25], context[30] );
    refalrts::link_brackets( context[18], context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[32], context[12] );
    refalrts::link_brackets( context[29], context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[16] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[24], context[11] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[18], context[25] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    refalrts::splice_to_freelist_open( context[4], res );
    refalrts::wrap_closure( context[34] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // </0 & DoGenSubst/4 s.ContextOffset#1/13 (/16 # Junk/18 e.MarkedPattern#1/14 )/17 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern#1 as range 14
  // closed e.Vars#1 as range 9
  // closed e.Commands#1 as range 5
  //DEBUG: s.ContextOffset#1: 13
  //DEBUG: e.MarkedPattern#1: 14
  //DEBUG: e.Vars#1: 9
  //DEBUG: e.Commands#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.ContextOffset#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.ContextOffset1 #13/17 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.MarkedPattern#1/14 } )/19 Tile{ AsIs: (/16 Reuse: # CmdComment/18 } Tile{ AsIs: </0 Reuse: & TextFromExpr/4 } e.MarkedPattern#1/14/20 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Commands#1/5 } Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[20], context[21], context[14], context[15]))
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[17], context[13] );
  refalrts::update_ident( context[18], ident_CmdComment );
  refalrts::update_name( context[4], ref_TextFromExpr.ref.function );
  refalrts::link_brackets( context[16], context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[19] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[7] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoGenSubst("DoGenSubst", 2575990627U, 2269175587U, func_DoGenSubst);


static refalrts::FnResult func_IncVarOffsetm_Saved(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & IncVarOffset-Saved/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IncVarOffset-Saved/4 s.new#1/5 s.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IncVarOffset-Saved/4 s.ContextOffset#1/5 'e'/6 >/1
    if( ! refalrts::char_term( 'e', context[6] ) )
      continue;
    //DEBUG: s.ContextOffset#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset#1/5 HalfReuse: >/6 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Inc2.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & IncVarOffset-Saved/4 s.ContextOffset#1/5 't'/6 >/1
    if( ! refalrts::char_term( 't', context[6] ) )
      continue;
    //DEBUG: s.ContextOffset#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset#1/5 HalfReuse: >/6 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Inc2.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // </0 & IncVarOffset-Saved/4 s.ContextOffset#1/5 's'/6 >/1
  if( ! refalrts::char_term( 's', context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ContextOffset#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.ContextOffset#1/5 HalfReuse: >/6 } Tile{ ]] }
  refalrts::update_name( context[4], ref_Inc.ref.function );
  refalrts::reinit_close_call( context[6] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IncVarOffsetm_Saved("IncVarOffset-Saved", 2575990627U, 2269175587U, func_IncVarOffsetm_Saved);


static refalrts::FnResult func_MakeRepeatedSave(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MakeRepeatedSave/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeRepeatedSave/4 s.new#1/5 s.new#2/6 s.new#3/7 s.new#4/8 s.new#5/9 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & MakeRepeatedSave/4 s.Direction#1/5 s.Num#1/6 't'/7 s.ContextOffset#1/8 s.SampleOffset#1/9 >/1
    if( ! refalrts::char_term( 't', context[7] ) )
      continue;
    //DEBUG: s.Direction#1: 5
    //DEBUG: s.Num#1: 6
    //DEBUG: s.ContextOffset#1: 8
    //DEBUG: s.SampleOffset#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.ContextOffset#1/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdRepeatedTVarSave/4 AsIs: s.Direction#1/5 AsIs: s.Num#1/6 HalfReuse: s.ContextOffset1 #8/7 } Tile{ AsIs: s.SampleOffset#1/9 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdRepeatedTVarSave );
    refalrts::reinit_svar( context[7], context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // </0 & MakeRepeatedSave/4 s.Direction#1/5 s.Num#1/6 s.Mode#1/7 s.ContextOffset#1/8 s.SampleOffset#1/9 >/1
  //DEBUG: s.Direction#1: 5
  //DEBUG: s.Num#1: 6
  //DEBUG: s.Mode#1: 7
  //DEBUG: s.ContextOffset#1: 8
  //DEBUG: s.SampleOffset#1: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdRepeated/4 AsIs: s.Direction#1/5 AsIs: s.Num#1/6 AsIs: s.Mode#1/7 AsIs: s.ContextOffset#1/8 AsIs: s.SampleOffset#1/9 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_CmdRepeated );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeRepeatedSave("MakeRepeatedSave", 2575990627U, 2269175587U, func_MakeRepeatedSave);


//End of file
